
undefined1 * FUN_180001000(void)

{
  char *pcVar1;
  uint local_res10 [6];
  
  if (DAT_180007790 == (undefined1 *)0x0) {
    local_res10[0] = 0x100;
    DAT_180007790 = &DAT_180007690;
    pcVar1 = (char *)__std_type_info_name(0x1800070b8,&DAT_180007cf0);
    FUN_180001510(pcVar1,DAT_180007790,local_res10);
  }
  return DAT_180007790;
}




/* public: __cdecl CDiskDevice::CDiskDevice(class CDiskDevice const & __ptr64) __ptr64 */

CDiskDevice * __thiscall CDiskDevice::CDiskDevice(CDiskDevice *this,CDiskDevice *param_1)

{
                    /* 0x1060  1  ??0CDiskDevice@@QEAA@AEBV0@@Z */
  *(undefined ***)this = IDiskDevice::vftable;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return this;
}




/* public: __cdecl CDiskDevice::CDiskDevice(struct IManagerItem * __ptr64) __ptr64 */

CDiskDevice * __thiscall CDiskDevice::CDiskDevice(CDiskDevice *this,IManagerItem *param_1)

{
                    /* 0x10c0  2  ??0CDiskDevice@@QEAA@PEAUIManagerItem@@@Z */
  *(undefined ***)this = IDiskDevice::vftable;
  *(undefined ***)this = vftable;
  *(IManagerItem **)(this + 8) = param_1;
  this[0x14] = (CDiskDevice)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return this;
}




/* public: __cdecl IDiskDevice::IDiskDevice(class IDiskDevice const & __ptr64) __ptr64 */

IDiskDevice * __thiscall IDiskDevice::IDiskDevice(IDiskDevice *this,IDiskDevice *param_1)

{
                    /* 0x1110  5  ??0IDiskDevice@@QEAA@AEBV0@@Z
                       0x1110  6  ??0IDiskDevice@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x1120  7  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x1120  8  ??0IObject@@QEAA@AEBU0@@Z
                       0x1120  9  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IStorageDevice::IStorageDevice(struct IStorageDevice && __ptr64) __ptr64 */

IStorageDevice * __thiscall
IStorageDevice::IStorageDevice(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x1130  12  ??0IStorageDevice@@QEAA@$$QEAU0@@Z
                       0x1130  13  ??0IStorageDevice@@QEAA@AEBU0@@Z
                       0x1130  14  ??0IStorageDevice@@QEAA@XZ */
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




/* public: virtual __cdecl CDiskDevice::~CDiskDevice(void) __ptr64 */

void __thiscall CDiskDevice::~CDiskDevice(CDiskDevice *this)

{
                    /* 0x1150  15  ??1CDiskDevice@@UEAA@XZ */
  *(undefined ***)this = vftable;
  *(undefined ***)this = IDiskDevice::vftable;
  return;
}




/* public: virtual __cdecl IDiskDevice::~IDiskDevice(void) __ptr64 */

void __thiscall IDiskDevice::~IDiskDevice(IDiskDevice *this)

{
                    /* 0x1180  17  ??1IDiskDevice@@UEAA@XZ */
  *(undefined ***)this = vftable;
  return;
}




/* public: class CDiskDevice & __ptr64 __cdecl CDiskDevice::operator=(class CDiskDevice const &
   __ptr64) __ptr64 */

CDiskDevice * __thiscall CDiskDevice::operator=(CDiskDevice *this,CDiskDevice *param_1)

{
                    /* 0x1190  19  ??4CDiskDevice@@QEAAAEAV0@AEBV0@@Z */
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return this;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  undefined8 uVar1;
  
                    /* 0x11d0  20  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x11e0  21  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x11e0  22  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x11e0  24  ??4IDiskDevice@@QEAAAEAV0@AEBV0@@Z
                       0x11e0  25  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x11e0  26  ??4IObject@@QEAAAEAU0@AEBU0@@Z
                       0x11e0  27  ??4IPartitionDevice@@QEAAAEAV0@AEBV0@@Z
                       0x11e0  28  ??4IStorageDevice@@QEAAAEAU0@$$QEAU0@@Z
                       0x11e0  29  ??4IStorageDevice@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




undefined8 * FUN_1800011f0(undefined8 *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_(param_1,0x30,param_1[-1],CDiskDevice::~CDiskDevice);
    if ((param_2 & 1) != 0) {
      free(param_1 + -1);
    }
    return param_1 + -1;
  }
  *param_1 = CDiskDevice::vftable;
  *param_1 = IDiskDevice::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800012a0(undefined8 *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_(param_1,8,param_1[-1],IDiskDevice::~IDiskDevice);
    if ((param_2 & 1) != 0) {
      free(param_1 + -1);
    }
    return param_1 + -1;
  }
  *param_1 = IDiskDevice::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1340  37  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




/* public: virtual void __cdecl CDiskDevice::Close(void) __ptr64 */

void __thiscall CDiskDevice::Close(CDiskDevice *this)

{
                    /* 0x1350  38  ?Close@CDiskDevice@@UEAAXXZ
                       0x1350  39  ?Close@CPartitionDevice@@UEAAXXZ
                       0x1350  63  ?ReleaseBitlocker@IStorageDevice@@UEAAXXZ */
  return;
}




/* public: virtual int __cdecl IStorageDevice::ConvertVolume(void) __ptr64 */

int __thiscall IStorageDevice::ConvertVolume(IStorageDevice *this)

{
                    /* 0x1360  40  ?ConvertVolume@IStorageDevice@@UEAAHXZ
                       0x1360  41  ?DeviceIoControl@IStorageDevice@@UEAAHKPEAXK0KPEAK@Z
                       0x1360  42  ?GetBitlockerInfo@IStorageDevice@@UEAAPEAUBitlockerInfo@@XZ
                       0x1360  47  ?GetInformationOffset@IStorageDevice@@UEAAHQEA_K@Z
                       0x1360  55  ?IsBitlockerVolume@IStorageDevice@@UEAAHXZ
                       0x1360  64  ?SetBitlockerEnable@IStorageDevice@@UEAAHH@Z
                       0x1360  65  ?SetBitlockerInfo@IStorageDevice@@UEAAHPEAUBitlockerInfo@@@Z
                       0x1360  70  ?SetMetaFilePos@IStorageDevice@@UEAAHQEA_K_K@Z */
  return 0;
}




/* public: virtual int __cdecl IStorageDevice::GetBitlockerStatus(void) __ptr64 */

int __thiscall IStorageDevice::GetBitlockerStatus(IStorageDevice *this)

{
                    /* 0x1370  43  ?GetBitlockerStatus@IStorageDevice@@UEAAHXZ */
  return -1;
}




/* public: virtual unsigned int __cdecl CDiskDevice::GetErrorCode(void) __ptr64 */

uint __thiscall CDiskDevice::GetErrorCode(CDiskDevice *this)

{
                    /* 0x1380  44  ?GetErrorCode@CDiskDevice@@UEAAIXZ */
  return *(uint *)(this + 0x10);
}




/* public: virtual int __cdecl CDiskDevice::GetGeometryInfo(struct tagGEOMETRY_INFO * __ptr64)
   __ptr64 */

int __thiscall CDiskDevice::GetGeometryInfo(CDiskDevice *this,tagGEOMETRY_INFO *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint local_res8 [2];
  
                    /* 0x1390  46  ?GetGeometryInfo@CDiskDevice@@UEAAHPEAUtagGEOMETRY_INFO@@@Z */
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (DAT_180007460 == (undefined1 *)0x0) {
    local_res8[0] = 0x100;
    DAT_180007460 = &DAT_180007360;
    pcVar2 = (char *)__std_type_info_name(0x180007040,&DAT_180007cf0);
    FUN_180001510(pcVar2,DAT_180007460,local_res8);
  }
  plVar3 = (longlong *)
           (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_180007460);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  uVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
  *(undefined8 *)param_1 = uVar4;
  uVar1 = (**(code **)(*plVar3 + 0x30))(plVar3);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return 1;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1460  48  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180001463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




/* public: virtual unsigned int __cdecl CDiskDevice::GetSectorSize(void) __ptr64 */

uint __thiscall CDiskDevice::GetSectorSize(CDiskDevice *this)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  uint local_res8 [8];
  
                    /* 0x1470  53  ?GetSectorSize@CDiskDevice@@UEAAIXZ */
  if (DAT_180007790 == (undefined1 *)0x0) {
    local_res8[0] = 0x100;
    DAT_180007790 = &DAT_180007690;
    pcVar2 = (char *)__std_type_info_name(0x1800070b8,&DAT_180007cf0);
    FUN_180001510(pcVar2,DAT_180007790,local_res8);
  }
  lVar3 = (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_180007790);
  if (lVar3 == 0) {
    *(undefined4 *)(this + 0x10) = 2;
    return 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001800014f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 8))();
  return uVar1;
}




/* public: virtual int __cdecl CDiskDevice::Lock(void) __ptr64 */

int __thiscall CDiskDevice::Lock(CDiskDevice *this)

{
                    /* 0x1500  56  ?Lock@CDiskDevice@@UEAAHXZ
                       0x1500  57  ?Lock@CPartitionDevice@@UEAAHXZ
                       0x1500  58  ?Open@CDiskDevice@@UEAAHXZ
                       0x1500  59  ?Open@CPartitionDevice@@UEAAHXZ
                       0x1500  73  ?Unlock@CDiskDevice@@UEAAHXZ
                       0x1500  74  ?Unlock@CPartitionDevice@@UEAAHXZ */
  return 1;
}




ulonglong FUN_180001510(char *param_1,undefined1 *param_2,uint *param_3)

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




/* public: virtual unsigned int __cdecl CDiskDevice::ReadSector(void * __ptr64,unsigned
   __int64,unsigned int) __ptr64 */

uint __thiscall
CDiskDevice::ReadSector(CDiskDevice *this,void *param_1,__uint64 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  uint local_res20 [2];
  
                    /* 0x15b0  60  ?ReadSector@CDiskDevice@@UEAAIPEAX_KI@Z */
  *(undefined4 *)(this + 0x10) = 0;
  if ((param_3 == 0) || (param_1 == (void *)0x0)) {
    *(undefined4 *)(this + 0x10) = 0x57;
    return 0;
  }
  lVar7 = *(longlong *)(this + 0x18);
  if (lVar7 == 0) {
    if (DAT_180007570 == (undefined1 *)0x0) {
      local_res20[0] = 0x100;
      DAT_180007570 = &DAT_180007470;
      pcVar3 = (char *)__std_type_info_name(0x180007068,&DAT_180007cf0);
      FUN_180001510(pcVar3,DAT_180007570,local_res20);
    }
    plVar4 = (longlong *)
             (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_180007570);
    if ((plVar4 == (longlong *)0x0) ||
       (uVar5 = (**(code **)(*plVar4 + 0x28))(plVar4), (uVar5 & 1) == 0)) {
      puVar6 = FUN_180001000();
      lVar7 = (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),puVar6);
      if (lVar7 != 0) {
        plVar4 = (longlong *)(lVar7 + 8);
        uVar1 = (**(code **)(*plVar4 + 8))(plVar4,param_1,param_2,param_3);
        uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4);
        *(undefined4 *)(this + 0x10) = uVar2;
        return uVar1;
      }
    }
    else {
      if (DAT_180007680 == (undefined1 *)0x0) {
        local_res20[0] = 0x100;
        DAT_180007680 = &DAT_180007580;
        pcVar3 = (char *)__std_type_info_name(0x180007090,&DAT_180007cf0);
        FUN_180001510(pcVar3,DAT_180007680,local_res20);
      }
      plVar4 = (longlong *)
               (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_180007680);
      if (plVar4 != (longlong *)0x0) {
        uVar1 = (**(code **)(*plVar4 + 0x28))(plVar4,param_1,param_2,param_3);
        if (uVar1 == param_3) {
          return uVar1;
        }
        *(undefined4 *)(this + 0x10) = 0x1e;
        return 0;
      }
    }
    *(undefined4 *)(this + 0x10) = 2;
    return 0;
  }
  if (this[0x14] == (CDiskDevice)0x0) {
    param_2 = param_2 - *(longlong *)(this + 0x28);
  }
  uVar1 = (**(code **)(*(longlong *)(lVar7 + 8) + 8))(lVar7 + 8,param_1,param_2);
  if (uVar1 != 0) {
    return uVar1;
  }
  lVar7 = *(longlong *)(this + 0x20);
  if (lVar7 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*(longlong *)(lVar7 + 8) + 8))(lVar7 + 8,param_1,param_2,param_3);
  return uVar1;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x17d0  62  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x0001800017d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




/* public: long __cdecl CDiskDevice::SetLdmInterface(struct IStorageDevice * __ptr64,struct
   IStorageDevice * __ptr64,unsigned __int64) __ptr64 */

long __thiscall
CDiskDevice::SetLdmInterface
          (CDiskDevice *this,IStorageDevice *param_1,IStorageDevice *param_2,__uint64 param_3)

{
                    /* 0x17e0  66  ?SetLdmInterface@CDiskDevice@@QEAAJPEAUIStorageDevice@@0_K@Z */
  *(IStorageDevice **)(this + 0x18) = param_1;
  *(IStorageDevice **)(this + 0x20) = param_2;
  *(__uint64 *)(this + 0x28) = param_3;
  return 0;
}




/* public: long __cdecl CDiskDevice::SetLdmVolAsDisk(struct IStorageDevice * __ptr64) __ptr64 */

long __thiscall CDiskDevice::SetLdmVolAsDisk(CDiskDevice *this,IStorageDevice *param_1)

{
                    /* 0x17f0  68  ?SetLdmVolAsDisk@CDiskDevice@@QEAAJPEAUIStorageDevice@@@Z */
  this[0x14] = (CDiskDevice)0x1;
  *(IStorageDevice **)(this + 0x20) = param_1;
  *(IStorageDevice **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  return 0;
}




/* public: virtual unsigned int __cdecl CDiskDevice::WriteSector(void const * __ptr64,unsigned
   __int64,unsigned int) __ptr64 */

uint __thiscall
CDiskDevice::WriteSector(CDiskDevice *this,void *param_1,__uint64 param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong lVar6;
  uint local_res20 [2];
  
                    /* 0x1810  75  ?WriteSector@CDiskDevice@@UEAAIPEBX_KI@Z */
  if (DAT_180007790 == (undefined1 *)0x0) {
    local_res20[0] = 0x100;
    DAT_180007790 = &DAT_180007690;
    pcVar5 = (char *)__std_type_info_name(0x1800070b8,&DAT_180007cf0);
    FUN_180001510(pcVar5,DAT_180007790,local_res20);
  }
  lVar6 = (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_180007790);
  if ((param_3 == 0) || (param_1 == (void *)0x0)) {
    *(undefined4 *)(this + 0x10) = 0x57;
    return 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  if (lVar6 == 0) {
    *(undefined4 *)(this + 0x10) = 2;
    return (uint)lVar6;
  }
  lVar2 = *(longlong *)(this + 0x20);
  if (lVar2 != 0) {
    if (this[0x14] == (CDiskDevice)0x0) {
      param_2 = param_2 - *(longlong *)(this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001800018eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(longlong *)(lVar2 + 8) + 0x10))(lVar2 + 8,param_1,param_2);
    return uVar3;
  }
  plVar1 = (longlong *)(lVar6 + 8);
  uVar3 = (**(code **)(*(longlong *)(lVar6 + 8) + 0x10))(plVar1,param_1,param_2,param_3);
  uVar4 = (**(code **)(*plVar1 + 0x38))(plVar1);
  *(undefined4 *)(this + 0x10) = uVar4;
  return uVar3;
}




undefined1 * FUN_180001940(void)

{
  char *pcVar1;
  uint local_res10 [6];
  
  if (DAT_180007bd0 == (undefined1 *)0x0) {
    local_res10[0] = 0x100;
    DAT_180007bd0 = &DAT_180007ad0;
    pcVar1 = (char *)__std_type_info_name(0x1800071f8,&DAT_180007cf0);
    FUN_180001510(pcVar1,DAT_180007bd0,local_res10);
  }
  return DAT_180007bd0;
}




/* public: __cdecl CPartitionDevice::CPartitionDevice(class CPartitionDevice const & __ptr64)
   __ptr64 */

CPartitionDevice * __thiscall
CPartitionDevice::CPartitionDevice(CPartitionDevice *this,CPartitionDevice *param_1)

{
                    /* 0x19a0  3  ??0CPartitionDevice@@QEAA@AEBV0@@Z */
  *(undefined ***)this = IPartitionDevice::vftable;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  return this;
}




/* public: __cdecl CPartitionDevice::CPartitionDevice(struct IManagerItem * __ptr64) __ptr64 */

CPartitionDevice * __thiscall
CPartitionDevice::CPartitionDevice(CPartitionDevice *this,IManagerItem *param_1)

{
                    /* 0x1a50  4  ??0CPartitionDevice@@QEAA@PEAUIManagerItem@@@Z */
  *(undefined ***)this = IPartitionDevice::vftable;
  *(undefined ***)this = vftable;
  *(IManagerItem **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  return this;
}




/* public: __cdecl IPartitionDevice::IPartitionDevice(class IPartitionDevice const & __ptr64)
   __ptr64 */

IPartitionDevice * __thiscall
IPartitionDevice::IPartitionDevice(IPartitionDevice *this,IPartitionDevice *param_1)

{
                    /* 0x1ac0  10  ??0IPartitionDevice@@QEAA@AEBV0@@Z
                       0x1ac0  11  ??0IPartitionDevice@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: virtual __cdecl CPartitionDevice::~CPartitionDevice(void) __ptr64 */

void __thiscall CPartitionDevice::~CPartitionDevice(CPartitionDevice *this)

{
  longlong *plVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar2;
  
                    /* 0x1ad0  16  ??1CPartitionDevice@@UEAA@XZ */
  uVar2 = 0xfffffffffffffffe;
  *(undefined ***)this = vftable;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    free(*(void **)(this + 0x10));
  }
  plVar1 = *(longlong **)(this + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,1,in_R8,in_R9,uVar2);
  }
  *(undefined ***)this = IPartitionDevice::vftable;
  return;
}




/* public: virtual __cdecl IPartitionDevice::~IPartitionDevice(void) __ptr64 */

void __thiscall IPartitionDevice::~IPartitionDevice(IPartitionDevice *this)

{
                    /* 0x1b30  18  ??1IPartitionDevice@@UEAA@XZ */
  *(undefined ***)this = vftable;
  return;
}




/* public: class CPartitionDevice & __ptr64 __cdecl CPartitionDevice::operator=(class
   CPartitionDevice const & __ptr64) __ptr64 */

CPartitionDevice * __thiscall
CPartitionDevice::operator=(CPartitionDevice *this,CPartitionDevice *param_1)

{
                    /* 0x1b40  23  ??4CPartitionDevice@@QEAAAEAV0@AEBV0@@Z */
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  return this;
}




CPartitionDevice * FUN_180001bc0(CPartitionDevice *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x80,*(__uint64 *)(param_1 + -8),CPartitionDevice::~CPartitionDevice);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  CPartitionDevice::~CPartitionDevice(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001c60(undefined8 *param_1,uint param_2)

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




/* public: virtual unsigned int __cdecl CPartitionDevice::GetErrorCode(void) __ptr64 */

uint __thiscall CPartitionDevice::GetErrorCode(CPartitionDevice *this)

{
                    /* 0x1d00  45  ?GetErrorCode@CPartitionDevice@@UEAAIXZ */
  return *(uint *)(this + 0x20);
}




/* public: struct IManagerItem * __ptr64 __cdecl CPartitionDevice::GetManagerItem(void) __ptr64 */

IManagerItem * __thiscall CPartitionDevice::GetManagerItem(CPartitionDevice *this)

{
                    /* 0x1d10  49  ?GetManagerItem@CPartitionDevice@@QEAAPEAUIManagerItem@@XZ */
  return *(IManagerItem **)(this + 8);
}




/* public: virtual struct IBlockDevice * __ptr64 __cdecl CPartitionDevice::GetParent(void) __ptr64
    */

IBlockDevice * __thiscall CPartitionDevice::GetParent(CPartitionDevice *this)

{
  CDiskDevice *this_00;
  IManagerItem *pIVar1;
  IBlockDevice *this_01;
  
                    /* 0x1d20  50  ?GetParent@CPartitionDevice@@UEAAPEAUIBlockDevice@@XZ */
  this_01 = *(IBlockDevice **)(this + 0x18);
  if (this_01 == (IBlockDevice *)0x0) {
    this_00 = (CDiskDevice *)operator_new(0x30);
    if (this_00 == (CDiskDevice *)0x0) {
      this_01 = (IBlockDevice *)0x0;
    }
    else {
      pIVar1 = (IManagerItem *)(**(code **)(**(longlong **)(this + 8) + 0x38))();
      this_01 = (IBlockDevice *)CDiskDevice::CDiskDevice(this_00,pIVar1);
    }
    if (((this_01 != (IBlockDevice *)0x0) &&
        (*(IStorageDevice **)(this + 0x48) != (IStorageDevice *)0x0)) &&
       (*(longlong *)(this + 0x50) != 0)) {
      CDiskDevice::SetLdmVolAsDisk((CDiskDevice *)this_01,*(IStorageDevice **)(this + 0x48));
    }
  }
  return this_01;
}




/* public: virtual int __cdecl CPartitionDevice::GetPartitionInfo(struct tagPartitionInfo * __ptr64)
   __ptr64 */

int __thiscall CPartitionDevice::GetPartitionInfo(CPartitionDevice *this,tagPartitionInfo *param_1)

{
  byte bVar1;
  tagPartitionInfo tVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  size_t sVar12;
  uint local_res8 [2];
  
                    /* 0x1da0  51  ?GetPartitionInfo@CPartitionDevice@@UEAAHPEAUtagPartitionInfo@@@Z
                        */
  if (*(undefined4 **)(this + 0x10) != (undefined4 *)0x0) {
    sVar12 = 0xffffffffffffffff;
    *(undefined4 *)param_1 = **(undefined4 **)(this + 0x10);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(*(longlong *)(this + 0x10) + 4);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(*(longlong *)(this + 0x10) + 0xc);
    *(undefined4 *)(param_1 + 0x121) = *(undefined4 *)(*(longlong *)(this + 0x10) + 0x121);
    *(undefined4 *)(param_1 + 0x125) = *(undefined4 *)(*(longlong *)(this + 0x10) + 0x125);
    *(undefined4 *)(param_1 + 0x129) = *(undefined4 *)(*(longlong *)(this + 0x10) + 0x129);
    *(undefined4 *)(param_1 + 0x12d) = *(undefined4 *)(*(longlong *)(this + 0x10) + 0x12d);
    do {
      sVar12 = sVar12 + 1;
    } while (((char *)(*(longlong *)(this + 0x10) + 0x1c))[sVar12] != '\0');
    strncpy((char *)(param_1 + 0x1c),(char *)(*(longlong *)(this + 0x10) + 0x1c),sVar12);
    param_1[0x120] = *(tagPartitionInfo *)(*(longlong *)(this + 0x10) + 0x120);
    *(undefined8 *)(param_1 + 0x131) = *(undefined8 *)(*(longlong *)(this + 0x10) + 0x131);
    *(undefined4 *)(param_1 + 0x139) = *(undefined4 *)(*(longlong *)(this + 0x10) + 0x139);
    *(undefined4 *)(param_1 + 0x13d) = *(undefined4 *)(*(longlong *)(this + 0x10) + 0x13d);
    *(undefined4 *)(param_1 + 0x141) = *(undefined4 *)(*(longlong *)(this + 0x10) + 0x141);
    return 1;
  }
  if (DAT_1800078a0 == (undefined1 *)0x0) {
    local_res8[0] = 0x100;
    DAT_1800078a0 = &DAT_1800077a0;
    pcVar5 = (char *)__std_type_info_name(0x180007178,&DAT_180007cf0);
    FUN_180001510(pcVar5,DAT_1800078a0,local_res8);
  }
  plVar6 = (longlong *)(**(code **)**(undefined8 **)(this + 8))();
  if (plVar6 != (longlong *)0x0) {
    memset(param_1,0,0x145);
    uVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
    *(undefined4 *)param_1 = uVar3;
    uVar7 = (**(code **)(*plVar6 + 0x28))(plVar6);
    *(undefined8 *)(param_1 + 4) = uVar7;
    lVar8 = (**(code **)(*plVar6 + 0x28))(plVar6);
    lVar9 = (**(code **)(*plVar6 + 0x30))(plVar6);
    *(longlong *)(param_1 + 0xc) = lVar9 + lVar8 + -1;
    bVar1 = (**(code **)(*plVar6 + 0x50))(plVar6);
    *(uint *)(param_1 + 0x121) = (uint)bVar1;
    bVar1 = (**(code **)(*plVar6 + 0x48))(plVar6);
    *(uint *)(param_1 + 0x125) = (uint)bVar1;
    uVar3 = (**(code **)(*plVar6 + 0x40))(plVar6);
    *(undefined4 *)(param_1 + 0x129) = uVar3;
    iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6);
    if (iVar4 == 0) {
LAB_180002146:
      if ((*(longlong *)(this + 0x48) != 0) && (*(longlong *)(this + 0x50) != 0)) {
        lVar8 = *(longlong *)(this + 0x70);
        *(longlong *)(param_1 + 4) = lVar8;
        *(longlong *)(param_1 + 0xc) = lVar8 + -1 + *(longlong *)(this + 0x40);
        *(undefined4 *)(param_1 + 0x139) = *(undefined4 *)(this + 0x58);
        *(undefined4 *)(param_1 + 0x12d) = *(undefined4 *)(this + 0x60);
        *(undefined4 *)(param_1 + 0x129) = *(undefined4 *)(this + 0x78);
      }
      return 1;
    }
    if (DAT_1800079b0 == (undefined1 *)0x0) {
      local_res8[0] = 0x100;
      DAT_1800079b0 = &DAT_1800078b0;
      pcVar5 = (char *)__std_type_info_name(0x1800071a0,&DAT_180007cf0);
      FUN_180001510(pcVar5,DAT_1800079b0,local_res8);
    }
    plVar6 = (longlong *)
             (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_1800079b0);
    if (plVar6 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar6 + 0x28))(plVar6);
      sVar12 = 0xffffffffffffffff;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar11 = uVar11 + 1;
      } while (*(char *)(lVar8 + uVar11) != '\0');
      if (uVar11 < 0x103) {
        lVar8 = (**(code **)(*plVar6 + 0x28))(plVar6);
        do {
          sVar12 = sVar12 + 1;
        } while (*(char *)(lVar8 + sVar12) != '\0');
      }
      else {
        sVar12 = 0x103;
      }
      pcVar5 = (char *)(**(code **)(*plVar6 + 0x28))(plVar6);
      strncpy((char *)(param_1 + 0x1c),pcVar5,sVar12);
      uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6);
      *(undefined4 *)(param_1 + 0x12d) = uVar3;
      if (DAT_180007ac0 == (undefined1 *)0x0) {
        local_res8[0] = 0x100;
        DAT_180007ac0 = &DAT_1800079c0;
        pcVar5 = (char *)__std_type_info_name(0x1800071d0,&DAT_180007cf0);
        FUN_180001510(pcVar5,DAT_180007ac0,local_res8);
      }
      plVar6 = (longlong *)
               (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_180007ac0);
      if (plVar6 != (longlong *)0x0) {
        tVar2 = (tagPartitionInfo)(**(code **)(*plVar6 + 0x30))(plVar6);
        param_1[0x120] = tVar2;
        puVar10 = FUN_180001940();
        plVar6 = (longlong *)
                 (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),puVar10);
        if (plVar6 != (longlong *)0x0) {
          uVar7 = (**(code **)(*plVar6 + 0x28))(plVar6);
          *(undefined8 *)(param_1 + 0x131) = uVar7;
          uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6);
          *(undefined4 *)(param_1 + 0x139) = uVar3;
          uVar3 = (**(code **)(*plVar6 + 0x38))(plVar6);
          *(undefined4 *)(param_1 + 0x13d) = uVar3;
          uVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
          *(undefined4 *)(param_1 + 0x141) = uVar3;
          goto LAB_180002146;
        }
      }
    }
  }
  return 0;
}




/* public: virtual __int64 __cdecl CPartitionDevice::GetPartitionUsedSector(void) __ptr64 */

__int64 __thiscall CPartitionDevice::GetPartitionUsedSector(CPartitionDevice *this)

{
  char *pcVar1;
  longlong *plVar2;
  __int64 _Var3;
  uint local_res8 [8];
  
                    /* 0x21a0  52  ?GetPartitionUsedSector@CPartitionDevice@@UEAA_JXZ */
  if (DAT_180007bd0 == (undefined1 *)0x0) {
    local_res8[0] = 0x100;
    DAT_180007bd0 = &DAT_180007ad0;
    pcVar1 = (char *)__std_type_info_name(0x1800071f8,&DAT_180007cf0);
    FUN_180001510(pcVar1,DAT_180007bd0,local_res8);
  }
  plVar2 = (longlong *)
           (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_180007bd0);
                    /* WARNING: Could not recover jumptable at 0x00018000220d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var3 = (**(code **)(*plVar2 + 0x28))(plVar2);
  return _Var3;
}




/* public: virtual unsigned int __cdecl CPartitionDevice::GetSectorSize(void) __ptr64 */

uint __thiscall CPartitionDevice::GetSectorSize(CPartitionDevice *this)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  uint local_res8 [8];
  
                    /* 0x2220  54  ?GetSectorSize@CPartitionDevice@@UEAAIXZ */
  if (DAT_180007790 == (undefined1 *)0x0) {
    local_res8[0] = 0x100;
    DAT_180007790 = &DAT_180007690;
    pcVar2 = (char *)__std_type_info_name(0x1800070b8,&DAT_180007cf0);
    FUN_180001510(pcVar2,DAT_180007790,local_res8);
  }
  lVar3 = (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_180007790);
  if (lVar3 == 0) {
    *(undefined4 *)(this + 0x20) = 2;
    return 0;
  }
  *(undefined4 *)(this + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001800022a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 8))();
  return uVar1;
}




/* public: virtual unsigned int __cdecl CPartitionDevice::ReadSector(void * __ptr64,unsigned
   __int64,unsigned int) __ptr64 */

uint __thiscall
CPartitionDevice::ReadSector(CPartitionDevice *this,void *param_1,__uint64 param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong lVar5;
  uint local_res8 [2];
  
                    /* 0x22b0  61  ?ReadSector@CPartitionDevice@@UEAAIPEAX_KI@Z */
  lVar5 = *(longlong *)(this + 0x48);
  if (lVar5 == 0) {
    if (DAT_180007790 == (undefined1 *)0x0) {
      local_res8[0] = 0x100;
      DAT_180007790 = &DAT_180007690;
      pcVar4 = (char *)__std_type_info_name(0x1800070b8,&DAT_180007cf0);
      FUN_180001510(pcVar4,DAT_180007790,local_res8);
    }
    lVar5 = (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_180007790);
    if (lVar5 == 0) {
      *(undefined4 *)(this + 0x20) = 2;
      return 0;
    }
    plVar1 = (longlong *)(lVar5 + 8);
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2,param_3);
    uVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
    *(undefined4 *)(this + 0x20) = uVar3;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)(lVar5 + 8) + 8))(lVar5 + 8);
    if ((uVar2 == 0) && (lVar5 = *(longlong *)(this + 0x50), lVar5 != 0)) {
      uVar2 = (**(code **)(*(longlong *)(lVar5 + 8) + 8))(lVar5 + 8,param_1,param_2,param_3);
      return uVar2;
    }
  }
  return uVar2;
}




/* public: long __cdecl CPartitionDevice::SetLdmInterface(struct ILdmVolume * __ptr64,struct
   IDummyVolume * __ptr64,unsigned __int64,unsigned __int64,unsigned __int64,int) __ptr64 */

long __thiscall
CPartitionDevice::SetLdmInterface
          (CPartitionDevice *this,ILdmVolume *param_1,IDummyVolume *param_2,__uint64 param_3,
          __uint64 param_4,__uint64 param_5,int param_6)

{
                    /* 0x23d0  67
                       ?SetLdmInterface@CPartitionDevice@@QEAAJPEAUILdmVolume@@PEAUIDummyVolume@@_K22H@Z
                        */
  if (((param_1 != (ILdmVolume *)0x0) && (param_2 != (IDummyVolume *)0x0)) && (param_4 != 0)) {
    *(__uint64 *)(this + 0x40) = param_4;
    *(__uint64 *)(this + 0x58) = param_5;
    *(ILdmVolume **)(this + 0x30) = param_1;
    *(IDummyVolume **)(this + 0x28) = param_2;
    *(int *)(this + 0x60) = param_6;
    *(__uint64 *)(this + 0x38) = param_3;
    (**(code **)(*(longlong *)param_1 + 0x18))(param_1,this + 0x48,0);
    (**(code **)(**(longlong **)(this + 0x28) + 0x18))(*(longlong **)(this + 0x28),this + 0x50,0);
    return 0;
  }
  return -1;
}




/* public: long __cdecl CPartitionDevice::SetLdmVolAsDisk(struct ILdmVolume * __ptr64,unsigned
   __int64,unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64,int) __ptr64 */

long __thiscall
CPartitionDevice::SetLdmVolAsDisk
          (CPartitionDevice *this,ILdmVolume *param_1,__uint64 param_2,__uint64 param_3,
          __uint64 param_4,__uint64 param_5,__uint64 param_6,int param_7)

{
                    /* 0x2450  69  ?SetLdmVolAsDisk@CPartitionDevice@@QEAAJPEAUILdmVolume@@_K1111H@Z
                        */
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,this + 0x48,0);
  *(longlong *)(this + 0x50) = *(longlong *)(this + 0x48);
  *(__uint64 *)(this + 0x58) = param_6;
  *(int *)(this + 0x60) = param_7;
  *(__uint64 *)(this + 0x68) = param_4;
  *(__uint64 *)(this + 0x70) = param_3;
  *(__uint64 *)(this + 0x78) = param_5;
  *(__uint64 *)(this + 0x40) = param_2;
  return (*(longlong *)(this + 0x48) != 0) - 1;
}




/* public: virtual int __cdecl CPartitionDevice::SetPartitionInfo(struct tagPartitionInfo * __ptr64)
   __ptr64 */

int __thiscall CPartitionDevice::SetPartitionInfo(CPartitionDevice *this,tagPartitionInfo *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  tagPartitionInfo *ptVar5;
  
                    /* 0x24d0  71  ?SetPartitionInfo@CPartitionDevice@@UEAAHPEAUtagPartitionInfo@@@Z
                        */
  if (*(undefined8 **)(this + 0x10) != (undefined8 *)0x0) {
    lVar2 = 2;
    puVar3 = *(undefined8 **)(this + 0x10);
    do {
      ptVar5 = param_1;
      puVar4 = puVar3;
      uVar1 = *(undefined8 *)(ptVar5 + 8);
      *puVar4 = *(undefined8 *)ptVar5;
      puVar4[1] = uVar1;
      uVar1 = *(undefined8 *)(ptVar5 + 0x18);
      puVar4[2] = *(undefined8 *)(ptVar5 + 0x10);
      puVar4[3] = uVar1;
      uVar1 = *(undefined8 *)(ptVar5 + 0x28);
      puVar4[4] = *(undefined8 *)(ptVar5 + 0x20);
      puVar4[5] = uVar1;
      uVar1 = *(undefined8 *)(ptVar5 + 0x38);
      puVar4[6] = *(undefined8 *)(ptVar5 + 0x30);
      puVar4[7] = uVar1;
      uVar1 = *(undefined8 *)(ptVar5 + 0x48);
      puVar4[8] = *(undefined8 *)(ptVar5 + 0x40);
      puVar4[9] = uVar1;
      uVar1 = *(undefined8 *)(ptVar5 + 0x58);
      puVar4[10] = *(undefined8 *)(ptVar5 + 0x50);
      puVar4[0xb] = uVar1;
      uVar1 = *(undefined8 *)(ptVar5 + 0x68);
      puVar4[0xc] = *(undefined8 *)(ptVar5 + 0x60);
      puVar4[0xd] = uVar1;
      uVar1 = *(undefined8 *)(ptVar5 + 0x78);
      puVar4[0xe] = *(undefined8 *)(ptVar5 + 0x70);
      puVar4[0xf] = uVar1;
      lVar2 = lVar2 + -1;
      puVar3 = puVar4 + 0x10;
      param_1 = ptVar5 + 0x80;
    } while (lVar2 != 0);
    uVar1 = *(undefined8 *)(ptVar5 + 0x88);
    puVar4[0x10] = *(undefined8 *)(ptVar5 + 0x80);
    puVar4[0x11] = uVar1;
    uVar1 = *(undefined8 *)(ptVar5 + 0x98);
    puVar4[0x12] = *(undefined8 *)(ptVar5 + 0x90);
    puVar4[0x13] = uVar1;
    uVar1 = *(undefined8 *)(ptVar5 + 0xa8);
    puVar4[0x14] = *(undefined8 *)(ptVar5 + 0xa0);
    puVar4[0x15] = uVar1;
    uVar1 = *(undefined8 *)(ptVar5 + 0xb8);
    puVar4[0x16] = *(undefined8 *)(ptVar5 + 0xb0);
    puVar4[0x17] = uVar1;
    *(undefined4 *)(puVar4 + 0x18) = *(undefined4 *)(ptVar5 + 0xc0);
    *(tagPartitionInfo *)((longlong)puVar4 + 0xc4) = ptVar5[0xc4];
    return 1;
  }
  puVar3 = (undefined8 *)operator_new(0x145);
  *(undefined8 **)(this + 0x10) = puVar3;
  lVar2 = 2;
  do {
    ptVar5 = param_1;
    puVar4 = puVar3;
    uVar1 = *(undefined8 *)(ptVar5 + 8);
    *puVar4 = *(undefined8 *)ptVar5;
    puVar4[1] = uVar1;
    uVar1 = *(undefined8 *)(ptVar5 + 0x18);
    puVar4[2] = *(undefined8 *)(ptVar5 + 0x10);
    puVar4[3] = uVar1;
    uVar1 = *(undefined8 *)(ptVar5 + 0x28);
    puVar4[4] = *(undefined8 *)(ptVar5 + 0x20);
    puVar4[5] = uVar1;
    uVar1 = *(undefined8 *)(ptVar5 + 0x38);
    puVar4[6] = *(undefined8 *)(ptVar5 + 0x30);
    puVar4[7] = uVar1;
    uVar1 = *(undefined8 *)(ptVar5 + 0x48);
    puVar4[8] = *(undefined8 *)(ptVar5 + 0x40);
    puVar4[9] = uVar1;
    uVar1 = *(undefined8 *)(ptVar5 + 0x58);
    puVar4[10] = *(undefined8 *)(ptVar5 + 0x50);
    puVar4[0xb] = uVar1;
    uVar1 = *(undefined8 *)(ptVar5 + 0x68);
    puVar4[0xc] = *(undefined8 *)(ptVar5 + 0x60);
    puVar4[0xd] = uVar1;
    uVar1 = *(undefined8 *)(ptVar5 + 0x78);
    puVar4[0xe] = *(undefined8 *)(ptVar5 + 0x70);
    puVar4[0xf] = uVar1;
    lVar2 = lVar2 + -1;
    puVar3 = puVar4 + 0x10;
    param_1 = ptVar5 + 0x80;
  } while (lVar2 != 0);
  uVar1 = *(undefined8 *)(ptVar5 + 0x88);
  puVar4[0x10] = *(undefined8 *)(ptVar5 + 0x80);
  puVar4[0x11] = uVar1;
  uVar1 = *(undefined8 *)(ptVar5 + 0x98);
  puVar4[0x12] = *(undefined8 *)(ptVar5 + 0x90);
  puVar4[0x13] = uVar1;
  uVar1 = *(undefined8 *)(ptVar5 + 0xa8);
  puVar4[0x14] = *(undefined8 *)(ptVar5 + 0xa0);
  puVar4[0x15] = uVar1;
  uVar1 = *(undefined8 *)(ptVar5 + 0xb8);
  puVar4[0x16] = *(undefined8 *)(ptVar5 + 0xb0);
  puVar4[0x17] = uVar1;
  *(undefined4 *)(puVar4 + 0x18) = *(undefined4 *)(ptVar5 + 0xc0);
  *(tagPartitionInfo *)((longlong)puVar4 + 0xc4) = ptVar5[0xc4];
  return 1;
}




/* public: virtual void __cdecl CPartitionDevice::SetPartitionUsedSector(__int64) __ptr64 */

void __thiscall CPartitionDevice::SetPartitionUsedSector(CPartitionDevice *this,__int64 param_1)

{
  char *pcVar1;
  longlong *plVar2;
  uint local_res8 [2];
  
                    /* 0x2630  72  ?SetPartitionUsedSector@CPartitionDevice@@UEAAX_J@Z */
  if (DAT_180007ce0 == (undefined1 *)0x0) {
    local_res8[0] = 0x100;
    DAT_180007ce0 = &DAT_180007be0;
    pcVar1 = (char *)__std_type_info_name(0x180007230,&DAT_180007cf0);
    FUN_180001510(pcVar1,DAT_180007ce0,local_res8);
  }
  plVar2 = (longlong *)
           (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_180007ce0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
  }
  return;
}




/* public: virtual unsigned int __cdecl CPartitionDevice::WriteSector(void const * __ptr64,unsigned
   __int64,unsigned int) __ptr64 */

uint __thiscall
CPartitionDevice::WriteSector(CPartitionDevice *this,void *param_1,__uint64 param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong lVar5;
  uint local_res8 [2];
  
                    /* 0x26c0  76  ?WriteSector@CPartitionDevice@@UEAAIPEBX_KI@Z */
  lVar5 = *(longlong *)(this + 0x50);
  if (lVar5 != 0) {
    uVar2 = (**(code **)(*(longlong *)(lVar5 + 8) + 0x10))(lVar5 + 8);
    return uVar2;
  }
  if (DAT_180007790 == (undefined1 *)0x0) {
    local_res8[0] = 0x100;
    DAT_180007790 = &DAT_180007690;
    pcVar4 = (char *)__std_type_info_name(0x1800070b8,&DAT_180007cf0);
    FUN_180001510(pcVar4,DAT_180007790,local_res8);
  }
  lVar5 = (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),DAT_180007790);
  if (lVar5 == 0) {
    *(undefined4 *)(this + 0x20) = 2;
    return 0;
  }
  plVar1 = (longlong *)(lVar5 + 8);
  uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2,param_3);
  uVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
  *(undefined4 *)(this + 0x20) = uVar3;
  return uVar2;
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




void FUN_180002890(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180002897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180007cf0);
  return;
}




void FUN_1800028a0(void)

{
  __std_type_info_destroy_list(&DAT_180007cf0);
  return;
}




undefined8 * FUN_1800028ac(undefined8 *param_1,ulonglong param_2)

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
    FUN_180002dfc();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_180002ddc();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
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
  CDiskDevice *pCVar13;
  undefined7 uVar14;
  
  if (param_2 == 0) {
    pIVar12 = (IStorageDevice *)CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != (void *)0x0);
    if (DAT_180007d00 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_180007d00 = DAT_180007d00 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_180007d18 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c(pIVar12);
      FUN_1800028a0();
      FID_conflict__RTC_Initialize();
      DAT_180007d18 = 0;
      __scrt_dllmain_uninitialize_critical();
      uVar14 = (undefined7)((ulonglong)pIVar12 >> 8);
      __scrt_release_startup_lock((char)uVar8);
      cVar5 = __scrt_uninitialize_crt(CONCAT71(uVar14,param_3 != (void *)0x0),'\0');
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
    if (DAT_180007d18 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_180007d18 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180002890();
      __scrt_initialize_default_local_stdio_options();
      pCVar13 = (CDiskDevice *)&DAT_180004160;
      iVar6 = _initterm_e(&DAT_180004160,&DAT_180004168);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(pCVar13), (char)uVar9 != '\0'))
      {
        _initterm(&DAT_180004150,&DAT_180004158);
        DAT_180007d18 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_1800032a8();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180007d00 = DAT_180007d00 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180002bd4) */
/* WARNING: Removing unreachable block (ram,0x000180002b63) */
/* WARNING: Removing unreachable block (ram,0x000180002c17) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_180007d00 < 1)) {
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




undefined8 * FUN_180002c8c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180002ccc(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180002cec(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180002d2c(undefined8 *param_1)

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




undefined8 * FUN_180002d98(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180002ddc(void)

{
  undefined8 local_28 [5];
  
  FUN_180002ccc(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1800054d8);
}




void FUN_180002dfc(void)

{
  undefined8 local_28 [5];
  
  FUN_180002d2c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180005560);
}




char * FUN_180002e1c(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
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
  
  if (DAT_180007018 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180007018 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180007018 == 0x2b992ddfa232) {
      DAT_180007018 = 0x2b992ddfa233;
    }
  }
  _DAT_180007010 = ~DAT_180007018;
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




undefined * FUN_180002f00(void)

{
  return &DAT_180007d08;
}




undefined * FUN_180002f08(void)

{
  return &DAT_180007d10;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180002f00();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180002f08();
  *puVar1 = *puVar1 | 2;
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
LAB_180002f5a:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180007d20 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180007d20;
        pvVar1 = DAT_180007d20;
      }
      DAT_180007d20 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180002f5a;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}




/* Library Function - Single Match
    __scrt_dllmain_after_initialize_c
   
   Library: Visual Studio 2017 Release */

undefined8 __scrt_dllmain_after_initialize_c(CDiskDevice *param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  ulonglong uVar4;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    iVar2 = CDiskDevice::Lock(param_1);
    uVar4 = _configure_narrow_argv(iVar2);
    if ((int)uVar4 != 0) {
      return uVar4 & 0xffffffffffffff00;
    }
    uVar3 = _initialize_narrow_environment();
  }
  else {
    uVar3 = __isa_available_init();
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}




/* Library Function - Single Match
    __scrt_dllmain_before_initialize_c
   
   Library: Visual Studio 2017 Release */

bool __scrt_dllmain_before_initialize_c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800030e4(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_18000368c();
  if (cVar1 != '\0') {
    cVar1 = FUN_18000368c();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_18000368c();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_18000368c();
  FUN_18000368c();
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
    _execute_onexit_table(&DAT_180007d30);
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
  FUN_18000368c();
  FUN_18000368c();
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
    DAT_180007d28 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_18000368c();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18000368c();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18000368c();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800030e4(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_180007d29 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180007018 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180007018;
      _DAT_180007d30 = in_RAX;
      uRam0000000180007d38 = in_RAX;
      _DAT_180007d40 = in_RAX;
      _DAT_180007d48 = in_RAX;
      uRam0000000180007d50 = in_RAX;
      _DAT_180007d58 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180007d30);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180007d48), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180007d29 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018000324a) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_180003233;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180003233:
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
    DAT_180007d20 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180007d28 == '\0') || (param_2 == '\0')) {
    FUN_18000368c();
    FUN_18000368c();
  }
  return 1;
}




undefined * FUN_1800032a8(void)

{
  return &DAT_180007d68;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800032b0(void)

{
  _DAT_180007d60 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x1800032eb;
  FUN_1800032b0();
  *(undefined8 *)(puVar4 + -8) = 0x1800032fc;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180003306;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180003320;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180003361;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180003393;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x1800033b5;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800033d6;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1800033e1;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1800033f1;
    FUN_1800032b0();
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
  
  for (puVar1 = &DAT_180005078; puVar1 < &DAT_180005078; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180005088; puVar1 < &DAT_180005088; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018000354e) */
/* WARNING: Removing unreachable block (ram,0x0001800034cc) */
/* WARNING: Removing unreachable block (ram,0x0001800034a7) */
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
  
  DAT_180007024 = 2;
  _DAT_180007020 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180007028 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180007d64 = DAT_180007d64 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_180007d64 = DAT_180007d64 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180007020 = 2;
    DAT_180007024 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_180007024 = 0xe;
      _DAT_180007020 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180007020 = 5;
        DAT_180007024 = 0x2e;
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
  return DAT_180007030 != 0;
}




undefined1 FUN_18000368c(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001800036a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_1800036b0(undefined8 param_1,longlong param_2)

{
  IDiskDevice::~IDiskDevice(*(IDiskDevice **)(param_2 + 0x20));
  return;
}




void Unwind_1800036c0(undefined8 param_1,longlong param_2)

{
  IDiskDevice::~IDiskDevice(*(IDiskDevice **)(param_2 + 0x40));
  return;
}




void Unwind_1800036d0(undefined8 param_1,longlong param_2)

{
  IPartitionDevice::~IPartitionDevice(*(IPartitionDevice **)(param_2 + 0x20));
  return;
}




void Unwind_1800036e0(undefined8 param_1,longlong param_2)

{
  IPartitionDevice::~IPartitionDevice(*(IPartitionDevice **)(param_2 + 0x40));
  return;
}




void Unwind_1800036f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
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




void FUN_18000377a(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180003791(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_1800037ad(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}



