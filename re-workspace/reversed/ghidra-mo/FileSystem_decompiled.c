
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001240(void)

{
  _DAT_18001df78 = FUN_180011720("Common");
  return;
}




undefined8 * FUN_180001260(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}




longlong FUN_180001270(uint *param_1,int param_2)

{
  return ((ulonglong)(param_2 - 2) << ((byte)param_1[1] & 0x3f)) + (ulonglong)*param_1;
}




void FUN_180001290(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_1800012a0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}




undefined8 *
FUN_1800012b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = IFSInterface::vftable;
  *param_1 = CExFatFs::vftable;
  puVar1 = (undefined8 *)operator_new(600);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = FUN_180002570(puVar1,param_2,param_3,param_4);
  }
  param_1[1] = puVar1;
  return param_1;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x1320  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x1320  2  ??0IObject@@QEAA@AEBU0@@Z
                       0x1320  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IStorageDevice::IStorageDevice(struct IStorageDevice && __ptr64) __ptr64 */

IStorageDevice * __thiscall
IStorageDevice::IStorageDevice(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x1330  4  ??0IStorageDevice@@QEAA@$$QEAU0@@Z
                       0x1330  5  ??0IStorageDevice@@QEAA@AEBU0@@Z
                       0x1330  6  ??0IStorageDevice@@QEAA@XZ */
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




void FUN_180001350(undefined8 *param_1)

{
  *param_1 = IFSInterface::vftable;
  return;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x1360  8  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x1360  9  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x1360  10  ??4CNTFSLib@@QEAAAEAV0@$$QEAV0@@Z
                       0x1360  11  ??4CNTFSLib@@QEAAAEAV0@AEBV0@@Z
                       0x1360  12  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x1360  13  ??4IObject@@QEAAAEAU0@AEBU0@@Z
                       0x1360  14  ??4IStorageDevice@@QEAAAEAU0@$$QEAU0@@Z
                       0x1360  15  ??4IStorageDevice@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




undefined8 * FUN_180001370(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CExFatFs::vftable;
  *param_1 = IFSInterface::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800013c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IFSInterface::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x13f0  19  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x0001800013f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




/* public: virtual int __cdecl IStorageDevice::ConvertVolume(void) __ptr64 */

int __thiscall IStorageDevice::ConvertVolume(IStorageDevice *this)

{
                    /* 0x1400  20  ?ConvertVolume@IStorageDevice@@UEAAHXZ
                       0x1400  21  ?DeviceIoControl@IStorageDevice@@UEAAHKPEAXK0KPEAK@Z
                       0x1400  22  ?GetBitlockerInfo@IStorageDevice@@UEAAPEAUBitlockerInfo@@XZ
                       0x1400  24  ?GetInformationOffset@IStorageDevice@@UEAAHQEA_K@Z
                       0x1400  26  ?IsBitlockerVolume@IStorageDevice@@UEAAHXZ
                       0x1400  29  ?SetBitlockerEnable@IStorageDevice@@UEAAHH@Z
                       0x1400  30  ?SetBitlockerInfo@IStorageDevice@@UEAAHPEAUBitlockerInfo@@@Z
                       0x1400  31  ?SetMetaFilePos@IStorageDevice@@UEAAHQEA_K_K@Z */
  return 0;
}




undefined8 FUN_180001410(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar1 = FUN_180002b70(*(longlong *)(param_1 + 8),param_2);
  return uVar1;
}




undefined8 FUN_180001430(longlong param_1,void *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar1 = FUN_180002bc0(*(longlong *)(param_1 + 8),param_2,param_3);
  return uVar1;
}




undefined8 FUN_180001450(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar1 = FUN_180003990(*(longlong *)(param_1 + 8),param_2,param_3);
  return uVar1;
}




/* public: virtual int __cdecl IStorageDevice::GetBitlockerStatus(void) __ptr64 */

int __thiscall IStorageDevice::GetBitlockerStatus(IStorageDevice *this)

{
                    /* 0x1470  23  ?GetBitlockerStatus@IStorageDevice@@UEAAHXZ */
  return -1;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1480  25  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180001483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




undefined8 FUN_180001490(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28);
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x14a0  27  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x0001800014a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




/* public: virtual void __cdecl IStorageDevice::ReleaseBitlocker(void) __ptr64 */

void __thiscall IStorageDevice::ReleaseBitlocker(IStorageDevice *this)

{
                    /* 0x14b0  28  ?ReleaseBitlocker@IStorageDevice@@UEAAXXZ */
  return;
}




void FUN_1800014c0(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  uVar3 = ((longlong)param_3 - (longlong)param_2) / 0x50;
  puVar5 = (undefined4 *)*param_1;
  uVar6 = (param_1[1] - (longlong)puVar5) / 0x50;
  uVar4 = (param_1[2] - (longlong)puVar5) / 0x50;
  if (uVar4 < uVar3) {
    if (0x333333333333333 < uVar3) {
      FUN_180004620();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = uVar3;
    if ((uVar4 <= 0x333333333333333 - (uVar4 >> 1)) && (uVar6 = (uVar4 >> 1) + uVar4, uVar6 < uVar3)
       ) {
      uVar6 = uVar3;
    }
    if (puVar5 != (undefined4 *)0x0) {
      FUN_1800042c0(param_1,(longlong)puVar5,param_1[1]);
      deallocate(param_1,(void *)*param_1,uVar4);
    }
    puVar5 = (undefined4 *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (uVar6 != 0) {
      if (0x333333333333333 < uVar6) {
        FUN_180004620();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar5 = (undefined4 *)FUN_180004be0(param_1,uVar6);
      *param_1 = (longlong)puVar5;
      param_1[1] = (longlong)puVar5;
      param_1[2] = (longlong)(puVar5 + uVar6 * 0x14);
    }
    puVar5 = FUN_180002110(param_1,(undefined4 *)param_2,(undefined4 *)param_3,puVar5);
    param_1[1] = (longlong)puVar5;
  }
  else if (uVar6 < uVar3) {
    FUN_1800017e0(param_2,param_2 + uVar6 * 10,puVar5);
    puVar5 = FUN_180002110(param_1,(undefined4 *)(param_2 + uVar6 * 10),(undefined4 *)param_3,
                           (undefined4 *)param_1[1]);
    param_1[1] = (longlong)puVar5;
  }
  else {
    FUN_1800017e0(param_2,param_3,puVar5);
    puVar1 = (undefined4 *)param_1[1];
    for (puVar7 = puVar5 + uVar3 * 0x14; puVar7 != puVar1; puVar7 = puVar7 + 0x14) {
      FUN_180004590((longlong *)(puVar7 + 0xc));
    }
    param_1[1] = (longlong)(puVar5 + uVar3 * 0x14);
  }
  return;
}




void FUN_1800016b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_180004230(param_1,param_2,param_3);
  *(undefined4 *)(lVar1 + 0x10) = *param_4;
  return;
}




longlong FUN_1800016e0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180004280(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_180002260(param_1,(longlong *)(lVar1 + 0x20),param_2);
  return lVar1;
}




longlong FUN_180001740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_180004280(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 0x20) = *param_2;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(lVar2 + 0x30) = param_2[2];
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x40) = param_2[4];
  *(undefined8 *)(lVar2 + 0x48) = param_2[5];
  *(undefined8 *)(lVar2 + 0x50) = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return lVar2;
}




undefined4 * FUN_1800017e0(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  
  if (param_1 != param_2) {
    lVar1 = (longlong)param_3 + (-0x24 - (longlong)param_1);
    lVar2 = (longlong)param_3 + (-0x18 - (longlong)param_1);
    lVar3 = (longlong)param_3 + (-0x10 - (longlong)param_1);
    lVar4 = (longlong)param_3 + (-0x3c - (longlong)param_1);
    lVar5 = (longlong)param_3 + (-0x3b - (longlong)param_1);
    lVar6 = (longlong)param_3 + (-0x38 - (longlong)param_1);
    lVar7 = (longlong)param_3 + (-0x34 - (longlong)param_1);
    lVar8 = (longlong)param_3 + (-0x2c - (longlong)param_1);
    puVar11 = param_1 + 8;
    do {
      *param_3 = (int)puVar11[-8];
      *(undefined1 *)(lVar4 + (longlong)puVar11) = *(undefined1 *)((longlong)puVar11 + -0x3c);
      *(undefined1 *)(lVar5 + (longlong)puVar11) = *(undefined1 *)((longlong)puVar11 + -0x3b);
      *(int *)(lVar6 + (longlong)puVar11) = (int)puVar11[-7];
      *(undefined8 *)((longlong)puVar11 + lVar7) = *(undefined8 *)((longlong)puVar11 + -0x34);
      *(undefined8 *)((longlong)puVar11 + lVar8) = *(undefined8 *)((longlong)puVar11 + -0x2c);
      *(undefined8 *)(lVar1 + (longlong)puVar11) = *(undefined8 *)((longlong)puVar11 + -0x24);
      puVar9 = (ulonglong *)(lVar3 + (longlong)puVar11);
      *(ulonglong *)(lVar2 + (longlong)puVar11) = puVar11[-3];
      puVar10 = puVar11 + -2;
      if (puVar9 != puVar10) {
        if (7 < puVar11[1]) {
          puVar10 = (ulonglong *)*puVar10;
        }
        FUN_180004e30((longlong *)puVar9,puVar10,*puVar11);
      }
      param_3 = param_3 + 0x14;
      puVar10 = puVar11 + 2;
      puVar11 = puVar11 + 10;
    } while (puVar10 != param_2);
  }
  return param_3;
}




undefined4 * FUN_180001900(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  
  lVar2 = *param_1;
  lVar4 = (param_1[1] - lVar2) / 0x50;
  if (lVar4 == 0x333333333333333) {
    FUN_180004620();
    pcVar3 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar3)();
    return puVar7;
  }
  uVar1 = lVar4 + 1;
  uVar5 = (param_1[2] - lVar2) / 0x50;
  uVar12 = uVar1;
  if ((uVar5 <= 0x333333333333333 - (uVar5 >> 1)) && (uVar12 = (uVar5 >> 1) + uVar5, uVar12 < uVar1)
     ) {
    uVar12 = uVar1;
  }
  puVar6 = (undefined4 *)FUN_180004be0(param_1,uVar12);
  puVar13 = puVar6 + (((longlong)param_2 - lVar2) / 0x50) * 0x14;
  FUN_180002600(puVar13,param_3);
  puVar9 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  puVar7 = puVar6;
  if (param_2 != puVar9) {
    FUN_180002190((undefined8 *)*param_1,param_2,puVar6);
    puVar9 = (undefined8 *)param_1[1];
    puVar8 = param_2;
    puVar7 = puVar13 + 0x14;
  }
  FUN_180002190(puVar8,puVar9,puVar7);
  pvVar10 = (void *)*param_1;
  if (pvVar10 != (void *)0x0) {
    pvVar11 = (void *)param_1[1];
    if (pvVar10 != pvVar11) {
      do {
        FUN_180004590((longlong *)((longlong)pvVar10 + 0x30));
        pvVar10 = (void *)((longlong)pvVar10 + 0x50);
      } while (pvVar10 != pvVar11);
      pvVar10 = (void *)*param_1;
    }
    pvVar11 = pvVar10;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar10) / 0x50) * 0x50)) &&
       (pvVar11 = *(void **)((longlong)pvVar10 + -8),
       0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar11);
  }
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar6 + uVar1 * 0x14);
  param_1[2] = (longlong)(puVar6 + uVar12 * 0x14);
  return puVar13;
}




undefined8 *
FUN_180001b20(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_180004310(param_1,param_6);
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
      goto LAB_180001b9f;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_180001b9f;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_180001b9f:
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
        goto LAB_180001d45;
      }
LAB_180001cb6:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_180001cb6;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180004400(param_1,plVar2);
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
LAB_180001d45:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180001da0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             longlong *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0xfffffffffffffffe;
  uVar5 = 1;
  plVar3 = (longlong *)((longlong *)*param_1)[1];
  plVar4 = (longlong *)*param_1;
  while (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    if (param_3 == '\0') {
      uVar1 = FUN_1800050a0(param_4,plVar3 + 4);
    }
    else {
      uVar1 = FUN_1800050a0(plVar3 + 4,param_4);
      uVar1 = ~uVar1;
    }
    uVar5 = uVar1 >> 0x1f;
    plVar4 = plVar3;
    if ((int)uVar1 < 0) {
      plVar3 = (longlong *)*plVar3;
    }
    else {
      plVar3 = (longlong *)plVar3[2];
    }
  }
  local_48 = plVar4;
  if ((char)uVar5 != '\0') {
    if (plVar4 == *(longlong **)*param_1) {
      puVar2 = FUN_180001b20(param_1,&local_48,'\x01',plVar4,param_4,param_5);
      *param_2 = *puVar2;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    FUN_180002a00((longlong *)&local_48);
  }
  plVar3 = local_48;
  uVar1 = FUN_1800050a0(local_48 + 4,param_4);
  if ((int)uVar1 < 0) {
    puVar2 = FUN_180001b20(param_1,&local_48,(char)uVar5,plVar4,param_4,param_5);
    *param_2 = *puVar2;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_48 = param_5 + 4;
    FUN_1800044c0(param_5 + 8);
    FUN_1800027e0(param_5 + 4);
    local_38 = 0x58;
    free(param_5);
    *param_2 = plVar3;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 *
FUN_180001f30(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,size_t param_5)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Src;
  code *pcVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Dst;
  
  _Size = param_1[2];
  if (0x7fffffffffffffff - _Size < param_2) {
    FUN_180004600();
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar2)();
    return puVar4;
  }
  uVar1 = param_1[3];
  uVar5 = _Size + param_2 | 0xf;
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
    if (pvVar3 == (void *)0x0) goto LAB_18000205d;
    _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar3;
  }
  param_1[2] = _Size + param_2;
  pvVar3 = (void *)((longlong)_Dst + _Size);
  param_1[3] = uVar7;
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memcpy(pvVar3,param_4,param_5);
    *(undefined1 *)((longlong)pvVar3 + param_5) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    memcpy(pvVar3,param_4,param_5);
    *(undefined1 *)((longlong)pvVar3 + param_5) = 0;
    pvVar3 = _Src;
    if ((0xfff < uVar1 + 1) &&
       (pvVar3 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar3)))) {
LAB_18000205d:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
  }
  *param_1 = _Dst;
  return param_1;
}




uint FUN_1800020b0(void *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong _Size;
  
  _Size = param_2;
  if (param_4 < param_2) {
    _Size = param_4;
  }
  uVar1 = memcmp(param_1,param_3,_Size);
  if (uVar1 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(param_4 < param_2);
  }
  return uVar1;
}




undefined4 *
FUN_180002110(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != param_3) {
    do {
      FUN_180002600(param_4,param_2);
      param_4 = param_4 + 0x14;
      param_2 = param_2 + 0x14;
    } while (param_2 != param_3);
  }
  return param_4;
}




undefined4 * FUN_180002190(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 9;
    do {
      *param_3 = *(undefined4 *)(puVar3 + -9);
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)((longlong)puVar3 + -0x44);
      *(undefined1 *)((longlong)param_3 + 5) = *(undefined1 *)((longlong)puVar3 + -0x43);
      param_3[2] = *(undefined4 *)(puVar3 + -8);
      *(undefined8 *)(param_3 + 3) = *(undefined8 *)((longlong)puVar3 + -0x3c);
      *(undefined8 *)(param_3 + 5) = *(undefined8 *)((longlong)puVar3 + -0x34);
      *(undefined8 *)(param_3 + 7) = *(undefined8 *)((longlong)puVar3 + -0x2c);
      *(undefined8 *)(param_3 + 10) = puVar3[-4];
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined8 *)(param_3 + 0x12) = 0;
      uVar2 = puVar3[-2];
      *(undefined8 *)(param_3 + 0xc) = puVar3[-3];
      *(undefined8 *)(param_3 + 0xe) = uVar2;
      uVar2 = *puVar3;
      *(undefined8 *)(param_3 + 0x10) = puVar3[-1];
      *(undefined8 *)(param_3 + 0x12) = uVar2;
      puVar3[-1] = 0;
      *puVar3 = 7;
      *(undefined2 *)(puVar3 + -3) = 0;
      param_3 = param_3 + 0x14;
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 10;
    } while (puVar1 != param_2);
  }
  return param_3;
}




void FUN_180002260(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  void *pvVar1;
  size_t sVar2;
  
  pvVar1 = (void *)*param_3;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  sVar2 = 0xffffffffffffffff;
  do {
    sVar2 = sVar2 + 1;
  } while (*(char *)((longlong)pvVar1 + sVar2) != '\0');
  FUN_180004ce0(param_2,pvVar1,sVar2);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = param_3[1];
  param_2[5] = param_3[2];
  param_2[6] = param_3[3];
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  return;
}




undefined8 * FUN_180002300(undefined8 *param_1,undefined8 *param_2)

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




ulonglong * FUN_1800023e0(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x7fffffffffffffff < param_2) {
      FUN_180004620();
      pcVar1 = (code *)swi(3);
      puVar4 = (ulonglong *)(*pcVar1)();
      return puVar4;
    }
    if (param_2 < 0x1000) {
      pvVar3 = operator_new(param_2);
    }
    else {
      uVar5 = param_2 + 0x27;
      if (uVar5 <= param_2) {
        uVar5 = 0xffffffffffffffff;
      }
      pvVar2 = operator_new(uVar5);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 - 8) = pvVar2;
    }
    *param_1 = (ulonglong)pvVar3;
    param_1[1] = (ulonglong)pvVar3;
    param_1[2] = (longlong)pvVar3 + param_2;
    pvVar3 = (void *)*param_1;
    memset(pvVar3,0,param_2);
    param_1[1] = (longlong)pvVar3 + param_2;
  }
  return param_1;
}




longlong * FUN_1800024b0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = (param_2[1] - *param_2) / 0x50;
  if (uVar2 != 0) {
    if (0x333333333333333 < uVar2) {
      FUN_180004620();
      pcVar1 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar1)();
      return plVar5;
    }
    lVar3 = FUN_180004be0(param_1,uVar2);
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = uVar2 * 0x50 + lVar3;
    puVar4 = FUN_180002110(param_1,(undefined4 *)*param_2,(undefined4 *)param_2[1],
                           (undefined4 *)*param_1);
    param_1[1] = (longlong)puVar4;
  }
  return param_1;
}




undefined8 *
FUN_180002570(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = CExFatPartition::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = FUN_1800041f0();
  param_1[8] = uVar1;
  FUN_180001260(param_1 + 0x4a);
  FUN_180003b30((longlong)param_1,param_2,param_3,param_4);
  return param_1;
}




undefined4 * FUN_180002600(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  void *_Dst;
  ulonglong uVar3;
  undefined8 *_Src;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)((longlong)param_2 + 5);
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  _Src = (undefined8 *)(param_2 + 0xc);
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if (7 < *(ulonglong *)(param_2 + 0x12)) {
    _Src = (undefined8 *)*_Src;
  }
  if (uVar1 < 8) {
    uVar2 = _Src[1];
    *(undefined8 *)(param_1 + 0xc) = *_Src;
    *(undefined8 *)(param_1 + 0xe) = uVar2;
    *(ulonglong *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x12) = 7;
  }
  else {
    uVar3 = uVar1 | 7;
    if (0x7ffffffffffffffe < uVar3) {
      uVar3 = 0x7ffffffffffffffe;
    }
    _Dst = (void *)FUN_180004c60(param_1 + 0xc,uVar3 + 1);
    *(void **)(param_1 + 0xc) = _Dst;
    memcpy(_Dst,_Src,uVar1 * 2 + 2);
    *(ulonglong *)(param_1 + 0x10) = uVar1;
    *(ulonglong *)(param_1 + 0x12) = uVar3;
  }
  return param_1;
}




void FUN_1800026f0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180002710(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180002740(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004f60(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_180002770(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180002790(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_180004590((longlong *)(lVar2 + 0x30));
  }
  return;
}




void FUN_1800027e0(longlong *param_1)

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




void FUN_180002850(longlong *param_1)

{
  FUN_180004590(param_1);
  return;
}




void FUN_180002870(longlong *param_1)

{
  FUN_180004fb0(param_1);
  free((void *)*param_1);
  return;
}




void FUN_1800028d0(longlong param_1)

{
  FUN_1800044c0((longlong *)(param_1 + 8));
  return;
}




void FUN_180002900(longlong *param_1)

{
  FUN_1800044c0(param_1 + 4);
  FUN_1800027e0(param_1);
  return;
}




void FUN_180002930(longlong *param_1)

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




void FUN_1800029a0(longlong *param_1)

{
  FUN_1800044c0(param_1);
  return;
}




void FUN_1800029c0(longlong param_1)

{
  FUN_180004590((longlong *)(param_1 + 0x30));
  return;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  undefined8 uVar1;
  
                    /* 0x29f0  7  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}




longlong * FUN_180002a00(longlong *param_1)

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




undefined8 * FUN_180002a90(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = CExFatPartition::vftable;
  plVar1 = param_1 + 8;
  lVar2 = *plVar1;
  plVar3 = *(longlong **)(lVar2 + 8);
  FUN_180004360(plVar1,plVar3,param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  param_1[9] = 0;
  FUN_180004f60(plVar1,plVar3,param_3,param_4);
  free((void *)*plVar1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180002b40(undefined *param_1,undefined8 param_2)

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




undefined8 FUN_180002b70(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    FUN_180005020(param_2);
    *(undefined4 *)(param_2 + 3) = 0;
    FUN_1800044c0(param_2);
    free(param_2);
  }
  return 1;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180002bc0(longlong param_1,void *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong lVar12;
  undefined8 *******pppppppuVar14;
  ulonglong *puVar15;
  short *psVar16;
  undefined8 *******pppppppuVar17;
  ulonglong **ppuVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  ulonglong **ppuVar22;
  undefined1 *puVar23;
  ulonglong **ppuVar24;
  ulonglong *puVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  void *pvVar29;
  size_t sVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  ulonglong *puVar33;
  ulonglong **ppuVar34;
  size_t _Size;
  char *pcVar35;
  undefined1 auStackY_ae8 [32];
  ulonglong **local_aa8;
  ulonglong **local_aa0;
  ulonglong **local_a90 [2];
  char *local_a80;
  void *local_a78;
  ulonglong *local_a70;
  ulonglong *puStack_a68;
  undefined8 local_a60;
  undefined4 *local_a58;
  longlong local_a50;
  undefined8 uStack_a48;
  undefined8 local_a40;
  undefined1 *local_a38;
  longlong local_a30 [3];
  undefined8 local_a18;
  undefined8 *******local_a10;
  undefined8 uStack_a08;
  ulonglong local_a00;
  ulonglong uStack_9f8;
  longlong local_9f0 [2];
  ulonglong *local_9e0;
  ulonglong *local_9d8;
  longlong local_9d0 [3];
  longlong local_9b8 [2];
  ulonglong local_9a8;
  ulonglong local_9a0;
  uint local_998;
  undefined1 local_994;
  undefined1 local_993;
  uint local_990;
  undefined8 local_98c;
  undefined8 local_984;
  undefined8 local_97c;
  ulonglong *local_970;
  undefined8 *******local_968;
  ulonglong *puStack_960;
  ulonglong *local_958;
  ulonglong local_950;
  uint local_948 [2];
  undefined4 local_940;
  undefined8 local_93c;
  undefined8 local_934;
  undefined8 local_92c;
  undefined8 local_920;
  undefined8 *******local_918 [2];
  undefined4 local_908;
  ulonglong local_900;
  longlong local_8f8 [4];
  longlong local_8d8 [4];
  char local_8b8 [112];
  short local_848 [512];
  char local_448 [1024];
  ulonglong local_48;
  longlong lVar13;
  
  local_a18 = 0xfffffffffffffffe;
  local_48 = DAT_18001d018 ^ (ulonglong)auStackY_ae8;
  local_9a8 = 0;
  local_9a0 = 0xf;
  local_9b8[0]._0_1_ = '\0';
  local_a78 = param_2;
  local_a58 = param_3;
  FUN_180004ce0(local_9b8,&DAT_180015bf0,1);
  if (param_2 != (void *)0x0) {
    sVar30 = 0xffffffffffffffff;
    do {
      sVar30 = sVar30 + 1;
    } while (*(char *)((longlong)param_2 + sVar30) != '\0');
    FUN_180004ce0(local_9b8,param_2,sVar30);
  }
  local_a90[0] = (ulonglong **)operator_new(0x20);
  uVar28 = local_9a0;
  uVar27 = local_9a8;
  if (local_a90[0] == (ulonglong **)0x0) {
    local_aa8 = (ulonglong **)0x0;
  }
  else {
    *local_a90[0] = (ulonglong *)0x0;
    local_a90[0][1] = (ulonglong *)0x0;
    local_a90[0][2] = (ulonglong *)0x0;
    *(uint *)(local_a90[0] + 3) = 0;
    local_aa8 = local_a90[0];
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  puVar3 = (undefined8 *)*plVar1;
  pcVar35 = (char *)CONCAT71(local_9b8[0]._1_7_,(char)local_9b8[0]);
  cVar2 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar26 = puVar3;
  puVar21 = (undefined8 *)puVar3[1];
  while (cVar2 == '\0') {
    pcVar11 = (char *)local_9b8;
    if (0xf < uVar28) {
      pcVar11 = pcVar35;
    }
    puVar19 = puVar21 + 4;
    if (0xf < (ulonglong)puVar21[7]) {
      puVar19 = (undefined8 *)puVar21[4];
    }
    uVar4 = puVar21[6];
    uVar31 = uVar4;
    if (uVar27 < uVar4) {
      uVar31 = uVar27;
    }
    iVar8 = memcmp(puVar19,pcVar11,uVar31);
    if (iVar8 == 0) {
      if (uVar4 < uVar27) goto LAB_180002d91;
LAB_180002cff:
      puVar19 = (undefined8 *)*puVar21;
      puVar26 = puVar21;
    }
    else {
      if (-1 < iVar8) goto LAB_180002cff;
LAB_180002d91:
      puVar19 = (undefined8 *)puVar21[2];
    }
    puVar21 = puVar19;
    cVar2 = *(char *)((longlong)puVar19 + 0x19);
  }
  if (puVar26 == puVar3) {
LAB_180002d51:
    puVar26 = puVar3;
  }
  else {
    puVar21 = puVar26 + 4;
    if (0xf < (ulonglong)puVar26[7]) {
      puVar21 = (undefined8 *)puVar26[4];
    }
    pcVar11 = (char *)local_9b8;
    if (0xf < uVar28) {
      pcVar11 = pcVar35;
    }
    uVar4 = puVar26[6];
    uVar31 = uVar27;
    if (uVar4 < uVar27) {
      uVar31 = uVar4;
    }
    iVar8 = memcmp(pcVar11,puVar21,uVar31);
    if (iVar8 == 0) {
      if (uVar27 < uVar4) goto LAB_180002d51;
      iVar8 = 0;
      if (uVar27 <= uVar4) goto LAB_180002d4f;
    }
    else {
LAB_180002d4f:
      if (iVar8 < 0) goto LAB_180002d51;
    }
  }
  if (puVar26 == puVar3) {
    pcVar11 = (char *)local_9b8;
    if (0xf < uVar28) {
      pcVar11 = pcVar35;
    }
    if ((uVar27 != 1) || (*pcVar11 != '\\')) {
      local_a00 = 0;
      uStack_9f8 = 0xf;
      local_a10 = (undefined8 *******)((ulonglong)local_a10 & 0xffffffffffffff00);
      FUN_180004ce0((longlong *)&local_a10,&DAT_180015bf0,1);
      uVar28 = uStack_9f8;
      uVar27 = local_a00;
      pppppppuVar14 = local_a10;
      puVar3 = (undefined8 *)*plVar1;
      cVar2 = *(char *)((longlong)puVar3[1] + 0x19);
      puVar26 = puVar3;
      puVar21 = (undefined8 *)puVar3[1];
      while (cVar2 == '\0') {
        pppppppuVar17 = &local_a10;
        if (0xf < uVar28) {
          pppppppuVar17 = pppppppuVar14;
        }
        puVar19 = puVar21 + 4;
        if (0xf < (ulonglong)puVar21[7]) {
          puVar19 = (undefined8 *)puVar21[4];
        }
        uVar4 = puVar21[6];
        uVar31 = uVar4;
        if (uVar27 < uVar4) {
          uVar31 = uVar27;
        }
        iVar8 = memcmp(puVar19,pppppppuVar17,uVar31);
        if (iVar8 == 0) {
          if (uVar4 < uVar27) goto LAB_180002fad;
LAB_180002f1f:
          puVar19 = (undefined8 *)*puVar21;
          puVar26 = puVar21;
        }
        else {
          if (-1 < iVar8) goto LAB_180002f1f;
LAB_180002fad:
          puVar19 = (undefined8 *)puVar21[2];
        }
        puVar21 = puVar19;
        cVar2 = *(char *)((longlong)puVar19 + 0x19);
      }
      if (puVar26 == puVar3) {
LAB_180002f72:
        puVar26 = puVar3;
      }
      else {
        puVar21 = puVar26 + 4;
        if (0xf < (ulonglong)puVar26[7]) {
          puVar21 = (undefined8 *)puVar26[4];
        }
        pppppppuVar17 = &local_a10;
        if (0xf < uVar28) {
          pppppppuVar17 = pppppppuVar14;
        }
        uVar4 = puVar26[6];
        uVar31 = uVar27;
        if (uVar4 < uVar27) {
          uVar31 = uVar4;
        }
        iVar8 = memcmp(pppppppuVar17,puVar21,uVar31);
        if (iVar8 == 0) {
          if (uVar27 < uVar4) goto LAB_180002f72;
          if (uVar27 <= uVar4) goto LAB_180002f70;
        }
        else {
LAB_180002f70:
          if (iVar8 < 0) goto LAB_180002f72;
        }
      }
      if (0xf < uVar28) {
        pppppppuVar17 = pppppppuVar14;
        if ((0xfff < uVar28 + 1) &&
           (pppppppuVar17 = (undefined8 *******)pppppppuVar14[-1],
           0x1f < (ulonglong)((longlong)pppppppuVar14 + (-8 - (longlong)pppppppuVar17)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pppppppuVar17);
      }
      local_a00 = 0;
      uStack_9f8 = 0xf;
      local_a10 = (undefined8 *******)((ulonglong)local_a10 & 0xffffffffffffff00);
      if (puVar26 == (undefined8 *)*plVar1) {
        local_a50 = 0;
        uStack_a48 = 0;
        local_a40 = 0;
        FUN_180003e20(param_1,*(uint *)(param_1 + 0xb0),&local_a50);
        local_a38 = &DAT_180015bf0;
        FUN_1800024b0(local_a30,&local_a50);
        plVar10 = (longlong *)FUN_1800016e0(plVar1,&local_a38);
        FUN_180001da0(plVar1,local_a90,'\0',plVar10 + 4,plVar10);
        FUN_1800044c0(local_a30);
        local_a00 = 0;
        uStack_9f8 = 0xf;
        local_a10 = (undefined8 *******)((ulonglong)local_a10 & 0xffffffffffffff00);
        FUN_180004ce0((longlong *)&local_a10,&DAT_180015bf0,1);
        uVar28 = uStack_9f8;
        uVar27 = local_a00;
        pppppppuVar14 = local_a10;
        puVar3 = (undefined8 *)*plVar1;
        cVar2 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar26 = puVar3;
        puVar21 = (undefined8 *)puVar3[1];
        while (cVar2 == '\0') {
          pppppppuVar17 = &local_a10;
          if (0xf < uVar28) {
            pppppppuVar17 = pppppppuVar14;
          }
          puVar19 = puVar21 + 4;
          if (0xf < (ulonglong)puVar21[7]) {
            puVar19 = (undefined8 *)puVar21[4];
          }
          uVar4 = puVar21[6];
          uVar31 = uVar4;
          if (uVar27 < uVar4) {
            uVar31 = uVar27;
          }
          iVar8 = memcmp(puVar19,pppppppuVar17,uVar31);
          if (iVar8 == 0) {
            if (uVar4 < uVar27) goto LAB_18000317d;
LAB_1800030ef:
            puVar19 = (undefined8 *)*puVar21;
            puVar26 = puVar21;
          }
          else {
            if (-1 < iVar8) goto LAB_1800030ef;
LAB_18000317d:
            puVar19 = (undefined8 *)puVar21[2];
          }
          puVar21 = puVar19;
          cVar2 = *(char *)((longlong)puVar19 + 0x19);
        }
        if (puVar26 == puVar3) {
LAB_180003142:
          puVar26 = puVar3;
        }
        else {
          puVar21 = puVar26 + 4;
          if (0xf < (ulonglong)puVar26[7]) {
            puVar21 = (undefined8 *)puVar26[4];
          }
          pppppppuVar17 = &local_a10;
          if (0xf < uVar28) {
            pppppppuVar17 = pppppppuVar14;
          }
          uVar4 = puVar26[6];
          uVar31 = uVar27;
          if (uVar4 < uVar27) {
            uVar31 = uVar4;
          }
          iVar8 = memcmp(pppppppuVar17,puVar21,uVar31);
          if (iVar8 == 0) {
            if (uVar27 < uVar4) goto LAB_180003142;
            if (uVar27 <= uVar4) goto LAB_180003140;
          }
          else {
LAB_180003140:
            if (iVar8 < 0) goto LAB_180003142;
          }
        }
        if (0xf < uVar28) {
          pppppppuVar17 = pppppppuVar14;
          if ((0xfff < uVar28 + 1) &&
             (pppppppuVar17 = (undefined8 *******)pppppppuVar14[-1],
             0x1f < (ulonglong)((longlong)pppppppuVar14 + (-8 - (longlong)pppppppuVar17)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pppppppuVar17);
        }
        local_a00 = 0;
        uStack_9f8 = 0xf;
        local_a10 = (undefined8 *******)((ulonglong)local_a10 & 0xffffffffffffff00);
        if (puVar26 == (undefined8 *)*plVar1) {
          FUN_1800044c0(&local_a50);
          goto LAB_18000394d;
        }
        FUN_1800044c0(&local_a50);
      }
      local_9e0 = (ulonglong *)0x0;
      local_9d8 = (ulonglong *)0xf;
      local_9f0[0]._0_1_ = 0;
      FUN_180004ce0(local_9f0,&DAT_180015bf0,1);
      pvVar29 = local_a78;
      local_aa0 = (ulonglong **)(puVar26 + 8);
      pcVar35 = (char *)((longlong)local_a78 + 1);
      pcVar11 = strchr(pcVar35,0x5c);
      local_a80 = pcVar11;
      if (pcVar11 != (char *)0x0) {
LAB_180003220:
        local_a80 = pcVar11;
        memset(local_848,0,0x400);
        (**(code **)(*DAT_18001d660 + 0x60))
                  (DAT_18001d660,pcVar35,(int)pcVar11 - (int)pcVar35,local_848);
        memset(local_8b8,0,100);
        strncpy(local_8b8,pcVar35,(longlong)pcVar11 - (longlong)pcVar35);
        uVar27 = 0xffffffffffffffff;
        do {
          uVar28 = uVar27 + 1;
          lVar13 = uVar27 + 1;
          uVar27 = uVar28;
        } while (local_8b8[lVar13] != '\0');
        if ((ulonglong)((longlong)local_9d8 - (longlong)local_9e0) < uVar28) {
          FUN_180001f30(local_9f0,uVar28,0,local_8b8,uVar28);
        }
        else {
          puVar23 = (undefined1 *)local_9f0;
          if ((ulonglong *)0xf < local_9d8) {
            puVar23 = (undefined1 *)CONCAT71(local_9f0[0]._1_7_,(undefined1)local_9f0[0]);
          }
          puVar23 = puVar23 + (longlong)local_9e0;
          local_9e0 = (ulonglong *)((longlong)local_9e0 + uVar28);
          memmove(puVar23,local_8b8,uVar28);
          puVar23[uVar28] = 0;
        }
        if (local_9d8 == local_9e0) {
          FUN_180001f30(local_9f0,1,0,&DAT_180015bf0,1);
        }
        else {
          puVar23 = (undefined1 *)local_9f0;
          if ((ulonglong *)0xf < local_9d8) {
            puVar23 = (undefined1 *)CONCAT71(local_9f0[0]._1_7_,(undefined1)local_9f0[0]);
          }
          puVar23 = puVar23 + (longlong)local_9e0;
          local_9e0 = (ulonglong *)((longlong)local_9e0 + 1);
          memmove(puVar23,&DAT_180015bf0,1);
          puVar23[1] = 0;
        }
        puVar15 = local_9d8;
        puVar25 = local_9e0;
        ppuVar34 = (ulonglong **)*plVar1;
        puVar23 = (undefined1 *)CONCAT71(local_9f0[0]._1_7_,(undefined1)local_9f0[0]);
        cVar2 = *(char *)((longlong)ppuVar34[1] + 0x19);
        ppuVar18 = ppuVar34;
        ppuVar22 = (ulonglong **)ppuVar34[1];
        while (local_a90[0] = ppuVar18, cVar2 == '\0') {
          puVar20 = (undefined1 *)local_9f0;
          if ((ulonglong *)0xf < puVar15) {
            puVar20 = puVar23;
          }
          ppuVar18 = ppuVar22 + 4;
          if ((ulonglong *)0xf < ppuVar22[7]) {
            ppuVar18 = (ulonglong **)ppuVar22[4];
          }
          puVar32 = ppuVar22[6];
          puVar33 = puVar32;
          if (puVar25 < puVar32) {
            puVar33 = puVar25;
          }
          iVar8 = memcmp(ppuVar18,puVar20,(size_t)puVar33);
          if (iVar8 == 0) {
            if (puVar32 < puVar25) goto LAB_180003435;
LAB_1800033af:
            ppuVar24 = (ulonglong **)*ppuVar22;
            ppuVar34 = ppuVar22;
          }
          else {
            if (-1 < iVar8) goto LAB_1800033af;
LAB_180003435:
            ppuVar24 = (ulonglong **)ppuVar22[2];
          }
          ppuVar18 = local_a90[0];
          ppuVar22 = ppuVar24;
          cVar2 = *(char *)((longlong)ppuVar24 + 0x19);
        }
        if (ppuVar34 == ppuVar18) {
LAB_18000343e:
          ppuVar34 = (ulonglong **)*local_aa0;
          local_a90[0] = (ulonglong **)local_aa0[1];
          pcVar35 = local_a80;
          ppuVar18 = local_aa0;
          if (ppuVar34 != local_a90[0]) {
            ppuVar22 = ppuVar34 + 9;
            do {
              uVar9 = *(uint *)ppuVar34;
              local_998 = uVar9;
              local_994 = *(undefined1 *)((longlong)ppuVar22 + -0x44);
              local_993 = *(undefined1 *)((longlong)ppuVar22 + -0x43);
              local_990 = *(uint *)(ppuVar22 + -8);
              local_98c = *(undefined8 *)((longlong)ppuVar22 + -0x3c);
              local_984 = *(undefined8 *)((longlong)ppuVar22 + -0x34);
              local_97c = *(undefined8 *)((longlong)ppuVar22 + -0x2c);
              local_970 = ppuVar22[-4];
              local_958 = (ulonglong *)0x0;
              local_950 = 0;
              puVar25 = ppuVar22[-1];
              ppuVar24 = ppuVar22 + -3;
              if ((ulonglong *)0x7 < *ppuVar22) {
                ppuVar24 = (ulonglong **)*ppuVar24;
              }
              if (puVar25 < (ulonglong *)0x8) {
                pppppppuVar14 = (undefined8 *******)*ppuVar24;
                local_968 = pppppppuVar14;
                puStack_960 = ppuVar24[1];
                local_950 = 7;
              }
              else {
                uVar27 = (ulonglong)puVar25 | 7;
                if (0x7ffffffffffffffe < uVar27) {
                  uVar27 = 0x7ffffffffffffffe;
                }
                pppppppuVar14 = (undefined8 *******)FUN_180004c60(&local_968,uVar27 + 1);
                local_968 = pppppppuVar14;
                memcpy(pppppppuVar14,ppuVar24,(longlong)puVar25 * 2 + 2);
                local_950 = uVar27;
              }
              local_958 = puVar25;
              puVar15 = (ulonglong *)0xffffffffffffffff;
              do {
                puVar15 = (ulonglong *)((longlong)puVar15 + 1);
              } while (local_848[(longlong)puVar15] != 0);
              pppppppuVar17 = &local_968;
              if (7 < local_950) {
                pppppppuVar17 = pppppppuVar14;
              }
              if (puVar25 == puVar15) {
                psVar16 = local_848;
                if (puVar25 != (ulonglong *)0x0) {
                  do {
                    if (*(short *)((longlong)psVar16 +
                                  ((longlong)pppppppuVar17 - (longlong)local_848)) != *psVar16)
                    goto LAB_18000359b;
                    psVar16 = psVar16 + 1;
                    puVar25 = (ulonglong *)((longlong)puVar25 - 1);
                  } while (puVar25 != (ulonglong *)0x0);
                }
                bVar5 = true;
              }
              else {
LAB_18000359b:
                bVar5 = false;
              }
              if (bVar5) {
                local_a10 = (undefined8 *******)0x0;
                uStack_a08 = 0;
                local_a00 = 0;
                FUN_180003e20(param_1,uVar9,(longlong *)&local_a10);
                FUN_180002300(local_8f8,local_9f0);
                FUN_1800024b0(local_8d8,(longlong *)&local_a10);
                plVar10 = (longlong *)FUN_180001740(plVar1,local_8f8);
                FUN_180001da0(plVar1,&local_a38,'\0',plVar10 + 4,plVar10);
                FUN_1800044c0(local_8d8);
                FUN_1800027e0(local_8f8);
                puVar15 = local_9d8;
                puVar25 = local_9e0;
                puVar3 = (undefined8 *)*plVar1;
                puVar26 = (undefined8 *)puVar3[1];
                puVar23 = (undefined1 *)CONCAT71(local_9f0[0]._1_7_,(undefined1)local_9f0[0]);
                puVar21 = puVar3;
                if (*(char *)((longlong)puVar26 + 0x19) != '\0') goto LAB_1800036cb;
                goto LAB_180003680;
              }
              FUN_180004590((longlong *)&local_968);
              ppuVar34 = ppuVar34 + 10;
              ppuVar22 = ppuVar22 + 10;
              pcVar35 = local_a80;
            } while (ppuVar34 != local_a90[0]);
          }
        }
        else {
          ppuVar22 = ppuVar34 + 4;
          if ((ulonglong *)0xf < ppuVar34[7]) {
            ppuVar22 = (ulonglong **)ppuVar34[4];
          }
          puVar20 = (undefined1 *)local_9f0;
          if ((ulonglong *)0xf < puVar15) {
            puVar20 = puVar23;
          }
          puVar15 = ppuVar34[6];
          puVar32 = puVar25;
          if (puVar15 < puVar25) {
            puVar32 = puVar15;
          }
          iVar8 = memcmp(puVar20,ppuVar22,(size_t)puVar32);
          if (iVar8 == 0) {
            if (puVar15 <= puVar25) {
              if (puVar25 <= puVar15) goto LAB_180003400;
              goto LAB_180003402;
            }
            goto LAB_18000343e;
          }
LAB_180003400:
          if (iVar8 < 0) goto LAB_18000343e;
LAB_180003402:
          if (ppuVar34 == ppuVar18) goto LAB_18000343e;
          lVar13 = -1;
          do {
            lVar12 = lVar13 + 1;
            lVar6 = lVar13 + 1;
            lVar13 = lVar12;
          } while (local_8b8[lVar6] != '\0');
          pcVar35 = pcVar35 + lVar12;
          ppuVar18 = ppuVar34 + 8;
        }
        goto LAB_18000372b;
      }
      goto LAB_180003762;
    }
    local_a70 = (ulonglong *)0x0;
    puStack_a68 = (ulonglong *)0x0;
    local_a60 = 0;
    FUN_180003e20(param_1,*(uint *)(param_1 + 0xb0),(longlong *)&local_a70);
    FUN_180002300(local_9f0,local_9b8);
    FUN_1800024b0(local_9d0,(longlong *)&local_a70);
    plVar10 = (longlong *)FUN_180001740(plVar1,local_9f0);
    FUN_180001da0(plVar1,local_a90,'\0',plVar10 + 4,plVar10);
    FUN_1800044c0(local_9d0);
    FUN_1800027e0(local_9f0);
    if (local_aa8 != &local_a70) {
      FUN_1800014c0((longlong *)local_aa8,local_a70,puStack_a68);
    }
    *(uint *)(local_aa8 + 3) = 0;
    FUN_1800044c0((longlong *)&local_a70);
  }
  else {
    if (local_aa8 != (ulonglong **)(puVar26 + 8)) {
      FUN_1800014c0((longlong *)local_aa8,(ulonglong *)puVar26[8],(ulonglong *)puVar26[9]);
    }
    *(uint *)(local_aa8 + 3) = 0;
  }
LAB_180003845:
  puVar7 = local_a58;
  if (*local_aa8 != local_aa8[1]) {
    memset(local_a58,0,0x468);
    FUN_180002600(local_948,
                  (undefined4 *)(*local_aa8 + (longlong)(int)*(uint *)(local_aa8 + 3) * 10));
    *puVar7 = local_940;
    *(ulonglong *)(puVar7 + 10) = (ulonglong)local_948[0];
    *(undefined8 *)(puVar7 + 1) = local_93c;
    *(undefined8 *)(puVar7 + 3) = local_92c;
    *(undefined8 *)(puVar7 + 5) = local_934;
    puVar7[7] = (int)((ulonglong)local_920 >> 0x20);
    puVar7[8] = (int)local_920;
    memset(local_448,0,0x400);
    pppppppuVar14 = local_918;
    if (7 < local_900) {
      pppppppuVar14 = local_918[0];
    }
    (**(code **)(*DAT_18001d660 + 0x58))(DAT_18001d660,pppppppuVar14,local_908,local_448);
    sVar30 = 0xffffffffffffffff;
    do {
      _Size = sVar30 + 1;
      lVar13 = sVar30 + 1;
      sVar30 = _Size;
    } while (local_448[lVar13] != '\0');
    memcpy(puVar7 + 0xc,local_448,_Size);
    FUN_180004590((longlong *)local_918);
  }
LAB_18000394d:
  FUN_1800027e0(local_9b8);
  FUN_180012550(local_48 ^ (ulonglong)auStackY_ae8);
  return;
LAB_180003680:
  do {
    puVar20 = (undefined1 *)local_9f0;
    if ((ulonglong *)0xf < puVar15) {
      puVar20 = puVar23;
    }
    puVar19 = puVar26 + 4;
    if (0xf < (ulonglong)puVar26[7]) {
      puVar19 = (undefined8 *)puVar26[4];
    }
    puVar32 = (ulonglong *)puVar26[6];
    puVar33 = puVar32;
    if (puVar25 < puVar32) {
      puVar33 = puVar25;
    }
    iVar8 = memcmp(puVar19,puVar20,(size_t)puVar33);
    if (iVar8 == 0) {
      if (puVar32 < puVar25) goto LAB_1800037ce;
LAB_1800036bf:
      puVar19 = (undefined8 *)*puVar26;
      puVar21 = puVar26;
    }
    else {
      if (-1 < iVar8) goto LAB_1800036bf;
LAB_1800037ce:
      puVar19 = (undefined8 *)puVar26[2];
    }
    puVar26 = puVar19;
  } while (*(char *)((longlong)puVar19 + 0x19) == '\0');
LAB_1800036cb:
  if (puVar21 != puVar3) {
    puVar26 = puVar21 + 4;
    if (0xf < (ulonglong)puVar21[7]) {
      puVar26 = (undefined8 *)puVar21[4];
    }
    puVar20 = (undefined1 *)local_9f0;
    if ((ulonglong *)0xf < puVar15) {
      puVar20 = puVar23;
    }
    uVar9 = FUN_1800020b0(puVar20,(ulonglong)puVar25,puVar26,puVar21[6]);
    if (-1 < (int)uVar9) goto LAB_1800036fe;
  }
  puVar21 = puVar3;
LAB_1800036fe:
  FUN_1800044c0((longlong *)&local_a10);
  FUN_180004590((longlong *)&local_968);
  pcVar35 = local_a80;
  ppuVar18 = (ulonglong **)(puVar21 + 8);
  if (puVar21 == puVar3) {
    ppuVar18 = local_aa0;
  }
LAB_18000372b:
  local_aa0 = ppuVar18;
  pcVar35 = pcVar35 + 1;
  pcVar11 = strchr(pcVar35,0x5c);
  if (pcVar11 == (char *)0x0) goto code_r0x00018000375d;
  goto LAB_180003220;
code_r0x00018000375d:
  local_a80 = (char *)0x0;
  pvVar29 = local_a78;
LAB_180003762:
  local_a00 = 0;
  uStack_9f8 = 0xf;
  local_a10 = (undefined8 *******)((ulonglong)local_a10 & 0xffffffffffffff00);
  sVar30 = 0xffffffffffffffff;
  do {
    sVar30 = sVar30 + 1;
  } while (*(char *)((longlong)pvVar29 + sVar30) != '\0');
  FUN_180004ce0((longlong *)&local_a10,pvVar29,sVar30);
  puVar3 = (undefined8 *)*plVar1;
  cVar2 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar26 = puVar3;
  puVar21 = (undefined8 *)puVar3[1];
  while (cVar2 == '\0') {
    uVar9 = FUN_1800050a0(puVar21 + 4,&local_a10);
    if ((int)uVar9 < 0) {
      puVar19 = (undefined8 *)puVar21[2];
      puVar21 = puVar26;
    }
    else {
      puVar19 = (undefined8 *)*puVar21;
    }
    puVar26 = puVar21;
    puVar21 = puVar19;
    cVar2 = *(char *)((longlong)puVar19 + 0x19);
  }
  if ((puVar26 == puVar3) || (uVar9 = FUN_1800050a0(&local_a10,puVar26 + 4), (int)uVar9 < 0)) {
    puVar26 = puVar3;
  }
  FUN_1800027e0((longlong *)&local_a10);
  if (puVar26 == (undefined8 *)*plVar1) {
    FUN_180005020((longlong *)local_aa8);
  }
  else if (local_aa8 != (ulonglong **)(puVar26 + 8)) {
    FUN_1800014c0((longlong *)local_aa8,(ulonglong *)puVar26[8],(ulonglong *)puVar26[9]);
  }
  *(uint *)(local_aa8 + 3) = 0;
  FUN_1800027e0(local_9f0);
  goto LAB_180003845;
}




void FUN_180003990(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 ****ppppuVar2;
  size_t _Size;
  uint uVar4;
  undefined1 auStack_4a8 [32];
  undefined4 local_488;
  undefined8 local_478;
  uint local_468 [2];
  undefined4 local_460;
  undefined8 local_45c;
  undefined8 local_454;
  undefined8 local_44c;
  undefined8 local_440;
  undefined8 ***local_438 [2];
  undefined4 local_428;
  ulonglong local_420;
  char local_418 [1024];
  ulonglong local_18;
  size_t sVar3;
  
  local_478 = 0xfffffffffffffffe;
  local_18 = DAT_18001d018 ^ (ulonglong)auStack_4a8;
  if (param_2 != (longlong *)0x0) {
    if (*param_2 != param_2[1]) {
      uVar4 = (int)param_2[3] + 1;
      if ((ulonglong)uVar4 < (ulonglong)((param_2[1] - *param_2) / 0x50)) {
        *(uint *)(param_2 + 3) = uVar4;
        FUN_180002600(local_468,(undefined4 *)((ulonglong)uVar4 * 0x50 + *param_2));
        param_3[9] = 0;
        memset(param_3 + 0xc,0,0x438);
        *param_3 = local_460;
        *(ulonglong *)(param_3 + 10) = (ulonglong)local_468[0];
        *(undefined8 *)(param_3 + 1) = local_45c;
        *(undefined8 *)(param_3 + 3) = local_44c;
        *(undefined8 *)(param_3 + 5) = local_454;
        param_3[7] = (int)((ulonglong)local_440 >> 0x20);
        param_3[8] = (int)local_440;
        memset(local_418,0,0x400);
        ppppuVar2 = local_438;
        if (7 < local_420) {
          ppppuVar2 = (undefined8 ****)local_438[0];
        }
        local_488 = 0x400;
        (**(code **)(*DAT_18001d660 + 0x58))(DAT_18001d660,ppppuVar2,local_428,local_418);
        sVar3 = 0xffffffffffffffff;
        do {
          _Size = sVar3 + 1;
          lVar1 = sVar3 + 1;
          sVar3 = _Size;
        } while (local_418[lVar1] != '\0');
        memcpy(param_3 + 0xc,local_418,_Size);
        FUN_180004590((longlong *)local_438);
      }
    }
  }
  FUN_180012550(local_18 ^ (ulonglong)auStack_4a8);
  return;
}




void FUN_180003b30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *local_20 [2];
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + 8);
    uVar5 = (**(code **)*puVar10)(puVar10,param_2,param_3,param_4,0xfffffffffffffffe);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT44(0,uVar5);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,uVar5) + 0x1ff;
    iVar6 = SUB164(auVar3 / auVar2,0);
    FUN_1800023e0((ulonglong *)local_20,(ulonglong)(iVar6 * uVar5));
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    iVar7 = (**(code **)(*plVar11 + 8))
                      (plVar11,local_20[0],0,SUB168(auVar3 / auVar2,0) & 0xffffffff);
    if (iVar7 == iVar6) {
      uVar8 = FUN_180004b50(param_1,(longlong)local_20[0]);
      if ((char)uVar8 != '\0') {
        uVar1 = *(undefined4 *)(local_20[0] + 0xb);
        FUN_180004820(param_1,(longlong)local_20[0]);
        lVar12 = 4;
        puVar9 = (undefined8 *)(param_1 + 0x50);
        puVar10 = local_20[0];
        do {
          uVar4 = puVar10[1];
          *puVar9 = *puVar10;
          puVar9[1] = uVar4;
          uVar4 = puVar10[3];
          puVar9[2] = puVar10[2];
          puVar9[3] = uVar4;
          uVar4 = puVar10[5];
          puVar9[4] = puVar10[4];
          puVar9[5] = uVar4;
          uVar4 = puVar10[7];
          puVar9[6] = puVar10[6];
          puVar9[7] = uVar4;
          uVar4 = puVar10[9];
          puVar9[8] = puVar10[8];
          puVar9[9] = uVar4;
          uVar4 = puVar10[0xb];
          puVar9[10] = puVar10[10];
          puVar9[0xb] = uVar4;
          uVar4 = puVar10[0xd];
          puVar9[0xc] = puVar10[0xc];
          puVar9[0xd] = uVar4;
          uVar4 = puVar10[0xf];
          puVar9[0xe] = puVar10[0xe];
          puVar9[0xf] = uVar4;
          puVar10 = puVar10 + 0x10;
          lVar12 = lVar12 + -1;
          puVar9 = puVar9 + 0x10;
        } while (lVar12 != 0);
        FUN_1800012a0(param_1 + 0x250,(uint)*(byte *)((longlong)local_20[0] + 0x6d));
        FUN_180001290((undefined4 *)(param_1 + 0x250),uVar1);
      }
      if (local_20[0] != (undefined8 *)0x0) {
        puVar10 = local_20[0];
        if ((0xfff < (ulonglong)(local_10 - (longlong)local_20[0])) &&
           (puVar10 = (undefined8 *)local_20[0][-1],
           0x1f < (ulonglong)((longlong)local_20[0] + (-8 - (longlong)puVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(puVar10);
      }
    }
    else {
      FUN_180002930((longlong *)local_20);
    }
  }
  return;
}




void FUN_180003d00(char *param_1)

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
  
  local_18 = DAT_18001d018 ^ (ulonglong)auStack_148;
  if (param_1 == (char *)0x0) {
LAB_180003df5:
    FUN_180012550(local_18 ^ (ulonglong)auStack_148);
    return;
  }
  pcVar4 = param_1;
  if (*param_1 != '\0') {
    lVar5 = 0;
    do {
      if (0xff < lVar5) goto LAB_180003df5;
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
          FUN_180002b40(pFVar3,hModule);
        }
      }
      goto LAB_180003df5;
    }
  }
  __report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




void FUN_180003e20(longlong param_1,uint param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  BOOL BVar6;
  char *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *_Memory;
  uint uVar17;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  longlong local_2c0;
  char *local_2b8;
  longlong *local_2b0;
  undefined8 local_2a8;
  undefined4 local_298;
  undefined2 local_294;
  uint local_290;
  undefined8 local_28c;
  undefined8 local_284;
  undefined8 local_27c;
  undefined8 local_270;
  undefined2 local_268 [8];
  undefined8 local_258;
  undefined8 local_250;
  short local_248 [4];
  undefined8 auStack_240 [2];
  undefined4 local_230;
  undefined2 local_22c [242];
  ulonglong local_48;
  
  local_2a8 = 0xfffffffffffffffe;
  local_48 = DAT_18001d018 ^ (ulonglong)auStack_2e8;
  local_2b0 = param_3;
  if ((*(char *)(param_1 + 0x34) != '\0') && (*(longlong *)(param_1 + 0x38) != 0)) {
    uVar13 = 0;
    local_2c8 = (longlong *)0x0;
    local_2c0 = 0;
    local_2c8 = (longlong *)FUN_180004230(&local_2c8,(undefined8 *)0x0,(undefined8 *)0x0);
    FUN_180004640(param_1,param_1 + 0x50,param_2,&local_2c8);
    lVar8 = local_2c0;
    _Memory = local_2c8;
    if (local_2c0 != 0) {
      iVar5 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x38) + 8))();
      uVar17 = iVar5 * (int)lVar8 * *(int *)(param_1 + 0x10);
      pcVar7 = (char *)operator_new((ulonglong)uVar17);
      local_2b8 = pcVar7;
      memset(pcVar7,0,(ulonglong)uVar17);
      for (plVar3 = (longlong *)*_Memory; plVar3 != _Memory; plVar3 = (longlong *)*plVar3) {
        lVar8 = FUN_180001270((uint *)(param_1 + 0x250),(int)plVar3[2]);
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
        (**(code **)(*plVar9 + 8))(plVar9,pcVar7 + uVar13,lVar8,*(undefined4 *)(param_1 + 0x10));
        iVar5 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x38) + 8))();
        uVar13 = (ulonglong)(uint)((int)uVar13 + iVar5 * *(int *)(param_1 + 0x10));
        param_3 = local_2b0;
      }
      uVar12 = 0;
      if (uVar17 != 0) {
        uVar13 = 0;
        pcVar11 = pcVar7;
        do {
          _Memory = local_2c8;
          pcVar7 = local_2b8;
          if (*pcVar11 == '\0') break;
          if ((*pcVar11 - 5U & 0x7f) == 0) {
            local_258 = 0;
            local_250 = 7;
            local_268[0] = 0;
            BVar6 = DosDateTimeToFileTime
                              (*(WORD *)(pcVar11 + 0xe),*(WORD *)(pcVar11 + 0xc),
                               (LPFILETIME)&DAT_18001d668);
            if (BVar6 == 0) {
              DAT_18001d668 = 0;
            }
            local_284 = DAT_18001d668;
            BVar6 = DosDateTimeToFileTime
                              (*(WORD *)(pcVar11 + 10),*(WORD *)(pcVar11 + 8),
                               (LPFILETIME)&DAT_18001d668);
            if (BVar6 == 0) {
              DAT_18001d668 = 0;
            }
            local_28c = DAT_18001d668;
            BVar6 = DosDateTimeToFileTime
                              (*(WORD *)(pcVar11 + 0x12),*(WORD *)(pcVar11 + 0x10),
                               (LPFILETIME)&DAT_18001d668);
            if (BVar6 == 0) {
              DAT_18001d668 = 0;
            }
            local_27c = DAT_18001d668;
            local_294 = CONCAT11(*pcVar11 == '\x05',(*(ushort *)(pcVar11 + 4) & 0x10) != 0);
            local_290 = (uint)*(ushort *)(pcVar11 + 4);
            pcVar7 = pcVar11 + 0x20;
            uVar12 = uVar12 + 0x20;
            memset(local_248,0,0x1fe);
            bVar1 = pcVar11[1];
            uVar16 = uVar13;
            uVar14 = uVar13;
            uVar15 = uVar13;
            if (bVar1 != 0) {
              do {
                if ((int)uVar16 == 0) {
                  uVar14 = (ulonglong)(byte)pcVar7[3];
                  local_298 = *(undefined4 *)(pcVar7 + 0x14);
                  local_270 = *(undefined8 *)(pcVar7 + 8);
                }
                else {
                  if (((int)uVar14 < 1) || (*pcVar7 != -0x3f)) break;
                  lVar8 = uVar15 * 2;
                  uVar4 = *(undefined8 *)(pcVar7 + 10);
                  *(undefined8 *)(local_248 + uVar15) = *(undefined8 *)(pcVar7 + 2);
                  *(undefined8 *)((longlong)auStack_240 + lVar8) = uVar4;
                  *(undefined8 *)((longlong)auStack_240 + lVar8 + 8) =
                       *(undefined8 *)(pcVar7 + 0x12);
                  *(undefined4 *)((longlong)&local_230 + lVar8) = *(undefined4 *)(pcVar7 + 0x1a);
                  local_22c[uVar15] = *(undefined2 *)(pcVar7 + 0x1e);
                  uVar15 = (ulonglong)((int)uVar15 + 0xf);
                  uVar14 = (ulonglong)((int)uVar14 - 0xf);
                }
                uVar10 = (int)uVar16 + 1;
                uVar16 = (ulonglong)uVar10;
                uVar12 = uVar12 + 0x20;
                pcVar7 = pcVar7 + 0x20;
              } while ((int)uVar10 < (int)(uint)bVar1);
            }
            uVar16 = 0xffffffffffffffff;
            do {
              uVar16 = uVar16 + 1;
            } while (local_248[uVar16] != 0);
            FUN_180004e30((longlong *)local_268,local_248,uVar16);
            if (local_294._1_1_ == '\0') {
              puVar2 = (undefined8 *)param_3[1];
              if ((undefined8 *)param_3[2] == puVar2) {
                FUN_180001900(param_3,puVar2,&local_298);
              }
              else {
                FUN_180002600((undefined4 *)puVar2,&local_298);
                param_3[1] = param_3[1] + 0x50;
              }
            }
            FUN_180004590((longlong *)local_268);
          }
          else {
            uVar12 = uVar12 + 0x20;
            pcVar7 = pcVar11 + 0x20;
          }
          pcVar11 = pcVar7;
          _Memory = local_2c8;
          pcVar7 = local_2b8;
        } while (uVar12 < uVar17);
      }
      free(pcVar7);
    }
    plVar3 = (longlong *)*_Memory;
    *_Memory = (longlong)_Memory;
    _Memory[1] = (longlong)_Memory;
    local_2c0 = 0;
    while (plVar3 != _Memory) {
      plVar9 = (longlong *)*plVar3;
      free(plVar3);
      plVar3 = plVar9;
    }
    free(_Memory);
  }
  FUN_180012550(local_48 ^ (ulonglong)auStack_2e8);
  return;
}




void FUN_1800041f0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x58);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180004230(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (param_2 == (undefined8 *)0x0) {
    param_2 = puVar1;
    param_3 = puVar1;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}




void FUN_180004280(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_1800042c0(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (param_2 != param_3) {
    do {
      FUN_180004590((longlong *)(param_2 + 0x30));
      param_2 = param_2 + 0x50;
    } while (param_2 != param_3);
  }
  return;
}




void FUN_180004310(undefined8 param_1,void *param_2)

{
  FUN_1800044c0((longlong *)((longlong)param_2 + 0x40));
  FUN_1800027e0((longlong *)((longlong)param_2 + 0x20));
  free(param_2);
  return;
}




void FUN_180004360(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180004360(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_1800044c0(param_2 + 8);
    FUN_1800027e0(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_1800043f0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_180004400(longlong *param_1,longlong *param_2)

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




void FUN_180004460(longlong *param_1)

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




void FUN_1800044c0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    if (pvVar1 != pvVar2) {
      do {
        FUN_180004590((longlong *)((longlong)pvVar1 + 0x30));
        pvVar1 = (void *)((longlong)pvVar1 + 0x50);
      } while (pvVar1 != pvVar2);
      pvVar1 = (void *)*param_1;
    }
    pvVar2 = pvVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar1) / 0x50) * 0x50)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_180004590(longlong *param_1)

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




void FUN_180004600(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180004620(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180004640(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  void *_Memory;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint local_res18 [2];
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_1 + 0x38), lVar1 != 0)) {
    local_res18[0] = param_3;
    iVar5 = (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8);
    uVar10 = (uint)(iVar5 << 8) >> 2;
    _Memory = operator_new((ulonglong)(uint)(iVar5 << 8));
    if (_Memory != (void *)0x0) {
      uVar9 = (ulonglong)param_3 / (ulonglong)uVar10;
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
      uVar8 = (int)uVar9 * uVar10;
      iVar5 = (**(code **)(*plVar7 + 8))
                        (plVar7,_Memory,(int)uVar9 * 0x100 + *(int *)(param_2 + 0x50),0x100);
      while (iVar5 != 0) {
        puVar2 = (undefined8 *)*param_4;
        puVar3 = (undefined8 *)puVar2[1];
        uVar6 = FUN_1800016b0(param_4,puVar2,puVar3,local_res18);
        if (param_4[1] == 0xaaaaaaaaaaaaaa9) {
LAB_180004808:
          std::_Xlength_error("list<T> too long");
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        param_4[1] = param_4[1] + 1;
        puVar2[1] = uVar6;
        *puVar3 = uVar6;
        param_3 = *(uint *)((longlong)_Memory + (ulonglong)(param_3 - uVar8) * 4);
        if (0xfff6 < param_3 - 1) break;
        puVar2 = (undefined8 *)*param_4;
        puVar3 = (undefined8 *)puVar2[1];
        local_res18[0] = param_3;
        uVar6 = FUN_1800016b0(param_4,puVar2,puVar3,local_res18);
        if (param_4[1] == 0xaaaaaaaaaaaaaa9) goto LAB_180004808;
        param_4[1] = param_4[1] + 1;
        puVar2[1] = uVar6;
        *puVar3 = uVar6;
        if ((param_3 < uVar8) || (uVar10 + uVar8 <= param_3)) {
          uVar9 = (ulonglong)param_3 / (ulonglong)uVar10;
          uVar8 = (int)uVar9 * uVar10;
        }
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
        iVar5 = (**(code **)(*plVar7 + 8))
                          (plVar7,_Memory,(int)uVar9 * 0x100 + *(int *)(param_2 + 0x50),0x100);
      }
      free(_Memory);
    }
  }
  return;
}




void FUN_180004820(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong *local_60;
  undefined8 local_58;
  byte *local_50 [2];
  longlong local_40;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    uVar5 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x38) + 8))();
    FUN_1800023e0((ulonglong *)local_50,(ulonglong)(*(int *)(param_1 + 0x10) * uVar5));
    uVar13 = 0;
    local_60 = (longlong *)0x0;
    local_58 = 0;
    local_60 = (longlong *)FUN_180004230(&local_60,(undefined8 *)0x0,(undefined8 *)0x0);
    bVar1 = false;
    iVar10 = (uVar5 >> 5) * *(int *)(param_1 + 0x10);
    FUN_180004640(param_1,param_2,*(uint *)(param_1 + 0x30),&local_60);
    plVar2 = local_60;
    plVar9 = (longlong *)*local_60;
    if (plVar9 != local_60) {
      do {
        if (bVar1) goto LAB_180004949;
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
        iVar6 = (**(code **)(*plVar8 + 8))
                          (plVar8,local_50[0],
                           (ulonglong)(uint)(((int)plVar9[2] + -2) * *(int *)(param_1 + 0x10)) +
                           (ulonglong)*(uint *)(param_1 + 0x20));
        if ((iVar6 != 0) && (iVar6 = 0, pbVar7 = local_50[0], 0 < iVar10)) {
          do {
            if (*pbVar7 == 0x81) {
              uVar13 = *(uint *)(pbVar7 + 0x14);
              bVar1 = true;
              break;
            }
            pbVar7 = pbVar7 + 0x20;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar10);
        }
        plVar9 = (longlong *)*plVar9;
      } while (plVar9 != plVar2);
      if (bVar1) {
LAB_180004949:
        plVar9 = (longlong *)*plVar2;
        *plVar2 = (longlong)plVar2;
        plVar2[1] = (longlong)plVar2;
        local_58 = 0;
        while (plVar9 != plVar2) {
          plVar8 = (longlong *)*plVar9;
          free(plVar9);
          plVar9 = plVar8;
        }
        FUN_180004640(param_1,param_2,uVar13,&local_60);
        plVar2 = local_60;
        lVar11 = (longlong)(int)(*(int *)(param_1 + 0x10) * uVar5);
        for (plVar9 = (longlong *)*local_60; plVar9 != plVar2; plVar9 = (longlong *)*plVar9) {
          plVar8 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
          iVar10 = (**(code **)(*plVar8 + 8))
                             (plVar8,local_50[0],
                              (ulonglong)(uint)(((int)plVar9[2] + -2) * *(int *)(param_1 + 0x10)) +
                              (ulonglong)*(uint *)(param_1 + 0x20));
          if ((iVar10 != 0) && (pbVar7 = local_50[0], lVar12 = lVar11, 0 < lVar11)) {
            do {
              bVar4 = *pbVar7;
              if (bVar4 != 0) {
                do {
                  bVar3 = bVar4;
                  if ((bVar4 & 1) != 0) {
                    *(longlong *)(param_1 + 0x28) =
                         *(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x10);
                    bVar3 = *pbVar7;
                  }
                  bVar4 = bVar3 >> 1;
                  *pbVar7 = bVar4;
                } while (1 < bVar3);
              }
              lVar12 = lVar12 + -1;
              pbVar7 = pbVar7 + 1;
            } while (lVar12 != 0);
          }
        }
        plVar9 = (longlong *)*plVar2;
        *plVar2 = (longlong)plVar2;
        plVar2[1] = (longlong)plVar2;
        local_58 = 0;
        while (plVar9 != plVar2) {
          plVar8 = (longlong *)*plVar9;
          free(plVar9);
          plVar9 = plVar8;
        }
        free(plVar2);
        if (local_50[0] == (byte *)0x0) {
          return;
        }
        pbVar7 = local_50[0];
        if ((0xfff < (ulonglong)(local_40 - (longlong)local_50[0])) &&
           (pbVar7 = *(byte **)(local_50[0] + -8),
           (byte *)0x1f < local_50[0] + (-8 - (longlong)pbVar7))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pbVar7);
        return;
      }
    }
    plVar9 = (longlong *)*plVar2;
    *plVar2 = (longlong)plVar2;
    plVar2[1] = (longlong)plVar2;
    local_58 = 0;
    while (plVar9 != plVar2) {
      plVar8 = (longlong *)*plVar9;
      free(plVar9);
      plVar9 = plVar8;
    }
    free(plVar2);
    if (local_50[0] != (byte *)0x0) {
      pbVar7 = local_50[0];
      if ((0xfff < (ulonglong)(local_40 - (longlong)local_50[0])) &&
         (pbVar7 = *(byte **)(local_50[0] + -8),
         (byte *)0x1f < local_50[0] + (-8 - (longlong)pbVar7))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pbVar7);
    }
  }
  return;
}




ulonglong FUN_180004b50(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  uint uVar2;
  size_t _Size;
  
  if (param_2 != 0) {
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (PTR_DAT_18001d000[_Size] != '\0');
    iVar1 = memcmp((void *)(param_2 + 3),PTR_DAT_18001d000,_Size);
    in_RAX = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      in_RAX = *(ulonglong *)(param_2 + 0x48);
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(ulonglong *)(param_1 + 8) = in_RAX;
      uVar2 = 1 << (*(byte *)(param_2 + 0x6d) & 0x1f);
      *(uint *)(param_1 + 0x10) = uVar2;
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)*(uint *)(param_2 + 100);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x58);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x60);
      if (((uVar2 & 1) == 0) || (uVar2 == 1)) {
        *(undefined1 *)(param_1 + 0x34) = 1;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_180004be0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 * 0x50;
  if (param_2 < 0x333333333333334) {
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




void FUN_180004c60(undefined8 param_1,ulonglong param_2)

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




longlong * FUN_180004ce0(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_180004600();
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
      if (pvVar3 == (void *)0x0) goto LAB_180004e23;
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
LAB_180004e23:
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




longlong * FUN_180004e30(longlong *param_1,void *param_2,ulonglong param_3)

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
      FUN_180004600();
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
    _Dst = (void *)FUN_180004c60(param_1,uVar7 + 1);
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




void FUN_180004f60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180004360(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




void FUN_180004fb0(longlong *param_1)

{
  longlong *plVar1;
  longlong *_Memory;
  
  plVar1 = (longlong *)*param_1;
  _Memory = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (_Memory != (longlong *)*param_1) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != (longlong *)*param_1);
  }
  return;
}




void FUN_180005020(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar2 != lVar1) {
    do {
      FUN_180004590((longlong *)(lVar2 + 0x30));
      lVar2 = lVar2 + 0x50;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = lVar2;
  return;
}




uint FUN_1800050a0(undefined8 *param_1,undefined8 *param_2)

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




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x18)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




void FUN_180005160(undefined8 param_1,void *param_2,longlong param_3)

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




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x50)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




undefined8 * FUN_1800051f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = IFSInterface::vftable;
  *param_1 = CExt2FS::vftable;
  puVar1 = (undefined8 *)operator_new(0x448);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = FUN_1800057b0(puVar1,param_2);
  }
  param_1[1] = puVar1;
  FUN_180006280((longlong)puVar1);
  return param_1;
}




undefined8 * FUN_180005260(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = CExt2FS::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
    param_1[1] = 0;
  }
  *param_1 = IFSInterface::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800052d0(longlong param_1,undefined8 *param_2)

{
  FUN_180005a80(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_1800052e0(longlong param_1,void *param_2,undefined4 *param_3)

{
  FUN_180005d40(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_1800052f0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  FUN_180005e60(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_180005300(longlong param_1)

{
  IStorageDevice::ConvertVolume(*(IStorageDevice **)(param_1 + 8));
  return;
}




ulonglong FUN_180005310(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar2 = FUN_180005f90(*(longlong *)(param_1 + 8));
    if (iVar2 != 0) {
      uVar3 = FUN_180005f50(*(longlong *)(param_1 + 8));
      lVar5 = FUN_180005f80(*(longlong *)(param_1 + 8));
      iVar2 = *(int *)(lVar5 + 4);
      iVar1 = *(int *)(lVar5 + 0xc);
      uVar4 = FUN_180005f60(*(longlong *)(param_1 + 8));
      return ((ulonglong)uVar3 * (ulonglong)(uint)(iVar2 - iVar1)) / (ulonglong)uVar4;
    }
  }
  return 0;
}




undefined8 * FUN_1800053a0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
    FUN_180004620();
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
      goto LAB_18000549f;
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
LAB_18000549f:
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
    FUN_1800055c0((undefined8 *)*param_1,param_2,puVar13);
    puVar10 = (undefined8 *)param_1[1];
    puVar9 = param_2;
    puVar14 = puVar1 + 4;
  }
  FUN_1800055c0(puVar9,puVar10,puVar14);
  plVar11 = (longlong *)*param_1;
  if (plVar11 != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[1];
    if (plVar11 != plVar12) {
      do {
        FUN_1800027e0(plVar11);
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




undefined8 * FUN_1800055c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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




longlong * FUN_180005640(longlong *param_1,ulonglong param_2,char param_3)

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
  
  _Dst = (void *)0x0;
  param_1[3] = 0xf;
  param_1[2] = 0;
  *(undefined1 *)param_1 = 0;
  uVar1 = param_1[3];
  if (uVar1 < param_2) {
    if (0x7fffffffffffffff < param_2) {
      FUN_180004600();
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    uVar5 = param_2 | 0xf;
    uVar7 = 0x7fffffffffffffff;
    if (((uVar5 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
       (uVar6 = (uVar1 >> 1) + uVar1, uVar7 = uVar5, uVar5 < uVar6)) {
      uVar7 = uVar6;
    }
    uVar5 = uVar7 + 1;
    if (uVar5 < 0x1000) {
      if (uVar5 != 0) {
        _Dst = operator_new(uVar5);
      }
    }
    else {
      uVar6 = uVar7 + 0x28;
      if (uVar6 <= uVar5) {
        uVar6 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new(uVar6);
      if (pvVar3 == (void *)0x0) goto LAB_180005799;
      _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst - 8) = pvVar3;
    }
    param_1[2] = param_2;
    param_1[3] = uVar7;
    memset(_Dst,(int)param_3,param_2);
    *(undefined1 *)((longlong)_Dst + param_2) = 0;
    if (0xf < uVar1) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar1 + 1) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_180005799:
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
    param_1[2] = param_2;
    memset(plVar4,(int)param_3,param_2);
    *(undefined1 *)((longlong)plVar4 + param_2) = 0;
  }
  return param_1;
}




undefined8 * FUN_1800057b0(undefined8 *param_1,undefined8 param_2)

{
  param_1[0x88] = param_2;
  *param_1 = CExt2Partition::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  memset((void *)((longlong)param_1 + 0x1c),0,0x400);
  return param_1;
}




void FUN_180005810(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 4) {
    FUN_1800027e0(plVar2);
  }
  return;
}




void FUN_180005850(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[1];
    if (plVar1 != plVar2) {
      do {
        FUN_1800027e0(plVar1);
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




void FUN_1800058f0(undefined8 *param_1)

{
  *param_1 = CExt2File::vftable;
  FUN_1800027e0(param_1 + 0x11);
  return;
}




undefined8 * FUN_180005920(undefined8 *param_1,uint param_2)

{
  *param_1 = CExt2File::vftable;
  FUN_1800027e0(param_1 + 0x11);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180005980(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = CExt2Partition::vftable;
  puVar1 = (undefined8 *)param_1[0x85];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x85] = 0;
  }
  if ((void *)param_1[0x84] != (void *)0x0) {
    free((void *)param_1[0x84]);
    param_1[0x84] = 0;
  }
  if ((void *)param_1[0x86] != (void *)0x0) {
    free((void *)param_1[0x86]);
    param_1[0x86] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180005a20(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_2[2];
  if ((puVar1 != *(undefined8 **)(param_1 + 0x428)) && (puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
    param_2[2] = 0;
  }
  if ((void *)*param_2 != (void *)0x0) {
    free((void *)*param_2);
    *param_2 = 0;
  }
  free(param_2);
  return;
}




undefined8 FUN_180005a80(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_180005a20(param_1,param_2);
    return 1;
  }
  return 0;
}




void FUN_180005ab0(longlong param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *_Src;
  tm *ptVar3;
  void *pvVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  ulonglong local_90 [2];
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  ulonglong uStack_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_90[1] = 0xfffffffffffffffe;
  local_40 = DAT_18001d018 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  memset(param_2 + 0xc,0,0x400);
  *(undefined8 *)(param_2 + 0x10c) = 0;
  *(undefined8 *)(param_2 + 0x10e) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x112) = 0;
  *(undefined8 *)(param_2 + 0x114) = 0;
  *(undefined8 *)(param_2 + 0x116) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  puVar2 = FUN_180002300((undefined8 *)&local_60,(undefined8 *)(param_1 + 0x88));
  local_98 = 1;
  _Src = FUN_180002300((undefined8 *)&local_80,(undefined8 *)(param_1 + 0x88));
  local_98 = 3;
  if (0xf < (ulonglong)_Src[3]) {
    _Src = (undefined8 *)*_Src;
  }
  memcpy(param_2 + 0xc,_Src,puVar2[2]);
  local_98 = 1;
  if (0xf < uStack_68) {
    pvVar1 = (void *)CONCAT71(uStack_7f,local_80);
    pvVar4 = pvVar1;
    if ((0xfff < uStack_68 + 1) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
  }
  local_70 = 0;
  uStack_68 = 0xf;
  local_80 = 0;
  local_98 = 0;
  if (0xf < uStack_48) {
    pvVar1 = (void *)CONCAT71(uStack_5f,local_60);
    pvVar4 = pvVar1;
    if ((0xfff < uStack_48 + 1) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
  }
  local_50 = 0;
  uStack_48 = 0xf;
  local_60 = 0;
  uVar9 = 0;
  uVar5 = (uint)local_90[0];
  do {
    if (uVar9 == 0) {
      local_90[0] = (ulonglong)*(uint *)(param_1 + 0x14);
      lVar7 = 8;
      lVar6 = 4;
    }
    else if (uVar9 == 1) {
      local_90[0] = (ulonglong)*(uint *)(param_1 + 0x18);
      lVar7 = 0x18;
      lVar6 = 0x14;
    }
    else {
      local_90[0] = (ulonglong)*(uint *)(param_1 + 0x10);
      lVar7 = 0x10;
      lVar6 = 0xc;
    }
    ptVar3 = _localtime64((__time64_t *)local_90);
    uVar5 = (uint)CONCAT11((char)ptVar3->tm_hour,(char)ptVar3->tm_min) << 8 | uVar5 & 0xff000000 |
            (uint)(byte)ptVar3->tm_sec;
    *(uint *)((longlong)param_2 + lVar7) =
         (ptVar3->tm_mon + 1U & 0xff) << 8 | (ptVar3->tm_year + 0x76c) * 0x10000 |
         (uint)(byte)ptVar3->tm_mday;
    *(uint *)((longlong)param_2 + lVar6) = uVar5;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 3);
  uVar8 = 0;
  if ((*(ushort *)(param_1 + 8) & 0xf000) == 0x4000) {
    uVar8 = 0x10;
  }
  *param_2 = uVar8;
  param_2[7] = *(undefined4 *)(param_1 + 0x74);
  param_2[8] = *(undefined4 *)(param_1 + 0xc);
  FUN_180012550(local_40 ^ (ulonglong)auStack_b8);
  return;
}




void FUN_180005d40(longlong param_1,void *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_e0;
  undefined **local_d8 [17];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_e8 = 0xfffffffffffffffe;
  local_28 = DAT_18001d018 ^ (ulonglong)auStack_108;
  if (param_2 != (void *)0x0) {
    local_d8[0] = CExt2File::vftable;
    local_40 = 0;
    local_38 = 0xf;
    local_50[0] = 0;
    if (*(int *)(param_1 + 8) == 0) {
      local_d8[0] = CExt2File::vftable;
      FUN_1800027e0((longlong *)local_50);
    }
    else {
      local_e0 = (longlong *)FUN_180006670(param_1,param_2);
      if (local_e0 == (longlong *)0x0) {
        FUN_1800058f0(local_d8);
      }
      else {
        iVar1 = FUN_180006d40(param_1,local_e0,(longlong)local_d8);
        if (iVar1 == 0) {
          FUN_1800058f0(local_d8);
        }
        else {
          FUN_180005ab0((longlong)local_d8,param_3);
          local_d8[0] = CExt2File::vftable;
          FUN_1800027e0((longlong *)local_50);
        }
      }
    }
  }
  FUN_180012550(local_28 ^ (ulonglong)auStack_108);
  return;
}




void FUN_180005e60(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined **local_c8 [17];
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_d8 = 0xfffffffffffffffe;
  local_18 = DAT_18001d018 ^ (ulonglong)auStack_f8;
  if (param_2 != (longlong *)0x0) {
    local_c8[0] = CExt2File::vftable;
    local_30 = 0;
    local_28 = 0xf;
    local_40[0] = 0;
    if (*(int *)(param_1 + 8) == 0) {
      local_c8[0] = CExt2File::vftable;
      FUN_1800027e0((longlong *)local_40);
    }
    else {
      iVar1 = FUN_180006d40(param_1,param_2,(longlong)local_c8);
      if (iVar1 == 0) {
        FUN_1800058f0(local_c8);
      }
      else {
        FUN_180005ab0((longlong)local_c8,param_3);
        local_c8[0] = CExt2File::vftable;
        FUN_1800027e0((longlong *)local_40);
      }
    }
  }
  FUN_180012550(local_18 ^ (ulonglong)auStack_f8);
  return;
}




undefined4 FUN_180005f50(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}




void FUN_180005f60(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005f6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x440) + 8))();
  return;
}




longlong FUN_180005f80(longlong param_1)

{
  return param_1 + 0x1c;
}




undefined4 FUN_180005f90(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




ulonglong FUN_180005fa0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = 0xef53;
  if ((short)param_1[0xe] == -0x10ad) {
    uVar1 = param_1[1];
    uVar3 = (ulonglong)uVar1;
    if (((((uVar1 != 0) && (uVar2 = *param_1, uVar2 != 0)) && (param_1[8] != 0)) &&
        ((param_1[10] != 0 && (2 < param_1[0x15])))) &&
       (uVar3 = (ulonglong)(uVar2 - 1) / (ulonglong)param_1[10],
       ((uVar1 - param_1[5]) - 1) / param_1[8] == (uint)uVar3)) {
      iVar4 = 0x400 << ((byte)param_1[6] & 0x1f);
      if ((param_1[0x19] & 0x200) != 0) {
        iVar4 = iVar4 << ((byte)param_1[7] & 0x1f);
      }
      uVar3 = 0;
      if (((uint)(iVar4 == 0x400) == param_1[5]) && (param_1[0x15] < uVar2)) {
        return 1;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




void * FUN_180006030(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  bool bVar2;
  __uint64 _Var3;
  void *_Memory;
  undefined7 extraout_var;
  void *_Memory_00;
  undefined7 extraout_var_00;
  void *_Memory_01;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  uint uVar4;
  uint uVar5;
  
  if (param_3 < 0xc) {
    _Memory_01 = (void *)(ulonglong)*(uint *)(param_2 + 0x28 + (ulonglong)param_3 * 4);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xc) >> 2;
    _Var3 = SUB168(ZEXT816(4) * ZEXT416(uVar4),0);
    if (SUB168(ZEXT816(4) * ZEXT416(uVar4),8) != 0) {
      _Var3 = 0xffffffffffffffff;
    }
    _Memory = operator_new(_Var3);
    _Memory_01 = _Memory;
    if (_Memory != (void *)0x0) {
      if (param_3 < uVar4 + 0xc) {
        bVar2 = FUN_180006cc0(param_1,(ulonglong)*(uint *)(param_2 + 0x58),_Memory);
        if ((int)CONCAT71(extraout_var,bVar2) == 0) {
          _Memory_01 = (void *)0x0;
        }
        else {
          uVar4 = *(uint *)((longlong)_Memory + (ulonglong)(param_3 - 0xc) * 4);
          free(_Memory);
          _Memory_01 = (void *)(ulonglong)uVar4;
        }
      }
      else {
        uVar5 = uVar4 * uVar4 + uVar4 + 0xc;
        _Var3 = SUB168(ZEXT816(4) * ZEXT416(uVar4),0);
        if (SUB168(ZEXT816(4) * ZEXT416(uVar4),8) != 0) {
          _Var3 = 0xffffffffffffffff;
        }
        _Memory_00 = operator_new(_Var3);
        _Memory_01 = _Memory_00;
        if (_Memory_00 != (void *)0x0) {
          if (param_3 < uVar5) {
            bVar2 = FUN_180006cc0(param_1,(ulonglong)*(uint *)(param_2 + 0x5c),_Memory_00);
            if ((int)CONCAT71(extraout_var_00,bVar2) == 0) {
              _Memory_01 = (void *)0x0;
            }
            else {
              uVar1 = (ulonglong)(param_3 - (uVar4 + 0xc));
              bVar2 = FUN_180006cc0(param_1,(ulonglong)
                                            *(uint *)((longlong)_Memory_00 + (uVar1 / uVar4) * 4),
                                    _Memory);
              if ((int)CONCAT71(extraout_var_01,bVar2) == 0) {
                _Memory_01 = (void *)0x0;
              }
              else {
                uVar4 = *(uint *)((longlong)_Memory + (uVar1 % (ulonglong)uVar4) * 4);
                free(_Memory_00);
                free(_Memory);
                _Memory_01 = (void *)(ulonglong)uVar4;
              }
            }
          }
          else {
            _Var3 = SUB168(ZEXT816(4) * ZEXT416(uVar4),0);
            if (SUB168(ZEXT816(4) * ZEXT416(uVar4),8) != 0) {
              _Var3 = 0xffffffffffffffff;
            }
            _Memory_01 = operator_new(_Var3);
            if (_Memory_01 != (void *)0x0) {
              if (param_3 < uVar5) {
                _Memory_01 = (void *)0x0;
              }
              else {
                bVar2 = FUN_180006cc0(param_1,(ulonglong)*(uint *)(param_2 + 0x60),_Memory_01);
                if ((int)CONCAT71(extraout_var_02,bVar2) == 0) {
                  _Memory_01 = (void *)0x0;
                }
                else {
                  uVar1 = (ulonglong)(param_3 - uVar5) / (ulonglong)uVar4;
                  bVar2 = FUN_180006cc0(param_1,(ulonglong)
                                                *(uint *)((longlong)_Memory_01 + (uVar1 / uVar4) * 4
                                                         ),_Memory_00);
                  if ((int)CONCAT71(extraout_var_03,bVar2) == 0) {
                    _Memory_01 = (void *)0x0;
                  }
                  else {
                    bVar2 = FUN_180006cc0(param_1,(ulonglong)
                                                  *(uint *)((longlong)_Memory_00 + uVar1 * 4),
                                          _Memory);
                    if ((int)CONCAT71(extraout_var_04,bVar2) == 0) {
                      _Memory_01 = (void *)0x0;
                    }
                    else {
                      uVar4 = *(uint *)((longlong)_Memory +
                                       ((ulonglong)(param_3 - uVar5) % (ulonglong)uVar4) * 4);
                      free(_Memory_01);
                      free(_Memory_00);
                      free(_Memory);
                      _Memory_01 = (void *)(ulonglong)uVar4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return _Memory_01;
}




undefined8 FUN_180006280(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  void *local_48 [2];
  longlong local_38;
  
  uVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x440) + 8))();
  iVar12 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x7ff)) / ZEXT416(uVar2),0) + 1;
  FUN_1800023e0((ulonglong *)local_48,(ulonglong)(iVar12 * uVar2));
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x440) + 8);
  iVar3 = (**(code **)(*plVar9 + 8))(plVar9,local_48[0],0,iVar12);
  if (iVar3 == iVar12) {
    puVar8 = (undefined8 *)((longlong)local_48[0] + 0x400);
    lVar10 = 8;
    uVar11 = 0x80;
    puVar7 = (undefined8 *)(param_1 + 0x1c);
    do {
      uVar6 = puVar8[1];
      *puVar7 = *puVar8;
      puVar7[1] = uVar6;
      uVar6 = puVar8[3];
      puVar7[2] = puVar8[2];
      puVar7[3] = uVar6;
      uVar6 = puVar8[5];
      puVar7[4] = puVar8[4];
      puVar7[5] = uVar6;
      uVar6 = puVar8[7];
      puVar7[6] = puVar8[6];
      puVar7[7] = uVar6;
      uVar6 = puVar8[9];
      puVar7[8] = puVar8[8];
      puVar7[9] = uVar6;
      uVar6 = puVar8[0xb];
      puVar7[10] = puVar8[10];
      puVar7[0xb] = uVar6;
      uVar6 = puVar8[0xd];
      puVar7[0xc] = puVar8[0xc];
      puVar7[0xd] = uVar6;
      uVar6 = puVar8[0xf];
      puVar7[0xe] = puVar8[0xe];
      puVar7[0xf] = uVar6;
      puVar8 = puVar8 + 0x10;
      lVar10 = lVar10 + -1;
      puVar7 = puVar7 + 0x10;
    } while (lVar10 != 0);
    uVar4 = FUN_180005fa0((uint *)(param_1 + 0x1c));
    if ((char)uVar4 == '\0') {
      FUN_180002930((longlong *)local_48);
      uVar6 = 0;
    }
    else {
      uVar13 = 0x400 << ((byte)*(undefined4 *)(param_1 + 0x34) & 0x1f);
      *(uint *)(param_1 + 0xc) = uVar13;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x44);
      if (*(int *)(param_1 + 0x68) != 0) {
        uVar11 = (uint)*(ushort *)(param_1 + 0x74);
      }
      *(uint *)(param_1 + 0x14) = uVar11;
      uVar11 = ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) - 1U) /
               *(uint *)(param_1 + 0x3c) + 1;
      *(uint *)(param_1 + 0x18) = uVar11;
      iVar3 = SUB164((ZEXT416(uVar11) << 5) / ZEXT416(uVar2),0) + 1;
      pvVar5 = operator_new((ulonglong)(iVar3 * uVar2));
      *(void **)(param_1 + 0x420) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        FUN_180002930((longlong *)local_48);
        uVar6 = 0;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x440) + 8);
        iVar12 = (**(code **)(*plVar9 + 8))
                           (plVar9,pvVar5,((iVar12 * uVar2 - 1) / uVar13 + 1) * (uVar13 / uVar2),
                            iVar3);
        if (iVar12 == iVar3) {
          lVar10 = *(longlong *)(param_1 + 0x420);
          if ((lVar10 == 0) ||
             (uVar4 = FUN_180005fa0((uint *)(param_1 + 0x1c)), (char)uVar4 == '\0')) {
LAB_1800065f6:
            FUN_180002930((longlong *)local_48);
            uVar6 = 0;
          }
          else {
            puVar8 = (undefined8 *)0x0;
            puVar7 = puVar8;
            while (uVar2 = (uint)puVar7, uVar2 < *(uint *)(param_1 + 0x18)) {
              lVar14 = (longlong)puVar7 * 0x20;
              uVar11 = *(uint *)(param_1 + 0x3c);
              uVar13 = uVar11 * uVar2 + *(int *)(param_1 + 0x30);
              if (uVar2 == ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) - 1U) / uVar11) {
                uVar11 = *(int *)(param_1 + 0x20) - 1;
              }
              else {
                uVar11 = (uVar11 - 1) + uVar13;
              }
              if (((((*(uint *)(lVar14 + lVar10) < uVar13) || (uVar11 < *(uint *)(lVar14 + lVar10)))
                   || (uVar1 = *(uint *)(lVar14 + 4 + lVar10), uVar1 < uVar13)) ||
                  ((uVar11 < uVar1 || (uVar1 = *(uint *)(lVar14 + 8 + lVar10), uVar1 < uVar13)))) ||
                 (uVar11 < uVar1)) goto LAB_1800065f6;
              puVar7 = (undefined8 *)(ulonglong)(uVar2 + 1);
            }
            puVar7 = (undefined8 *)operator_new(0xa8);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = CExt2File::vftable;
              puVar7[0x13] = 0;
              puVar7[0x14] = 0;
              puVar7[0x13] = 0;
              puVar7[0x14] = 0xf;
              *(undefined1 *)(puVar7 + 0x11) = 0;
              puVar8 = puVar7;
            }
            *(undefined8 **)(param_1 + 0x428) = puVar8;
            if (puVar8 == (undefined8 *)0x0) {
              FUN_180002930((longlong *)local_48);
              uVar6 = 0;
            }
            else {
              uVar6 = FUN_180007060(param_1,2,(longlong)puVar8);
              if ((int)uVar6 == 0) {
                FUN_180002930((longlong *)local_48);
                uVar6 = 0;
              }
              else {
                *(undefined4 *)(param_1 + 8) = 1;
                if (local_48[0] != (void *)0x0) {
                  pvVar5 = local_48[0];
                  if ((0xfff < (ulonglong)(local_38 - (longlong)local_48[0])) &&
                     (pvVar5 = *(void **)((longlong)local_48[0] + -8),
                     0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  free(pvVar5);
                }
                uVar6 = 1;
              }
            }
          }
        }
        else {
          FUN_180002930((longlong *)local_48);
          uVar6 = 0;
        }
      }
    }
  }
  else {
    FUN_180002930((longlong *)local_48);
    uVar6 = 0;
  }
  return uVar6;
}




void FUN_180006670(longlong param_1,void *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *_Buf1;
  void *pvVar7;
  void *pvVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  size_t sVar12;
  size_t sVar13;
  ulonglong _Size;
  ulonglong uVar14;
  undefined1 auStack_638 [32];
  undefined4 local_618;
  longlong *plStack_610;
  longlong *plStack_608;
  longlong lStack_600;
  undefined8 local_5f8;
  undefined8 *puStack_5f0;
  longlong alStack_5e8 [2];
  ulonglong uStack_5d8;
  ulonglong uStack_5d0;
  undefined1 uStack_5c8;
  undefined7 uStack_5c7;
  undefined8 uStack_5b8;
  ulonglong uStack_5b0;
  undefined1 uStack_5a8;
  undefined7 uStack_5a7;
  undefined8 uStack_598;
  ulonglong uStack_590;
  longlong local_588 [2];
  undefined8 uStack_578;
  ulonglong uStack_570;
  undefined **local_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 local_4e0 [16];
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined4 auStack_4b8 [12];
  char acStack_488 [1088];
  ulonglong local_48;
  
  local_5f8 = 0xfffffffffffffffe;
  local_48 = DAT_18001d018 ^ (ulonglong)auStack_638;
  local_618 = 0;
  local_568 = CExt2File::vftable;
  local_4d0 = 0;
  local_4c8 = 0xf;
  local_4e0[0] = 0;
  FUN_180005640(local_588,1,'\\');
  uStack_5d8 = 0;
  uVar14 = 0xf;
  uStack_5d0 = 0xf;
  alStack_5e8[0]._0_1_ = 0;
  uStack_5b8 = 0;
  uStack_5b0 = 0xf;
  uStack_5c8 = 0;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (*(char *)((longlong)param_2 + sVar12) != '\0');
  FUN_180004ce0((longlong *)&uStack_5c8,param_2,sVar12);
  plStack_610 = (longlong *)0x0;
  plStack_608 = (longlong *)0x0;
  lStack_600 = 0;
  lVar1 = *(longlong *)(param_1 + 0x428);
  if ((lVar1 != 0) && (plVar4 = (longlong *)operator_new(0x30), plVar4 != (longlong *)0x0)) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = lVar1;
    plVar4[3] = 0;
    *(undefined4 *)(plVar4 + 4) = 0;
    plVar4[5] = 0;
    FUN_1800071f0((undefined8 *)&uStack_5c8,(char *)local_588,(longlong *)&plStack_610);
    for (plVar9 = plStack_610; uVar10 = 0, plVar9 != plStack_608; plVar9 = plVar9 + 4) {
      if (plVar9[2] != 0) {
        do {
          plVar6 = plVar9;
          if (0xf < (ulonglong)plVar9[3]) {
            plVar6 = (longlong *)*plVar9;
          }
          if (*(char *)(uVar10 + (longlong)plVar6) == '/') {
            plVar6 = plVar9;
            if (0xf < (ulonglong)plVar9[3]) {
              plVar6 = (longlong *)*plVar9;
            }
            *(undefined1 *)(uVar10 + (longlong)plVar6) = 0x5c;
          }
          uVar10 = (ulonglong)((int)uVar10 + 1);
        } while (uVar10 < (ulonglong)plVar9[2]);
      }
      iVar3 = FUN_180006d40(param_1,plVar4,(longlong)&local_568);
      while( true ) {
        if (iVar3 == 0) {
          free(plVar4);
          goto LAB_1800068bc;
        }
        FUN_180005ab0((longlong)&local_568,auStack_4b8);
        sVar12 = 0xffffffffffffffff;
        do {
          sVar13 = sVar12 + 1;
          lVar1 = sVar12 + 1;
          sVar12 = sVar13;
        } while (acStack_488[lVar1] != '\0');
        FUN_180004ce0(alStack_5e8,acStack_488,sVar13);
        uVar14 = uStack_5d0;
        uVar10 = uStack_5d8;
        plVar6 = plVar9;
        if (0xf < (ulonglong)plVar9[3]) {
          plVar6 = (longlong *)*plVar9;
        }
        _Buf1 = alStack_5e8;
        if (0xf < uStack_5d0) {
          _Buf1 = (longlong *)CONCAT71(alStack_5e8[0]._1_7_,(undefined1)alStack_5e8[0]);
        }
        uVar2 = plVar9[2];
        _Size = uStack_5d8;
        if (uVar2 < uStack_5d8) {
          _Size = uVar2;
        }
        iVar3 = memcmp(_Buf1,plVar6,_Size);
        if (((iVar3 == 0) && (uVar2 <= uVar10)) && (uVar10 <= uVar2)) break;
        iVar3 = FUN_180006d40(param_1,plVar4,(longlong)&local_568);
      }
      puVar11 = (undefined8 *)plVar4[2];
      if ((puVar11 != *(undefined8 **)(param_1 + 0x428)) && (puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)(puVar11,1);
        plVar4[2] = 0;
      }
      if ((void *)*plVar4 != (void *)0x0) {
        free((void *)*plVar4);
        *plVar4 = 0;
      }
      puVar11 = (undefined8 *)0x0;
      free(plVar4);
      puVar5 = (undefined8 *)operator_new(0xa8);
      puStack_5f0 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = CExt2File::vftable;
        plVar4 = puVar5 + 0x11;
        puVar5[0x13] = 0;
        puVar5[0x14] = 0xf;
        *(undefined1 *)plVar4 = 0;
        puVar5[1] = uStack_560;
        puVar5[2] = uStack_558;
        puVar5[3] = uStack_550;
        puVar5[4] = uStack_548;
        puVar5[5] = uStack_540;
        puVar5[6] = local_538;
        puVar5[7] = uStack_530;
        puVar5[8] = uStack_528;
        puVar5[9] = uStack_520;
        puVar5[10] = uStack_518;
        puVar5[0xb] = uStack_510;
        puVar5[0xc] = uStack_508;
        puVar5[0xd] = uStack_500;
        puVar5[0xe] = uStack_4f8;
        puVar5[0xf] = uStack_4f0;
        puVar5[0x10] = uStack_4e8;
        plVar6 = FUN_180002300((undefined8 *)&uStack_5a8,(undefined8 *)local_4e0);
        local_618 = 1;
        if (plVar4 != plVar6) {
          if (0xf < (ulonglong)puVar5[0x14]) {
            pvVar8 = (void *)*plVar4;
            pvVar7 = pvVar8;
            if ((0xfff < puVar5[0x14] + 1) &&
               (pvVar7 = *(void **)((longlong)pvVar8 + -8),
               0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar7);
          }
          puVar5[0x13] = 0;
          puVar5[0x14] = 0xf;
          *(undefined1 *)plVar4 = 0;
          lVar1 = plVar6[1];
          *plVar4 = *plVar6;
          puVar5[0x12] = lVar1;
          lVar1 = plVar6[3];
          puVar5[0x13] = plVar6[2];
          puVar5[0x14] = lVar1;
          plVar6[2] = 0;
          plVar6[3] = 0xf;
          *(undefined1 *)plVar6 = 0;
        }
        local_618 = 0;
        if (0xf < uStack_590) {
          pvVar7 = (void *)CONCAT71(uStack_5a7,uStack_5a8);
          pvVar8 = pvVar7;
          if ((0xfff < uStack_590 + 1) &&
             (pvVar8 = *(void **)((longlong)pvVar7 + -8),
             0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar8);
        }
        uStack_598 = 0;
        uStack_590 = 0xf;
        uStack_5a8 = 0;
        puVar11 = puVar5;
      }
      if ((puVar11 == (undefined8 *)0x0) ||
         (plVar4 = (longlong *)operator_new(0x30), plVar4 == (longlong *)0x0)) break;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (longlong)puVar11;
      plVar4[3] = 0;
      *(undefined4 *)(plVar4 + 4) = 0;
      plVar4[5] = 0;
    }
  }
LAB_1800068bc:
  plVar9 = plStack_608;
  plVar4 = plStack_610;
  if (plStack_610 != (longlong *)0x0) {
    for (; plVar4 != plVar9; plVar4 = plVar4 + 4) {
      FUN_1800027e0(plVar4);
    }
    plVar4 = plStack_610;
    if ((0xfff < (lStack_600 - (longlong)plStack_610 & 0xffffffffffffffe0U)) &&
       (plVar4 = (longlong *)plStack_610[-1],
       0x1f < (ulonglong)((longlong)plStack_610 + (-8 - (longlong)plVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar4);
    plStack_610 = (longlong *)0x0;
    plStack_608 = (longlong *)0x0;
    lStack_600 = 0;
  }
  if (0xf < uStack_5b0) {
    pvVar7 = (void *)CONCAT71(uStack_5c7,uStack_5c8);
    pvVar8 = pvVar7;
    if ((0xfff < uStack_5b0 + 1) &&
       (pvVar8 = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
  }
  uStack_5b8 = 0;
  uStack_5b0 = 0xf;
  uStack_5c8 = 0;
  if (0xf < uVar14) {
    pvVar7 = (void *)CONCAT71(alStack_5e8[0]._1_7_,(undefined1)alStack_5e8[0]);
    pvVar8 = pvVar7;
    if ((0xfff < uVar14 + 1) &&
       (pvVar8 = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
  }
  uStack_5d8 = 0;
  uStack_5d0 = 0xf;
  alStack_5e8[0]._0_1_ = 0;
  if (0xf < uStack_570) {
    pvVar7 = (void *)CONCAT71(local_588[0]._1_7_,(undefined1)local_588[0]);
    pvVar8 = pvVar7;
    if ((0xfff < uStack_570 + 1) &&
       (pvVar8 = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
  }
  uStack_578 = 0;
  uStack_570 = 0xf;
  local_588[0]._0_1_ = 0;
  local_568 = CExt2File::vftable;
  FUN_1800027e0((longlong *)local_4e0);
  FUN_180012550(local_48 ^ (ulonglong)auStack_638);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180006b8a) */
/* WARNING: Removing unreachable block (ram,0x000180006866) */
/* WARNING: Removing unreachable block (ram,0x000180006b9f) */
/* WARNING: Removing unreachable block (ram,0x000180006bb4) */
/* WARNING: Removing unreachable block (ram,0x000180006bbb) */

void FUN_1800066ef(void)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *_Memory;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  void *pvVar8;
  void *pvVar9;
  void *unaff_RBX;
  longlong *plVar10;
  undefined8 *unaff_RBP;
  ulonglong unaff_RSI;
  undefined8 *puVar11;
  size_t sVar12;
  ulonglong uVar13;
  size_t sVar14;
  longlong unaff_R13;
  longlong *plStack0000000000000028;
  longlong *plStack0000000000000030;
  undefined1 uStack0000000000000050;
  undefined1 uStack0000000000000070;
  undefined7 in_stack_00000071;
  
  uStack0000000000000050 = (undefined1)unaff_RSI;
  unaff_RBP[-0x10] = 0;
  unaff_RBP[-0xf] = 0;
  unaff_RBP[-0x10] = 0;
  unaff_RBP[-0xf] = 0xf;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (*(char *)((longlong)unaff_RBX + sVar12) != '\0');
  uStack0000000000000070 = uStack0000000000000050;
  FUN_180004ce0((longlong *)&stack0x00000070,unaff_RBX,sVar12);
  plStack0000000000000028 = (longlong *)0x0;
  plStack0000000000000030 = (longlong *)0x0;
  uVar4 = *(ulonglong *)(unaff_R13 + 0x428);
  if ((uVar4 != 0) && (_Memory = (ulonglong *)operator_new(0x30), _Memory != (ulonglong *)0x0)) {
    *_Memory = unaff_RSI;
    _Memory[1] = unaff_RSI;
    _Memory[2] = uVar4;
    _Memory[3] = unaff_RSI;
    *(int *)(_Memory + 4) = (int)unaff_RSI;
    _Memory[5] = unaff_RSI;
    FUN_1800071f0((undefined8 *)&stack0x00000070,(char *)(unaff_RBP + -10),
                  (longlong *)&stack0x00000028);
    uVar4 = unaff_RSI;
    for (plVar10 = plStack0000000000000028; plVar10 != plStack0000000000000030;
        plVar10 = plVar10 + 4) {
      uVar13 = uVar4 & 0xffffffff;
      if (plVar10[2] != 0) {
        do {
          plVar7 = plVar10;
          if (0xf < (ulonglong)plVar10[3]) {
            plVar7 = (longlong *)*plVar10;
          }
          if (*(char *)(uVar4 + (longlong)plVar7) == '/') {
            plVar7 = plVar10;
            if (0xf < (ulonglong)plVar10[3]) {
              plVar7 = (longlong *)*plVar10;
            }
            *(undefined1 *)(uVar4 + (longlong)plVar7) = 0x5c;
          }
          uVar4 = (ulonglong)((int)uVar13 + 1);
          uVar13 = uVar4;
        } while (uVar4 < (ulonglong)plVar10[2]);
      }
      iVar3 = FUN_180006d40(unaff_R13,(longlong *)_Memory,(longlong)(unaff_RBP + -6));
      while( true ) {
        if (iVar3 == 0) {
          free(_Memory);
          goto LAB_1800068bc;
        }
        FUN_180005ab0((longlong)(unaff_RBP + -6),(undefined4 *)(unaff_RBP + 0x10));
        sVar12 = 0xffffffffffffffff;
        do {
          sVar14 = sVar12 + 1;
          lVar2 = sVar12 + 0xb1;
          sVar12 = sVar14;
        } while (*(char *)((longlong)unaff_RBP + lVar2) != '\0');
        FUN_180004ce0((longlong *)&stack0x00000050,unaff_RBP + 0x16,sVar14);
        plVar7 = plVar10;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar7 = (longlong *)*plVar10;
        }
        uVar4 = plVar10[2];
        uVar13 = unaff_RSI;
        if (uVar4 < unaff_RSI) {
          uVar13 = uVar4;
        }
        iVar3 = memcmp(&stack0x00000050,plVar7,uVar13);
        if (((iVar3 == 0) && (uVar4 <= unaff_RSI)) && (unaff_RSI <= uVar4)) break;
        iVar3 = FUN_180006d40(unaff_R13,(longlong *)_Memory,(longlong)(unaff_RBP + -6));
      }
      puVar11 = (undefined8 *)_Memory[2];
      if ((puVar11 != *(undefined8 **)(unaff_R13 + 0x428)) && (puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)(puVar11,1);
        _Memory[2] = 0;
      }
      if ((void *)*_Memory != (void *)0x0) {
        free((void *)*_Memory);
        *_Memory = 0;
      }
      puVar11 = (undefined8 *)0x0;
      free(_Memory);
      puVar5 = (undefined8 *)operator_new(0xa8);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = CExt2File::vftable;
        plVar7 = puVar5 + 0x11;
        puVar5[0x13] = 0;
        puVar5[0x14] = 0xf;
        *(undefined1 *)plVar7 = 0;
        uVar1 = unaff_RBP[-4];
        puVar5[1] = unaff_RBP[-5];
        puVar5[2] = uVar1;
        uVar1 = unaff_RBP[-2];
        puVar5[3] = unaff_RBP[-3];
        puVar5[4] = uVar1;
        uVar1 = *unaff_RBP;
        puVar5[5] = unaff_RBP[-1];
        puVar5[6] = uVar1;
        uVar1 = unaff_RBP[2];
        puVar5[7] = unaff_RBP[1];
        puVar5[8] = uVar1;
        uVar1 = unaff_RBP[4];
        puVar5[9] = unaff_RBP[3];
        puVar5[10] = uVar1;
        uVar1 = unaff_RBP[6];
        puVar5[0xb] = unaff_RBP[5];
        puVar5[0xc] = uVar1;
        uVar1 = unaff_RBP[8];
        puVar5[0xd] = unaff_RBP[7];
        puVar5[0xe] = uVar1;
        uVar1 = unaff_RBP[10];
        puVar5[0xf] = unaff_RBP[9];
        puVar5[0x10] = uVar1;
        plVar6 = FUN_180002300(unaff_RBP + -0xe,unaff_RBP + 0xb);
        if (plVar7 != plVar6) {
          if (0xf < (ulonglong)puVar5[0x14]) {
            pvVar9 = (void *)*plVar7;
            pvVar8 = pvVar9;
            if ((0xfff < puVar5[0x14] + 1) &&
               (pvVar8 = *(void **)((longlong)pvVar9 + -8),
               0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar8);
          }
          puVar5[0x13] = 0;
          puVar5[0x14] = 0xf;
          *(undefined1 *)plVar7 = 0;
          lVar2 = plVar6[1];
          *plVar7 = *plVar6;
          puVar5[0x12] = lVar2;
          lVar2 = plVar6[3];
          puVar5[0x13] = plVar6[2];
          puVar5[0x14] = lVar2;
          plVar6[2] = 0;
          plVar6[3] = 0xf;
          *(undefined1 *)plVar6 = 0;
        }
        if (0xf < (ulonglong)unaff_RBP[-0xb]) {
          pvVar9 = (void *)unaff_RBP[-0xe];
          pvVar8 = pvVar9;
          if ((0xfff < unaff_RBP[-0xb] + 1) &&
             (pvVar8 = *(void **)((longlong)pvVar9 + -8),
             0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar8);
        }
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0xf;
        *(undefined1 *)(unaff_RBP + -0xe) = 0;
        puVar11 = puVar5;
      }
      uVar4 = 0;
      if ((puVar11 == (undefined8 *)0x0) ||
         (_Memory = (ulonglong *)operator_new(0x30), _Memory == (ulonglong *)0x0)) break;
      *_Memory = 0;
      _Memory[1] = 0;
      _Memory[2] = (ulonglong)puVar11;
      _Memory[3] = 0;
      *(undefined4 *)(_Memory + 4) = 0;
      _Memory[5] = 0;
    }
  }
LAB_1800068bc:
  plVar7 = plStack0000000000000030;
  plVar10 = plStack0000000000000028;
  if (plStack0000000000000028 != (longlong *)0x0) {
    for (; plVar10 != plVar7; plVar10 = plVar10 + 4) {
      FUN_1800027e0(plVar10);
    }
    plVar10 = plStack0000000000000028;
    if ((0xfff < (unaff_RSI - (longlong)plStack0000000000000028 & 0xffffffffffffffe0)) &&
       (plVar10 = (longlong *)plStack0000000000000028[-1],
       0x1f < (ulonglong)((longlong)plStack0000000000000028 + (-8 - (longlong)plVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar10);
    plStack0000000000000028 = (longlong *)0x0;
    plStack0000000000000030 = (longlong *)0x0;
  }
  if (0xf < (ulonglong)unaff_RBP[-0xf]) {
    pvVar8 = (void *)CONCAT71(in_stack_00000071,uStack0000000000000070);
    pvVar9 = pvVar8;
    if ((0xfff < unaff_RBP[-0xf] + 1) &&
       (pvVar9 = *(void **)((longlong)pvVar8 + -8),
       0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar9);
  }
  unaff_RBP[-0x10] = 0;
  unaff_RBP[-0xf] = 0xf;
  uStack0000000000000070 = 0;
  uStack0000000000000050 = 0;
  if (0xf < (ulonglong)unaff_RBP[-7]) {
    pvVar9 = (void *)unaff_RBP[-10];
    pvVar8 = pvVar9;
    if ((0xfff < unaff_RBP[-7] + 1) &&
       (pvVar8 = *(void **)((longlong)pvVar9 + -8),
       0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
  }
  unaff_RBP[-8] = 0;
  unaff_RBP[-7] = 0xf;
  *(undefined1 *)(unaff_RBP + -10) = 0;
  unaff_RBP[-6] = CExt2File::vftable;
  FUN_1800027e0(unaff_RBP + 0xb);
  FUN_180012550(unaff_RBP[0x9e] ^ (ulonglong)&stack0x00000000);
  return;
}




bool FUN_180006c70(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  bool bVar1;
  void *pvVar2;
  
  if ((*(uint *)(param_2 + 0x20) & 0x80000) == 0) {
    pvVar2 = FUN_180006030(param_1,param_2,param_3);
    if (pvVar2 != (void *)0x0) {
      bVar1 = FUN_180006cc0(param_1,(longlong)pvVar2,param_4);
      return bVar1;
    }
  }
  return false;
}




bool FUN_180006cc0(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  uVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x440) + 8))();
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x440) + 8);
  uVar1 = (ulonglong)*(uint *)(param_1 + 0xc) / (ulonglong)uVar2;
  iVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_3,uVar1 * param_2,uVar1);
  return iVar3 == (int)uVar1;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180006d40(longlong param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  undefined7 extraout_var;
  undefined8 uVar9;
  longlong *plVar10;
  undefined7 extraout_var_00;
  undefined1 *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88 [4];
  longlong local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_98 = 0xfffffffffffffffe;
  local_48 = DAT_18001d018 ^ (ulonglong)auStack_b8;
  if (param_2 == (longlong *)0x0) goto LAB_18000702f;
  local_58 = 0;
  uVar15 = 0xf;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  if (*param_2 != 0) {
LAB_180006e0a:
    puVar13 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
LAB_180006e20:
    do {
      lVar3 = param_2[1];
      if (lVar3 == 0) {
        puVar12 = (uint *)*param_2;
        param_2[1] = (longlong)puVar12;
      }
      else {
        puVar12 = (uint *)((ulonglong)*(ushort *)(lVar3 + 4) + lVar3);
        param_2[1] = (longlong)puVar12;
        if ((uint *)((ulonglong)*(uint *)(param_1 + 0xc) + *param_2) <= puVar12) {
          *(undefined4 *)(param_2 + 4) = 0;
          param_2[1] = 0;
          lVar3 = param_2[2];
          if ((CONCAT44(*(undefined4 *)(lVar3 + 0x74),*(undefined4 *)(lVar3 + 0xc)) <=
               (ulonglong)param_2[3]) ||
             (bVar5 = FUN_180006c70(param_1,lVar3 + 8,*(uint *)(param_2 + 5),*param_2),
             (int)CONCAT71(extraout_var_00,bVar5) == 0)) goto LAB_180006f7e;
          param_2[5] = param_2[5] + 1;
          goto LAB_180006e20;
        }
      }
      uVar2 = *puVar12;
      uVar1 = (ushort)puVar12[1];
      if ((((uVar1 & 3) != 0) || (uVar1 < (*(byte *)((longlong)puVar12 + 6) + 0xb & 0xfffc))) ||
         ((*(uint *)(param_1 + 0x1c) < uVar2 || ((uVar2 != 2 && (uVar2 < 0xb))))))
      goto LAB_180006f7e;
      iVar6 = (int)param_2[4];
      if ((*(uint *)(param_1 + 0xc) < iVar6 + 0xcU) ||
         (*(uint *)(param_1 + 0xc) < iVar6 + (uint)uVar1)) goto LAB_180006f7e;
      param_2[3] = param_2[3] + (ulonglong)uVar1;
      *(uint *)(param_2 + 4) = (uint)(ushort)puVar12[1] + iVar6;
      FUN_180004ce0(local_68,puVar12 + 2,(ulonglong)*(byte *)((longlong)puVar12 + 6));
      uVar15 = local_50;
      uVar4 = local_58;
      puVar13 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
      puVar11 = (undefined1 *)local_68;
      if (0xf < local_50) {
        puVar11 = puVar13;
      }
      uVar14 = local_58;
      if (1 < local_58) {
        uVar14 = 1;
      }
      iVar6 = memcmp(puVar11,&DAT_180015f88,uVar14);
      if (((iVar6 != 0) || (uVar4 == 0)) || (1 < uVar4)) {
        puVar11 = (undefined1 *)local_68;
        if (0xf < uVar15) {
          puVar11 = puVar13;
        }
        uVar14 = uVar4;
        if (2 < uVar4) {
          uVar14 = 2;
        }
        iVar6 = memcmp(puVar11,&DAT_180015f8c,uVar14);
        if (((iVar6 != 0) || (uVar4 < 2)) || (2 < uVar4)) goto LAB_180006f30;
      }
    } while( true );
  }
  pvVar7 = operator_new((ulonglong)*(uint *)(param_1 + 0xc));
  *param_2 = (longlong)pvVar7;
  if ((((pvVar7 != (void *)0x0) && ((*(uint *)(param_2[2] + 0x28) & 0x80000) == 0)) &&
      (pvVar8 = FUN_180006030(param_1,param_2[2] + 8,*(uint *)(param_2 + 5)), pvVar8 != (void *)0x0)
      ) && (bVar5 = FUN_180006cc0(param_1,(longlong)pvVar8,pvVar7),
           (int)CONCAT71(extraout_var,bVar5) != 0)) {
    param_2[5] = param_2[5] + 1;
    goto LAB_180006e0a;
  }
  puVar13 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
  goto LAB_180006f7e;
LAB_180006f30:
  uVar9 = FUN_180007060(param_1,(ulonglong)*(uint *)param_2[1],param_3);
  if ((int)uVar9 != 0) {
    local_90 = local_88;
    plVar10 = FUN_180002300(local_88,local_68);
    FUN_180007180(param_3,plVar10);
    puVar13 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
    uVar15 = local_50;
  }
LAB_180006f7e:
  if (0xf < uVar15) {
    puVar11 = puVar13;
    if ((0xfff < uVar15 + 1) &&
       (puVar11 = *(undefined1 **)(puVar13 + 0xfffffffffffffff8),
       (undefined1 *)0x1f < puVar13 + (-8 - (longlong)puVar11))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(puVar11);
  }
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
LAB_18000702f:
  FUN_180012550(local_48 ^ (ulonglong)auStack_b8);
  return;
}




undefined8 FUN_180007060(longlong param_1,ulonglong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  undefined7 extraout_var;
  ulonglong uVar10;
  
  if ((param_2 == 2) || (10 < param_2)) {
    pvVar9 = *(void **)(param_1 + 0x430);
    if (pvVar9 == (void *)0x0) {
      pvVar9 = operator_new((ulonglong)*(uint *)(param_1 + 0xc));
      *(void **)(param_1 + 0x430) = pvVar9;
      if (pvVar9 == (void *)0x0) {
        return 0;
      }
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_2 - 1;
    auVar5 = auVar4 / ZEXT416(*(uint *)(param_1 + 0x10));
    if (auVar5._0_4_ <= *(uint *)(param_1 + 0x18)) {
      uVar8 = *(int *)(param_1 + 0x14) * SUB164(auVar4 % ZEXT416(*(uint *)(param_1 + 0x10)),0);
      uVar3 = (ulonglong)uVar8 % (ulonglong)*(uint *)(param_1 + 0xc);
      uVar10 = (ulonglong)
               (*(int *)((auVar5._0_8_ & 0xffffffff) * 0x20 + 8 + *(longlong *)(param_1 + 0x420)) +
               uVar8 / *(uint *)(param_1 + 0xc));
      if ((uVar10 == *(ulonglong *)(param_1 + 0x438)) ||
         (bVar7 = FUN_180006cc0(param_1,uVar10,pvVar9), (int)CONCAT71(extraout_var,bVar7) != 0)) {
        lVar2 = *(longlong *)(param_1 + 0x430);
        uVar6 = ((undefined8 *)(uVar3 + lVar2))[1];
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(uVar3 + lVar2);
        *(undefined8 *)(param_3 + 0x10) = uVar6;
        puVar1 = (undefined8 *)(uVar3 + 0x10 + lVar2);
        uVar6 = puVar1[1];
        *(undefined8 *)(param_3 + 0x18) = *puVar1;
        *(undefined8 *)(param_3 + 0x20) = uVar6;
        puVar1 = (undefined8 *)(uVar3 + 0x20 + lVar2);
        uVar6 = puVar1[1];
        *(undefined8 *)(param_3 + 0x28) = *puVar1;
        *(undefined8 *)(param_3 + 0x30) = uVar6;
        puVar1 = (undefined8 *)(uVar3 + 0x30 + lVar2);
        uVar6 = puVar1[1];
        *(undefined8 *)(param_3 + 0x38) = *puVar1;
        *(undefined8 *)(param_3 + 0x40) = uVar6;
        puVar1 = (undefined8 *)(uVar3 + 0x40 + lVar2);
        uVar6 = puVar1[1];
        *(undefined8 *)(param_3 + 0x48) = *puVar1;
        *(undefined8 *)(param_3 + 0x50) = uVar6;
        puVar1 = (undefined8 *)(uVar3 + 0x50 + lVar2);
        uVar6 = puVar1[1];
        *(undefined8 *)(param_3 + 0x58) = *puVar1;
        *(undefined8 *)(param_3 + 0x60) = uVar6;
        puVar1 = (undefined8 *)(uVar3 + 0x60 + lVar2);
        uVar6 = puVar1[1];
        *(undefined8 *)(param_3 + 0x68) = *puVar1;
        *(undefined8 *)(param_3 + 0x70) = uVar6;
        puVar1 = (undefined8 *)(uVar3 + 0x70 + lVar2);
        uVar6 = puVar1[1];
        *(undefined8 *)(param_3 + 0x78) = *puVar1;
        *(undefined8 *)(param_3 + 0x80) = uVar6;
        *(ulonglong *)(param_1 + 0x438) = uVar10;
        return 1;
      }
    }
  }
  return 0;
}




void FUN_180007180(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_18 = DAT_18001d018 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((longlong *)(param_1 + 0x88) != param_2) {
    plVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar1 = (longlong *)*param_2;
    }
    FUN_180004ce0((longlong *)(param_1 + 0x88),plVar1,param_2[2]);
  }
  FUN_1800027e0(param_2);
  FUN_180012550(local_18 ^ (ulonglong)auStack_48);
  return;
}




void FUN_1800071f0(undefined8 *param_1,char *param_2,longlong *param_3)

{
  size_t _Size;
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong *plVar9;
  ulonglong uVar10;
  size_t _MaxCount;
  ulonglong uVar11;
  char *_Buf2;
  longlong *plVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong *local_80;
  char *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_18001d018 ^ (ulonglong)auStack_a8;
  uVar10 = 0;
  local_88 = 0;
  local_80 = param_3;
  local_78 = param_2;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    plVar12 = (longlong *)param_3[1];
    plVar9 = (longlong *)*param_3;
    if (plVar9 != plVar12) {
      do {
        FUN_1800027e0(plVar9);
        plVar9 = plVar9 + 4;
      } while (plVar9 != plVar12);
      plVar9 = (longlong *)*param_3;
    }
    param_3[1] = (longlong)plVar9;
    uVar11 = param_1[2];
    pcVar8 = local_78;
    if (uVar11 != 0) {
      do {
        _Buf2 = pcVar8;
        if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
          _Buf2 = *(char **)pcVar8;
        }
        puVar6 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar6 = (undefined8 *)*param_1;
        }
        _Size = *(size_t *)(pcVar8 + 0x10);
        plVar12 = local_80;
        if ((uVar11 < _Size) || (uVar11 - _Size < uVar10)) break;
        uVar7 = uVar10;
        if (_Size != 0) {
          local_70 = (uVar11 - _Size) + 1 + (longlong)puVar6;
          pvVar4 = (void *)(uVar10 + (longlong)puVar6);
          _MaxCount = local_70 - (longlong)pvVar4;
          while( true ) {
            pvVar4 = memchr(pvVar4,(int)*_Buf2,_MaxCount);
            plVar12 = local_80;
            if (pvVar4 == (void *)0x0) goto LAB_180007443;
            iVar3 = memcmp(pvVar4,_Buf2,_Size);
            if (iVar3 == 0) break;
            pvVar4 = (void *)((longlong)pvVar4 + 1);
            _MaxCount = local_70 - (longlong)pvVar4;
          }
          pcVar8 = local_78;
          uVar7 = (longlong)pvVar4 - (longlong)puVar6;
        }
        plVar12 = local_80;
        if (uVar7 == 0xffffffffffffffff) break;
        if (uVar10 < uVar7) {
          local_50 = 0;
          uStack_48 = 0xf;
          local_60 = 0;
          if ((ulonglong)param_1[2] < uVar10) goto LAB_18000752f;
          uVar5 = param_1[2] - uVar10;
          uVar11 = uVar7 - uVar10;
          if (uVar5 < uVar7 - uVar10) {
            uVar11 = uVar5;
          }
          puVar6 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar6 = (undefined8 *)*param_1;
          }
          FUN_180004ce0((longlong *)&local_60,(void *)((longlong)puVar6 + uVar10),uVar11);
          plVar12 = local_80;
          local_88 = 1;
          puVar6 = (undefined8 *)local_80[1];
          if ((undefined8 *)local_80[2] == puVar6) {
            FUN_1800053a0(local_80,puVar6,(undefined8 *)&local_60);
          }
          else {
            puVar6[2] = 0;
            puVar6[3] = 0;
            *puVar6 = CONCAT71(uStack_5f,local_60);
            puVar6[1] = uStack_58;
            puVar6[2] = local_50;
            puVar6[3] = uStack_48;
            local_50 = 0;
            uStack_48 = 0xf;
            local_60 = 0;
            local_80[1] = local_80[1] + 0x20;
          }
          local_88 = 0;
          if (0xf < uStack_48) {
            pvVar2 = (void *)CONCAT71(uStack_5f,local_60);
            pvVar4 = pvVar2;
            if ((0xfff < uStack_48 + 1) &&
               (pvVar4 = *(void **)((longlong)pvVar2 + -8),
               0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar4);
          }
          local_50 = 0;
          uStack_48 = 0xf;
          local_60 = 0;
          uVar10 = *(longlong *)(local_78 + 0x10) + uVar7;
          pcVar8 = local_78;
        }
        else {
          uVar10 = uVar10 + _Size;
        }
        uVar11 = param_1[2];
      } while (uVar10 < uVar11);
LAB_180007443:
      if (uVar10 < (ulonglong)param_1[2]) {
        local_50 = 0;
        uStack_48 = 0xf;
        local_60 = 0;
        if ((ulonglong)param_1[2] < uVar10) {
          FUN_180007580();
LAB_18000752f:
          FUN_180007580();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar11 = param_1[2] - uVar10;
        uVar7 = param_1[2] - uVar10;
        if (uVar7 < uVar11) {
          uVar11 = uVar7;
        }
        if (0xf < (ulonglong)param_1[3]) {
          param_1 = (undefined8 *)*param_1;
        }
        FUN_180004ce0((longlong *)&local_60,(void *)((longlong)param_1 + uVar10),uVar11);
        local_88 = 2;
        FUN_1800075f0(plVar12,(undefined8 *)&local_60);
        local_88 = 0;
        if (0xf < uStack_48) {
          pvVar2 = (void *)CONCAT71(uStack_5f,local_60);
          pvVar4 = pvVar2;
          if ((0xfff < uStack_48 + 1) &&
             (pvVar4 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar4);
        }
        local_50 = 0;
        uStack_48 = 0xf;
        local_60 = 0;
      }
    }
  }
  FUN_180012550(local_40 ^ (ulonglong)auStack_a8);
  return;
}




void FUN_180007540(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if (param_2 != param_3) {
    do {
      FUN_1800027e0(param_2);
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  return;
}




void FUN_180007580(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_1800075a0(undefined8 param_1,void *param_2,longlong param_3)

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




void FUN_1800075f0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[2] != puVar1) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    uVar2 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar2;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    param_1[1] = param_1[1] + 0x20;
    return;
  }
  FUN_1800053a0(param_1,puVar1,param_2);
  return;
}




undefined8 *
FUN_180007640(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = IFSInterface::vftable;
  *param_1 = CExt4FS::vftable;
  param_1[1] = 0;
  puVar1 = (undefined8 *)operator_new(0x450);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_180007c20(puVar1,param_2,param_3,param_4);
  }
  param_1[1] = puVar1;
  if (*(char *)(puVar1 + 0x88) == '\0') {
    (**(code **)*puVar1)(puVar1,1);
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * FUN_1800076d0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = CExt4FS::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
    param_1[1] = 0;
  }
  *param_1 = IFSInterface::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180007740(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_180007e60(*(longlong *)(param_1 + 8),(undefined8 *)param_2);
    return 1;
  }
  return 0;
}




undefined8 FUN_180007750(longlong param_1,void *param_2,int *param_3)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  void **local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined **local_88;
  void *local_80;
  void *local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    local_a0 = 0xfffffffffffffffe;
    local_38 = DAT_18001d018 ^ (ulonglong)auStack_c8;
    if (param_2 != (void *)0x0) {
      local_88 = CExt4File::vftable;
      local_80 = (void *)0x0;
      local_60 = 0;
      local_58 = 0xf;
      local_70[0] = 0;
      local_a8 = &local_50;
      local_50 = (void *)0x0;
      local_48 = 0;
      local_78 = pvVar1;
      local_50 = (void *)FUN_180009550();
      if (*(char *)((longlong)pvVar1 + 0x440) == '\0') {
        local_88 = CExt4File::vftable;
        if (local_80 != (void *)0x0) {
          free(local_80);
        }
        local_80 = (void *)0x0;
        FUN_1800098f0((longlong *)&local_50);
        local_a8 = &local_50;
        FUN_1800098f0((longlong *)&local_50);
        free(local_50);
        FUN_1800027e0((longlong *)local_70);
      }
      else {
        local_98 = (longlong *)FUN_180008800(pvVar1,param_2);
        if (local_98 == (longlong *)0x0) {
          FUN_180007d10(&local_88);
        }
        else {
          iVar2 = FUN_180009000((longlong)pvVar1,local_98,(longlong)&local_88);
          if (iVar2 == 0) {
            FUN_180007d10(&local_88);
          }
          else {
            FUN_180007ef0((longlong)&local_88,param_3);
            FUN_180007d10(&local_88);
          }
        }
      }
    }
    uVar3 = FUN_180012550(local_38 ^ (ulonglong)auStack_c8);
    return uVar3;
  }
  return 0;
}




undefined8 FUN_180007760(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  void **local_98;
  undefined8 local_90;
  undefined **local_88;
  void *local_80;
  longlong local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    local_90 = 0xfffffffffffffffe;
    local_38 = DAT_18001d018 ^ (ulonglong)auStack_b8;
    if (param_2 != (longlong *)0x0) {
      local_88 = CExt4File::vftable;
      local_80 = (void *)0x0;
      local_60 = 0;
      local_58 = 0xf;
      local_70[0] = 0;
      local_98 = &local_50;
      local_50 = (void *)0x0;
      local_48 = 0;
      local_78 = lVar1;
      local_50 = (void *)FUN_180009550();
      if (*(char *)(lVar1 + 0x440) == '\0') {
        local_88 = CExt4File::vftable;
        if (local_80 != (void *)0x0) {
          free(local_80);
        }
        local_80 = (void *)0x0;
        FUN_1800098f0((longlong *)&local_50);
        local_98 = &local_50;
        FUN_1800098f0((longlong *)&local_50);
        free(local_50);
        FUN_1800027e0((longlong *)local_70);
      }
      else {
        iVar2 = FUN_180009000(lVar1,param_2,(longlong)&local_88);
        if (iVar2 == 0) {
          FUN_180007d10(&local_88);
        }
        else {
          FUN_180007ef0((longlong)&local_88,param_3);
          FUN_180007d10(&local_88);
        }
      }
    }
    uVar3 = FUN_180012550(local_38 ^ (ulonglong)auStack_b8);
    return uVar3;
  }
  return 0;
}




undefined8 FUN_180007770(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  return 0;
}




longlong FUN_180007780(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  if (*(char *)(lVar5 + 0x440) != '\0') {
    uVar1 = *(uint *)(lVar5 + 0x198);
    uVar2 = *(uint *)(lVar5 + 400);
    uVar3 = *(uint *)(lVar5 + 0x4c);
    uVar4 = *(uint *)(lVar5 + 0x44);
    uVar6 = (*(code *)**(undefined8 **)(*(longlong *)(lVar5 + 0x448) + 8))();
    return ((ulonglong)*(uint *)(lVar5 + 0x38) / (ulonglong)uVar6) *
           (((((ulonglong)uVar2 << 0x20) - ((ulonglong)uVar1 << 0x20)) - (ulonglong)uVar3) +
           (ulonglong)uVar4);
  }
  return 0;
}




void FUN_180007790(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_180009590(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x1c) = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 5);
  return;
}




undefined8 *
FUN_1800077e0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x492492492492490 < (ulonglong)param_1[1]) {
    FUN_1800095d0(param_1,param_6);
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
      goto LAB_18000785f;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_18000785f;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_18000785f:
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
        goto LAB_180007a05;
      }
LAB_180007976:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_180007976;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180004400(param_1,plVar2);
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
LAB_180007a05:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180007a60(longlong *param_1,undefined8 *param_2,char param_3,uint *param_4,longlong *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0xfffffffffffffffe;
  plVar1 = (longlong *)*param_1;
  bVar5 = true;
  plVar3 = (longlong *)plVar1[1];
  plVar4 = plVar1;
  while (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar5 = *param_4 < *(uint *)((longlong)plVar3 + 0x1c);
    }
    else {
      bVar5 = *param_4 <= *(uint *)((longlong)plVar3 + 0x1c);
    }
    plVar4 = plVar3;
    if (bVar5 == false) {
      plVar3 = (longlong *)plVar3[2];
    }
    else {
      plVar3 = (longlong *)*plVar3;
    }
  }
  local_38 = plVar4;
  if (bVar5 != false) {
    if (plVar4 == (longlong *)*plVar1) {
      puVar2 = FUN_1800077e0(param_1,&local_38,'\x01',plVar4,param_4,param_5);
      *param_2 = *puVar2;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    FUN_180002a00((longlong *)&local_38);
  }
  plVar1 = local_38;
  if (*(uint *)((longlong)local_38 + 0x1c) < *param_4) {
    puVar2 = FUN_1800077e0(param_1,&local_38,bVar5,plVar4,param_4,param_5);
    *param_2 = *puVar2;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_28 = 0x38;
    free(param_5);
    *param_2 = plVar1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 * FUN_180007bb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = CExt4File::vftable;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = FUN_180009550();
  param_1[7] = uVar1;
  return param_1;
}




undefined8 *
FUN_180007c20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[0x89] = param_2;
  *param_1 = CExt4Partition::vftable;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  param_1[1] = 0;
  uVar2 = 0;
  param_1[2] = 0;
  uVar3 = 0x400;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  memset(param_1 + 8,0,0x400);
  uVar1 = FUN_1800084e0((longlong)param_1,uVar2,uVar3,param_4);
  *(char *)(param_1 + 0x88) = (char)uVar1;
  return param_1;
}




void FUN_180007c90(longlong *param_1)

{
  FUN_1800098f0(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180007cc0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180007ce0(longlong *param_1)

{
  FUN_1800098f0(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180007d10(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = CExt4File::vftable;
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
  }
  param_1[1] = 0;
  plVar1 = param_1 + 7;
  FUN_1800098f0(plVar1);
  FUN_1800098f0(plVar1);
  free((void *)*plVar1);
  FUN_1800027e0(param_1 + 3);
  return;
}




undefined8 * FUN_180007d90(undefined8 *param_1,uint param_2)

{
  FUN_180007d10(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180007dd0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = CExt4Partition::vftable;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[4] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    free((void *)param_1[3]);
    param_1[3] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180007e60(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_2[2];
  if ((puVar1 != *(undefined8 **)(param_1 + 0x20)) && (puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
    param_2[2] = 0;
  }
  if ((void *)*param_2 != (void *)0x0) {
    free((void *)*param_2);
    *param_2 = 0;
  }
  free(param_2);
  return;
}




undefined8 FUN_180007ec0(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_180007e60(param_1,param_2);
    return 1;
  }
  return 0;
}




void FUN_180007ef0(longlong param_1,int *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *_Src;
  tm *ptVar3;
  void *pvVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  ulonglong local_80 [2];
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong uStack_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_80[1] = 0xfffffffffffffffe;
  local_30 = DAT_18001d018 ^ (ulonglong)auStack_a8;
  uVar9 = 0;
  uVar8 = 0;
  local_88 = 0;
  memset(param_2 + 0xc,0,0x400);
  param_2[0x10c] = 0;
  param_2[0x10d] = 0;
  param_2[0x10e] = 0;
  param_2[0x10f] = 0;
  param_2[0x110] = 0;
  param_2[0x111] = 0;
  param_2[0x112] = 0;
  param_2[0x113] = 0;
  param_2[0x114] = 0;
  param_2[0x115] = 0;
  param_2[0x116] = 0;
  param_2[0x117] = 0;
  param_2[0x118] = 0;
  param_2[0x119] = 0;
  puVar2 = FUN_180002300((undefined8 *)&local_50,(undefined8 *)(param_1 + 0x18));
  local_88 = 1;
  _Src = FUN_180002300((undefined8 *)&local_70,(undefined8 *)(param_1 + 0x18));
  local_88 = 3;
  if (0xf < (ulonglong)_Src[3]) {
    _Src = (undefined8 *)*_Src;
  }
  memcpy(param_2 + 0xc,_Src,puVar2[2]);
  local_88 = 1;
  if (0xf < uStack_58) {
    pvVar1 = (void *)CONCAT71(uStack_6f,local_70);
    pvVar4 = pvVar1;
    if ((0xfff < uStack_58 + 1) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
  }
  local_60 = 0;
  uStack_58 = 0xf;
  local_70 = 0;
  local_88 = 0;
  if (0xf < uStack_38) {
    pvVar1 = (void *)CONCAT71(uStack_4f,local_50);
    pvVar4 = pvVar1;
    if ((0xfff < uStack_38 + 1) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
  }
  local_40 = 0;
  uStack_38 = 0xf;
  local_50 = 0;
  uVar5 = (uint)local_80[0];
  do {
    lVar6 = *(longlong *)(param_1 + 8);
    if (uVar9 == 0) {
      local_80[0] = (ulonglong)*(uint *)(lVar6 + 0xc);
      lVar7 = 8;
      lVar6 = 4;
    }
    else if (uVar9 == 1) {
      local_80[0] = (ulonglong)*(uint *)(lVar6 + 0x10);
      lVar7 = 0x18;
      lVar6 = 0x14;
    }
    else {
      local_80[0] = (ulonglong)*(uint *)(lVar6 + 8);
      lVar7 = 0x10;
      lVar6 = 0xc;
    }
    ptVar3 = _localtime64((__time64_t *)local_80);
    uVar5 = (uint)CONCAT11((char)ptVar3->tm_hour,(char)ptVar3->tm_min) << 8 | uVar5 & 0xff000000 |
            (uint)(byte)ptVar3->tm_sec;
    *(uint *)((longlong)param_2 + lVar7) =
         (ptVar3->tm_mon + 1U & 0xff) << 8 | (ptVar3->tm_year + 0x76c) * 0x10000 |
         (uint)(byte)ptVar3->tm_mday;
    *(uint *)((longlong)param_2 + lVar6) = uVar5;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 3);
  if (*(ushort **)(param_1 + 8) != (ushort *)0x0) {
    uVar8 = (uint)((**(ushort **)(param_1 + 8) & 0xf000) == 0x4000);
  }
  *param_2 = uVar8 << 4;
  param_2[7] = *(int *)(*(longlong *)(param_1 + 8) + 0x6c);
  param_2[8] = *(int *)(*(longlong *)(param_1 + 8) + 4);
  FUN_180012550(local_30 ^ (ulonglong)auStack_a8);
  return;
}




longlong FUN_180008470(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x440) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x198);
    uVar2 = *(uint *)(param_1 + 400);
    uVar3 = *(uint *)(param_1 + 0x4c);
    uVar4 = *(uint *)(param_1 + 0x44);
    uVar5 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x448) + 8))();
    return ((ulonglong)*(uint *)(param_1 + 0x38) / (ulonglong)uVar5) *
           (((((ulonglong)uVar2 << 0x20) - ((ulonglong)uVar1 << 0x20)) - (ulonglong)uVar3) +
           (ulonglong)uVar4);
  }
  return 0;
}




ulonglong FUN_1800084e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  void *local_40 [2];
  longlong local_30;
  
  uVar13 = 0;
  puVar5 = (undefined1 *)register0x00000020;
  if (*(longlong *)(param_1 + 0x448) != 0) {
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x448) + 8);
    puVar5 = (undefined1 *)(**(code **)*puVar11)(puVar11,param_2,param_3,param_4,0xfffffffffffffffe)
    ;
    iVar4 = (int)puVar5;
    uVar17 = (ulonglong)puVar5 & 0xffffffff;
    if (iVar4 != 0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar17;
      iVar3 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x7ff)) / auVar1,0);
      uVar10 = (iVar3 + 1) * iVar4;
      FUN_1800023e0((ulonglong *)local_40,(ulonglong)uVar10);
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x448) + 8);
      iVar3 = (**(code **)(*plVar12 + 8))(plVar12,local_40[0],0,iVar3 + 1);
      if (iVar3 != 0) {
        puVar11 = (undefined8 *)((longlong)local_40[0] + 0x400);
        lVar15 = 8;
        uVar14 = 0x80;
        puVar6 = (undefined8 *)(param_1 + 0x40);
        do {
          uVar8 = puVar11[1];
          *puVar6 = *puVar11;
          puVar6[1] = uVar8;
          uVar8 = puVar11[3];
          puVar6[2] = puVar11[2];
          puVar6[3] = uVar8;
          uVar8 = puVar11[5];
          puVar6[4] = puVar11[4];
          puVar6[5] = uVar8;
          uVar8 = puVar11[7];
          puVar6[6] = puVar11[6];
          puVar6[7] = uVar8;
          uVar8 = puVar11[9];
          puVar6[8] = puVar11[8];
          puVar6[9] = uVar8;
          uVar8 = puVar11[0xb];
          puVar6[10] = puVar11[10];
          puVar6[0xb] = uVar8;
          uVar8 = puVar11[0xd];
          puVar6[0xc] = puVar11[0xc];
          puVar6[0xd] = uVar8;
          uVar8 = puVar11[0xf];
          puVar6[0xe] = puVar11[0xe];
          puVar6[0xf] = uVar8;
          puVar11 = puVar11 + 0x10;
          lVar15 = lVar15 + -1;
          puVar6 = puVar6 + 0x10;
        } while (lVar15 != 0);
        if (((((*(short *)(param_1 + 0x78) == -0x10ad) && (*(int *)(param_1 + 0x44) != 0)) &&
             (*(uint *)(param_1 + 0x40) != 0)) &&
            ((*(int *)(param_1 + 0x60) != 0 && (*(int *)(param_1 + 0x68) != 0)))) &&
           ((*(short *)(param_1 + 0x13e) == 0x40 && (2 < *(uint *)(param_1 + 0x94))))) {
          iVar3 = 0x400 << ((byte)*(undefined4 *)(param_1 + 0x58) & 0x1f);
          if ((*(uint *)(param_1 + 0xa4) & 0x200) != 0) {
            iVar3 = iVar3 << ((byte)*(undefined4 *)(param_1 + 0x5c) & 0x1f);
          }
          if (((uint)(iVar3 == 0x400) == *(uint *)(param_1 + 0x54)) &&
             (*(uint *)(param_1 + 0x94) < *(uint *)(param_1 + 0x40))) {
            bVar9 = (byte)*(uint *)(param_1 + 0x58);
            uVar16 = 0x400 << (bVar9 & 0x1f);
            *(uint *)(param_1 + 0x38) = uVar16;
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x68);
            if (*(int *)(param_1 + 0x8c) != 0) {
              uVar14 = (uint)*(ushort *)(param_1 + 0x98);
            }
            *(uint *)(param_1 + 0xc) = uVar14;
            *(int *)(param_1 + 0x14) = 2 << (*(byte *)(param_1 + 0x1b4) & 0x1f);
            uVar14 = ((*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x54)) - 1U) /
                     *(uint *)(param_1 + 0x60) + 1;
            *(uint *)(param_1 + 0x10) = uVar14;
            if (*(uint *)(param_1 + 0x58) < *(uint *)(param_1 + 0x5c)) {
              *(int *)(param_1 + 0x3c) = 1 << ((char)*(uint *)(param_1 + 0x5c) - bVar9 & 0x1f);
            }
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar17;
            iVar3 = SUB164((ZEXT416(uVar14) << 6) / auVar2,0) + 1;
            pvVar7 = operator_new((ulonglong)(uint)(iVar3 * iVar4));
            *(void **)(param_1 + 0x18) = pvVar7;
            if ((pvVar7 != (void *)0x0) &&
               (plVar12 = (longlong *)(*(longlong *)(param_1 + 0x448) + 8),
               iVar4 = (**(code **)(*plVar12 + 8))
                                 (plVar12,pvVar7,
                                  ((uVar10 - 1) / uVar16 + 1) * (int)(uVar16 / uVar17),iVar3),
               iVar4 == iVar3)) {
              puVar11 = (undefined8 *)operator_new(0x48);
              if (puVar11 != (undefined8 *)0x0) {
                puVar11 = FUN_180007bb0(puVar11,param_1);
              }
              *(undefined8 **)(param_1 + 0x20) = puVar11;
              if (puVar11 != (undefined8 *)0x0) {
                uVar8 = FUN_180009370(param_1,2,(longlong)puVar11);
                uVar13 = (ulonglong)((int)uVar8 != 0);
              }
              goto LAB_18000878e;
            }
          }
        }
        uVar13 = 0;
      }
LAB_18000878e:
      if (local_40[0] == (void *)0x0) {
        return uVar13;
      }
      pvVar7 = local_40[0];
      if ((0xfff < (ulonglong)(local_30 - (longlong)local_40[0])) &&
         (pvVar7 = *(void **)((longlong)local_40[0] + -8),
         0x1f < (ulonglong)((longlong)local_40[0] + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar7);
      return uVar13;
    }
  }
  return (ulonglong)puVar5 & 0xffffffffffffff00;
}




void FUN_180008800(void *param_1,void *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  void **ppvVar6;
  void *pvVar7;
  void **ppvVar8;
  longlong *plVar9;
  undefined1 *_Buf1;
  void *pvVar10;
  longlong *plVar11;
  ulonglong uVar12;
  void **ppvVar13;
  size_t sVar14;
  size_t sVar15;
  ulonglong _Size;
  ulonglong uVar16;
  undefined1 auStack_5e8 [32];
  uint local_5c8;
  longlong *plStack_5c0;
  longlong *plStack_5b8;
  longlong lStack_5b0;
  void **local_5a8;
  void **ppvStack_5a0;
  undefined8 local_598;
  undefined1 uStack_590;
  undefined7 uStack_58f;
  ulonglong uStack_580;
  ulonglong uStack_578;
  undefined **local_568;
  undefined8 *local_560;
  void *local_558;
  undefined1 local_550 [16];
  undefined8 local_540;
  undefined8 local_538;
  void *local_530;
  undefined8 local_528;
  undefined1 uStack_518;
  undefined7 uStack_517;
  undefined8 uStack_508;
  ulonglong uStack_500;
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  undefined8 local_4e8;
  ulonglong uStack_4e0;
  undefined1 local_4d8;
  undefined7 uStack_4d7;
  undefined8 uStack_4c8;
  ulonglong uStack_4c0;
  int aiStack_4b8 [12];
  char acStack_488 [1088];
  ulonglong local_48;
  
  local_598 = 0xfffffffffffffffe;
  local_48 = DAT_18001d018 ^ (ulonglong)auStack_5e8;
  local_5c8 = 0;
  local_568 = CExt4File::vftable;
  local_560 = (undefined8 *)0x0;
  local_540 = 0;
  local_538 = 0xf;
  local_550[0] = 0;
  local_5a8 = &local_530;
  local_530 = (void *)0x0;
  local_528 = 0;
  local_558 = param_1;
  local_530 = (void *)FUN_180009550();
  FUN_180005640((longlong *)&local_4d8,1,'\\');
  uStack_580 = 0;
  uVar16 = 0xf;
  uStack_578 = 0xf;
  uStack_590 = 0;
  uStack_508 = 0;
  uStack_500 = 0xf;
  uStack_518 = 0;
  sVar14 = 0xffffffffffffffff;
  do {
    sVar14 = sVar14 + 1;
  } while (*(char *)((longlong)param_2 + sVar14) != '\0');
  FUN_180004ce0((longlong *)&uStack_518,param_2,sVar14);
  plStack_5c0 = (longlong *)0x0;
  plStack_5b8 = (longlong *)0x0;
  lStack_5b0 = 0;
  lVar1 = *(longlong *)((longlong)param_1 + 0x20);
  if ((lVar1 != 0) && (plVar5 = (longlong *)operator_new(0x30), plVar5 != (longlong *)0x0)) {
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = lVar1;
    plVar5[3] = 0;
    *(undefined4 *)(plVar5 + 4) = 0;
    plVar5[5] = 0;
    FUN_1800071f0((undefined8 *)&uStack_518,&local_4d8,(longlong *)&plStack_5c0);
    plVar11 = plStack_5c0;
    if (plStack_5c0 != plStack_5b8) {
      do {
        uVar12 = 0;
        if (plVar11[2] != 0) {
          do {
            plVar9 = plVar11;
            if (0xf < (ulonglong)plVar11[3]) {
              plVar9 = (longlong *)*plVar11;
            }
            if (*(char *)((longlong)plVar9 + uVar12) == '/') {
              plVar9 = plVar11;
              if (0xf < (ulonglong)plVar11[3]) {
                plVar9 = (longlong *)*plVar11;
              }
              *(undefined1 *)((longlong)plVar9 + uVar12) = 0x5c;
            }
            uVar12 = (ulonglong)((int)uVar12 + 1);
          } while (uVar12 < (ulonglong)plVar11[2]);
        }
        iVar4 = FUN_180009000((longlong)param_1,plVar5,(longlong)&local_568);
        while( true ) {
          if (iVar4 == 0) {
            free(plVar5);
            goto LAB_180008a70;
          }
          FUN_180007ef0((longlong)&local_568,aiStack_4b8);
          sVar14 = 0xffffffffffffffff;
          do {
            sVar15 = sVar14 + 1;
            lVar1 = sVar14 + 1;
            sVar14 = sVar15;
          } while (acStack_488[lVar1] != '\0');
          FUN_180004ce0((longlong *)&uStack_590,acStack_488,sVar15);
          uVar16 = uStack_578;
          uVar12 = uStack_580;
          plVar9 = plVar11;
          if (0xf < (ulonglong)plVar11[3]) {
            plVar9 = (longlong *)*plVar11;
          }
          _Buf1 = &uStack_590;
          if (0xf < uStack_578) {
            _Buf1 = (undefined1 *)CONCAT71(uStack_58f,uStack_590);
          }
          uVar2 = plVar11[2];
          _Size = uStack_580;
          if (uVar2 < uStack_580) {
            _Size = uVar2;
          }
          iVar4 = memcmp(_Buf1,plVar9,_Size);
          if (((iVar4 == 0) && (uVar2 <= uVar12)) && (uVar12 <= uVar2)) break;
          iVar4 = FUN_180009000((longlong)param_1,plVar5,(longlong)&local_568);
        }
        puVar3 = (undefined8 *)plVar5[2];
        if ((puVar3 != *(undefined8 **)((longlong)param_1 + 0x20)) && (puVar3 != (undefined8 *)0x0))
        {
          (**(code **)*puVar3)(puVar3,1);
          plVar5[2] = 0;
        }
        if ((void *)*plVar5 != (void *)0x0) {
          free((void *)*plVar5);
          *plVar5 = 0;
        }
        ppvVar13 = (void **)0x0;
        free(plVar5);
        ppvVar6 = (void **)operator_new(0x48);
        local_5a8 = ppvVar6;
        if (ppvVar6 != (void **)0x0) {
          *ppvVar6 = CExt4File::vftable;
          ppvVar6[1] = (void *)0x0;
          ppvVar6[2] = local_558;
          ppvVar13 = ppvVar6 + 3;
          ppvVar6[5] = (void *)0x0;
          ppvVar6[6] = (void *)0xf;
          *(undefined1 *)ppvVar13 = 0;
          ppvVar8 = ppvVar6 + 7;
          *ppvVar8 = (void *)0x0;
          ppvVar6[8] = (void *)0x0;
          ppvStack_5a0 = ppvVar8;
          pvVar7 = (void *)FUN_180009550();
          *ppvVar8 = pvVar7;
          FUN_1800094b0((longlong)ppvVar6,local_560);
          ppvVar8 = (void **)FUN_180002300((undefined8 *)&uStack_4f8,(undefined8 *)local_550);
          local_5c8 = local_5c8 | 1;
          if (ppvVar13 != ppvVar8) {
            if ((void *)0xf < ppvVar6[6]) {
              pvVar7 = *ppvVar13;
              pvVar10 = pvVar7;
              if ((0xfff < (longlong)ppvVar6[6] + 1U) &&
                 (pvVar10 = *(void **)((longlong)pvVar7 + -8),
                 0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar10);
            }
            ppvVar6[5] = (void *)0x0;
            ppvVar6[6] = (void *)0xf;
            *(undefined1 *)ppvVar13 = 0;
            pvVar7 = ppvVar8[1];
            *ppvVar13 = *ppvVar8;
            ppvVar6[4] = pvVar7;
            pvVar7 = ppvVar8[3];
            ppvVar6[5] = ppvVar8[2];
            ppvVar6[6] = pvVar7;
            ppvVar8[2] = (void *)0x0;
            ppvVar8[3] = (void *)0xf;
            *(undefined1 *)ppvVar8 = 0;
          }
          local_5c8 = local_5c8 & 0xfffffffe;
          if (0xf < uStack_4e0) {
            pvVar10 = (void *)CONCAT71(uStack_4f7,uStack_4f8);
            pvVar7 = pvVar10;
            if ((0xfff < uStack_4e0 + 1) &&
               (pvVar7 = *(void **)((longlong)pvVar10 + -8),
               0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar7);
          }
          local_4e8 = 0;
          uStack_4e0 = 0xf;
          uStack_4f8 = 0;
          ppvVar13 = ppvVar6;
        }
        if ((ppvVar13 == (void **)0x0) ||
           (plVar5 = (longlong *)operator_new(0x30), plVar5 == (longlong *)0x0)) break;
        *plVar5 = 0;
        plVar5[1] = 0;
        plVar5[2] = (longlong)ppvVar13;
        plVar5[3] = 0;
        *(undefined4 *)(plVar5 + 4) = 0;
        plVar5[5] = 0;
        plVar11 = plVar11 + 4;
      } while (plVar11 != plStack_5b8);
    }
  }
LAB_180008a70:
  plVar11 = plStack_5b8;
  plVar5 = plStack_5c0;
  if (plStack_5c0 != (longlong *)0x0) {
    for (; plVar5 != plVar11; plVar5 = plVar5 + 4) {
      FUN_1800027e0(plVar5);
    }
    plVar5 = plStack_5c0;
    if ((0xfff < (lStack_5b0 - (longlong)plStack_5c0 & 0xffffffffffffffe0U)) &&
       (plVar5 = (longlong *)plStack_5c0[-1],
       0x1f < (ulonglong)((longlong)plStack_5c0 + (-8 - (longlong)plVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar5);
    plStack_5c0 = (longlong *)0x0;
    plStack_5b8 = (longlong *)0x0;
    lStack_5b0 = 0;
  }
  if (0xf < uStack_500) {
    pvVar10 = (void *)CONCAT71(uStack_517,uStack_518);
    pvVar7 = pvVar10;
    if ((0xfff < uStack_500 + 1) &&
       (pvVar7 = *(void **)((longlong)pvVar10 + -8),
       0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
  }
  uStack_508 = 0;
  uStack_500 = 0xf;
  uStack_518 = 0;
  if (0xf < uVar16) {
    pvVar10 = (void *)CONCAT71(uStack_58f,uStack_590);
    pvVar7 = pvVar10;
    if ((0xfff < uVar16 + 1) &&
       (pvVar7 = *(void **)((longlong)pvVar10 + -8),
       0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
  }
  uStack_580 = 0;
  uStack_578 = 0xf;
  uStack_590 = 0;
  if (0xf < uStack_4c0) {
    pvVar10 = (void *)CONCAT71(uStack_4d7,local_4d8);
    pvVar7 = pvVar10;
    if ((0xfff < uStack_4c0 + 1) &&
       (pvVar7 = *(void **)((longlong)pvVar10 + -8),
       0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
  }
  uStack_4c8 = 0;
  uStack_4c0 = 0xf;
  local_4d8 = '\0';
  local_568 = CExt4File::vftable;
  if (local_560 != (undefined8 *)0x0) {
    free(local_560);
  }
  local_560 = (undefined8 *)0x0;
  FUN_1800098f0((longlong *)&local_530);
  ppvStack_5a0 = &local_530;
  FUN_1800098f0((longlong *)&local_530);
  free(local_530);
  FUN_1800027e0((longlong *)local_550);
  FUN_180012550(local_48 ^ (ulonglong)auStack_5e8);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180008d3a) */
/* WARNING: Removing unreachable block (ram,0x000180008a13) */
/* WARNING: Removing unreachable block (ram,0x000180008d4f) */
/* WARNING: Removing unreachable block (ram,0x000180008d64) */
/* WARNING: Removing unreachable block (ram,0x000180008d6b) */

void FUN_1800088a2(void)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *_Memory;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *pvVar9;
  void *unaff_RBX;
  longlong *plVar10;
  undefined8 *unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar11;
  undefined8 *puVar12;
  size_t sVar13;
  ulonglong uVar14;
  size_t sVar15;
  longlong unaff_R12;
  undefined **unaff_R15;
  longlong *plStack0000000000000028;
  longlong *plStack0000000000000030;
  undefined1 uStack0000000000000058;
  
  uStack0000000000000058 = (undefined1)unaff_RSI;
  unaff_RBP[-4] = 0;
  unaff_RBP[-3] = 0;
  unaff_RBP[-4] = 0;
  unaff_RBP[-3] = 0xf;
  *(undefined1 *)(unaff_RBP + -6) = uStack0000000000000058;
  sVar13 = 0xffffffffffffffff;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)unaff_RBX + sVar13) != '\0');
  FUN_180004ce0(unaff_RBP + -6,unaff_RBX,sVar13);
  plStack0000000000000028 = (longlong *)0x0;
  plStack0000000000000030 = (longlong *)0x0;
  uVar4 = *(ulonglong *)(unaff_R12 + 0x20);
  uVar11 = unaff_RSI;
  if ((uVar4 != 0) && (_Memory = (ulonglong *)operator_new(0x30), _Memory != (ulonglong *)0x0)) {
    *_Memory = unaff_RSI;
    _Memory[1] = unaff_RSI;
    _Memory[2] = uVar4;
    _Memory[3] = unaff_RSI;
    *(int *)(_Memory + 4) = (int)unaff_RSI;
    _Memory[5] = unaff_RSI;
    FUN_1800071f0(unaff_RBP + -6,(char *)(unaff_RBP + 2),(longlong *)&stack0x00000028);
    plVar10 = plStack0000000000000028;
    if (plStack0000000000000028 != plStack0000000000000030) {
      do {
        uVar14 = uVar11 & 0xffffffff;
        uVar4 = uVar11;
        if (plVar10[2] != 0) {
          do {
            plVar8 = plVar10;
            if (0xf < (ulonglong)plVar10[3]) {
              plVar8 = (longlong *)*plVar10;
            }
            if (*(char *)((longlong)plVar8 + uVar4) == '/') {
              plVar8 = plVar10;
              if (0xf < (ulonglong)plVar10[3]) {
                plVar8 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar8 + uVar4) = 0x5c;
            }
            uVar14 = (ulonglong)((int)uVar14 + 1);
            uVar4 = uVar14;
          } while (uVar14 < (ulonglong)plVar10[2]);
        }
        iVar3 = FUN_180009000(unaff_R12,(longlong *)_Memory,(longlong)(unaff_RBP + -0x10));
        if (iVar3 == 0) {
LAB_180008a59:
          free(_Memory);
LAB_180008a66:
          unaff_R15 = CExt4File::vftable;
          goto LAB_180008a70;
        }
        while( true ) {
          FUN_180007ef0((longlong)(unaff_RBP + -0x10),(int *)(unaff_RBP + 6));
          sVar13 = 0xffffffffffffffff;
          do {
            sVar15 = sVar13 + 1;
            lVar2 = sVar13 + 0x61;
            sVar13 = sVar15;
          } while (*(char *)((longlong)unaff_RBP + lVar2) != '\0');
          FUN_180004ce0((longlong *)&stack0x00000058,unaff_RBP + 0xc,sVar15);
          plVar8 = plVar10;
          if (0xf < (ulonglong)plVar10[3]) {
            plVar8 = (longlong *)*plVar10;
          }
          uVar4 = plVar10[2];
          uVar11 = unaff_RSI;
          if (uVar4 < unaff_RSI) {
            uVar11 = uVar4;
          }
          iVar3 = memcmp(&stack0x00000058,plVar8,uVar11);
          if (((iVar3 == 0) && (uVar4 <= unaff_RSI)) && (unaff_RSI <= uVar4)) break;
          iVar3 = FUN_180009000(unaff_R12,(longlong *)_Memory,(longlong)(unaff_RBP + -0x10));
          if (iVar3 == 0) {
            uVar11 = 0;
            goto LAB_180008a59;
          }
        }
        puVar12 = (undefined8 *)_Memory[2];
        if ((puVar12 != *(undefined8 **)(unaff_R12 + 0x20)) && (puVar12 != (undefined8 *)0x0)) {
          (**(code **)*puVar12)(puVar12,1);
          _Memory[2] = 0;
        }
        if ((void *)*_Memory != (void *)0x0) {
          free((void *)*_Memory);
          *_Memory = 0;
        }
        puVar12 = (undefined8 *)0x0;
        free(_Memory);
        puVar5 = (undefined8 *)operator_new(0x48);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = CExt4File::vftable;
          puVar5[1] = 0;
          puVar5[2] = unaff_RBP[-0xe];
          plVar8 = puVar5 + 3;
          puVar5[5] = 0;
          puVar5[6] = 0xf;
          *(undefined1 *)plVar8 = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          uVar6 = FUN_180009550();
          puVar5[7] = uVar6;
          FUN_1800094b0((longlong)puVar5,(undefined8 *)unaff_RBP[-0xf]);
          plVar7 = FUN_180002300(unaff_RBP + -2,unaff_RBP + -0xd);
          if (plVar8 != plVar7) {
            if (0xf < (ulonglong)puVar5[6]) {
              pvVar1 = (void *)*plVar8;
              pvVar9 = pvVar1;
              if ((0xfff < puVar5[6] + 1) &&
                 (pvVar9 = *(void **)((longlong)pvVar1 + -8),
                 0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar9);
            }
            puVar5[5] = 0;
            puVar5[6] = 0xf;
            *(undefined1 *)plVar8 = 0;
            lVar2 = plVar7[1];
            *plVar8 = *plVar7;
            puVar5[4] = lVar2;
            lVar2 = plVar7[3];
            puVar5[5] = plVar7[2];
            puVar5[6] = lVar2;
            plVar7[2] = 0;
            plVar7[3] = 0xf;
            *(undefined1 *)plVar7 = 0;
          }
          if (0xf < (ulonglong)unaff_RBP[1]) {
            pvVar1 = (void *)unaff_RBP[-2];
            pvVar9 = pvVar1;
            if ((0xfff < unaff_RBP[1] + 1) &&
               (pvVar9 = *(void **)((longlong)pvVar1 + -8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar9);
          }
          *unaff_RBP = 0;
          unaff_RBP[1] = 0xf;
          *(undefined1 *)(unaff_RBP + -2) = 0;
          puVar12 = puVar5;
        }
        uVar11 = 0;
        if ((puVar12 == (undefined8 *)0x0) ||
           (_Memory = (ulonglong *)operator_new(0x30), _Memory == (ulonglong *)0x0))
        goto LAB_180008a66;
        *_Memory = 0;
        _Memory[1] = 0;
        _Memory[2] = (ulonglong)puVar12;
        _Memory[3] = 0;
        *(undefined4 *)(_Memory + 4) = 0;
        _Memory[5] = 0;
        plVar10 = plVar10 + 4;
      } while (plVar10 != plStack0000000000000030);
      unaff_R15 = CExt4File::vftable;
    }
  }
LAB_180008a70:
  plVar8 = plStack0000000000000030;
  plVar10 = plStack0000000000000028;
  if (plStack0000000000000028 != (longlong *)0x0) {
    for (; plVar10 != plVar8; plVar10 = plVar10 + 4) {
      FUN_1800027e0(plVar10);
    }
    plVar10 = plStack0000000000000028;
    if ((0xfff < (unaff_RSI - (longlong)plStack0000000000000028 & 0xffffffffffffffe0)) &&
       (plVar10 = (longlong *)plStack0000000000000028[-1],
       0x1f < (ulonglong)((longlong)plStack0000000000000028 + (-8 - (longlong)plVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar10);
    plStack0000000000000028 = (longlong *)0x0;
    plStack0000000000000030 = (longlong *)0x0;
  }
  if (0xf < (ulonglong)unaff_RBP[-3]) {
    pvVar1 = (void *)unaff_RBP[-6];
    pvVar9 = pvVar1;
    if ((0xfff < unaff_RBP[-3] + 1) &&
       (pvVar9 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar9);
  }
  unaff_RBP[-4] = 0;
  unaff_RBP[-3] = 0xf;
  *(undefined1 *)(unaff_RBP + -6) = 0;
  uStack0000000000000058 = 0;
  if (0xf < (ulonglong)unaff_RBP[5]) {
    pvVar1 = (void *)unaff_RBP[2];
    pvVar9 = pvVar1;
    if ((0xfff < unaff_RBP[5] + 1) &&
       (pvVar9 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar9);
  }
  unaff_RBP[4] = 0;
  unaff_RBP[5] = 0xf;
  *(undefined1 *)(unaff_RBP + 2) = 0;
  unaff_RBP[-0x10] = unaff_R15;
  if ((void *)unaff_RBP[-0xf] != (void *)0x0) {
    free((void *)unaff_RBP[-0xf]);
  }
  unaff_RBP[-0xf] = uVar11;
  FUN_1800098f0(unaff_RBP + -9);
  FUN_1800098f0(unaff_RBP + -9);
  free((void *)unaff_RBP[-9]);
  FUN_1800027e0(unaff_RBP + -0xd);
  FUN_180012550(unaff_RBP[0x94] ^ (ulonglong)&stack0x00000000);
  return;
}




bool FUN_180008e50(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return false;
  }
  if (*(longlong *)(param_2 + 0x40) == 0) {
    lVar10 = *(longlong *)(param_2 + 8);
    if (lVar10 == 0) {
      return false;
    }
    lVar1 = *(longlong *)(param_2 + 0x10);
    if (lVar1 == 0) {
      return false;
    }
    uVar11 = *(int *)(lVar1 + 0x3c) * *(int *)(lVar1 + 0x38);
    if (uVar11 == 0) {
      return false;
    }
    if (*(short *)(lVar10 + 0x2e) == 0) {
      uVar6 = FUN_1800097d0(param_2,lVar10 + 0x28,uVar11);
      cVar4 = (char)uVar6;
    }
    else {
      uVar7 = FUN_180009640(param_2,lVar10 + 0x28,uVar11);
      cVar4 = (char)uVar7;
    }
    if ((*(longlong *)(param_2 + 0x40) == 0) && (cVar4 == '\0')) {
      return false;
    }
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  cVar4 = *(char *)((longlong)puVar2[1] + 0x19);
  puVar9 = puVar2;
  puVar3 = (undefined8 *)puVar2[1];
  while (cVar4 == '\0') {
    if (param_3 < *(uint *)((longlong)puVar3 + 0x1c)) {
      puVar8 = (undefined8 *)*puVar3;
      puVar9 = puVar3;
    }
    else {
      puVar8 = (undefined8 *)puVar3[2];
    }
    puVar3 = puVar8;
    cVar4 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (((puVar9 != puVar2) &&
      (uVar11 = param_3 - *(int *)((longlong)puVar9 + 0x34), uVar11 <= *(uint *)(puVar9 + 5))) &&
     (lVar10 = (ulonglong)uVar11 + puVar9[4], lVar10 != 0)) {
    bVar5 = FUN_180008f40(param_1,lVar10,param_4,'\0');
    return bVar5;
  }
  return false;
}




bool FUN_180008f40(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  uVar4 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x448) + 8))();
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x38) / (ulonglong)uVar4;
  uVar4 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x448) + 8))();
  uVar3 = (ulonglong)(uint)(*(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x38)) / (ulonglong)uVar4;
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x448) + 8);
  lVar1 = *plVar6;
  if (param_4 == '\0') {
    iVar5 = (**(code **)(lVar1 + 8))(plVar6,param_3,uVar2 * param_2,uVar3);
    bVar7 = iVar5 == (int)uVar3;
  }
  else {
    iVar5 = (**(code **)(lVar1 + 8))();
    bVar7 = iVar5 == (int)uVar2;
  }
  return bVar7;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180009000(longlong param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  void *_Dst;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88 [4];
  longlong local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_98 = 0xfffffffffffffffe;
  local_48 = DAT_18001d018 ^ (ulonglong)auStack_b8;
  if (param_2 == (longlong *)0x0) goto LAB_180009342;
  local_58 = 0;
  uVar14 = 0xf;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  uVar11 = *(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x3c);
  if (*param_2 != 0) goto LAB_1800090df;
  _Dst = operator_new((ulonglong)uVar11);
  *param_2 = (longlong)_Dst;
  if (_Dst != (void *)0x0) {
    lVar3 = *(longlong *)(param_2[2] + 8);
    if ((*(uint *)(lVar3 + 0x20) & 0x10000000) == 0) {
      bVar4 = FUN_180008e50(param_1,param_2[2],*(uint *)(param_2 + 5),_Dst);
      if ((int)CONCAT71(extraout_var,bVar4) == 0) goto LAB_18000912a;
    }
    else {
      uVar2 = *(uint *)(lVar3 + 4);
      uVar11 = uVar2 - 4;
      if (uVar2 < 5) {
        uVar11 = uVar2;
      }
      memcpy(_Dst,(void *)(lVar3 + 0x2c),(ulonglong)uVar11);
    }
    param_2[5] = param_2[5] + (ulonglong)*(uint *)(param_1 + 0x3c);
LAB_1800090df:
    puVar13 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
LAB_1800090f0:
    lVar3 = param_2[1];
    if (lVar3 == 0) {
      puVar10 = (uint *)*param_2;
      param_2[1] = (longlong)puVar10;
    }
    else {
      puVar10 = (uint *)((ulonglong)*(ushort *)(lVar3 + 4) + lVar3);
      param_2[1] = (longlong)puVar10;
      if ((uint *)((ulonglong)uVar11 + *param_2) <= puVar10) {
        *(undefined4 *)(param_2 + 4) = 0;
        param_2[1] = 0;
        lVar3 = *(longlong *)(param_2[2] + 8);
        if (lVar3 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = CONCAT44(*(undefined4 *)(lVar3 + 0x6c),*(undefined4 *)(lVar3 + 4));
        }
        if ((uVar8 <= (ulonglong)param_2[3]) ||
           (bVar4 = FUN_180008e50(param_1,param_2[2],*(uint *)(param_2 + 5),*param_2),
           (int)CONCAT71(extraout_var_00,bVar4) == 0)) goto LAB_180009132;
        param_2[5] = param_2[5] + (ulonglong)*(uint *)(param_1 + 0x3c);
        goto LAB_1800090f0;
      }
    }
    uVar2 = *puVar10;
    uVar1 = (ushort)puVar10[1];
    if ((uVar2 == 0) && (uVar1 != 0)) {
      param_2[3] = param_2[3] + (ulonglong)uVar1;
      *(uint *)(param_2 + 4) = (int)param_2[4] + (uint)(ushort)puVar10[1];
    }
    else {
      if (((((uVar1 & 3) != 0) ||
           ((uVar1 < (*(byte *)((longlong)puVar10 + 6) + 0xb & 0xfffc) ||
            (*(uint *)(param_1 + 0x40) < uVar2)))) || ((uVar2 != 2 && (uVar2 < 0xb)))) ||
         ((iVar5 = (int)param_2[4], uVar11 < iVar5 + 0xcU || (uVar11 < (uint)uVar1 + iVar5))))
      goto LAB_180009132;
      param_2[3] = param_2[3] + (ulonglong)uVar1;
      *(uint *)(param_2 + 4) = (uint)(ushort)puVar10[1] + iVar5;
      FUN_180004ce0(local_68,puVar10 + 2,(ulonglong)*(byte *)((longlong)puVar10 + 6));
      uVar14 = local_50;
      uVar8 = local_58;
      puVar13 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
      puVar9 = (undefined1 *)local_68;
      if (0xf < local_50) {
        puVar9 = puVar13;
      }
      uVar12 = local_58;
      if (1 < local_58) {
        uVar12 = 1;
      }
      iVar5 = memcmp(puVar9,&DAT_180015f88,uVar12);
      if (((iVar5 != 0) || (uVar8 == 0)) || (1 < uVar8)) {
        puVar9 = (undefined1 *)local_68;
        if (0xf < uVar14) {
          puVar9 = puVar13;
        }
        uVar12 = uVar8;
        if (2 < uVar8) {
          uVar12 = 2;
        }
        iVar5 = memcmp(puVar9,&DAT_180015f8c,uVar12);
        if (((iVar5 != 0) || (uVar8 < 2)) || (2 < uVar8)) goto LAB_1800092d3;
      }
    }
    goto LAB_1800090f0;
  }
LAB_18000912a:
  puVar13 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
  goto LAB_180009132;
LAB_1800092d3:
  uVar6 = FUN_180009370(param_1,(ulonglong)*(uint *)param_2[1],param_3);
  if ((int)uVar6 != 0) {
    local_90 = local_88;
    plVar7 = FUN_180002300(local_88,local_68);
    FUN_180009450(param_3,plVar7);
    puVar13 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
    uVar14 = local_50;
  }
LAB_180009132:
  if (0xf < uVar14) {
    puVar9 = puVar13;
    if ((0xfff < uVar14 + 1) &&
       (puVar9 = *(undefined1 **)(puVar13 + 0xfffffffffffffff8),
       (undefined1 *)0x1f < puVar13 + (-8 - (longlong)puVar9))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(puVar9);
  }
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
LAB_180009342:
  FUN_180012550(local_48 ^ (ulonglong)auStack_b8);
  return;
}




undefined8 FUN_180009370(longlong param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  void *pvVar6;
  undefined7 extraout_var;
  longlong lVar7;
  
  if ((param_2 == 2) || (10 < param_2)) {
    pvVar6 = *(void **)(param_1 + 0x28);
    if (pvVar6 == (void *)0x0) {
      pvVar6 = operator_new((ulonglong)*(uint *)(param_1 + 0x38));
      *(void **)(param_1 + 0x28) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        return 0;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2 - 1;
    auVar4 = auVar3 / ZEXT416(*(uint *)(param_1 + 8));
    if (auVar4._0_4_ <= *(uint *)(param_1 + 0x10)) {
      lVar7 = (auVar4._0_8_ & 0xffffffff) * 0x40;
      uVar1 = *(uint *)(param_1 + 0x38);
      uVar2 = (ulonglong)
              (uint)(*(int *)(param_1 + 0xc) * SUB164(auVar3 % ZEXT416(*(uint *)(param_1 + 8)),0));
      lVar7 = CONCAT44(*(undefined4 *)(lVar7 + 0x28 + *(longlong *)(param_1 + 0x18)),
                       *(undefined4 *)(lVar7 + 8 + *(longlong *)(param_1 + 0x18))) + uVar2 / uVar1;
      if ((lVar7 == *(longlong *)(param_1 + 0x30)) ||
         (bVar5 = FUN_180008f40(param_1,lVar7,pvVar6,'\x01'), (int)CONCAT71(extraout_var,bVar5) != 0
         )) {
        FUN_1800094b0(param_3,(undefined8 *)
                              (uVar2 % (ulonglong)uVar1 + *(longlong *)(param_1 + 0x28)));
        *(longlong *)(param_1 + 0x30) = lVar7;
        return 1;
      }
    }
  }
  return 0;
}




void FUN_180009450(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_18 = DAT_18001d018 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((longlong *)(param_1 + 0x18) != param_2) {
    plVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar1 = (longlong *)*param_2;
    }
    FUN_180004ce0((longlong *)(param_1 + 0x18),plVar1,param_2[2]);
  }
  FUN_1800027e0(param_2);
  FUN_180012550(local_18 ^ (ulonglong)auStack_48);
  return;
}




void FUN_1800094b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    if (((*(uint *)(param_2 + 4) & 0x10080000) == 0) &&
       (CONCAT24(*(undefined2 *)((longlong)param_2 + 0x74),*(undefined4 *)((longlong)param_2 + 0x1c)
                ) != 0)) {
      return;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      pvVar3 = operator_new(0x80);
      *(void **)(param_1 + 8) = pvVar3;
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((puVar1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    uVar2 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar2;
    uVar2 = param_2[5];
    puVar1[4] = param_2[4];
    puVar1[5] = uVar2;
    uVar2 = param_2[7];
    puVar1[6] = param_2[6];
    puVar1[7] = uVar2;
    uVar2 = param_2[9];
    puVar1[8] = param_2[8];
    puVar1[9] = uVar2;
    uVar2 = param_2[0xb];
    puVar1[10] = param_2[10];
    puVar1[0xb] = uVar2;
    uVar2 = param_2[0xd];
    puVar1[0xc] = param_2[0xc];
    puVar1[0xd] = uVar2;
    uVar2 = param_2[0xf];
    puVar1[0xe] = param_2[0xe];
    puVar1[0xf] = uVar2;
  }
  return;
}




void FUN_180009550(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180009590(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_1800095d0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_1800095e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800095e0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




ulonglong FUN_180009640(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint6 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *_Memory;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  
  if ((((param_2 == 0) || (param_3 == 0)) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (*(short *)(param_2 + 6) == 0)) {
    return (ulonglong)(uint3)(param_3 >> 8) << 8;
  }
  _Memory = operator_new((ulonglong)param_3);
  if (_Memory == (void *)0x0) {
    return 0;
  }
  bVar10 = 1;
  iVar11 = 0;
  if (*(short *)(param_2 + 2) != 0) {
    do {
      if (bVar10 == 0) break;
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar3 = *(uint6 *)(param_2 + 0x10);
      uVar4 = (*(code *)**(undefined8 **)(*(longlong *)(lVar2 + 0x448) + 8))();
      uVar1 = *(uint *)(lVar2 + 0x38);
      uVar5 = (*(code *)**(undefined8 **)(*(longlong *)(lVar2 + 0x448) + 8))();
      uVar8 = (ulonglong)(uint)(*(int *)(lVar2 + 0x3c) * *(int *)(lVar2 + 0x38)) / (ulonglong)uVar5;
      plVar9 = (longlong *)(*(longlong *)(lVar2 + 0x448) + 8);
      iVar6 = (**(code **)(*plVar9 + 8))
                        (plVar9,_Memory,(ulonglong)uVar3 * ((ulonglong)uVar1 / (ulonglong)uVar4),
                         uVar8);
      if (iVar6 == (int)uVar8) {
        if (*(short *)(param_2 + 6) == 1) {
          uVar7 = FUN_1800097d0(param_1,(longlong)_Memory,param_3);
          bVar10 = (byte)uVar7;
        }
        else {
          uVar8 = FUN_180009640(param_1,(longlong)_Memory,param_3);
          bVar10 = (byte)uVar8;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(uint)*(ushort *)(param_2 + 2));
  }
  free(_Memory);
  return (ulonglong)bVar10;
}




undefined8 FUN_1800097d0(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined8 local_58 [2];
  ulonglong local_48;
  uint uStack_40;
  undefined8 uStack_3c;
  int iStack_34;
  int local_30;
  ulonglong local_2c;
  undefined8 uStack_24;
  undefined8 local_1c;
  
  if ((((param_2 != 0) && (param_3 != 0)) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (*(short *)(param_2 + 6) == 0)) {
    iVar4 = 0;
    puVar2 = (undefined1 *)register0x00000020;
    if (*(short *)(param_2 + 2) != 0) {
      puVar3 = (undefined2 *)(param_2 + 0x12);
      do {
        iStack_34 = *(int *)(puVar3 + -3);
        local_48 = (ulonglong)CONCAT24(*puVar3,*(undefined4 *)(puVar3 + 1));
        uStack_40 = (uint)(ushort)puVar3[-1];
        local_30 = (uint)(ushort)puVar3[-1] + iStack_34;
        uStack_3c._0_4_ = (undefined4)param_1;
        uStack_3c._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_24 = CONCAT44((undefined4)uStack_3c,uStack_40);
        local_1c = CONCAT44(iStack_34,uStack_3c._4_4_);
        local_2c = local_48;
        uStack_3c = param_1;
        plVar1 = (longlong *)FUN_180007790((undefined8 *)(param_1 + 0x38),&local_30);
        FUN_180007a60((longlong *)(param_1 + 0x38),local_58,'\0',(uint *)((longlong)plVar1 + 0x1c),
                      plVar1);
        puVar2 = (undefined1 *)(ulonglong)*(ushort *)(param_2 + 2);
        puVar3 = puVar3 + 6;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)*(ushort *)(param_2 + 2));
    }
    return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
  return &stack0x00000000;
}




void FUN_1800098f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *_Memory;
  
  lVar1 = *param_1;
  lVar3 = lVar1;
  _Memory = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      FUN_1800095e0(param_1,(longlong *)_Memory[2]);
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
  return;
}




void FUN_180009980(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x38)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




undefined8 * FUN_1800099c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *_Memory;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  
  plVar1 = (longlong *)(param_2 + 8);
  *param_1 = CFATDBR::vftable;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x47) = 1;
  param_1[0x46] = param_2;
  uVar4 = (**(code **)*plVar1)(plVar1);
  _Memory = (undefined8 *)operator_new((ulonglong)uVar4);
  (**(code **)(*plVar1 + 8))(plVar1,_Memory,0,1);
  lVar8 = 4;
  puVar5 = param_1 + 1;
  puVar6 = _Memory;
  do {
    uVar3 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar3;
    uVar3 = puVar6[3];
    puVar5[2] = puVar6[2];
    puVar5[3] = uVar3;
    uVar3 = puVar6[5];
    puVar5[4] = puVar6[4];
    puVar5[5] = uVar3;
    uVar3 = puVar6[7];
    puVar5[6] = puVar6[6];
    puVar5[7] = uVar3;
    uVar3 = puVar6[9];
    puVar5[8] = puVar6[8];
    puVar5[9] = uVar3;
    uVar3 = puVar6[0xb];
    puVar5[10] = puVar6[10];
    puVar5[0xb] = uVar3;
    uVar3 = puVar6[0xd];
    puVar5[0xc] = puVar6[0xc];
    puVar5[0xd] = uVar3;
    uVar3 = puVar6[0xf];
    puVar5[0xe] = puVar6[0xe];
    puVar5[0xf] = uVar3;
    lVar8 = lVar8 + -1;
    puVar5 = puVar5 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar8 != 0);
  free(_Memory);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)((longlong)param_1 + 0x15);
  *(undefined2 *)((longlong)param_1 + 0x20a) = *(undefined2 *)((longlong)param_1 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x212) = *(undefined1 *)(param_1 + 3);
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)((longlong)param_1 + 0x16);
  if (*(ushort *)((longlong)param_1 + 0x1e) == 0) {
    uVar4 = *(uint *)((longlong)param_1 + 0x2c);
  }
  else {
    uVar4 = (uint)*(ushort *)((longlong)param_1 + 0x1e);
  }
  *(uint *)((longlong)param_1 + 0x20c) = uVar4;
  uVar4 = *(uint *)(param_1 + 5);
  if (uVar4 == 0) {
    uVar4 = (uint)*(ushort *)((longlong)param_1 + 0x1b);
  }
  *(uint *)((longlong)param_1 + 0x214) = uVar4;
  if ((*(ushort *)((longlong)param_1 + 0x20a) == 0) || (*(byte *)(param_1 + 0x41) == 0))
  goto LAB_180009c6c;
  iVar7 = (uint)*(byte *)((longlong)param_1 + 0x212) * *(int *)((longlong)param_1 + 0x20c);
  iVar10 = SUB164((ZEXT216(*(ushort *)((longlong)param_1 + 0x19)) << 5) /
                  ZEXT216(*(ushort *)((longlong)param_1 + 0x20a)),0);
  uVar4 = (((*(int *)((longlong)param_1 + 0x214) - iVar7) - iVar10) -
          (uint)*(ushort *)(param_1 + 0x42)) / (uint)*(byte *)(param_1 + 0x41);
  *(uint *)(param_1 + 0x43) = uVar4;
  if (uVar4 < 0xff5) {
    *(undefined1 *)((longlong)param_1 + 0x22c) = 0;
    iVar7 = iVar7 + iVar10;
  }
  else if (uVar4 < 0xfff5) {
    iVar7 = iVar7 + iVar10;
    *(undefined1 *)((longlong)param_1 + 0x22c) = 1;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)((longlong)param_1 + 0x34);
    *(undefined1 *)((longlong)param_1 + 0x22c) = 2;
  }
  *(uint *)((longlong)param_1 + 0x21c) = (uint)*(ushort *)(param_1 + 0x42) + iVar7;
  cVar2 = *(char *)((longlong)param_1 + 0x22c);
  uVar9 = (ulonglong)*(ushort *)((longlong)param_1 + 0x19) << 5;
  *(uint *)(param_1 + 0x44) = (uint)*(ushort *)(param_1 + 0x42);
  *(int *)(param_1 + 0x45) = (int)uVar9;
  if (cVar2 == '\x02') {
    if (*(int *)((longlong)param_1 + 0x5a) == 0x33544146) {
      bVar11 = *(char *)((longlong)param_1 + 0x5e) == '2';
      goto LAB_180009c18;
    }
LAB_180009c1a:
    *(undefined4 *)(param_1 + 0x47) = 0;
  }
  else {
    if (cVar2 != '\x01') {
      if (*(int *)((longlong)param_1 + 0x3e) == 0x31544146) {
        bVar11 = *(char *)((longlong)param_1 + 0x42) == '2';
        goto LAB_180009c18;
      }
      goto LAB_180009c1a;
    }
    if (*(int *)((longlong)param_1 + 0x3e) != 0x31544146) goto LAB_180009c1a;
    bVar11 = *(char *)((longlong)param_1 + 0x42) == '6';
LAB_180009c18:
    if (!bVar11) goto LAB_180009c1a;
  }
  uVar4 = *(byte *)(param_1 + 0x41) - 1;
  if (((0x3f < (byte)uVar4) || ((0x800000008000808bU >> ((ulonglong)uVar4 & 0x3f) & 1) == 0)) &&
     (*(byte *)(param_1 + 0x41) != 0x80)) {
    *(undefined4 *)(param_1 + 0x47) = 0;
  }
  if ((cVar2 != '\x02') && ((int)(uVar9 % (ulonglong)*(ushort *)((longlong)param_1 + 0x13)) != 0)) {
    *(undefined4 *)(param_1 + 0x47) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    return param_1;
  }
LAB_180009c6c:
  *(undefined4 *)(param_1 + 0x47) = 0;
  return param_1;
}




undefined8 * FUN_180009c90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CFATDBR::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong FUN_180009cc0(longlong param_1)

{
  if (*(int *)(param_1 + 0x238) != 0) {
    return param_1 + 0x208;
  }
  return 0;
}




undefined8 FUN_180009ce0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x230);
}




undefined4 FUN_180009cf0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x238);
}




undefined8 * FUN_180009d00(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte *pbVar10;
  void *pvVar11;
  longlong lVar12;
  
  *param_1 = IFSInterface::vftable;
  *param_1 = CFATFS::vftable;
  puVar7 = (undefined8 *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  puVar5 = (undefined8 *)operator_new(0x240);
  puVar6 = puVar7;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = FUN_1800099c0(puVar5,param_2);
  }
  param_1[1] = puVar6;
  iVar4 = FUN_180009cf0((longlong)puVar6);
  if (iVar4 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x35) = 0;
    *(undefined4 *)(param_1 + 7) = 0xffffffff;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x35) = 1;
    puVar6 = (undefined8 *)operator_new(0x30);
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = FUN_18000b550(puVar6,param_1[1]);
    }
    param_1[2] = puVar7;
    uVar8 = FUN_180009ce0(param_1[1]);
    param_1[3] = uVar8;
    lVar9 = FUN_180009cc0(param_1[1]);
    uVar2 = *(ushort *)(lVar9 + 2);
    pbVar10 = (byte *)FUN_180009cc0(param_1[1]);
    pvVar11 = malloc((ulonglong)*pbVar10 * (ulonglong)uVar2);
    param_1[4] = pvVar11;
    param_1[5] = 0;
    lVar9 = FUN_180009cc0(param_1[1]);
    if (*(char *)(lVar9 + 0x24) != '\x02') {
      lVar9 = FUN_180009cc0(param_1[1]);
      pvVar11 = malloc((ulonglong)*(uint *)(lVar9 + 0x20));
      param_1[5] = pvVar11;
      lVar9 = *(longlong *)(param_1[3] + 8);
      lVar12 = FUN_180009cc0(param_1[1]);
      uVar2 = *(ushort *)(lVar12 + 2);
      lVar12 = FUN_180009cc0(param_1[1]);
      bVar1 = *(byte *)(lVar12 + 10);
      lVar12 = FUN_180009cc0(param_1[1]);
      iVar4 = *(int *)(lVar12 + 4);
      lVar12 = FUN_180009cc0(param_1[1]);
      uVar3 = *(uint *)(lVar12 + 0x20);
      lVar12 = FUN_180009cc0(param_1[1]);
      (**(code **)(lVar9 + 8))
                (param_1[3] + 8,param_1[5],(uint)*(ushort *)(lVar12 + 8) + iVar4 * (uint)bVar1,
                 (ulonglong)uVar3 / (ulonglong)uVar2);
    }
  }
  return param_1;
}




undefined8 *
FUN_180009eb0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = CFATFS::vftable;
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = IFSInterface::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180009f50(longlong param_1,void *param_2)

{
  if ((longlong)param_2 - 1U < 0xfffffffffffffffe) {
    FUN_18000b130(param_1,(longlong)param_2);
    free(param_2);
    return 0;
  }
  return 0xffffffff;
}




void FUN_180009f90(longlong *param_1,char *param_2)

{
  FUN_18000a900(param_1,param_2,2);
  return;
}




void FUN_180009fa0(undefined8 param_1,char *param_2,uint *param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  uint local_res10;
  
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4[(longlong)param_3 + (0x30 - (longlong)param_2)] = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  *(undefined8 *)(param_3 + 0x10c) = *(undefined8 *)(param_2 + 0x800);
  param_3[0x10e] = *(uint *)(param_2 + 0x808);
  *(undefined2 *)(param_3 + 0x10f) = *(undefined2 *)(param_2 + 0x80c);
  param_3[7] = 0;
  param_3[8] = *(uint *)(param_2 + 0x810);
  *param_3 = (uint)(byte)param_2[0x814];
  uVar2 = *(ushort *)(param_2 + 0x817);
  uVar3 = *(ushort *)(param_2 + 0x815);
  param_3[1] = ((uint)uVar3 << 5 | local_res10 & 0xff00ffff) & 0xffff0000 | (uVar3 & 0x7e0) << 3 |
               uVar3 & 0x1f;
  param_3[2] = ((uVar2 >> 9) + 0x7bc) * 0x10000 | (uVar2 & 0x1e0) << 3 | uVar2 & 0x1f;
  uVar2 = *(ushort *)(param_2 + 0x81d);
  uVar3 = *(ushort *)(param_2 + 0x81b);
  param_3[6] = ((uVar2 >> 9) + 0x7bc) * 0x10000 | (uVar2 & 0x1e0) << 3 | uVar2 & 0x1f;
  param_3[5] = (uVar3 & 0x7fff800) << 5 | local_res10 & 0xff000000 | (uVar3 & 0x7e0) << 3 |
               uVar3 & 0x1f;
  uVar2 = *(ushort *)(param_2 + 0x819);
  param_3[4] = ((uVar2 >> 9) + 0x7bc) * 0x10000 | (uVar2 & 0x1e0) << 3 | uVar2 & 0x1f;
  param_3[3] = 0;
  return;
}




undefined8 FUN_18000a110(longlong *param_1)

{
  int iVar1;
  
  if ((*(char *)((longlong)param_1 + 0x35) != '\0') &&
     (iVar1 = (**(code **)(*param_1 + 0x38))(), iVar1 == 0)) {
    return 1;
  }
  return 0;
}




void FUN_18000a150(longlong *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_898 [32];
  longlong local_878;
  longlong *local_870;
  undefined8 local_868;
  char local_858 [2096];
  ulonglong local_28;
  
  local_868 = 0xfffffffffffffffe;
  local_28 = DAT_18001d018 ^ (ulonglong)auStack_898;
  local_878 = 0;
  local_870 = param_1;
  if ((*(char *)((longlong)param_1 + 0x35) != '\0') &&
     (lVar2 = (**(code **)(*param_1 + 0x60))(), local_878 = lVar2, lVar2 != 0)) {
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1,lVar2,local_858);
    if (iVar1 == 0) {
      FUN_180009fa0(param_1,local_858,param_3);
    }
    else {
      (**(code **)(*param_1 + 0x38))(param_1,lVar2);
    }
  }
  FUN_180012550(local_28 ^ (ulonglong)auStack_898);
  return;
}




void FUN_18000a200(longlong *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  undefined1 auStack_878 [32];
  undefined8 local_858;
  char local_848 [2096];
  ulonglong local_18;
  
  local_858 = 0xfffffffffffffffe;
  local_18 = DAT_18001d018 ^ (ulonglong)auStack_878;
  if ((*(char *)((longlong)param_1 + 0x35) != '\0') &&
     (iVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,local_848), iVar1 == 0)) {
    FUN_180009fa0(param_1,local_848,param_3);
  }
  FUN_180012550(local_18 ^ (ulonglong)auStack_878);
  return;
}




undefined4 FUN_18000a290(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




undefined8 FUN_18000a2a0(undefined8 param_1,char *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (((*param_2 != -0x1b) && (bVar1 = param_2[0xb], bVar1 != 8)) && (bVar1 < 0x41)) {
    if (bVar1 != 0xf) {
      lVar2 = 0;
      do {
        if ((byte)param_2[lVar2] < 0x20) {
          return 1;
        }
        switch(param_2[lVar2]) {
        case '\"':
        case '*':
        case '+':
        case ',':
        case '.':
        case '/':
        case ':':
        case ';':
        case '<':
        case '=':
        case '>':
        case '?':
        case '[':
        case '\\':
        case ']':
        case '|':
          goto switchD_18000a2ed_caseD_22;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < 0xb);
    }
    return 0;
  }
switchD_18000a2ed_caseD_22:
  return 1;
}




undefined8 FUN_18000a370(longlong param_1,int param_2)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  longlong lVar7;
  
  if (param_2 != *(int *)(param_1 + 0x30)) {
    if (*(char *)(param_1 + 0x34) != '\0') {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8);
      puVar5 = (undefined1 *)FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar1 = *puVar5;
      pbVar6 = (byte *)FUN_180009cc0(*(longlong *)(param_1 + 8));
      iVar3 = *(int *)(param_1 + 0x30);
      bVar2 = *pbVar6;
      lVar7 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      (**(code **)(lVar4 + 0x10))
                (*(longlong *)(param_1 + 0x18) + 8,*(undefined8 *)(param_1 + 0x20),
                 *(int *)(lVar7 + 0x14) + (iVar3 + -2) * (uint)bVar2,uVar1);
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8);
    puVar5 = (undefined1 *)FUN_180009cc0(*(longlong *)(param_1 + 8));
    uVar1 = *puVar5;
    pbVar6 = (byte *)FUN_180009cc0(*(longlong *)(param_1 + 8));
    bVar2 = *pbVar6;
    lVar7 = FUN_180009cc0(*(longlong *)(param_1 + 8));
    (**(code **)(lVar4 + 8))
              (*(longlong *)(param_1 + 0x18) + 8,*(undefined8 *)(param_1 + 0x20),
               *(int *)(lVar7 + 0x14) + (param_2 + -2) * (uint)bVar2,uVar1);
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x30) = param_2;
  }
  return 0;
}




void FUN_18000a460(longlong *param_1,int *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  uint uVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  char *pcVar19;
  short sVar20;
  undefined8 *puVar21;
  undefined1 auStack_548 [32];
  undefined4 local_528;
  char local_518 [32];
  char local_4f8;
  undefined8 local_4f7;
  undefined2 local_4ef;
  byte local_4ed [3];
  undefined8 local_4ea;
  undefined4 local_4e2;
  undefined2 local_4de;
  undefined4 local_4dc [161];
  undefined2 local_258 [5];
  undefined8 local_24e [62];
  ulonglong local_58;
  
  local_58 = DAT_18001d018 ^ (ulonglong)auStack_548;
  iVar7 = 0;
  bVar6 = false;
  if ((longlong)param_2 - 1U < 0xfffffffffffffffe) {
    memset(&local_4f8,0,0x2a0);
    memset(local_258,0xff,0x200);
    uVar16 = 0xffffffffffffffff;
    pcVar15 = &local_4f8;
    uVar8 = 0xffffffffffffffff;
    do {
      uVar8 = uVar8 + 1;
    } while (*(char *)(param_3 + uVar8) != '\0');
    if (0xc < uVar8) {
      lVar17 = -1;
      do {
        lVar17 = lVar17 + 1;
      } while (*(char *)(param_3 + lVar17) != '\0');
      local_528 = 0xff;
      iVar7 = (**(code **)(*DAT_18001d670 + 0x60))(DAT_18001d670,param_3,lVar17,local_258);
      lVar17 = (longlong)iVar7;
      if (0x1ff < (ulonglong)(lVar17 * 2)) {
        __report_rangecheckfailure();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_258[lVar17] = 0;
      uVar8 = (lVar17 - 1U) / 0xd;
      iVar11 = (int)uVar8;
      iVar7 = iVar11 + 1;
      if (-1 < iVar11) {
        puVar18 = &local_4ea;
        puVar21 = (undefined8 *)((longlong)local_24e + (longlong)(iVar11 * 0xd) * 2);
        do {
          uVar3 = *(undefined2 *)((longlong)puVar21 + -2);
          *(undefined8 *)((longlong)puVar18 + -0xd) = *(undefined8 *)((longlong)puVar21 + -10);
          uVar1 = *puVar21;
          *(undefined2 *)((longlong)puVar18 + -5) = uVar3;
          uVar4 = *(undefined4 *)(puVar21 + 1);
          *puVar18 = uVar1;
          *(undefined4 *)(puVar18 + 1) = uVar4;
          *(undefined4 *)((longlong)puVar18 + 0xe) = *(undefined4 *)((longlong)puVar21 + 0xc);
          *pcVar15 = (char)uVar8 + 'A';
          pcVar15 = pcVar15 + 0x20;
          *(undefined1 *)((longlong)puVar18 + -3) = 0xf;
          puVar18 = puVar18 + 4;
          uVar14 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar14;
          puVar21 = (undefined8 *)((longlong)puVar21 + -0x1a);
        } while (-1 < (int)uVar14);
      }
    }
    lVar9 = 0;
    lVar17 = -1;
    do {
      lVar17 = lVar17 + 1;
    } while (*(char *)(param_3 + lVar17) != '\0');
    if (0 < (int)lVar17) {
      do {
        if (*(char *)(param_3 + lVar9) == '.') {
          bVar6 = true;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)lVar17);
    }
    pcVar19 = pcVar15 + 8;
    builtin_strncpy(pcVar15,"           ",0xb);
    pcVar12 = pcVar15;
    if (bVar6) {
      do {
        if (pcVar12[param_3 - (longlong)pcVar15] == '.') break;
        *pcVar12 = pcVar12[param_3 - (longlong)pcVar15];
        pcVar12 = pcVar12 + 1;
      } while ((longlong)pcVar12 - (longlong)pcVar15 < 8);
      lVar17 = -1;
      do {
        lVar17 = lVar17 + 1;
      } while (*(char *)(param_3 + lVar17) != '\0');
      iVar11 = (int)lVar17 + -1;
      pcVar12 = (char *)(iVar11 + param_3);
      cVar2 = *pcVar12;
      while (cVar2 != '.') {
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar12 + -1;
        cVar2 = *pcVar12;
      }
      pcVar12 = pcVar19;
      do {
        if (pcVar12[((longlong)iVar11 - (longlong)pcVar19) + param_3 + 1] == '\0') break;
        *pcVar12 = pcVar12[((longlong)iVar11 - (longlong)pcVar19) + param_3 + 1];
        pcVar12 = pcVar12 + 1;
      } while ((longlong)pcVar12 - (longlong)pcVar19 < 3);
    }
    else {
      do {
        if (pcVar12[param_3 - (longlong)pcVar15] == '\0') break;
        *pcVar12 = pcVar12[param_3 - (longlong)pcVar15];
        pcVar12 = pcVar12 + 1;
      } while ((longlong)pcVar12 - (longlong)pcVar15 < 8);
    }
    pcVar15[0x14] = '\0';
    pcVar15[0x15] = '\0';
    pcVar15[0x1a] = '\0';
    pcVar15[0x1b] = '\0';
    bVar13 = 0;
    pcVar15[0x1c] = '\0';
    pcVar15[0x1d] = '\0';
    pcVar15[0x1e] = '\0';
    pcVar15[0x1f] = '\0';
    sVar20 = 0xb;
    pcVar19 = pcVar15;
    do {
      bVar13 = (bVar13 >> 1) + bVar13 * -0x80 + *pcVar19;
      sVar20 = sVar20 + -1;
      pcVar19 = pcVar19 + 1;
    } while (sVar20 != 0);
    do {
      uVar16 = uVar16 + 1;
    } while (*(char *)(param_3 + uVar16) != '\0');
    if ((0xc < uVar16) && (&local_4f8 < pcVar15)) {
      puVar10 = &local_4de;
      lVar17 = ((ulonglong)(pcVar15 + (-1 - (longlong)&local_4f8)) >> 5) + 1;
      do {
        *(byte *)((longlong)puVar10 + -0xd) = bVar13;
        *puVar10 = 0;
        puVar10 = puVar10 + 0x10;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    (**(code **)(*param_1 + 0x70))(param_1,param_2);
    iVar11 = (**(code **)(*param_1 + 0x40))(param_1,param_2,local_518,0x20);
    while ((iVar11 == 0x20 && (local_518[0] != '\0'))) {
      iVar11 = (**(code **)(*param_1 + 0x40))(param_1,param_2,local_518,0x20);
    }
    *param_2 = *param_2 + -0x20;
    (**(code **)(*param_1 + 0x48))(param_1,param_2,&local_4f8,(iVar7 + 1) * 0x20);
    *(undefined4 *)(param_4 + 0x820) = 0;
    iVar7 = *param_2;
    *(undefined4 *)(param_4 + 0x810) = 0;
    *(int *)(param_4 + 0x824) = iVar7 + -0x20;
  }
  FUN_180012550(local_58 ^ (ulonglong)auStack_548);
  return;
}




void FUN_18000a810(longlong *param_1,char *param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined7 uStack_57;
  undefined1 local_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18001d018 ^ (ulonglong)auStack_78;
  lVar1 = FUN_18000a900(param_1,param_2,3);
  if (lVar1 - 1U < 0xfffffffffffffffe) {
    uStack_4c = 0;
    local_48 = 0;
    local_40 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_4f = 0x2020;
    uStack_57 = 0x20202020202020;
    local_50 = 0x20;
    local_30 = 0x10202020;
    local_58 = 0x2e;
    local_38 = 0x2020202020202e2e;
    uStack_4d = 0x10;
    (**(code **)(*param_1 + 0x48))(param_1,lVar1,&local_58,0x40);
    (**(code **)(*param_1 + 0x38))(param_1,lVar1);
  }
  FUN_180012550(local_18 ^ (ulonglong)auStack_78);
  return;
}




void FUN_18000a8f0(longlong *param_1,char *param_2)

{
  FUN_18000a900(param_1,param_2,0);
  return;
}




void FUN_18000a900(longlong *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  undefined1 auStack_c88 [32];
  char local_c68 [2048];
  char local_468 [16];
  int local_458;
  byte local_454;
  int local_448;
  int local_444;
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_18001d018 ^ (ulonglong)auStack_c88;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_2[lVar5] != '\0');
  if ((((*(char *)((longlong)param_1 + 0x35) != '\0') && (param_2 != (char *)0x0)) &&
      ((int)lVar5 - 1U < 0x3ff)) && (*param_2 == '\\')) {
    piVar6 = (int *)malloc(0x18);
    lVar5 = FUN_180009cc0(param_1[1]);
    if (*(char *)(lVar5 + 0x24) == '\x02') {
      lVar5 = FUN_180009cc0(param_1[1]);
      piVar6[1] = *(int *)(lVar5 + 0x1c);
      piVar6[3] = -2;
      *piVar6 = 0;
      piVar6[5] = 1;
    }
    else {
      piVar6[1] = -1;
      piVar6[5] = 1;
      piVar6[3] = -2;
      *piVar6 = 0;
      lVar5 = FUN_180009cc0(param_1[1]);
      piVar6[2] = *(int *)(lVar5 + 0x20);
    }
    iVar10 = 1;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != '\0');
    if ((int)lVar5 + 1 < 2) {
LAB_18000ab9f:
      (**(code **)(*param_1 + 0x70))(param_1,piVar6);
    }
    else {
      pcVar9 = param_2 + 1;
      uVar8 = 0;
      do {
        cVar1 = *pcVar9;
        if ((cVar1 == '\\') || (cVar1 == '\0')) {
          if ((int)uVar8 == 0) goto LAB_18000ab9f;
          if (0x3ff < uVar8) {
            __report_rangecheckfailure();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_438[uVar8] = '\0';
          do {
            iVar4 = (**(code **)(*param_1 + 0x68))(param_1,piVar6,local_c68);
            if (iVar4 == -1) {
              if ((1 < param_3 - 2U) || (param_2[iVar10] != '\0')) goto LAB_18000abb7;
              FUN_18000a460(param_1,piVar6,(longlong)local_438,(longlong)local_c68);
              piVar6[3] = piVar6[1];
              piVar6[1] = local_448;
              piVar6[4] = local_444;
              piVar6[2] = local_458;
              piVar6[5] = (uint)(param_3 != 2);
              goto LAB_18000ab9f;
            }
            pcVar7 = local_438;
            lVar5 = -(longlong)pcVar7;
            do {
              cVar1 = *pcVar7;
              cVar2 = pcVar7[(longlong)(local_c68 + lVar5)];
              if (cVar1 != cVar2) break;
              pcVar7 = pcVar7 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) break;
            pcVar7 = local_438;
            lVar5 = -(longlong)pcVar7;
            do {
              cVar1 = *pcVar7;
              cVar2 = pcVar7[(longlong)(local_468 + lVar5)];
              if (cVar1 != cVar2) break;
              pcVar7 = pcVar7 + 1;
            } while (cVar2 != '\0');
          } while (cVar1 != cVar2);
          piVar6[3] = piVar6[1];
          piVar6[1] = local_448;
          piVar6[4] = local_444;
          piVar6[2] = local_458;
          piVar6[5] = local_454 >> 4 & 1;
          (**(code **)(*param_1 + 0x70))(param_1,piVar6);
          uVar8 = 0;
          if (*pcVar9 == '\0') goto LAB_18000abb7;
        }
        else {
          local_438[uVar8] = cVar1;
          uVar8 = (ulonglong)((int)uVar8 + 1);
        }
        iVar10 = iVar10 + 1;
        lVar5 = -1;
        pcVar9 = pcVar9 + 1;
        do {
          lVar5 = lVar5 + 1;
        } while (param_2[lVar5] != '\0');
      } while (iVar10 < (int)lVar5 + 1);
      (**(code **)(*param_1 + 0x70))(param_1,piVar6);
    }
  }
LAB_18000abb7:
  FUN_180012550(local_38 ^ (ulonglong)auStack_c88);
  return;
}




void FUN_18000ac00(longlong *param_1,int *param_2,void *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  short sVar12;
  byte bVar13;
  uint uVar14;
  undefined1 auStack_4a8 [32];
  undefined4 local_488;
  int *local_478;
  byte local_470;
  undefined2 local_46f;
  undefined2 local_46d;
  undefined2 local_46b;
  undefined2 local_469;
  undefined2 local_467;
  char local_465;
  byte local_463;
  undefined2 local_462;
  undefined2 local_460;
  undefined2 local_45e;
  undefined2 local_45c;
  undefined2 local_45a;
  undefined2 local_458;
  undefined2 local_456;
  undefined4 local_454;
  undefined2 local_448 [512];
  ulonglong local_48;
  
  local_48 = DAT_18001d018 ^ (ulonglong)auStack_4a8;
  uVar7 = 0;
  local_478 = param_2;
  if ((longlong)param_2 - 1U < 0xfffffffffffffffe) {
    memset(local_448,0,0x400);
    local_470 = 0;
    memset(param_3,0,0x400);
    bVar13 = 0;
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_470,0x20);
    uVar10 = uVar7;
    bVar3 = local_470;
    while ((local_470 = bVar3, iVar4 == 0x20 && (bVar3 != 0))) {
      uVar5 = FUN_18000a2a0(param_1,(char *)&local_470);
      bVar2 = local_463;
      if ((int)uVar5 != 1) {
        uVar6 = uVar7;
        uVar9 = uVar7;
        if (local_465 != '\x0f') goto LAB_18000ae26;
        if (bVar13 != local_463) {
          memset(local_448,0,0x400);
        }
        uVar8 = (uint)uVar10;
        if (uVar8 != (bVar3 & 0x1f)) {
          memset(local_448,0,0x400);
          uVar8 = bVar3 & 0x1f;
        }
        uVar8 = uVar8 - 1;
        uVar10 = (ulonglong)uVar8;
        param_2 = local_478;
        bVar13 = bVar2;
        if (uVar8 < 0x14) {
          uVar8 = uVar8 * 0xd;
          local_448[uVar8] = local_46f;
          local_448[uVar8 + 1] = local_46d;
          local_448[uVar8 + 2] = local_46b;
          local_448[uVar8 + 3] = local_469;
          local_448[uVar8 + 4] = local_467;
          local_448[uVar8 + 5] = local_462;
          local_448[uVar8 + 6] = local_460;
          local_448[uVar8 + 7] = local_45e;
          local_448[uVar8 + 8] = local_45c;
          local_448[uVar8 + 9] = local_45a;
          local_448[uVar8 + 10] = local_458;
          local_448[uVar8 + 0xb] = (undefined2)local_454;
          local_448[uVar8 + 0xc] = local_454._2_2_;
        }
      }
      iVar4 = (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_470,0x20);
      bVar3 = local_470;
    }
  }
  goto LAB_18000adf6;
  while( true ) {
    *(byte *)(uVar6 + 0x800 + (longlong)param_3) = (&local_470)[uVar6];
    uVar8 = uVar8 + 1;
    uVar6 = uVar6 + 1;
    uVar9 = (ulonglong)uVar8;
    if (7 < (longlong)uVar6) break;
LAB_18000ae26:
    uVar8 = (uint)uVar9;
    if ((&local_470)[uVar6] == 0x20) break;
  }
  *(undefined1 *)((longlong)param_3 + (longlong)(int)uVar8 + 0x800) = 0x2e;
  uVar10 = uVar7;
  do {
    uVar14 = (uint)uVar10;
    cVar1 = *(char *)((longlong)&local_469 + uVar7 + 1);
    if (cVar1 == ' ') break;
    *(char *)((longlong)param_3 + uVar7 + (longlong)(int)uVar8 + 0x801) = cVar1;
    uVar14 = uVar14 + 1;
    uVar10 = (ulonglong)uVar14;
    uVar7 = uVar7 + 1;
  } while ((longlong)uVar7 < 3);
  *(undefined1 *)((longlong)(int)(uVar14 + uVar8) + 0x801 + (longlong)param_3) = 0;
  if (uVar14 == 0) {
    *(undefined1 *)((longlong)param_3 + (longlong)(int)uVar8 + 0x800) = 0;
  }
  sVar12 = 0xb;
  *(undefined2 *)((longlong)param_3 + 0x819) = local_45e;
  *(undefined2 *)((longlong)param_3 + 0x817) = local_460;
  *(undefined2 *)((longlong)param_3 + 0x815) = local_462;
  *(undefined2 *)((longlong)param_3 + 0x81d) = local_458;
  *(undefined2 *)((longlong)param_3 + 0x81b) = local_45a;
  *(char *)((longlong)param_3 + 0x814) = local_465;
  *(undefined4 *)((longlong)param_3 + 0x810) = local_454;
  *(uint *)((longlong)param_3 + 0x820) = CONCAT22(local_45c,local_456);
  *(int *)((longlong)param_3 + 0x824) = *param_2 + -0x20;
  bVar3 = 0;
  pbVar11 = &local_470;
  do {
    bVar3 = (bVar3 >> 1) + bVar3 * -0x80 + *pbVar11;
    sVar12 = sVar12 + -1;
    pbVar11 = pbVar11 + 1;
  } while (sVar12 != 0);
  if (bVar13 == bVar3) {
    memset(param_3,0,0x800);
    local_488 = 0x800;
    (**(code **)(*DAT_18001d670 + 0x58))(DAT_18001d670,local_448,0x200,param_3);
  }
LAB_18000adf6:
  FUN_180012550(local_48 ^ (ulonglong)auStack_4a8);
  return;
}




int FUN_18000af70(longlong param_1,int *param_2,void *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  size_t _Size;
  int iVar10;
  int iVar11;
  uint local_res10 [2];
  void *local_res18;
  
  iVar11 = 0;
  _Size = (size_t)param_4;
  iVar10 = 0;
  if ((0xfffffffffffffffd < (longlong)param_2 - 1U) || (param_4 < 0)) {
    return -1;
  }
  local_res18 = param_3;
  if (param_2[1] == -1) {
    if (*param_2 < param_2[2]) {
      memcpy(param_3,(void *)((longlong)*param_2 + *(longlong *)(param_1 + 0x28)),_Size);
      *param_2 = *param_2 + param_4;
      return param_4;
    }
LAB_18000aff3:
    iVar11 = 0;
  }
  else {
    if (param_2[5] == 0) {
      if ((param_2[2] < *param_2 + param_4) &&
         (uVar8 = param_2[2] - *param_2, _Size = (size_t)uVar8, uVar8 == 0)) goto LAB_18000aff3;
    }
    iVar2 = *param_2;
    do {
      lVar3 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar1 = *(ushort *)(lVar3 + 2);
      pbVar4 = (byte *)FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar8 = iVar2 % (int)((uint)*pbVar4 * (uint)uVar1);
      lVar3 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar1 = *(ushort *)(lVar3 + 2);
      pbVar4 = (byte *)FUN_180009cc0(*(longlong *)(param_1 + 8));
      iVar6 = (uint)*pbVar4 * (uint)uVar1 - uVar8;
      iVar9 = (int)_Size;
      iVar7 = iVar9;
      if (iVar6 < iVar9) {
        iVar7 = iVar6;
      }
      lVar3 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar1 = *(ushort *)(lVar3 + 2);
      pbVar4 = (byte *)FUN_180009cc0(*(longlong *)(param_1 + 8));
      iVar6 = 0;
      iVar2 = iVar2 / (int)((uint)*pbVar4 * (uint)uVar1);
      local_res10[0] = param_2[1];
      if (0 < iVar2) {
        do {
          uVar5 = FUN_18000b7d0(*(longlong *)(param_1 + 0x10),local_res10[0],local_res10);
          if ((int)uVar5 == -1) {
            return -1;
          }
          uVar5 = FUN_18000b8c0(*(longlong *)(param_1 + 0x10),local_res10[0]);
          if ((int)uVar5 != 0) {
            return iVar11;
          }
          if (local_res10[0] == 0) {
            return iVar11;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
      }
      FUN_18000a370(param_1,local_res10[0]);
      memcpy((void *)((longlong)iVar10 + (longlong)local_res18),
             (void *)((ulonglong)uVar8 + *(longlong *)(param_1 + 0x20)),(longlong)iVar7);
      iVar11 = iVar11 + iVar7;
      iVar2 = *param_2 + iVar7;
      iVar10 = iVar10 + iVar7;
      _Size = (size_t)(uint)(iVar9 - iVar7);
      *param_2 = iVar2;
    } while (0 < iVar9 - iVar7);
  }
  return iVar11;
}




undefined8 FUN_18000b110(undefined8 param_1,undefined4 *param_2)

{
  if ((longlong)param_2 - 1U < 0xfffffffffffffffe) {
    *param_2 = 0;
    return 0;
  }
  return 0xffffffff;
}




undefined8 FUN_18000b130(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint local_res10 [2];
  
  if (param_2 - 1U < 0xfffffffffffffffe) {
    if (*(int *)(param_2 + 0xc) != -2) {
      if (*(int *)(param_2 + 0xc) == -1) {
        lVar10 = (longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_1 + 0x28);
        if (*(int *)(param_2 + 0x14) == 0) {
          *(undefined1 *)(lVar10 + 0xb) = 0x20;
          uVar6 = *(undefined4 *)(param_2 + 8);
        }
        else {
          *(undefined1 *)(lVar10 + 0xb) = 0x10;
          uVar6 = 0;
        }
        *(undefined4 *)(lVar10 + 0x1c) = uVar6;
        *(undefined2 *)(lVar10 + 0x14) = *(undefined2 *)(param_2 + 6);
        *(undefined2 *)(lVar10 + 0x1a) = *(undefined2 *)(param_2 + 4);
      }
      else {
        lVar10 = FUN_180009cc0(*(longlong *)(param_1 + 8));
        uVar3 = *(ushort *)(lVar10 + 2);
        pbVar9 = (byte *)FUN_180009cc0(*(longlong *)(param_1 + 8));
        uVar11 = (longlong)*(int *)(param_2 + 0x10) / (longlong)(int)((uint)uVar3 * (uint)*pbVar9);
        lVar10 = FUN_180009cc0(*(longlong *)(param_1 + 8));
        uVar3 = *(ushort *)(lVar10 + 2);
        pbVar9 = (byte *)FUN_180009cc0(*(longlong *)(param_1 + 8));
        bVar1 = *pbVar9;
        iVar4 = *(int *)(param_2 + 0x10);
        local_res10[0] = *(uint *)(param_2 + 0xc);
        if (0 < (int)uVar11) {
          uVar11 = uVar11 & 0xffffffff;
          do {
            FUN_18000b7d0(*(longlong *)(param_1 + 0x10),local_res10[0],local_res10);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        FUN_18000a370(param_1,local_res10[0]);
        lVar10 = ((longlong)iVar4 % (longlong)(int)((uint)bVar1 * (uint)uVar3) & 0xffffffffU) +
                 *(longlong *)(param_1 + 0x20);
        if (*(int *)(param_2 + 0x14) == 0) {
          *(undefined1 *)(lVar10 + 0xb) = 0x20;
          uVar6 = *(undefined4 *)(param_2 + 8);
        }
        else {
          *(undefined1 *)(lVar10 + 0xb) = 0x10;
          uVar6 = 0;
        }
        *(undefined4 *)(lVar10 + 0x1c) = uVar6;
        *(undefined2 *)(lVar10 + 0x14) = *(undefined2 *)(param_2 + 6);
        *(undefined2 *)(lVar10 + 0x1a) = *(undefined2 *)(param_2 + 4);
        *(undefined1 *)(param_1 + 0x34) = 1;
      }
    }
    if (*(int *)(param_2 + 0xc) == -1) {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8);
      lVar7 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar3 = *(ushort *)(lVar7 + 2);
      lVar7 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      bVar1 = *(byte *)(lVar7 + 10);
      lVar7 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      iVar4 = *(int *)(lVar7 + 4);
      lVar7 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar5 = *(uint *)(lVar7 + 0x20);
      lVar7 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      (**(code **)(lVar10 + 0x10))
                (*(longlong *)(param_1 + 0x18) + 8,*(undefined8 *)(param_1 + 0x28),
                 (uint)*(ushort *)(lVar7 + 8) + iVar4 * (uint)bVar1,
                 (ulonglong)uVar5 / (ulonglong)uVar3);
    }
    if (*(char *)(param_1 + 0x34) != '\0') {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8);
      puVar8 = (undefined1 *)FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar2 = *puVar8;
      pbVar9 = (byte *)FUN_180009cc0(*(longlong *)(param_1 + 8));
      iVar4 = *(int *)(param_1 + 0x30);
      bVar1 = *pbVar9;
      lVar7 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      (**(code **)(lVar10 + 0x10))
                (*(longlong *)(param_1 + 0x18) + 8,*(undefined8 *)(param_1 + 0x20),
                 *(int *)(lVar7 + 0x14) + (iVar4 + -2) * (uint)bVar1,uVar2);
      *(undefined1 *)(param_1 + 0x34) = 0;
    }
    return 0;
  }
  return 0xffffffff;
}




int FUN_18000b340(longlong param_1,uint *param_2,void *param_3,int param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  size_t _Size;
  uint local_res10 [2];
  void *local_res18;
  
  iVar10 = 0;
  _Size = (size_t)param_4;
  iVar9 = 0;
  if ((0xfffffffffffffffd < (longlong)param_2 - 1U) || (param_4 < 0)) {
    return -1;
  }
  if (param_4 == 0) {
    return 0;
  }
  uVar8 = (ulonglong)(int)*param_2;
  local_res18 = param_3;
  if (param_2[1] != 0xffffffff) {
    do {
      lVar3 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar1 = *(ushort *)(lVar3 + 2);
      pbVar4 = (byte *)FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar7 = (int)uVar8 >> 0x1f;
      uVar2 = (longlong)((ulonglong)uVar7 << 0x20 | uVar8 & 0xffffffff) %
              (longlong)(int)((uint)*pbVar4 * (uint)uVar1);
      lVar3 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar1 = *(ushort *)(lVar3 + 2);
      pbVar4 = (byte *)FUN_180009cc0(*(longlong *)(param_1 + 8));
      iVar6 = (uint)*pbVar4 * (uint)uVar1 - (int)uVar2;
      iVar12 = (int)_Size;
      iVar11 = iVar12;
      if (iVar6 < iVar12) {
        iVar11 = iVar6;
      }
      lVar3 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar1 = *(ushort *)(lVar3 + 2);
      pbVar4 = (byte *)FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar8 = (longlong)((ulonglong)uVar7 << 0x20 | uVar8 & 0xffffffff) /
              (longlong)(int)((uint)uVar1 * (uint)*pbVar4);
      uVar7 = param_2[1];
      local_res10[0] = uVar7;
      if (0 < (int)uVar8) {
        uVar8 = uVar8 & 0xffffffff;
        do {
          uVar7 = local_res10[0];
          FUN_18000b7d0(*(longlong *)(param_1 + 0x10),local_res10[0],local_res10);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if ((local_res10[0] == 0) ||
         (uVar5 = FUN_18000b8c0(*(longlong *)(param_1 + 0x10),local_res10[0]), (int)uVar5 != 0)) {
        FUN_18000b6c0(*(longlong *)(param_1 + 0x10),local_res10);
        if (param_2[1] == 0) {
          param_2[1] = local_res10[0];
        }
        else {
          FUN_18000bac0(*(longlong *)(param_1 + 0x10),uVar7,local_res10[0]);
        }
        uVar5 = FUN_18000b670(*(longlong *)(param_1 + 0x10));
        FUN_18000bac0(*(longlong *)(param_1 + 0x10),local_res10[0],(uint)uVar5);
      }
      FUN_18000a370(param_1,local_res10[0]);
      memcpy((void *)((uVar2 & 0xffffffff) + *(longlong *)(param_1 + 0x20)),
             (void *)((longlong)iVar9 + (longlong)local_res18),(longlong)iVar11);
      *(undefined1 *)(param_1 + 0x34) = 1;
      iVar10 = iVar10 + iVar11;
      iVar9 = iVar9 + iVar11;
      uVar7 = *param_2 + iVar11;
      uVar8 = (ulonglong)uVar7;
      _Size = (size_t)(uint)(iVar12 - iVar11);
      *param_2 = uVar7;
    } while (0 < iVar12 - iVar11);
    if ((int)param_2[2] < (int)uVar7) {
      param_2[2] = uVar7;
    }
    return iVar10;
  }
  memcpy((void *)(uVar8 + *(longlong *)(param_1 + 0x28)),param_3,_Size);
  *param_2 = *param_2 + param_4;
  return param_4;
}




undefined8 * FUN_18000b550(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  undefined4 uVar5;
  
  param_1[1] = param_2;
  *param_1 = CFATTable::vftable;
  param_1[3] = 2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar3 = FUN_180009cc0(param_2);
  uVar2 = *(uint *)(lVar3 + 4);
  lVar3 = FUN_180009cc0(param_1[1]);
  uVar5 = 0x2d000;
  uVar1 = *(ushort *)(lVar3 + 2);
  if (uVar2 < 0x2d001) {
    lVar3 = FUN_180009cc0(param_1[1]);
    pvVar4 = malloc((ulonglong)(*(int *)(lVar3 + 4) * (uint)uVar1));
    param_1[2] = pvVar4;
    lVar3 = FUN_180009cc0(param_1[1]);
    uVar5 = *(undefined4 *)(lVar3 + 4);
  }
  else {
    pvVar4 = malloc((longlong)(int)((uint)uVar1 * 0x2d000));
    param_1[2] = pvVar4;
  }
  *(undefined4 *)(param_1 + 5) = uVar5;
  if (param_1[2] != 0) {
    FUN_18000b910((longlong)param_1,2);
  }
  return param_1;
}




undefined8 * FUN_18000b610(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CFATTable::vftable;
  free((void *)param_1[2]);
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_18000b670(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
  cVar1 = *(char *)(lVar2 + 0x24);
  if (cVar1 == '\0') {
    return 0xff8;
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return 0xffffffff;
    }
    return 0xffffff8;
  }
  return 0xfff8;
}




undefined8 FUN_18000b6c0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  byte bVar8;
  undefined4 local_res8;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  do {
    local_res8 = 0;
    bVar8 = 0;
    uVar3 = FUN_18000b910(param_1,uVar5);
    if ((int)uVar3 != 0) {
      lVar4 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      cVar1 = *(char *)(lVar4 + 0x24);
      if (cVar1 == '\0') {
        bVar8 = (byte)uVar5 & 1;
        uVar6 = (ulonglong)(uVar5 * 3 >> 1);
      }
      else if (cVar1 == '\x01') {
        uVar6 = (ulonglong)(uVar5 * 2);
      }
      else {
        if (cVar1 != '\x02') {
LAB_18000b7ab:
          *param_2 = *(undefined4 *)(param_1 + 0x18);
          return 0;
        }
        uVar6 = (ulonglong)(uVar5 * 4);
      }
      lVar4 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      puVar7 = (uint *)(uVar6 % (ulonglong)(*(int *)(param_1 + 0x28) * (uint)*(ushort *)(lVar4 + 2))
                       + *(longlong *)(param_1 + 0x10));
      lVar4 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      cVar1 = *(char *)(lVar4 + 0x24);
      if (cVar1 == '\0') {
        uVar2 = (ushort)*puVar7;
        if (bVar8 != 0) {
          uVar2 = uVar2 >> 4;
        }
        local_res8 = uVar2 & 0xfff;
      }
      else if (cVar1 == '\x01') {
        local_res8 = (uint)(ushort)*puVar7;
      }
      else {
        if (cVar1 != '\x02') goto LAB_18000b7ab;
        local_res8 = *puVar7;
      }
    }
    if (local_res8 == 0) goto LAB_18000b7ab;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar5 = *(uint *)(param_1 + 0x18);
  } while( true );
}




undefined8 FUN_18000b7d0(longlong param_1,uint param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  uint *puVar7;
  
  *param_3 = 0;
  bVar5 = 0;
  uVar3 = FUN_18000b910(param_1,param_2);
  if ((int)uVar3 != 0) {
    lVar4 = FUN_180009cc0(*(longlong *)(param_1 + 8));
    cVar1 = *(char *)(lVar4 + 0x24);
    if (cVar1 == '\0') {
      bVar5 = (byte)param_2 & 1;
      uVar6 = (ulonglong)(param_2 * 3 >> 1);
    }
    else if (cVar1 == '\x01') {
      uVar6 = (ulonglong)(param_2 * 2);
    }
    else {
      if (cVar1 != '\x02') {
        return 0xffffffff;
      }
      uVar6 = (ulonglong)(param_2 * 4);
    }
    lVar4 = FUN_180009cc0(*(longlong *)(param_1 + 8));
    puVar7 = (uint *)(uVar6 % (ulonglong)(*(int *)(param_1 + 0x28) * (uint)*(ushort *)(lVar4 + 2)) +
                     *(longlong *)(param_1 + 0x10));
    lVar4 = FUN_180009cc0(*(longlong *)(param_1 + 8));
    cVar1 = *(char *)(lVar4 + 0x24);
    if (cVar1 == '\0') {
      *(short *)param_3 = (short)*puVar7;
      uVar2 = *param_3;
      if (bVar5 != 0) {
        uVar2 = uVar2 >> 4;
      }
      *param_3 = uVar2 & 0xfff;
      return 0;
    }
    if (cVar1 == '\x01') {
      *(short *)param_3 = (short)*puVar7;
      return 0;
    }
    if (cVar1 == '\x02') {
      *param_3 = *puVar7;
      return 0;
    }
  }
  return 0xffffffff;
}




undefined8 FUN_18000b8c0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
  cVar1 = *(char *)(lVar2 + 0x24);
  if (cVar1 == '\0') {
    bVar3 = param_2 < 0xff8;
  }
  else if (cVar1 == '\x01') {
    bVar3 = param_2 < 0xfff8;
  }
  else {
    if (cVar1 != '\x02') {
      return 0;
    }
    bVar3 = param_2 < 0xffffff8;
  }
  if (bVar3) {
    return 0;
  }
  return 1;
}




undefined8 FUN_18000b910(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if ((param_2 < *(int *)(param_1 + 0x24) + *(uint *)(param_1 + 0x20)) &&
     (*(uint *)(param_1 + 0x20) <= param_2)) {
    return 1;
  }
  lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
  cVar1 = *(char *)(lVar2 + 0x24);
  if (cVar1 == '\0') {
    lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
    uVar6 = (ulonglong)*(ushort *)(lVar2 + 2);
    uVar3 = (ulonglong)(param_2 * 3 >> 1);
  }
  else if (cVar1 == '\x01') {
    lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
    uVar6 = (ulonglong)*(ushort *)(lVar2 + 2);
    uVar3 = (ulonglong)(param_2 * 2);
  }
  else {
    if (cVar1 != '\x02') {
      return 0;
    }
    lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
    uVar6 = (ulonglong)*(ushort *)(lVar2 + 2);
    uVar3 = (ulonglong)(param_2 * 4);
  }
  uVar7 = (int)(uVar3 / uVar6) - (int)((uVar3 / uVar6) % (ulonglong)*(uint *)(param_1 + 0x28));
  lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
  if (*(uint *)(lVar2 + 4) <= uVar7) {
    return 0;
  }
  lVar4 = FUN_180009ce0(*(longlong *)(param_1 + 8));
  lVar2 = *(longlong *)(lVar4 + 8);
  lVar5 = FUN_180009cc0(*(longlong *)(param_1 + 8));
  (**(code **)(lVar2 + 8))
            (lVar4 + 8,*(undefined8 *)(param_1 + 0x10),*(int *)(lVar5 + 0x18) + uVar7,
             *(undefined4 *)(param_1 + 0x28));
  lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
  cVar1 = *(char *)(lVar2 + 0x24);
  if (cVar1 == '\0') {
    lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
    uVar7 = (uint)((ulonglong)(*(int *)(param_1 + 0x28) * (uint)*(ushort *)(lVar2 + 2) * 2) *
                   0xaaaaaaab >> 0x20);
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return 0;
      }
      lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
      uVar7 = *(int *)(param_1 + 0x28) * (uint)*(ushort *)(lVar2 + 2) >> 2;
      goto LAB_18000ba7b;
    }
    lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
    uVar7 = *(int *)(param_1 + 0x28) * (uint)*(ushort *)(lVar2 + 2);
  }
  uVar7 = uVar7 >> 1;
LAB_18000ba7b:
  *(uint *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = param_2 - param_2 % uVar7;
  return 1;
}




undefined8 FUN_18000bac0(longlong param_1,uint param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  undefined1 local_res8;
  
  FUN_18000b910(param_1,param_2);
  lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
  cVar1 = *(char *)(lVar2 + 0x24);
  if (cVar1 == '\0') {
    local_res8 = (byte)param_2 & 1;
    uVar4 = (ulonglong)(param_2 * 3 >> 1);
LAB_18000bb23:
    lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
    puVar5 = (uint *)(uVar4 % (ulonglong)(*(int *)(param_1 + 0x28) * (uint)*(ushort *)(lVar2 + 2)) +
                     *(longlong *)(param_1 + 0x10));
    lVar2 = FUN_180009cc0(*(longlong *)(param_1 + 8));
    cVar1 = *(char *)(lVar2 + 0x24);
    if (cVar1 == '\0') {
      if (local_res8 == 0) {
        *(byte *)((longlong)puVar5 + 1) = *(byte *)((longlong)puVar5 + 1) & 0xf0;
        *(byte *)puVar5 = (byte)param_3;
        *(byte *)((longlong)puVar5 + 1) =
             *(byte *)((longlong)puVar5 + 1) | (byte)(param_3 >> 8) & 0xf;
      }
      else {
        *(byte *)puVar5 = (byte)*puVar5 & 0xf;
        *(byte *)puVar5 = (byte)*puVar5 | (byte)param_3 << 4;
        *(byte *)((longlong)puVar5 + 1) = (byte)(param_3 >> 4);
      }
    }
    else if (cVar1 == '\x01') {
      *(short *)puVar5 = (short)param_3;
    }
    else {
      if (cVar1 != '\x02') goto LAB_18000bb60;
      *puVar5 = param_3;
    }
    *(undefined4 *)(param_1 + 0x1c) = 1;
    uVar3 = 0;
  }
  else {
    if (cVar1 == '\x01') {
      uVar4 = (ulonglong)(param_2 * 2);
      goto LAB_18000bb23;
    }
    if (cVar1 == '\x02') {
      uVar4 = (ulonglong)(param_2 * 4);
      goto LAB_18000bb23;
    }
LAB_18000bb60:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}




void FUN_18000bbc0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_180004280(param_1);
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




longlong * FUN_18000bc40(longlong *param_1,longlong *param_2,longlong *param_3)

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
    FUN_180004620();
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
      goto LAB_18000bd35;
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
LAB_18000bd35:
  plVar2 = plVar12 + (lVar11 >> 3);
  FUN_18000c590(param_1,plVar2,param_3,lVar14);
  plVar10 = (longlong *)param_1[1];
  plVar9 = (longlong *)*param_1;
  plVar13 = plVar12;
  if (param_2 != plVar10) {
    FUN_18000c4e0((longlong *)*param_1,param_2,plVar12);
    plVar10 = (longlong *)param_1[1];
    plVar9 = param_2;
    plVar13 = plVar2 + 1;
  }
  FUN_18000c4e0(plVar9,plVar10,plVar13);
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
FUN_18000be40(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_18000d8b0(param_1,param_6);
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
      goto LAB_18000bebf;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_18000bebf;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_18000bebf:
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
        goto LAB_18000c065;
      }
LAB_18000bfd6:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_18000bfd6;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180004400(param_1,plVar2);
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
LAB_18000c065:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_18000c0c0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
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
    FUN_18000be40(param_1,param_2,'\x01',(undefined8 *)*param_1,param_4,param_5);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    uVar2 = FUN_1800050a0(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      FUN_18000be40(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    puVar5 = (undefined8 *)plVar3[2];
    uVar2 = FUN_1800050a0(puVar5 + 4,param_4);
    if ((int)uVar2 < 0) {
      FUN_18000be40(param_1,param_2,'\0',puVar5,param_4,param_5);
      return param_2;
    }
  }
  else {
    uVar2 = FUN_1800050a0(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      local_38 = param_3;
      plVar3 = FUN_180002a00((longlong *)&local_38);
      uVar2 = FUN_1800050a0((undefined8 *)(*plVar3 + 0x20),param_4);
      if ((int)uVar2 < 0) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          FUN_18000be40(param_1,param_2,'\0',local_38,param_4,param_5);
          return param_2;
        }
        FUN_18000be40(param_1,param_2,'\x01',param_3,param_4,param_5);
        return param_2;
      }
    }
    uVar2 = FUN_1800050a0(param_3 + 4,param_4);
    if (((int)uVar2 < 0) &&
       ((lVar1 = *param_1, local_38 = param_3, plVar4 = FUN_18000c800((longlong *)&local_38),
        plVar3 = local_38, *plVar4 == lVar1 ||
        (uVar2 = FUN_1800050a0(param_4,local_38 + 4), (int)uVar2 < 0)))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_18000be40(param_1,param_2,'\0',param_3,param_4,param_5);
        return param_2;
      }
      FUN_18000be40(param_1,param_2,'\x01',plVar3,param_4,param_5);
      return param_2;
    }
  }
  puVar5 = FUN_18000c2f0(param_1,local_28,'\0',param_4,param_5);
  *param_2 = *puVar5;
  return param_2;
}




undefined8 *
FUN_18000c2f0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
      uVar3 = FUN_1800050a0(param_4,plVar5 + 4);
    }
    else {
      uVar3 = FUN_1800050a0(plVar5 + 4,param_4);
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
      puVar4 = FUN_18000be40(param_1,&local_38,'\x01',plVar6,param_4,param_5);
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
  uVar3 = FUN_1800050a0(plVar5 + 4,param_4);
  if ((int)uVar3 < 0) {
    puVar4 = FUN_18000be40(param_1,&local_38,(char)uVar7,plVar6,param_4,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_38 = param_5 + 4;
    FUN_18000d990(param_5 + 8);
    FUN_1800027e0(param_5 + 4);
    local_30 = 0x58;
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




longlong * FUN_18000c4e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    do {
      plVar1 = (longlong *)*param_1;
      *param_3 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18001d008);
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




void FUN_18000c590(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_3;
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18001d008,param_3,param_4,0xfffffffffffffffe);
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




undefined8 * FUN_18000c600(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = CMomEventObject<class_CModuleImpl<class_CFileSystemModule>_>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_1800041f0();
  param_1[2] = uVar1;
  *param_1 = CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CFileSystemModule>_>_>::
             vftable;
  return param_1;
}




void FUN_18000c660(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000da40((longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  free(*(void **)(param_1 + 0x10));
  return;
}




void FUN_18000c6a0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}




void FUN_18000c6d0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000c6db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))();
    return;
  }
  return;
}




void FUN_18000c6e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000da40(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_18000c710(undefined8 *param_1)

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




void FUN_18000c760(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000da40(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_18000c790(longlong *param_1)

{
  FUN_18000d990(param_1 + 4);
  FUN_1800027e0(param_1);
  return;
}




void FUN_18000c7c0(longlong *param_1)

{
  FUN_18000d990(param_1);
  return;
}




void FUN_18000c7e0(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  return;
}




longlong * FUN_18000c800(longlong *param_1)

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




/* WARNING: Type propagation algorithm not settling */

void FUN_18000c870(longlong param_1,void *param_2,longlong *param_3)

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
  local_48 = DAT_18001d018 ^ (ulonglong)auStackY_d8;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar13 = 0xffffffffffffffff;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  local_90 = param_3;
  FUN_180004ce0(local_68,param_2,sVar13);
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
      if (uVar3 <= uVar2) goto LAB_18000c947;
LAB_18000c9a8:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_18000c9a8;
LAB_18000c947:
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
  if (plVar10 != (longlong *)*local_98) goto LAB_18000cbdc;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  FUN_180004ce0(local_68,param_2,sVar13);
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
      if (uVar2 <= uVar15) goto LAB_18000cab7;
LAB_18000cb07:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_18000cb07;
LAB_18000cab7:
      plVar11 = (longlong *)*plVar8;
      plVar10 = plVar8;
    }
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    plVar8 = plVar11;
    plVar11 = local_98;
  }
  if (plVar10 == plVar7) {
LAB_18000cb0f:
    local_a8[0] = local_68;
    plVar7 = (longlong *)FUN_18000bbc0(plVar11,&PTR_1800164d8,local_a8);
    FUN_18000c0c0(plVar11,local_a8,plVar10,plVar7 + 4,plVar7);
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
      if (uVar2 < uVar3) goto LAB_18000cb0f;
    }
    else if (iVar6 < 0) goto LAB_18000cb0f;
  }
  plVar7 = plVar10 + 8;
  if (plVar7 != &local_88) {
    FUN_18000d990(plVar7);
    *plVar7 = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_18000d990(&local_88);
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
LAB_18000cbdc:
  plVar7 = local_90;
  local_50 = 0xf;
  local_58 = 0;
  local_68[0]._0_1_ = 0;
  plVar8 = (longlong *)0x0;
  local_a8[0] = (longlong *)0x0;
  if (local_90 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)*local_90)(local_90,&DAT_18001d008);
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
    FUN_18000bc40(plVar10 + 8,plVar7,(longlong *)local_a8);
  }
  else {
    *plVar7 = 0;
    local_90 = plVar7;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)*plVar8)(plVar8,&DAT_18001d008);
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
  FUN_180012550(local_48 ^ (ulonglong)auStackY_d8);
  return;
}




undefined4 FUN_18000ccc0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 8);
}




void FUN_18000ccd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_18000d900(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_18000cd20(longlong param_1,void *param_2,undefined4 *param_3)

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
  local_48 = DAT_18001d018 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (*(char *)((longlong)param_2 + sVar12) != '\0');
  local_78 = param_1;
  FUN_180004ce0(local_68,param_2,sVar12);
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
      if (uVar5 <= uVar3) goto LAB_18000ce00;
LAB_18000ce8f:
      puVar8 = (undefined8 *)puVar10[2];
    }
    else {
      if (iVar7 < 0) goto LAB_18000ce8f;
LAB_18000ce00:
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
      if (uVar5 < uVar3) goto LAB_18000ce54;
      if (uVar5 >= uVar3 && uVar5 != uVar3) goto LAB_18000ce57;
    }
    if (-1 < iVar7) goto LAB_18000ce57;
  }
LAB_18000ce54:
  puVar11 = puVar2;
LAB_18000ce57:
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
  FUN_180012550(local_48 ^ (ulonglong)auStack_98);
  return;
}




longlong *
FUN_18000cf10(undefined8 param_1,undefined8 *param_2,longlong **param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char cVar9;
  longlong *local_res10;
  
  cVar9 = (char)param_3;
  if (DAT_18001d900 == (undefined1 *)0x0) {
    DAT_18001d900 = &DAT_18001d800;
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,0x100);
    pcVar4 = (char *)__std_type_info_name
                               (0x18001d290,&DAT_18001e580,param_3,param_4,0xfffffffffffffffe);
    param_3 = &local_res10;
    FUN_18000d620(pcVar4,DAT_18001d900,(uint *)param_3);
  }
  plVar5 = (longlong *)(**(code **)*param_2)(param_2,DAT_18001d900);
  if ((plVar5 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar5 + 0x58))(plVar5), iVar2 != 0)) {
    if (DAT_18001da10 == (undefined1 *)0x0) {
      DAT_18001da10 = &DAT_18001d910;
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,0x100);
      pcVar4 = (char *)__std_type_info_name(0x18001d2b8,&DAT_18001e580);
      param_3 = &local_res10;
      FUN_18000d620(pcVar4,DAT_18001da10,(uint *)param_3);
    }
    plVar6 = (longlong *)(**(code **)*param_2)(param_2,DAT_18001da10);
    if ((((plVar6 != (longlong *)0x0) &&
         (uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6), uVar3 != 0xff)) && (uVar3 < 0x19)) &&
       ((0x145617eU >> (uVar3 & 0x1f) & 1) != 0)) {
      if (DAT_18001db20 == (undefined1 *)0x0) {
        DAT_18001db20 = &DAT_18001da20;
        local_res10 = (longlong *)CONCAT44(local_res10._4_4_,0x100);
        pcVar4 = (char *)__std_type_info_name(0x18001d2e8,&DAT_18001e580);
        param_3 = &local_res10;
        FUN_18000d620(pcVar4,DAT_18001db20,(uint *)param_3);
      }
      plVar5 = (longlong *)(**(code **)*plVar5)(plVar5,DAT_18001db20);
      cVar1 = (**(code **)(*plVar5 + 0x30))(plVar5);
      if ((cVar1 != '\0') && (cVar9 == '\0')) {
        local_res10 = (longlong *)operator_new(0x30);
        if (local_res10 != (longlong *)0x0) {
          plVar5 = FUN_1800117d0(local_res10,param_2,param_3,param_4);
          return plVar5;
        }
        return (longlong *)0x0;
      }
      if (DAT_18001dc30 == (undefined1 *)0x0) {
        DAT_18001dc30 = &DAT_18001db30;
        local_res10 = (longlong *)CONCAT44(local_res10._4_4_,0x100);
        pcVar4 = (char *)__std_type_info_name(0x18001d310,&DAT_18001e580);
        param_3 = &local_res10;
        FUN_18000d620(pcVar4,DAT_18001dc30,(uint *)param_3);
      }
      plVar5 = (longlong *)(**(code **)*param_2)(param_2,DAT_18001dc30);
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x38))(plVar5);
      if (uVar3 == 4) {
        if ((puVar7 == (undefined8 *)0x0) ||
           (uVar8 = FUN_18000d590(param_1,puVar7), (char)uVar8 == '\0')) {
          local_res10 = (longlong *)operator_new(0x18);
          if (local_res10 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = FUN_18000f210(local_res10,(longlong)param_2);
          }
        }
        else {
          local_res10 = (longlong *)operator_new(0x30);
          if (local_res10 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = FUN_1800117d0(local_res10,param_2,param_3,param_4);
          }
        }
      }
      else if (uVar3 - 5 < 2) {
        local_res10 = (longlong *)operator_new(0x10);
        if (local_res10 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = FUN_1800051f0(local_res10,param_2);
        }
      }
      else if (uVar3 == 0x18) {
        local_res10 = (longlong *)operator_new(0x10);
        if (local_res10 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = FUN_180007640(local_res10,param_2,param_3,param_4);
        }
      }
      else if (uVar3 == 8) {
        if ((puVar7 == (undefined8 *)0x0) ||
           (uVar8 = FUN_18000d590(param_1,puVar7), (char)uVar8 == '\0')) {
          local_res10 = (longlong *)operator_new(0x10);
          if (local_res10 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = FUN_1800012b0(local_res10,param_2,param_3,param_4);
          }
        }
        else {
          local_res10 = (longlong *)operator_new(0x30);
          if (local_res10 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = FUN_1800117d0(local_res10,param_2,param_3,param_4);
          }
        }
      }
      else if ((puVar7 == (undefined8 *)0x0) ||
              ((uVar8 = FUN_18000d590(param_1,puVar7), (char)uVar8 == '\0' &&
               ((0x16 < uVar3 || ((0x456000U >> (uVar3 & 0x1f) & 1) == 0)))))) {
        local_res10 = (longlong *)operator_new(0x40);
        if (local_res10 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = FUN_180009d00(local_res10,(longlong)param_2);
        }
      }
      else {
        local_res10 = (longlong *)operator_new(0x30);
        if (local_res10 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = FUN_1800117d0(local_res10,param_2,param_3,param_4);
        }
      }
      iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
      if (iVar2 == 0) {
        return plVar5;
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,1);
    }
  }
  return (longlong *)0x0;
}




undefined8 FUN_18000d310(void)

{
  return DAT_18001d678;
}




char * FUN_18000d330(void)

{
  return "FileSystem";
}




char * FUN_18000d340(void)

{
  return "CFileSystemModule";
}




undefined * FUN_18000d350(void)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 in_R9;
  uint local_res8 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (DAT_18001d680 == (undefined *)0x0) {
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4);
    if ((*piVar4 < DAT_18001d690) && (_Init_thread_header(&DAT_18001d690), DAT_18001d690 == -1)) {
      DAT_18001d688 = (undefined8 *)FUN_180003d00("Thread");
      _Init_thread_footer(&DAT_18001d690);
    }
    if (DAT_18001d688 == (undefined8 *)0x0) {
      if ((*piVar4 < DAT_18001d6b8) && (_Init_thread_header(&DAT_18001d6b8), DAT_18001d6b8 == -1)) {
        FUN_18000c600((undefined8 *)&DAT_18001d698);
        atexit(FUN_1800148e0);
        _Init_thread_footer(&DAT_18001d6b8);
        DAT_18001d680 = &DAT_18001d698;
      }
      else {
        DAT_18001d680 = &DAT_18001d698;
      }
    }
    else {
      if (DAT_18001df60 == (undefined1 *)0x0) {
        DAT_18001df60 = &DAT_18001de60;
        local_res8[0] = 0x100;
        pcVar2 = (char *)__std_type_info_name(0x18001d380,&DAT_18001e580);
        FUN_18000d620(pcVar2,DAT_18001df60,local_res8);
      }
      plVar3 = (longlong *)(**(code **)*DAT_18001d688)(DAT_18001d688,DAT_18001df60);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
        iVar1 = (**(code **)(*plVar3 + 0x28))
                          (plVar3,0xffffffff,*plVar3,in_R9,uVar5,plVar3,0xffffffff);
        if (DAT_18001d680 == (undefined *)0x0) {
          if ((*piVar4 < DAT_18001d6e0) &&
             (_Init_thread_header(&DAT_18001d6e0), DAT_18001d6e0 == -1)) {
            FUN_18000c600((undefined8 *)&DAT_18001d6c0);
            atexit(FUN_180014920);
            _Init_thread_footer(&DAT_18001d6e0);
          }
          DAT_18001d680 = &DAT_18001d6c0;
          if (-1 < iVar1) {
            (**(code **)(*plVar3 + 0x30))(plVar3);
          }
        }
        (**(code **)(*plVar3 + 0x30))(plVar3);
      }
    }
  }
  return DAT_18001d680;
}




undefined8 FUN_18000d590(undefined8 param_1,undefined8 *param_2)

{
  longlong *in_RAX;
  char *pcVar1;
  uint local_res10 [6];
  
  if (param_2 != (undefined8 *)0x0) {
    if (DAT_18001d7f0 == (undefined1 *)0x0) {
      local_res10[0] = 0x100;
      DAT_18001d7f0 = &DAT_18001d6f0;
      pcVar1 = (char *)__std_type_info_name(0x18001d268,&DAT_18001e580);
      FUN_18000d620(pcVar1,DAT_18001d7f0,local_res10);
    }
    in_RAX = (longlong *)(**(code **)*param_2)(param_2,DAT_18001d7f0);
    if (in_RAX != (longlong *)0x0) {
      in_RAX = (longlong *)(**(code **)(*in_RAX + 0x28))(in_RAX);
      if (((ulonglong)in_RAX & 1) != 0) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_18000d620(char *param_1,undefined1 *param_2,uint *param_3)

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




undefined8 FUN_18000d6c0(undefined8 param_1,char *param_2)

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
    if (DAT_18001dd40 == (char *)0x0) {
      local_res10[0] = 0x100;
      DAT_18001dd40 = &DAT_18001dc40;
      pcVar2 = (char *)__std_type_info_name(0x18001d338,&DAT_18001e580);
      FUN_18000d620(pcVar2,DAT_18001dd40,local_res10);
    }
    cVar1 = *pcVar3;
    cVar4 = *DAT_18001dd40;
    pcVar2 = DAT_18001dd40;
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
      if (DAT_18001de50 == (char *)0x0) {
        local_res10[0] = 0x100;
        DAT_18001de50 = &DAT_18001dd50;
        pcVar2 = (char *)__std_type_info_name(0x18001d360,&DAT_18001e580);
        FUN_18000d620(pcVar2,DAT_18001de50,local_res10);
      }
      cVar1 = *pcVar3;
      cVar4 = *DAT_18001de50;
      pcVar2 = DAT_18001de50;
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




int FUN_18000d830(void *param_1)

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




void FUN_18000d860(undefined8 param_1,longlong *param_2,longlong *param_3)

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




void FUN_18000d8b0(undefined8 param_1,void *param_2)

{
  FUN_18000d990((longlong *)((longlong)param_2 + 0x40));
  FUN_1800027e0((longlong *)((longlong)param_2 + 0x20));
  free(param_2);
  return;
}




void FUN_18000d900(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_18000d900(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_18000d990(param_2 + 8);
    FUN_1800027e0(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_18000d990(longlong *param_1)

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




void FUN_18000da40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_18000d900(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
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
  DAT_18001d678 = param_1;
                    /* 0xdae0  32  GetModule */
  FUN_18000d350();
  return;
}




undefined8 FUN_18000daf0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc((longlong)*(int *)(param_2 + 0x4c) * 4 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = param_3;
  memcpy(puVar1 + 1,*(void **)(param_2 + 0x44),(longlong)*(int *)(param_2 + 0x4c) << 2);
  if (*(void **)(param_2 + 0x44) != (void *)0x0) {
    free(*(void **)(param_2 + 0x44));
  }
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(undefined4 **)(param_2 + 0x44) = puVar1;
  return 1;
}




void FUN_18000db80(undefined8 param_1,void *param_2)

{
  undefined8 *_Memory;
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)param_2 + 0x24);
  while (lVar1 != 0) {
    _Memory = *(undefined8 **)((longlong)param_2 + 0x24);
    *(undefined8 *)((longlong)param_2 + 0x24) = *_Memory;
    free(*(void **)((longlong)_Memory + 0x1c));
    free(_Memory);
    lVar1 = *(longlong *)((longlong)param_2 + 0x24);
  }
  free(*(void **)((longlong)param_2 + 0x18));
  free(*(void **)((longlong)param_2 + 0x2c));
  free(*(void **)((longlong)param_2 + 0x38));
  free(*(void **)((longlong)param_2 + 0x10));
  if (*(void **)((longlong)param_2 + 0x44) != (void *)0x0) {
    free(*(void **)((longlong)param_2 + 0x44));
  }
  memset(param_2,0,0x50);
  return;
}




undefined8 FUN_18000dc20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  plVar2 = (longlong *)param_2[1];
  if (param_2 == *(longlong **)(param_1 + 0x3a8)) {
    *(longlong **)(param_1 + 0x3a8) = plVar2;
  }
  if (lVar1 != 0) {
    *(longlong **)(lVar1 + 8) = plVar2;
  }
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = lVar1;
  }
  param_2[1] = 0;
  *param_2 = 0;
  free((void *)param_2[10]);
  free(*(void **)((longlong)param_2 + 0x2c));
  free((void *)param_2[4]);
  free(param_2);
  return 1;
}




undefined8 FUN_18000dc90(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    FUN_18000db80(param_1,param_2);
    free(param_2);
  }
  return 1;
}




void FUN_18000dcc0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *_Memory;
  bool bVar3;
  ushort uVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStackY_2a8 [32];
  uint local_268 [2];
  void *local_260;
  longlong local_258;
  undefined8 *local_250;
  ushort local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_18001d018 ^ (ulonglong)auStackY_2a8;
  local_258 = param_1;
  local_250 = param_2;
LAB_18000dd04:
  if (*(uint *)*local_250 < 0x10) {
    lVar11 = *(longlong *)(param_3 + 0x24);
    uVar4 = *(ushort *)(*(longlong *)(lVar11 + 0x28) + 8);
    if ((uVar4 != 0) && ((int)(uint)uVar4 < *(int *)(lVar11 + 0x24))) {
      local_260 = (void *)0x0;
      *(ulonglong *)(lVar11 + 0x28) = (ulonglong)uVar4 + *(longlong *)(lVar11 + 0x28);
      *local_250 = 0;
      lVar11 = local_258;
      puVar6 = param_2;
LAB_18000dd50:
      do {
        lVar13 = *(longlong *)(param_3 + 0x24);
        lVar2 = *(longlong *)(param_3 + 0x2c);
        param_2 = *(undefined8 **)(lVar13 + 0x28);
        iVar12 = *(int *)(lVar13 + 0x24);
        if ((*(byte *)((longlong)param_2 + 0xc) & 2) == 0) {
          uVar10 = (ulonglong)(longlong)*(int *)(*(longlong *)(param_3 + 0x38) + 8) >> 1;
          do {
            bVar1 = *(byte *)(param_2 + 10);
            memcpy(local_248,(void *)((longlong)param_2 + 0x52),(ulonglong)bVar1 * 2);
            lVar11 = 0;
            local_248[bVar1] = 0;
            if (local_248[0] != 0) {
              puVar7 = local_248;
              uVar4 = local_248[0];
              do {
                if ((ushort)(uVar4 - 0x61) < 0x1a) {
                  *puVar7 = uVar4 & 0xffdf;
                }
                lVar11 = lVar11 + 1;
                uVar4 = local_248[lVar11];
                puVar7 = local_248 + lVar11;
              } while (uVar4 != 0);
              iVar12 = *(int *)(lVar13 + 0x24);
            }
            puVar7 = local_248;
            uVar9 = uVar10 & 0xffffffff;
            lVar11 = local_258;
            if ((int)uVar10 < 1) {
LAB_18000de17:
              local_268[0] = 1;
              if (((*(byte *)((longlong)param_2 + 0xc) & 1) != 0) &&
                 ((((*(int *)(param_3 + 0x40) != 1 ||
                    (*(longlong *)(*(longlong *)(param_3 + 0x38) + 8) !=
                     (longlong)*(int *)(param_3 + 0x34))) || (*(int *)(param_3 + 0x34) == 0)) &&
                  (*(int *)(lVar13 + 0x10) == 0)))) goto LAB_18000dead;
              *(undefined4 *)(lVar13 + 0x10) = 0;
              *(undefined8 **)(*(longlong *)(param_3 + 0x24) + 0x28) = param_2;
              *local_250 = param_2;
              *(undefined4 *)(local_258 + 0xc) = 0;
              goto LAB_18000dd04;
            }
            while (uVar8 = (uint)*(ushort *)((lVar2 - (longlong)local_248) + (longlong)puVar7),
                  uVar8 == *puVar7) {
              puVar7 = puVar7 + 1;
              uVar8 = (int)uVar9 - 1;
              uVar9 = (ulonglong)uVar8;
              if ((int)uVar8 < 1) goto LAB_18000de17;
            }
            if ((int)(uVar8 - *puVar7) < 0) break;
            uVar4 = *(ushort *)(param_2 + 1);
            if ((uVar4 == 0) || (iVar12 <= (int)(uint)uVar4)) {
              *(undefined4 *)(local_258 + 0xc) = 0xb;
              param_2 = puVar6;
              break;
            }
            param_2 = (undefined8 *)((longlong)param_2 + (ulonglong)uVar4);
          } while ((*(byte *)((longlong)param_2 + 0xc) & 2) == 0);
        }
        local_268[0] = 0;
        if (((*(byte *)((longlong)param_2 + 0xc) & 1) == 0) ||
           (lVar13 = *(longlong *)(param_3 + 0x24), *(int *)(lVar13 + 0x10) != 0)) {
          _Memory = *(longlong **)(param_3 + 0x24);
          if (*_Memory == 0) {
            *(undefined4 *)(lVar11 + 0xc) = 2;
            goto LAB_18000e037;
          }
          *(longlong *)(param_3 + 0x24) = *_Memory;
          free(*(void **)((longlong)_Memory + 0x1c));
          free(_Memory);
          *(undefined4 *)(*(longlong *)(param_3 + 0x24) + 0x10) = 1;
          *(undefined8 *)(*(longlong *)(param_3 + 0x24) + 8) = 0;
          puVar6 = param_2;
          goto LAB_18000dd50;
        }
LAB_18000dead:
        *(undefined8 **)(lVar13 + 0x28) = param_2;
        lVar2 = *(longlong *)(((ulonglong)*(ushort *)(param_2 + 1) - 8) + (longlong)param_2);
        bVar3 = FUN_18000f940(lVar11,*(undefined8 **)(param_3 + 0x18),*(int *)(param_3 + 0x20),
                              *(int *)(lVar11 + 0x44) * lVar2,*(uint *)(lVar11 + 0x8c),&local_260,
                              local_268);
        if (((int)CONCAT71(extraout_var,bVar3) == 0) ||
           (uVar5 = FUN_18000f400(lVar11,(longlong)local_260,*(int *)(lVar11 + 0x8c)),
           (int)uVar5 == 0)) goto LAB_18000e037;
        puVar6 = (undefined8 *)malloc(0x30);
        if (puVar6 == (undefined8 *)0x0) {
          free(local_260);
          *(undefined4 *)(lVar11 + 0xc) = 8;
          goto LAB_18000e037;
        }
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(longlong *)((longlong)puVar6 + 0x14) = lVar2;
        *(void **)((longlong)puVar6 + 0x1c) = local_260;
        *(undefined4 *)((longlong)puVar6 + 0x24) = *(undefined4 *)((longlong)local_260 + 0x1c);
        puVar6[5] = (longlong)local_260 + (ulonglong)*(uint *)((longlong)local_260 + 0x18) + 0x18;
        *puVar6 = *(undefined8 *)(param_3 + 0x24);
        if (*(longlong *)(param_3 + 0x24) != 0) {
          *(undefined8 **)(*(longlong *)(param_3 + 0x24) + 8) = puVar6;
        }
        *(undefined8 **)(param_3 + 0x24) = puVar6;
        puVar6 = param_2;
      } while( true );
    }
    *(undefined4 *)(local_258 + 0xc) = 0xb;
  }
LAB_18000e037:
  FUN_180012550(local_48 ^ (ulonglong)auStackY_2a8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000e070(longlong param_1,char *param_2,uint *param_3,undefined8 *param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  WCHAR WVar4;
  int iVar5;
  longlong *_Memory;
  char *pcVar6;
  int *piVar7;
  WCHAR *pWVar8;
  char *_Str;
  longlong lVar9;
  undefined1 auStackY_4c8 [32];
  int local_498 [2];
  longlong local_490;
  longlong *local_488;
  void *local_480;
  undefined8 *local_478;
  _SYSTEMTIME local_470;
  WCHAR local_458 [512];
  ulonglong local_58;
  
  local_58 = DAT_18001d018 ^ (ulonglong)auStackY_4c8;
  local_490 = 0;
  local_478 = param_4;
  if (*param_2 == '\\') {
    local_490 = 5;
    _Memory = (longlong *)malloc(0x50);
    if (_Memory == (longlong *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 8;
    }
    else {
      _Str = param_2 + 1;
      _Memory[1] = 0;
      _Memory[2] = 0;
      _Memory[3] = 0;
      _Memory[4] = 0;
      _Memory[5] = 0;
      _Memory[6] = 0;
      _Memory[7] = 0;
      _Memory[8] = 0;
      _Memory[9] = 0;
      *_Memory = param_1;
      pcVar6 = strchr(_Str,0x5c);
      while (pcVar6 != (char *)0x0) {
        memset(local_458,0,0x400);
        (**(code **)(*DAT_18001df70 + 0x60))(DAT_18001df70,_Str,(int)pcVar6 - (int)_Str,local_458);
        lVar9 = 0;
        if (local_458[0] != L'\0') {
          pWVar8 = local_458;
          WVar4 = local_458[0];
          do {
            if ((ushort)(WVar4 + L'ﾟ') < 0x1a) {
              *pWVar8 = WVar4 & 0xffdf;
            }
            lVar9 = lVar9 + 1;
            WVar4 = local_458[lVar9];
            pWVar8 = local_458 + lVar9;
          } while (WVar4 != L'\0');
        }
        FUN_18000ecb0(param_1,&local_490,local_458,_Memory);
        iVar5 = FUN_18000e5d0(param_1,&local_488,(longlong)_Memory);
        if (iVar5 == 0) goto LAB_18000e588;
        local_490 = *local_488;
        uVar3 = *(uint *)(local_488 + 9);
        FUN_18000db80(param_1,_Memory);
        if ((uVar3 >> 0x1c & 1) == 0) {
          free(_Memory);
          *(undefined4 *)(param_1 + 0xc) = 2;
          goto LAB_18000e5ab;
        }
        _Str = pcVar6 + 1;
        pcVar6 = strchr(_Str,0x5c);
      }
      iVar5 = lstrlenA(_Str);
      memset(local_458,0,0x400);
      (**(code **)(*DAT_18001df70 + 0x60))
                (DAT_18001df70,_Str,(int)(_Str + iVar5) - (int)_Str,local_458);
      FUN_18000ecb0(param_1,&local_490,local_458,_Memory);
      iVar5 = FUN_18000e5d0(param_1,&local_488,(longlong)_Memory);
      if (((iVar5 == 0) || (iVar5 = FUN_18000dcc0(param_1,&local_488,(longlong)_Memory), iVar5 == 0)
          ) || (iVar5 = FUN_180010470(param_1,(int)*local_488,&local_480,local_498), iVar5 == 0)) {
        FUN_18000db80(param_1,_Memory);
LAB_18000e588:
        free(_Memory);
      }
      else {
        local_498[0] = 1;
        piVar7 = FUN_180011540(param_1,(longlong)local_480,0x30,(void *)0x0,0,0);
        while (piVar7 != (int *)0x0) {
          uVar2 = *(ushort *)(piVar7 + 5);
          bVar1 = *(byte *)((longlong)piVar7 + (ulonglong)uVar2 + 0x41);
          if (((bVar1 & 1) == 0) && ((bVar1 & 3) != 0)) {
            if ((bVar1 & 2) != 0) {
              param_3[0x10c] = 0;
              param_3[0x10d] = 0;
              param_3[0x10e] = 0;
              param_3[0x10f] = 0;
              param_3[0x110] = 0;
              param_3[0x111] = 0;
              param_3[0x112] = 0;
              param_3[0x113] = 0;
              param_3[0x114] = 0;
              param_3[0x115] = 0;
              param_3[0x116] = 0;
              param_3[0x117] = 0;
              param_3[0x118] = 0;
              param_3[0x119] = 0;
              goto LAB_18000e39b;
            }
          }
          else {
            memset(param_3 + 0xc,0,0x400);
LAB_18000e39b:
            (**(code **)(*DAT_18001df70 + 0x58))
                      (DAT_18001df70,(longlong)piVar7 + (ulonglong)uVar2 + 0x42,
                       *(undefined1 *)((longlong)piVar7 + (ulonglong)uVar2 + 0x40));
          }
          iVar5 = local_498[0];
          local_498[0] = local_498[0] + 1;
          piVar7 = FUN_180011540(param_1,(longlong)local_480,0x30,(void *)0x0,0,iVar5);
        }
        free(local_480);
        uVar3 = *(uint *)(local_488 + 9);
        *param_3 = uVar3;
        if ((uVar3 >> 0x1c & 1) != 0) {
          *param_3 = uVar3 & 0xefffffff | 0x10;
        }
        FileTimeToLocalFileTime((FILETIME *)(local_488 + 3),(LPFILETIME)(param_3 + 1));
        FileTimeToSystemTime((FILETIME *)(param_3 + 1),&local_470);
        param_3[1] = (uint)CONCAT21(CONCAT11((undefined1)local_470.wHour,
                                             (undefined1)local_470.wMinute),
                                    (undefined1)local_470.wSecond);
        param_3[2] = CONCAT31(CONCAT21(local_470.wYear,(undefined1)local_470.wMonth),
                              (undefined1)local_470.wDay);
        FileTimeToLocalFileTime((FILETIME *)(local_488 + 6),(LPFILETIME)(param_3 + 3));
        FileTimeToSystemTime((FILETIME *)(param_3 + 3),&local_470);
        param_3[3] = (uint)CONCAT21(CONCAT11((undefined1)local_470.wHour,
                                             (undefined1)local_470.wMinute),
                                    (undefined1)local_470.wSecond);
        param_3[4] = CONCAT31(CONCAT21(local_470.wYear,(undefined1)local_470.wMonth),
                              (undefined1)local_470.wDay);
        FileTimeToLocalFileTime((FILETIME *)(local_488 + 4),(LPFILETIME)(param_3 + 5));
        FileTimeToSystemTime((FILETIME *)(param_3 + 5),&local_470);
        param_3[5] = (uint)CONCAT21(CONCAT11((undefined1)local_470.wHour,
                                             (undefined1)local_470.wMinute),
                                    (undefined1)local_470.wSecond);
        param_3[6] = CONCAT31(CONCAT21(local_470.wYear,(undefined1)local_470.wMonth),
                              (undefined1)local_470.wDay);
        param_3[8] = *(uint *)(local_488 + 8);
        param_3[7] = (uint)((ulonglong)local_488[8] >> 0x20);
        param_3[10] = (uint)*(byte *)((longlong)local_488 + 0x51);
        FUN_18000daf0(param_1,_Memory,(int)*local_488);
        *local_478 = _Memory;
        _DAT_18001df68 = 1;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0x57;
  }
LAB_18000e5ab:
  FUN_180012550(local_58 ^ (ulonglong)auStackY_4c8);
  return;
}




void FUN_18000e5d0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *_Memory;
  bool bVar3;
  ushort uVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStackY_2a8 [32];
  uint local_268 [2];
  void *local_260;
  longlong local_258;
  undefined8 *local_250;
  ushort local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_18001d018 ^ (ulonglong)auStackY_2a8;
  local_260 = (void *)0x0;
  *param_2 = 0;
  local_258 = param_1;
  local_250 = param_2;
LAB_18000e620:
  do {
    lVar14 = *(longlong *)(param_3 + 0x24);
    lVar2 = *(longlong *)(param_3 + 0x2c);
    puVar10 = *(undefined8 **)(lVar14 + 0x28);
    iVar12 = *(int *)(lVar14 + 0x24);
    if ((*(byte *)((longlong)puVar10 + 0xc) & 2) == 0) {
      uVar13 = (ulonglong)(longlong)*(int *)(*(longlong *)(param_3 + 0x38) + 8) >> 1;
      do {
        bVar1 = *(byte *)(puVar10 + 10);
        memcpy(local_248,(void *)((longlong)puVar10 + 0x52),(ulonglong)bVar1 * 2);
        lVar11 = 0;
        local_248[bVar1] = 0;
        if (local_248[0] != 0) {
          puVar7 = local_248;
          uVar4 = local_248[0];
          do {
            if ((ushort)(uVar4 - 0x61) < 0x1a) {
              *puVar7 = uVar4 & 0xffdf;
            }
            lVar11 = lVar11 + 1;
            uVar4 = local_248[lVar11];
            puVar7 = local_248 + lVar11;
          } while (uVar4 != 0);
          iVar12 = *(int *)(lVar14 + 0x24);
        }
        puVar7 = local_248;
        uVar9 = uVar13 & 0xffffffff;
        param_1 = local_258;
        if ((int)uVar13 < 1) {
LAB_18000e6e9:
          local_268[0] = 1;
          if (((*(byte *)((longlong)puVar10 + 0xc) & 1) != 0) &&
             ((((*(int *)(param_3 + 0x40) != 1 ||
                (*(longlong *)(*(longlong *)(param_3 + 0x38) + 8) !=
                 (longlong)*(int *)(param_3 + 0x34))) || (*(int *)(param_3 + 0x34) == 0)) &&
              (*(int *)(lVar14 + 0x10) == 0)))) goto LAB_18000e77f;
          *(undefined4 *)(lVar14 + 0x10) = 0;
          *(undefined8 **)(*(longlong *)(param_3 + 0x24) + 0x28) = puVar10;
          *local_250 = puVar10;
          *(undefined4 *)(local_258 + 0xc) = 0;
          goto LAB_18000e8f8;
        }
        while (uVar8 = (uint)*(ushort *)((lVar2 - (longlong)local_248) + (longlong)puVar7),
              uVar8 == *puVar7) {
          puVar7 = puVar7 + 1;
          uVar8 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar8;
          if ((int)uVar8 < 1) goto LAB_18000e6e9;
        }
        if ((int)(uVar8 - *puVar7) < 0) break;
        uVar4 = *(ushort *)(puVar10 + 1);
        if ((uVar4 == 0) || (iVar12 <= (int)(uint)uVar4)) {
          *(undefined4 *)(local_258 + 0xc) = 0xb;
          puVar10 = param_2;
          break;
        }
        puVar10 = (undefined8 *)((longlong)puVar10 + (ulonglong)uVar4);
      } while ((*(byte *)((longlong)puVar10 + 0xc) & 2) == 0);
    }
    local_268[0] = 0;
    if (((*(byte *)((longlong)puVar10 + 0xc) & 1) == 0) ||
       (lVar14 = *(longlong *)(param_3 + 0x24), *(int *)(lVar14 + 0x10) != 0)) {
      _Memory = *(longlong **)(param_3 + 0x24);
      if (*_Memory == 0) {
        *(undefined4 *)(param_1 + 0xc) = 2;
LAB_18000e8f8:
        FUN_180012550(local_48 ^ (ulonglong)auStackY_2a8);
        return;
      }
      *(longlong *)(param_3 + 0x24) = *_Memory;
      free(*(void **)((longlong)_Memory + 0x1c));
      free(_Memory);
      *(undefined4 *)(*(longlong *)(param_3 + 0x24) + 0x10) = 1;
      *(undefined8 *)(*(longlong *)(param_3 + 0x24) + 8) = 0;
      param_2 = puVar10;
      goto LAB_18000e620;
    }
LAB_18000e77f:
    *(undefined8 **)(lVar14 + 0x28) = puVar10;
    lVar2 = *(longlong *)(((ulonglong)*(ushort *)(puVar10 + 1) - 8) + (longlong)puVar10);
    bVar3 = FUN_18000f940(param_1,*(undefined8 **)(param_3 + 0x18),*(int *)(param_3 + 0x20),
                          *(int *)(param_1 + 0x44) * lVar2,*(uint *)(param_1 + 0x8c),&local_260,
                          local_268);
    if (((int)CONCAT71(extraout_var,bVar3) == 0) ||
       (uVar5 = FUN_18000f400(param_1,(longlong)local_260,*(int *)(param_1 + 0x8c)), (int)uVar5 == 0
       )) goto LAB_18000e8f8;
    puVar6 = (undefined8 *)malloc(0x30);
    if (puVar6 == (undefined8 *)0x0) {
      free(local_260);
      *(undefined4 *)(param_1 + 0xc) = 8;
      goto LAB_18000e8f8;
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(longlong *)((longlong)puVar6 + 0x14) = lVar2;
    *(void **)((longlong)puVar6 + 0x1c) = local_260;
    *(undefined4 *)((longlong)puVar6 + 0x24) = *(undefined4 *)((longlong)local_260 + 0x1c);
    puVar6[5] = (longlong)local_260 + (ulonglong)*(uint *)((longlong)local_260 + 0x18) + 0x18;
    *puVar6 = *(undefined8 *)(param_3 + 0x24);
    if (*(longlong *)(param_3 + 0x24) != 0) {
      *(undefined8 **)(*(longlong *)(param_3 + 0x24) + 8) = puVar6;
    }
    *(undefined8 **)(param_3 + 0x24) = puVar6;
    param_2 = puVar10;
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000e930(longlong param_1,longlong param_2,uint *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStackY_98 [32];
  int local_68 [2];
  int *local_60;
  void *local_58;
  _SYSTEMTIME local_50;
  ulonglong local_40;
  
  local_40 = DAT_18001d018 ^ (ulonglong)auStackY_98;
  do {
    lVar4 = *(longlong *)(param_2 + 0x24);
    uVar2 = *(ushort *)(*(longlong *)(lVar4 + 0x28) + 8);
    if ((uVar2 == 0) || (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2)) {
      *(undefined4 *)(param_1 + 0xc) = 0xb;
      goto LAB_18000ec8e;
    }
    *(ulonglong *)(lVar4 + 0x28) = (ulonglong)uVar2 + *(longlong *)(lVar4 + 0x28);
    iVar7 = FUN_18000e5d0(param_1,&local_60,param_2);
    if (iVar7 == 0) goto LAB_18000ec8e;
    if (((*(byte *)(local_60 + 3) & 2) != 0) || ((*(byte *)((longlong)local_60 + 0x51) & 3) == 0))
    break;
    local_68[0] = 0;
    if (*(int *)(param_2 + 0x4c) < 1) break;
    local_68[0] = 0;
    bVar6 = true;
    do {
      bVar5 = false;
      if (*local_60 != *(int *)(*(longlong *)(param_2 + 0x44) + (longlong)local_68[0] * 4)) {
        bVar5 = bVar6;
      }
      local_68[0] = local_68[0] + 1;
      bVar6 = bVar5;
    } while (local_68[0] < *(int *)(param_2 + 0x4c));
  } while (!bVar5);
  iVar7 = FUN_18000dcc0(param_1,&local_60,param_2);
  if (iVar7 != 0) {
    if ((*(byte *)(local_60 + 3) & 2) == 0) {
      FUN_18000daf0(param_1,param_2,*local_60);
    }
    iVar7 = FUN_180010470(param_1,*local_60,&local_58,local_68);
    if (iVar7 != 0) {
      local_68[0] = 1;
      piVar8 = FUN_180011540(param_1,(longlong)local_58,0x30,(void *)0x0,0,0);
      while (piVar8 != (int *)0x0) {
        uVar2 = *(ushort *)(piVar8 + 5);
        bVar1 = *(byte *)((longlong)piVar8 + (ulonglong)uVar2 + 0x41);
        if (((bVar1 & 1) == 0) && ((bVar1 & 3) != 0)) {
          if ((bVar1 & 2) != 0) {
            param_3[0x10c] = 0;
            param_3[0x10d] = 0;
            param_3[0x10e] = 0;
            param_3[0x10f] = 0;
            param_3[0x110] = 0;
            param_3[0x111] = 0;
            param_3[0x112] = 0;
            param_3[0x113] = 0;
            param_3[0x114] = 0;
            param_3[0x115] = 0;
            param_3[0x116] = 0;
            param_3[0x117] = 0;
            param_3[0x118] = 0;
            param_3[0x119] = 0;
            goto LAB_18000eae2;
          }
        }
        else {
          memset(param_3 + 0xc,0,0x400);
LAB_18000eae2:
          (**(code **)(*DAT_18001df70 + 0x58))
                    (DAT_18001df70,(longlong)piVar8 + (ulonglong)uVar2 + 0x42,
                     *(undefined1 *)((longlong)piVar8 + (ulonglong)uVar2 + 0x40));
        }
        iVar7 = local_68[0];
        local_68[0] = local_68[0] + 1;
        piVar8 = FUN_180011540(param_1,(longlong)local_58,0x30,(void *)0x0,0,iVar7);
      }
      free(local_58);
      uVar3 = local_60[0x12];
      *param_3 = uVar3;
      if ((uVar3 >> 0x1c & 1) != 0) {
        *param_3 = uVar3 & 0xefffffff | 0x10;
      }
      FileTimeToLocalFileTime((FILETIME *)(local_60 + 6),(LPFILETIME)(param_3 + 1));
      FileTimeToSystemTime((FILETIME *)(param_3 + 1),&local_50);
      param_3[1] = (uint)CONCAT21(CONCAT11((undefined1)local_50.wHour,(undefined1)local_50.wMinute),
                                  (undefined1)local_50.wSecond);
      param_3[2] = CONCAT31(CONCAT21(local_50.wYear,(undefined1)local_50.wMonth),
                            (undefined1)local_50.wDay);
      FileTimeToLocalFileTime((FILETIME *)(local_60 + 0xc),(LPFILETIME)(param_3 + 3));
      FileTimeToSystemTime((FILETIME *)(param_3 + 3),&local_50);
      param_3[3] = (uint)CONCAT21(CONCAT11((undefined1)local_50.wHour,(undefined1)local_50.wMinute),
                                  (undefined1)local_50.wSecond);
      param_3[4] = CONCAT31(CONCAT21(local_50.wYear,(undefined1)local_50.wMonth),
                            (undefined1)local_50.wDay);
      FileTimeToLocalFileTime((FILETIME *)(local_60 + 8),(LPFILETIME)(param_3 + 5));
      FileTimeToSystemTime((FILETIME *)(param_3 + 5),&local_50);
      param_3[5] = (uint)CONCAT21(CONCAT11((undefined1)local_50.wHour,(undefined1)local_50.wMinute),
                                  (undefined1)local_50.wSecond);
      param_3[6] = CONCAT31(CONCAT21(local_50.wYear,(undefined1)local_50.wMonth),
                            (undefined1)local_50.wDay);
      param_3[8] = local_60[0x10];
      param_3[7] = (uint)((ulonglong)*(undefined8 *)(local_60 + 0x10) >> 0x20);
      param_3[10] = (uint)*(byte *)((longlong)local_60 + 0x51);
      _DAT_18001df68 = _DAT_18001df68 + 1;
    }
  }
LAB_18000ec8e:
  FUN_180012550(local_40 ^ (ulonglong)auStackY_98);
  return;
}




void FUN_18000ecb0(longlong param_1,longlong *param_2,LPCWSTR param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  LPWSTR lpString1;
  undefined8 uVar3;
  undefined8 *_Memory;
  undefined1 auStackY_c8 [32];
  void *local_88;
  void *local_80;
  int local_78;
  uint local_74;
  void *local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_18001d018 ^ (ulonglong)auStackY_c8;
  lVar1 = *param_2;
  local_60 = 0x490024;
  local_5c = 0x300033;
  iVar2 = lstrlenW(param_3);
  lpString1 = (LPWSTR)malloc((longlong)(iVar2 + 1) * 2);
  if (lpString1 == (LPWSTR)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 8;
    goto LAB_18000ef52;
  }
  lstrcpyW(lpString1,param_3);
  if ((int6)lVar1 == 5) {
    local_88 = malloc((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x300) + 0x1c));
    if (local_88 == (void *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 8;
      free(lpString1);
      goto LAB_18000ef52;
    }
    memcpy(local_88,*(void **)(param_1 + 0x300),
           (ulonglong)*(uint *)((longlong)*(void **)(param_1 + 0x300) + 0x1c));
    local_80 = malloc((longlong)*(int *)(param_1 + 0x40));
    if (local_80 != (void *)0x0) {
      memcpy(local_80,*(void **)(param_1 + 0x38),(longlong)*(int *)(param_1 + 0x40));
      local_78 = *(int *)(param_1 + 0x40);
      goto LAB_18000ee02;
    }
    *(undefined4 *)(param_1 + 0xc) = 8;
LAB_18000ed73:
    free(local_88);
  }
  else {
    iVar2 = FUN_180010470(param_1,(int)(int6)lVar1,&local_88,local_68);
    if (iVar2 != 0) {
      iVar2 = FUN_18000fad0(param_1,(longlong)local_88,&local_80,&local_78);
      if (iVar2 != 0) {
LAB_18000ee02:
        uVar3 = FUN_18000ef80(param_1,param_3,&local_70,&local_74);
        if ((int)uVar3 != 0) {
          _Memory = (undefined8 *)malloc(0x30);
          if (_Memory != (undefined8 *)0x0) {
            *_Memory = 0;
            _Memory[1] = 0;
            _Memory[2] = 0;
            _Memory[3] = 0;
            _Memory[4] = 0;
            _Memory[5] = 0;
            uVar3 = FUN_18000f470(param_1,(longlong)local_88,0xa0,&local_60,4,param_4 + 3,
                                  (int *)(param_4 + 4));
            if ((int)uVar3 == 0) {
              uVar3 = FUN_18000f470(param_1,(longlong)local_88,0x90,&local_60,4,param_4 + 3,
                                    (int *)(param_4 + 4));
              if ((int)uVar3 == 0) {
                *(undefined4 *)(param_1 + 0xc) = 8;
                free(_Memory);
                free(local_70);
                free(local_80);
                goto LAB_18000ed73;
              }
            }
            _Memory[5] = local_80;
            *(void **)((longlong)_Memory + 0x1c) = local_80;
            *(int *)((longlong)_Memory + 0x24) = local_78;
            *_Memory = *(undefined8 *)((longlong)param_4 + 0x24);
            if (*(longlong *)((longlong)param_4 + 0x24) != 0) {
              *(undefined8 **)(*(longlong *)((longlong)param_4 + 0x24) + 8) = _Memory;
            }
            param_4[2] = (longlong)local_88;
            *(undefined8 **)((longlong)param_4 + 0x24) = _Memory;
            *(LPWSTR *)((longlong)param_4 + 0x2c) = lpString1;
            iVar2 = lstrlenW(lpString1);
            *(int *)((longlong)param_4 + 0x34) = iVar2;
            param_4[7] = (longlong)local_70;
            *(uint *)(param_4 + 8) = local_74;
            param_4[1] = *param_2;
            *param_4 = param_1;
            goto LAB_18000ef52;
          }
          *(undefined4 *)(param_1 + 0xc) = 8;
          free(local_70);
        }
        free(local_80);
      }
      goto LAB_18000ed73;
    }
  }
  free(lpString1);
LAB_18000ef52:
  FUN_180012550(local_58 ^ (ulonglong)auStackY_c8);
  return;
}




undefined8 FUN_18000ef80(longlong param_1,LPCWSTR param_2,undefined8 *param_3,uint *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  
  uVar13 = 0;
  uVar12 = 0;
  iVar10 = 1;
  iVar1 = lstrlenW(param_2);
  lVar9 = (longlong)iVar1;
  uVar5 = uVar13;
  uVar8 = uVar13;
  uVar15 = uVar13;
  if (0 < iVar1) {
    do {
      uVar8 = uVar15;
      if (param_2[uVar5] == L'*') break;
      uVar8 = uVar13;
      if ((param_2[uVar5] == L'?') && (uVar8 = uVar15, (int)uVar15 == 0)) {
        uVar8 = 1;
        iVar10 = iVar10 + 1;
      }
      uVar5 = uVar5 + 1;
      uVar15 = uVar8;
    } while ((longlong)uVar5 < lVar9);
  }
  puVar2 = (undefined8 *)malloc((longlong)iVar10 << 4);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 8;
    uVar4 = 0;
  }
  else {
    *puVar2 = 0;
    uVar16 = 1;
    uVar14 = 0;
    if (0 < lVar9) {
      plVar6 = puVar2 + 2;
      uVar5 = uVar13;
      uVar15 = uVar13;
      do {
        uVar14 = (uint)uVar5;
        if (param_2[uVar15] == L'*') {
          puVar2[(longlong)(int)uVar16 * 2 + -1] =
               (longlong)(int)uVar14 - puVar2[(longlong)(int)uVar16 * 2 + -2];
          break;
        }
        iVar10 = (int)uVar8;
        if (param_2[uVar15] == L'?') {
          if (iVar10 == 0) {
            *plVar6 = (longlong)(int)uVar14;
            plVar6[-1] = (longlong)(int)uVar14 - plVar6[-2];
            uVar8 = 1;
          }
        }
        else {
          uVar8 = uVar13;
          if (iVar10 != 0) {
            uVar16 = uVar16 + 1;
            *plVar6 = (longlong)(int)uVar14;
            plVar6 = plVar6 + 2;
          }
        }
        uVar14 = uVar14 + 1;
        uVar5 = (ulonglong)uVar14;
        uVar15 = uVar15 + 1;
      } while ((longlong)uVar15 < lVar9);
    }
    lVar9 = (longlong)(int)uVar16;
    puVar2[lVar9 * 2 + -1] = (longlong)(int)uVar14 - puVar2[lVar9 * 2 + -2];
    if ((0 < (int)uVar16) && (3 < uVar16)) {
      uVar14 = uVar16 & 0x80000003;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
      }
      iVar10 = 2;
      plVar6 = puVar2 + 1;
      do {
        iVar11 = (int)uVar13;
        iVar1 = iVar10 + 1;
        uVar12 = iVar11 + 4;
        uVar13 = (ulonglong)uVar12;
        lVar3 = puVar2[(longlong)(iVar10 + -1) * 2];
        plVar6[-1] = puVar2[(longlong)iVar11 * 2] * 2;
        plVar6[1] = lVar3 * 2;
        lVar3 = puVar2[(longlong)(iVar10 + -1) * 2 + 1];
        lVar7 = (longlong)iVar10;
        *plVar6 = puVar2[(longlong)iVar11 * 2 + 1] * 2;
        iVar10 = iVar10 + 4;
        plVar6[2] = lVar3 * 2;
        lVar3 = puVar2[(longlong)iVar1 * 2];
        plVar6[3] = puVar2[lVar7 * 2] * 2;
        plVar6[5] = lVar3 * 2;
        lVar3 = puVar2[(longlong)iVar1 * 2 + 1];
        plVar6[4] = puVar2[lVar7 * 2 + 1] * 2;
        plVar6[6] = lVar3 * 2;
        plVar6 = plVar6 + 8;
      } while ((int)uVar12 < (int)(uVar16 - uVar14));
    }
    lVar3 = (longlong)(int)uVar12;
    if (lVar3 < lVar9) {
      lVar9 = lVar9 - lVar3;
      plVar6 = puVar2 + lVar3 * 2;
      do {
        *plVar6 = *plVar6 * 2;
        plVar6[1] = plVar6[1] * 2;
        lVar9 = lVar9 + -1;
        plVar6 = plVar6 + 2;
      } while (lVar9 != 0);
    }
    *param_3 = puVar2;
    uVar4 = 1;
    *param_4 = uVar16;
  }
  return uVar4;
}




undefined8 * FUN_18000f210(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  *param_1 = IFSInterface::vftable;
  *param_1 = CNTFSInterface::vftable;
  puVar2 = (undefined8 *)operator_new(0x3b0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = FUN_18000f350(puVar2);
  }
  param_1[1] = puVar2;
  uVar1 = FUN_1800100f0((longlong)puVar2,param_2);
  *(undefined4 *)(param_1 + 2) = uVar1;
  return param_1;
}




undefined8 * FUN_18000f280(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = CNTFSInterface::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  *param_1 = IFSInterface::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000f2f0(longlong param_1,void *param_2)

{
  FUN_18000dc90(*(undefined8 *)(param_1 + 8),param_2);
  return;
}




undefined8 FUN_18000f300(longlong param_1,char *param_2,uint *param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FUN_18000e070(*(longlong *)(param_1 + 8),param_2,param_3,local_res8);
  return local_res8[0];
}




void FUN_18000f330(longlong param_1,longlong param_2,uint *param_3)

{
  FUN_18000e930(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_18000f340(longlong param_1)

{
  FUN_180005f50(*(longlong *)(param_1 + 8));
  return;
}




undefined8 * FUN_18000f350(undefined8 *param_1)

{
  *param_1 = CNTFS::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[7] = 0;
  param_1[0x75] = 0;
  memset(param_1 + 0x49,0,0x160);
  return param_1;
}




undefined8 * FUN_18000f3a0(undefined8 *param_1,uint param_2)

{
  *param_1 = CNTFS::vftable;
  if (*(int *)(param_1 + 1) != 0) {
    FUN_180011620((longlong)param_1);
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_18000f400(undefined8 param_1,longlong param_2,int param_3)

{
  short *psVar1;
  short *psVar2;
  ushort uVar3;
  short *psVar4;
  longlong lVar5;
  
  uVar3 = *(ushort *)(param_2 + 6);
  if (((uint)uVar3 == ((int)(param_3 + (param_3 >> 0x1f & 0x1ffU)) >> 9) + 1U) &&
     ((int)(uint)*(ushort *)(param_2 + 4) < param_3)) {
    psVar1 = (short *)(param_2 + (ulonglong)*(ushort *)(param_2 + 4));
    psVar4 = (short *)(param_2 + 0x1fe);
    if (1 < uVar3) {
      lVar5 = 1;
      do {
        if (*psVar4 != *psVar1) {
          return 0;
        }
        psVar2 = psVar1 + lVar5;
        lVar5 = lVar5 + 1;
        *psVar4 = *psVar2;
        psVar4 = psVar4 + 0x100;
      } while (lVar5 < (longlong)(ulonglong)(uint)uVar3);
    }
    return 1;
  }
  return 0;
}




undefined8
FUN_18000f470(longlong param_1,longlong param_2,int param_3,void *param_4,uint param_5,
             undefined8 *param_6,int *param_7)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  uVar1 = *(ushort *)(param_2 + 0x14);
  uVar2 = *(uint *)(param_2 + 0x18);
  iVar10 = 0;
LAB_18000f4b0:
  uVar9 = (uint)uVar1;
  iVar11 = uVar9 - uVar2;
  iVar7 = iVar10;
  do {
    if (SBORROW4(uVar9,uVar2) == iVar11 < 0) goto LAB_18000f565;
    piVar6 = (int *)((int)uVar9 + param_2);
    uVar3 = *(uint *)((longlong)(int)uVar9 + 4 + param_2);
    if ((uVar3 == 0) || (uVar2 <= uVar3)) goto LAB_18000f565;
    iVar11 = *piVar6;
    if (param_3 == iVar11) {
      if (param_4 == (void *)0x0) {
        bVar12 = *(byte *)((longlong)piVar6 + 9) == 0;
      }
      else {
        if (*(byte *)((longlong)piVar6 + 9) != param_5) goto LAB_18000f526;
        iVar4 = memcmp((void *)((ulonglong)*(ushort *)((longlong)piVar6 + 10) + (longlong)piVar6),
                       param_4,(longlong)(int)(param_5 * 2));
        bVar12 = iVar4 == 0;
      }
      if ((bVar12) && (bVar12 = iVar7 == 0, iVar7 = iVar7 + -1, bVar12)) break;
    }
LAB_18000f526:
    if (iVar11 == -1) goto LAB_18000f565;
    uVar9 = uVar9 + uVar3;
    iVar11 = uVar9 - uVar2;
  } while( true );
  if ((piVar6 == (int *)0x0) || (iVar10 = iVar10 + 1, (char)piVar6[2] == '\0')) {
LAB_18000f565:
    if (iVar10 != 0) {
      puVar5 = (undefined8 *)malloc((longlong)iVar10 << 3);
      if (puVar5 != (undefined8 *)0x0) {
        if (0 < iVar10) {
          iVar11 = 0;
          puVar8 = puVar5;
          do {
            piVar6 = FUN_180011540(param_1,param_2,param_3,param_4,param_5,iVar11);
            iVar11 = iVar11 + 1;
            *puVar8 = piVar6;
            puVar8 = puVar8 + 1;
          } while (iVar11 < iVar10);
        }
        *param_6 = puVar5;
        *param_7 = iVar10;
        return 1;
      }
      *(undefined4 *)(param_1 + 0xc) = 8;
    }
    return 0;
  }
  goto LAB_18000f4b0;
}




void FUN_18000f630(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_2 + 0x10);
  if (0 < (int)*(uint *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0x14);
    piVar1 = (int *)(*(longlong *)(param_2 + 0x18) + 8);
    do {
      iVar2 = iVar2 + *piVar1;
      piVar1 = piVar1 + 4;
      *(int *)(param_2 + 0x14) = iVar2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8
FUN_18000f660(longlong param_1,void *param_2,ulonglong param_3,uint param_4,undefined8 *param_5,
             int *param_6)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong *puVar14;
  ulonglong _Size;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint local_res10;
  uint local_58 [2];
  void *local_50;
  void *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong *local_30;
  
  uVar16 = 0;
  iVar15 = 0;
  _Size = (ulonglong)param_4;
  *param_5 = 0;
  uVar6 = (uint)param_3;
  if (*(char *)((longlong)param_2 + 8) == '\0') {
    if (uVar6 < *(uint *)((longlong)param_2 + 0x10)) {
      uVar6 = *(uint *)((longlong)param_2 + 0x10) - uVar6;
      if (uVar6 < param_4) {
        _Size = (ulonglong)uVar6;
      }
      iVar15 = (int)_Size;
      pvVar7 = malloc(_Size);
      memcpy(pvVar7,(void *)((longlong)param_2 + param_3 + *(ushort *)((longlong)param_2 + 0x14)),
             _Size);
LAB_18000f90d:
      *param_6 = iVar15;
      *param_5 = pvVar7;
      return 1;
    }
  }
  else {
    uVar9 = (*(longlong *)((longlong)param_2 + 0x18) + 1) * (longlong)*(int *)(param_1 + 0x34);
    if (param_3 < uVar9) {
      if (uVar9 < _Size + param_3) {
        _Size = (ulonglong)
                (((int)*(longlong *)((longlong)param_2 + 0x18) + 1) * *(int *)(param_1 + 0x34) -
                uVar6);
      }
      pvVar7 = malloc(_Size);
      if (pvVar7 == (void *)0x0) {
LAB_18000f8b0:
        *(undefined4 *)(param_1 + 0xc) = 8;
        return 0;
      }
      local_50 = pvVar7;
      uVar8 = FUN_18000fdc0(param_1,(byte *)((ulonglong)*(ushort *)((longlong)param_2 + 0x20) +
                                            (longlong)param_2),&local_48,local_58);
      if ((int)uVar8 != 0) {
        uVar1 = *(ushort *)(param_1 + 0x53);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_3;
        local_40 = SUB168(auVar3 % ZEXT216(uVar1),0);
        iVar13 = 0;
        uVar12 = param_3 / uVar1 -
                 (ulonglong)*(byte *)(param_1 + 0x55) * *(longlong *)((longlong)param_2 + 0x10);
        uVar9 = (ulonglong)(SUB164(auVar3 % ZEXT216(uVar1),0) + -1 + (uint)uVar1 + (int)_Size) /
                (ulonglong)(uint)uVar1;
        local_res10 = (uint)uVar9;
        if (0 < (int)local_58[0]) {
          local_38 = -8 - (longlong)local_48;
          puVar14 = (ulonglong *)((longlong)local_48 + 8);
          local_30 = puVar14;
          do {
            iVar15 = (int)uVar16;
            uVar6 = (uint)_Size;
            pvVar7 = local_50;
            if (uVar6 == 0) break;
            uVar2 = *(ulonglong *)(local_38 + (longlong)puVar14 + (longlong)local_30);
            if (uVar12 < *puVar14) {
              iVar17 = (int)uVar9;
              if (uVar2 < uVar9 + uVar12) {
                iVar17 = (int)*puVar14 - (int)uVar12;
              }
              pvVar7 = malloc((ulonglong)((uint)*(ushort *)(param_1 + 0x53) * iVar17));
              if (pvVar7 == (void *)0x0) {
                free(local_50);
                free(local_48);
                goto LAB_18000f8b0;
              }
              plVar10 = (longlong *)(*(longlong *)(param_1 + 0x10) + 8);
              iVar4 = (**(code **)(*plVar10 + 8))(plVar10,pvVar7,puVar14[-1] + uVar12,iVar17);
              uVar11 = (uint)*(ushort *)(param_1 + 0x53) * iVar4;
              if (iVar4 < 1) {
                if (uVar11 <= uVar6) {
                  _Size = (ulonglong)uVar11;
                }
                memcpy((void *)(uVar16 + (longlong)local_50),(void *)(local_40 + (longlong)pvVar7),
                       _Size);
                *param_6 = (int)_Size + iVar15;
                *param_5 = local_50;
                free(local_48);
                free(pvVar7);
                return 0;
              }
              uVar5 = uVar6;
              if (uVar11 <= uVar6) {
                uVar5 = uVar11;
              }
              memcpy((void *)(uVar16 + (longlong)local_50),(void *)(local_40 + (longlong)pvVar7),
                     (ulonglong)uVar5);
              local_res10 = local_res10 - iVar17;
              local_40 = 0;
              uVar16 = (ulonglong)(iVar15 + uVar5);
              _Size = (ulonglong)(uVar6 - uVar5);
              free(pvVar7);
              uVar9 = (ulonglong)local_res10;
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 - uVar2;
            }
            iVar15 = (int)uVar16;
            iVar13 = iVar13 + 1;
            puVar14 = puVar14 + 2;
            pvVar7 = local_50;
          } while (iVar13 < (int)local_58[0]);
        }
        free(local_48);
        goto LAB_18000f90d;
      }
      free(param_2);
    }
  }
  return 0;
}




bool FUN_18000f940(longlong param_1,undefined8 *param_2,int param_3,ulonglong param_4,uint param_5,
                  undefined8 *param_6,uint *param_7)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  uint local_res20;
  void *local_50;
  ulonglong local_48;
  ulonglong uVar6;
  
  uVar4 = param_5;
  uVar6 = 0;
  uVar1 = param_4 / (ulonglong)(longlong)*(int *)(param_1 + 0x34);
  uVar8 = 0;
  local_res20 = 0;
  *param_6 = 0;
  *param_7 = 0;
  local_48 = uVar1;
  pvVar2 = malloc((ulonglong)param_5);
  if (pvVar2 == (void *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 8;
    bVar9 = false;
  }
  else {
    uVar7 = uVar6;
    if (0 < param_3) {
      do {
        uVar8 = (uint)uVar7;
        if (uVar4 == 0) break;
        if (uVar1 <= *(ulonglong *)((longlong)*param_2 + 0x18)) {
          uVar3 = FUN_18000f660(param_1,(void *)*param_2,param_4,uVar4,&local_50,(int *)&param_5);
          uVar8 = param_5;
          uVar1 = (ulonglong)param_5;
          memcpy((void *)(uVar7 + (longlong)pvVar2),local_50,uVar1);
          free(local_50);
          local_res20 = local_res20 + uVar8;
          uVar7 = (ulonglong)local_res20;
          if ((int)uVar3 == 0) {
            *param_7 = local_res20;
            *param_6 = pvVar2;
            return false;
          }
          uVar4 = uVar4 - uVar8;
          param_4 = param_4 + uVar1;
          uVar1 = local_48;
        }
        uVar8 = (uint)uVar7;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        param_2 = param_2 + 1;
      } while ((int)uVar5 < param_3);
    }
    bVar9 = uVar8 != 0;
    *param_7 = uVar8;
    *param_6 = pvVar2;
  }
  return bVar9;
}




void FUN_18000fad0(longlong param_1,longlong param_2,undefined8 *param_3,int *param_4)

{
  ushort uVar1;
  uint uVar2;
  void *_Dst;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_18001d018 ^ (ulonglong)auStack_58;
  local_38 = 0x490024;
  uStack_34 = 0x300033;
  if ((*(byte *)(param_2 + 0x16) & 2) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0xb;
  }
  else {
    iVar5 = 0;
    for (uVar4 = (uint)*(ushort *)(param_2 + 0x14); (int)uVar4 < (int)*(uint *)(param_2 + 0x18);
        uVar4 = uVar4 + uVar2) {
      piVar3 = (int *)((int)uVar4 + param_2);
      uVar2 = piVar3[1];
      if ((uVar2 == 0) || (*(uint *)(param_2 + 0x18) <= uVar2)) break;
      if (*piVar3 == 0x90) {
        if (((*(char *)((longlong)piVar3 + 9) == '\x04') &&
            (*(longlong *)((ulonglong)*(ushort *)((longlong)piVar3 + 10) + (longlong)piVar3) ==
             0x30003300490024)) && (bVar6 = iVar5 == 0, iVar5 = iVar5 + -1, bVar6)) {
          if ((piVar3 != (int *)0x0) && ((char)piVar3[2] == '\0')) {
            uVar1 = *(ushort *)(piVar3 + 5);
            _Dst = malloc((ulonglong)*(uint *)((longlong)piVar3 + (ulonglong)uVar1 + 0x14) - 0x10);
            if (_Dst == (void *)0x0) {
              *(undefined4 *)(param_1 + 0xc) = 0;
            }
            else {
              memcpy(_Dst,(void *)((longlong)piVar3 + (ulonglong)uVar1 + 0x20),
                     (ulonglong)*(uint *)((longlong)piVar3 + (ulonglong)uVar1 + 0x14) - 0x10);
              *param_3 = _Dst;
              *param_4 = *(int *)((longlong)piVar3 + (ulonglong)uVar1 + 0x14) + -0x10;
            }
            goto LAB_18000fbb3;
          }
          break;
        }
      }
      else if (*piVar3 == -1) break;
    }
    *(undefined4 *)(param_1 + 0xc) = 0x570;
  }
LAB_18000fbb3:
  FUN_180012550(local_30 ^ (ulonglong)auStack_58);
  return;
}




undefined8 FUN_18000fc10(longlong param_1,int param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  void *pvVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  
  uVar5 = (ulonglong)(uint)(*(int *)(param_1 + 0x2c) * param_2);
  uVar7 = (ulonglong)(int)(*(uint *)(param_1 + 0x88) / (uint)*(ushort *)(param_1 + 0x53));
  if ((*(longlong *)(param_1 + 0x250) != 0) &&
     ((((ulonglong)*(byte *)(param_1 + 0x55) - 1) + uVar5) / (ulonglong)*(byte *)(param_1 + 0x55) <=
      (ulonglong)(longlong)*(int *)(param_1 + 0x25c))) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 600)) {
      lVar8 = *(longlong *)(param_1 + 0x260);
      lVar9 = 0;
      puVar3 = (ulonglong *)(lVar8 + 8);
      do {
        if (uVar5 < *puVar3) {
          lVar11 = (longlong)iVar1;
          lVar4 = lVar11 * 0x10;
          iVar1 = 1;
          uVar10 = uVar5;
          if (*(longlong *)(lVar4 + 8 + lVar8) - uVar5 < uVar7) {
            do {
              lVar11 = lVar11 + 1;
              uVar6 = (int)uVar7 + ((int)uVar10 - *(int *)(lVar4 + 8 + lVar8));
              uVar7 = (ulonglong)uVar6;
              lVar4 = lVar11 * 0x10;
              iVar1 = iVar1 + 1;
              uVar10 = 0;
            } while (*(ulonglong *)(lVar4 + 8 + lVar8) < (ulonglong)(longlong)(int)uVar6);
          }
          lVar8 = (longlong)iVar1;
          pvVar2 = malloc(lVar8 << 4);
          *param_3 = (longlong)pvVar2;
          uVar7 = (ulonglong)*(uint *)(param_1 + 0x88) / (ulonglong)*(ushort *)(param_1 + 0x53);
          if (0 < iVar1) {
            lVar4 = 0;
            lVar9 = lVar9 << 4;
            do {
              *(ulonglong *)(lVar4 + (longlong)pvVar2) =
                   *(longlong *)(lVar9 + *(longlong *)(param_1 + 0x260)) + uVar5;
              *(ulonglong *)(lVar4 + 8 + *param_3) =
                   *(longlong *)(lVar9 + 8 + *(longlong *)(param_1 + 0x260)) - uVar5;
              iVar12 = (int)uVar7;
              if ((ulonglong)(longlong)iVar12 < *(ulonglong *)(lVar4 + 8 + *param_3)) {
                *(longlong *)(lVar4 + 8 + *param_3) = (longlong)iVar12;
              }
              pvVar2 = (void *)*param_3;
              uVar5 = 0;
              lVar9 = lVar9 + 0x10;
              uVar7 = (ulonglong)(uint)(iVar12 - *(int *)(lVar4 + 8 + (longlong)pvVar2));
              lVar4 = lVar4 + 0x10;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          *param_4 = iVar1;
          return 1;
        }
        uVar5 = uVar5 - *puVar3;
        iVar1 = iVar1 + 1;
        lVar9 = lVar9 + 1;
        puVar3 = puVar3 + 2;
      } while (iVar1 < *(int *)(param_1 + 600));
    }
  }
  return 0;
}




undefined8 FUN_18000fdc0(longlong param_1,byte *param_2,undefined8 *param_3,uint *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte *pbVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  uint uVar15;
  ulonglong uVar14;
  ulonglong uVar16;
  
  uVar10 = 0;
  uVar15 = 0;
  bVar1 = *param_2;
  uVar14 = uVar10;
  uVar16 = uVar10;
  while (bVar1 != 0) {
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
    uVar13 = ((int)(char)bVar1 & 0xfU) + 1 + ((int)(char)bVar1 >> 4) + (int)uVar14;
    uVar14 = (ulonglong)uVar13;
    bVar1 = param_2[(int)uVar13];
  }
  lVar9 = (longlong)(int)uVar15;
  plVar4 = (longlong *)malloc(lVar9 << 4);
  if (plVar4 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 8;
    uVar5 = 0;
  }
  else {
    if (0 < (int)uVar15) {
      plVar11 = plVar4 + -2;
      do {
        uVar3 = (int)(char)*param_2 & 0xf;
        pbVar8 = param_2 + uVar3;
        iVar12 = (int)(char)*param_2 >> 4;
        lVar6 = (longlong)(char)*pbVar8;
        uVar13 = uVar3;
        while( true ) {
          uVar13 = uVar13 - 1;
          pbVar8 = pbVar8 + -1;
          if ((int)uVar13 < 1) break;
          lVar6 = lVar6 * 0x100 + (ulonglong)*pbVar8;
        }
        plVar11[3] = lVar6;
        pbVar8 = pbVar8 + (int)(uVar3 + iVar12);
        lVar6 = (longlong)(char)*pbVar8;
        iVar2 = iVar12;
        while( true ) {
          iVar2 = iVar2 + -1;
          pbVar8 = pbVar8 + -1;
          if (iVar2 < 1) break;
          lVar6 = lVar6 * 0x100 + (ulonglong)*pbVar8;
        }
        if (uVar10 != 0) {
          lVar6 = lVar6 + *plVar11;
        }
        plVar11[2] = lVar6;
        uVar10 = uVar10 + 1;
        param_2 = pbVar8 + (iVar12 + 1);
        plVar11 = plVar11 + 2;
        plVar7 = plVar4;
      } while ((longlong)uVar10 < lVar9);
      do {
        plVar7[1] = plVar7[1] * (ulonglong)*(byte *)(param_1 + 0x55);
        *plVar7 = *plVar7 * (ulonglong)*(byte *)(param_1 + 0x55);
        lVar9 = lVar9 + -1;
        plVar7 = plVar7 + 2;
      } while (lVar9 != 0);
    }
    *param_3 = plVar4;
    uVar5 = 1;
    *param_4 = uVar15;
  }
  return uVar5;
}




undefined8
FUN_18000ff50(longlong param_1,longlong param_2,int param_3,int param_4,void *param_5,uint param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)(param_2 + 8);
  uVar2 = FUN_180010470(param_1,param_3,plVar8,(undefined4 *)(param_2 + 4));
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar7 = 0;
  lVar1 = *plVar8;
  piVar3 = FUN_180011540(param_1,lVar1,param_4,param_5,param_6,0);
  iVar6 = iVar7;
  if (piVar3 != (int *)0x0) {
    do {
      iVar5 = iVar6;
      iVar6 = iVar5 + 1;
      if ((char)piVar3[2] == '\0') break;
      piVar3 = FUN_180011540(param_1,lVar1,param_4,param_5,param_6,iVar6);
    } while (piVar3 != (int *)0x0);
    if (iVar6 != 0) {
      plVar4 = (longlong *)malloc((longlong)iVar5 * 8 + 8);
      if (plVar4 != (longlong *)0x0) {
        plVar8 = plVar4;
        if (0 < iVar6) {
          do {
            piVar3 = FUN_180011540(param_1,lVar1,param_4,param_5,param_6,iVar7);
            iVar7 = iVar7 + 1;
            *plVar8 = (longlong)piVar3;
            plVar8 = plVar8 + 1;
          } while (iVar7 < iVar6);
        }
        *(longlong **)(param_2 + 0x4c) = plVar4;
        *(int *)(param_2 + 0x54) = iVar6;
        lVar1 = *plVar4;
        if (*(char *)(lVar1 + 8) != '\0') {
          *(undefined8 *)(param_2 + 0x44) = *(undefined8 *)(lVar1 + 0x30);
          return 1;
        }
        *(ulonglong *)(param_2 + 0x44) = (ulonglong)*(uint *)(lVar1 + 0x10);
        return 1;
      }
      *(undefined4 *)(param_1 + 0xc) = 8;
    }
  }
  free((void *)*plVar8);
  *plVar8 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xb;
  return 0;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800100f0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  void *_Dst;
  undefined8 *puVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStackY_1068 [32];
  undefined4 local_1038;
  undefined4 uStack_1034;
  undefined8 local_1028 [512];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18001010e;
  local_28 = DAT_18001d018 ^ (ulonglong)auStackY_1068;
  local_1038 = 0x490024;
  uStack_1034 = 0x300033;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_180011620(param_1);
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  iVar6 = (**(code **)(*(longlong *)(param_2 + 8) + 8))((longlong *)(param_2 + 8),local_1028,0,1);
  if (iVar6 < 1) {
    *(undefined4 *)(param_1 + 0xc) = 0x1e;
  }
  else {
    lVar11 = 4;
    puVar8 = (undefined8 *)(param_1 + 0x48);
    puVar10 = local_1028;
    do {
      uVar9 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      *puVar8 = *puVar10;
      puVar8[1] = uVar9;
      uVar9 = puVar10[4];
      uVar5 = puVar10[5];
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      uVar3 = puVar10[6];
      uVar4 = puVar10[7];
      puVar8[4] = uVar9;
      puVar8[5] = uVar5;
      uVar9 = puVar10[8];
      uVar5 = puVar10[9];
      puVar8[6] = uVar3;
      puVar8[7] = uVar4;
      uVar3 = puVar10[10];
      uVar4 = puVar10[0xb];
      puVar8[8] = uVar9;
      puVar8[9] = uVar5;
      uVar9 = puVar10[0xc];
      uVar5 = puVar10[0xd];
      puVar8[10] = uVar3;
      puVar8[0xb] = uVar4;
      uVar3 = puVar10[0xe];
      uVar4 = puVar10[0xf];
      puVar8[0xc] = uVar9;
      puVar8[0xd] = uVar5;
      puVar8[0xe] = uVar3;
      puVar8[0xf] = uVar4;
      lVar11 = lVar11 + -1;
      puVar8 = puVar8 + 0x10;
      puVar10 = puVar10 + 0x10;
    } while (lVar11 != 0);
    if ((*(longlong *)(param_1 + 0x4b) == 0x202020205346544e) && (*(char *)(param_1 + 0x53) == '\0')
       ) {
      if (((*(ushort *)(param_1 + 0x53) & 0x1ff) == 0) && (*(short *)(param_1 + 0x246) == -0x55ab))
      {
        uVar7 = *(uint *)(param_1 + 0x88);
        if (uVar7 < 0x81) {
          uVar7 = (uint)*(byte *)(param_1 + 0x55) * (uint)*(ushort *)(param_1 + 0x53) * uVar7;
        }
        else {
          uVar7 = 1 << (-(char)uVar7 & 0x1fU);
        }
        *(uint *)(param_1 + 0x88) = uVar7;
        uVar13 = *(uint *)(param_1 + 0x8c);
        *(uint *)(param_1 + 0x2c) = uVar7 / *(ushort *)(param_1 + 0x53);
        if (uVar13 < 0x81) {
          uVar7 = *(byte *)(param_1 + 0x55) * uVar13 * (uint)*(ushort *)(param_1 + 0x53);
        }
        else {
          uVar7 = 1 << (-(char)uVar13 & 0x1fU);
        }
        *(uint *)(param_1 + 0x8c) = uVar7;
        *(uint *)(param_1 + 0x30) = uVar7 / *(ushort *)(param_1 + 0x53);
        iVar6 = (uint)*(byte *)(param_1 + 0x55) * (uint)*(ushort *)(param_1 + 0x53);
        *(int *)(param_1 + 0x34) = iVar6;
        if (*(int *)(param_1 + 0x8c) < iVar6) {
          iVar6 = 0x200;
        }
        *(int *)(param_1 + 0x44) = iVar6;
        uVar9 = FUN_18000ff50(param_1,param_1 + 0x248,0,0x80,(void *)0x0,0);
        if ((int)uVar9 == 0) goto LAB_180010441;
        uVar9 = FUN_18000ff50(param_1,param_1 + 0x2f8,5,0x90,&local_1038,4);
        if ((int)uVar9 == 0) {
          free(*(void **)(param_1 + 0x250));
          free(*(void **)(param_1 + 0x294));
          free(*(void **)(param_1 + 0x278));
          goto LAB_180010441;
        }
        if (**(longlong **)(param_1 + 0x260) ==
            *(longlong *)(param_1 + 0x78) * (ulonglong)*(byte *)(param_1 + 0x55)) {
          lVar11 = *(longlong *)(param_1 + 0x300);
          local_1038 = 0x490024;
          uStack_1034 = 0x300033;
          if ((*(byte *)(lVar11 + 0x16) & 2) != 0) {
            uVar13 = (uint)*(ushort *)(lVar11 + 0x14);
            iVar6 = 0;
            uVar7 = *(uint *)(lVar11 + 0x18);
            if ((int)(uint)*(ushort *)(lVar11 + 0x14) < (int)uVar7) {
              do {
                piVar12 = (int *)((int)uVar13 + lVar11);
                uVar2 = piVar12[1];
                if ((uVar2 == 0) || (uVar7 <= uVar2)) goto LAB_180010400;
                if (*piVar12 == 0x90) {
                  if (((*(char *)((longlong)piVar12 + 9) == '\x04') &&
                      (*(longlong *)
                        ((ulonglong)*(ushort *)((longlong)piVar12 + 10) + (longlong)piVar12) ==
                       0x30003300490024)) && (bVar14 = iVar6 == 0, iVar6 = iVar6 + -1, bVar14)) {
                    if ((piVar12 != (int *)0x0) && ((char)piVar12[2] == '\0')) {
                      uVar1 = *(ushort *)(piVar12 + 5);
                      _Dst = malloc((ulonglong)
                                    *(uint *)((longlong)piVar12 + (ulonglong)uVar1 + 0x14) - 0x10);
                      if (_Dst != (void *)0x0) {
                        memcpy(_Dst,(void *)((longlong)piVar12 + (ulonglong)uVar1 + 0x20),
                               (ulonglong)*(uint *)((longlong)piVar12 + (ulonglong)uVar1 + 0x14) -
                               0x10);
                        *(void **)(param_1 + 0x38) = _Dst;
                        *(int *)(param_1 + 0x40) =
                             *(int *)((longlong)piVar12 + (ulonglong)uVar1 + 0x14) + -0x10;
                      }
                    }
                    goto LAB_180010400;
                  }
                }
                else if (*piVar12 == -1) goto LAB_180010400;
                uVar13 = uVar13 + uVar2;
              } while ((int)uVar13 < (int)uVar7);
              *(undefined8 *)(param_1 + 8) = 1;
              goto LAB_180010441;
            }
          }
LAB_180010400:
          *(undefined8 *)(param_1 + 8) = 1;
          goto LAB_180010441;
        }
      }
      *(undefined4 *)(param_1 + 0xc) = 0xb;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0x32;
    }
  }
LAB_180010441:
  FUN_180012550(local_28 ^ (ulonglong)auStackY_1068);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180010470(longlong param_1,int param_2,undefined8 *param_3,undefined4 *param_4)

{
  uint *puVar1;
  short *psVar2;
  short *psVar3;
  size_t _Size;
  ushort uVar4;
  uint uVar5;
  void *_Src;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *_Dst;
  void *pvVar10;
  longlong lVar11;
  longlong *plVar12;
  uint *puVar13;
  longlong lVar14;
  longlong *plVar15;
  short *psVar16;
  int *piVar17;
  longlong lVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStackY_10f8 [32];
  uint local_10c8;
  int local_10c4;
  uint *local_10c0;
  int local_10b8;
  int *local_10b0;
  longlong local_10a8;
  undefined8 *local_10a0;
  longlong local_1098;
  int local_1090 [2];
  longlong *local_1088;
  longlong local_1080;
  longlong local_1078;
  undefined8 *local_1070;
  undefined4 *local_1068;
  int local_1058;
  ushort local_1054;
  ushort local_1052;
  char acStack_1050 [8];
  uint uStack_1048;
  ushort local_1044;
  uint local_1040;
  int local_103c;
  undefined8 auStack_1028 [57];
  short local_e5a [1793];
  ulonglong local_58;
  
  local_58 = DAT_18001d018 ^ (ulonglong)auStackY_10f8;
  iVar22 = 0;
  plVar12 = (longlong *)(param_1 + 0x250);
  local_10c0 = (uint *)0x0;
  lVar11 = 0;
  do {
    local_10b8 = param_2;
    local_1078 = param_1;
    local_1070 = param_3;
    local_1068 = param_4;
    if (((int)plVar12[-1] == param_2) && (*plVar12 != 0)) {
      lVar11 = (longlong)iVar22 * 0x58;
      pvVar10 = malloc((ulonglong)*(uint *)(*(longlong *)(lVar11 + 0x250 + param_1) + 0x1c));
      if (pvVar10 == (void *)0x0) {
        *(undefined4 *)(param_1 + 0xc) = 8;
      }
      else {
        _Src = *(void **)(lVar11 + 0x250 + param_1);
        memcpy(pvVar10,_Src,(ulonglong)*(uint *)((longlong)_Src + 0x1c));
        *param_3 = pvVar10;
        *param_4 = *(undefined4 *)(lVar11 + 0x24c + param_1);
      }
      goto LAB_180010ced;
    }
    iVar22 = iVar22 + 1;
    lVar11 = lVar11 + 1;
    plVar12 = plVar12 + 0xb;
  } while (lVar11 < 4);
  if (param_2 == 0) {
    FUN_180010d20(param_1,param_3,param_4);
    goto LAB_180010ced;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar9 = FUN_18000fc10(param_1,param_2,(longlong *)&local_10b0,(int *)&local_10c8);
  piVar17 = local_10b0;
  uVar20 = local_10c8;
  if ((int)uVar9 == 0) goto LAB_180010ced;
  iVar21 = 0;
  iVar22 = 0;
  if (0 < (int)local_10c8) {
    piVar19 = local_10b0 + 2;
    do {
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      iVar6 = (**(code **)(*plVar12 + 8))
                        (plVar12,(longlong)&local_1058 + (longlong)iVar22,
                         *(undefined8 *)(piVar19 + -2),*piVar19);
      if (iVar6 < 1) {
        free(piVar17);
        *(undefined4 *)(param_1 + 0xc) = 0x1e;
        goto LAB_180010ced;
      }
      iVar21 = iVar21 + 1;
      iVar6 = *piVar19;
      piVar19 = piVar19 + 4;
      iVar22 = iVar22 + (uint)*(ushort *)(param_1 + 0x53) * iVar6;
    } while (iVar21 < (int)uVar20);
  }
  free(piVar17);
  uVar20 = *(uint *)(param_1 + 0x88);
  if (((uint)local_1052 != ((int)(uVar20 + ((int)uVar20 >> 0x1f & 0x1ffU)) >> 9) + 1U) ||
     ((int)uVar20 <= (int)(uint)local_1054)) {
LAB_180010cd3:
    *(undefined4 *)(param_1 + 0xc) = 0x570;
    goto LAB_180010ced;
  }
  lVar11 = 1;
  psVar16 = local_e5a;
  if (1 < (ulonglong)local_1052) {
    lVar18 = 1;
    do {
      if (*psVar16 != *(short *)((longlong)&local_1058 + (ulonglong)local_1054)) goto LAB_180010cd3;
      psVar2 = (short *)((longlong)&local_1058 + (ulonglong)local_1054) + lVar18;
      lVar18 = lVar18 + 1;
      *psVar16 = *psVar2;
      psVar16 = psVar16 + 0x100;
    } while (lVar18 < (longlong)(ulonglong)local_1052);
  }
  iVar22 = 0;
  for (uVar25 = (uint)local_1044; (int)uVar25 < (int)local_1040; uVar25 = uVar25 + uVar5) {
    lVar18 = (longlong)(int)uVar25;
    piVar17 = (int *)((longlong)&local_1058 + lVar18);
    uVar5 = *(uint *)((longlong)&local_1054 + lVar18);
    if ((uVar5 == 0) || (local_1040 <= uVar5)) break;
    if (*piVar17 == 0x20) {
      if ((acStack_1050[lVar18 + 1] == '\0') && (bVar26 = iVar22 == 0, iVar22 = iVar22 + -1, bVar26)
         ) {
        if (piVar17 != (int *)0x0) {
          if (acStack_1050[lVar18] == '\0') {
            uVar20 = *(uint *)((longlong)&uStack_1048 + lVar18);
          }
          else {
            uVar20 = (uint)*(undefined8 *)((longlong)auStack_1028 + lVar18);
          }
          uVar9 = FUN_18000f660(param_1,piVar17,0,uVar20,&local_10c0,(int *)&local_10c8);
          puVar1 = local_10c0;
          if ((int)uVar9 != 0) {
            uVar25 = 0;
            puVar13 = local_10c0;
            uVar20 = 0;
            if ((int)local_10c8 < 1) goto LAB_1800107ab;
            goto LAB_180010770;
          }
          if (local_10c0 != (uint *)0x0) {
            free(local_10c0);
          }
          goto LAB_180010ced;
        }
        break;
      }
    }
    else if (*piVar17 == -1) break;
  }
  pvVar10 = malloc((ulonglong)uVar20);
  if (pvVar10 == (void *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 8;
    goto LAB_180010ced;
  }
  memcpy(pvVar10,&local_1058,(ulonglong)*(uint *)(param_1 + 0x88));
  uVar8 = 1;
LAB_180010cba:
  *local_1070 = pvVar10;
  *local_1068 = uVar8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  goto LAB_180010ced;
  while( true ) {
    puVar13 = (uint *)((longlong)puVar13 + (ulonglong)uVar4);
    uVar25 = uVar20 + 1;
    uVar20 = uVar25;
    if ((longlong)(int)local_10c8 <= (longlong)puVar13 - (longlong)local_10c0) break;
LAB_180010770:
    uVar4 = (ushort)puVar13[1];
    if ((uVar4 == 0) ||
       ((((*puVar13 & 0xffffff0f) != 0 && (*puVar13 != 0x100)) || (local_10c8 <= uVar4)))) {
      *(undefined4 *)(param_1 + 0xc) = 0x570;
      free(local_10c0);
      goto LAB_180010ced;
    }
  }
LAB_1800107ab:
  _Dst = (undefined8 *)malloc((longlong)(int)uVar25 << 3);
  local_10a0 = _Dst;
  if (_Dst != (undefined8 *)0x0) {
    memset(_Dst,0,(longlong)(int)uVar25 << 3);
    iVar22 = 0;
    if (0 < (int)uVar25) {
      uVar24 = (ulonglong)uVar25;
      puVar13 = puVar1;
      puVar23 = _Dst;
      do {
        iVar21 = 0;
        if (0 < iVar22) {
          do {
            if (*(longlong *)(puVar13 + 4) == _Dst[iVar21]) {
              if (iVar21 < iVar22) goto LAB_18001084c;
              break;
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 < iVar22);
        }
        iVar22 = iVar22 + 1;
        *puVar23 = *(undefined8 *)(puVar13 + 4);
        puVar23 = puVar23 + 1;
LAB_18001084c:
        puVar13 = (uint *)((longlong)puVar13 + (ulonglong)(ushort)puVar13[1]);
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    local_10a8 = (longlong)iVar22;
    _Size = local_10a8 * 8;
    plVar12 = (longlong *)malloc(_Size);
    if (plVar12 != (longlong *)0x0) {
      memset(plVar12,0,_Size);
      local_10c4 = 0;
      uVar20 = 0;
      local_10c8 = 0;
      if (local_10a8 < 1) {
LAB_180010a65:
        lVar18 = local_10a8;
        pvVar10 = malloc((ulonglong)(local_103c + uVar20));
        if (pvVar10 != (void *)0x0) {
          memset(pvVar10,0,(ulonglong)(local_103c + uVar20));
          memcpy(pvVar10,&local_1058,(ulonglong)*(uint *)(param_1 + 0x88));
          lVar11 = local_10a8;
          piVar17 = (int *)((ulonglong)*(ushort *)((longlong)pvVar10 + 0x14) + (longlong)pvVar10);
          iVar22 = *piVar17;
          while (iVar22 != -1) {
            piVar17 = (int *)((longlong)piVar17 + (ulonglong)(uint)piVar17[1]);
            iVar22 = *piVar17;
          }
          if (1 < lVar18) {
            lVar18 = 1;
            do {
              piVar19 = (int *)((ulonglong)*(ushort *)(plVar12[lVar18] + 0x14) + plVar12[lVar18]);
              iVar22 = *piVar19;
              param_1 = local_1078;
              while (local_1078 = param_1, iVar22 != -1) {
                memcpy(piVar17,piVar19,(ulonglong)(uint)piVar19[1]);
                piVar17 = (int *)((longlong)piVar17 + (ulonglong)(uint)piVar17[1]);
                piVar19 = (int *)((longlong)piVar19 + (ulonglong)(uint)piVar19[1]);
                param_1 = local_1078;
                iVar22 = *piVar19;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < lVar11);
          }
          *piVar17 = -1;
          *(int *)((longlong)pvVar10 + 0x1c) = *(int *)((longlong)pvVar10 + 0x1c) + local_10c8;
          iVar22 = local_10c4 + -1;
          *(uint *)((longlong)pvVar10 + 0x18) =
               ((int)piVar17 - (uint)*(ushort *)((longlong)pvVar10 + 0x14)) - (int)pvVar10;
          if (1 < (longlong)iVar22) {
            lVar11 = 1;
            do {
              free((void *)plVar12[lVar11]);
              lVar11 = lVar11 + 1;
            } while (lVar11 < iVar22);
          }
          free(plVar12);
          free(local_10a0);
          free(local_10c0);
          uVar8 = 0;
          goto LAB_180010cba;
        }
        iVar22 = local_10c4 + -1;
        if (1 < (longlong)iVar22) {
          do {
            free((void *)plVar12[lVar11]);
            lVar11 = lVar11 + 1;
          } while (lVar11 < iVar22);
        }
        free(plVar12);
      }
      else {
        lVar14 = (longlong)_Dst - (longlong)plVar12;
        local_1098 = 0;
        lVar18 = local_10a8;
        plVar15 = plVar12;
        iVar22 = local_10b8;
        local_1080 = lVar14;
        uVar20 = 0;
LAB_1800108d0:
        iVar21 = local_10c4;
        if (*(int *)(lVar14 + (longlong)plVar15) == iVar22) {
LAB_180010a39:
          local_10c4 = local_10c4 + 1;
          local_1098 = local_1098 + 1;
          plVar15 = plVar15 + 1;
          _Dst = local_10a0;
          local_1088 = plVar15;
          if (lVar18 <= local_1098) goto LAB_180010a65;
          goto LAB_1800108d0;
        }
        *(undefined4 *)(param_1 + 0xc) = 2;
        local_1088 = plVar15;
        uVar9 = FUN_18000fc10(param_1,*(int *)(lVar14 + (longlong)plVar15),(longlong *)&local_10b0,
                              local_1090);
        if ((int)uVar9 == 0) {
          lVar18 = (longlong)(iVar21 + -1);
          if (1 < lVar18) {
            do {
              free((void *)plVar12[lVar11]);
              lVar11 = lVar11 + 1;
            } while (lVar11 < lVar18);
          }
          free(plVar12);
          free(local_10a0);
          free(local_10c0);
          goto LAB_180010ced;
        }
        pvVar10 = malloc((ulonglong)*(uint *)(param_1 + 0x88));
        iVar22 = local_1090[0];
        *plVar15 = (longlong)pvVar10;
        if (pvVar10 != (void *)0x0) {
          iVar21 = 0;
          iVar6 = 0;
          piVar17 = local_10b0;
          if (0 < local_1090[0]) {
            do {
              plVar15 = (longlong *)(*(longlong *)(param_1 + 0x10) + 8);
              iVar7 = (**(code **)(*plVar15 + 8))
                                (plVar15,(longlong)iVar6 + *local_1088,*(undefined8 *)piVar17,
                                 piVar17[2]);
              if (iVar7 < 1) {
                free(local_10b0);
                iVar22 = local_10c4 + -1;
                if (1 < (longlong)iVar22) {
                  do {
                    free((void *)plVar12[lVar11]);
                    lVar11 = lVar11 + 1;
                  } while (lVar11 < iVar22);
                }
                goto LAB_180010ae2;
              }
              iVar21 = iVar21 + 1;
              iVar6 = iVar6 + (uint)*(ushort *)(param_1 + 0x53) * *piVar17;
              plVar15 = local_1088;
              piVar17 = piVar17 + 4;
            } while (iVar21 < iVar22);
          }
          free(local_10b0);
          iVar22 = *(int *)(param_1 + 0x88);
          lVar18 = *plVar15;
          uVar4 = *(ushort *)(lVar18 + 6);
          if (((uint)uVar4 != ((int)(iVar22 + (iVar22 >> 0x1f & 0x1ffU)) >> 9) + 1U) ||
             (iVar22 <= (int)(uint)*(ushort *)(lVar18 + 4))) {
LAB_180010b0e:
            iVar22 = local_10c4 + -1;
            if (1 < (longlong)iVar22) {
              do {
                free((void *)plVar12[lVar11]);
                lVar11 = lVar11 + 1;
              } while (lVar11 < iVar22);
            }
            goto LAB_180010ae2;
          }
          psVar2 = (short *)(lVar18 + (ulonglong)*(ushort *)(lVar18 + 4));
          lVar14 = 1;
          psVar16 = (short *)(lVar18 + 0x1fe);
          if (1 < (ulonglong)uVar4) {
            do {
              if (*psVar16 != *psVar2) goto LAB_180010b0e;
              psVar3 = psVar2 + lVar14;
              lVar14 = lVar14 + 1;
              *psVar16 = *psVar3;
              psVar16 = psVar16 + 0x100;
            } while (lVar14 < (longlong)(ulonglong)uVar4);
            lVar18 = *plVar15;
          }
          piVar17 = (int *)((ulonglong)*(ushort *)(lVar18 + 0x14) + lVar18);
          iVar21 = *piVar17;
          while (lVar18 = local_10a8, lVar14 = local_1080, iVar22 = local_10b8, uVar20 = local_10c8,
                iVar21 != -1) {
            puVar1 = (uint *)(piVar17 + 1);
            piVar17 = (int *)((longlong)piVar17 + (ulonglong)*puVar1);
            local_10c8 = local_10c8 + *puVar1;
            iVar21 = *piVar17;
          }
          goto LAB_180010a39;
        }
        free(local_10b0);
        lVar18 = (longlong)(iVar21 + -1);
        if (1 < lVar18) {
          do {
            free((void *)plVar12[lVar11]);
            lVar11 = lVar11 + 1;
          } while (lVar11 < lVar18);
        }
LAB_180010ae2:
        free(plVar12);
        _Dst = local_10a0;
      }
      free(_Dst);
      *(undefined4 *)(param_1 + 0xc) = 8;
      free(local_10c0);
      goto LAB_180010ced;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 8;
  free(puVar1);
LAB_180010ced:
  FUN_180012550(local_58 ^ (ulonglong)auStackY_10f8);
  return;
}




undefined8 FUN_180010d20(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *_Memory;
  undefined8 uVar6;
  undefined4 *_Memory_00;
  int *piVar7;
  void *pvVar8;
  uint uVar9;
  longlong *plVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  void *_Memory_01;
  int local_res20;
  int local_88 [2];
  undefined4 *local_80;
  void *local_78;
  undefined4 *local_70;
  int local_68;
  uint local_64;
  longlong local_60;
  void *local_58;
  undefined4 *local_50;
  void *local_48;
  longlong local_40;
  
  local_res20 = 1;
  piVar15 = (int *)0x0;
  local_78 = (void *)0x0;
  puVar5 = (undefined4 *)malloc((ulonglong)*(uint *)(param_1 + 0x88));
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 8;
    return 0;
  }
  local_80 = puVar5;
  _Memory = malloc((ulonglong)*(uint *)(param_1 + 0x88));
  if (_Memory == (void *)0x0) {
    free(puVar5);
    *(undefined4 *)(param_1 + 0xc) = 8;
  }
  else {
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0x10) + 8);
    iVar3 = (**(code **)(*plVar10 + 8))
                      (plVar10,puVar5,
                       (ulonglong)*(byte *)(param_1 + 0x55) * *(longlong *)(param_1 + 0x78),
                       *(undefined4 *)(param_1 + 0x2c));
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0xc) = 0x1e;
      free(puVar5);
      free(_Memory);
    }
    else {
      uVar6 = FUN_18000f400(param_1,(longlong)puVar5,*(int *)(param_1 + 0x88));
      if ((int)uVar6 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0x570;
        free(puVar5);
        free(_Memory);
      }
      else {
        piVar7 = piVar15;
        for (uVar9 = (uint)*(ushort *)(puVar5 + 5); (int)uVar9 < (int)puVar5[6];
            uVar9 = uVar9 + uVar2) {
          piVar12 = (int *)((longlong)(int)uVar9 + (longlong)puVar5);
          uVar2 = piVar12[1];
          if ((uVar2 == 0) || ((uint)puVar5[6] <= uVar2)) break;
          if (*piVar12 == 0x20) {
            if ((*(char *)((longlong)piVar12 + 9) == '\0') &&
               (iVar3 = (int)piVar7, piVar7 = (int *)(ulonglong)(iVar3 - 1), iVar3 == 0)) {
              if (piVar12 != (int *)0x0) {
                if ((char)piVar12[2] == '\0') {
                  uVar9 = piVar12[4];
                }
                else {
                  uVar9 = (uint)*(undefined8 *)(piVar12 + 0xc);
                }
                uVar6 = FUN_18000f660(param_1,piVar12,0,uVar9,&local_78,local_88);
                _Memory_01 = local_78;
                if ((int)uVar6 == 0) goto joined_r0x000180010f93;
                *(undefined8 *)(param_1 + 0x250) = 0;
                *(undefined8 *)(param_1 + 0x260) = 0;
                *(undefined4 *)(param_1 + 600) = 0;
                local_60 = 4;
                _Memory_00 = (undefined4 *)malloc(4);
                if (_Memory_00 == (undefined4 *)0x0) goto joined_r0x000180010f93;
                *_Memory_00 = 0;
                *(undefined4 **)(param_1 + 0x250) = puVar5;
                uVar9 = (uint)*(ushort *)(puVar5 + 5);
                piVar7 = piVar15;
                goto joined_r0x000180010ff1;
              }
              break;
            }
          }
          else if (*piVar12 == -1) break;
        }
        *(undefined4 **)(param_1 + 0x250) = puVar5;
        for (uVar9 = (uint)*(ushort *)(puVar5 + 5); (int)uVar9 < (int)puVar5[6];
            uVar9 = uVar9 + uVar2) {
          piVar7 = (int *)((longlong)(int)uVar9 + (longlong)puVar5);
          uVar2 = piVar7[1];
          if ((uVar2 == 0) || ((uint)puVar5[6] <= uVar2)) break;
          if (*piVar7 == 0x80) {
            if ((*(char *)((longlong)piVar7 + 9) == '\0') &&
               (iVar3 = (int)piVar15, piVar15 = (int *)(ulonglong)(iVar3 - 1), iVar3 == 0)) {
              if (piVar7 != (int *)0x0) {
                FUN_18000fdc0(param_1,(byte *)((ulonglong)*(ushort *)(piVar7 + 8) + (longlong)piVar7
                                              ),(undefined8 *)(param_1 + 0x260),
                              (uint *)(param_1 + 600));
                FUN_18000f630(param_1,param_1 + 0x248);
                *param_2 = puVar5;
                *param_3 = 1;
                free(_Memory);
                return 1;
              }
              break;
            }
          }
          else if (*piVar7 == -1) break;
        }
        *(undefined4 *)(param_1 + 0xc) = 0x570;
        free(_Memory);
      }
    }
  }
  return 0;
joined_r0x000180010ff1:
  if ((int)puVar5[6] <= (int)uVar9) goto LAB_1800110e5;
  piVar12 = (int *)((longlong)(int)uVar9 + (longlong)puVar5);
  uVar2 = piVar12[1];
  if ((uVar2 == 0) || ((uint)puVar5[6] <= uVar2)) goto LAB_1800110e5;
  if (*piVar12 == 0x80) {
    if ((*(char *)((longlong)piVar12 + 9) == '\0') &&
       (iVar3 = (int)piVar7, piVar7 = (int *)(ulonglong)(iVar3 - 1), iVar3 == 0)) {
      if (piVar12 != (int *)0x0) {
        FUN_18000fdc0(param_1,(byte *)((ulonglong)*(ushort *)(piVar12 + 8) + (longlong)piVar12),
                      (undefined8 *)(param_1 + 0x260),(uint *)(param_1 + 600));
        FUN_18000f630(param_1,param_1 + 0x248);
        lVar14 = (longlong)local_88[0];
        if (lVar14 < 1) goto LAB_1800114e6;
        pvVar8 = _Memory_01;
        lVar13 = 1;
        goto LAB_180011090;
      }
      goto LAB_1800110e5;
    }
  }
  else if (*piVar12 == -1) goto LAB_1800110e5;
  uVar9 = uVar9 + uVar2;
  goto joined_r0x000180010ff1;
LAB_180011090:
  if (0 < local_res20) {
    do {
      uVar9 = 0;
      if (0 < local_60) {
        piVar7 = piVar15;
        piVar12 = piVar15;
        do {
          uVar9 = (uint)piVar12;
          if (*(int *)((longlong)_Memory_01 + 0x10) == _Memory_00[(longlong)piVar7]) {
            _Memory_01 = (void *)((longlong)_Memory_01 +
                                 (ulonglong)*(ushort *)((longlong)_Memory_01 + 4));
            if (lVar14 <= (longlong)_Memory_01 - (longlong)pvVar8) goto LAB_1800114e6;
            break;
          }
          uVar9 = uVar9 + 1;
          piVar12 = (int *)(ulonglong)uVar9;
          piVar7 = (int *)((longlong)piVar7 + 1);
        } while ((longlong)piVar7 < lVar13);
      }
    } while ((int)uVar9 < local_res20);
  }
  puVar5 = (undefined4 *)malloc((longlong)(local_res20 + 1) << 2);
  local_70 = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 8;
  }
  else {
    memcpy(puVar5,_Memory_00,(longlong)local_res20 << 2);
    local_40 = lVar13 + 1;
    *(undefined4 *)(local_60 + (longlong)puVar5) = *(undefined4 *)((longlong)_Memory_01 + 0x10);
    local_60 = local_60 + 4;
    free(_Memory_00);
    *(undefined4 *)(param_1 + 0xc) = 0x570;
    local_50 = puVar5;
    uVar6 = FUN_18000fc10(param_1,*(int *)((longlong)_Memory_01 + 0x10),(longlong *)&local_58,
                          &local_68);
    pvVar8 = local_58;
    iVar3 = local_68;
    _Memory_00 = puVar5;
    if ((int)uVar6 != 0) {
      if (0 < local_68) {
        piVar7 = (int *)((longlong)local_58 + 8);
        piVar12 = piVar15;
        piVar11 = piVar15;
        do {
          iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 8))
                            (*(longlong *)(param_1 + 0x10) + 8,
                             (longlong)(int)piVar12 + (longlong)_Memory,*(undefined8 *)(piVar7 + -2)
                             ,*piVar7);
          if (iVar4 < 1) {
            free(pvVar8);
            *(undefined4 *)(param_1 + 0xc) = 0x1e;
            _Memory_00 = local_70;
            goto LAB_1800110ff;
          }
          uVar9 = (int)piVar11 + 1;
          piVar11 = (int *)(ulonglong)uVar9;
          iVar4 = *piVar7;
          piVar7 = piVar7 + 4;
          piVar12 = (int *)(ulonglong)((int)piVar12 + (uint)*(ushort *)(param_1 + 0x53) * iVar4);
        } while ((int)uVar9 < iVar3);
      }
      free(pvVar8);
      uVar6 = FUN_18000f400(param_1,(longlong)_Memory,*(int *)(param_1 + 0x88));
      if ((int)uVar6 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0x1e;
        _Memory_00 = local_70;
      }
      else {
        uVar9 = 0;
        piVar11 = (int *)((ulonglong)*(ushort *)((longlong)_Memory + 0x14) + (longlong)_Memory);
        iVar3 = *piVar11;
        piVar7 = piVar11;
        piVar12 = piVar15;
        while (iVar3 != -1) {
          puVar1 = (uint *)(piVar7 + 1);
          piVar7 = (int *)((longlong)piVar7 + (ulonglong)*puVar1);
          uVar9 = (int)piVar12 + *puVar1;
          piVar12 = (int *)(ulonglong)uVar9;
          iVar3 = *piVar7;
        }
        puVar5 = (undefined4 *)malloc((ulonglong)(local_80[7] + uVar9));
        local_80 = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          memcpy(puVar5,*(void **)(param_1 + 0x250),
                 (ulonglong)*(uint *)((longlong)*(void **)(param_1 + 0x250) + 0x1c));
          piVar7 = (int *)((ulonglong)*(ushort *)(puVar5 + 5) + (longlong)puVar5);
          iVar3 = *piVar7;
          while (iVar3 != -1) {
            piVar7 = (int *)((longlong)piVar7 + (ulonglong)(uint)piVar7[1]);
            iVar3 = *piVar7;
          }
          memcpy(piVar7,piVar11,(longlong)(int)uVar9);
          puVar5 = local_80;
          *(undefined4 *)((longlong)(int)uVar9 + (longlong)piVar7) = 0xffffffff;
          local_80[6] = local_80[6] + uVar9;
          local_80[7] = local_80[7] + uVar9;
          piVar7 = piVar15;
          do {
            iVar3 = (int)piVar7;
            for (uVar9 = (uint)*(ushort *)((longlong)_Memory + 0x14); piVar12 = piVar15,
                (int)uVar9 < (int)*(uint *)((longlong)_Memory + 0x18); uVar9 = uVar9 + uVar2) {
              piVar11 = (int *)((longlong)(int)uVar9 + (longlong)_Memory);
              uVar2 = piVar11[1];
              if ((uVar2 == 0) || (*(uint *)((longlong)_Memory + 0x18) <= uVar2)) break;
              if (*piVar11 == 0x80) {
                if ((*(char *)((longlong)piVar11 + 9) == '\0') &&
                   (iVar4 = (int)piVar7, piVar7 = (int *)(ulonglong)(iVar4 - 1), piVar12 = piVar11,
                   iVar4 == 0)) break;
              }
              else if (*piVar11 == -1) break;
            }
            piVar7 = (int *)(ulonglong)(iVar3 + 1);
            if (piVar12 == (int *)0x0) goto LAB_180011423;
            FUN_18000fdc0(param_1,(byte *)((ulonglong)*(ushort *)(piVar12 + 8) + (longlong)piVar12),
                          &local_48,&local_64);
            uVar9 = local_64;
            lVar14 = (longlong)(int)local_64;
            pvVar8 = malloc((longlong)(int)(*(int *)(param_1 + 600) + local_64) << 4);
            local_58 = pvVar8;
            if (pvVar8 == (void *)0x0) {
              *(undefined4 *)(param_1 + 0xc) = 8;
              free(puVar5);
              _Memory_00 = local_70;
              goto LAB_1800110ff;
            }
            memcpy(pvVar8,*(void **)(param_1 + 0x260),(longlong)*(int *)(param_1 + 600) << 4);
            memcpy((void *)((longlong)*(int *)(param_1 + 600) * 0x10 + (longlong)pvVar8),local_48,
                   lVar14 << 4);
            free(*(void **)(param_1 + 0x260));
            *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + uVar9;
            *(void **)(param_1 + 0x260) = pvVar8;
            free(local_48);
          } while( true );
        }
        *(undefined4 *)(param_1 + 0xc) = 8;
        _Memory_00 = local_70;
      }
    }
  }
  goto LAB_1800110ff;
LAB_180011423:
  FUN_18000f630(param_1,param_1 + 0x248);
  free(*(void **)(param_1 + 0x250));
  lVar14 = (longlong)local_88[0];
  *(undefined4 **)(param_1 + 0x250) = puVar5;
  _Memory_01 = (void *)((longlong)_Memory_01 + (ulonglong)*(ushort *)((longlong)_Memory_01 + 4));
  pvVar8 = local_78;
  lVar13 = local_40;
  _Memory_00 = local_50;
  local_res20 = local_res20 + 1;
  if (lVar14 <= (longlong)_Memory_01 - (longlong)local_78) {
LAB_1800114e6:
    *param_2 = puVar5;
    free(_Memory_00);
    free(_Memory);
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 1;
  }
  goto LAB_180011090;
LAB_1800110e5:
  free(_Memory_00);
joined_r0x000180010f93:
  _Memory_00 = puVar5;
  if (_Memory_01 != (void *)0x0) {
    free(_Memory_01);
  }
LAB_1800110ff:
  free(_Memory_00);
  free(_Memory);
  return 0;
}




int * FUN_180011540(undefined8 param_1,longlong param_2,int param_3,void *param_4,uint param_5,
                   int param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)*(ushort *)(param_2 + 0x14);
  uVar2 = *(uint *)(param_2 + 0x18);
  if ((int)(uint)*(ushort *)(param_2 + 0x14) < (int)uVar2) {
    while( true ) {
      uVar3 = *(uint *)((longlong)(int)uVar7 + 4 + param_2);
      piVar1 = (int *)((int)uVar7 + param_2);
      if ((uVar3 == 0) || (uVar2 <= uVar3)) break;
      iVar4 = *piVar1;
      if (param_3 == iVar4) {
        if (param_4 == (void *)0x0) {
          if (*(byte *)((longlong)piVar1 + 9) == 0) goto joined_r0x00018001160d;
        }
        else if ((*(byte *)((longlong)piVar1 + 9) == param_5) &&
                (iVar6 = memcmp((void *)((ulonglong)*(ushort *)((longlong)piVar1 + 10) +
                                        (longlong)piVar1),param_4,(longlong)(int)(param_5 * 2)),
                iVar6 == 0)) {
joined_r0x00018001160d:
          bVar5 = param_6 == 0;
          param_6 = param_6 + -1;
          if (bVar5) {
            return piVar1;
          }
        }
      }
      if (iVar4 == -1) {
        return (int *)0x0;
      }
      uVar7 = uVar7 + uVar3;
      if ((int)uVar2 <= (int)uVar7) {
        return (int *)0x0;
      }
    }
  }
  return (int *)0x0;
}




undefined8 FUN_180011620(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    free(*(void **)(param_1 + 0x38));
    puVar1 = (undefined8 *)(param_1 + 0x268);
    lVar2 = 4;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        free((void *)puVar1[2]);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        free((void *)*puVar1);
      }
      if (*(void **)((longlong)puVar1 + 0x2c) != (void *)0x0) {
        free(*(void **)((longlong)puVar1 + 0x2c));
      }
      if (*(void **)((longlong)puVar1 + 0x1c) != (void *)0x0) {
        free(*(void **)((longlong)puVar1 + 0x1c));
      }
      if ((void *)puVar1[-1] != (void *)0x0) {
        free((void *)puVar1[-1]);
      }
      if ((void *)puVar1[-3] != (void *)0x0) {
        free((void *)puVar1[-3]);
      }
      puVar1 = puVar1 + 0xb;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar2 = *(longlong *)(param_1 + 0x3a8);
    while (lVar2 != 0) {
      FUN_18000dc20(param_1,*(longlong **)(param_1 + 0x3a8));
      lVar2 = *(longlong *)(param_1 + 0x3a8);
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    memset((void *)(param_1 + 0x248),0,0x160);
    return 1;
  }
  return 0;
}




void FUN_180011720(char *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  char acStack_127 [271];
  ulonglong local_18;
  
  local_18 = DAT_18001d018 ^ (ulonglong)auStack_148;
  puVar3 = (undefined8 *)FUN_180003d00(param_1);
  if (puVar3 != (undefined8 *)0x0) {
    local_128 = 0x49;
    pcVar5 = param_1;
    if (*param_1 != '\0') {
      lVar4 = 0;
      do {
        if (0xff < lVar4) goto LAB_1800117b0;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        acStack_127[lVar4] = cVar1;
        lVar4 = lVar4 + 1;
      } while (*pcVar5 != '\0');
    }
    builtin_strncpy(pcVar5 + (longlong)(acStack_127 + -(longlong)param_1),"Modu",4);
    (pcVar5 + (longlong)(acStack_127 + (4 - (longlong)param_1)))[0] = 'l';
    (pcVar5 + (longlong)(acStack_127 + (4 - (longlong)param_1)))[1] = 'e';
    if ((char *)0x103 < pcVar5 + (7 - (longlong)param_1)) {
      __report_rangecheckfailure();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    acStack_127[(longlong)(pcVar5 + (7 - (longlong)param_1) + -1)] = '\0';
    (**(code **)*puVar3)(puVar3,&local_128);
  }
LAB_1800117b0:
  FUN_180012550(local_18 ^ (ulonglong)auStack_148);
  return;
}




longlong *
FUN_1800117d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *pvVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  size_t sVar9;
  uint local_res10 [2];
  
  *param_1 = (longlong)IFSInterface::vftable;
  *param_1 = (longlong)CWindowsFS::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  plVar8 = param_1 + 2;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)plVar8 = 0;
  if (DAT_18001dc30 == (undefined1 *)0x0) {
    DAT_18001dc30 = &DAT_18001db30;
    local_res10[0] = 0x100;
    pcVar2 = (char *)__std_type_info_name
                               (0x18001d310,&DAT_18001e580,param_3,param_4,0xfffffffffffffffe);
    FUN_18000d620(pcVar2,DAT_18001dc30,local_res10);
  }
  plVar3 = (longlong *)(**(code **)*param_2)(param_2,DAT_18001dc30);
  if (DAT_18001db20 == (undefined1 *)0x0) {
    DAT_18001db20 = &DAT_18001da20;
    local_res10[0] = 0x100;
    pcVar2 = (char *)__std_type_info_name(0x18001d2e8,&DAT_18001e580);
    FUN_18000d620(pcVar2,DAT_18001db20,local_res10);
  }
  plVar4 = (longlong *)(**(code **)*plVar3)(plVar3,DAT_18001db20);
  uVar1 = (**(code **)(*plVar4 + 0x30))(plVar4);
  *(undefined1 *)(param_1 + 1) = uVar1;
  (**(code **)(*plVar4 + 0x40))(plVar4);
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x38))(plVar3);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4);
  if (plVar4 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x68))(plVar4);
    if (plVar4 != (longlong *)0x0) {
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x98))(plVar4,plVar3);
      if (pvVar5 != (void *)0x0) {
        sVar9 = 0xffffffffffffffff;
        do {
          sVar9 = sVar9 + 1;
        } while (*(char *)((longlong)pvVar5 + sVar9) != '\0');
        plVar3 = plVar8;
        FUN_180004ce0(plVar8,pvVar5,sVar9);
        uVar7 = (uint)pvVar5;
        if (param_1[4] != 0) {
          uVar6 = param_1[4] - 1;
          if ((ulonglong)param_1[4] < uVar6) {
            FUN_180007580();
            *plVar3 = (longlong)CWindowsFS::vftable;
            FUN_1800027e0(plVar3 + 2);
            *plVar3 = (longlong)IFSInterface::vftable;
            if ((uVar7 & 1) != 0) {
              free(plVar3);
            }
            return plVar3;
          }
          param_1[4] = uVar6;
          if (0xf < (ulonglong)param_1[5]) {
            plVar8 = (longlong *)*plVar8;
          }
          *(undefined1 *)((longlong)plVar8 + uVar6) = 0;
        }
      }
    }
  }
  return param_1;
}




undefined8 * FUN_180011980(undefined8 *param_1,uint param_2)

{
  *param_1 = CWindowsFS::vftable;
  FUN_1800027e0(param_1 + 2);
  *param_1 = IFSInterface::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800119e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001800119e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FindClose(param_2);
  return;
}




void FUN_1800119f0(longlong *param_1,LPCSTR param_2,LPCWSTR param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  longlong *plVar7;
  __uint64 _Var8;
  wchar_t *lpWideCharStr;
  wchar_t *_Src;
  HANDLE pvVar9;
  longlong *lpMultiByteStr;
  undefined1 auStackY_2e8 [32];
  _SYSTEMTIME local_2a8;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_18001d018 ^ (ulonglong)auStackY_2e8;
  plVar7 = (longlong *)FUN_180011720("Common");
  if (plVar7 != (longlong *)0x0) {
    if ((char)param_1[1] == '\0') {
      lVar1 = param_1[4];
      lpWideCharStr = param_3;
      if (lVar1 != 0) {
        iVar5 = lstrlenA(param_2);
        iVar5 = iVar5 + (int)lVar1 + 4;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (longlong)iVar5;
        _Var8 = SUB168(ZEXT816(2) * auVar3,0);
        if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
          _Var8 = 0xffffffffffffffff;
        }
        lpWideCharStr = (wchar_t *)operator_new(_Var8);
        memset(lpWideCharStr,0,(longlong)iVar5 * 2);
        iVar6 = lstrlenA(param_2);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (longlong)(iVar6 + 1);
        _Var8 = SUB168(ZEXT816(2) * auVar4,0);
        if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
          _Var8 = 0xffffffffffffffff;
        }
        _Src = (wchar_t *)operator_new(_Var8);
        iVar6 = lstrlenA(param_2);
        memset(_Src,0,(longlong)(iVar6 + 1) * 2);
        lVar1 = *plVar7;
        lstrlenA(param_2);
        iVar6 = lstrlenA(param_2);
        (**(code **)(lVar1 + 0x60))(plVar7,param_2,iVar6,_Src);
        lpMultiByteStr = param_1 + 2;
        if (0xf < (ulonglong)param_1[5]) {
          lpMultiByteStr = (longlong *)*lpMultiByteStr;
        }
        iVar6 = MultiByteToWideChar(0,0,(LPCSTR)lpMultiByteStr,(int)param_1[4],lpWideCharStr,iVar5);
        if (iVar6 < 1) {
          free(_Src);
          goto LAB_180011e7c;
        }
        lpWideCharStr[iVar6] = L'\0';
        wcscat_s(lpWideCharStr,(longlong)iVar5,_Src);
        wcscat_s(lpWideCharStr,(longlong)iVar5,L"*");
        free(_Src);
      }
    }
    else {
      iVar5 = lstrlenA(param_2);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (longlong)(iVar5 + 4);
      _Var8 = SUB168(ZEXT816(2) * auVar2,0);
      if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
        _Var8 = 0xffffffffffffffff;
      }
      lpWideCharStr = (wchar_t *)operator_new(_Var8);
      iVar5 = lstrlenA(param_2);
      memset(lpWideCharStr,0,(longlong)(iVar5 + 4) * 2);
      lVar1 = *plVar7;
      lstrlenA(param_2);
      iVar5 = lstrlenA(param_2);
      (**(code **)(lVar1 + 0x60))(plVar7,param_2,iVar5,lpWideCharStr + 2);
      *lpWideCharStr = (short)(char)param_1[1];
      lpWideCharStr[1] = L':';
      iVar5 = lstrlenW(lpWideCharStr);
      lpWideCharStr[iVar5] = L'*';
    }
    pvVar9 = FindFirstFileW(lpWideCharStr,&local_298);
    if (pvVar9 != (HANDLE)0xffffffffffffffff) {
      if ((local_298.cFileName._0_4_ == 0x2e) ||
         ((local_298.cFileName._0_4_ == 0x2e002e && (local_298.cFileName[2] == L'\0')))) {
        iVar5 = (**(code **)(*param_1 + 8))(param_1,pvVar9,param_3);
        if (iVar5 == 0) {
          (**(code **)(*param_1 + 0x10))(param_1,pvVar9);
        }
      }
      else {
        memset(param_3,0,0x468);
        lVar1 = *plVar7;
        iVar5 = lstrlenW(local_298.cFileName);
        (**(code **)(lVar1 + 0x58))(plVar7,local_298.cFileName,iVar5,param_3 + 0x18);
        lVar1 = *plVar7;
        iVar5 = lstrlenW(local_298.cAlternateFileName);
        (**(code **)(lVar1 + 0x58))(plVar7,local_298.cAlternateFileName,iVar5,param_3 + 0x218);
        *(DWORD *)param_3 = local_298.dwFileAttributes;
        *(DWORD *)(param_3 + 0xe) = local_298.nFileSizeHigh;
        *(DWORD *)(param_3 + 0x10) = local_298.nFileSizeLow;
        FileTimeToLocalFileTime(&local_298.ftCreationTime,(LPFILETIME)(param_3 + 2));
        FileTimeToSystemTime((FILETIME *)(param_3 + 2),&local_2a8);
        *(uint *)(param_3 + 2) =
             (uint)CONCAT21(CONCAT11((undefined1)local_2a8.wHour,(undefined1)local_2a8.wMinute),
                            (undefined1)local_2a8.wSecond);
        *(uint *)(param_3 + 4) =
             CONCAT31(CONCAT21(local_2a8.wYear,(undefined1)local_2a8.wMonth),
                      (undefined1)local_2a8.wDay);
        FileTimeToLocalFileTime(&local_298.ftLastAccessTime,(LPFILETIME)(param_3 + 6));
        FileTimeToSystemTime((FILETIME *)(param_3 + 6),&local_2a8);
        *(uint *)(param_3 + 6) =
             (uint)CONCAT21(CONCAT11((undefined1)local_2a8.wHour,(undefined1)local_2a8.wMinute),
                            (undefined1)local_2a8.wSecond);
        *(uint *)(param_3 + 8) =
             CONCAT31(CONCAT21(local_2a8.wYear,(undefined1)local_2a8.wMonth),
                      (undefined1)local_2a8.wDay);
        FileTimeToLocalFileTime(&local_298.ftLastWriteTime,(LPFILETIME)(param_3 + 10));
        FileTimeToSystemTime((FILETIME *)(param_3 + 10),&local_2a8);
        *(uint *)(param_3 + 10) =
             (uint)CONCAT21(CONCAT11((undefined1)local_2a8.wHour,(undefined1)local_2a8.wMinute),
                            (undefined1)local_2a8.wSecond);
        *(uint *)(param_3 + 0xc) =
             CONCAT31(CONCAT21(local_2a8.wYear,(undefined1)local_2a8.wMonth),
                      (undefined1)local_2a8.wDay);
      }
    }
  }
LAB_180011e7c:
  FUN_180012550(local_48 ^ (ulonglong)auStackY_2e8);
  return;
}




void FUN_180011ea0(undefined8 param_1,HANDLE param_2,DWORD *param_3)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  _SYSTEMTIME local_298;
  _WIN32_FIND_DATAW local_288;
  ulonglong local_38;
  
  local_38 = DAT_18001d018 ^ (ulonglong)auStack_2c8;
  memset(param_3,0,0x468);
  plVar4 = (longlong *)FUN_180011720("Common");
  if (plVar4 != (longlong *)0x0) {
    memset(&local_288,0,0x250);
    BVar2 = FindNextFileW(param_2,&local_288);
    if ((BVar2 != 0) &&
       (((local_288.cFileName._0_4_ != 0x2e002e || (local_288.cFileName[2] != L'\0')) ||
        (BVar2 = FindNextFileW(param_2,&local_288), BVar2 != 0)))) {
      lVar1 = *plVar4;
      iVar3 = lstrlenW(local_288.cFileName);
      local_2a8 = 0x400;
      (**(code **)(lVar1 + 0x58))(plVar4,local_288.cFileName,iVar3,param_3 + 0xc);
      lVar1 = *plVar4;
      iVar3 = lstrlenW(local_288.cAlternateFileName);
      local_2a8 = 0x38;
      (**(code **)(lVar1 + 0x58))(plVar4,local_288.cAlternateFileName,iVar3,param_3 + 0x10c);
      *param_3 = local_288.dwFileAttributes;
      param_3[7] = local_288.nFileSizeHigh;
      param_3[8] = local_288.nFileSizeLow;
      FileTimeToLocalFileTime(&local_288.ftCreationTime,(LPFILETIME)(param_3 + 1));
      FileTimeToSystemTime((FILETIME *)(param_3 + 1),&local_298);
      param_3[1] = (uint)CONCAT21(CONCAT11((undefined1)local_298.wHour,(undefined1)local_298.wMinute
                                          ),(undefined1)local_298.wSecond);
      param_3[2] = CONCAT31(CONCAT21(local_298.wYear,(undefined1)local_298.wMonth),
                            (undefined1)local_298.wDay);
      FileTimeToLocalFileTime(&local_288.ftLastAccessTime,(LPFILETIME)(param_3 + 3));
      FileTimeToSystemTime((FILETIME *)(param_3 + 3),&local_298);
      param_3[3] = (uint)CONCAT21(CONCAT11((undefined1)local_298.wHour,(undefined1)local_298.wMinute
                                          ),(undefined1)local_298.wSecond);
      param_3[4] = CONCAT31(CONCAT21(local_298.wYear,(undefined1)local_298.wMonth),
                            (undefined1)local_298.wDay);
      FileTimeToLocalFileTime(&local_288.ftLastWriteTime,(LPFILETIME)(param_3 + 5));
      FileTimeToSystemTime((FILETIME *)(param_3 + 5),&local_298);
      param_3[5] = (uint)CONCAT21(CONCAT11((undefined1)local_298.wHour,(undefined1)local_298.wMinute
                                          ),(undefined1)local_298.wSecond);
      param_3[6] = CONCAT31(CONCAT21(local_298.wYear,(undefined1)local_298.wMonth),
                            (undefined1)local_298.wDay);
    }
  }
  FUN_180012550(local_38 ^ (ulonglong)auStack_2c8);
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
    FUN_180013204();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_1800131e4();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




undefined8 * FUN_180012168(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
                    /* WARNING: Could not recover jumptable at 0x0001800121c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(pvVar1,0xc0000409);
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
  *(undefined8 *)(puVar3 + -8) = 0x1800122e2;
  capture_current_context((PCONTEXT)&DAT_18001e020);
  _DAT_18001df90 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18001e0b8 = puVar3 + 0x30;
  _DAT_18001df80 = 0xc0000409;
  _DAT_18001df84 = 1;
  _DAT_18001df98 = 1;
  DAT_18001dfa0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x18001234e;
  DAT_18001e118 = _DAT_18001df90;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180016b58);
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




undefined8 FUN_180012438(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  FUN_180012458(param_2,param_4,*(uint **)(param_4 + 0x38));
  return 1;
}




void FUN_180012458(ulonglong param_1,longlong param_2,uint *param_3)

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
  FUN_180012550(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180012550(longlong param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  if ((param_1 == DAT_18001d018) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1800121fa;
  capture_previous_context((PCONTEXT)&DAT_18001e020);
  _DAT_18001df90 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18001e0b8 = puVar3 + 0x40;
  _DAT_18001e0a0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18001df80 = 0xc0000409;
  _DAT_18001df84 = 1;
  _DAT_18001df98 = 1;
  DAT_18001dfa0 = 2;
  *(longlong *)(puVar3 + 0x20) = DAT_18001d018;
  *(undefined8 *)(puVar3 + 0x28) = _DAT_18001d010;
  *(undefined8 *)(puVar3 + -8) = 0x18001229c;
  DAT_18001e118 = _DAT_18001df90;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180016b58);
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
LAB_1800125a2:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18001e4f8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18001e4f8;
        pvVar1 = DAT_18001e4f8;
      }
      DAT_18001e4f8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_1800125a2;
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
    uVar3 = FUN_1800133bc();
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
  
  uVar1 = FUN_18001272c(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180013750();
  if (cVar1 != '\0') {
    cVar1 = FUN_180013750();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180013750();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180013750();
  FUN_180013750();
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

void __scrt_dllmain_uninitialize_c(IStorageDevice *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_18001e508);
    return;
  }
  iVar2 = IStorageDevice::ConvertVolume(param_1);
  if (iVar2 == 0) {
    _cexit();
  }
  return;
}




/* Library Function - Single Match
    __scrt_dllmain_uninitialize_critical
   
   Library: Visual Studio 2017 Release */

void __scrt_dllmain_uninitialize_critical(void)

{
  FUN_180013750();
  FUN_180013750();
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
    DAT_18001e500 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180013750();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180013750();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180013750();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18001272c(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18001e501 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18001d018 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18001d018;
      _DAT_18001e508 = in_RAX;
      uRam000000018001e510 = in_RAX;
      _DAT_18001e518 = in_RAX;
      _DAT_18001e520 = in_RAX;
      uRam000000018001e528 = in_RAX;
      _DAT_18001e530 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18001e508);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18001e520), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18001e501 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180012892) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000200; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1800002f0;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_18001287b;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18001287b:
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
    DAT_18001e4f8 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18001e500 == '\0') || (param_2 == '\0')) {
    FUN_180013750();
    FUN_180013750();
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
  
  bVar2 = (byte)DAT_18001d018 & 0x3f;
  if (((DAT_18001d018 ^ _DAT_18001e508) >> bVar2 | (DAT_18001d018 ^ _DAT_18001e508) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18001e508,_Func);
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

undefined8 FUN_180012958(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18001e538,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180012aaa;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18001e568 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18001e568 != (HANDLE)0x0) goto LAB_180012a48;
  }
  else {
    DAT_18001e568 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18001e560);
    bVar7 = 0x40 - ((byte)DAT_18001d018 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18001e570 = DAT_18001d018 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18001e578 = DAT_18001d018 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180012a48:
    uVar6 = FUN_18001272c(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180012ab8);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180012aaa:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180012ab8(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18001e538);
  if (DAT_18001e568 != (HANDLE)0x0) {
    CloseHandle(DAT_18001e568);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001e538);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001e538);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001e538);
  uVar1 = (ulonglong)_tls_index;
  DAT_18001d024 = DAT_18001d024 + 1;
  *param_1 = DAT_18001d024;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18001d024;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001e538);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001e538);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180012bc4:
                    /* WARNING: Could not recover jumptable at 0x000180012bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001e538);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18001d024;
      goto LAB_180012bc4;
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
  
  if (DAT_18001e568 != (HANDLE)0x0) {
    SetEvent(DAT_18001e568);
                    /* WARNING: Could not recover jumptable at 0x000180012c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18001e568);
    return;
  }
  bVar1 = (byte)DAT_18001d018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180013770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18001d018 ^ _DAT_18001e578) >> bVar1 |
            (DAT_18001d018 ^ _DAT_18001e578) << 0x40 - bVar1))(&DAT_18001e560);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18001e568 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001e538);
    WaitForSingleObjectEx(DAT_18001e568,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180012c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001e538);
    return;
  }
  bVar1 = (byte)DAT_18001d018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180013770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18001d018 ^ _DAT_18001e570) >> bVar1 |
            (DAT_18001d018 ^ _DAT_18001e570) << 0x40 - bVar1))
            (&DAT_18001e560,&DAT_18001e538,param_1);
  return;
}




void FUN_180012ca0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180012ca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18001e580);
  return;
}




void FUN_180012cb0(void)

{
  __std_type_info_destroy_list(&DAT_18001e580);
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
  IStorageDevice *pIVar12;
  undefined7 uVar13;
  
  if (param_2 == 0) {
    pIVar12 = (IStorageDevice *)CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != (void *)0x0);
    if (DAT_18001e594 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18001e594 = DAT_18001e594 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18001e4f0 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c(pIVar12);
      FUN_180012cb0();
      FID_conflict__RTC_Initialize();
      DAT_18001e4f0 = 0;
      __scrt_dllmain_uninitialize_critical();
      uVar13 = (undefined7)((ulonglong)pIVar12 >> 8);
      __scrt_release_startup_lock((char)uVar8);
      cVar5 = __scrt_uninitialize_crt(CONCAT71(uVar13,param_3 != (void *)0x0),'\0');
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
    if (DAT_18001e4f0 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18001e4f0 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180012ca0();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_1800152b8,&DAT_1800152c8);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180015288,&DAT_1800152b0);
        DAT_18001e4f0 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180013620();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18001e594 = DAT_18001e594 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180012fe4) */
/* WARNING: Removing unreachable block (ram,0x000180012f73) */
/* WARNING: Removing unreachable block (ram,0x000180013027) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18001e594 < 1)) {
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




undefined8 * FUN_180013094(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800130d4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800130f4(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180013134(undefined8 *param_1)

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




undefined8 * FUN_1800131a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800131e4(void)

{
  undefined8 local_28 [5];
  
  FUN_1800130d4(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001b9b8);
}




void FUN_180013204(void)

{
  undefined8 local_28 [5];
  
  FUN_180013134(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001ba40);
}




char * FUN_180013224(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x00018001330e) */
/* WARNING: Removing unreachable block (ram,0x00018001328c) */
/* WARNING: Removing unreachable block (ram,0x000180013267) */
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
  
  DAT_18001d034 = 2;
  _DAT_18001d030 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18001d038 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18001e598 = DAT_18001e598 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18001e598 = DAT_18001e598 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18001d030 = 2;
    DAT_18001d034 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18001d034 = 0xe;
      _DAT_18001d030 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18001d030 = 5;
        DAT_18001d034 = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_1800133bc(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18001d040 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800133d0(void)

{
  _DAT_18001e59c = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x18001340b;
  FUN_1800133d0();
  *(undefined8 *)(puVar4 + -8) = 0x18001341c;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180013426;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180013440;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180013481;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1800134b3;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x1800134d5;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800134f6;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180013501;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180013511;
    FUN_1800133d0();
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18;
  
  if (DAT_18001d018 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18001d018 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18001d018 == 0x2b992ddfa232) {
      DAT_18001d018 = 0x2b992ddfa233;
    }
  }
  _DAT_18001d010 = ~DAT_18001d018;
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




undefined * FUN_1800135f4(void)

{
  return &DAT_18001e5a0;
}




undefined * FUN_1800135fc(void)

{
  return &DAT_18001e5a8;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1800135f4();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_1800135fc();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180013620(void)

{
  return &DAT_18001e5b0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1800180f8; puVar1 < &DAT_1800180f8; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180018108; puVar1 < &DAT_180018108; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180013750(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180013770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180013780(undefined8 param_1,longlong param_2)

{
  FUN_180001350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180013790(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_1800137b0(undefined8 param_1,longlong param_2)

{
  FUN_180002850((longlong *)(*(longlong *)(param_2 + 0x50) + 0x30));
  return;
}




void Catch_1800137c0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1800137f0(undefined8 param_1,longlong param_2)

{
  FUN_1800043f0(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180013820(undefined8 param_1,longlong param_2)

{
  FUN_1800043f0(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180013850(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0(*(longlong **)(param_2 + 0x58));
  return;
}




void Unwind_180013860(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((longlong *)(*(longlong *)(param_2 + 0x58) + 0x20));
  return;
}




void Catch_180013870(undefined8 param_1,longlong param_2)

{
  FUN_1800042c0(*(undefined8 *)(param_2 + 0x80),*(longlong *)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x98));
  deallocate(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x28),
             *(longlong *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800138c0(undefined8 param_1,longlong param_2)

{
  FUN_180002850((longlong *)(*(longlong *)(param_2 + 0x80) + 0x30));
  return;
}




void Catch_1800138d0(undefined8 param_1,longlong param_2)

{
  FUN_180004310(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0xa0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180013900(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_180013910(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((longlong *)(*(longlong *)(param_2 + 0x30) + 0x20));
  return;
}




void Unwind_180013920(undefined8 param_1,longlong param_2)

{
  FUN_180002790((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180013930(undefined8 param_1,longlong param_2)

{
  FUN_180002790((longlong *)(param_2 + 8));
  return;
}




void Unwind_180013940(undefined8 param_1,longlong param_2)

{
  FUN_180002850((longlong *)(*(longlong *)(param_2 + 0x30) + 0x30));
  return;
}




void Unwind_180013950(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_180013960(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




void Catch_180013970(undefined8 param_1,longlong param_2)

{
  FUN_180004460(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800139c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002740(*(longlong **)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_1800139d0(undefined8 param_1,longlong param_2)

{
  FUN_180002770(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1800139e0(undefined8 param_1,longlong param_2)

{
  FUN_1800026f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800139f0(undefined8 param_1,longlong param_2)

{
  FUN_180002770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180013a00(undefined8 param_1,longlong param_2)

{
  FUN_180002850((longlong *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}




void Unwind_180013a10(undefined8 param_1,longlong param_2)

{
  FUN_180002710(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180013a20(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002740(*(longlong **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_180013a30(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_180013a40(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_180013a50(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




undefined8 Catch_180013a60(void)

{
  return 0x180002b5c;
}




void Unwind_180013a80(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_180013a90(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0x130));
  return;
}




void Unwind_180013aa0(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_180013ab0(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0xd8));
  return;
}




void Unwind_180013ac0(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((longlong *)(param_2 + 0x98));
  return;
}




void Unwind_180013ad0(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0xf8));
  return;
}




void Unwind_180013ae0(undefined8 param_1,longlong param_2)

{
  FUN_1800029c0(param_2 + 0x150);
  return;
}




void Unwind_180013af0(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((longlong *)(param_2 + 0xd8));
  return;
}




void Unwind_180013b00(undefined8 param_1,longlong param_2)

{
  FUN_1800029c0(param_2 + 0x1a0);
  return;
}




void Unwind_180013b10(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0(*(longlong **)(param_2 + 0x58));
  return;
}




void Unwind_180013b20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_180002900((longlong *)(param_2 + 0xf8));
  }
  return;
}




void Unwind_180013b50(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((longlong *)(param_2 + 0x118));
  return;
}




void Unwind_180013b60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    FUN_1800028d0(param_2 + 0xb0);
  }
  return;
}




void Unwind_180013b90(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((longlong *)(param_2 + 0xb8));
  return;
}




void Unwind_180013ba0(undefined8 param_1,longlong param_2)

{
  FUN_180002850((longlong *)(param_2 + 0x180));
  return;
}




void Unwind_180013bb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
    FUN_180002900((longlong *)(param_2 + 0x1f0));
  }
  return;
}




void Unwind_180013be0(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0x1f0));
  return;
}




void Unwind_180013bf0(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((longlong *)(param_2 + 0x210));
  return;
}




void Unwind_180013c00(undefined8 param_1,longlong param_2)

{
  FUN_180002850((longlong *)(param_2 + 0x1d0));
  return;
}




void Unwind_180013c10(undefined8 param_1,longlong param_2)

{
  FUN_1800029c0(param_2 + 0x40);
  return;
}




void Unwind_180013c20(undefined8 param_1,longlong param_2)

{
  FUN_180002850((longlong *)(param_2 + 0x70));
  return;
}




undefined * Catch_180013c30(void)

{
  return &DAT_180003cc0;
}




void Unwind_180013c50(undefined8 param_1,longlong param_2)

{
  FUN_180002930((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180013c60(undefined8 param_1,longlong param_2)

{
  FUN_180002870((longlong *)(param_2 + 0x20));
  return;
}




void Unwind_180013c70(undefined8 param_1,longlong param_2)

{
  FUN_1800029c0(param_2 + 0x50);
  return;
}




void Unwind_180013c80(undefined8 param_1,longlong param_2)

{
  FUN_180002710((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_180013c90(undefined8 param_1,longlong param_2)

{
  FUN_1800026f0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_180013ca0(undefined8 param_1,longlong param_2)

{
  FUN_180002850((longlong *)(param_2 + 0x80));
  return;
}




void Catch_180013cb0(undefined8 param_1,longlong param_2)

{
  FUN_180005160(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180013ce0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x58),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180013d10(undefined8 param_1,longlong param_2)

{
  FUN_180005160(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180013d40(undefined8 param_1,longlong param_2)

{
  FUN_180002850((longlong *)(*(longlong *)(param_2 + 0x48) + 0x30));
  return;
}




void Unwind_180013d50(undefined8 param_1,longlong param_2)

{
  FUN_180002930((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180013d60(undefined8 param_1,longlong param_2)

{
  FUN_180002870((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180013d70(undefined8 param_1,longlong param_2)

{
  FUN_180002710((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180013d80(undefined8 param_1,longlong param_2)

{
  FUN_1800026f0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180013d90(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_180013db0(void)

{
  return 0x180005383;
}




void Catch_180013dd0(undefined8 param_1,longlong param_2)

{
  FUN_180007540(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x28));
  FUN_1800075a0(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
                *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180013e20(undefined8 param_1,longlong param_2)

{
  FUN_180005810((undefined8 *)(param_2 + 8));
  return;
}




void Unwind_180013e30(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x88));
  return;
}




undefined8 Catch_180013e50(void)

{
  return 0x180005aa2;
}




void Unwind_180013e70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800027e0((longlong *)(param_2 + 0x58));
  }
  return;
}




void Unwind_180013ea0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_1800027e0((longlong *)(param_2 + 0x38));
  }
  return;
}




undefined * Catch_180013ed0(void)

{
  return &DAT_180005e15;
}




void Unwind_180013ef0(undefined8 param_1,longlong param_2)

{
  FUN_1800058f0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_180013f00(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0xb8));
  return;
}




undefined * Catch_180013f20(void)

{
  return &DAT_180005f0b;
}




undefined8 Catch_180013f40(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    free(*(void **)(param_2 + 0x28));
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  if (*(void **)(param_2 + 0x30) != (void *)0x0) {
    free(*(void **)(param_2 + 0x30));
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  if (*(void **)(param_2 + 0x20) != (void *)0x0) {
    free(*(void **)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return 0x180006251;
}




undefined * Catch_180013fa0(void)

{
  return &DAT_180006604;
}




void Unwind_180013fc0(undefined8 param_1,longlong param_2)

{
  FUN_180002930((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180013fd0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}




void Unwind_180013ff0(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(*(longlong *)(param_2 + 0x80) + 0x88));
  return;
}




void Unwind_180014010(undefined8 param_1,longlong param_2)

{
  FUN_1800058f0((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_180014020(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0xb0));
  return;
}




void Unwind_180014030(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180014040(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180014050(undefined8 param_1,longlong param_2)

{
  FUN_180005850((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180014060(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_180014080(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0x158));
  return;
}




void Unwind_1800140a0(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(*(longlong *)(param_2 + 0x48) + 0x88));
  return;
}




void Unwind_1800140c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800027e0((longlong *)(param_2 + 0x90));
  }
  return;
}




void Unwind_1800140f0(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0(*(longlong **)(param_2 + 0x28));
  return;
}




void Unwind_180014100(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800027e0((longlong *)(param_2 + 0x48));
  }
  return;
}




void Unwind_180014130(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_1800027e0((longlong *)(param_2 + 0x48));
  }
  return;
}




void Unwind_180014160(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Catch_180014180(undefined8 param_1,longlong param_2)

{
  FUN_1800095d0(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1800141b0(undefined8 param_1,longlong param_2)

{
  FUN_1800095d0(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800141e0(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1800141f0(undefined8 param_1,longlong param_2)

{
  FUN_180007ce0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x38));
  return;
}




void Unwind_180014200(undefined8 param_1,longlong param_2)

{
  FUN_180007c90(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_180014210(undefined8 param_1,longlong param_2)

{
  FUN_180007cc0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_180014220(undefined8 param_1,longlong param_2)

{
  FUN_180007cc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180014230(undefined8 param_1,longlong param_2)

{
  FUN_180007c90(*(longlong **)(param_2 + 0x40));
  return;
}




undefined8 Catch_180014240(void)

{
  return 0x180007ee2;
}




undefined * Catch_180014260(void)

{
  return &DAT_1800082e4;
}




void Unwind_180014280(undefined8 param_1,longlong param_2)

{
  FUN_180007d10((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180014290(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_1800142a0(undefined8 param_1,longlong param_2)

{
  FUN_180007ce0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_1800142b0(undefined8 param_1,longlong param_2)

{
  FUN_180007c90(*(longlong **)(param_2 + 0x20));
  return;
}




void Unwind_1800142c0(undefined8 param_1,longlong param_2)

{
  FUN_180007cc0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined * Catch_1800142d0(void)

{
  return &DAT_180008440;
}




void Unwind_1800142f0(undefined8 param_1,longlong param_2)

{
  FUN_180007d10((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_180014300(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180014310(undefined8 param_1,longlong param_2)

{
  FUN_180007ce0((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_180014320(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x70));
  return;
}




void Unwind_180014340(undefined8 param_1,longlong param_2)

{
  FUN_180007d10((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_180014350(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0x110));
  return;
}




void Unwind_180014360(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_180014370(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0xd0));
  return;
}




void Unwind_180014380(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_1800143a0(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0x98));
  return;
}




void Unwind_1800143b0(undefined8 param_1,longlong param_2)

{
  FUN_180007ce0((longlong *)(param_2 + 0xb8));
  return;
}




void Unwind_1800143c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800027e0((longlong *)(param_2 + 0xf0));
  }
  return;
}




void Catch_1800143f0(undefined8 param_1,longlong param_2)

{
  FUN_180009980(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180014420(undefined8 param_1,longlong param_2)

{
  FUN_180009980(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180014450(undefined8 param_1,longlong param_2)

{
  FUN_180001350(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180014460(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_180014480(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




undefined * Catch_1800144a0(void)

{
  return &DAT_18000a13f;
}




undefined * Catch_1800144c0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x38))();
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return &DAT_18000a1dc;
}




undefined * Catch_180014500(void)

{
  return &DAT_18000a267;
}




void Catch_180014520(undefined8 param_1,longlong param_2)

{
  FUN_1800043f0(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180014550(undefined8 param_1,longlong param_2)

{
  FUN_18000c790(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_180014560(undefined8 param_1,longlong param_2)

{
  FUN_18000c7c0((longlong *)(*(longlong *)(param_2 + 0x30) + 0x20));
  return;
}




void Catch_180014570(undefined8 param_1,longlong param_2)

{
  FUN_18000d860(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x30));
  deallocate(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
             *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800145c0(undefined8 param_1,longlong param_2)

{
  FUN_18000c6d0(*(longlong **)(param_2 + 0x80));
  return;
}




void Catch_1800145d0(undefined8 param_1,longlong param_2)

{
  FUN_18000d8b0(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180014600(undefined8 param_1,longlong param_2)

{
  FUN_18000d8b0(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0xa0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180014630(undefined8 param_1,longlong param_2)

{
  FUN_18000c7c0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_180014640(undefined8 param_1,longlong param_2)

{
  FUN_18000c710((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180014650(undefined8 param_1,longlong param_2)

{
  FUN_18000c6d0(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_180014660(undefined8 param_1,longlong param_2)

{
  FUN_18000c6d0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_180014670(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c660(*(longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_180014680(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c760((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10),param_2,param_3,param_4);
  return;
}




void Unwind_180014690(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c6e0(*(longlong **)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_1800146a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c6e0(*(longlong **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_1800146b0(undefined8 param_1,longlong param_2)

{
  FUN_18000c6d0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1800146c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c660(0x18001d698,param_2,param_3,param_4);
  return;
}




void Unwind_1800146d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c760(&DAT_18001d6a8,param_2,param_3,param_4);
  return;
}




void Unwind_1800146e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c660(0x18001d6c0,param_2,param_3,param_4);
  return;
}




void Unwind_1800146f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c760(&DAT_18001d6d0,param_2,param_3,param_4);
  return;
}




void Unwind_180014700(undefined8 param_1,longlong param_2)

{
  FUN_18000c7c0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180014710(undefined8 param_1,longlong param_2)

{
  FUN_18000c6a0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180014720(undefined8 param_1,longlong param_2)

{
  FUN_18000c6d0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180014730(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180014740(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_180014760(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_180014780(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_1800147a0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_1800147c0(void)

{
  _Init_thread_abort(&DAT_18001d690);
  return;
}




void Unwind_1800147d0(void)

{
  _Init_thread_abort(&DAT_18001d6b8);
  return;
}




void Unwind_1800147e0(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_1800147f0(void)

{
  _Init_thread_abort(&DAT_18001d6e0);
  return;
}




void Unwind_180014800(undefined8 param_1,longlong param_2)

{
  FUN_18000c7c0((longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




void Unwind_180014810(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_180014830(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Unwind_180014840(undefined8 param_1,longlong param_2)

{
  FUN_1800027e0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void FUN_180014868(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18001487f(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18001489b(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_1800148e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000da40((longlong *)&DAT_18001d6a8,param_2,param_3,param_4);
  free(DAT_18001d6a8);
  return;
}




void FUN_180014920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000da40((longlong *)&DAT_18001d6d0,param_2,param_3,param_4);
  free(DAT_18001d6d0);
  return;
}



