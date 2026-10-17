
/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1000  37  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)(this,param_1);
  return pIVar1;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1030  40  ?Release@IObject@@QEBAKXZ */
  uVar1 = (**(code **)(*(longlong *)this + 8))(this);
  return uVar1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1050  30  ?AddRef@IObject@@QEBAKXZ */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))(this);
  return uVar1;
}




/* public: __cdecl IObject::IObject(void) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this)

{
                    /* 0x1070  6  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x1090  4  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x1090  5  ??0IObject@@QEAA@AEBU0@@Z */
  *(undefined ***)this = vftable;
  return this;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x10b0  15  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x10b0  16  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x10b0  19  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x10b0  20  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




void FUN_1800010c0(longlong param_1)

{
  __std_type_info_name(param_1 + 8,&DAT_18000a5e0);
  return;
}




int FUN_1800010f0(char *param_1,undefined1 *param_2,uint *param_3)

{
  uint local_28;
  uint local_20;
  int local_1c;
  char *local_18;
  
  local_28 = 0;
  local_1c = 0;
  if ((*param_3 == 0) || (param_2 == (undefined1 *)0x0)) {
    local_1c = 0;
  }
  else {
    *param_2 = 0;
    if (*param_1 == 'c') {
      local_20 = 6;
    }
    else {
      if (*param_1 != 's') {
        return 0;
      }
      local_20 = 7;
    }
    for (local_18 = param_1 + local_20; *local_18 != '\0'; local_18 = local_18 + 1) {
      if (*local_18 == ':') {
        if (*param_3 <= local_28) {
          return 0;
        }
        param_2[local_28] = 0x2e;
        local_18 = local_18 + 1;
        local_1c = local_28 + 1;
      }
      else {
        if (*param_3 <= local_28) {
          return 0;
        }
        param_2[local_28] = *local_18;
      }
      local_28 = local_28 + 1;
    }
    if (local_28 < *param_3) {
      param_2[local_28] = 0;
      *param_3 = local_28;
    }
    else {
      local_1c = 0;
    }
  }
  return local_1c;
}




undefined8 FUN_180001260(undefined *param_1,undefined8 param_2)

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




undefined8 FUN_1800012b0(LPCSTR param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined8 uVar2;
  
  hModule = LoadLibraryA(param_1);
  if (hModule == (HMODULE)0x0) {
    uVar2 = 0;
  }
  else {
    pFVar1 = GetProcAddress(hModule,"GetModule");
    if (pFVar1 == (FARPROC)0x0) {
      FreeLibrary(hModule);
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_180001260(pFVar1,hModule);
    }
  }
  return uVar2;
}




void FUN_180001330(char *param_1)

{
  char *pcVar1;
  undefined1 auStack_168 [32];
  char *local_148;
  ulonglong local_140;
  ulonglong local_138;
  CHAR local_128;
  char acStack_127 [271];
  ulonglong local_18;
  
  local_18 = DAT_18000a008 ^ (ulonglong)auStack_168;
  pcVar1 = param_1;
  if (param_1 != (char *)0x0) {
    while (local_148 = pcVar1, *local_148 != '\0') {
      if (0xff < (longlong)local_148 - (longlong)param_1) goto LAB_1800014ac;
      local_148[(longlong)(&local_128 + -(longlong)param_1)] = *local_148;
      pcVar1 = local_148 + 1;
    }
    local_140 = (longlong)local_148 - (longlong)param_1;
    if (0x103 < local_140) {
      __report_rangecheckfailure();
    }
    (&local_128)[local_140] = '\0';
    local_148[(longlong)(&local_128 + -(longlong)param_1)] = '.';
    local_148[(longlong)(&local_128 + (1 - (longlong)param_1))] = 'm';
    local_148[(longlong)(&local_128 + (2 - (longlong)param_1))] = 'o';
    local_148 = local_148 + 3;
    local_138 = (longlong)local_148 - (longlong)param_1;
    if (0x103 < local_138) {
      __report_rangecheckfailure();
    }
    (&local_128)[local_138] = '\0';
    FUN_1800012b0(&local_128);
  }
LAB_1800014ac:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_168);
  return;
}




/* public: virtual int __cdecl IStorageDevice::DeviceIoControl(unsigned long,void * __ptr64,unsigned
   long,void * __ptr64,unsigned long,unsigned long * __ptr64) __ptr64 */

int __thiscall
IStorageDevice::DeviceIoControl
          (IStorageDevice *this,ulong param_1,void *param_2,ulong param_3,void *param_4,
          ulong param_5,ulong *param_6)

{
                    /* 0x14d0  32  ?DeviceIoControl@IStorageDevice@@UEAAHKPEAXK0KPEAK@Z */
  return 0;
}




/* public: virtual int __cdecl IStorageDevice::GetInformationOffset(unsigned __int64 * __ptr64
   const) __ptr64 */

int __thiscall IStorageDevice::GetInformationOffset(IStorageDevice *this,__uint64 *param_1)

{
                    /* 0x14f0  36  ?GetInformationOffset@IStorageDevice@@UEAAHQEA_K@Z
                       0x14f0  43  ?SetBitlockerInfo@IStorageDevice@@UEAAHPEAUBitlockerInfo@@@Z */
  return 0;
}




/* public: virtual int __cdecl IStorageDevice::ConvertVolume(void) __ptr64 */

int __thiscall IStorageDevice::ConvertVolume(IStorageDevice *this)

{
                    /* 0x1500  31  ?ConvertVolume@IStorageDevice@@UEAAHXZ
                       0x1500  33  ?GetBitlockerInfo@IStorageDevice@@UEAAPEAUBitlockerInfo@@XZ
                       0x1500  39  ?IsBitlockerVolume@IStorageDevice@@UEAAHXZ */
  return 0;
}




/* public: virtual void __cdecl IStorageDevice::ReleaseBitlocker(void) __ptr64 */

void __thiscall IStorageDevice::ReleaseBitlocker(IStorageDevice *this)

{
                    /* 0x1510  41  ?ReleaseBitlocker@IStorageDevice@@UEAAXXZ */
  return;
}




/* public: virtual int __cdecl IStorageDevice::SetMetaFilePos(unsigned __int64 * __ptr64
   const,unsigned __int64) __ptr64 */

int __thiscall
IStorageDevice::SetMetaFilePos(IStorageDevice *this,__uint64 *param_1,__uint64 param_2)

{
                    /* 0x1520  44  ?SetMetaFilePos@IStorageDevice@@UEAAHQEA_K_K@Z */
  return 0;
}




/* public: virtual int __cdecl IStorageDevice::SetBitlockerEnable(int) __ptr64 */

int __thiscall IStorageDevice::SetBitlockerEnable(IStorageDevice *this,int param_1)

{
                    /* 0x1540  42  ?SetBitlockerEnable@IStorageDevice@@UEAAHH@Z */
  return 0;
}




/* public: virtual int __cdecl IStorageDevice::GetBitlockerStatus(void) __ptr64 */

int __thiscall IStorageDevice::GetBitlockerStatus(IStorageDevice *this)

{
                    /* 0x1550  34  ?GetBitlockerStatus@IStorageDevice@@UEAAHXZ */
  return -1;
}




/* public: __cdecl IStorageDevice::IStorageDevice(void) __ptr64 */

IStorageDevice * __thiscall IStorageDevice::IStorageDevice(IStorageDevice *this)

{
                    /* 0x1560  11  ??0IStorageDevice@@QEAA@XZ */
  IObject::IObject((IObject *)this);
  FUN_1800015b0((undefined8 *)(this + 8));
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




undefined8 * FUN_1800015b0(undefined8 *param_1)

{
  *param_1 = IBlockDevice::vftable;
  return param_1;
}




/* public: __cdecl IStorageDevice::IStorageDevice(struct IStorageDevice && __ptr64) __ptr64 */

IStorageDevice * __thiscall
IStorageDevice::IStorageDevice(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x15d0  9  ??0IStorageDevice@@QEAA@$$QEAU0@@Z
                       0x15d0  10  ??0IStorageDevice@@QEAA@AEBU0@@Z */
  IObject::IObject((IObject *)this,(IObject *)param_1);
  FUN_180001630((undefined8 *)(this + 8));
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




undefined8 * FUN_180001630(undefined8 *param_1)

{
  *param_1 = IBlockDevice::vftable;
  return param_1;
}




/* public: struct IStorageDevice & __ptr64 __cdecl IStorageDevice::operator=(struct IStorageDevice
   && __ptr64) __ptr64 */

IStorageDevice * __thiscall IStorageDevice::operator=(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x1650  22  ??4IStorageDevice@@QEAAAEAU0@$$QEAU0@@Z
                       0x1650  23  ??4IStorageDevice@@QEAAAEAU0@AEBU0@@Z */
  CLogWriter::operator=((CLogWriter *)this,(CLogWriter *)param_1);
  CLogWriter::operator=((CLogWriter *)(this + 8),(CLogWriter *)(param_1 + 8));
  return this;
}




undefined4 * FUN_1800016a0(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *param_1 = 0xff;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  *(undefined1 *)((longlong)param_1 + 0x425) = 1;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x119) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  param_1[0x11c] = 0;
  *(undefined8 *)(param_1 + 0x11e) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined1 *)((longlong)param_1 + 0x481) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10e) = 0;
  puVar2 = param_1 + 0x115;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((longlong)puVar2 + 1);
  }
  return param_1;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  longlong lVar1;
  CLogInBootICE *pCVar2;
  
  pCVar2 = this;
                    /* 0x17d0  14  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pCVar2 = *param_1;
    param_1 = param_1 + 1;
    pCVar2 = pCVar2 + 1;
  }
  return this;
}




/* public: virtual __cdecl IPartitionDevice::~IPartitionDevice(void) __ptr64 */

void __thiscall IPartitionDevice::~IPartitionDevice(IPartitionDevice *this)

{
                    /* 0x1800  13  ??1IPartitionDevice@@UEAA@XZ */
  *(undefined ***)this = vftable;
  return;
}




/* public: __cdecl IPartitionDevice::IPartitionDevice(void) __ptr64 */

IPartitionDevice * __thiscall IPartitionDevice::IPartitionDevice(IPartitionDevice *this)

{
                    /* 0x1820  8  ??0IPartitionDevice@@QEAA@XZ */
  FUN_1800015b0((undefined8 *)this);
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IPartitionDevice::IPartitionDevice(class IPartitionDevice const & __ptr64)
   __ptr64 */

IPartitionDevice * __thiscall
IPartitionDevice::IPartitionDevice(IPartitionDevice *this,IPartitionDevice *param_1)

{
                    /* 0x1850  7  ??0IPartitionDevice@@QEAA@AEBV0@@Z */
  FUN_180001630((undefined8 *)this);
  *(undefined ***)this = vftable;
  return this;
}




/* public: class IDiskDevice & __ptr64 __cdecl IDiskDevice::operator=(class IDiskDevice const &
   __ptr64) __ptr64 */

IDiskDevice * __thiscall IDiskDevice::operator=(IDiskDevice *this,IDiskDevice *param_1)

{
                    /* 0x1890  18  ??4IDiskDevice@@QEAAAEAV0@AEBV0@@Z
                       0x1890  21  ??4IPartitionDevice@@QEAAAEAV0@AEBV0@@Z */
  CLogWriter::operator=((CLogWriter *)this,(CLogWriter *)param_1);
  return this;
}




IPartitionDevice * FUN_1800018c0(IPartitionDevice *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    IPartitionDevice::~IPartitionDevice(param_1);
    if ((param_2 & 1) != 0) {
      free(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_
              (param_1,8,*(__uint64 *)(param_1 + -8),IPartitionDevice::~IPartitionDevice);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    param_1 = param_1 + -8;
  }
  return param_1;
}




/* public: virtual __cdecl IDiskDevice::~IDiskDevice(void) __ptr64 */

void __thiscall IDiskDevice::~IDiskDevice(IDiskDevice *this)

{
                    /* 0x1970  12  ??1IDiskDevice@@UEAA@XZ */
  *(undefined ***)this = vftable;
  return;
}




/* public: __cdecl IDiskDevice::IDiskDevice(void) __ptr64 */

IDiskDevice * __thiscall IDiskDevice::IDiskDevice(IDiskDevice *this)

{
                    /* 0x1990  3  ??0IDiskDevice@@QEAA@XZ */
  FUN_1800015b0((undefined8 *)this);
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IDiskDevice::IDiskDevice(class IDiskDevice const & __ptr64) __ptr64 */

IDiskDevice * __thiscall IDiskDevice::IDiskDevice(IDiskDevice *this,IDiskDevice *param_1)

{
                    /* 0x19c0  2  ??0IDiskDevice@@QEAA@AEBV0@@Z */
  FUN_180001630((undefined8 *)this);
  *(undefined ***)this = vftable;
  return this;
}




IDiskDevice * FUN_180001a00(IDiskDevice *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    IDiskDevice::~IDiskDevice(param_1);
    if ((param_2 & 1) != 0) {
      free(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_(param_1,8,*(__uint64 *)(param_1 + -8),IDiskDevice::~IDiskDevice)
    ;
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    param_1 = param_1 + -8;
  }
  return param_1;
}




/* public: struct IManagerItem * __ptr64 __cdecl CPartitionDevice::GetManagerItem(void) __ptr64 */

IManagerItem * __thiscall CPartitionDevice::GetManagerItem(CPartitionDevice *this)

{
                    /* 0x1ab0  38  ?GetManagerItem@CPartitionDevice@@QEAAPEAUIManagerItem@@XZ */
  return *(IManagerItem **)(this + 8);
}




/* public: virtual unsigned int __cdecl CPartitionDevice::GetErrorCode(void) __ptr64 */

uint __thiscall CPartitionDevice::GetErrorCode(CPartitionDevice *this)

{
                    /* 0x1ac0  35  ?GetErrorCode@CPartitionDevice@@UEAAIXZ */
  return *(uint *)(this + 0x20);
}




/* public: __cdecl CPartitionDevice::CPartitionDevice(class CPartitionDevice const & __ptr64)
   __ptr64 */

CPartitionDevice * __thiscall
CPartitionDevice::CPartitionDevice(CPartitionDevice *this,CPartitionDevice *param_1)

{
                    /* 0x1ad0  1  ??0CPartitionDevice@@QEAA@AEBV0@@Z */
  IPartitionDevice::IPartitionDevice((IPartitionDevice *)this,(IPartitionDevice *)param_1);
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




/* public: class CPartitionDevice & __ptr64 __cdecl CPartitionDevice::operator=(class
   CPartitionDevice const & __ptr64) __ptr64 */

CPartitionDevice * __thiscall
CPartitionDevice::operator=(CPartitionDevice *this,CPartitionDevice *param_1)

{
                    /* 0x1c10  17  ??4CPartitionDevice@@QEAAAEAV0@AEBV0@@Z */
  IDiskDevice::operator=((IDiskDevice *)this,(IDiskDevice *)param_1);
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




CPartitionDevice * FUN_180001d50(CPartitionDevice *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    CPartitionDevice::~CPartitionDevice(param_1);
    if ((param_2 & 1) != 0) {
      free(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_
              (param_1,0x80,*(__uint64 *)(param_1 + -8),~CPartitionDevice_exref);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    param_1 = param_1 + -8;
  }
  return param_1;
}




undefined8 FUN_180001e00(void)

{
  longlong *plVar1;
  undefined8 local_10;
  
  local_10 = 0;
  plVar1 = (longlong *)FUN_180003fb0("DeviceManager");
  if (plVar1 == (longlong *)0x0) {
    OutputDebugStringA("dodule null");
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,4);
    (**(code **)(*plVar1 + 0x48))(plVar1,0);
    local_10 = (**(code **)(*plVar1 + 0x60))(plVar1,3);
  }
  return local_10;
}




void FUN_180001ea0(IObject *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  BOOL BVar2;
  char *pcVar3;
  longlong lVar4;
  WCHAR *pWVar5;
  undefined4 *puVar6;
  undefined1 auStackY_2b8 [32];
  DWORD local_278 [2];
  HANDLE local_270;
  IObject *local_268;
  undefined4 local_260;
  undefined4 local_258 [2];
  undefined8 local_250;
  undefined8 local_248;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18000a008 ^ (ulonglong)auStackY_2b8;
  if (param_1 != (IObject *)0x0) {
    pcVar3 = (char *)FUN_180004160();
    local_268 = IObject::GetInterfaceEx(param_1,pcVar3);
    if (local_268 != (IObject *)0x0) {
      pWVar5 = local_228;
      for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)pWVar5 = 0;
        pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
      }
      uVar1 = (**(code **)(*(longlong *)local_268 + 0x88))(local_268);
      FUN_180004c70(local_228,L"\\\\.\\physicaldrive%d",(ulonglong)uVar1,param_4);
      local_270 = CreateFileW(local_228,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (local_270 != (HANDLE)0xffffffffffffffff) {
        FlushFileBuffers(local_270);
        puVar6 = local_258;
        for (lVar4 = 0x28; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((longlong)puVar6 + 1);
        }
        local_258[0] = 0x28;
        local_250 = 1;
        local_248 = 1;
        local_278[0] = 0;
        BVar2 = DeviceIoControl(local_270,0x7c0f4,local_258,0x28,(LPVOID)0x0,0,local_278,
                                (LPOVERLAPPED)0x0);
        if (BVar2 != 0) {
          DeviceIoControl(local_270,0x70140,(LPVOID)0x0,0,(LPVOID)0x0,0,local_278,(LPOVERLAPPED)0x0)
          ;
          Sleep(1000);
          local_250 = 0;
          BVar2 = DeviceIoControl(local_270,0x7c0f4,local_258,0x28,(LPVOID)0x0,0,local_278,
                                  (LPOVERLAPPED)0x0);
          if (BVar2 != 0) {
            local_260 = 0;
            DeviceIoControl(local_270,0x70140,(LPVOID)0x0,0,(LPVOID)0x0,0,local_278,
                            (LPOVERLAPPED)0x0);
          }
          Sleep(2000);
        }
        CloseHandle(local_270);
        local_270 = (HANDLE)0xffffffffffffffff;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2b8);
  return;
}




undefined8 FUN_180002120(longlong *param_1,int param_2)

{
  int iVar1;
  IObject *pIVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_30 = 0xfffffffffffffffe;
  local_40 = 0;
  if (param_1 != (longlong *)0x0) {
    pIVar2 = (IObject *)(**(code **)(*param_1 + 0x30))(param_1);
    FUN_180004180(&local_58,pIVar2);
    lVar3 = FUN_180003ee0(&local_58);
    if (lVar3 == 0) {
      FUN_1800022d0(&local_58);
    }
    else {
      FUN_180003f50(&local_60);
      while( true ) {
        puVar4 = FUN_180003ef0(&local_58,&local_28);
        local_50 = (longlong *)FUN_180003ee0(puVar4);
        pIVar2 = (IObject *)(**(code **)(*local_50 + 0x28))(local_50);
        lVar3 = FUN_1800041b0(&local_60,pIVar2);
        if (lVar3 == 0) break;
        local_38 = (char *)FUN_180004160();
        puVar4 = FUN_180003ef0(&local_60,&local_20);
        pIVar2 = (IObject *)FUN_180003ee0(puVar4);
        pIVar2 = IObject::GetInterfaceEx(pIVar2,local_38);
        FUN_1800041e0(&local_68,pIVar2);
        lVar3 = FUN_180003ee0(&local_68);
        if (lVar3 == 0) {
          FUN_1800022d0(&local_68);
        }
        else {
          puVar4 = FUN_180003ef0(&local_68,local_18);
          local_48 = (longlong *)FUN_180003ee0(puVar4);
          iVar1 = (**(code **)(*local_48 + 0x88))(local_48);
          if (param_2 == iVar1) {
            local_40 = FUN_180003ee0(&local_60);
            FUN_1800022d0(&local_68);
            break;
          }
          FUN_1800022d0(&local_68);
        }
      }
      FUN_1800022d0(&local_60);
      FUN_1800022d0(&local_58);
    }
  }
  return local_40;
}




void FUN_1800022d0(longlong *param_1)

{
  AddRef(param_1);
  return;
}




undefined4 FUN_1800022f0(IObject *param_1)

{
  int iVar1;
  char *pcVar2;
  IObject *pIVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  IObject *pIVar6;
  undefined4 local_58;
  longlong local_28 [5];
  
  local_28[1] = 0xfffffffffffffffe;
  local_58 = 0;
  if (param_1 != (IObject *)0x0) {
    pcVar2 = (char *)FUN_180004210();
    pIVar3 = IObject::GetInterfaceEx(param_1,pcVar2);
    if (pIVar3 != (IObject *)0x0) {
      pIVar3 = (IObject *)(**(code **)(*(longlong *)pIVar3 + 0x30))(pIVar3);
      FUN_180004180(local_28,pIVar3);
      while( true ) {
        puVar4 = FUN_180003ef0(local_28,local_28 + 2);
        plVar5 = (longlong *)FUN_180003ee0(puVar4);
        pIVar3 = (IObject *)(**(code **)(*plVar5 + 0x28))(plVar5);
        if (pIVar3 == (IObject *)0x0) break;
        pcVar2 = (char *)FUN_180004230();
        pIVar6 = IObject::GetInterfaceEx(pIVar3,pcVar2);
        if ((pIVar6 != (IObject *)0x0) &&
           (iVar1 = (**(code **)(*(longlong *)pIVar6 + 0x58))(pIVar6), iVar1 != 0)) {
          pcVar2 = (char *)FUN_180004270();
          pIVar3 = IObject::GetInterfaceEx(pIVar3,pcVar2);
          if (pIVar3 != (IObject *)0x0) {
            (**(code **)(*(longlong *)pIVar3 + 0x28))(pIVar3,0);
          }
        }
      }
      local_58 = 1;
      FUN_1800022d0(local_28);
    }
  }
  return local_58;
}




undefined4 FUN_180002440(ulonglong param_1)

{
  undefined4 local_18;
  
  if (param_1 < 0x1000001) {
    if (param_1 < 0x400000) {
      local_18 = 1;
    }
    else {
      local_18 = 8;
    }
  }
  else {
    local_18 = 0x40;
  }
  return local_18;
}




void FUN_180002490(char param_1,undefined8 param_2,undefined8 param_3,LPDWORD param_4)

{
  BOOL BVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStackY_428 [32];
  int local_3e8;
  DWORD local_3e0 [6];
  WCHAR local_3c8 [104];
  WCHAR local_2f8 [104];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18000a008 ^ (ulonglong)auStackY_428;
  local_3e8 = 0;
  while ((local_3e8 < 0x1e && (param_1 != '\0'))) {
    pWVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pWVar3 = 0;
      pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
    }
    FUN_1800042d0(local_228,L"%c:\\",(ulonglong)(ushort)(short)param_1,param_4);
    local_3e0[2] = 0;
    local_3e0[1] = 0;
    local_3e0[0] = 0;
    pWVar3 = local_2f8;
    for (lVar2 = 200; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pWVar3 = 0;
      pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
    }
    pWVar3 = local_3c8;
    for (lVar2 = 200; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pWVar3 = 0;
      pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
    }
    param_4 = local_3e0 + 2;
    BVar1 = GetVolumeInformationW
                      (local_228,local_2f8,100,param_4,local_3e0 + 1,local_3e0,local_3c8,100);
    if (BVar1 != 0) break;
    Sleep(1000);
    local_3e8 = local_3e8 + 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_428);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800025e0(IObject *param_1,IObject *param_2,IObject *param_3,LPDWORD param_4)

{
  char cVar1;
  int iVar2;
  IObject *pIVar3;
  ulonglong uVar4;
  IObject *pIVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_1188 [32];
  IObject local_1168;
  longlong *local_1160;
  char local_1158;
  IObject local_1157;
  undefined1 local_1156;
  undefined1 local_1155;
  IObject *local_1150;
  IObject *local_1148;
  IObject *local_1140;
  IObject *local_1138;
  undefined1 local_1130;
  IObject *local_1128;
  longlong *local_1120;
  uint local_1118;
  uint local_1114;
  IObject *local_1110;
  IObject *local_1108;
  int local_1100;
  longlong *local_10f8;
  longlong *local_10f0;
  IObject *local_10e8;
  IObject *local_10e0;
  longlong *local_10d8;
  longlong *local_10d0;
  IObject *local_10c8;
  IObject *local_10c0;
  CPartitionDevice *local_10b8;
  longlong *local_10b0;
  IObject *local_10a8;
  IObject *local_10a0;
  undefined4 local_1098;
  IObject *local_1090;
  longlong *local_1088;
  longlong *local_1080;
  undefined8 local_1078;
  undefined8 local_1070;
  longlong *local_1068;
  undefined4 local_1060;
  undefined8 local_1058;
  undefined4 local_1050;
  undefined4 local_104c;
  undefined4 local_1048;
  undefined4 local_1044;
  undefined8 local_1040;
  undefined8 local_1038;
  char local_1030 [12];
  undefined1 uStack_1024;
  undefined1 local_1018 [28];
  undefined4 uStack_ffc;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1800025f4;
  local_1070 = 0xfffffffffffffffe;
  local_18 = DAT_18000a008 ^ (ulonglong)auStack_1188;
  local_1114 = 0;
  local_1108 = (IObject *)0xffffffffffffffff;
  local_1160 = (longlong *)0x0;
  local_1168 = (IObject)0x0;
  pIVar3 = param_2;
  if (param_1 != (IObject *)0x0) {
    pIVar3 = (IObject *)FUN_180004230();
    local_1140 = IObject::GetInterfaceEx(param_1,(char *)pIVar3);
    if (local_1140 != (IObject *)0x0) {
      pIVar3 = (IObject *)FUN_180004250();
      local_1138 = IObject::GetInterfaceEx(param_1,(char *)pIVar3);
      if (local_1138 != (IObject *)0x0) {
        local_1158 = (**(code **)(*(longlong *)local_1138 + 0x30))(local_1138);
        pIVar3 = (IObject *)FUN_180004310();
        local_1090 = IObject::GetInterfaceEx(param_1,(char *)pIVar3);
        if (local_1090 != (IObject *)0x0) {
          pIVar3 = (IObject *)FUN_180004330();
          local_1110 = IObject::GetInterfaceEx(param_1,(char *)pIVar3);
          if (local_1110 != (IObject *)0x0) {
            pIVar3 = (IObject *)FUN_180004350();
            local_10c8 = IObject::GetInterfaceEx(param_1,(char *)pIVar3);
            if ((((local_10c8 != (IObject *)0x0) &&
                 (local_1128 = (IObject *)(**(code **)(*(longlong *)param_1 + 0x38))(param_1),
                 local_1128 != (IObject *)0x0)) &&
                (local_10f0 = (longlong *)(**(code **)(*(longlong *)local_1128 + 0x40))(local_1128),
                local_10f0 != (longlong *)0x0)) &&
               ((local_10d8 = (longlong *)FUN_180003fb0("FatFormat"), local_10d8 != (longlong *)0x0
                && (local_1160 = (longlong *)(**(code **)(*local_10f0 + 0x68))(local_10f0),
                   local_1160 != (longlong *)0x0)))) {
              pIVar3 = (IObject *)FUN_180004270();
              local_10e0 = IObject::GetInterfaceEx(param_1,(char *)pIVar3);
              if (local_10e0 != (IObject *)0x0) {
                pIVar3 = (IObject *)FUN_180004290();
                local_10e8 = IObject::GetInterfaceEx(local_1128,(char *)pIVar3);
                if (local_10e8 != (IObject *)0x0) {
                  local_1100 = (**(code **)(*(longlong *)local_10e8 + 0x28))(local_10e8);
                  FUN_1800022f0(local_1128);
                  pIVar3 = (IObject *)CONCAT71((int7)((ulonglong)pIVar3 >> 8),1);
                  (**(code **)(*(longlong *)local_10e0 + 0x28))(local_10e0);
                  local_10b8 = (CPartitionDevice *)operator_new(0x80);
                  if (local_10b8 == (CPartitionDevice *)0x0) {
                    local_10b0 = (longlong *)0x0;
                  }
                  else {
                    pIVar3 = param_1;
                    local_10b0 = (longlong *)
                                 CPartitionDevice::CPartitionDevice
                                           (local_10b8,(IManagerItem *)param_1);
                  }
                  local_1088 = local_10b0;
                  local_1120 = local_10b0;
                  if (local_10b0 != (longlong *)0x0) {
                    (**(code **)(*local_1160 + 0xc0))(local_1160,1);
                    local_1108 = (IObject *)
                                 (**(code **)(*local_1160 + 0x88))(local_1160,param_1,0x14);
                    (**(code **)(*local_1160 + 0xc0))(local_1160,0);
                    local_1130 = (**(code **)(*local_1160 + 0x78))(local_1160,param_1);
                    local_1068 = local_1120;
                    strncpy(local_1030,"usbboot",0xb);
                    uStack_1024 = 0;
                    local_1048 = 3;
                    local_1060 = 1;
                    local_104c = (**(code **)(*(longlong *)local_1140 + 0x30))(local_1140);
                    uVar4 = (**(code **)(*(longlong *)local_1140 + 0x30))(local_1140);
                    local_1050 = FUN_180002440(uVar4);
                    local_1040 = 0;
                    local_1038 = 0;
                    local_1058 = (**(code **)(*(longlong *)local_1140 + 0x28))(local_1140);
                    local_1044 = 0;
                    puVar7 = local_1018;
                    for (lVar6 = 0x1000; lVar6 != 0; lVar6 = lVar6 + -1) {
                      *puVar7 = 0;
                      puVar7 = puVar7 + 1;
                    }
                    puVar7 = local_1018;
                    for (lVar6 = 0x1000; lVar6 != 0; lVar6 = lVar6 + -1) {
                      *puVar7 = 0;
                      puVar7 = puVar7 + 1;
                    }
                    iVar2 = (**(code **)(*local_10d8 + 0x38))(local_10d8,&local_1068);
                    local_1118 = (uint)(iVar2 == 0);
                    local_1114 = local_1118;
                    local_1098 = 0;
                    (**(code **)(*local_1068 + 8))(local_1068,local_1018,0,1);
                    uStack_ffc = (**(code **)(*(longlong *)local_1140 + 0x28))(local_1140);
                    param_4 = (LPDWORD)0x1;
                    param_3 = (IObject *)0x0;
                    (**(code **)(*local_1068 + 0x10))(local_1068,local_1018);
                    if (local_1120 != (longlong *)0x0) {
                      (**(code **)(*local_1120 + 0x20))(local_1120);
                      local_1080 = local_1120;
                      local_10d0 = local_1120;
                      if (local_1120 == (longlong *)0x0) {
                        local_1078 = 0;
                      }
                      else {
                        local_1078 = (**(code **)(*local_1120 + 0x40))(local_1120,1);
                      }
                    }
                    (**(code **)(*(longlong *)local_10c8 + 0x30))(local_10c8,3);
                    (**(code **)(*(longlong *)local_1110 + 0x30))(local_1110,local_1050);
                    (**(code **)(*(longlong *)local_1110 + 0x50))(local_1110,0);
                    pIVar3 = (IObject *)FUN_180004210();
                    local_10a8 = IObject::GetInterfaceEx(local_1128,(char *)pIVar3);
                    if (local_10a8 != (IObject *)0x0) {
                      pIVar3 = (IObject *)FUN_1800042b0();
                      local_10c0 = IObject::GetInterfaceEx(local_10a8,(char *)pIVar3);
                      if ((local_10c0 != (IObject *)0x0) &&
                         ((local_1100 == 8 ||
                          (cVar1 = (**(code **)(*(longlong *)local_10c0 + 0x28))(local_10c0),
                          cVar1 != '\0')))) {
                        Sleep(5000);
                        pIVar5 = (IObject *)FUN_180001e00();
                        local_1150 = pIVar5;
                        if ((pIVar5 != (IObject *)0x0) &&
                           (((local_1148 = (IObject *)
                                           (**(code **)(*(longlong *)pIVar5 + 0x40))(pIVar5),
                             pIVar3 = pIVar5, param_3 = param_1, local_1148 != (IObject *)0x0 &&
                             (pIVar3 = local_1150, param_3 = local_1128,
                             local_10a0 = (IObject *)
                                          (**(code **)(*(longlong *)local_1150 + 0x38))(local_1150),
                             local_10a0 != (IObject *)0x0)) &&
                            (local_1160 = (longlong *)
                                          (**(code **)(*(longlong *)local_1150 + 0x68))(local_1150),
                            local_1160 != (longlong *)0x0)))) {
                          pIVar3 = (IObject *)FUN_180004250();
                          local_1138 = IObject::GetInterfaceEx(local_1148,(char *)pIVar3);
                          if (local_1138 != (IObject *)0x0) {
                            local_1168 = (IObject)(**(code **)(*(longlong *)local_1138 + 0x30))
                                                            (local_1138);
                            if (local_1168 == (IObject)0x0) {
                              local_1156 = 0;
                              if (local_1158 == '\0') {
                                (**(code **)(*local_1160 + 0x30))(local_1160,local_1148,&local_1156)
                                ;
                              }
                              else {
                                (**(code **)(*local_1160 + 0x38))(local_1160,local_1148,local_1158);
                              }
                              local_1168 = (IObject)(**(code **)(*(longlong *)local_1138 + 0x30))
                                                              (local_1138);
                            }
                            local_1157 = (IObject)0x0;
                            param_3 = &local_1157;
                            pIVar3 = local_1148;
                            (**(code **)(*local_1160 + 0x58))(local_1160);
                            if (local_1157 != local_1168) {
                              local_1155 = (**(code **)(*local_1160 + 0x78))(local_1160,local_1148);
                              pIVar3 = local_1148;
                              cVar1 = (**(code **)(*local_1160 + 0x80))(local_1160);
                              if (cVar1 == '\0') {
                                local_10f8 = (longlong *)
                                             (**(code **)(*(longlong *)local_1150 + 0x90))
                                                       (local_1150);
                                if (local_10f8 == (longlong *)0x0) goto LAB_180002e88;
                                param_3 = (IObject *)(ulonglong)(byte)local_1168;
                                pIVar3 = local_1148;
                                (**(code **)(*local_10f8 + 0x40))(local_10f8);
                              }
                              else {
                                local_1155 = (**(code **)(*local_1160 + 0x78))
                                                       (local_1160,local_1148);
                                pIVar3 = local_1148;
                                (**(code **)(*local_1160 + 0x80))(local_1160);
                              }
                            }
                            if ((int)param_2 != 0) {
                              Sleep(1000);
                              FUN_180001ea0(local_10a0,pIVar3,param_3,param_4);
                              Sleep(3000);
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
        }
      }
    }
  }
LAB_180002e88:
  if (((local_1108 != (IObject *)0xffffffffffffffff) &&
      (local_1108 != (IObject *)0xfffffffffffffffe)) && (local_1160 != (longlong *)0x0)) {
    if ((int)param_2 == 0) {
      Sleep(5000);
    }
    pIVar3 = local_1108;
    (**(code **)(*local_1160 + 0x90))(local_1160);
  }
  FUN_180002490((char)local_1168,pIVar3,param_3,param_4);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1188);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180002f00(IObject *param_1)

{
  BOOL BVar1;
  int iVar2;
  char *pcVar3;
  IObject *pIVar4;
  IObject *pIVar5;
  LPCSTR lpFileName;
  HANDLE hDevice;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStackY_10a8 [32];
  int local_1064;
  DWORD local_1040 [2];
  longlong local_1038;
  longlong local_1030;
  undefined1 local_1028 [510];
  undefined1 uStack_e2a;
  undefined1 uStack_e29;
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x180002f11;
  local_28 = DAT_18000a008 ^ (ulonglong)auStackY_10a8;
  if (param_1 != (IObject *)0x0) {
    puVar7 = local_1028;
    for (lVar6 = 0x1000; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    pcVar3 = (char *)FUN_180004370();
    pIVar4 = IObject::GetInterfaceEx(param_1,pcVar3);
    if (pIVar4 != (IObject *)0x0) {
      pcVar3 = (char *)FUN_180004390();
      pIVar5 = IObject::GetInterfaceEx(param_1,pcVar3);
      if (pIVar5 != (IObject *)0x0) {
        lpFileName = (LPCSTR)(**(code **)(*(longlong *)pIVar4 + 0x38))(pIVar4);
        hDevice = CreateFileA(lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0)
        ;
        if (hDevice != (HANDLE)0xffffffffffffffff) {
          BVar1 = DeviceIoControl(hDevice,0x7c100,(LPVOID)0x0,0,(LPVOID)0x0,0,local_1040,
                                  (LPOVERLAPPED)0x0);
          if (BVar1 == 0) {
            CloseHandle(hDevice);
          }
          else {
            local_1038 = *(longlong *)(pIVar5 + 8);
            iVar2 = (**(code **)(local_1038 + 8))(pIVar5 + 8,local_1028,0,1);
            if (iVar2 == 0) {
              CloseHandle(hDevice);
            }
            else {
              puVar7 = local_1028;
              for (lVar6 = 0x1000; lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
              puVar7 = &DAT_18000a040;
              puVar8 = local_1028;
              for (lVar6 = 0x1b8; lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              for (local_1064 = 0; local_1064 < 0x40; local_1064 = local_1064 + 1) {
                if (0xfff < (ulonglong)(longlong)(local_1064 + 0x1be)) {
                  __report_rangecheckfailure();
                }
                local_1028[local_1064 + 0x1be] = 0;
              }
              uStack_e2a = 0x55;
              uStack_e29 = 0xaa;
              local_1030 = *(longlong *)(pIVar5 + 8);
              iVar2 = (**(code **)(local_1030 + 0x10))(pIVar5 + 8,local_1028,0);
              if (iVar2 == 0) {
                CloseHandle(hDevice);
              }
              else {
                CloseHandle(hDevice);
              }
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_10a8);
  return;
}




undefined4 FUN_1800031b0(IObject *param_1)

{
  BOOL BVar1;
  char *pcVar2;
  LPCSTR lpFileName;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  DWORD local_38;
  undefined4 local_34;
  HANDLE local_30;
  IObject *local_28;
  undefined4 local_20;
  DWORD local_1c;
  
  local_34 = 0;
  if (param_1 != (IObject *)0x0) {
    FUN_180002f00(param_1);
    pcVar2 = (char *)FUN_180004370();
    local_28 = IObject::GetInterfaceEx(param_1,pcVar2);
    if (local_28 != (IObject *)0x0) {
      lpFileName = (LPCSTR)(**(code **)(*(longlong *)local_28 + 0x38))(local_28);
      local_30 = CreateFileA(lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (local_30 != (HANDLE)0xffffffffffffffff) {
        puVar5 = &local_20;
        for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((longlong)puVar5 + 1);
        }
        local_20 = 0;
        local_1c = GetTickCount();
        local_38 = 0;
        BVar1 = DeviceIoControl(local_30,0x7c058,&local_20,0x18,(LPVOID)0x0,0,&local_38,
                                (LPOVERLAPPED)0x0);
        if (BVar1 != 0) {
          uVar7 = 0;
          uVar6 = 0;
          uVar4 = 0x70140;
          DeviceIoControl(local_30,0x70140,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_38,(LPOVERLAPPED)0x0);
          local_34 = 1;
          Sleep(3000);
          FUN_180001ea0(param_1,uVar4,uVar6,uVar7);
        }
        CloseHandle(local_30);
      }
    }
  }
  return local_34;
}




undefined4 FUN_180003350(IObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  IObject *pIVar4;
  IObject *pIVar5;
  undefined8 *puVar6;
  IObject *pIVar7;
  undefined4 local_50;
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_18 = 0xfffffffffffffffe;
  local_50 = 0;
  if (((param_1 != (IObject *)0x0) &&
      (plVar2 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x40))(param_1),
      plVar2 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x68))(plVar2), plVar2 != (longlong *)0x0)) {
    pcVar3 = (char *)FUN_180004210();
    pIVar4 = IObject::GetInterfaceEx(param_1,pcVar3);
    if (pIVar4 != (IObject *)0x0) {
      pIVar5 = (IObject *)(**(code **)(*(longlong *)pIVar4 + 0x30))(pIVar4);
      FUN_180004180(&local_30,pIVar5);
      while( true ) {
        puVar6 = FUN_180003ef0(&local_30,local_10);
        local_28 = (longlong *)FUN_180003ee0(puVar6);
        pIVar5 = (IObject *)(**(code **)(*local_28 + 0x28))(local_28);
        if (pIVar5 == (IObject *)0x0) break;
        pcVar3 = (char *)FUN_180004230();
        pIVar7 = IObject::GetInterfaceEx(pIVar5,pcVar3);
        if ((pIVar7 != (IObject *)0x0) &&
           (iVar1 = (**(code **)(*(longlong *)pIVar7 + 0x58))(pIVar7), iVar1 != 0)) {
          local_20 = (**(code **)(*plVar2 + 0x88))(plVar2,pIVar5,2);
          (**(code **)(*plVar2 + 0x78))(plVar2,pIVar5);
          if (local_20 != -1) {
            (**(code **)(*plVar2 + 0x90))(plVar2,local_20);
          }
          (**(code **)(*plVar2 + 0x68))(plVar2,pIVar5);
        }
      }
      (**(code **)(*(longlong *)pIVar4 + 0x58))(pIVar4);
      pcVar3 = (char *)FUN_1800042b0();
      pIVar4 = IObject::GetInterfaceEx(pIVar4,pcVar3);
      if (pIVar4 == (IObject *)0x0) {
        FUN_1800022d0(&local_30);
      }
      else {
        (**(code **)(*(longlong *)pIVar4 + 0x28))(pIVar4);
        local_50 = FUN_1800031b0(param_1);
        FUN_1800022d0(&local_30);
      }
    }
  }
  return local_50;
}




void FUN_180003580(longlong *param_1,int param_2,undefined8 param_3,LPDWORD param_4)

{
  char cVar1;
  char *pcVar2;
  IObject *pIVar3;
  undefined1 auStack_4f8 [32];
  undefined4 local_4d8;
  IObject *local_4d0;
  ulonglong local_4c8;
  IObject *local_4c0;
  IObject *local_4b8;
  IObject *local_4b0;
  undefined4 local_4a8 [2];
  longlong local_4a0;
  ulonglong local_498;
  char local_488 [8];
  undefined1 local_84;
  undefined1 local_83;
  undefined4 local_80;
  undefined4 local_78;
  ulonglong local_18;
  
  local_18 = DAT_18000a008 ^ (ulonglong)auStack_4f8;
  local_4d8 = 0;
  if ((param_1 != (longlong *)0x0) &&
     (local_4c0 = (IObject *)FUN_180002120(param_1,param_2), local_4c0 != (IObject *)0x0)) {
    pcVar2 = (char *)FUN_180004160();
    local_4d0 = IObject::GetInterfaceEx(local_4c0,pcVar2);
    if (local_4d0 != (IObject *)0x0) {
      pcVar2 = (char *)FUN_180004210();
      local_4b8 = IObject::GetInterfaceEx(local_4c0,pcVar2);
      if ((local_4b8 != (IObject *)0x0) &&
         (local_4c8 = (**(code **)(*(longlong *)local_4d0 + 0x30))(local_4d0), 0x31fff < local_4c8))
      {
        FUN_1800016a0(local_4a8);
        local_83 = 1;
        local_4a8[0] = 3;
        local_4a0 = 0x800;
        cVar1 = (**(code **)(*(longlong *)local_4d0 + 0x58))(local_4d0);
        if (cVar1 == '\0') {
          local_498 = local_4a0 + 0x800000;
        }
        else if (local_4c8 < 0xf0003e9) {
          local_498 = local_4c8 - 100;
        }
        else {
          local_498 = local_4a0 + 0xf000000;
        }
        if (local_4c8 <= local_498) {
          local_498 = local_4c8 - 100;
        }
        local_78 = 0;
        local_84 = 0;
        local_80 = 0x40;
        builtin_strncpy(local_488,"usbboot",8);
        pIVar3 = (IObject *)0x0;
        local_4b0 = (IObject *)(**(code **)(*(longlong *)local_4b8 + 0x40))(local_4b8);
        local_4d8 = FUN_1800025e0(local_4b0,(IObject *)0x0,pIVar3,param_4);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_4f8);
  return;
}




undefined4 FUN_180003760(int param_1,undefined8 param_2,undefined8 param_3,LPDWORD param_4)

{
  int iVar1;
  longlong *plVar2;
  IObject *pIVar3;
  undefined4 local_28;
  
  local_28 = 0;
  plVar2 = (longlong *)FUN_180001e00();
  if (((plVar2 != (longlong *)0x0) &&
      (pIVar3 = (IObject *)FUN_180002120(plVar2,param_1), pIVar3 != (IObject *)0x0)) &&
     (iVar1 = FUN_180003350(pIVar3), iVar1 != 0)) {
    plVar2 = (longlong *)FUN_180001e00();
    local_28 = FUN_180003580(plVar2,param_1,param_3,param_4);
  }
  return local_28;
}




uint FUN_1800037e0(IObject *param_1,longlong *param_2,IObject *param_3,char *param_4,int *param_5,
                  undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  IObject *pIVar4;
  IObject *pIVar5;
  ulonglong uVar6;
  uint local_38;
  
  local_38 = 0;
  if (((param_1 != (IObject *)0x0) && (param_2 != (longlong *)0x0)) && (param_3 != (IObject *)0x0))
  {
    pcVar3 = (char *)FUN_180004160();
    pIVar4 = IObject::GetInterfaceEx(param_3,pcVar3);
    if (pIVar4 != (IObject *)0x0) {
      pcVar3 = (char *)FUN_180004290();
      pIVar5 = IObject::GetInterfaceEx(param_3,pcVar3);
      if (pIVar5 != (IObject *)0x0) {
        iVar2 = (**(code **)(*(longlong *)pIVar5 + 0x28))(pIVar5);
        if (iVar2 == 8) {
          pcVar3 = (char *)FUN_180004250();
          pIVar4 = IObject::GetInterfaceEx(param_1,pcVar3);
          if (pIVar4 != (IObject *)0x0) {
            cVar1 = (**(code **)(*(longlong *)pIVar4 + 0x30))(pIVar4);
            *param_4 = cVar1;
            *param_5 = 1;
          }
          local_38 = (uint)(pIVar4 != (IObject *)0x0);
        }
        else {
          cVar1 = (**(code **)(*param_2 + 0x50))(param_2);
          if (cVar1 == '\0') {
            *param_6 = 1;
            local_38 = 1;
          }
          else {
            uVar6 = (**(code **)(*param_2 + 0x30))(param_2);
            if ((uVar6 < 0x400000) &&
               (uVar6 = (**(code **)(*(longlong *)pIVar4 + 0x30))(pIVar4), 0x405000 < uVar6)) {
              *param_6 = 1;
            }
            else {
              pcVar3 = (char *)FUN_180004250();
              pIVar4 = IObject::GetInterfaceEx(param_1,pcVar3);
              if (pIVar4 == (IObject *)0x0) {
                *param_6 = 1;
              }
              else {
                cVar1 = (**(code **)(*(longlong *)pIVar4 + 0x30))(pIVar4);
                *param_4 = cVar1;
                *param_5 = 1;
              }
            }
            local_38 = 1;
          }
        }
      }
    }
  }
  if (*param_5 != 0) {
    if (*param_4 == '\0') {
      *param_5 = 0;
      *param_6 = 1;
    }
    else {
      *param_6 = 0;
    }
  }
  return local_38;
}




int CheckFormat(int param_1,char *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  IObject *pIVar4;
  undefined8 *puVar5;
  char local_a8 [4];
  int local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  IObject *local_90;
  IObject *local_88;
  IObject *local_80;
  longlong local_78;
  undefined4 local_70 [2];
  IObject *local_68;
  IObject *local_60;
  IObject *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
                    /* 0x3a10  45  CheckFormat */
  local_a4 = 0;
  if (((param_2 != (char *)0x0) && (param_3 != (int *)0x0)) && (param_4 != (int *)0x0)) {
    *param_4 = 1;
    *param_3 = 0;
    local_50 = (longlong *)FUN_180001e00();
    if (local_50 != (longlong *)0x0) {
      OutputDebugStringA("805");
      local_80 = (IObject *)FUN_180002120(local_50,param_1);
      if (local_80 != (IObject *)0x0) {
        OutputDebugStringA("809");
        pcVar3 = (char *)FUN_180004290();
        local_68 = IObject::GetInterfaceEx(local_80,pcVar3);
        if (local_68 != (IObject *)0x0) {
          OutputDebugStringA("813");
          pcVar3 = (char *)FUN_180004160();
          local_58 = IObject::GetInterfaceEx(local_80,pcVar3);
          if (local_58 != (IObject *)0x0) {
            OutputDebugStringA("816");
            local_a0 = (**(code **)(*(longlong *)local_68 + 0x28))(local_68);
            if ((local_a0 & 1) == 0) {
              if ((local_a0 == 2) || ((local_a0 != 4 && (local_a0 != 8)))) {
                *param_4 = 1;
                local_a4 = 1;
                OutputDebugStringA("829");
              }
              else {
                local_98 = 0;
                pcVar3 = (char *)FUN_180004210();
                local_60 = IObject::GetInterfaceEx(local_80,pcVar3);
                if (local_60 != (IObject *)0x0) {
                  pIVar4 = (IObject *)(**(code **)(*(longlong *)local_60 + 0x30))(local_60);
                  FUN_180004180(&local_78,pIVar4);
                  puVar5 = FUN_180003ef0(&local_78,&local_28);
                  local_48 = (longlong *)FUN_180003ee0(puVar5);
                  local_88 = (IObject *)(**(code **)(*local_48 + 0x28))(local_48);
                  while (local_88 != (IObject *)0x0) {
                    pcVar3 = (char *)FUN_180004230();
                    local_90 = IObject::GetInterfaceEx(local_88,pcVar3);
                    if (local_90 == (IObject *)0x0) {
                      puVar5 = FUN_180003ef0(&local_78,&local_20);
                      local_40 = (longlong *)FUN_180003ee0(puVar5);
                      local_88 = (IObject *)(**(code **)(*local_40 + 0x28))(local_40);
                    }
                    else {
                      iVar2 = (**(code **)(*(longlong *)local_90 + 0x58))(local_90);
                      if (iVar2 == 0) {
                        puVar5 = FUN_180003ef0(&local_78,&local_18);
                        local_38 = (longlong *)FUN_180003ee0(puVar5);
                        local_88 = (IObject *)(**(code **)(*local_38 + 0x28))(local_38);
                      }
                      else {
                        local_98 = local_98 + 1;
                        if (*param_4 != 0) {
                          local_a4 = FUN_1800037e0(local_88,(longlong *)local_90,local_80,param_2,
                                                   param_3,param_4);
                        }
                        iVar2 = (**(code **)(*(longlong *)local_58 + 0x48))(local_58);
                        if (iVar2 == 2) break;
                        cVar1 = (**(code **)(*(longlong *)local_90 + 0x48))(local_90);
                        if (cVar1 != '\0') {
                          local_a8[0] = '\0';
                          local_9c = 0;
                          local_70[0] = 0;
                          local_a4 = FUN_1800037e0(local_88,(longlong *)local_90,local_80,local_a8,
                                                   &local_9c,local_70);
                          if ((local_a4 != 0) && (local_9c != 0)) {
                            *param_2 = local_a8[0];
                            *param_3 = local_9c;
                            *param_4 = 0;
                            OutputDebugStringA("878");
                            break;
                          }
                        }
                        puVar5 = FUN_180003ef0(&local_78,local_10);
                        local_30 = (longlong *)FUN_180003ee0(puVar5);
                        local_88 = (IObject *)(**(code **)(*local_30 + 0x28))(local_30);
                      }
                    }
                  }
                  if (local_98 == 0) {
                    *param_4 = 1;
                    *param_3 = 0;
                    local_a4 = 1;
                  }
                  FUN_1800022d0(&local_78);
                }
              }
            }
            else {
              OutputDebugStringA("820");
            }
          }
        }
      }
    }
  }
  return local_a4;
}




undefined4 DoFormat(int param_1,undefined8 param_2,undefined8 param_3,LPDWORD param_4)

{
  undefined4 uVar1;
  
                    /* 0x3ea0  46  DoFormat */
  uVar1 = FUN_180003760(param_1,param_2,param_3,param_4);
  return uVar1;
}




undefined8 FUN_180003ee0(undefined8 *param_1)

{
  return *param_1;
}




undefined8 * FUN_180003ef0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_180003f70(param_2,*param_1);
  return param_2;
}




/* Library Function - Multiple Matches With Same Base Name
    private: void __cdecl _CIP<struct IBindCtx,&struct _GUID const IID_IBindCtx>::_AddRef(void)
   __ptr64
    private: void __cdecl _CIP<struct IBindHost,&struct _GUID const IID_IBindHost>::_AddRef(void)
   __ptr64
    private: void __cdecl _CIP<struct IBindStatusCallback,&struct _GUID const
   IID_IBindStatusCallback>::_AddRef(void) __ptr64
    private: void __cdecl _CIP<struct IBinding,&struct _GUID const IID_IBinding>::_AddRef(void)
   __ptr64
     7 names - too many to list
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

void AddRef(longlong *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
  }
  return;
}




undefined8 * FUN_180003f50(undefined8 *param_1)

{
  FUN_180003f90(param_1);
  return param_1;
}




undefined8 * FUN_180003f70(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}




undefined8 * FUN_180003f90(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}




void FUN_180003fb0(char *param_1)

{
  undefined1 auStack_168 [32];
  char *local_148;
  undefined8 *local_140;
  char *local_138;
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18000a008 ^ (ulonglong)auStack_168;
  local_140 = (undefined8 *)FUN_180001330(param_1);
  if (local_140 != (undefined8 *)0x0) {
    local_128[0] = 'I';
    for (local_148 = param_1; *local_148 != '\0'; local_148 = local_148 + 1) {
      if (0xff < (longlong)local_148 - (longlong)param_1) goto LAB_180004144;
      local_148[(longlong)(local_128 + (1 - (longlong)param_1))] = *local_148;
    }
    local_148[(longlong)(local_128 + (1 - (longlong)param_1))] = 'M';
    local_148[(longlong)(local_128 + (2 - (longlong)param_1))] = 'o';
    local_148[(longlong)(local_128 + (3 - (longlong)param_1))] = 'd';
    local_148[(longlong)(local_128 + (4 - (longlong)param_1))] = 'u';
    local_148[(longlong)(local_128 + (5 - (longlong)param_1))] = 'l';
    local_148[(longlong)(local_128 + (6 - (longlong)param_1))] = 'e';
    local_138 = local_148 + (7 - (longlong)param_1);
    if ((char *)0x103 < local_138) {
      __report_rangecheckfailure();
    }
    local_128[(longlong)local_138] = '\0';
    (**(code **)*local_140)(local_140,local_128);
  }
LAB_180004144:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_168);
  return;
}




void FUN_180004160(void)

{
  FUN_180004670();
  return;
}




longlong * FUN_180004180(longlong *param_1,IObject *param_2)

{
  CTempBuffer<>(param_1,param_2);
  return param_1;
}




void FUN_1800041b0(longlong *param_1,IObject *param_2)

{
  FUN_1800043f0(param_1,param_2);
  return;
}




longlong * FUN_1800041e0(longlong *param_1,IObject *param_2)

{
  CTempBuffer<>(param_1,param_2);
  return param_1;
}




void FUN_180004210(void)

{
  FUN_1800046c0();
  return;
}




void FUN_180004230(void)

{
  FUN_180004710();
  return;
}




void FUN_180004250(void)

{
  FUN_180004760();
  return;
}




void FUN_180004270(void)

{
  FUN_1800047b0();
  return;
}




void FUN_180004290(void)

{
  FUN_180004800();
  return;
}




void FUN_1800042b0(void)

{
  FUN_180004850();
  return;
}




void FUN_1800042d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180004b10(param_1,0x104,param_2,&local_res18);
  return;
}




void FUN_180004310(void)

{
  FUN_1800048a0();
  return;
}




void FUN_180004330(void)

{
  FUN_1800048f0();
  return;
}




void FUN_180004350(void)

{
  FUN_180004940();
  return;
}




void FUN_180004370(void)

{
  FUN_180004990();
  return;
}




void FUN_180004390(void)

{
  FUN_1800049e0();
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl ATL::CTempBuffer<char,128,class ATL::CCRTAllocator>::CTempBuffer<char,128,class
   ATL::CCRTAllocator>(unsigned __int64) __ptr64
    public: __cdecl ATL::CTempBuffer<unsigned char,128,class
   ATL::CCRTAllocator>::CTempBuffer<unsigned char,128,class ATL::CCRTAllocator>(unsigned __int64)
   __ptr64
    public: __cdecl ATL::CTempBuffer<wchar_t,128,class
   ATL::CCRTAllocator>::CTempBuffer<wchar_t,128,class ATL::CCRTAllocator>(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2)

{
  *param_1 = 0;
  FUN_1800044f0(param_1,param_2);
  return param_1;
}




longlong FUN_1800043f0(longlong *param_1,IObject *param_2)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_180004a30();
      pIVar2 = IObject::GetInterfaceEx(param_2,pcVar1);
      *param_1 = (longlong)pIVar2;
      if (*param_1 == 0) {
        (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
        (**(code **)(*(longlong *)param_2 + 8))(param_2);
      }
      else {
        (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
      }
    }
  }
  return *param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl ATL::CTempBuffer<char,128,class ATL::CCRTAllocator>::CTempBuffer<char,128,class
   ATL::CCRTAllocator>(unsigned __int64) __ptr64
    public: __cdecl ATL::CTempBuffer<unsigned char,128,class
   ATL::CCRTAllocator>::CTempBuffer<unsigned char,128,class ATL::CCRTAllocator>(unsigned __int64)
   __ptr64
    public: __cdecl ATL::CTempBuffer<wchar_t,128,class
   ATL::CCRTAllocator>::CTempBuffer<wchar_t,128,class ATL::CCRTAllocator>(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2)

{
  *param_1 = 0;
  FUN_1800045b0(param_1,param_2);
  return param_1;
}




longlong FUN_1800044f0(longlong *param_1,IObject *param_2)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_180004160();
      pIVar2 = IObject::GetInterfaceEx(param_2,pcVar1);
      *param_1 = (longlong)pIVar2;
      if (*param_1 == 0) {
        (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
        (**(code **)(*(longlong *)param_2 + 8))(param_2);
      }
      else {
        (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
      }
    }
  }
  return *param_1;
}




longlong FUN_1800045b0(longlong *param_1,IObject *param_2)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_180004a50();
      pIVar2 = IObject::GetInterfaceEx(param_2,pcVar1);
      *param_1 = (longlong)pIVar2;
      if (*param_1 == 0) {
        (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
        (**(code **)(*(longlong *)param_2 + 8))(param_2);
      }
      else {
        (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
      }
    }
  }
  return *param_1;
}




undefined1 * FUN_180004670(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000ac28 == (undefined1 *)0x0) {
    DAT_18000ac28 = &DAT_18000ac40;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a5b0);
    FUN_1800010f0(pcVar1,DAT_18000ac28,local_18);
  }
  return DAT_18000ac28;
}




undefined1 * FUN_1800046c0(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000ac20 == (undefined1 *)0x0) {
    DAT_18000ac20 = &DAT_18000ad40;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a588);
    FUN_1800010f0(pcVar1,DAT_18000ac20,local_18);
  }
  return DAT_18000ac20;
}




undefined1 * FUN_180004710(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000ac18 == (undefined1 *)0x0) {
    DAT_18000ac18 = &DAT_18000ae40;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a560);
    FUN_1800010f0(pcVar1,DAT_18000ac18,local_18);
  }
  return DAT_18000ac18;
}




undefined1 * FUN_180004760(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000ac10 == (undefined1 *)0x0) {
    DAT_18000ac10 = &DAT_18000af40;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a538);
    FUN_1800010f0(pcVar1,DAT_18000ac10,local_18);
  }
  return DAT_18000ac10;
}




undefined1 * FUN_1800047b0(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000ac08 == (undefined1 *)0x0) {
    DAT_18000ac08 = &DAT_18000b040;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a508);
    FUN_1800010f0(pcVar1,DAT_18000ac08,local_18);
  }
  return DAT_18000ac08;
}




undefined1 * FUN_180004800(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000ac00 == (undefined1 *)0x0) {
    DAT_18000ac00 = &DAT_18000b140;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a4e0);
    FUN_1800010f0(pcVar1,DAT_18000ac00,local_18);
  }
  return DAT_18000ac00;
}




undefined1 * FUN_180004850(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000abf8 == (undefined1 *)0x0) {
    DAT_18000abf8 = &DAT_18000b240;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a4a8);
    FUN_1800010f0(pcVar1,DAT_18000abf8,local_18);
  }
  return DAT_18000abf8;
}




undefined1 * FUN_1800048a0(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000abf0 == (undefined1 *)0x0) {
    DAT_18000abf0 = &DAT_18000b340;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a470);
    FUN_1800010f0(pcVar1,DAT_18000abf0,local_18);
  }
  return DAT_18000abf0;
}




undefined1 * FUN_1800048f0(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000abe8 == (undefined1 *)0x0) {
    DAT_18000abe8 = &DAT_18000b440;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a430);
    FUN_1800010f0(pcVar1,DAT_18000abe8,local_18);
  }
  return DAT_18000abe8;
}




undefined1 * FUN_180004940(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000abe0 == (undefined1 *)0x0) {
    DAT_18000abe0 = &DAT_18000b540;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a3f8);
    FUN_1800010f0(pcVar1,DAT_18000abe0,local_18);
  }
  return DAT_18000abe0;
}




undefined1 * FUN_180004990(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000abd8 == (undefined1 *)0x0) {
    DAT_18000abd8 = &DAT_18000b640;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a3d0);
    FUN_1800010f0(pcVar1,DAT_18000abd8,local_18);
  }
  return DAT_18000abd8;
}




undefined1 * FUN_1800049e0(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000abd0 == (undefined1 *)0x0) {
    DAT_18000abd0 = &DAT_18000b740;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a3a8);
    FUN_1800010f0(pcVar1,DAT_18000abd0,local_18);
  }
  return DAT_18000abd0;
}




void FUN_180004a30(void)

{
  FUN_180004a70();
  return;
}




void FUN_180004a50(void)

{
  FUN_180004ac0();
  return;
}




undefined1 * FUN_180004a70(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000abc8 == (undefined1 *)0x0) {
    DAT_18000abc8 = &DAT_18000b840;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a380);
    FUN_1800010f0(pcVar1,DAT_18000abc8,local_18);
  }
  return DAT_18000abc8;
}




undefined1 * FUN_180004ac0(void)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18000abc0 == (undefined1 *)0x0) {
    DAT_18000abc0 = &DAT_18000b940;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_1800010c0(0x18000a360);
    FUN_1800010f0(pcVar1,DAT_18000abc0,local_18);
  }
  return DAT_18000abc0;
}




void FUN_180004b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004b50(param_1,param_2,param_3,0,param_4);
  return;
}




int FUN_180004b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int local_14;
  
  puVar1 = (undefined8 *)FUN_180004cd0();
  local_14 = __stdio_common_vswprintf_s(*puVar1,param_1,param_2,param_3,param_4,param_5);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




int FUN_180004bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int local_14;
  
  puVar1 = (undefined8 *)FUN_180004cd0();
  local_14 = __stdio_common_vswprintf(*puVar1,param_1,param_2,param_3,param_4,param_5);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




void FUN_180004c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004bc0(param_1,param_2,param_3,0,param_4);
  return;
}




undefined4
FUN_180004c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180004c30(param_1,0x7fffffff,param_2,&local_res18);
  return uVar1;
}




undefined * FUN_180004cd0(void)

{
  return &DAT_18000ac30;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18000a008) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




void FUN_180004d5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180004d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18000a5e0);
  return;
}




void FUN_180004d6c(void)

{
  __std_type_info_destroy_list(&DAT_18000a5e0);
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
                    /* WARNING: Could not recover jumptable at 0x000180004da5. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180004dd6;
  capture_previous_context((PCONTEXT)&DAT_18000a690);
  _DAT_18000a600 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18000a728 = puVar3 + 0x40;
  _DAT_18000a710 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18000a5f0 = 0xc0000409;
  _DAT_18000a5f4 = 1;
  _DAT_18000a608 = 1;
  DAT_18000a610 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18000a008;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18000a000;
  *(undefined8 *)(puVar3 + -8) = 0x180004e78;
  DAT_18000a788 = _DAT_18000a600;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180007290);
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
  *(undefined8 *)(puVar3 + -8) = 0x180004ebe;
  capture_current_context((PCONTEXT)&DAT_18000a690);
  _DAT_18000a600 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18000a728 = puVar3 + 0x30;
  _DAT_18000a5f0 = 0xc0000409;
  _DAT_18000a5f4 = 1;
  _DAT_18000a608 = 1;
  DAT_18000a610 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180004f2a;
  DAT_18000a788 = _DAT_18000a600;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180007290);
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
    FUN_18000563c();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_18000561c();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




undefined8 * FUN_180005050(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
    if (DAT_18000ab60 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18000ab60 = DAT_18000ab60 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18000ab70 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180004d6c();
      FID_conflict__RTC_Initialize();
      DAT_18000ab70 = 0;
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
    if (DAT_18000ab70 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18000ab70 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180004d5c();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180007260,&DAT_180007268);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180007250,&DAT_180007258);
        DAT_18000ab70 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180005ae4();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18000ab60 = DAT_18000ab60 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180005414) */
/* WARNING: Removing unreachable block (ram,0x0001800053a3) */
/* WARNING: Removing unreachable block (ram,0x000180005457) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18000ab60 < 1)) {
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




undefined8 * FUN_1800054cc(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000550c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000552c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_18000556c(undefined8 *param_1)

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




undefined8 * FUN_1800055d8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000561c(void)

{
  undefined8 local_28 [5];
  
  FUN_18000550c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1800088a8);
}




void FUN_18000563c(void)

{
  undefined8 local_28 [5];
  
  FUN_18000556c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180008930);
}




char * FUN_18000565c(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




void _guard_check_icall(void)

{
  return;
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
  
  if (DAT_18000a008 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18000a008 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18000a008 == 0x2b992ddfa232) {
      DAT_18000a008 = 0x2b992ddfa233;
    }
  }
  DAT_18000a000 = ~DAT_18000a008;
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




undefined * FUN_180005744(void)

{
  return &DAT_18000ab68;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180004cd0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180005744();
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
LAB_180005796:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18000ab78 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18000ab78;
        pvVar1 = DAT_18000ab78;
      }
      DAT_18000ab78 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180005796;
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
    uVar3 = FUN_180005e3c();
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
  
  uVar1 = FUN_180005920(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180005ed0();
  if (cVar1 != '\0') {
    cVar1 = FUN_180005ed0();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180005ed0();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180005ed0();
  FUN_180005ed0();
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
    _execute_onexit_table(&DAT_18000ab88);
    return;
  }
  uVar2 = FUN_180005ed4();
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
  FUN_180005ed0();
  FUN_180005ed0();
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
    DAT_18000ab80 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180005ed0();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180005ed0();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180005ed0();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180005920(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18000ab81 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18000a008 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18000a008;
      _DAT_18000ab88 = in_RAX;
      uRam000000018000ab90 = in_RAX;
      _DAT_18000ab98 = in_RAX;
      _DAT_18000aba0 = in_RAX;
      uRam000000018000aba8 = in_RAX;
      _DAT_18000abb0 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18000ab88);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18000aba0), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18000ab81 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180005a86) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000210; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000300;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_180005a6f;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180005a6f:
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
    DAT_18000ab78 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18000ab80 == '\0') || (param_2 == '\0')) {
    FUN_180005ed0();
    FUN_180005ed0();
  }
  return 1;
}




undefined * FUN_180005ae4(void)

{
  return &DAT_18000ba40;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005aec(void)

{
  _DAT_18000abb8 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180005b27;
  FUN_180005aec();
  *(undefined8 *)(puVar4 + -8) = 0x180005b38;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180005b42;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180005b5c;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180005b9d;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180005bcf;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180005bf1;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180005c12;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180005c1d;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180005c2d;
    FUN_180005aec();
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
  
  for (puVar1 = &DAT_1800083b0; puVar1 < &DAT_1800083b0; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_1800083c0; puVar1 < &DAT_1800083c0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180005d8e) */
/* WARNING: Removing unreachable block (ram,0x000180005d0c) */
/* WARNING: Removing unreachable block (ram,0x000180005ce7) */
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
  
  DAT_18000a024 = 2;
  _DAT_18000a020 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18000a028 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18000abbc = DAT_18000abbc | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18000abbc = DAT_18000abbc | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18000a020 = 2;
    DAT_18000a024 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000a024 = 0xe;
      _DAT_18000a020 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18000a020 = 5;
        DAT_18000a024 = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_180005e3c(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18000a030 != 0;
}




undefined1 FUN_180005ed0(void)

{
  return 1;
}




undefined8 FUN_180005ed4(void)

{
  return 0;
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




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180006060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




undefined * Catch_All_180006070(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x28) = 0;
  return &DAT_18000129a;
}




void Unwind_1800060a0(undefined8 param_1,longlong param_2)

{
  FUN_1800022d0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1800060b8(undefined8 param_1,longlong param_2)

{
  FUN_1800022d0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_1800060d0(undefined8 param_1,longlong param_2)

{
  FUN_1800022d0((longlong *)(param_2 + 0x20));
  return;
}




void Unwind_1800060f0(undefined8 param_1,longlong param_2)

{
  FUN_1800022d0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180006110(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xd0));
  return;
}




void Unwind_180006130(undefined8 param_1,longlong param_2)

{
  FUN_1800022d0((longlong *)(param_2 + 0x58));
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




void FUN_1800061b5(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_1800061cc(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_1800061e8(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}



