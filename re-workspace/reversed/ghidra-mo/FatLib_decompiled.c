
/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x1000  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x1000  2  ??0IObject@@QEAA@AEBU0@@Z
                       0x1000  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IPartitionDevice::IPartitionDevice(class IPartitionDevice const & __ptr64)
   __ptr64 */

IPartitionDevice * __thiscall
IPartitionDevice::IPartitionDevice(IPartitionDevice *this,IPartitionDevice *param_1)

{
                    /* 0x1010  4  ??0IPartitionDevice@@QEAA@AEBV0@@Z
                       0x1010  5  ??0IPartitionDevice@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IStorageDevice::IStorageDevice(struct IStorageDevice && __ptr64) __ptr64 */

IStorageDevice * __thiscall
IStorageDevice::IStorageDevice(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x1020  6  ??0IStorageDevice@@QEAA@$$QEAU0@@Z
                       0x1020  7  ??0IStorageDevice@@QEAA@AEBU0@@Z
                       0x1020  8  ??0IStorageDevice@@QEAA@XZ */
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




void FUN_180001040(undefined8 *param_1)

{
  *param_1 = IDirectoryEntry::vftable;
  return;
}




/* public: virtual __cdecl IPartitionDevice::~IPartitionDevice(void) __ptr64 */

void __thiscall IPartitionDevice::~IPartitionDevice(IPartitionDevice *this)

{
                    /* 0x1050  9  ??1IPartitionDevice@@UEAA@XZ */
  *(undefined ***)this = vftable;
  return;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  undefined8 uVar1;
  
                    /* 0x1060  10  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x1070  11  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x1070  12  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x1070  13  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x1070  14  ??4IObject@@QEAAAEAU0@AEBU0@@Z
                       0x1070  15  ??4IPartitionDevice@@QEAAAEAV0@AEBV0@@Z
                       0x1070  16  ??4IStorageDevice@@QEAAAEAU0@$$QEAU0@@Z
                       0x1070  17  ??4IStorageDevice@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




undefined8 * FUN_180001080(undefined8 *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_(param_1,8,param_1[-1],IPartitionDevice::~IPartitionDevice);
    if ((param_2 & 1) != 0) {
      free(param_1 + -1);
    }
    return param_1 + -1;
  }
  *param_1 = IPartitionDevice::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CDirectoryEntry::vftable;
  *param_1 = IDirectoryEntry::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001170(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDirectoryEntry::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x11a0  22  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x0001800011a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




/* public: virtual int __cdecl IStorageDevice::ConvertVolume(void) __ptr64 */

int __thiscall IStorageDevice::ConvertVolume(IStorageDevice *this)

{
                    /* 0x11b0  27  ?ConvertVolume@IStorageDevice@@UEAAHXZ
                       0x11b0  28  ?DeviceIoControl@IStorageDevice@@UEAAHKPEAXK0KPEAK@Z
                       0x11b0  29  ?GetBitlockerInfo@IStorageDevice@@UEAAPEAUBitlockerInfo@@XZ
                       0x11b0  46  ?GetInformationOffset@IStorageDevice@@UEAAHQEA_K@Z
                       0x11b0  49  ?IsBitlockerVolume@IStorageDevice@@UEAAHXZ
                       0x11b0  54  ?SetBitlockerEnable@IStorageDevice@@UEAAHH@Z
                       0x11b0  55  ?SetBitlockerInfo@IStorageDevice@@UEAAHPEAUBitlockerInfo@@@Z
                       0x11b0  57  ?SetMetaFilePos@IStorageDevice@@UEAAHQEA_K_K@Z */
  return 0;
}




void FUN_1800011c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_448 [32];
  undefined8 local_428;
  undefined8 local_420;
  CHAR local_418;
  char acStack_417 [1007];
  ulonglong local_28;
  
  local_28 = DAT_180010038 ^ (ulonglong)auStack_448;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  memset(&local_418,0,1000);
  puVar2 = (undefined8 *)FUN_1800016e0();
  local_428 = 0;
  local_420 = &local_res10;
  __stdio_common_vsprintf_s(*puVar2,&local_418,1000,param_1);
  uVar1 = 0xffffffffffffffff;
  do {
    uVar3 = uVar1;
    uVar1 = uVar3 + 1;
  } while (acStack_417[uVar3] != '\0');
  if (((uVar3 + 1 < 3) || ((&local_418)[uVar3] != '\n')) ||
     (*(char *)((longlong)&local_420 + uVar3 + 7) != '\n')) {
    (acStack_417 + uVar3)[0] = '\r';
    (acStack_417 + uVar3)[1] = '\n';
    acStack_417[uVar3 + 2] = '\0';
  }
  OutputDebugStringA(&local_418);
  CLogWriter::Log(&local_418);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_448);
  return;
}




/* public: virtual int __cdecl IStorageDevice::GetBitlockerStatus(void) __ptr64 */

int __thiscall IStorageDevice::GetBitlockerStatus(IStorageDevice *this)

{
                    /* 0x12b0  30  ?GetBitlockerStatus@IStorageDevice@@UEAAHXZ */
  return -1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class IDirectoryEntry * __ptr64 __cdecl GetDirectoryEntryInstance(void) */

IDirectoryEntry * __cdecl GetDirectoryEntryInstance(void)

{
                    /* 0x12c0  31  ?GetDirectoryEntryInstance@@YAPEAVIDirectoryEntry@@XZ */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180010460) {
    _Init_thread_header(&DAT_180010460);
    if (DAT_180010460 == -1) {
      _DAT_180010458 = CDirectoryEntry::vftable;
      atexit(FUN_18000a500);
      _Init_thread_footer(&DAT_180010460);
      return (IDirectoryEntry *)&DAT_180010458;
    }
  }
  return (IDirectoryEntry *)&DAT_180010458;
}




undefined4 FUN_180001360(undefined8 param_1,longlong param_2)

{
  return CONCAT22(*(undefined2 *)(param_2 + 0x14),*(undefined2 *)(param_2 + 0x1a));
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1370  47  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180001373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




undefined1 FUN_180001380(undefined8 param_1,char *param_2)

{
  if ((*param_2 == '.') && (param_2[1] == ' ')) {
    return 1;
  }
  return 0;
}




bool FUN_1800013a0(undefined8 param_1,char *param_2)

{
  return *param_2 == -0x1b;
}




byte FUN_1800013b0(undefined8 param_1,longlong param_2)

{
  return *(byte *)(param_2 + 0xb) >> 4 & 1;
}




bool FUN_1800013c0(undefined8 param_1,char *param_2)

{
  return *param_2 == '\0';
}




bool FUN_1800013d0(undefined8 param_1,longlong param_2)

{
  return *(char *)(param_2 + 0xb) == '\x0f';
}




undefined1 FUN_1800013e0(undefined8 param_1,char *param_2)

{
  if (((*param_2 == '.') && (param_2[1] == '.')) && (param_2[2] == ' ')) {
    return 1;
  }
  return 0;
}




undefined1 FUN_180001400(undefined8 param_1,char *param_2)

{
  if ((((*param_2 == '.') && (param_2[1] == ' ')) && (param_2[0x20] == '.')) &&
     ((param_2[0x21] == '.' && (param_2[0x22] == ' ')))) {
    return 1;
  }
  return 0;
}




bool FUN_180001430(undefined8 param_1,longlong param_2)

{
  return *(char *)(param_2 + 0xb) == '\b';
}




void FUN_180001440(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00018000144e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,0,param_3,0x80);
  return;
}




void FUN_180001460(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00018000146c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,0,param_3,0x20);
  return;
}




undefined8
FUN_180001470(longlong *param_1,void *param_2,int param_3,longlong *param_4,uint param_5,
             char param_6)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  iVar4 = 0;
  if (0 < param_3) {
    do {
      uVar6 = 0x10;
      uVar5 = (ulonglong)param_5;
      iVar2 = (**(code **)(*param_4 + 8))(param_4,param_2);
      if (iVar2 == 0xf005) {
        return 0xf005;
      }
      cVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
        if (cVar1 != '\0') {
          memset(param_2,0,(longlong)(param_3 - iVar4) << 5);
          return 0;
        }
        cVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
        if ((cVar1 == '\0') &&
           (cVar1 = (**(code **)(*param_1 + 0x48))(param_1,param_2), cVar1 == '\0')) {
          cVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
          if (cVar1 == '\0') {
            uVar6 = 8;
          }
          else {
            pvVar3 = param_2;
            cVar1 = (**(code **)(*param_1 + 0x28))(param_1);
            if (cVar1 == '\0') {
              pvVar3 = param_2;
              cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
              if (cVar1 == '\0') {
                uVar6 = 4;
              }
              else {
                if ((iVar4 != 1) && (param_6 == '\0')) {
                  FUN_1800011c0("FDT is Error parent dir item.\n",pvVar3,uVar5,uVar6);
                  return 0xf173;
                }
                uVar6 = 2;
              }
            }
            else {
              if ((iVar4 != 0) && (param_6 == '\0')) {
                FUN_1800011c0("FDT is Error current dir item.\n",pvVar3,uVar5,uVar6);
                return 0xf172;
              }
              uVar6 = 1;
            }
          }
          uVar6 = (**(code **)(*param_4 + 8))(param_4,param_2,param_5,uVar6);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        }
      }
      iVar4 = iVar4 + 1;
      param_2 = (void *)((longlong)param_2 + 0x20);
    } while (iVar4 < param_3);
  }
  return 0;
}




void FUN_180001610(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x60))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3,0x40);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3,0x80);
      }
    }
  }
  return;
}




void FUN_180001690(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00018000169c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,0,param_3,0x40);
  return;
}




void FUN_1800016a0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001800016ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,0,param_3,0x100);
  return;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x16c0  52  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x0001800016c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




/* public: virtual void __cdecl IStorageDevice::ReleaseBitlocker(void) __ptr64 */

void __thiscall IStorageDevice::ReleaseBitlocker(IStorageDevice *this)

{
                    /* 0x16d0  53  ?ReleaseBitlocker@IStorageDevice@@UEAAXXZ */
  return;
}




undefined * FUN_1800016e0(void)

{
  return &DAT_180010450;
}




void FUN_1800016f0(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
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




/* unsigned long __cdecl CalcAllFatLogicalCluster(struct FATXDBR const & __ptr64,unsigned
   __int64,unsigned long) */

ulong __cdecl CalcAllFatLogicalCluster(FATXDBR *param_1,__uint64 param_2,ulong param_3)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
                    /* 0x1760  23  ?CalcAllFatLogicalCluster@@YAKAEBUFATXDBR@@_KK@Z */
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 < 3) {
    uVar1 = *(ushort *)(param_1 + 0xb);
    uVar4 = (ulonglong)uVar1;
    uVar5 = (uint)*(ushort *)(param_1 + 0x11);
    uVar6 = (uint)(byte)param_1[0xd] * (uint)uVar1;
    uVar3 = (ulonglong)((uint)*(ushort *)(param_1 + 0x16) * (uint)uVar1);
    uVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0xe) * (uint)uVar1);
    uVar8 = (uint)*(ushort *)(param_1 + 0x13);
    uVar2 = (uint)*(ushort *)(param_1 + 0x11);
    if (*(ushort *)(param_1 + 0x13) != 0) goto LAB_1800017e3;
  }
  else {
    if (param_3 != 3) {
      return 0;
    }
    uVar1 = *(ushort *)(param_1 + 0xb);
    uVar4 = (ulonglong)uVar1;
    uVar6 = (uint)(byte)param_1[0xd] * (uint)uVar1;
    uVar3 = (ulonglong)(*(int *)(param_1 + 0x24) * (uint)uVar1);
    uVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0xe) * (uint)uVar1);
    uVar2 = 0;
  }
  uVar5 = uVar2;
  uVar8 = *(uint *)(param_1 + 0x20);
LAB_1800017e3:
  if (uVar6 != 0) {
    if (((byte)param_1[0x10] * uVar3 + uVar7 + (ulonglong)(uVar5 << 5) <= param_2) &&
       (param_2 < uVar8 * uVar4)) {
      return (ulong)((((((ulonglong)(uVar6 * 2) - (byte)param_1[0x10] * uVar3) - uVar7) -
                      (ulonglong)(uVar5 << 5)) + param_2) / (ulonglong)uVar6);
    }
  }
  return 0;
}




/* unsigned __int64 __cdecl CalcAllFatLogicalOffset(struct FATXDBR const & __ptr64,unsigned
   long,unsigned long,unsigned long) */

__uint64 __cdecl CalcAllFatLogicalOffset(FATXDBR *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
                    /* 0x1840  24  ?CalcAllFatLogicalOffset@@YA_KAEBUFATXDBR@@KKK@Z */
  if ((1 < param_2) && (param_3 != 0)) {
    if (param_3 < 3) {
      uVar1 = *(ushort *)(param_1 + 0xb);
      uVar4 = (ulonglong)*(ushort *)(param_1 + 0x11);
      param_4 = (uint)(byte)param_1[0xd] * (uint)uVar1;
      uVar2 = (uint)*(ushort *)(param_1 + 0x16) * (uint)uVar1;
      uVar3 = (uint)*(ushort *)(param_1 + 0xe) * (uint)uVar1;
    }
    else {
      if (param_3 != 3) {
        return 0;
      }
      if (param_4 == 0) {
        uVar1 = *(ushort *)(param_1 + 0xb);
        param_4 = (uint)(byte)param_1[0xd] * (uint)uVar1;
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0xb);
      }
      uVar2 = *(int *)(param_1 + 0x24) * (uint)uVar1;
      uVar3 = (uint)*(ushort *)(param_1 + 0xe) * (uint)uVar1;
      uVar4 = 0;
    }
    return (ulonglong)(byte)param_1[0x10] * (ulonglong)uVar2 +
           (ulonglong)(param_2 - 2) * (ulonglong)param_4 + uVar4 * 0x20 + (ulonglong)uVar3;
  }
  return 0;
}




/* unsigned long __cdecl CalcFileAllocationTableSize(unsigned __int64,unsigned __int64,unsigned
   long,unsigned long,unsigned long,float,unsigned long) */

ulong __cdecl
CalcFileAllocationTableSize
          (__uint64 param_1,__uint64 param_2,ulong param_3,ulong param_4,ulong param_5,float param_6
          ,ulong param_7)

{
  longlong lVar1;
  float fVar2;
  
                    /* 0x18e0  25  ?CalcFileAllocationTableSize@@YAK_K0KKKMK@Z */
  if ((((param_4 != 0) && (param_7 != 0)) && (param_5 != 0)) &&
     ((param_6 <= -0.01 || (0.01 <= param_6)))) {
    lVar1 = (((ulonglong)(param_4 * 2) - (ulonglong)param_3) - param_2) + param_1;
    fVar2 = (float)lVar1;
    if (lVar1 < 0) {
      fVar2 = fVar2 + 1.8446744e+19;
    }
    return (ulong)(longlong)
                  ((fVar2 * param_6) / ((float)(param_4 * param_5) + (float)param_7 * param_6) + 1.0
                  );
  }
  return 0;
}




/* unsigned long __cdecl CalcPartitionTotalCluster(unsigned __int64,unsigned __int64,unsigned
   long,unsigned long,unsigned long,unsigned long,unsigned long) */

ulong __cdecl
CalcPartitionTotalCluster
          (__uint64 param_1,__uint64 param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6
          ,ulong param_7)

{
  ulong uVar1;
  float fVar2;
  
                    /* 0x19a0  26  ?CalcPartitionTotalCluster@@YAK_K0KKKKK@Z */
  if (param_5 == 0) {
    fVar2 = 1.5;
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((((param_1 - param_3 * param_6) - (ulonglong)param_4) - param_2) /
                   (ulonglong)param_5);
    if (uVar1 < 0xff5) {
      fVar2 = 1.5;
    }
    else if (uVar1 < 0xfff5) {
      fVar2 = 2.0;
    }
    else {
      fVar2 = 4.0;
    }
  }
  if ((float)(param_3 * param_7) < (float)(uVar1 + 2) * fVar2) {
    return (ulong)(longlong)((float)(param_3 * param_7) / fVar2 - 2.0);
  }
  return uVar1;
}




/* unsigned __int64 __cdecl GetEstimateFatPartitionNeedMinSector(unsigned long,unsigned
   long,unsigned long,unsigned long,unsigned long,unsigned long) */

__uint64 __cdecl
GetEstimateFatPartitionNeedMinSector
          (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
  ulong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  int iVar4;
  
                    /* 0x1a40  32  ?GetEstimateFatPartitionNeedMinSector@@YA_KKKKKKK@Z */
  iVar4 = (param_3 - param_2) * param_5;
  uVar1 = param_4;
  if (param_2 < param_3) {
    uVar1 = iVar4 + param_4;
  }
  _Var2 = GetFatPartitionNeedMinSector(param_1,(ulonglong)uVar1,param_3,param_6);
  uVar3 = (ulonglong)(param_4 + iVar4);
  if (param_3 <= param_2) {
    uVar3 = (ulonglong)param_4;
  }
  uVar3 = uVar3 / 5;
  if (0x20000 < (uint)uVar3) {
    uVar3 = 0x20000;
  }
  return uVar3 + _Var2;
}




/* unsigned long __cdecl GetFat16MaxSectorsLimitBySectorSize(unsigned long) */

ulong __cdecl GetFat16MaxSectorsLimitBySectorSize(ulong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulong *puVar3;
  
                    /* 0x1ac0  33  ?GetFat16MaxSectorsLimitBySectorSize@@YAKK@Z */
  uVar2 = 0;
  puVar3 = &DAT_18000b710;
  do {
    if (*puVar3 == param_1) {
      return (&DAT_18000b714)[uVar2 * 2];
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
    puVar3 = puVar3 + 2;
  } while (uVar1 == 0);
  return 0x7ff970;
}




int FUN_180001af0(int param_1,int param_2,uint param_3)

{
  switch(param_1) {
  case 1:
  case 2:
  case 4:
  case 8:
  case 0x10:
  case 0x20:
  case 0x40:
  case 0x80:
    return ((param_2 * 2 + 4U) / param_3) * 2 + 0x23 + param_1 * param_2;
  default:
    return 0;
  }
}




longlong FUN_180001bc0(uint param_1,uint param_2,uint param_3)

{
  switch(param_1) {
  case 1:
  case 2:
  case 4:
  case 8:
  case 0x10:
  case 0x20:
  case 0x40:
  case 0x80:
    return (ulonglong)(((param_2 * 4 + 8) / param_3) * 2 + 0x22) +
           (ulonglong)param_1 * (ulonglong)param_2;
  default:
    return 0;
  }
}




/* unsigned __int64 __cdecl GetFatDataAreaUsedSector(unsigned long,unsigned __int64,unsigned
   long,unsigned __int64,unsigned long) */

__uint64 __cdecl
GetFatDataAreaUsedSector
          (ulong param_1,__uint64 param_2,ulong param_3,__uint64 param_4,ulong param_5)

{
  __uint64 _Var1;
  
                    /* 0x1ca0  35  ?GetFatDataAreaUsedSector@@YA_KK_KK0K@Z */
  _Var1 = GetFatSystemUsedSector(param_1,param_2,param_3,param_5);
  _Var1 = param_4 - _Var1;
  if ((longlong)_Var1 < 0) {
    _Var1 = 0;
  }
  return _Var1;
}




/* unsigned __int64 __cdecl GetFatPartitionNeedMinSector(unsigned long,unsigned __int64,unsigned
   long,unsigned long) */

__uint64 __cdecl
GetFatPartitionNeedMinSector(ulong param_1,__uint64 param_2,ulong param_3,ulong param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
                    /* 0x1cd0  36  ?GetFatPartitionNeedMinSector@@YA_KK_KKK@Z */
  if (param_1 == 1) {
    if (param_3 != 0) {
      uVar1 = (longlong)((float)(param_2 / param_3 & 0xffffffff) * 1.5 + 4.0) & 0xffffffff;
      iVar2 = (int)(uVar1 / param_4);
      iVar3 = iVar2 + 1;
      if ((int)(uVar1 % (ulonglong)param_4) == 0) {
        iVar3 = iVar2;
      }
      param_2 = param_2 + 0x21 + (ulonglong)(uint)(iVar3 * 2);
    }
  }
  else if (param_1 == 2) {
    if (param_3 != 0) {
      fVar4 = (float)(param_2 / param_3 & 0xffffffff);
      uVar1 = (longlong)(fVar4 + fVar4 + 4.0) & 0xffffffff;
      iVar2 = (int)(uVar1 / param_4);
      iVar3 = iVar2 + 1;
      if ((int)(uVar1 % (ulonglong)param_4) == 0) {
        iVar3 = iVar2;
      }
      return param_2 + 0x21 + (ulonglong)(uint)(iVar3 * 2);
    }
  }
  else {
    if (param_1 != 3) {
      return 0;
    }
    if (param_3 != 0) {
      uVar1 = (longlong)((float)(param_2 / param_3 & 0xffffffff) * 4.0 + 8.0) & 0xffffffff;
      iVar2 = (int)(uVar1 / param_4);
      iVar3 = iVar2 + 1;
      if ((int)(uVar1 % (ulonglong)param_4) == 0) {
        iVar3 = iVar2;
      }
      return param_2 + 0x20 + (ulonglong)(uint)(iVar3 * 2);
    }
  }
  return param_2;
}




/* bool __cdecl GetFatPartitionUsedSpace(class IPartitionDevice * __ptr64,struct _FAT_PAR_USED_INFO
   & __ptr64,unsigned long) */

bool __cdecl
GetFatPartitionUsedSpace(IPartitionDevice *param_1,_FAT_PAR_USED_INFO *param_2,ulong param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 *_Memory;
  undefined8 *puVar13;
  void *pvVar14;
  void *pvVar15;
  uint *puVar16;
  ushort *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  ushort uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar30;
  uint local_278;
  uint local_270;
  uint local_26c;
  int local_268;
  undefined8 local_248;
  ushort uStack_23d;
  byte bStack_23b;
  ushort uStack_23a;
  byte local_238;
  ushort uStack_237;
  ushort uStack_235;
  ushort uStack_232;
  uint local_228;
  uint uStack_224;
  uint uStack_21c;
  ulonglong uVar29;
  
                    /* 0x1dd0  37
                       ?GetFatPartitionUsedSpace@@YA_NPEAVIPartitionDevice@@AEAU_FAT_PAR_USED_INFO@@K@Z
                        */
  if (param_1 == (IPartitionDevice *)0x0) {
    return false;
  }
  iVar7 = (**(code **)(*(longlong *)param_1 + 0x18))();
  if (iVar7 == 0) {
    return false;
  }
  iVar7 = (*(code *)**(undefined8 **)param_1)(param_1);
  _Memory = (undefined8 *)thunk_FUN_18000919c((longlong)iVar7);
  memset(&local_248,0,0x200);
  iVar7 = (**(code **)(*(longlong *)param_1 + 8))(param_1,_Memory,0,1);
  if (iVar7 == 0) {
    free(_Memory);
LAB_180001e55:
    (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
    return false;
  }
  if (_Memory != (undefined8 *)0x0) {
    lVar21 = 4;
    puVar13 = _Memory;
    puVar19 = &local_248;
    do {
      uVar2 = puVar13[1];
      uVar3 = puVar13[2];
      uVar4 = puVar13[3];
      *puVar19 = *puVar13;
      puVar19[1] = uVar2;
      uVar2 = puVar13[4];
      uVar5 = puVar13[5];
      puVar19[2] = uVar3;
      puVar19[3] = uVar4;
      uVar3 = puVar13[6];
      uVar4 = puVar13[7];
      puVar19[4] = uVar2;
      puVar19[5] = uVar5;
      uVar2 = puVar13[8];
      uVar5 = puVar13[9];
      puVar19[6] = uVar3;
      puVar19[7] = uVar4;
      uVar3 = puVar13[10];
      uVar4 = puVar13[0xb];
      puVar19[8] = uVar2;
      puVar19[9] = uVar5;
      uVar2 = puVar13[0xc];
      uVar5 = puVar13[0xd];
      puVar19[10] = uVar3;
      puVar19[0xb] = uVar4;
      uVar3 = puVar13[0xe];
      uVar4 = puVar13[0xf];
      puVar13 = puVar13 + 0x10;
      puVar19[0xc] = uVar2;
      puVar19[0xd] = uVar5;
      puVar19[0xe] = uVar3;
      puVar19[0xf] = uVar4;
      lVar21 = lVar21 + -1;
      puVar19 = puVar19 + 0x10;
    } while (lVar21 != 0);
  }
  free(_Memory);
  local_270 = 0;
  if (uStack_23d == 0) {
    return false;
  }
  if (param_3 == 0) goto LAB_180001e55;
  if (param_3 < 3) {
    local_26c = (uint)uStack_232;
    uVar22 = ((ulonglong)uStack_237 << 5) / (ulonglong)uStack_23d;
    local_268 = (int)uVar22;
    if (uStack_235 == 0) {
      uVar25 = 0;
      if (local_228 != 0) {
        uVar25 = local_228;
      }
    }
    else {
      uVar25 = (uint)uStack_235;
    }
  }
  else {
    if (param_3 != 3) goto LAB_180001e55;
    uVar22 = 0;
    local_26c = uStack_224;
    local_270 = uStack_21c;
    local_268 = 0;
    uVar25 = local_228;
  }
  if (uVar25 == 0) {
    return false;
  }
  if (local_238 == 0) {
    return false;
  }
  if (bStack_23b == 0) {
    return false;
  }
  if (local_26c == 0) {
    return false;
  }
  if ((ulonglong)uVar25 <
      (ulonglong)(uint)local_238 * (ulonglong)local_26c + (ulonglong)uStack_23a + uVar22) {
    return false;
  }
  uVar12 = (uint)uStack_23d;
  uVar22 = 0xa00000 / (ulonglong)uVar12;
  local_278 = 0;
  bVar6 = false;
  uVar29 = local_26c / uVar22;
  uVar23 = (ulonglong)local_26c % uVar22;
  uVar25 = (uint)uVar23;
  uVar28 = (uint)uVar29;
  iVar7 = (int)uVar22;
  if (uVar25 != 0) {
    pvVar14 = (void *)thunk_FUN_18000919c((ulonglong)uStack_23d);
    memset(pvVar14,0,(ulonglong)uStack_23d);
    pvVar15 = (void *)thunk_FUN_18000919c((ulonglong)(uStack_23d * uVar25));
    iVar8 = (**(code **)(*(longlong *)param_1 + 8))
                      (param_1,pvVar15,(uint)uStack_23a + uVar28 * iVar7,uVar23);
    if (iVar8 == 0) {
      (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
      free(pvVar15);
LAB_180002078:
      free(pvVar14);
      return false;
    }
    while (uVar25 != 0) {
      uVar25 = (int)uVar23 - 1;
      iVar8 = memcmp((void *)((ulonglong)(uVar25 * uVar12) + (longlong)pvVar15),pvVar14,
                     (ulonglong)uStack_23d);
      if (iVar8 != 0) {
        local_278 = uVar28 * iVar7 + (int)uVar23;
        bVar6 = true;
        break;
      }
      uVar23 = (ulonglong)uVar25;
    }
    free(pvVar15);
    free(pvVar14);
    if (bVar6) goto LAB_1800021cd;
  }
  uVar25 = (uint)uStack_23d * 8;
  pvVar14 = (void *)thunk_FUN_18000919c((ulonglong)uVar25);
  memset(pvVar14,0,(ulonglong)uVar25);
  pvVar15 = (void *)thunk_FUN_18000919c((ulonglong)((uint)uStack_23d * iVar7));
  while (uVar28 != 0) {
    uVar28 = (int)uVar29 - 1;
    uVar29 = (ulonglong)uVar28;
    iVar9 = (**(code **)(*(longlong *)param_1 + 8))
                      (param_1,pvVar15,(uint)uStack_23a + uVar28 * iVar7,uVar22);
    iVar8 = iVar7;
    if (iVar9 == 0) {
      (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
      free(pvVar15);
      free(pvVar14);
      return false;
    }
    while (iVar9 = iVar8, iVar9 != 0) {
      iVar10 = memcmp((void *)((ulonglong)((iVar9 + -8) * uVar12) + (longlong)pvVar15),pvVar14,
                      (ulonglong)uVar25);
      iVar8 = iVar9 + -8;
      if (iVar10 != 0) {
        local_278 = uVar28 * iVar7 + iVar9;
        goto LAB_1800021bd;
      }
    }
    if (bVar6) break;
  }
LAB_1800021bd:
  free(pvVar15);
  free(pvVar14);
LAB_1800021cd:
  uVar30 = 0;
  iVar8 = 0;
  iVar10 = 0;
  bVar6 = false;
  iVar7 = (int)(0x6400000 / (ulonglong)uVar12);
  uVar18 = iVar7 * uVar12;
  uVar25 = (uint)((ulonglong)local_278 / (0x6400000 / (ulonglong)uVar12));
  uVar24 = 0;
  uVar28 = local_270 / (uVar18 >> 2);
  iVar9 = local_278 - uVar25 * iVar7;
  local_270 = local_270 - (uVar28 * iVar7 * uVar12 >> 2);
  if (uVar25 != 0) {
    do {
      pvVar14 = (void *)thunk_FUN_18000919c((ulonglong)uVar18);
      if (pvVar14 == (void *)0x0) {
        return false;
      }
      iVar11 = (**(code **)(*(longlong *)param_1 + 8))
                         (param_1,pvVar14,uVar24 * iVar7 + (uint)uStack_23a,iVar7);
      if (iVar11 == 0) goto LAB_180002078;
      if (param_3 == 1) {
        uVar27 = 0;
        uVar20 = (uVar18 * 2) / 3;
        if (uVar20 != 0) {
          do {
            uVar1 = *(ushort *)((ulonglong)((uVar27 + 2) * 0xc >> 3) + (longlong)pvVar14);
            uVar26 = uVar1 >> 4;
            if ((uVar27 & 1) == 0) {
              uVar26 = uVar1 & 0xfff;
            }
            if ((uVar26 != 0) && (iVar10 = iVar10 + 1, 0xff7 < uVar26)) {
              iVar8 = iVar8 + 1;
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 < uVar20);
        }
      }
      else if (param_3 == 2) {
        if (uVar18 >> 1 != 0) {
          puVar17 = (ushort *)((longlong)pvVar14 + 4);
          uVar22 = (ulonglong)(uVar18 >> 1);
          do {
            if ((*puVar17 != 0) && (iVar10 = iVar10 + 1, 0xfff7 < *puVar17)) {
              iVar8 = iVar8 + 1;
            }
            puVar17 = puVar17 + 1;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
      }
      else {
        if (param_3 != 3) {
          (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
          free(pvVar14);
          return false;
        }
        if (uVar24 == uVar28) {
          if (*(int *)((longlong)pvVar14 + (ulonglong)local_270 * 4) == 0) {
            return false;
          }
          bVar6 = true;
        }
        uVar22 = (ulonglong)(uVar18 >> 2);
        if (uVar18 >> 2 != 0) {
          puVar16 = (uint *)((longlong)pvVar14 + 8);
          do {
            if ((*puVar16 != 0) && (iVar10 = iVar10 + 1, 0xffffff7 < *puVar16)) {
              iVar8 = iVar8 + 1;
            }
            puVar16 = puVar16 + 1;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
      }
      free(pvVar14);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar25);
  }
  if (iVar9 != 0) {
    uVar12 = iVar9 * uVar12;
    pvVar14 = (void *)thunk_FUN_18000919c((ulonglong)uVar12);
    if (pvVar14 == (void *)0x0) {
      return false;
    }
    iVar7 = (**(code **)(*(longlong *)param_1 + 8))
                      (param_1,pvVar14,(uint)uStack_23a + uVar25 * iVar7,iVar9);
    if (iVar7 == 0) {
      return false;
    }
    if (param_3 == 1) {
      uVar25 = (uVar12 * 2) / 3;
      if (uVar25 != 2) {
        do {
          uVar1 = *(ushort *)((ulonglong)((uVar30 + 2) * 0xc >> 3) + (longlong)pvVar14);
          uVar26 = uVar1 >> 4;
          if ((uVar30 & 1) == 0) {
            uVar26 = uVar1 & 0xfff;
          }
          if ((uVar26 != 0) && (iVar10 = iVar10 + 1, 0xff7 < uVar26)) {
            iVar8 = iVar8 + 1;
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar25 - 2);
      }
    }
    else if (param_3 == 2) {
      uVar25 = (uVar12 >> 1) - 2;
      if (uVar25 != 0) {
        puVar17 = (ushort *)((longlong)pvVar14 + 4);
        uVar22 = (ulonglong)uVar25;
        do {
          if ((*puVar17 != 0) && (iVar10 = iVar10 + 1, 0xfff7 < *puVar17)) {
            iVar8 = iVar8 + 1;
          }
          puVar17 = puVar17 + 1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
    }
    else {
      if (param_3 != 3) {
        (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
        free(pvVar14);
        return false;
      }
      if (((!bVar6) && (local_270 < uVar12 >> 2)) &&
         (*(int *)((longlong)pvVar14 + (ulonglong)local_270 * 4) == 0)) {
        return false;
      }
      uVar25 = (uVar12 >> 2) - 2;
      if (uVar25 != 0) {
        puVar16 = (uint *)((longlong)pvVar14 + 8);
        uVar22 = (ulonglong)uVar25;
        do {
          if ((*puVar16 != 0) && (iVar10 = iVar10 + 1, 0xffffff7 < *puVar16)) {
            iVar8 = iVar8 + 1;
          }
          puVar16 = puVar16 + 1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
    }
    free(pvVar14);
  }
  *(int *)(param_2 + 8) = iVar8;
  *(int *)(param_2 + 0xc) = iVar10;
  *(uint *)param_2 = iVar10 * (uint)bStack_23b;
  *(uint *)(param_2 + 4) =
       local_238 * local_26c + iVar10 * (uint)bStack_23b + (uint)uStack_23a + local_268;
  (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
  return true;
}




/* bool __cdecl GetFatResizeMoveLimit(unsigned long,unsigned long,unsigned long,unsigned
   long,unsigned long,struct _PAR_MAX_MIN_LIMIT * __ptr64,unsigned long) */

bool __cdecl
GetFatResizeMoveLimit
          (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
          _PAR_MAX_MIN_LIMIT *param_6,ulong param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulonglong uVar7;
  __uint64 _Var8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  longlong local_98;
  
                    /* 0x25f0  38  ?GetFatResizeMoveLimit@@YA_NKKKKKPEAU_PAR_MAX_MIN_LIMIT@@K@Z */
  uVar15 = 0;
  uVar12 = 1;
  local_98 = 8;
  uVar16 = 0xffffffff;
  do {
    if (param_1 == 1) {
      dVar17 = 4.5 / (double)(int)param_7 + 1.0;
      uVar5 = (int)(longlong)(dVar17 + dVar17 + 1.0 + 32.0) + uVar12;
      uVar10 = 0x13b0;
      if (0x13b0 < uVar5) {
        uVar10 = (ulonglong)uVar5;
      }
    }
    else if (param_1 == 2) {
      uVar4 = FUN_180001af0(uVar12,0xff5,param_7);
      uVar5 = 0x7e01;
      if (0x7e01 < uVar4) {
        uVar5 = uVar4;
      }
      uVar10 = (ulonglong)uVar5;
    }
    else if (param_1 == 3) {
      uVar7 = FUN_180001bc0(uVar12,0xfff5,param_7);
      uVar10 = 0x10bc0;
      if (0x10bc0 < uVar7) {
        uVar10 = uVar7;
      }
    }
    else {
      uVar10 = 0;
    }
    if (param_1 == 1) {
      dVar17 = 6129.0 / (double)(int)param_7 + 1.0;
      uVar5 = (int)(longlong)(dVar17 + dVar17 + 1.0 + 32.0) + uVar12 * 0xff4;
      if (0x7e00 < uVar5) {
        uVar5 = 0x7e00;
      }
      uVar7 = (ulonglong)uVar5;
    }
    else if (param_1 == 2) {
      uVar5 = FUN_180001af0(uVar12,0xfff4,param_7);
      if (0x7ff970 < uVar5) {
        uVar5 = 0x7ff970;
      }
      uVar7 = (ulonglong)uVar5;
    }
    else if (param_1 == 3) {
      uVar7 = FUN_180001bc0(uVar12,0x6000000,param_7);
      if (0xfffff7ff < uVar7) {
        uVar7 = 0xfffff7ff;
      }
    }
    else {
      uVar7 = 0;
    }
    iVar11 = (uVar12 - param_2) * param_4;
    uVar6 = param_3;
    if (param_2 < uVar12) {
      uVar6 = param_3 + iVar11;
    }
    _Var8 = GetFatPartitionNeedMinSector(param_1,(ulonglong)uVar6,uVar12,param_7);
    uVar5 = param_3 + iVar11;
    if (uVar12 <= param_2) {
      uVar5 = param_3;
    }
    uVar9 = (ulonglong)uVar5 / 5;
    if (0x20000 < (uint)uVar9) {
      uVar9 = 0x20000;
    }
    uVar9 = uVar9 + _Var8;
    uVar13 = uVar9;
    if (uVar9 <= uVar10) {
      uVar13 = uVar10;
    }
    if (uVar13 < 0x13b0) {
      uVar13 = 0x13b0;
    }
    if ((param_1 == 3) && (uVar13 < 0x10bc0)) {
      uVar13 = 0x10bc0;
    }
    uVar10 = uVar16;
    if ((((0x13af < uVar7) && (uVar14 = CONCAT44(0,param_5), uVar14 <= uVar7)) && (uVar9 <= uVar7))
       && (uVar13 <= uVar7)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar14;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar13;
      uVar5 = SUB164(auVar2 / auVar1,0);
      uVar4 = uVar5 + 1;
      if (SUB168(auVar2 / auVar1,0) == 0) {
        uVar4 = uVar5;
      }
      if (uVar4 <= (uint)(uVar7 / uVar14)) {
        uVar10 = uVar13;
        if (uVar16 <= uVar13) {
          uVar10 = uVar16;
        }
        if (uVar15 < uVar7) {
          uVar15 = uVar7;
        }
      }
    }
    uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
    local_98 = local_98 + -1;
    uVar16 = uVar10;
  } while (local_98 != 0);
  if ((uVar10 == 0xffffffff) || (uVar15 == 0)) {
    bVar3 = false;
  }
  else {
    *(ulonglong *)(param_6 + 8) = uVar15;
    *(ulonglong *)param_6 = uVar10;
    bVar3 = true;
  }
  return bVar3;
}




/* unsigned __int64 __cdecl GetFatSystemNeedMinUsedSector(unsigned long,unsigned __int64,unsigned
   long,unsigned long) */

__uint64 __cdecl
GetFatSystemNeedMinUsedSector(ulong param_1,__uint64 param_2,ulong param_3,ulong param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
                    /* 0x28f0  39  ?GetFatSystemNeedMinUsedSector@@YA_KK_KKK@Z */
  if (param_1 == 1) {
    if (param_3 != 0) {
      fVar4 = (float)(param_2 / param_3 & 0xffffffff) * 1.5;
LAB_180002982:
      uVar1 = (longlong)(fVar4 + 4.0) & 0xffffffff;
      iVar2 = (int)(uVar1 / param_4);
      iVar3 = iVar2 + 1;
      if ((int)(uVar1 % (ulonglong)param_4) == 0) {
        iVar3 = iVar2;
      }
      return (ulonglong)(uint)(iVar3 * 2) + 0x21;
    }
  }
  else if (param_1 == 2) {
    if (param_3 != 0) {
      fVar4 = (float)(param_2 / param_3 & 0xffffffff);
      fVar4 = fVar4 + fVar4;
      goto LAB_180002982;
    }
  }
  else if ((param_1 == 3) && (param_3 != 0)) {
    uVar1 = (longlong)((float)(param_2 / param_3 & 0xffffffff) * 4.0 + 8.0) & 0xffffffff;
    iVar2 = (int)(uVar1 / param_4);
    iVar3 = iVar2 + 1;
    if ((int)(uVar1 % (ulonglong)param_4) == 0) {
      iVar3 = iVar2;
    }
    return (ulonglong)(uint)(iVar3 * 2) + 0x20;
  }
  return 0;
}




/* unsigned __int64 __cdecl GetFatSystemUsedSector(unsigned long,unsigned long,unsigned long) */

__uint64 __cdecl GetFatSystemUsedSector(ulong param_1,ulong param_2,ulong param_3)

{
  double dVar1;
  
                    /* 0x29b0  40  ?GetFatSystemUsedSector@@YA_KKKK@Z */
  if (param_1 == 1) {
    dVar1 = ((double)param_2 * 1.5 + 3.0) / (double)(int)param_3 + 1.0;
    return (longlong)(dVar1 + dVar1 + 1.0 + 32.0) & 0xffffffff;
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      return 0;
    }
    return (ulonglong)(((param_2 * 4 + 8) / param_3) * 2 + 0x22);
  }
  return (ulonglong)(((param_2 * 2 + 4) / param_3) * 2 + 0x23);
}




/* unsigned __int64 __cdecl GetFatSystemUsedSector(unsigned long,unsigned __int64,unsigned
   long,unsigned long) */

__uint64 __cdecl GetFatSystemUsedSector(ulong param_1,__uint64 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  float fVar2;
  
                    /* 0x2a40  41  ?GetFatSystemUsedSector@@YA_KK_KKK@Z */
  if (param_1 == 1) {
    fVar2 = 1.5;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return 0;
      }
      uVar1 = CalcFileAllocationTableSize(param_2,0x20,0,param_3,param_4,4.0,2);
      return (ulonglong)(uVar1 * 2) + 0x20;
    }
    fVar2 = 2.0;
  }
  uVar1 = CalcFileAllocationTableSize(param_2,1,0x20,param_3,param_4,fVar2,2);
  return (ulonglong)(uVar1 * 2) + 0x21;
}




/* unsigned __int64 __cdecl GetFatTotalUsedSector(unsigned long,unsigned long,unsigned
   __int64,unsigned __int64,unsigned long,unsigned long,unsigned __int64,unsigned long,unsigned
   long) */

__uint64 __cdecl
GetFatTotalUsedSector
          (ulong param_1,ulong param_2,__uint64 param_3,__uint64 param_4,ulong param_5,ulong param_6
          ,__uint64 param_7,ulong param_8,ulong param_9)

{
  __uint64 _Var1;
  ulonglong uVar2;
  longlong lVar3;
  
                    /* 0x2ae0  42  ?GetFatTotalUsedSector@@YA_KKK_K0KK0KK@Z */
  _Var1 = GetFatSystemUsedSector(param_1,param_3,param_5,param_9);
  lVar3 = 0;
  if (-1 < (longlong)(param_7 - _Var1)) {
    lVar3 = param_7 - _Var1;
  }
  if (param_5 < param_6) {
    uVar2 = (ulonglong)((param_6 - param_5) * param_8);
  }
  else {
    uVar2 = -(ulonglong)((param_5 - param_6) * param_8);
  }
  _Var1 = GetFatSystemUsedSector(param_2,param_4,param_6,param_9);
  return _Var1 + uVar2 + lVar3;
}




/* unsigned long __cdecl GetFileSystemDefaultClusterSize(unsigned long,unsigned long,unsigned long)
    */

ulong __cdecl GetFileSystemDefaultClusterSize(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulonglong uVar2;
  
                    /* 0x2b70  43  ?GetFileSystemDefaultClusterSize@@YAKKKK@Z */
  uVar2 = (ulonglong)param_1;
  if (param_1 != 0) {
    if (param_2 == 1) {
      if (0xfff < param_1) {
        if (param_1 < 0x8000) {
          uVar1 = GetFileSystemDefaultClusterSizeNotChangeFileSystemType(uVar2,1,param_3);
          return uVar1;
        }
        uVar1 = GetFileSystemDefaultClusterSizeNotChangeFileSystemType(uVar2,2,param_3);
        return uVar1;
      }
    }
    else {
      if (param_2 == 2) {
        uVar1 = GetFileSystemDefaultClusterSizeNotChangeFileSystemType(uVar2,2,param_3);
        if (uVar1 == 0) {
          if (param_1 < 0x8000) {
            uVar1 = 1;
          }
          else {
            uVar1 = 3;
          }
          uVar1 = GetFileSystemDefaultClusterSizeNotChangeFileSystemType(uVar2,uVar1,param_3);
        }
        return uVar1;
      }
      if (param_2 == 3) {
        uVar1 = GetFileSystemDefaultClusterSizeNotChangeFileSystemType(uVar2,3,param_3);
        return uVar1;
      }
    }
  }
  return 0;
}




/* unsigned long __cdecl GetFileSystemDefaultClusterSizeNotChangeFileSystemType(unsigned
   __int64,unsigned long,unsigned long) */

ulong __cdecl
GetFileSystemDefaultClusterSizeNotChangeFileSystemType(__uint64 param_1,ulong param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  
                    /* 0x2c40  44
                       ?GetFileSystemDefaultClusterSizeNotChangeFileSystemType@@YAK_KKK@Z */
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (param_2 == 1) {
    if (0x6fff < param_1 - 0x1000) {
      return 0;
    }
    uVar3 = 8;
  }
  else if (param_2 == 2) {
    iVar2 = 0;
    puVar1 = &DAT_18000b658;
    do {
      if ((puVar1[-1] <= param_1) && (param_1 < *puVar1)) {
        uVar3 = (&DAT_18000b650)[(longlong)iVar2 * 3];
LAB_180002cf1:
        if (param_3 != 0x1000) {
          return uVar3;
        }
        if (uVar3 == 0x80) {
          return 0x40;
        }
        return uVar3;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 3;
    } while ((longlong)puVar1 < 0x18000b6b8);
  }
  else {
    if (param_2 != 3) {
      return 0;
    }
    iVar2 = 0;
    puVar1 = &DAT_18000b6b8;
    do {
      if ((puVar1[-1] <= param_1) && (param_1 < *puVar1)) {
        uVar3 = (&DAT_18000b6b0)[(longlong)iVar2 * 3];
        goto LAB_180002cf1;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 3;
      uVar3 = 0;
    } while ((longlong)puVar1 < 0x18000b718);
  }
  return uVar3;
}




/* unsigned long __cdecl GetFileSystemType(unsigned char * __ptr64) */

ulong __cdecl GetFileSystemType(uchar *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulong uVar3;
  uint uVar4;
  
                    /* 0x2d30  45  ?GetFileSystemType@@YAKPEAE@Z */
  uVar3 = 0xff;
  if (param_1 != (uchar *)0x0) {
    if (*(ushort *)(param_1 + 0x16) == 0) {
      uVar1 = *(uint *)(param_1 + 0x24);
    }
    else {
      uVar1 = (uint)*(ushort *)(param_1 + 0x16);
    }
    uVar4 = *(uint *)(param_1 + 0x20);
    if (uVar4 == 0) {
      uVar4 = (uint)*(ushort *)(param_1 + 0x13);
    }
    if ((*(ushort *)(param_1 + 0xb) != 0) && (param_1[0xd] != 0)) {
      uVar1 = (((uVar4 - (int)(((ulonglong)*(ushort *)(param_1 + 0x11) << 5) /
                              (ulonglong)*(ushort *)(param_1 + 0xb))) - param_1[0x10] * uVar1) -
              (uint)*(ushort *)(param_1 + 0xe)) / (uint)param_1[0xd];
      if (uVar1 < 0xff5) {
        uVar2 = FUN_180003110((longlong)param_1);
        if ((char)uVar2 != '\0') {
          return 1;
        }
        uVar2 = FUN_180003160((longlong)param_1);
        if ((char)uVar2 != '\0') {
          return 2;
        }
        uVar2 = FUN_1800031b0((longlong)param_1);
        if ((char)uVar2 != '\0') {
          return 3;
        }
      }
      else if (uVar1 < 0xfff5) {
        uVar2 = FUN_180003160((longlong)param_1);
        if ((char)uVar2 != '\0') {
          return 2;
        }
        uVar2 = FUN_1800031b0((longlong)param_1);
        if ((char)uVar2 != '\0') {
          return 3;
        }
        uVar2 = FUN_180003110((longlong)param_1);
        if ((char)uVar2 != '\0') {
          return 1;
        }
      }
      else if (uVar1 < 0xffffff0) {
        uVar2 = FUN_1800031b0((longlong)param_1);
        if ((char)uVar2 != '\0') {
          return 3;
        }
        uVar2 = FUN_180003160((longlong)param_1);
        if ((char)uVar2 != '\0') {
          return 2;
        }
        uVar2 = FUN_180003110((longlong)param_1);
        uVar3 = 0xff;
        if ((char)uVar2 != '\0') {
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}




/* unsigned __int64 __cdecl GetPartitionLimitSize(unsigned long,unsigned long,bool,unsigned long) */

__uint64 __cdecl GetPartitionLimitSize(ulong param_1,ulong param_2,bool param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  double dVar6;
  
                    /* 0x2e90  48  ?GetPartitionLimitSize@@YA_KKK_NK@Z */
  if (param_1 == 1) {
    if (param_3) {
      dVar6 = 4.5 / (double)(int)param_4 + 1.0;
      uVar1 = (int)(longlong)(dVar6 + dVar6 + 1.0 + 32.0) + param_2;
      uVar2 = 0x13b0;
      if (0x13b0 < uVar1) {
        uVar2 = uVar1;
      }
      return (ulonglong)uVar2;
    }
    dVar6 = 6129.0 / (double)(int)param_4 + 1.0;
    uVar2 = (int)(longlong)(dVar6 + dVar6 + 1.0 + 32.0) + param_2 * 0xff4;
    if (0x7e00 < uVar2) {
      uVar2 = 0x7e00;
    }
    return (ulonglong)uVar2;
  }
  if (param_1 == 2) {
    if (param_3) {
      uVar1 = FUN_180001af0(param_2,0xff5,param_4);
      uVar2 = 0x7e01;
      if (0x7e01 < uVar1) {
        uVar2 = uVar1;
      }
      return (ulonglong)uVar2;
    }
    uVar2 = FUN_180001af0(param_2,0xfff4,param_4);
    if (0x7ff970 < uVar2) {
      uVar2 = 0x7ff970;
    }
    return (ulonglong)uVar2;
  }
  if (param_1 != 3) {
    return 0;
  }
  if (param_3) {
    uVar3 = FUN_180001bc0(param_2,0xfff5,param_4);
    uVar5 = 0x10bc0;
    if (0x10bc0 < uVar3) {
      uVar5 = uVar3;
    }
    return uVar5;
  }
  _Var4 = FUN_180001bc0(param_2,0x6000000,param_4);
  if (0xfffff7ff < _Var4) {
    _Var4 = 0xfffff7ff;
  }
  return _Var4;
}




ulonglong FUN_180002fd0(int param_1,ulonglong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar8 = 0;
  uVar9 = 0;
  uVar5 = 0;
  if (param_1 == 1) {
    uVar5 = 0xff4;
    uVar9 = 0x200;
  }
  else if (param_1 == 2) {
    uVar5 = 0xfff4;
    uVar9 = 0xff5;
  }
  else if (param_1 == 3) {
    uVar5 = 0x4000000;
    uVar9 = 0xfff5;
  }
  iVar4 = 0;
  do {
    uVar7 = 1 << ((byte)iVar4 & 0x1f);
    if ((uint)(((param_2 - 0x8d) + uVar5) / uVar5) <= uVar7) goto LAB_180003061;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  uVar7 = 0x40000 / param_3;
LAB_180003061:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar9;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  uVar5 = SUB168(auVar2 / auVar1,0);
  iVar4 = 7;
  do {
    uVar6 = 1 << ((byte)iVar4 & 0x1f);
    if (uVar6 <= SUB164(auVar2 / auVar1,0)) {
      uVar5 = (ulonglong)uVar6;
      break;
    }
    iVar4 = iVar4 + -1;
  } while (0 < iVar4);
  if ((param_1 == 1) && (uVar7 < 2)) {
    uVar7 = 2;
  }
  if ((uVar7 <= (uint)uVar5) && (uVar7 * param_3 < 0x40001)) {
    piVar3 = &DAT_180010000;
    do {
      if (*piVar3 == param_1) break;
      iVar8 = iVar8 + 1;
      piVar3 = piVar3 + 3;
    } while ((longlong)piVar3 < 0x180010024);
    uVar5 = (ulonglong)((&DAT_180010004)[(longlong)iVar8 * 3] - 1);
    if (uVar5 < param_2) {
      uVar5 = (ulonglong)((&DAT_180010008)[(longlong)iVar8 * 3] + 1);
      if (param_2 < uVar5) {
        return CONCAT71((uint7)(uint3)((&DAT_180010008)[(longlong)iVar8 * 3] + 1 >> 8),1);
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}




ulonglong FUN_180003110(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong in_RAX;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar3 = *(byte *)(param_1 + 0xd) - 1;
    in_RAX = (ulonglong)uVar3;
    bVar1 = (byte)uVar3;
    if ((((bVar1 < 0x40) &&
         (in_RAX = (ulonglong)bVar1, (0x800000008000808bU >> (in_RAX & 0x3f) & 1) != 0)) ||
        (*(byte *)(param_1 + 0xd) == 0x80)) &&
       ((uVar2 = *(short *)(param_1 + 0x16) - 1, in_RAX = (ulonglong)uVar2, uVar2 < 200 &&
        (in_RAX = 0xaa55, *(short *)(param_1 + 0x1fe) == -0x55ab)))) {
      return 0xaa01;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180003160(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong in_RAX;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar2 = *(byte *)(param_1 + 0xd) - 1;
    in_RAX = (ulonglong)uVar2;
    bVar1 = (byte)uVar2;
    if ((((bVar1 < 0x40) &&
         (in_RAX = (ulonglong)bVar1, (0x800000008000808bU >> (in_RAX & 0x3f) & 1) != 0)) ||
        (*(byte *)(param_1 + 0xd) == 0x80)) &&
       ((*(short *)(param_1 + 0x16) != 0 &&
        (in_RAX = 0xaa55, *(short *)(param_1 + 0x1fe) == -0x55ab)))) {
      return 0xaa01;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_1800031b0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_1 + 0x52);
  if ((uVar3 == 0x2020203233544146) && (*(char *)(param_1 + 0x10) != '\0')) {
    uVar2 = *(byte *)(param_1 + 0xd) - 1;
    uVar3 = (ulonglong)uVar2;
    bVar1 = (byte)uVar2;
    if ((((bVar1 < 0x40) &&
         (uVar3 = (ulonglong)bVar1, (0x800000008000808bU >> (uVar3 & 0x3f) & 1) != 0)) ||
        (*(byte *)(param_1 + 0xd) == 0x80)) &&
       ((*(int *)(param_1 + 0x24) != 0 && (uVar3 = 0xaa55, *(short *)(param_1 + 0x1fe) == -0x55ab)))
       ) {
      return 0xaa01;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




/* bool __cdecl MyReadSector(struct IBlockDevice * __ptr64,unsigned char * __ptr64,unsigned
   __int64,unsigned __int64) */

bool __cdecl MyReadSector(IBlockDevice *param_1,uchar *param_2,__uint64 param_3,__uint64 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  
                    /* 0x3200  50  ?MyReadSector@@YA_NPEAUIBlockDevice@@PEAE_K2@Z */
  if (((param_1 != (IBlockDevice *)0x0) && (param_2 != (uchar *)0x0)) && (param_4 != 0)) {
    uVar8 = (uint)param_4 & 0x1ff;
    uVar5 = 0;
    uVar6 = param_4 >> 9;
    if ((uint)uVar6 != 0) {
      do {
        puVar1 = *(undefined8 **)param_1;
        lVar7 = (ulonglong)uVar5 * 0x200 + param_3;
        uVar2 = (*(code *)*puVar1)(param_1);
        iVar3 = (*(code *)puVar1[1])
                          (param_1,param_2 + (ulonglong)uVar2 * (ulonglong)uVar5 * 0x200,lVar7,0x200
                          );
        if (iVar3 == 0) {
          DVar4 = GetLastError();
          FUN_1800011c0("read sector error.start:%I64d,count:%d, ERROR: %d",lVar7,0x200,
                        (ulonglong)DVar4);
          return false;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)uVar6);
    }
    if ((param_4 & 0x1ff) != 0) {
      puVar1 = *(undefined8 **)param_1;
      lVar7 = (uVar6 & 0xffffffff) * 0x200 + param_3;
      uVar5 = (*(code *)*puVar1)(param_1);
      iVar3 = (*(code *)puVar1[1])
                        (param_1,param_2 + (ulonglong)uVar5 * (uVar6 & 0xffffffff) * 0x200,lVar7,
                         uVar8);
      if (iVar3 == 0) {
        DVar4 = GetLastError();
        FUN_1800011c0("read sector error.start:%I64d,count:%d, ERROR: %d",lVar7,(ulonglong)uVar8,
                      (ulonglong)DVar4);
        return false;
      }
    }
    return true;
  }
  return false;
}




/* bool __cdecl MyWriteSector(struct IBlockDevice * __ptr64,unsigned char * __ptr64,unsigned
   __int64,unsigned __int64) */

bool __cdecl MyWriteSector(IBlockDevice *param_1,uchar *param_2,__uint64 param_3,__uint64 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  
                    /* 0x3350  51  ?MyWriteSector@@YA_NPEAUIBlockDevice@@PEAE_K2@Z */
  if (((param_1 != (IBlockDevice *)0x0) && (param_2 != (uchar *)0x0)) && (param_4 != 0)) {
    uVar8 = (uint)param_4 & 0x1ff;
    uVar5 = 0;
    uVar6 = param_4 >> 9;
    if ((uint)uVar6 != 0) {
      do {
        puVar1 = *(undefined8 **)param_1;
        lVar7 = (ulonglong)uVar5 * 0x200 + param_3;
        uVar2 = (*(code *)*puVar1)(param_1);
        iVar3 = (*(code *)puVar1[2])
                          (param_1,param_2 + (ulonglong)uVar2 * (ulonglong)uVar5 * 0x200,lVar7,0x200
                          );
        if (iVar3 == 0) {
          DVar4 = GetLastError();
          FUN_1800011c0("write sector error.start:%I64d,count:%d, ERROR: %d",lVar7,0x200,
                        (ulonglong)DVar4);
          return false;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)uVar6);
    }
    if ((param_4 & 0x1ff) != 0) {
      puVar1 = *(undefined8 **)param_1;
      lVar7 = (uVar6 & 0xffffffff) * 0x200 + param_3;
      uVar5 = (*(code *)*puVar1)(param_1);
      iVar3 = (*(code *)puVar1[2])
                        (param_1,param_2 + (ulonglong)uVar5 * (uVar6 & 0xffffffff) * 0x200,lVar7,
                         uVar8);
      if (iVar3 == 0) {
        DVar4 = GetLastError();
        FUN_1800011c0("write sector error.start:%I64d,count:%d, ERROR: %d",lVar7,(ulonglong)uVar8,
                      (ulonglong)DVar4);
        return false;
      }
    }
    return true;
  }
  return false;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* bool __cdecl SetFatPartitionLable(class IPartitionDevice * __ptr64,unsigned char * __ptr64) */

bool __cdecl SetFatPartitionLable(IPartitionDevice *param_1,uchar *param_2)

{
  undefined5 uVar1;
  ushort uVar2;
  byte bVar3;
  bool bVar4;
  undefined1 extraout_AL;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *_Memory;
  ulonglong uVar11;
  ulonglong *_Memory_00;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  void *_Memory_01;
  longlong lVar16;
  char *pcVar17;
  ulonglong *_Dst;
  ulonglong *puVar18;
  undefined1 auStackY_1708 [32];
  uint local_16c0;
  uint local_16bc;
  ulong local_16b8;
  void *local_16b0;
  longlong lStack_16a8;
  longlong local_16a0;
  ulonglong local_1698;
  ulong local_1690;
  uchar *local_1688;
  undefined8 *local_1680;
  undefined8 local_1678;
  undefined8 local_1668;
  ushort uStack_165d;
  byte bStack_165b;
  ushort uStack_165a;
  byte bStack_1658;
  ushort uStack_1657;
  ushort uStack_1655;
  ushort uStack_1652;
  uint local_1648;
  uint uStack_1644;
  undefined4 uStack_1640;
  uint uStack_163c;
  ushort uStack_1636;
  IStorageDevice local_1468 [1056];
  undefined1 local_1048 [488];
  int local_e60;
  uint local_e5c;
  ulonglong local_48;
  undefined8 uStack_40;
  
                    /* 0x34a0  56  ?SetFatPartitionLable@@YA_NPEAVIPartitionDevice@@PEAE@Z */
  uStack_40 = 0x1800034be;
  local_1678 = 0xfffffffffffffffe;
  local_48 = DAT_180010038 ^ (ulonglong)auStackY_1708;
  local_1688 = param_2;
  if ((param_1 == (IPartitionDevice *)0x0) ||
     (iVar5 = (**(code **)(*(longlong *)param_1 + 0x18))(), iVar5 == 0)) goto LAB_180003fa1;
  memset(&local_1668,0,0x200);
  local_16b0 = (void *)0x0;
  lStack_16a8 = 0;
  puVar18 = (ulonglong *)0x0;
  local_16a0 = 0;
  bVar4 = VerifyFatPartitionDBR(param_1);
  puVar14 = *(undefined8 **)param_1;
  if (bVar4) {
    uVar6 = (*(code *)*puVar14)(param_1);
    _Memory = (char *)thunk_FUN_18000919c((ulonglong)uVar6);
    iVar5 = (**(code **)(*(longlong *)param_1 + 8))(param_1,_Memory,0,1);
    if (iVar5 == 0) {
LAB_180003f72:
      free(_Memory);
LAB_180003f77:
      puVar14 = *(undefined8 **)param_1;
      goto LAB_180003f7d;
    }
    lVar16 = 4;
    pcVar17 = _Memory;
    puVar14 = &local_1668;
    do {
      uVar12 = *(undefined8 *)(pcVar17 + 8);
      *puVar14 = *(undefined8 *)pcVar17;
      puVar14[1] = uVar12;
      uVar12 = *(undefined8 *)(pcVar17 + 0x18);
      puVar14[2] = *(undefined8 *)(pcVar17 + 0x10);
      puVar14[3] = uVar12;
      uVar12 = *(undefined8 *)(pcVar17 + 0x28);
      puVar14[4] = *(undefined8 *)(pcVar17 + 0x20);
      puVar14[5] = uVar12;
      uVar12 = *(undefined8 *)(pcVar17 + 0x38);
      puVar14[6] = *(undefined8 *)(pcVar17 + 0x30);
      puVar14[7] = uVar12;
      uVar12 = *(undefined8 *)(pcVar17 + 0x48);
      puVar14[8] = *(undefined8 *)(pcVar17 + 0x40);
      puVar14[9] = uVar12;
      uVar12 = *(undefined8 *)(pcVar17 + 0x58);
      puVar14[10] = *(undefined8 *)(pcVar17 + 0x50);
      puVar14[0xb] = uVar12;
      uVar12 = *(undefined8 *)(pcVar17 + 0x68);
      puVar14[0xc] = *(undefined8 *)(pcVar17 + 0x60);
      puVar14[0xd] = uVar12;
      uVar12 = *(undefined8 *)(pcVar17 + 0x78);
      puVar14[0xe] = *(undefined8 *)(pcVar17 + 0x70);
      puVar14[0xf] = uVar12;
      pcVar17 = pcVar17 + 0x80;
      lVar16 = lVar16 + -1;
      puVar14 = puVar14 + 0x10;
    } while (lVar16 != 0);
    free(_Memory);
    bVar3 = bStack_165b;
    uVar2 = uStack_165d;
    uVar10 = 0xff;
    local_1698 = CONCAT44(uStack_1640,uStack_1644);
    uVar6 = uStack_1644;
    if (uStack_1652 != 0) {
      uVar6 = (uint)uStack_1652;
    }
    uVar13 = CONCAT44(uStack_1644,local_1648);
    uVar8 = local_1648;
    if (local_1648 == 0) {
      uVar8 = (uint)uStack_1655;
    }
    uVar15 = CONCAT22(uStack_1655,uStack_1657);
    uVar11 = (ulonglong)
             CONCAT25(uStack_1655,CONCAT23(uStack_1657,CONCAT12(bStack_1658,uStack_165a)));
    if ((uStack_165d != 0) && (bStack_165b != 0)) {
      uVar6 = (((uVar8 - ((uint)uStack_1657 << 5) / (uint)uStack_165d) -
               ((uint)CONCAT23(uStack_1655,CONCAT21(uStack_1657,bStack_1658)) & 0xff) * uVar6) -
              (uint)uStack_165a) / (uint)bStack_165b;
      if (uVar6 < 0xff5) {
        uVar11 = FUN_180003110((longlong)&local_1668);
        if ((char)uVar11 == '\0') {
          uVar11 = FUN_180003160((longlong)&local_1668);
          if ((char)uVar11 == '\0') {
            uVar11 = FUN_1800031b0((longlong)&local_1668);
            if ((char)uVar11 != '\0') {
              uVar10 = 3;
            }
          }
          else {
            uVar10 = 2;
          }
        }
        else {
          uVar10 = 1;
        }
      }
      else if (uVar6 < 0xfff5) {
        uVar11 = FUN_180003160((longlong)&local_1668);
        if ((char)uVar11 == '\0') {
          uVar11 = FUN_1800031b0((longlong)&local_1668);
          if ((char)uVar11 == '\0') {
            uVar11 = FUN_180003110((longlong)&local_1668);
            if ((char)uVar11 != '\0') {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = 3;
          }
        }
        else {
          uVar10 = 2;
        }
      }
      else if (uVar6 < 0xffffff0) {
        uVar11 = FUN_1800031b0((longlong)&local_1668);
        if ((char)uVar11 == '\0') {
          uVar11 = FUN_180003160((longlong)&local_1668);
          if ((char)uVar11 == '\0') {
            uVar11 = FUN_180003110((longlong)&local_1668);
            uVar10 = 0xff;
            if ((char)uVar11 != '\0') {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = 2;
          }
        }
        else {
          uVar10 = 3;
        }
      }
      uVar11 = (ulonglong)CONCAT23(uStack_1657,CONCAT12(bStack_1658,uStack_165a));
      uVar15 = (uint)uStack_1657;
    }
    _Dst = (ulonglong *)0x0;
    if (2 < uVar10) {
      if (uVar10 == 3) {
        uVar11 = uVar11 & 0xffff;
        local_16bc = (uint)uVar11;
        local_16b8 = 0;
        goto LAB_1800037ce;
      }
      goto LAB_180003f77;
    }
    local_1698 = (ulonglong)uStack_1652;
    local_16bc = (uint)uVar11 & 0xffff;
    local_16b8 = ((uVar15 & 0xffff) << 5) / (uint)uVar2;
    if (uStack_1655 == 0) {
      uVar6 = 0;
      if (local_1648 != 0) {
        uVar6 = local_1648;
      }
      uVar13 = (ulonglong)uVar6;
    }
    else {
      uVar13 = (ulonglong)uStack_1655;
    }
    uVar11 = (ulonglong)(local_16b8 + local_16bc);
LAB_1800037ce:
    local_16c0 = (uint)bStack_1658;
    uVar7 = (*(code *)**(undefined8 **)param_1)(param_1);
    uVar7 = CalcPartitionTotalCluster
                      (uVar13 & 0xffffffff,(ulonglong)local_16bc,(ulong)local_1698,local_16b8,
                       (uint)bVar3,local_16c0,uVar7);
    local_1690 = uVar7;
    if (uVar10 < 3) {
      uVar6 = (uint)uStack_165d;
      local_1680 = (undefined8 *)(ulonglong)(uVar6 * local_16b8);
      _Memory = (char *)thunk_FUN_18000919c((__uint64)local_1680);
      memset(_Memory,0,(ulonglong)(uVar6 * local_16b8));
      iVar5 = (**(code **)(*(longlong *)param_1 + 8))(param_1,_Memory);
      _Memory_00 = puVar18;
      if (iVar5 != 0) {
LAB_180003a6c:
        bVar4 = false;
        iVar5 = 0;
        pcVar17 = _Memory;
        if (((ulonglong)local_1680 >> 5 & 0x7ffffff) != 0) {
          do {
            if ((pcVar17[0xb] == '\b') && (*pcVar17 != -0x1b)) {
              FUN_180004690(pcVar17,(char *)local_1688);
LAB_180003ac3:
              bVar4 = true;
              break;
            }
            if ((*pcVar17 == '\0') && (pcVar17[0xb] == '\0')) {
              FUN_180004690(pcVar17,(char *)local_1688);
              pcVar17[0xb] = '\b';
              goto LAB_180003ac3;
            }
            iVar5 = iVar5 + 1;
            pcVar17 = pcVar17 + 0x20;
          } while (iVar5 < (int)((uint)((ulonglong)local_1680 >> 5) & 0x7ffffff));
        }
        uVar13 = 0;
        if (uVar10 == 3) {
          if (bVar4) {
            _Dst = puVar18;
            if (lStack_16a8 - (longlong)local_16b0 >> 2 != 0) {
              do {
                uVar11 = 0;
                uVar6 = *(uint *)((longlong)local_16b0 + uVar13 * 4);
                uVar1 = CONCAT23(uStack_165a,CONCAT12(bStack_165b,uStack_165d));
                uVar10 = (uint)uVar1;
                if (1 < uVar6) {
                  uVar8 = uVar10 & 0xffff;
                  uVar11 = (ulonglong)(uVar6 - 2) * (ulonglong)(bStack_165b * uVar8) +
                           (ulonglong)bStack_1658 * (ulonglong)(uVar8 * uStack_1644) +
                           (ulonglong)(uStack_165a * uVar8);
                }
                iVar5 = (**(code **)(*(longlong *)param_1 + 0x10))
                                  (param_1,_Memory + (uVar10 & 0xffff) * (int)uVar13 * (uint)bVar3,
                                   uVar11 / ((ulonglong)CONCAT15(bStack_1658,uVar1) & 0xffff),bVar3)
                ;
                if (iVar5 == 0) goto LAB_180003f6a;
                uVar13 = (ulonglong)((int)uVar13 + 1);
              } while (uVar13 < (ulonglong)(lStack_16a8 - (longlong)local_16b0 >> 2));
            }
          }
          else {
            if (_Memory_00 == (ulonglong *)0x0) goto LAB_180003f6a;
            if (uVar7 != 0) {
LAB_180003c50:
              iVar5 = (int)uVar13;
              iVar9 = FUN_1800049e0((longlong *)_Memory_00,iVar5 + 2);
              if (iVar9 != 0) goto code_r0x000180003c60;
              uVar6 = iVar5 + 2;
              FUN_180005400((longlong *)_Memory_00,(ulonglong)uVar6,0xfffffff);
              FUN_180005400((longlong *)_Memory_00,
                            (ulonglong)
                            *(uint *)((longlong)local_16b0 +
                                     (lStack_16a8 - (longlong)local_16b0 >> 2) * 4 + -4),uVar6);
              _Dst = (ulonglong *)thunk_FUN_18000919c((ulonglong)((uint)bVar3 * (uint)uStack_165d));
              memset(_Dst,0,(ulonglong)((uint)uStack_165d * (uint)bVar3));
              FUN_180004690((char *)_Dst,(char *)local_1688);
              if (uVar6 < 2) {
                uVar13 = 0;
              }
              else {
                uVar10 = (uint)uStack_165d;
                uVar13 = (bStack_165b * uVar10) * uVar13 +
                         (ulonglong)bStack_1658 * (ulonglong)(uVar10 * uStack_1644) +
                         (ulonglong)(uStack_165a * uVar10);
              }
              iVar5 = (**(code **)(*(longlong *)param_1 + 0x10))
                                (param_1,_Dst,uVar13 / uStack_165d,bVar3);
              if (iVar5 == 0) {
                if (_Memory != (char *)0x0) {
                  free(_Memory);
                }
                if (_Dst != (ulonglong *)0x0) {
                  free(_Dst);
                }
                (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
                FUN_180004980((longlong *)_Memory_00);
                free(_Memory_00);
              }
              else {
                memset(local_1048,0,0x1000);
                iVar5 = (**(code **)(*(longlong *)param_1 + 8))(param_1,local_1048,1);
                if (iVar5 == 0) {
                  if (_Memory != (char *)0x0) {
                    free(_Memory);
                  }
                  if (_Dst != (ulonglong *)0x0) {
                    free(_Dst);
                  }
                  (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
                  FUN_180004980((longlong *)_Memory_00);
                  free(_Memory_00);
                }
                else {
                  local_e60 = local_e60 + -1;
                  while ((uVar10 = local_e5c, uVar6 < uVar7 &&
                         (iVar5 = FUN_1800049e0((longlong *)_Memory_00,uVar6), uVar10 = uVar6,
                         iVar5 != 0))) {
                    uVar6 = uVar6 + 1;
                  }
                  local_e5c = uVar10;
                  iVar5 = (**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_1048,1);
                  if (iVar5 != 0) {
                    iVar5 = (**(code **)(*(longlong *)param_1 + 0x10))
                                      (param_1,local_1048,uStack_1636 + 1,1);
                    if (iVar5 == 0) {
                      if (_Memory != (char *)0x0) {
                        free(_Memory);
                      }
                      if (_Dst != (ulonglong *)0x0) {
                        free(_Dst);
                      }
                      (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
                      FUN_180004980((longlong *)_Memory_00);
                      free(_Memory_00);
                      goto LAB_180003bed;
                    }
                    uVar12 = FUN_1800054b0((longlong *)_Memory_00,'\x01');
                    if ((char)uVar12 == '\0') {
                      if (_Memory != (char *)0x0) {
                        free(_Memory);
                      }
                      if (_Dst != (ulonglong *)0x0) {
                        free(_Dst);
                      }
                      FUN_180004980((longlong *)_Memory_00);
                      free(_Memory_00);
                      (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
                      goto LAB_180003bed;
                    }
                    goto LAB_180003bae;
                  }
                  if (_Memory != (char *)0x0) {
                    free(_Memory);
                  }
                  if (_Dst != (ulonglong *)0x0) {
                    free(_Dst);
                  }
                  (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
                  FUN_180004980((longlong *)_Memory_00);
                  free(_Memory_00);
                }
              }
              goto LAB_180003bed;
            }
          }
LAB_180003bae:
          if (_Memory != (char *)0x0) {
            free(_Memory);
          }
          if (_Dst != (ulonglong *)0x0) {
            free(_Dst);
          }
          if (_Memory_00 != (ulonglong *)0x0) {
            FUN_180004980((longlong *)_Memory_00);
            free(_Memory_00);
          }
          (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
          goto LAB_180003bed;
        }
        if (bVar4) {
          iVar5 = (**(code **)(*(longlong *)param_1 + 0x10))
                            (param_1,_Memory,local_16c0 * (ulong)local_1698 + local_16bc,local_16b8)
          ;
          if (iVar5 != 0) goto LAB_180003bae;
        }
      }
LAB_180003f6a:
      if (_Memory != (char *)0x0) goto LAB_180003f72;
      goto LAB_180003f77;
    }
    if (uVar10 != 3) goto LAB_180003f77;
    FUN_180008750((undefined8 *)local_1468);
    FUN_1800087e0((longlong)local_1468,&local_1668);
    FUN_180008850((longlong)local_1468,3);
    FUN_180008860((longlong)local_1468,uVar7);
    local_1680 = (undefined8 *)FUN_18000919c(0x20);
    if (local_1680 == (undefined8 *)0x0) {
      _Memory_00 = (ulonglong *)0x0;
    }
    else {
      _Memory_00 = FUN_180004960(local_1680,param_1,local_1468);
    }
    if (_Memory_00 != (ulonglong *)0x0) {
      uVar12 = FUN_180004c30((longlong *)_Memory_00,uVar11,(ulong)local_1698);
      if (((char)uVar12 != '\0') &&
         (uVar13 = FUN_180004a20(_Memory_00,uStack_163c,(longlong *)&local_16b0),
         (char)uVar13 != '\0')) {
        uVar6 = (int)(lStack_16a8 - (longlong)local_16b0 >> 2) * (uint)bStack_165b *
                (uint)uStack_165d;
        local_1680 = (undefined8 *)(ulonglong)uVar6;
        _Memory = (char *)thunk_FUN_18000919c((__uint64)local_1680);
        memset(_Memory,0,(ulonglong)uVar6);
        uVar13 = 0;
        if (lStack_16a8 - (longlong)local_16b0 >> 2 != 0) {
          do {
            iVar5 = (**(code **)(*(longlong *)param_1 + 8))
                              (param_1,_Memory + ((uint)CONCAT23(uStack_165a,
                                                                 CONCAT12(bStack_165b,uStack_165d))
                                                 & 0xffff) * (int)uVar13 * (uint)bVar3);
            if (iVar5 == 0) {
              if (_Memory != (char *)0x0) {
                free(_Memory);
              }
              (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
              goto LAB_1800038c9;
            }
            uVar13 = (ulonglong)((int)uVar13 + 1);
            uVar7 = local_1690;
          } while (uVar13 < (ulonglong)(lStack_16a8 - (longlong)local_16b0 >> 2));
        }
        IStorageDevice::ReleaseBitlocker(local_1468);
        goto LAB_180003a6c;
      }
      FUN_180004980((longlong *)_Memory_00);
      free(_Memory_00);
    }
LAB_1800038c9:
    IStorageDevice::ReleaseBitlocker(local_1468);
  }
  else {
LAB_180003f7d:
    (*(code *)puVar14[4])(param_1);
  }
LAB_180003bed:
  if (local_16b0 != (void *)0x0) {
    _Memory_01 = local_16b0;
    if ((0xfff < (local_16a0 - (longlong)local_16b0 & 0xfffffffffffffffcU)) &&
       (_Memory_01 = *(void **)((longlong)local_16b0 + -8),
       0x1f < (ulonglong)((longlong)local_16b0 + (-8 - (longlong)_Memory_01)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory_01);
    local_16b0 = (void *)0x0;
    lStack_16a8 = 0;
    local_16a0 = 0;
  }
LAB_180003fa1:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_1708);
  return (bool)extraout_AL;
code_r0x000180003c60:
  uVar13 = (ulonglong)(iVar5 + 1U);
  if (uVar7 <= iVar5 + 1U) goto LAB_180003bae;
  goto LAB_180003c50;
}




/* bool __cdecl SupportedClusterSize(unsigned long,unsigned __int64,unsigned long,unsigned long) */

bool __cdecl SupportedClusterSize(ulong param_1,__uint64 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  __uint64 _Var3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  
                    /* 0x3fd0  58  ?SupportedClusterSize@@YA_NK_KKK@Z */
  if (param_1 == 1) {
    fVar6 = 1.5;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return false;
      }
      fVar6 = 4.0;
      _Var3 = 0x20;
      uVar2 = 0;
      goto LAB_180004031;
    }
    fVar6 = 2.0;
  }
  _Var3 = 1;
  uVar2 = 0x20;
LAB_180004031:
  if (param_3 < 0x81) {
    uVar1 = CalcFileAllocationTableSize(param_2,_Var3,uVar2,param_3,param_4,fVar6,2);
    uVar2 = CalcPartitionTotalCluster(param_2,_Var3,uVar1,uVar2,param_3,2,param_4);
    if (param_1 == 1) {
      if (uVar2 - 1 < 0xff4) {
        return true;
      }
    }
    else {
      if (param_1 == 2) {
        bVar4 = uVar2 - 0xff5 < 0xefff;
        bVar5 = uVar2 - 0xff5 == 0xefff;
      }
      else {
        if (param_1 != 3) {
          return false;
        }
        bVar4 = uVar2 - 0xfff5 < 0x5ff000b;
        bVar5 = uVar2 - 0xfff5 == 0x5ff000b;
      }
      if (bVar4 || bVar5) {
        return true;
      }
    }
  }
  return false;
}




/* bool __cdecl SupportedClusterSizeList(unsigned __int64,unsigned __int64,unsigned long,unsigned
   long & __ptr64,unsigned long,unsigned long,unsigned long,unsigned long) */

bool __cdecl
SupportedClusterSizeList
          (__uint64 param_1,__uint64 param_2,ulong param_3,ulong *param_4,ulong param_5,
          ulong param_6,ulong param_7,ulong param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  __uint64 _Var5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  double dVar12;
  
                    /* 0x40d0  59  ?SupportedClusterSizeList@@YA_N_K0KAEAKKKKK@Z */
  uVar6 = 1;
  *param_4 = 0;
  if (((param_3 != 1) && (param_3 != 2)) && (param_3 != 3)) {
    return false;
  }
  uVar9 = 0;
  uVar10 = 0;
  do {
    if ((param_3 != 3) || (uVar6 != 0x80)) {
      if (param_3 == 1) {
        dVar12 = 4.5 / (double)(int)param_8 + 1.0;
        uVar3 = (int)(longlong)(dVar12 + dVar12 + 1.0 + 32.0) + uVar6;
        uVar8 = 0x13b0;
        if (0x13b0 < uVar3) {
          uVar8 = (ulonglong)uVar3;
        }
      }
      else if (param_3 == 2) {
        uVar2 = FUN_180001af0(uVar6,0xff5,param_8);
        uVar3 = 0x7e01;
        if (0x7e01 < uVar2) {
          uVar3 = uVar2;
        }
        uVar8 = (ulonglong)uVar3;
      }
      else if (param_3 == 3) {
        uVar4 = FUN_180001bc0(uVar6,0xfff5,param_8);
        uVar8 = 0x10bc0;
        if (0x10bc0 < uVar4) {
          uVar8 = uVar4;
        }
      }
      else {
        uVar8 = 0;
      }
      if (param_3 == 1) {
        dVar12 = 6129.0 / (double)(int)param_8 + 1.0;
        uVar3 = (int)(longlong)(dVar12 + dVar12 + 1.0 + 32.0) + uVar6 * 0xff4;
        if (0x7e00 < uVar3) {
          uVar3 = 0x7e00;
        }
        uVar4 = (ulonglong)uVar3;
      }
      else if (param_3 == 2) {
        uVar3 = FUN_180001af0(uVar6,0xfff4,param_8);
        if (0x7ff970 < uVar3) {
          uVar3 = 0x7ff970;
        }
        uVar4 = (ulonglong)uVar3;
      }
      else if (param_3 == 3) {
        uVar4 = FUN_180001bc0(uVar6,0x6000000,param_8);
        if (0xfffff7ff < uVar4) {
          uVar4 = 0xfffff7ff;
        }
      }
      else {
        uVar4 = 0;
      }
      uVar7 = (ulonglong)param_7;
      uVar11 = (ulonglong)param_7;
      if (uVar7 <= uVar8) {
        uVar11 = uVar8;
      }
      if (uVar7 <= uVar4) {
        uVar7 = uVar4;
      }
      bVar1 = SupportedClusterSize(param_3,uVar11,uVar6,param_8);
      if ((bVar1) && (bVar1 = SupportedClusterSize(param_3,uVar7,uVar6,param_8), bVar1)) {
        if (param_5 < uVar6) {
          uVar9 = (uVar6 - param_5) * param_6;
        }
        _Var5 = GetFatPartitionNeedMinSector(param_3,uVar9 + param_1,uVar6,param_8);
        if ((((_Var5 < param_2) && (uVar9 + param_1 < _Var5)) && (_Var5 < uVar7)) &&
           (uVar11 <= param_2)) {
          *param_4 = *param_4 | uVar6;
        }
      }
    }
    uVar10 = uVar10 + 1;
    uVar6 = 1 << ((byte)uVar10 & 0x1f);
  } while (uVar10 < 8);
  return true;
}




/* bool __cdecl SupportedPartitionSize(unsigned long & __ptr64,unsigned __int64,unsigned long) */

bool __cdecl SupportedPartitionSize(ulong *param_1,__uint64 param_2,ulong param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  int iVar3;
  
                    /* 0x43d0  60  ?SupportedPartitionSize@@YA_NAEAK_KK@Z */
  uVar1 = FUN_180002fd0(*param_1,param_2,param_3);
  if ((char)uVar1 == '\0') {
    iVar3 = 0;
    puVar2 = &DAT_180010008;
    while ((param_2 < puVar2[-1] || (*puVar2 < param_2))) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 3;
      if (0x18001002b < (longlong)puVar2) {
        return false;
      }
    }
    *param_1 = (&DAT_180010000)[(longlong)iVar3 * 3];
  }
  return true;
}




/* bool __cdecl SupportedPartitionSizeNotChangeFileSystemType(unsigned long,unsigned
   __int64,unsigned long) */

bool __cdecl
SupportedPartitionSizeNotChangeFileSystemType(ulong param_1,__uint64 param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 0;
  uVar8 = 0;
  uVar4 = 0;
  if (param_1 == 1) {
    uVar4 = 0xff4;
    uVar8 = 0x200;
  }
  else if (param_1 == 2) {
    uVar4 = 0xfff4;
    uVar8 = 0xff5;
  }
  else if (param_1 == 3) {
    uVar4 = 0x4000000;
    uVar8 = 0xfff5;
  }
  iVar3 = 0;
  do {
    uVar6 = 1 << ((byte)iVar3 & 0x1f);
    if ((uint)(((param_2 - 0x8d) + uVar4) / uVar4) <= uVar6) goto LAB_180003061;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  uVar6 = 0x40000 / param_3;
LAB_180003061:
  uVar1 = (uint)(param_2 / uVar8);
  iVar3 = 7;
  do {
    uVar5 = 1 << ((byte)iVar3 & 0x1f);
    if (uVar5 <= uVar1) break;
    iVar3 = iVar3 + -1;
    uVar5 = uVar1;
  } while (0 < iVar3);
  if ((param_1 == 1) && (uVar6 < 2)) {
    uVar6 = 2;
  }
  if ((uVar6 <= uVar5) && (uVar6 * param_3 < 0x40001)) {
    puVar2 = &DAT_180010000;
    do {
      if (*puVar2 == param_1) break;
      iVar7 = iVar7 + 1;
      puVar2 = puVar2 + 3;
    } while ((longlong)puVar2 < 0x180010024);
    if (((&DAT_180010004)[(longlong)iVar7 * 3] - 1 < param_2) &&
       (param_2 < (&DAT_180010008)[(longlong)iVar7 * 3] + 1)) {
      return true;
    }
  }
  return false;
}




/* bool __cdecl VerifyFatPartitionDBR(class IPartitionDevice * __ptr64) */

bool __cdecl VerifyFatPartitionDBR(IPartitionDevice *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uchar *_Memory;
  ulonglong uVar4;
  bool bVar5;
  
                    /* 0x4460  62  ?VerifyFatPartitionDBR@@YA_NPEAVIPartitionDevice@@@Z */
  if (param_1 == (IPartitionDevice *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)param_1 + 0x18))();
  if (iVar1 == 0) {
    return false;
  }
  uVar2 = (*(code *)**(undefined8 **)param_1)(param_1);
  _Memory = (uchar *)thunk_FUN_18000919c((ulonglong)uVar2);
  iVar1 = (**(code **)(*(longlong *)param_1 + 8))(param_1,_Memory,0,1);
  if ((iVar1 == 0) || (uVar3 = GetFileSystemType(_Memory), 2 < uVar3 - 1)) goto LAB_18000458b;
  if (uVar3 - 1 < 2) {
    if (*(short *)(_Memory + 0x16) == 0) goto LAB_18000458b;
    uVar2 = _Memory[0xd] - 1;
    if ((((0x3f < (byte)uVar2) ||
         ((0x800000008000808bU >> ((ulonglong)(uVar2 & 0xff) & 0x3f) & 1) == 0)) &&
        (_Memory[0xd] != 0x80)) ||
       (((*(short *)(_Memory + 0x11) == 0 || (*(short *)(_Memory + 0xe) == 0)) ||
        ((uVar2 = (*(code *)**(undefined8 **)param_1)(param_1), *(ushort *)(_Memory + 0xb) != uVar2
         || ((*(short *)(_Memory + 0x13) == 0 && (*(int *)(_Memory + 0x20) == 0))))))))
    goto LAB_18000458b;
    if (*(int *)(_Memory + 0x20) != 0) {
      uVar2 = (*(code *)**(undefined8 **)param_1)(param_1);
      if (*(ushort *)(_Memory + 0xe) + 0xff4 +
          (int)(((ulonglong)*(ushort *)(_Memory + 0x11) << 5) / (ulonglong)uVar2) +
          (uint)_Memory[0x10] * (uint)*(ushort *)(_Memory + 0x16) < *(uint *)(_Memory + 0x20))
      goto LAB_180004662;
      goto LAB_18000458b;
    }
    uVar2 = (*(code *)**(undefined8 **)param_1)();
    bVar5 = (uint)*(ushort *)(_Memory + 0xe) +
            (int)(((ulonglong)*(ushort *)(_Memory + 0x11) << 5) / (ulonglong)uVar2) +
            (uint)_Memory[0x10] * (uint)*(ushort *)(_Memory + 0x16) <
            (uint)*(ushort *)(_Memory + 0x13);
  }
  else {
    if (uVar3 != 3) goto LAB_180004662;
    if (*(int *)(_Memory + 0x24) == 0) goto LAB_18000458b;
    uVar2 = _Memory[0xd] - 1;
    if (((((0x3f < (byte)uVar2) ||
          ((0x800000008000808bU >> ((ulonglong)(uVar2 & 0xff) & 0x3f) & 1) == 0)) &&
         (_Memory[0xd] != 0x80)) ||
        ((*(int *)(_Memory + 0x2c) == 0 || (*(short *)(_Memory + 0xe) == 0)))) ||
       ((uVar2 = (*(code *)**(undefined8 **)param_1)(param_1), *(ushort *)(_Memory + 0xb) != uVar2
        || (*(int *)(_Memory + 0x20) == 0)))) goto LAB_18000458b;
    iVar1 = (*(code *)**(undefined8 **)param_1)(param_1);
    if (iVar1 == 0) {
      uVar4 = 0x200;
    }
    else {
      uVar2 = (*(code *)**(undefined8 **)param_1)(param_1);
      uVar4 = (ulonglong)uVar2;
    }
    if ((uint)(0x40000000 / uVar4) < *(uint *)(_Memory + 0x24)) goto LAB_18000458b;
    if (*(uint *)(_Memory + 0x20) == 0) goto LAB_180004662;
    bVar5 = (uint)_Memory[0x10] * *(uint *)(_Memory + 0x24) + 0xfff5 +
            (uint)*(ushort *)(_Memory + 0xe) < *(uint *)(_Memory + 0x20);
  }
  if (bVar5) {
LAB_180004662:
    free(_Memory);
    (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
    return true;
  }
LAB_18000458b:
  free(_Memory);
  return false;
}




void FUN_180004690(char *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  _SYSTEMTIME local_28;
  ulonglong local_18;
  
  local_18 = DAT_180010038 ^ (ulonglong)auStack_48;
  local_28.wYear = 0;
  local_28.wMonth = 0;
  local_28.wDayOfWeek = 0;
  local_28.wDay = 0;
  local_28.wHour = 0;
  local_28.wMinute = 0;
  local_28.wSecond = 0;
  local_28.wMilliseconds = 0;
  GetLocalTime(&local_28);
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_2[lVar2] != '\0');
  if (lVar2 == 0) goto LAB_18000482d;
  lVar2 = (longlong)param_1 - (longlong)param_2;
  do {
    cVar1 = *param_2;
    param_2[lVar2] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  bVar4 = *param_1 == '\0';
  if (bVar4) {
    *param_1 = ' ';
  }
  if (param_1[1] == '\0') {
    bVar4 = true;
LAB_180004715:
    param_1[1] = ' ';
  }
  else if (bVar4) goto LAB_180004715;
  if (param_1[2] == '\0') {
    bVar4 = true;
LAB_180004727:
    param_1[2] = ' ';
  }
  else if (bVar4) goto LAB_180004727;
  if (param_1[3] == '\0') {
    bVar4 = true;
LAB_180004739:
    param_1[3] = ' ';
  }
  else if (bVar4) goto LAB_180004739;
  if (param_1[4] == '\0') {
    bVar4 = true;
LAB_18000474b:
    param_1[4] = ' ';
  }
  else if (bVar4) goto LAB_18000474b;
  if (param_1[5] == '\0') {
    bVar4 = true;
LAB_18000475d:
    param_1[5] = ' ';
  }
  else if (bVar4) goto LAB_18000475d;
  if (param_1[6] == '\0') {
    bVar4 = true;
LAB_18000476f:
    param_1[6] = ' ';
  }
  else if (bVar4) goto LAB_18000476f;
  if (param_1[7] == '\0') {
    bVar4 = true;
LAB_180004781:
    param_1[7] = ' ';
  }
  else if (bVar4) goto LAB_180004781;
  if (param_1[8] == '\0') {
    bVar4 = true;
LAB_180004793:
    param_1[8] = ' ';
  }
  else if (bVar4) goto LAB_180004793;
  if (param_1[9] == '\0') {
    bVar4 = true;
LAB_1800047a5:
    param_1[9] = ' ';
  }
  else if (bVar4) goto LAB_1800047a5;
  if ((param_1[10] == '\0') || (bVar4)) {
    param_1[10] = ' ';
  }
  uVar3 = (local_28.wMinute & 0x2f | local_28.wHour << 6) << 5 | local_28.wSecond >> 1 & 0x1f;
  param_1[0xb] = '\b';
  *(ushort *)(param_1 + 0xe) = uVar3;
  *(ushort *)(param_1 + 0x16) = uVar3;
  uVar3 = ((local_28.wYear - 0x3c) * 0x10 | local_28.wMonth & 0xf) << 5 | local_28.wDay & 0x1f;
  *(ushort *)(param_1 + 0x10) = uVar3;
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  *(ushort *)(param_1 + 0x18) = uVar3;
  *(ushort *)(param_1 + 0x12) = uVar3;
LAB_18000482d:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
  return;
}




longlong FUN_180004850(longlong *param_1,void *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  void *_Src;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  longlong lVar5;
  void *_Dst_00;
  ulonglong uVar6;
  size_t _Size;
  longlong lVar7;
  
  lVar5 = *param_1;
  lVar7 = (longlong)param_2 - lVar5 >> 2;
  lVar3 = param_1[1] - lVar5 >> 2;
  if (lVar3 == 0x3fffffffffffffff) {
    FUN_180005cf0();
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  uVar1 = lVar3 + 1;
  uVar4 = param_1[2] - lVar5 >> 2;
  uVar6 = uVar1;
  if ((uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) && (uVar6 = (uVar4 >> 1) + uVar4, uVar6 < uVar1))
  {
    uVar6 = uVar1;
  }
  _Dst = (void *)FUN_180005d10(param_1,uVar6);
  *(undefined4 *)((longlong)_Dst + lVar7 * 4) = *param_3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst_00 = _Dst;
    param_2 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst_00 = (void *)((longlong)_Dst + (lVar7 + 1) * 4);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst_00,param_2,_Size);
  FID_conflict__Change_array(param_1,(longlong)_Dst,uVar1,uVar6);
  return *param_1 + lVar7 * 4;
}




undefined8 * FUN_180004960(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = 0;
  param_1[2] = param_3;
  param_1[3] = 2;
  return param_1;
}




void FUN_180004980(longlong *param_1)

{
  void *_Memory;
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  void *_Memory_00;
  
  pvVar1 = (void *)*param_1;
  if ((pvVar1 != (void *)0x0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) {
    uVar3 = 0;
    _Memory_00 = pvVar1;
    do {
      if (((*(byte *)(uVar3 * 0x20 + 0x18 + (longlong)pvVar1) & 1) == 0) &&
         (_Memory = *(void **)(uVar3 * 0x20 + 0x10 + (longlong)pvVar1), _Memory != (void *)0x0)) {
        free(_Memory);
        pvVar1 = (void *)*param_1;
        _Memory_00 = pvVar1;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x1c));
    free(_Memory_00);
  }
  return;
}




undefined4 FUN_1800049e0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 >> 0x12;
  uVar3 = param_2 + uVar4 * -0x40000;
  if (uVar4 <= *(uint *)((longlong)param_1 + 0x1c)) {
    lVar1 = *param_1;
    lVar2 = (ulonglong)uVar4 * 0x20;
    if (((*(byte *)(lVar1 + 0x18 + lVar2) & 1) == 0) && (uVar3 < *(uint *)(lVar1 + 8 + lVar2))) {
      return *(undefined4 *)(*(longlong *)(lVar1 + 0x10 + lVar2) + (ulonglong)uVar3 * 4);
    }
  }
  return 0;
}




ulonglong FUN_180004a20(ulonglong *param_1,uint param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint local_res8 [2];
  
  uVar8 = (ulonglong)param_2;
  iVar5 = FUN_180008790(param_1[2]);
  local_res8[0] = param_2;
  if (iVar5 != 1) {
    iVar5 = FUN_180008790(param_1[2]);
    uVar7 = CONCAT44(extraout_var,iVar5);
    if (iVar5 != 2) {
      puVar1 = (uint *)param_3[1];
      uVar8 = (ulonglong)(param_2 & 0x3ffff);
      if ((uint *)param_3[2] == puVar1) {
        uVar7 = FUN_180004850(param_3,puVar1,local_res8);
      }
      else {
        *puVar1 = param_2;
        param_3[1] = param_3[1] + 4;
      }
      if (param_2 >> 0x12 <= *(uint *)((longlong)param_1 + 0x1c)) {
        lVar2 = *(longlong *)((ulonglong)(param_2 >> 0x12) * 0x20 + 0x10 + *param_1);
        uVar7 = *param_1;
        if (lVar2 == 0) goto LAB_180004c13;
        uVar9 = *(uint *)(lVar2 + uVar8 * 4);
        if (uVar9 != 0xfffffff) {
          while (uVar7 = uVar8, 1 < uVar9) {
            lVar2 = param_3[1];
            lVar3 = *param_3;
            uVar6 = FUN_1800087d0(param_1[2]);
            uVar7 = (ulonglong)uVar6;
            if ((ulonglong)uVar6 <= (ulonglong)(lVar2 - lVar3 >> 2)) break;
            puVar1 = (uint *)param_3[1];
            local_res8[0] = uVar9;
            if ((uint *)param_3[2] == puVar1) {
              FUN_180004850(param_3,puVar1,local_res8);
            }
            else {
              *puVar1 = uVar9;
              param_3[1] = param_3[1] + 4;
            }
            uVar6 = uVar9 >> 0x12;
            uVar7 = (ulonglong)uVar6;
            if (*(uint *)((longlong)param_1 + 0x1c) < uVar6) break;
            lVar2 = *(longlong *)((ulonglong)uVar6 * 0x20 + 0x10 + *param_1);
            uVar7 = *param_1;
            if (lVar2 == 0) break;
            uVar6 = uVar9 & 0x3ffff;
            uVar8 = (ulonglong)uVar6;
            uVar9 = *(uint *)(lVar2 + uVar8 * 4);
            if (uVar9 == 0xfffffff) {
              return CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
            }
          }
          goto LAB_180004c13;
        }
        goto LAB_180004c0f;
      }
      goto LAB_180004c13;
    }
  }
  uVar7 = *param_1;
  if (((((*(byte *)(uVar7 + 0x18) & 1) == 0) && (lVar2 = *(longlong *)(uVar7 + 0x10), lVar2 != 0))
      && (1 < param_2)) && (param_2 < *(uint *)(uVar7 + 8))) {
    puVar1 = (uint *)param_3[1];
    if ((uint *)param_3[2] == puVar1) {
      FUN_180004850(param_3,puVar1,local_res8);
    }
    else {
      *puVar1 = param_2;
      param_3[1] = param_3[1] + 4;
    }
    uVar9 = *(uint *)(lVar2 + uVar8 * 4);
    while (uVar9 != 0xfffffff) {
      uVar7 = uVar8;
      if (uVar9 < 2) goto LAB_180004c13;
      lVar3 = param_3[1];
      lVar4 = *param_3;
      uVar6 = FUN_1800087d0(param_1[2]);
      uVar7 = (ulonglong)uVar6;
      if ((uVar7 <= (ulonglong)(lVar3 - lVar4 >> 2)) ||
         (uVar7 = *param_1, *(uint *)(uVar7 + 8) <= uVar9)) goto LAB_180004c13;
      puVar1 = (uint *)param_3[1];
      local_res8[0] = uVar9;
      if ((uint *)param_3[2] == puVar1) {
        FUN_180004850(param_3,puVar1,local_res8);
      }
      else {
        *puVar1 = uVar9;
        param_3[1] = param_3[1] + 4;
      }
      uVar8 = (ulonglong)uVar9;
      uVar9 = *(uint *)(lVar2 + uVar8 * 4);
    }
LAB_180004c0f:
    return CONCAT71((int7)(uVar8 >> 8),1);
  }
LAB_180004c13:
  return uVar7 & 0xffffffffffffff00;
}




undefined8 FUN_180004c30(longlong *param_1,__uint64 param_2,uint param_3)

{
  void *_Memory;
  undefined4 extraout_var;
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  void *_Memory_00;
  
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) {
    uVar3 = 0;
    _Memory_00 = pvVar4;
    do {
      if (((*(byte *)(uVar3 * 0x20 + 0x18 + (longlong)pvVar4) & 1) == 0) &&
         (_Memory = *(void **)(uVar3 * 0x20 + 0x10 + (longlong)pvVar4), _Memory != (void *)0x0)) {
        free(_Memory);
        pvVar4 = (void *)*param_1;
        _Memory_00 = pvVar4;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x1c));
    free(_Memory_00);
  }
  uVar2 = FUN_180008790(param_1[2]);
  if (uVar2 != 0) {
    if (uVar2 < 3) {
      uVar1 = FUN_1800051d0(param_1,param_2,param_3);
      return uVar1;
    }
    if (uVar2 == 3) {
      uVar1 = FUN_180004d00(param_1,param_2,param_3);
      return uVar1;
    }
  }
  return CONCAT71((int7)(CONCAT44(extraout_var,uVar2) >> 8),1);
}




undefined8 FUN_180004d00(longlong *param_1,__uint64 param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined6 extraout_var;
  __uint64 _Var11;
  void *pvVar12;
  uchar *_Memory;
  undefined8 uVar13;
  void *pvVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  __uint64 local_res10;
  uint local_res18;
  
  uVar19 = 0;
  uVar4 = FUN_180008780(param_1[2]);
  iVar10 = (int)CONCAT62(extraout_var,uVar4);
  uVar16 = CONCAT62(extraout_var,uVar4) & 0xffffffff;
  uVar18 = 0x100000 / uVar16;
  uVar16 = 0x6400000 / uVar16;
  iVar5 = FUN_1800087d0(param_1[2]);
  uVar6 = (uint)(param_3 / uVar18);
  *(uint *)((longlong)param_1 + 0x1c) = uVar6;
  if ((int)((ulonglong)param_3 % uVar18) != 0) {
    uVar6 = uVar6 + 1;
    *(uint *)((longlong)param_1 + 0x1c) = uVar6;
  }
  _Var11 = SUB168(ZEXT816(0x20) * ZEXT416(uVar6),0);
  if (SUB168(ZEXT816(0x20) * ZEXT416(uVar6),8) != 0) {
    _Var11 = 0xffffffffffffffff;
  }
  pvVar12 = operator_new(_Var11);
  *param_1 = (longlong)pvVar12;
  if (pvVar12 == (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    return 0;
  }
  memset(pvVar12,0,(ulonglong)*(uint *)((longlong)param_1 + 0x1c) << 5);
  pvVar12 = operator_new(0x100000);
  if (pvVar12 == (void *)0x0) {
    return 0;
  }
  memset(pvVar12,0,0x100000);
  uVar1 = (ulonglong)param_3 % uVar16;
  uVar7 = (uint)(param_3 / uVar16);
  uVar6 = uVar19;
  if ((uVar7 != 0) && (local_res18 = 0, uVar6 = 0, local_res10 = param_2, uVar7 != 0)) {
    do {
      _Memory = (uchar *)operator_new(0x6400000);
      if (_Memory == (uchar *)0x0) goto LAB_180004fd6;
      bVar3 = MyReadSector((IBlockDevice *)param_1[1],_Memory,local_res10,uVar16);
      if (!bVar3) goto LAB_180004fce;
      uVar22 = 0;
      uVar20 = uVar19 << 0x14;
      uVar6 = uVar19;
      do {
        puVar21 = (uint *)((ulonglong)uVar6 * 0x20 + *param_1);
        uVar19 = puVar21[6];
        iVar8 = memcmp(_Memory + (uVar22 << 0x14),pvVar12,0x100000);
        if (iVar8 == 0) {
          puVar21[4] = 0;
          puVar21[5] = 0;
          uVar19 = uVar19 | 1;
        }
        else {
          puVar21[6] = uVar19 & 0xfffffffe;
          pvVar14 = operator_new(0x100000);
          *(void **)(puVar21 + 4) = pvVar14;
          memcpy(pvVar14,_Memory + (uVar22 << 0x14),0x100000);
          puVar15 = *(uint **)(puVar21 + 4);
          lVar17 = 0x40000;
          do {
            if (0xffffff7 < *puVar15) {
              *puVar15 = 0xfffffff;
            }
            puVar15 = puVar15 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          uVar19 = puVar21[6];
        }
        uVar2 = uVar6 * 2;
        puVar21[1] = 0x40000;
        puVar21[2] = 0x40000;
        uVar6 = uVar6 + 1;
        puVar21[6] = uVar19 & 1 | uVar2;
        uVar19 = uVar20 >> 2;
        uVar20 = uVar20 + 0x100000;
        uVar22 = uVar22 + 1;
        *puVar21 = uVar19;
      } while (uVar22 < 100);
      free(_Memory);
      local_res18 = local_res18 + 1;
      param_2 = local_res10 + uVar16;
      uVar19 = uVar6;
      local_res10 = param_2;
    } while (local_res18 < uVar7);
  }
  if ((int)uVar1 == 0) {
LAB_180005187:
    free(pvVar12);
    FUN_180005400(param_1,0,0xfffffff8);
    FUN_180005400(param_1,1,0xffffffff);
    uVar13 = 1;
  }
  else {
    uVar19 = 0;
    iVar8 = (int)(uVar1 % uVar18);
    _Memory = (uchar *)operator_new((ulonglong)(uint)((int)uVar1 * iVar10));
    if (_Memory != (uchar *)0x0) {
      bVar3 = MyReadSector((IBlockDevice *)param_1[1],_Memory,param_2,uVar1);
      if (bVar3) {
        uVar7 = (uint)(uVar1 / uVar18);
        if (uVar7 != 0) {
          uVar20 = uVar6 << 0x14;
          do {
            puVar21 = (uint *)((ulonglong)uVar6 * 0x20 + *param_1);
            uVar22 = puVar21[6];
            iVar9 = memcmp(_Memory + (uVar19 << 0x14),pvVar12,0x100000);
            if (iVar9 == 0) {
              puVar21[4] = 0;
              puVar21[5] = 0;
              uVar22 = uVar22 | 1;
            }
            else {
              puVar21[6] = uVar22 & 0xfffffffe;
              pvVar14 = operator_new(0x100000);
              *(void **)(puVar21 + 4) = pvVar14;
              memcpy(pvVar14,_Memory + (uVar19 << 0x14),0x100000);
              puVar15 = *(uint **)(puVar21 + 4);
              lVar17 = 0x40000;
              do {
                if (0xffffff7 < *puVar15) {
                  *puVar15 = 0xfffffff;
                }
                puVar15 = puVar15 + 1;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              uVar22 = puVar21[6];
            }
            uVar2 = uVar6 * 2;
            puVar21[1] = 0x40000;
            puVar21[2] = 0x40000;
            uVar6 = uVar6 + 1;
            puVar21[6] = uVar22 & 1 | uVar2;
            uVar22 = uVar20 >> 2;
            uVar20 = uVar20 + 0x100000;
            uVar19 = uVar19 + 1;
            *puVar21 = uVar22;
          } while (uVar19 < uVar7);
        }
        if (iVar8 != 0) {
          uVar20 = iVar8 * iVar10;
          puVar21 = (uint *)((ulonglong)uVar6 * 0x20 + *param_1);
          uVar7 = puVar21[6];
          iVar10 = memcmp(_Memory + (uVar19 << 0x14),pvVar12,(ulonglong)uVar20);
          if (iVar10 == 0) {
            puVar21[4] = 0;
            puVar21[5] = 0;
            puVar21[6] = uVar7 | 1;
          }
          else {
            puVar21[6] = uVar7 & 0xfffffffe;
            pvVar14 = operator_new((ulonglong)uVar20);
            *(void **)(puVar21 + 4) = pvVar14;
            memcpy(pvVar14,_Memory + (uVar19 << 0x14),(ulonglong)uVar20);
            puVar15 = *(uint **)(puVar21 + 4);
            uVar18 = (ulonglong)(uVar20 >> 2);
            if (uVar20 >> 2 != 0) {
              do {
                if (0xffffff7 < *puVar15) {
                  *puVar15 = 0xfffffff;
                }
                puVar15 = puVar15 + 1;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
          }
          puVar21[6] = puVar21[6] & 1;
          puVar21[6] = puVar21[6] | uVar6 * 2;
          puVar21[1] = uVar20 >> 2;
          *puVar21 = (uVar6 << 0x14) >> 2;
          puVar21[2] = iVar5 + 2U & 0x3ffff;
        }
        free(_Memory);
        goto LAB_180005187;
      }
LAB_180004fce:
      free(_Memory);
    }
LAB_180004fd6:
    free(pvVar12);
    uVar13 = 0;
  }
  return uVar13;
}




ulonglong FUN_1800051d0(longlong *param_1,__uint64 param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined6 extraout_var;
  uchar *_Dst;
  undefined8 *_Dst_00;
  void *pvVar7;
  undefined8 extraout_RAX;
  uchar *extraout_RAX_00;
  uint *puVar8;
  ushort *puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar4 = FUN_180008780(param_1[2]);
  uVar5 = FUN_1800087d0(param_1[2]);
  uVar10 = (int)CONCAT62(extraout_var,uVar4) * param_3;
  uVar1 = uVar5 + 2;
  _Dst = (uchar *)operator_new((ulonglong)uVar10);
  if (_Dst != (uchar *)0x0) {
    memset(_Dst,0,(ulonglong)uVar10);
    bVar3 = MyReadSector((IBlockDevice *)param_1[1],_Dst,param_2,(ulonglong)param_3);
    if (bVar3) {
      iVar6 = FUN_180008790(param_1[2]);
      if (iVar6 == 1) {
        _Dst_00 = (undefined8 *)operator_new((ulonglong)(uVar10 * 3));
        if (_Dst_00 != (undefined8 *)0x0) {
          memset(_Dst_00,0,(ulonglong)(uVar10 * 3));
          uVar5 = 2;
          *_Dst_00 = 0xfffffffffffffff8;
          if (2 < uVar1) {
            puVar8 = (uint *)(_Dst_00 + 1);
            do {
              uVar10 = (uint)(*(ushort *)(_Dst + (uVar5 * 0xc >> 3)) >> 4);
              if ((uVar5 & 1) == 0) {
                uVar10 = *(ushort *)(_Dst + (uVar5 * 0xc >> 3)) & 0xfff;
              }
              if (uVar10 == 0) {
                *puVar8 = 0;
              }
              else if (uVar10 != 0xff7) {
                if (0xff7 < uVar10) {
                  uVar10 = 0xfffffff;
                }
                *puVar8 = uVar10;
              }
              uVar5 = uVar5 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar5 < uVar1);
          }
LAB_180005383:
          *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
          pvVar7 = operator_new(0x20);
          *param_1 = (longlong)pvVar7;
          *(uint *)((longlong)pvVar7 + 0x18) = *(uint *)((longlong)pvVar7 + 0x18) & 1;
          *(undefined4 *)*param_1 = 0;
          *(uint *)(*param_1 + 4) = uVar1;
          *(uint *)(*param_1 + 8) = uVar1;
          *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffffffe;
          *(undefined8 **)(*param_1 + 0x10) = _Dst_00;
          free(_Dst);
          return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
        }
      }
      else {
        _Dst_00 = (undefined8 *)operator_new((ulonglong)(uVar10 * 2));
        if (_Dst_00 != (undefined8 *)0x0) {
          memset(_Dst_00,0,(ulonglong)(uVar10 * 2));
          *_Dst_00 = 0xfffffffffffffff8;
          if (2 < uVar1) {
            puVar8 = (uint *)(_Dst_00 + 1);
            uVar11 = (ulonglong)uVar5;
            puVar9 = (ushort *)(_Dst + 4);
            do {
              uVar2 = *puVar9;
              if (uVar2 == 0) {
                *puVar8 = 0;
              }
              else if (uVar2 != 0xfff7) {
                if (uVar2 < 0xfff8) {
                  *puVar8 = (uint)uVar2;
                }
                else {
                  *puVar8 = 0xfffffff;
                }
              }
              puVar9 = puVar9 + 1;
              puVar8 = puVar8 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          goto LAB_180005383;
        }
      }
    }
    free(_Dst);
    _Dst = extraout_RAX_00;
  }
  return (ulonglong)_Dst & 0xffffffffffffff00;
}




ulonglong FUN_180005400(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  __uint64 _Size;
  uint uVar5;
  
  pvVar2 = (void *)(param_2 >> 0x12 & 0x3fff);
  uVar5 = (uint)param_2 & 0x3ffff;
  pvVar3 = pvVar2;
  if ((uint)pvVar2 <= *(uint *)((longlong)param_1 + 0x1c)) {
    pvVar3 = (void *)*param_1;
    lVar4 = (longlong)pvVar2 * 0x20;
    if ((*(byte *)(lVar4 + 0x18 + (longlong)pvVar3) & 1) == 0) {
      pvVar2 = *(void **)(lVar4 + 0x10 + (longlong)pvVar3);
    }
    else {
      _Size = (ulonglong)*(uint *)(lVar4 + 4 + (longlong)pvVar3) << 2;
      pvVar2 = operator_new(_Size);
      pvVar3 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_18000548f;
      memset(pvVar2,0,_Size);
      puVar1 = (uint *)(lVar4 + 0x18 + *param_1);
      *puVar1 = *puVar1 & 0xfffffffe;
      *(void **)(lVar4 + 0x10 + *param_1) = pvVar2;
      pvVar3 = (void *)*param_1;
    }
    if (uVar5 < *(uint *)(lVar4 + 8 + (longlong)pvVar3)) {
      *(undefined4 *)((longlong)pvVar2 + (ulonglong)uVar5 * 4) = param_3;
      return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
    }
  }
LAB_18000548f:
  return (ulonglong)pvVar3 & 0xffffffffffffff00;
}




ulonglong FUN_1800054b0(longlong *param_1,char param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  undefined6 extraout_var;
  longlong lVar9;
  ulonglong uVar10;
  ushort *_Dst;
  ulonglong extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  ulonglong extraout_RAX_01;
  ushort *extraout_RAX_02;
  ushort uVar11;
  ushort *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  __uint64 _Var18;
  uint uVar19;
  uint uVar20;
  uint local_res8;
  undefined6 extraout_var_00;
  
  uVar6 = FUN_1800087b0(param_1[2]);
  lVar9 = FUN_1800087a0((undefined8 *)param_1[2]);
  _Var18 = (CONCAT62(extraout_var,uVar6) & 0xffffffff) + lVar9;
  iVar8 = FUN_180008790(param_1[2]);
  if ((iVar8 == 1) || (iVar8 = FUN_180008790(param_1[2]), iVar8 == 2)) {
    uVar17 = FUN_1800087c0(param_1[2]);
    uVar6 = FUN_180008780(param_1[2]);
    _Dst = (ushort *)operator_new((ulonglong)(uVar17 * (int)CONCAT62(extraout_var_01,uVar6)));
    if (_Dst == (ushort *)0x0) goto LAB_180005c45;
    uVar17 = FUN_1800087c0(param_1[2]);
    uVar6 = FUN_180008780(param_1[2]);
    memset(_Dst,0,(ulonglong)(uVar17 * (int)CONCAT62(extraout_var_02,uVar6)));
    iVar8 = FUN_180008790(param_1[2]);
    puVar12 = *(ushort **)(*param_1 + 0x10);
    uVar17 = *(uint *)(*param_1 + 4);
    if (iVar8 == 1) {
      uVar20 = 2;
      *_Dst = *_Dst ^ (*puVar12 ^ *_Dst) & 0xfff;
      *(ushort *)((longlong)_Dst + 1) = puVar12[2] << 4 | *(ushort *)((longlong)_Dst + 1) & 0xf;
      if (2 < uVar17) {
        puVar14 = (uint *)(puVar12 + 4);
        do {
          uVar16 = *puVar14;
          if (uVar16 == 0) {
            uVar13 = (ulonglong)(uVar20 * 0xc >> 3);
            uVar7 = *(ushort *)(uVar13 + (longlong)_Dst);
            if ((uVar20 & 1) == 0) {
              uVar7 = uVar7 & 0xf000;
            }
            else {
              uVar7 = uVar7 & 0xf;
            }
            *(ushort *)(uVar13 + (longlong)_Dst) = uVar7;
          }
          else if (uVar16 != 0xffffff7) {
            uVar13 = (ulonglong)(uVar20 * 0xc >> 3);
            uVar7 = *(ushort *)(uVar13 + (longlong)_Dst);
            if (uVar16 < 0xffffff8) {
              uVar11 = (ushort)uVar16 & 0xfff;
              if ((uVar20 & 1) == 0) {
                *(ushort *)(uVar13 + (longlong)_Dst) = uVar7 & 0xf000 | uVar11;
              }
              else {
                *(ushort *)(uVar13 + (longlong)_Dst) = uVar7 & 0xf | uVar11 << 4;
              }
            }
            else if ((uVar20 & 1) == 0) {
              *(ushort *)(uVar13 + (longlong)_Dst) = uVar7 | 0xfff;
            }
            else {
              *(ushort *)(uVar13 + (longlong)_Dst) = uVar7 | 0xfff0;
            }
          }
          uVar20 = uVar20 + 1;
          puVar14 = puVar14 + 1;
        } while (uVar20 < uVar17);
      }
    }
    else {
      *_Dst = *puVar12;
      _Dst[1] = puVar12[2];
      if (2 < uVar17) {
        puVar14 = (uint *)(puVar12 + 4);
        puVar12 = _Dst + 2;
        uVar13 = (ulonglong)(uVar17 - 2);
        do {
          uVar17 = *puVar14;
          if (uVar17 == 0) {
            *puVar12 = 0;
          }
          else if (uVar17 != 0xffffff7) {
            if (0xffffff7 < uVar17) {
              uVar17 = 0xffff;
            }
            *puVar12 = (ushort)uVar17;
          }
          puVar14 = puVar14 + 1;
          puVar12 = puVar12 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    uVar17 = FUN_1800087c0(param_1[2]);
    bVar5 = MyWriteSector((IBlockDevice *)param_1[1],(uchar *)_Dst,_Var18,(ulonglong)uVar17);
    if (bVar5) {
      if (param_2 == '\x01') {
        uVar17 = FUN_1800087c0(param_1[2]);
        uVar20 = FUN_1800087c0(param_1[2]);
        bVar5 = MyWriteSector((IBlockDevice *)param_1[1],(uchar *)_Dst,_Var18 + uVar17,
                              (ulonglong)uVar20);
        if (!bVar5) goto LAB_180005c40;
      }
      free(_Dst);
      uVar13 = extraout_RAX_01;
LAB_180005c39:
      return CONCAT71((int7)(uVar13 >> 8),1);
    }
  }
  else {
    uVar6 = FUN_180008780(param_1[2]);
    uVar10 = CONCAT62(extraout_var_00,uVar6);
    iVar8 = 0;
    uVar17 = *(int *)((longlong)param_1 + 0x1c) - 1;
    uVar3 = 0x6400000 / (uVar10 & 0xffffffff);
    uVar20 = 0;
    local_res8 = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar10 & 0xffffffff;
    uVar2 = (ulonglong)
            ((int)(0x100000 / (uVar10 & 0xffffffff)) * uVar17 +
            SUB164((ZEXT416(*(uint *)((ulonglong)uVar17 * 0x20 + 4 + *param_1)) << 2) / auVar4,0));
    uVar13 = uVar2 / uVar3;
    uVar2 = uVar2 % uVar3;
    uVar17 = (uint)uVar13;
    if (uVar17 != 0) {
      do {
        _Dst = (ushort *)operator_new(0x6400000);
        if (_Dst == (ushort *)0x0) goto LAB_180005c45;
        uVar19 = 0;
        uVar16 = uVar20 + 2;
        do {
          lVar9 = (ulonglong)uVar20 * 0x20 + *param_1;
          if (((*(byte *)(lVar9 + 0x18) & 1) == 0) &&
             (pvVar1 = *(void **)(lVar9 + 0x10), pvVar1 != (void *)0x0)) {
            memcpy((void *)((longlong)_Dst + (ulonglong)(uVar19 << 0x14)),pvVar1,0x100000);
          }
          else {
            memset((void *)((longlong)_Dst + (ulonglong)(uVar19 << 0x14)),0,0x100000);
          }
          iVar15 = uVar19 * 0x100000;
          lVar9 = (ulonglong)(uVar16 - 1) * 0x20 + *param_1;
          if (((*(byte *)(lVar9 + 0x18) & 1) == 0) &&
             (pvVar1 = *(void **)(lVar9 + 0x10), pvVar1 != (void *)0x0)) {
            memcpy((void *)((ulonglong)(iVar15 + 0x100000) + (longlong)_Dst),pvVar1,0x100000);
          }
          else {
            memset((void *)((ulonglong)(iVar15 + 0x100000) + (longlong)_Dst),0,0x100000);
          }
          lVar9 = (ulonglong)uVar16 * 0x20 + *param_1;
          if (((*(byte *)(lVar9 + 0x18) & 1) == 0) &&
             (pvVar1 = *(void **)(lVar9 + 0x10), pvVar1 != (void *)0x0)) {
            memcpy((void *)((ulonglong)(iVar15 + 0x200000) + (longlong)_Dst),pvVar1,0x100000);
          }
          else {
            memset((void *)((ulonglong)(iVar15 + 0x200000) + (longlong)_Dst),0,0x100000);
          }
          lVar9 = (ulonglong)(uVar16 + 1) * 0x20 + *param_1;
          if (((*(byte *)(lVar9 + 0x18) & 1) == 0) &&
             (pvVar1 = *(void **)(lVar9 + 0x10), pvVar1 != (void *)0x0)) {
            memcpy((void *)((ulonglong)(iVar15 + 0x300000) + (longlong)_Dst),pvVar1,0x100000);
          }
          else {
            memset((void *)((ulonglong)(iVar15 + 0x300000) + (longlong)_Dst),0,0x100000);
          }
          lVar9 = (ulonglong)(uVar16 + 2) * 0x20 + *param_1;
          if (((*(byte *)(lVar9 + 0x18) & 1) == 0) &&
             (pvVar1 = *(void **)(lVar9 + 0x10), pvVar1 != (void *)0x0)) {
            memcpy((void *)((ulonglong)(iVar15 + 0x400000) + (longlong)_Dst),pvVar1,0x100000);
          }
          else {
            memset((void *)((ulonglong)(iVar15 + 0x400000) + (longlong)_Dst),0,0x100000);
          }
          lVar9 = (ulonglong)(uVar16 + 3) * 0x20 + *param_1;
          if (((*(byte *)(lVar9 + 0x18) & 1) == 0) &&
             (pvVar1 = *(void **)(lVar9 + 0x10), pvVar1 != (void *)0x0)) {
            memcpy((void *)((ulonglong)(iVar15 + 0x500000) + (longlong)_Dst),pvVar1,0x100000);
          }
          else {
            memset((void *)((ulonglong)(iVar15 + 0x500000) + (longlong)_Dst),0,0x100000);
          }
          lVar9 = (ulonglong)(uVar16 + 4) * 0x20 + *param_1;
          if (((*(byte *)(lVar9 + 0x18) & 1) == 0) &&
             (pvVar1 = *(void **)(lVar9 + 0x10), pvVar1 != (void *)0x0)) {
            memcpy((void *)((ulonglong)(iVar15 + 0x600000) + (longlong)_Dst),pvVar1,0x100000);
          }
          else {
            memset((void *)((ulonglong)(iVar15 + 0x600000) + (longlong)_Dst),0,0x100000);
          }
          lVar9 = (ulonglong)(uVar16 + 5) * 0x20 + *param_1;
          if (((*(byte *)(lVar9 + 0x18) & 1) == 0) &&
             (pvVar1 = *(void **)(lVar9 + 0x10), pvVar1 != (void *)0x0)) {
            memcpy((void *)((ulonglong)(iVar15 + 0x700000) + (longlong)_Dst),pvVar1,0x100000);
          }
          else {
            memset((void *)((ulonglong)(iVar15 + 0x700000) + (longlong)_Dst),0,0x100000);
          }
          lVar9 = (ulonglong)(uVar16 + 6) * 0x20 + *param_1;
          if (((*(byte *)(lVar9 + 0x18) & 1) == 0) &&
             (pvVar1 = *(void **)(lVar9 + 0x10), pvVar1 != (void *)0x0)) {
            memcpy((void *)((ulonglong)(iVar15 + 0x800000) + (longlong)_Dst),pvVar1,0x100000);
          }
          else {
            memset((void *)((ulonglong)(iVar15 + 0x800000) + (longlong)_Dst),0,0x100000);
          }
          lVar9 = (ulonglong)(uVar16 + 7) * 0x20 + *param_1;
          if (((*(byte *)(lVar9 + 0x18) & 1) == 0) &&
             (pvVar1 = *(void **)(lVar9 + 0x10), pvVar1 != (void *)0x0)) {
            memcpy((void *)((ulonglong)(iVar15 + 0x900000) + (longlong)_Dst),pvVar1,0x100000);
          }
          else {
            memset((void *)((ulonglong)(iVar15 + 0x900000) + (longlong)_Dst),0,0x100000);
          }
          uVar20 = uVar20 + 10;
          uVar16 = uVar16 + 10;
          uVar19 = uVar19 + 10;
        } while (uVar19 < 100);
        bVar5 = MyWriteSector((IBlockDevice *)param_1[1],(uchar *)_Dst,_Var18,uVar3);
        if (!bVar5) goto LAB_180005c40;
        if (param_2 == '\x01') {
          uVar16 = FUN_1800087c0(param_1[2]);
          bVar5 = MyWriteSector((IBlockDevice *)param_1[1],(uchar *)_Dst,uVar16 + _Var18,uVar3);
          if (!bVar5) goto LAB_180005c40;
        }
        free(_Dst);
        _Var18 = _Var18 + uVar3;
        local_res8 = local_res8 + 1;
        uVar13 = extraout_RAX;
      } while (local_res8 < uVar17);
    }
    if ((int)uVar2 == 0) goto LAB_180005c39;
    _Dst = (ushort *)operator_new((ulonglong)(uint)((int)uVar2 * (int)uVar10));
    if (_Dst == (ushort *)0x0) goto LAB_180005c45;
    iVar15 = *(int *)((longlong)param_1 + 0x1c);
    if (uVar20 < iVar15 - 1U) {
      do {
        lVar9 = (ulonglong)(iVar8 + uVar20) * 0x20 + *param_1;
        if (((*(byte *)(lVar9 + 0x18) & 1) == 0) &&
           (pvVar1 = *(void **)(lVar9 + 0x10), pvVar1 != (void *)0x0)) {
          memcpy((void *)((ulonglong)(uint)(iVar8 << 0x14) + (longlong)_Dst),pvVar1,0x100000);
        }
        else {
          memset((void *)((ulonglong)(uint)(iVar8 << 0x14) + (longlong)_Dst),0,0x100000);
        }
        iVar15 = *(int *)((longlong)param_1 + 0x1c);
        iVar8 = iVar8 + 1;
      } while (iVar8 + uVar20 < iVar15 - 1U);
    }
    lVar9 = (ulonglong)(iVar15 - 1) * 0x20 + *param_1;
    if (((*(byte *)(lVar9 + 0x18) & 1) == 0) && (*(void **)(lVar9 + 0x10) != (void *)0x0)) {
      memcpy((void *)((ulonglong)(uint)(iVar8 << 0x14) + (longlong)_Dst),*(void **)(lVar9 + 0x10),
             (ulonglong)*(uint *)(lVar9 + 4) << 2);
    }
    else {
      memset((void *)((ulonglong)(uint)(iVar8 << 0x14) + (longlong)_Dst),0,
             (ulonglong)*(uint *)(lVar9 + 4) << 2);
    }
    bVar5 = MyWriteSector((IBlockDevice *)param_1[1],(uchar *)_Dst,_Var18,uVar2);
    if (bVar5) {
      if (param_2 != '\x01') {
LAB_180005a10:
        free(_Dst);
        return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
      }
      uVar17 = FUN_1800087c0(param_1[2]);
      bVar5 = MyWriteSector((IBlockDevice *)param_1[1],(uchar *)_Dst,uVar17 + _Var18,uVar2);
      if (bVar5) goto LAB_180005a10;
    }
  }
LAB_180005c40:
  free(_Dst);
  _Dst = extraout_RAX_02;
LAB_180005c45:
  return (ulonglong)_Dst & 0xffffffffffffff00;
}




/* Library Function - Multiple Matches With Different Base Names
    private: void __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN *
   __ptr64> >::_Change_array(struct CHN * __ptr64 * __ptr64 const,unsigned __int64,unsigned __int64)
   __ptr64
    private: void __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::_Change_array(unsigned __int64 * __ptr64 const,unsigned __int64,unsigned __int64)
   __ptr64
    private: void __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::_Change_array(unsigned __int64 * __ptr64 const,unsigned __int64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void FID_conflict__Change_array
               (longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}




void FUN_180005cf0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180005d10(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 * 4;
  if (param_2 < 0x4000000000000000) {
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




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: static void __cdecl phmap::allocator_traits<class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>
   >::deallocate(class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M> &
   __ptr64,struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 4)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




void FUN_180005de0(undefined8 *param_1)

{
  *param_1 = IFileAllocateTable::vftable;
  return;
}




undefined8 * FUN_180005df0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CFileAllocateTable::vftable;
  *param_1 = IFileAllocateTable::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180005e40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IFileAllocateTable::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180005e70(undefined8 param_1,ushort *param_2,uint *param_3,uint param_4,int param_5)

{
  ushort uVar1;
  ulonglong in_RAX;
  uint *puVar2;
  ulonglong uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar3 = (ulonglong)param_4;
  if ((param_2 != (ushort *)0x0) && (param_3 != (uint *)0x0)) {
    if (param_5 == 1) {
      *param_3 = *param_2 & 0xfff;
      uVar5 = (uint)(*(ushort *)((longlong)param_2 + 1) >> 4);
      puVar2 = (uint *)(ulonglong)uVar5;
      param_3[1] = uVar5;
      uVar3 = 2;
      if (2 < param_4 + 2) {
        do {
          uVar7 = uVar3;
          uVar1 = *(ushort *)((ulonglong)((uint)((int)uVar7 * 0xc) >> 3) + (longlong)param_2);
          puVar2 = (uint *)(ulonglong)(uVar1 >> 4);
          if ((uVar7 & 1) == 0) {
            puVar2 = (uint *)(ulonglong)(uVar1 & 0xfff);
          }
          uVar5 = (uint)puVar2;
          if (uVar5 == 0) {
            uVar5 = 0;
          }
          else {
            if (uVar5 == 0xff7) goto LAB_180005f79;
            if (0xff7 < uVar5) {
              puVar2 = (uint *)0xfffffff;
            }
            uVar5 = (uint)puVar2;
          }
          uVar6 = (int)uVar7 + 1;
          param_3[uVar7] = uVar5;
          uVar3 = (ulonglong)uVar6;
          if (param_4 + 2 <= uVar6) {
            return CONCAT71((int7)(uVar7 >> 8),1);
          }
        } while( true );
      }
    }
    else if (param_5 == 2) {
      *param_3 = (uint)*param_2;
      puVar2 = (uint *)(ulonglong)param_2[1];
      uVar7 = 2;
      param_3[1] = (uint)param_2[1];
      if (2 < param_4 + 2) {
        puVar4 = param_2 + 2;
        puVar2 = param_3 + 2;
        do {
          uVar1 = *puVar4;
          uVar3 = (ulonglong)uVar1;
          if (uVar1 == 0) {
            *puVar4 = 0;
          }
          else {
            if (uVar1 == 0xfff7) goto LAB_180005f79;
            if (uVar1 < 0xfff8) {
              uVar3 = (ulonglong)uVar1;
              *puVar2 = (uint)uVar1;
            }
            else {
              uVar3 = 0xfffffff;
              *puVar2 = 0xfffffff;
            }
          }
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
          if (param_4 + 2 <= uVar5) {
            return CONCAT71((int7)(uVar3 >> 8),1);
          }
        } while( true );
      }
    }
    else {
      in_RAX = (ulonglong)(param_5 - 3U);
      if (param_5 - 3U != 0) goto LAB_180005f85;
      puVar2 = (uint *)memcpy(param_3,param_2,(ulonglong)(param_4 + 2) << 2);
      if (2 < param_4 + 2) {
        puVar2 = param_3 + 2;
        do {
          if (0xffffff7 < *puVar2) {
            *puVar2 = 0xfffffff;
          }
          puVar2 = puVar2 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
LAB_180005f85:
  return in_RAX & 0xffffffffffffff00;
LAB_180005f79:
  in_RAX = FUN_1800011c0("Has bad cluster.",uVar7,puVar2,0xfffffff);
  goto LAB_180005f85;
}




ulonglong FUN_180006040(undefined8 param_1,ushort *param_2,ushort *param_3,ulonglong param_4)

{
  ushort uVar1;
  uint uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((param_3 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    uVar6 = (int)param_4 + 2;
    *param_3 = *param_3 ^ (*param_2 ^ *param_3) & 0xfff;
    uVar3 = 0;
    *(ushort *)((longlong)param_3 + 1) = param_2[2] << 4 | *(ushort *)((longlong)param_3 + 1) & 0xf;
    uVar8 = 2;
    puVar5 = param_2;
    if (2 < uVar6) {
      do {
        uVar7 = (uint)uVar8;
        uVar2 = *(uint *)(param_2 + uVar8 * 2);
        if (uVar2 == 0) {
          puVar5 = (ushort *)((ulonglong)(uVar7 * 0xc >> 3) + (longlong)param_3);
          if ((uVar8 & 1) == 0) {
            uVar3 = (ulonglong)(*puVar5 & 0xf000);
          }
          else {
            uVar3 = (ulonglong)*puVar5 & 0xffffffffffff000f;
          }
        }
        else {
          if (uVar2 == 0xffffff7) {
            uVar3 = FUN_1800011c0("Has bad cluster.",puVar5,uVar8,param_4);
            return uVar3 & 0xffffffffffffff00;
          }
          param_4 = (ulonglong)(uVar7 & 1);
          puVar5 = (ushort *)((ulonglong)(uVar7 * 0xc >> 3) + (longlong)param_3);
          uVar1 = *puVar5;
          if (uVar2 < 0xffffff8) {
            uVar4 = (ushort)uVar2 & 0xfff;
            if ((uVar8 & 1) == 0) {
              uVar3 = (ulonglong)(uVar1 & 0xf000 | uVar4);
            }
            else {
              uVar3 = (ulonglong)(ushort)(uVar1 & 0xf | uVar4 << 4);
            }
          }
          else {
            uVar4 = uVar1 | 0xfff;
            if ((uVar8 & 1) != 0) {
              uVar4 = uVar1 | 0xfff0;
            }
            uVar3 = (ulonglong)uVar4;
          }
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        *puVar5 = (ushort)uVar3;
      } while (uVar7 + 1 < uVar6);
    }
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180006190(undefined8 param_1,ushort *param_2,ushort *param_3,ulonglong param_4,
                       int param_5)

{
  ulonglong in_RAX;
  void *pvVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort *puVar5;
  uint uVar6;
  
  if ((param_3 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    if (param_5 == 1) {
      uVar4 = FUN_180006040(param_1,param_2,param_3,param_4);
      return uVar4;
    }
    if (param_5 == 2) {
      *param_3 = *param_2;
      pvVar1 = (void *)(ulonglong)param_2[2];
      uVar4 = 2;
      uVar6 = (int)param_4 + 2;
      param_3[1] = param_2[2];
      if (2 < uVar6) {
        puVar5 = param_3 + 2;
        puVar2 = (uint *)(param_2 + 4);
        do {
          uVar3 = *puVar2;
          if (uVar3 == 0) {
            pvVar1 = (void *)0x0;
          }
          else {
            if (uVar3 == 0xffffff7) {
              in_RAX = FUN_1800011c0("Has bad cluster.",uVar4,puVar5,(ulonglong)uVar6);
              goto LAB_18000624e;
            }
            if (0xffffff7 < uVar3) {
              uVar3 = CONCAT22((short)(uVar3 >> 0x10),0xffff);
            }
            pvVar1 = (void *)(ulonglong)uVar3;
          }
          *puVar5 = (ushort)pvVar1;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          puVar5 = puVar5 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar3 < uVar6);
      }
    }
    else {
      in_RAX = (ulonglong)(param_5 - 3U);
      if (param_5 - 3U != 0) goto LAB_18000624e;
      pvVar1 = memcpy(param_3,param_2,(param_4 & 0xffffffff) << 2);
    }
    return CONCAT71((int7)((ulonglong)pvVar1 >> 8),1);
  }
LAB_18000624e:
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180006260(longlong *param_1,longlong param_2,uint param_3,uint *param_4,
                       undefined8 *param_5,uint param_6)

{
  ulonglong in_RAX;
  __uint64 _Var1;
  void *_Dst;
  
  if ((((param_2 != 0) && (param_5 != (undefined8 *)0x0)) && (1 < param_3)) &&
     ((param_3 < param_6 && (in_RAX = (**(code **)(*param_1 + 8))(), (char)in_RAX != '\0')))) {
    _Var1 = SUB168(ZEXT816(4) * ZEXT416(*param_4),0);
    if (SUB168(ZEXT816(4) * ZEXT416(*param_4),8) != 0) {
      _Var1 = 0xffffffffffffffff;
    }
    _Dst = operator_new(_Var1);
    *param_5 = _Dst;
    memset(_Dst,0,(ulonglong)*param_4 << 2);
    in_RAX = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,param_6,*param_5);
    if ((char)in_RAX != '\0') {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180006330(longlong *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                       uint param_5)

{
  ulonglong in_RAX;
  undefined4 local_res10 [2];
  
  if (((param_2 != 0) && (1 < (uint)param_3)) && ((uint)param_3 < param_5)) {
    local_res10[0] = 0;
    in_RAX = (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_5,local_res10);
    if (((char)in_RAX != '\0') &&
       (in_RAX = (**(code **)(*param_1 + 0x10))
                           (param_1,param_2,param_3 & 0xffffffff,param_5,param_4),
       (char)in_RAX != '\0')) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_1800063c0(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                       uint *param_5)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = (uint)param_4;
  if (((param_2 == 0) || ((uint)param_3 < 2)) || (uVar5 <= (uint)param_3)) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar3 = 0;
  uVar2 = 1;
  *param_5 = 1;
  if (uVar5 != 0) {
    do {
      uVar2 = param_3 & 0xffffffff;
      uVar1 = *(uint *)(param_2 + uVar2 * 4);
      param_3 = (ulonglong)uVar1;
      if (uVar1 < 2) {
        pcVar4 = "Fat table item is zero.\n";
        goto LAB_18000643d;
      }
      if (uVar1 == 0xffffff7) {
        pcVar4 = "fat table item has bad cluster.\n";
        goto LAB_18000643d;
      }
      if (0xffffff7 < uVar1) goto LAB_18000646f;
      if (uVar5 <= uVar1) {
        pcVar4 = "fat table item has invalid item.\n";
        goto LAB_18000643d;
      }
      uVar3 = uVar3 + 1;
      uVar2 = (ulonglong)(*param_5 + 1);
      *param_5 = *param_5 + 1;
    } while (uVar3 < uVar5);
  }
  if ((uint)uVar2 < uVar5) {
LAB_18000646f:
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  pcVar4 = "Error!.Fat has cycle item.\n";
LAB_18000643d:
  uVar2 = FUN_1800011c0(pcVar4,param_2,param_3,param_4);
  *param_5 = 0;
  return uVar2 & 0xffffffffffffff00;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class IFileAllocateTable * __ptr64 __cdecl GetFatAllocateTableInstance(void) */

IFileAllocateTable * __cdecl GetFatAllocateTableInstance(void)

{
                    /* 0x6490  34  ?GetFatAllocateTableInstance@@YAPEAVIFileAllocateTable@@XZ */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180010470) {
    _Init_thread_header(&DAT_180010470);
    if (DAT_180010470 == -1) {
      _DAT_180010468 = CFileAllocateTable::vftable;
      atexit(FUN_18000a530);
      _Init_thread_footer(&DAT_180010470);
      return (IFileAllocateTable *)&DAT_180010468;
    }
  }
  return (IFileAllocateTable *)&DAT_180010468;
}




undefined1
FUN_180006530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_2;
  if (uVar1 < 2) {
    FUN_1800011c0("Fat table item is zero.\n",param_2,param_3,param_4);
    return 1;
  }
  if (uVar1 == 0xffffff7) {
    FUN_1800011c0("fat table item has bad cluster.\n",param_2,param_3,param_4);
    return 1;
  }
  if ((uVar1 < 0xffffff8) && ((uint)param_3 <= uVar1)) {
    FUN_1800011c0("fat table item has invalid item.\n",param_2,param_3,param_4);
    return 1;
  }
  return 0;
}




ulonglong FUN_180006590(undefined8 param_1,longlong param_2,uint param_3,ulonglong param_4,
                       uint *param_5)

{
  uint uVar1;
  char cVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = (uint)param_4;
  uVar3 = (ulonglong)param_3;
  if ((((param_2 != 0) && (param_5 != (uint *)0x0)) && (1 < param_3)) && (param_3 < uVar5)) {
    *param_5 = param_3;
    uVar4 = 0;
    uVar6 = param_4;
    if (uVar5 != 0) {
      do {
        param_5 = param_5 + 1;
        uVar1 = *(uint *)(param_2 + uVar3 * 4);
        uVar3 = (ulonglong)uVar1;
        cVar2 = FUN_180006530(param_1,uVar3,param_4 & 0xffffffff,uVar6);
        in_RAX = CONCAT71(extraout_var,cVar2);
        if (cVar2 != '\0') break;
        if (0xffffff7 < uVar1) {
          return CONCAT71(extraout_var,1);
        }
        *param_5 = uVar1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180006630(undefined8 param_1,longlong param_2,uint *param_3,undefined8 param_4,
                       longlong *param_5)

{
  ulonglong in_RAX;
  char *pcVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint local_res10 [2];
  uint local_res18 [2];
  
  uVar5 = (uint)param_4;
  local_res18[0] = (uint)param_3;
  uVar3 = (ulonglong)param_3 & 0xffffffff;
  if (((param_2 != 0) && (1 < local_res18[0])) && (local_res18[0] < uVar5)) {
    puVar2 = (uint *)param_5[1];
    if ((uint *)param_5[2] == puVar2) {
      param_3 = local_res18;
      in_RAX = FUN_180004850(param_5,puVar2,param_3);
    }
    else {
      *puVar2 = local_res18[0];
      param_5[1] = param_5[1] + 4;
    }
    uVar4 = 0;
    if (uVar5 != 0) {
      do {
        in_RAX = uVar3;
        local_res10[0] = *(uint *)(param_2 + in_RAX * 4);
        uVar3 = (ulonglong)local_res10[0];
        if (local_res10[0] < 2) {
          pcVar1 = "Fat table item is zero.\n";
LAB_180006708:
          in_RAX = FUN_1800011c0(pcVar1,puVar2,param_3,param_4);
          break;
        }
        if (local_res10[0] == 0xffffff7) {
          pcVar1 = "fat table item has bad cluster.\n";
          goto LAB_180006708;
        }
        if (0xffffff7 < local_res10[0]) {
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
        if (uVar5 <= local_res10[0]) {
          pcVar1 = "fat table item has invalid item.\n";
          goto LAB_180006708;
        }
        puVar2 = (uint *)param_5[1];
        if ((uint *)param_5[2] == puVar2) {
          param_3 = local_res10;
          in_RAX = FUN_180004850(param_5,puVar2,param_3);
        }
        else {
          *puVar2 = local_res10[0];
          param_5[1] = param_5[1] + 4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_180006730(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_1800081f0(param_1);
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




longlong * FUN_1800067b0(longlong *param_1,longlong *param_2,longlong *param_3)

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
    FUN_180005cf0();
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
      goto LAB_1800068a5;
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
LAB_1800068a5:
  plVar2 = plVar12 + (lVar11 >> 3);
  FUN_180007100(param_1,plVar2,param_3,lVar14);
  plVar10 = (longlong *)param_1[1];
  plVar9 = (longlong *)*param_1;
  plVar13 = plVar12;
  if (param_2 != plVar10) {
    FUN_180007050((longlong *)*param_1,param_2,plVar12);
    plVar10 = (longlong *)param_1[1];
    plVar9 = param_2;
    plVar13 = plVar2 + 1;
  }
  FUN_180007050(plVar9,plVar10,plVar13);
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
FUN_1800069b0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_180008280(param_1,param_6);
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
      goto LAB_180006a2f;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_180006a2f;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_180006a2f:
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
        goto LAB_180006bd5;
      }
LAB_180006b46:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_180006b46;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180008370(param_1,plVar2);
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
LAB_180006bd5:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180006c30(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
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
    FUN_1800069b0(param_1,param_2,'\x01',(undefined8 *)*param_1,param_4,param_5);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    uVar2 = FUN_180008640(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      FUN_1800069b0(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    puVar5 = (undefined8 *)plVar3[2];
    uVar2 = FUN_180008640(puVar5 + 4,param_4);
    if ((int)uVar2 < 0) {
      FUN_1800069b0(param_1,param_2,'\0',puVar5,param_4,param_5);
      return param_2;
    }
  }
  else {
    uVar2 = FUN_180008640(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      local_38 = param_3;
      plVar3 = FUN_180007470((longlong *)&local_38);
      uVar2 = FUN_180008640((undefined8 *)(*plVar3 + 0x20),param_4);
      if ((int)uVar2 < 0) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          FUN_1800069b0(param_1,param_2,'\0',local_38,param_4,param_5);
          return param_2;
        }
        FUN_1800069b0(param_1,param_2,'\x01',param_3,param_4,param_5);
        return param_2;
      }
    }
    uVar2 = FUN_180008640(param_3 + 4,param_4);
    if (((int)uVar2 < 0) &&
       ((lVar1 = *param_1, local_38 = param_3, plVar4 = FUN_180007400((longlong *)&local_38),
        plVar3 = local_38, *plVar4 == lVar1 ||
        (uVar2 = FUN_180008640(param_4,local_38 + 4), (int)uVar2 < 0)))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_1800069b0(param_1,param_2,'\0',param_3,param_4,param_5);
        return param_2;
      }
      FUN_1800069b0(param_1,param_2,'\x01',plVar3,param_4,param_5);
      return param_2;
    }
  }
  puVar5 = FUN_180006e60(param_1,local_28,'\0',param_4,param_5);
  *param_2 = *puVar5;
  return param_2;
}




undefined8 *
FUN_180006e60(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
      uVar3 = FUN_180008640(param_4,plVar5 + 4);
    }
    else {
      uVar3 = FUN_180008640(plVar5 + 4,param_4);
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
      puVar4 = FUN_1800069b0(param_1,&local_38,'\x01',plVar6,param_4,param_5);
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
  uVar3 = FUN_180008640(plVar5 + 4,param_4);
  if ((int)uVar3 < 0) {
    puVar4 = FUN_1800069b0(param_1,&local_38,(char)uVar7,plVar6,param_4,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_38 = param_5 + 4;
    FUN_1800083d0(param_5 + 8);
    FUN_1800072f0(param_5 + 4);
    local_30 = 0x58;
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




longlong * FUN_180007050(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    do {
      plVar1 = (longlong *)*param_1;
      *param_3 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)*plVar1)(plVar1,&DAT_180010024);
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




void FUN_180007100(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_3;
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)*plVar1)(plVar1,&DAT_180010024,param_3,param_4,0xfffffffffffffffe);
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




undefined8 * FUN_180007170(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = CMomEventObject<class_CModuleImpl<class_CFatLibModule>_>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_1800081b0();
  param_1[2] = uVar1;
  *param_1 = CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CFatLibModule>_>_>::
             vftable;
  return param_1;
}




void FUN_1800071d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800085f0((longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  free(*(void **)(param_1 + 0x10));
  return;
}




void FUN_180007210(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}




void FUN_180007240(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000724b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))();
    return;
  }
  return;
}




void FUN_180007250(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800085f0(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_180007280(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_1800072a0(undefined8 *param_1)

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




void FUN_1800072f0(longlong *param_1)

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




void FUN_180007360(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800085f0(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_180007390(longlong *param_1)

{
  FUN_1800083d0(param_1 + 4);
  FUN_1800072f0(param_1);
  return;
}




void FUN_1800073c0(longlong *param_1)

{
  FUN_1800083d0(param_1);
  return;
}




void FUN_1800073e0(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  return;
}




longlong * FUN_180007400(longlong *param_1)

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




longlong * FUN_180007470(longlong *param_1)

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




/* WARNING: Type propagation algorithm not settling */

void FUN_180007500(longlong param_1,void *param_2,longlong *param_3)

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
  local_48 = DAT_180010038 ^ (ulonglong)auStackY_d8;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar13 = 0xffffffffffffffff;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  local_90 = param_3;
  FUN_1800084a0(local_68,param_2,sVar13);
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
      if (uVar3 <= uVar2) goto LAB_1800075d7;
LAB_180007638:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_180007638;
LAB_1800075d7:
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
  if (plVar10 != (longlong *)*local_98) goto LAB_18000786c;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  FUN_1800084a0(local_68,param_2,sVar13);
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
      if (uVar2 <= uVar15) goto LAB_180007747;
LAB_180007797:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_180007797;
LAB_180007747:
      plVar11 = (longlong *)*plVar8;
      plVar10 = plVar8;
    }
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    plVar8 = plVar11;
    plVar11 = local_98;
  }
  if (plVar10 == plVar7) {
LAB_18000779f:
    local_a8[0] = local_68;
    plVar7 = (longlong *)FUN_180006730(plVar11,&DAT_18000b9e9,local_a8);
    FUN_180006c30(plVar11,local_a8,plVar10,plVar7 + 4,plVar7);
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
      if (uVar2 < uVar3) goto LAB_18000779f;
    }
    else if (iVar6 < 0) goto LAB_18000779f;
  }
  plVar7 = plVar10 + 8;
  if (plVar7 != &local_88) {
    FUN_1800083d0(plVar7);
    *plVar7 = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_1800083d0(&local_88);
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
LAB_18000786c:
  plVar7 = local_90;
  local_50 = 0xf;
  local_58 = 0;
  local_68[0]._0_1_ = 0;
  plVar8 = (longlong *)0x0;
  local_a8[0] = (longlong *)0x0;
  if (local_90 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)*local_90)(local_90,&DAT_180010024);
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
    FUN_1800067b0(plVar10 + 8,plVar7,(longlong *)local_a8);
  }
  else {
    *plVar7 = 0;
    local_90 = plVar7;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)*plVar8)(plVar8,&DAT_180010024);
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




undefined4 FUN_180007950(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 8);
}




undefined8 FUN_180007960(undefined *param_1,undefined8 param_2)

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




void FUN_180007990(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_1800082d0(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1800079e0(longlong param_1,void *param_2,undefined4 *param_3)

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
  local_48 = DAT_180010038 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (*(char *)((longlong)param_2 + sVar12) != '\0');
  local_78 = param_1;
  FUN_1800084a0(local_68,param_2,sVar12);
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
      if (uVar5 <= uVar3) goto LAB_180007ac0;
LAB_180007b4f:
      puVar8 = (undefined8 *)puVar10[2];
    }
    else {
      if (iVar7 < 0) goto LAB_180007b4f;
LAB_180007ac0:
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
      if (uVar5 < uVar3) goto LAB_180007b14;
      if (uVar5 >= uVar3 && uVar5 != uVar3) goto LAB_180007b17;
    }
    if (-1 < iVar7) goto LAB_180007b17;
  }
LAB_180007b14:
  puVar11 = puVar2;
LAB_180007b17:
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
  __security_check_cookie(local_48 ^ (ulonglong)auStack_98);
  return;
}




undefined8 FUN_180007bd0(void)

{
  return DAT_180010478;
}




char * FUN_180007bf0(void)

{
  return "FatLib";
}




char * FUN_180007c00(void)

{
  return "CFatLibModule";
}




undefined * FUN_180007c10(void)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 in_R9;
  uint local_res8 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (DAT_180010480 == (undefined *)0x0) {
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4);
    if ((*piVar4 < DAT_180010490) && (_Init_thread_header(&DAT_180010490), DAT_180010490 == -1)) {
      DAT_180010488 = (undefined8 *)FUN_180007ef0("Thread");
      _Init_thread_footer(&DAT_180010490);
    }
    if (DAT_180010488 == (undefined8 *)0x0) {
      if ((*piVar4 < DAT_1800104b8) && (_Init_thread_header(&DAT_1800104b8), DAT_1800104b8 == -1)) {
        FUN_180007170((undefined8 *)&DAT_180010498);
        atexit(FUN_18000a560);
        _Init_thread_footer(&DAT_1800104b8);
        DAT_180010480 = &DAT_180010498;
      }
      else {
        DAT_180010480 = &DAT_180010498;
      }
    }
    else {
      if (DAT_180010810 == (undefined1 *)0x0) {
        DAT_180010810 = &DAT_180010710;
        local_res8[0] = 0x100;
        pcVar2 = (char *)__std_type_info_name(0x180010208,&DAT_180010e30);
        FUN_180007e50(pcVar2,DAT_180010810,local_res8);
      }
      plVar3 = (longlong *)(**(code **)*DAT_180010488)(DAT_180010488,DAT_180010810);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
        iVar1 = (**(code **)(*plVar3 + 0x28))
                          (plVar3,0xffffffff,*plVar3,in_R9,uVar5,plVar3,0xffffffff);
        if (DAT_180010480 == (undefined *)0x0) {
          if ((*piVar4 < DAT_1800104e0) &&
             (_Init_thread_header(&DAT_1800104e0), DAT_1800104e0 == -1)) {
            FUN_180007170((undefined8 *)&DAT_1800104c0);
            atexit(FUN_18000a5a0);
            _Init_thread_footer(&DAT_1800104e0);
          }
          DAT_180010480 = &DAT_1800104c0;
          if (-1 < iVar1) {
            (**(code **)(*plVar3 + 0x30))(plVar3);
          }
        }
        (**(code **)(*plVar3 + 0x30))(plVar3);
      }
    }
  }
  return DAT_180010480;
}




ulonglong FUN_180007e50(char *param_1,undefined1 *param_2,uint *param_3)

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




void FUN_180007ef0(char *param_1)

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
  
  local_18 = DAT_180010038 ^ (ulonglong)auStack_148;
  if (param_1 == (char *)0x0) {
LAB_180007fe5:
    __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
    return;
  }
  pcVar4 = param_1;
  if (*param_1 != '\0') {
    lVar5 = 0;
    do {
      if (0xff < lVar5) goto LAB_180007fe5;
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
          FUN_180007960(pFVar3,hModule);
        }
      }
      goto LAB_180007fe5;
    }
  }
  __report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




undefined8 FUN_180008010(undefined8 param_1,char *param_2)

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
    if (DAT_1800105f0 == (char *)0x0) {
      local_res10[0] = 0x100;
      DAT_1800105f0 = &DAT_1800104f0;
      pcVar2 = (char *)__std_type_info_name(0x1800101c0,&DAT_180010e30);
      FUN_180007e50(pcVar2,DAT_1800105f0,local_res10);
    }
    cVar1 = *pcVar3;
    cVar4 = *DAT_1800105f0;
    pcVar2 = DAT_1800105f0;
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
      if (DAT_180010700 == (char *)0x0) {
        local_res10[0] = 0x100;
        DAT_180010700 = &DAT_180010600;
        pcVar2 = (char *)__std_type_info_name(0x1800101e8,&DAT_180010e30);
        FUN_180007e50(pcVar2,DAT_180010700,local_res10);
      }
      cVar1 = *pcVar3;
      cVar4 = *DAT_180010700;
      pcVar2 = DAT_180010700;
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




int FUN_180008180(void *param_1)

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




void FUN_1800081b0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x58);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_1800081f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180008230(undefined8 param_1,longlong *param_2,longlong *param_3)

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




void FUN_180008280(undefined8 param_1,void *param_2)

{
  FUN_1800083d0((longlong *)((longlong)param_2 + 0x40));
  FUN_1800072f0((longlong *)((longlong)param_2 + 0x20));
  free(param_2);
  return;
}




void FUN_1800082d0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800082d0(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_1800083d0(param_2 + 8);
    FUN_1800072f0(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180008360(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_180008370(longlong *param_1,longlong *param_2)

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




void FUN_1800083d0(longlong *param_1)

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




void FUN_180008480(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




longlong * FUN_1800084a0(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_180008480();
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
      if (pvVar3 == (void *)0x0) goto LAB_1800085e3;
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
LAB_1800085e3:
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




void FUN_1800085f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1800082d0(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




uint FUN_180008640(undefined8 *param_1,undefined8 *param_2)

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




void FUN_1800086b0(undefined8 param_1,void *param_2,longlong param_3)

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
  DAT_180010478 = param_1;
                    /* 0x8740  63  GetModule */
  FUN_180007c10();
  return;
}




undefined8 * FUN_180008750(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  memset((void *)((longlong)param_1 + 0x14),0,0x400);
  return param_1;
}




undefined2 FUN_180008780(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x1f);
}




undefined4 FUN_180008790(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}




undefined8 FUN_1800087a0(undefined8 *param_1)

{
  return *param_1;
}




undefined2 FUN_1800087b0(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x22);
}




uint FUN_1800087c0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) == 3) {
    return *(uint *)(param_1 + 0x38);
  }
  return (uint)*(ushort *)(param_1 + 0x2a);
}




undefined4 FUN_1800087d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_1800087e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 4;
  puVar2 = (undefined8 *)(param_1 + 0x14);
  do {
    uVar1 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar1;
    uVar1 = param_2[3];
    puVar2[2] = param_2[2];
    puVar2[3] = uVar1;
    uVar1 = param_2[5];
    puVar2[4] = param_2[4];
    puVar2[5] = uVar1;
    uVar1 = param_2[7];
    puVar2[6] = param_2[6];
    puVar2[7] = uVar1;
    uVar1 = param_2[9];
    puVar2[8] = param_2[8];
    puVar2[9] = uVar1;
    uVar1 = param_2[0xb];
    puVar2[10] = param_2[10];
    puVar2[0xb] = uVar1;
    uVar1 = param_2[0xd];
    puVar2[0xc] = param_2[0xc];
    puVar2[0xd] = uVar1;
    uVar1 = param_2[0xf];
    puVar2[0xe] = param_2[0xe];
    puVar2[0xf] = uVar1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x10;
    param_2 = param_2 + 0x10;
  } while (lVar3 != 0);
  return;
}




void FUN_180008850(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}




void FUN_180008860(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,unsigned __int64,void (__cdecl*)(void
   * __ptr64))
   
   Library: Visual Studio 2017 Release */

void __cdecl
__ArrayUnwind(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
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
LAB_18000897e:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180010828 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180010828;
        pvVar1 = DAT_180010828;
      }
      DAT_180010828 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18000897e;
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
    uVar3 = FUN_180009a68();
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
  
  uVar1 = FUN_180008b08(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180009f98();
  if (cVar1 != '\0') {
    cVar1 = FUN_180009f98();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180009f98();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180009f98();
  FUN_180009f98();
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
    _execute_onexit_table(&DAT_180010838);
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
  FUN_180009f98();
  FUN_180009f98();
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
    DAT_180010830 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180009f98();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180009f98();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180009f98();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180008b08(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_180010831 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180010038 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180010038;
      _DAT_180010838 = in_RAX;
      uRam0000000180010840 = in_RAX;
      _DAT_180010848 = in_RAX;
      _DAT_180010850 = in_RAX;
      uRam0000000180010858 = in_RAX;
      _DAT_180010860 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180010838);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180010850), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180010831 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180008c6e) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_180008c57;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180008c57:
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
    DAT_180010828 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180010830 == '\0') || (param_2 == '\0')) {
    FUN_180009f98();
    FUN_180009f98();
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
  
  bVar2 = (byte)DAT_180010038 & 0x3f;
  if (((DAT_180010038 ^ _DAT_180010838) >> bVar2 | (DAT_180010038 ^ _DAT_180010838) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180010838,_Func);
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

undefined8 FUN_180008d34(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_180010868,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180008e86;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_180010898 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_180010898 != (HANDLE)0x0) goto LAB_180008e24;
  }
  else {
    DAT_180010898 = (HANDLE)0x0;
    (*pFVar3)(&DAT_180010890);
    bVar7 = 0x40 - ((byte)DAT_180010038 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_1800108a0 = DAT_180010038 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_1800108a8 = DAT_180010038 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180008e24:
    uVar6 = FUN_180008b08(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180008e94);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180008e86:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180008e94(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180010868);
  if (DAT_180010898 != (HANDLE)0x0) {
    CloseHandle(DAT_180010898);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180010868);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180010868);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180010868);
  uVar1 = (ulonglong)_tls_index;
  DAT_18001002c = DAT_18001002c + 1;
  *param_1 = DAT_18001002c;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18001002c;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180010868);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180010868);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180008fa0:
                    /* WARNING: Could not recover jumptable at 0x000180008fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180010868);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18001002c;
      goto LAB_180008fa0;
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
  
  if (DAT_180010898 != (HANDLE)0x0) {
    SetEvent(DAT_180010898);
                    /* WARNING: Could not recover jumptable at 0x000180008ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_180010898);
    return;
  }
  bVar1 = (byte)DAT_180010038 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180009fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180010038 ^ _DAT_1800108a8) >> bVar1 |
            (DAT_180010038 ^ _DAT_1800108a8) << 0x40 - bVar1))(&DAT_180010890);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_180010898 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180010868);
    WaitForSingleObjectEx(DAT_180010898,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180009074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180010868);
    return;
  }
  bVar1 = (byte)DAT_180010038 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180009fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180010038 ^ _DAT_1800108a0) >> bVar1 |
            (DAT_180010038 ^ _DAT_1800108a0) << 0x40 - bVar1))
            (&DAT_180010890,&DAT_180010868,param_1);
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
  if ((_StackCookie == DAT_180010038) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_180009134(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
    FUN_180009d40();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_180009d20();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




void FUN_18000919c(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    __GSHandlerCheck_EH
    __GSHandlerCheck_EH4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict___GSHandlerCheck_EH
               (longlong param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4,(uint *)(lVar1 + 4));
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
                    /* WARNING: Subroutine does not return */
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
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
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001800092e9. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x18000931a;
  capture_previous_context((PCONTEXT)&DAT_180010960);
  _DAT_1800108d0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_1800109f8 = puVar3 + 0x40;
  _DAT_1800109e0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1800108c0 = 0xc0000409;
  _DAT_1800108c4 = 1;
  _DAT_1800108d8 = 1;
  DAT_1800108e0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180010038;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180010030;
  *(undefined8 *)(puVar3 + -8) = 0x1800093bc;
  DAT_180010a58 = _DAT_1800108d0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000c0e0);
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
  *(undefined8 *)(puVar3 + -8) = 0x180009402;
  capture_current_context((PCONTEXT)&DAT_180010960);
  _DAT_1800108d0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_1800109f8 = puVar3 + 0x30;
  _DAT_1800108c0 = 0xc0000409;
  _DAT_1800108c4 = 1;
  _DAT_1800108d8 = 1;
  DAT_1800108e0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x18000946e;
  DAT_180010a58 = _DAT_1800108d0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000c0e0);
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




void FUN_180009558(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000955f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180010e30);
  return;
}




void FUN_180009568(void)

{
  __std_type_info_destroy_list(&DAT_180010e30);
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
    if (DAT_180010e40 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_180010e40 = DAT_180010e40 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_180010820 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c(pIVar12);
      FUN_180009568();
      FID_conflict__RTC_Initialize();
      DAT_180010820 = 0;
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
    if (DAT_180010820 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_180010820 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180009558();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_18000b248,&DAT_18000b258);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_18000b238,&DAT_18000b240);
        DAT_180010820 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180009e68();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180010e40 = DAT_180010e40 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180009834) */
/* WARNING: Removing unreachable block (ram,0x0001800097c3) */
/* WARNING: Removing unreachable block (ram,0x000180009877) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_180010e40 < 1)) {
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




/* WARNING: Removing unreachable block (ram,0x0001800099ba) */
/* WARNING: Removing unreachable block (ram,0x000180009938) */
/* WARNING: Removing unreachable block (ram,0x000180009913) */
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
  
  DAT_18001004c = 2;
  _DAT_180010048 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180010050 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180010e44 = DAT_180010e44 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_180010e44 = DAT_180010e44 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180010048 = 2;
    DAT_18001004c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18001004c = 0xe;
      _DAT_180010048 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180010048 = 5;
        DAT_18001004c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_180009a68(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180010060 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009a7c(void)

{
  _DAT_180010e48 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180009ab7;
  FUN_180009a7c();
  *(undefined8 *)(puVar4 + -8) = 0x180009ac8;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180009ad2;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180009aec;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180009b2d;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180009b5f;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180009b81;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180009ba2;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180009bad;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180009bbd;
    FUN_180009a7c();
  }
  return;
}




undefined8 * FUN_180009bd0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180009c10(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180009c30(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180009c70(undefined8 *param_1)

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




undefined8 * FUN_180009cdc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180009d20(void)

{
  undefined8 local_28 [5];
  
  FUN_180009c10(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000e3c8);
}




void FUN_180009d40(void)

{
  undefined8 local_28 [5];
  
  FUN_180009c70(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000e450);
}




char * FUN_180009d60(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
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
  
  if (DAT_180010038 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180010038 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180010038 == 0x2b992ddfa232) {
      DAT_180010038 = 0x2b992ddfa233;
    }
  }
  DAT_180010030 = ~DAT_180010038;
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




undefined * FUN_180009e44(void)

{
  return &DAT_180010e50;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1800016e0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180009e44();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180009e68(void)

{
  return &DAT_180010e58;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18000d090; puVar1 < &DAT_18000d090; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_18000d0a0; puVar1 < &DAT_18000d0a0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180009f98(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180009fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180009fc0(undefined8 param_1,longlong param_2)

{
  FUN_180001040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180009fd0(void)

{
  FUN_180001040((undefined8 *)&DAT_180010458);
  return;
}




void Unwind_180009fe0(void)

{
  _Init_thread_abort(&DAT_180010460);
  return;
}




void Unwind_180009ff0(undefined8 param_1,longlong param_2)

{
  FUN_1800016f0((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_18000a000(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker((IStorageDevice *)(param_2 + 0x2a0));
  return;
}




void Unwind_18000a010(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x88));
  return;
}




void Catch_18000a040(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x88),
             *(longlong *)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000a070(undefined8 param_1,longlong param_2)

{
  FUN_180005de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18000a080(void)

{
  FUN_180005de0((undefined8 *)&DAT_180010468);
  return;
}




void Unwind_18000a090(void)

{
  _Init_thread_abort(&DAT_180010470);
  return;
}




void Catch_18000a0a0(undefined8 param_1,longlong param_2)

{
  FUN_180008360(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000a0d0(undefined8 param_1,longlong param_2)

{
  FUN_180007390(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_18000a0e0(undefined8 param_1,longlong param_2)

{
  FUN_1800072f0(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_18000a0f0(undefined8 param_1,longlong param_2)

{
  FUN_1800073c0((longlong *)(*(longlong *)(param_2 + 0x30) + 0x20));
  return;
}




void Catch_18000a100(undefined8 param_1,longlong param_2)

{
  FUN_180008230(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x30));
  deallocate(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
             *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000a150(undefined8 param_1,longlong param_2)

{
  FUN_180007240(*(longlong **)(param_2 + 0x80));
  return;
}




void Catch_18000a160(undefined8 param_1,longlong param_2)

{
  FUN_180008280(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000a190(undefined8 param_1,longlong param_2)

{
  FUN_180008280(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0xa0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000a1c0(undefined8 param_1,longlong param_2)

{
  FUN_1800072f0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18000a1d0(undefined8 param_1,longlong param_2)

{
  FUN_1800073c0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_18000a1e0(undefined8 param_1,longlong param_2)

{
  FUN_1800072a0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18000a1f0(undefined8 param_1,longlong param_2)

{
  FUN_180007240(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_18000a200(undefined8 param_1,longlong param_2)

{
  FUN_180007240(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_18000a210(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800071d0(*(longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000a220(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180007360((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10),param_2,param_3,param_4);
  return;
}




void Unwind_18000a230(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180007250(*(longlong **)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_18000a240(undefined8 param_1,longlong param_2)

{
  FUN_180007280(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_18000a250(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180007250(*(longlong **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000a260(undefined8 param_1,longlong param_2)

{
  FUN_180007280(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18000a270(undefined8 param_1,longlong param_2)

{
  FUN_180007240(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18000a280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800071d0(0x180010498,param_2,param_3,param_4);
  return;
}




void Unwind_18000a290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180007360(&DAT_1800104a8,param_2,param_3,param_4);
  return;
}




void Unwind_18000a2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800071d0(0x1800104c0,param_2,param_3,param_4);
  return;
}




void Unwind_18000a2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180007360(&DAT_1800104d0,param_2,param_3,param_4);
  return;
}




void Unwind_18000a2c0(undefined8 param_1,longlong param_2)

{
  FUN_1800072f0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_18000a2d0(undefined8 param_1,longlong param_2)

{
  FUN_1800073c0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18000a2e0(undefined8 param_1,longlong param_2)

{
  FUN_180007210((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18000a2f0(undefined8 param_1,longlong param_2)

{
  FUN_180007240((longlong *)(param_2 + 0x30));
  return;
}




undefined8 Catch_18000a300(void)

{
  return 0x18000797c;
}




void Unwind_18000a320(undefined8 param_1,longlong param_2)

{
  FUN_1800072f0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18000a330(void)

{
  _Init_thread_abort(&DAT_180010490);
  return;
}




void Unwind_18000a340(void)

{
  _Init_thread_abort(&DAT_1800104b8);
  return;
}




void Unwind_18000a350(undefined8 param_1,longlong param_2)

{
  FUN_1800073e0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18000a360(void)

{
  _Init_thread_abort(&DAT_1800104e0);
  return;
}




void Catch_18000a370(undefined8 param_1,longlong param_2)

{
  FUN_1800086b0(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000a3a0(undefined8 param_1,longlong param_2)

{
  FUN_1800086b0(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000a3d0(undefined8 param_1,longlong param_2)

{
  FUN_1800072f0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_18000a3e0(undefined8 param_1,longlong param_2)

{
  FUN_1800073c0((longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




/* Library Function - Single Match
    int `void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void *
   __ptr64))'::`1'::filt$0
   
   Library: Visual Studio 2005 Release */

undefined4
`void___cdecl___ArrayUnwind(void*___ptr64,unsigned___int64,int,void_(__cdecl*)(void*___ptr64))'::
__l1::filt_0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x38) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x38) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}




undefined * Catch_All_18000a475(void)

{
  return &DAT_1800091b1;
}




void FUN_18000a490(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18000a4a7(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18000a4c3(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000a500(void)

{
  _DAT_180010458 = IDirectoryEntry::vftable;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000a530(void)

{
  _DAT_180010468 = IFileAllocateTable::vftable;
  return;
}




void FUN_18000a560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800085f0((longlong *)&DAT_1800104a8,param_2,param_3,param_4);
  free(DAT_1800104a8);
  return;
}




void FUN_18000a5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800085f0((longlong *)&DAT_1800104d0,param_2,param_3,param_4);
  free(DAT_1800104d0);
  return;
}



