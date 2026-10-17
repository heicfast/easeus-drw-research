
void FUN_180001020(void)

{
  FUN_18000b300(&DAT_18003ba71);
  return;
}




void FUN_180001040(void)

{
  FUN_18000f150(&DAT_18003c1fc);
  return;
}




void FUN_180001060(void)

{
  FUN_18000f320(&DAT_18003c1fd);
  return;
}




void FUN_180001080(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStackY_118 [32];
  int local_d4;
  undefined1 local_88 [16];
  ulonglong local_78;
  int local_48 [12];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStackY_118;
  cVar3 = FUN_180001480(param_2,0x200);
  if ((cVar3 != '\0') &&
     ((iVar4 = memcmp((void *)(param_2 + 3),"-FVE-FS-",8), iVar4 == 0 ||
      (iVar4 = memcmp((void *)(param_2 + 3),"MSWIN4.1",8), iVar4 == 0)))) {
    bVar2 = false;
    for (local_d4 = 0; local_d4 < 3; local_d4 = local_d4 + 1) {
      uVar1 = *(ulonglong *)(param_2 + 0xb0 + (longlong)local_d4 * 8);
      uVar5 = (*(code *)**(undefined8 **)(param_5 + 8))(param_5 + 8);
      cVar3 = FUN_1800015f0(param_1,param_3,uVar1,param_5,uVar5,local_88,local_48);
      if (cVar3 != '\0') {
        bVar2 = true;
        break;
      }
    }
    if (bVar2) {
      uVar5 = (*(code *)**(undefined8 **)(param_5 + 8))(param_5 + 8);
      FUN_180001a20((longlong)param_4,0xb);
      FUN_180001a60((longlong)param_4,1);
      FUN_180001aa0((longlong)param_4,local_78 / uVar5);
      FUN_180001a80(param_4,param_3);
      uVar6 = (*(code *)**(undefined8 **)(param_5 + 8))(param_5 + 8);
      FUN_180001a00((longlong)param_4,uVar6);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_118);
  return;
}




void FUN_180001300(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 auStackY_f8 [32];
  int local_b8;
  int local_90 [14];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStackY_f8;
  if ((param_2 != 0) && (param_3 != 0)) {
    for (local_b8 = 0; local_b8 < 3; local_b8 = local_b8 + 1) {
      uVar1 = *(ulonglong *)(param_2 + 0xb0 + (longlong)local_b8 * 8);
      uVar2 = (*(code *)**(undefined8 **)(param_3 + 8))(param_3 + 8);
      FUN_1800015f0(param_1,param_4,uVar1,param_3,uVar2,local_58,local_90);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_f8);
  return;
}




void FUN_180001480(longlong param_1,uint param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_68;
  if ((param_1 != 0) && (param_2 % 0x200 == 0)) {
    local_40 = 0x2d;
    local_3f = 0x46;
    local_3e = 0x56;
    local_3d = 0x45;
    local_3c = 0x2d;
    local_3b = 0x46;
    local_3a = 0x53;
    local_39 = 0x2d;
    local_38 = 0x78;
    local_37 = 0x78;
    local_36 = 0x78;
    local_35 = 0x78;
    local_34 = 0x78;
    local_33 = 0x78;
    local_32 = 0x78;
    local_31 = 0x78;
    local_30 = 0xff;
    local_2f = 0xff;
    local_2e = 0xff;
    local_2d = 0xff;
    local_2c = 0xff;
    local_2b = 0xff;
    local_2a = 0xff;
    local_29 = 0xff;
    local_28 = 0xff;
    local_27 = 0xff;
    local_26 = 0xff;
    local_25 = 0xff;
    local_24 = 0xff;
    local_23 = 0xff;
    local_22 = 0xff;
    local_21 = 0xff;
    local_20 = 0xff;
    local_1f = 0xff;
    local_1e = 0xff;
    local_1d = 0;
    local_1c = 0x1f;
    local_1b = 0x2c;
    local_48 = (void *)(param_1 + 3);
    iVar1 = memcmp(local_48,&local_40,8);
    if (iVar1 != 0) {
      local_48 = (void *)(param_1 + 0x1e0);
      memcmp(local_48,&local_38,0x1e);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




undefined1
FUN_1800015f0(undefined8 param_1,longlong param_2,ulonglong param_3,longlong param_4,uint param_5,
             void *param_6,int *param_7)

{
  int iVar1;
  void *_Buf1;
  undefined1 local_58;
  
  _Buf1 = operator_new(0x1000);
  local_58 = 1;
  (**(code **)(*(longlong *)(param_4 + 8) + 8))(param_4 + 8,_Buf1,param_3 / param_5 + param_2,1);
  iVar1 = memcmp(_Buf1,"-FVE-FS-",8);
  if (iVar1 == 0) {
    memcpy(param_6,_Buf1,0x40);
    memcpy(param_7,(void *)((longlong)_Buf1 + 0x40),0x30);
    if (0x1000 < (uint)(*param_7 - param_7[2])) {
      local_58 = 0;
    }
  }
  else {
    local_58 = 0;
  }
  if (_Buf1 != (void *)0x0) {
    free(_Buf1);
  }
  return local_58;
}




undefined8 * FUN_180001760(undefined8 *param_1)

{
  *param_1 = IBlockDevice::vftable;
  return param_1;
}




undefined8 * FUN_180001780(undefined8 *param_1)

{
  *param_1 = IBlockDevice::vftable;
  return param_1;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x17a0  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x17a0  2  ??0IObject@@QEAA@AEBU0@@Z */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IObject::IObject(void) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this)

{
                    /* 0x17c0  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IStorageDevice::IStorageDevice(struct IStorageDevice && __ptr64) __ptr64 */

IStorageDevice * __thiscall
IStorageDevice::IStorageDevice(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x17e0  4  ??0IStorageDevice@@QEAA@$$QEAU0@@Z
                       0x17e0  5  ??0IStorageDevice@@QEAA@AEBU0@@Z */
  IObject::IObject((IObject *)this,(IObject *)param_1);
  FUN_180001760((undefined8 *)(this + 8));
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




/* public: __cdecl IStorageDevice::IStorageDevice(void) __ptr64 */

IStorageDevice * __thiscall IStorageDevice::IStorageDevice(IStorageDevice *this)

{
                    /* 0x1840  6  ??0IStorageDevice@@QEAA@XZ */
  IObject::IObject((IObject *)this);
  FUN_180001780((undefined8 *)(this + 8));
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  longlong lVar1;
  CLogInBootICE *pCVar2;
  
  pCVar2 = this;
                    /* 0x1890  7  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pCVar2 = *param_1;
    param_1 = param_1 + 1;
    pCVar2 = pCVar2 + 1;
  }
  return this;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x18c0  8  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x18c0  9  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x18c0  10  ??4CNTFSLib@@QEAAAEAV0@$$QEAV0@@Z
                       0x18c0  11  ??4CNTFSLib@@QEAAAEAV0@AEBV0@@Z
                       0x18c0  12  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x18c0  13  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




/* public: struct IStorageDevice & __ptr64 __cdecl IStorageDevice::operator=(struct IStorageDevice
   && __ptr64) __ptr64 */

IStorageDevice * __thiscall IStorageDevice::operator=(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x18d0  14  ??4IStorageDevice@@QEAAAEAU0@$$QEAU0@@Z
                       0x18d0  15  ??4IStorageDevice@@QEAAAEAU0@AEBU0@@Z */
  CLogWriter::operator=((CLogWriter *)this,(CLogWriter *)param_1);
  CLogWriter::operator=((CLogWriter *)(this + 8),(CLogWriter *)(param_1 + 8));
  return this;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1920  19  ?AddRef@IObject@@QEBAKXZ */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))(this);
  return uVar1;
}




/* public: virtual int __cdecl IStorageDevice::ConvertVolume(void) __ptr64 */

int __thiscall IStorageDevice::ConvertVolume(IStorageDevice *this)

{
                    /* 0x1940  20  ?ConvertVolume@IStorageDevice@@UEAAHXZ
                       0x1940  22  ?GetBitlockerInfo@IStorageDevice@@UEAAPEAUBitlockerInfo@@XZ
                       0x1940  26  ?IsBitlockerVolume@IStorageDevice@@UEAAHXZ */
  return 0;
}




/* public: virtual int __cdecl IStorageDevice::DeviceIoControl(unsigned long,void * __ptr64,unsigned
   long,void * __ptr64,unsigned long,unsigned long * __ptr64) __ptr64 */

int __thiscall
IStorageDevice::DeviceIoControl
          (IStorageDevice *this,ulong param_1,void *param_2,ulong param_3,void *param_4,
          ulong param_5,ulong *param_6)

{
                    /* 0x1950  21  ?DeviceIoControl@IStorageDevice@@UEAAHKPEAXK0KPEAK@Z */
  return 0;
}




/* public: virtual int __cdecl IStorageDevice::GetBitlockerStatus(void) __ptr64 */

int __thiscall IStorageDevice::GetBitlockerStatus(IStorageDevice *this)

{
                    /* 0x1970  23  ?GetBitlockerStatus@IStorageDevice@@UEAAHXZ */
  return -1;
}




/* public: virtual int __cdecl IStorageDevice::GetInformationOffset(unsigned __int64 * __ptr64
   const) __ptr64 */

int __thiscall IStorageDevice::GetInformationOffset(IStorageDevice *this,__uint64 *param_1)

{
                    /* 0x1980  24  ?GetInformationOffset@IStorageDevice@@UEAAHQEA_K@Z
                       0x1980  30  ?SetBitlockerInfo@IStorageDevice@@UEAAHPEAUBitlockerInfo@@@Z */
  return 0;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1990  25  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)(this,param_1);
  return pIVar1;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x19c0  27  ?Release@IObject@@QEBAKXZ */
  uVar1 = (**(code **)(*(longlong *)this + 8))(this);
  return uVar1;
}




/* public: virtual void __cdecl IStorageDevice::ReleaseBitlocker(void) __ptr64 */

void __thiscall IStorageDevice::ReleaseBitlocker(IStorageDevice *this)

{
                    /* 0x19e0  28  ?ReleaseBitlocker@IStorageDevice@@UEAAXXZ */
  return;
}




/* public: virtual int __cdecl IStorageDevice::SetBitlockerEnable(int) __ptr64 */

int __thiscall IStorageDevice::SetBitlockerEnable(IStorageDevice *this,int param_1)

{
                    /* 0x19f0  29  ?SetBitlockerEnable@IStorageDevice@@UEAAHH@Z */
  return 0;
}




void FUN_180001a00(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_180001a20(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}




/* public: virtual int __cdecl IStorageDevice::SetMetaFilePos(unsigned __int64 * __ptr64
   const,unsigned __int64) __ptr64 */

int __thiscall
IStorageDevice::SetMetaFilePos(IStorageDevice *this,__uint64 *param_1,__uint64 param_2)

{
                    /* 0x1a40  31  ?SetMetaFilePos@IStorageDevice@@UEAAHQEA_K_K@Z */
  return 0;
}




void FUN_180001a60(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}




void FUN_180001a80(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_180001aa0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




undefined8 * FUN_180001ac0(undefined8 *param_1)

{
  *param_1 = IBlockParser::vftable;
  return param_1;
}




void FUN_180001ae0(undefined8 *param_1)

{
  *param_1 = IBlockParser::vftable;
  return;
}




undefined8 * FUN_180001b00(undefined8 *param_1,uint param_2)

{
  FUN_180001ae0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001b40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  
  FUN_180016a20(param_1);
  *param_1 = CBlockParserLinux::vftable;
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180002b00(puVar1);
  }
  FUN_180016c80((longlong)param_1,(longlong)local_20);
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CBlockParserLinux::vftable;
  FUN_180016a70(this);
  return;
}




ios_base * FUN_180001c10(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001c50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *local_70;
  undefined8 *local_60;
  undefined8 *local_50;
  undefined8 *local_40;
  
  FUN_180016a20(param_1);
  *param_1 = CBlockParseWin32::vftable;
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_70 = (undefined8 *)0x0;
  }
  else {
    local_70 = FUN_1800061d0(puVar1);
  }
  FUN_180016c80((longlong)param_1,(longlong)local_70);
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_60 = (undefined8 *)0x0;
  }
  else {
    local_60 = FUN_180010f90(puVar1);
  }
  FUN_180016c80((longlong)param_1,(longlong)local_60);
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
  }
  else {
    local_50 = FUN_180001e60(puVar1);
  }
  FUN_180016c80((longlong)param_1,(longlong)local_50);
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_40 = (undefined8 *)0x0;
  }
  else {
    local_40 = FUN_180001e20(puVar1);
  }
  FUN_180016c80((longlong)param_1,(longlong)local_40);
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CBlockParseWin32::vftable;
  FUN_180016a70(this);
  return;
}




undefined8 * FUN_180001e20(undefined8 *param_1)

{
  FUN_180001ac0(param_1);
  *param_1 = BitlockerParser::vftable;
  return param_1;
}




undefined8 * FUN_180001e60(undefined8 *param_1)

{
  FUN_180001ac0(param_1);
  *param_1 = CExFatBlockParser::vftable;
  return param_1;
}




void FUN_180001ea0(undefined8 *param_1)

{
  FUN_180001ae0(param_1);
  return;
}




undefined8 * FUN_180001ed0(undefined8 *param_1,uint param_2)

{
  FUN_180001ea0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




ios_base * FUN_180001f10(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180001f50(undefined8 param_1,void *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_248 [32];
  int local_228;
  int local_224;
  undefined1 local_218 [64];
  undefined8 local_1d8;
  undefined8 local_1d0;
  byte local_1ac;
  byte local_1ab;
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_248;
  if (param_2 != (void *)0x0) {
    puVar3 = local_218;
    for (lVar2 = 0x200; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    memcpy(local_218,param_2,0x200);
    cVar1 = FUN_180002270(param_1,(longlong)local_218);
    if (cVar1 != '\0') {
      FUN_180001a20((longlong)param_4,8);
      local_228 = 1 << (local_1ab & 0x1f);
      FUN_180001a60((longlong)param_4,local_228);
      FUN_180001aa0((longlong)param_4,local_1d0);
      FUN_180002510((longlong)param_4,local_1d8);
      FUN_180001a80(param_4,param_3);
      local_224 = 1 << (local_1ac & 0x1f);
      FUN_180001a00((longlong)param_4,local_224);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_248);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800020b0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_1068 [32];
  undefined4 local_1048;
  longlong local_1040;
  longlong local_1038;
  longlong local_1030;
  int *local_1028;
  longlong local_1020;
  int local_1018;
  int iStack_1014;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1800020cf;
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_1068;
  local_1048 = 0xfffffff1;
  if ((param_3 != 0) &&
     (local_1038 = param_2, cVar1 = FUN_180002270(param_1,param_2), cVar1 != '\0')) {
    piVar4 = &local_1018;
    for (lVar3 = 0x1000; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)piVar4 = 0;
      piVar4 = (int *)((longlong)piVar4 + 1);
    }
    local_1040 = param_4 + 0xc;
    local_1030 = *(longlong *)(param_3 + 8);
    iVar2 = (**(code **)(local_1030 + 8))(param_3 + 8,&local_1018,local_1040,1);
    if (iVar2 != 0) {
      local_1028 = &local_1018;
      cVar1 = FUN_180002270(param_1,(longlong)local_1028);
      if (cVar1 != '\0') {
        local_1040 = param_4 + *(uint *)(local_1038 + 0x50);
        local_1020 = *(longlong *)(param_3 + 8);
        iVar2 = (**(code **)(local_1020 + 8))(param_3 + 8,&local_1018,local_1040,1);
        if ((((iVar2 != 0) && (local_1018 == -8)) && (iStack_1014 == -1)) && (0xb < param_4)) {
          local_1048 = 0;
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1068);
  return;
}




undefined1 FUN_180002270(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  undefined1 local_18;
  
  local_18 = 0;
  if (param_2 != 0) {
    _Size = strlen(PTR_s_EXFAT_18003a000);
    iVar1 = memcmp((void *)(param_2 + 3),PTR_s_EXFAT_18003a000,_Size);
    if ((((((iVar1 == 0) && (*(char *)(param_2 + 0x1fe) == 'U')) &&
          (*(char *)(param_2 + 0x1ff) == -0x56)) &&
         ((uVar3 = FUN_180002490((longlong *)(param_2 + 0xb),0x35), (uVar3 & 0xff) != 0 &&
          ((uint)*(byte *)(param_2 + 0x6c) + (uint)*(byte *)(param_2 + 0x6d) < 0x1a)))) &&
        ((*(char *)(param_2 + 0x6e) == '\x01' || (*(char *)(param_2 + 0x6e) == '\x02')))) &&
       (((((*(int *)(param_2 + 0x54) != 0 && (*(int *)(param_2 + 0x50) != 0)) &&
          (*(int *)(param_2 + 0x5c) != 0)) &&
         (((*(int *)(param_2 + 0x60) != 0 && (*(longlong *)(param_2 + 0x48) != 0)) &&
          ((ulonglong)*(uint *)(param_2 + 0x50) <= *(ulonglong *)(param_2 + 0x48))))) &&
        ((((ulonglong)*(uint *)(param_2 + 0x58) <= *(ulonglong *)(param_2 + 0x48) &&
          ((uint)(*(int *)(param_2 + 0x50) + *(int *)(param_2 + 0x54)) <= *(uint *)(param_2 + 0x58))
          ) && ((((ulonglong)*(uint *)(param_2 + 0x5c) << (*(byte *)(param_2 + 0x6d) & 0x3f)) +
                 (ulonglong)*(uint *)(param_2 + 0x58) <= *(ulonglong *)(param_2 + 0x48) &&
                ((uVar2 = 0 << (*(byte *)(param_2 + 0x6d) & 0x1f), uVar2 % 2 == 0 || (uVar2 == 1))))
               )))))) {
      local_18 = 1;
    }
  }
  return local_18;
}




undefined8 FUN_180002490(longlong *param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  longlong *local_res8;
  ulonglong local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  while (8 < local_res10) {
    if (*local_res8 != 0) {
      return (ulonglong)local_res8 & 0xffffffffffffff00;
    }
    local_res8 = local_res8 + 1;
    in_RAX = local_res10 - 8;
    local_res10 = in_RAX;
  }
  while( true ) {
    if (local_res10 == 0) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
    if ((char)*local_res8 != '\0') break;
    local_res8 = (longlong *)((longlong)local_res8 + 1);
    in_RAX = local_res10 - 1;
    local_res10 = in_RAX;
  }
  return 0;
}




void FUN_180002510(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




undefined8 * FUN_180002530(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}




void FUN_180002590(void)

{
  return;
}




undefined8
FUN_1800025a0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  bool bVar1;
  longlong lVar2;
  
  *param_6 = param_2;
  param_6[1] = param_4;
  param_6[2] = param_3;
  param_6[3] = (int)param_1[3];
  *(longlong *)(param_6 + 4) = *param_1;
  param_6[8] = (int)param_1[4];
  lVar2 = FUN_180002760(param_1);
  *(longlong *)(param_6 + 6) = lVar2;
  bVar1 = FUN_180002660(param_1,param_5);
  *(bool *)((longlong)param_6 + 0x429) = bVar1;
  param_6[0x10b] = *(undefined4 *)((longlong)param_1 + 0x1c);
  return 0;
}




bool FUN_180002660(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool local_38;
  
  lVar3 = FUN_1800027b0((longlong)param_1);
  if (lVar3 == 0) {
    uVar1 = FUN_1800027c0(param_2);
    uVar2 = FUN_1800027f0((longlong)param_2);
    uVar4 = FUN_180002800(param_1);
    if (uVar2 < uVar4) {
      uVar4 = FUN_180002800(param_1);
      uVar2 = FUN_1800027f0((longlong)param_2);
      local_38 = (ulonglong)uVar2 != uVar4 % (ulonglong)uVar1;
    }
    else {
      local_38 = true;
    }
  }
  else {
    uVar4 = FUN_180002800(param_1);
    uVar5 = FUN_1800027b0((longlong)param_1);
    local_38 = uVar4 <= uVar5;
  }
  return local_38;
}




longlong FUN_180002760(longlong *param_1)

{
  longlong local_18;
  
  local_18 = param_1[1] + -1 + *param_1;
  if ((int)param_1[3] == 4) {
    local_18 = local_18 + 1;
  }
  return local_18;
}




undefined8 FUN_1800027b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




int FUN_1800027c0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_180002810(param_1);
  iVar2 = FUN_1800027f0((longlong)param_1);
  return iVar1 * iVar2;
}




undefined4 FUN_1800027f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




undefined8 FUN_180002800(undefined8 *param_1)

{
  return *param_1;
}




undefined4 FUN_180002810(undefined4 *param_1)

{
  return *param_1;
}




int FUN_180002820(longlong param_1)

{
  return ((*(int *)(param_1 + 4) - *(int *)(param_1 + 0x14)) - 1U) / *(uint *)(param_1 + 0x20) + 1;
}




int FUN_180002850(int *param_1)

{
  return (*param_1 - 1U) / (uint)param_1[10] + 1;
}




ulonglong FUN_180002880(uint *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  uint7 uVar4;
  int local_28;
  uint local_24;
  
  if ((short)param_1[0xe] == -0x10ad) {
    if ((((param_1[1] == 0) || (*param_1 == 0)) || (param_1[8] == 0)) ||
       ((param_1[10] == 0 || (param_1[0x15] < 3)))) {
      uVar3 = (ulonglong)param_1 & 0xffffffffffffff00;
    }
    else {
      iVar1 = FUN_180002820((longlong)param_1);
      iVar2 = FUN_180002850((int *)param_1);
      if (iVar1 == iVar2) {
        local_28 = 0x400 << ((byte)param_1[6] & 0x1f);
        if ((param_1[0x19] & 0x200) != 0) {
          local_28 = local_28 * (1 << ((byte)param_1[7] & 0x1f));
        }
        local_24 = (uint)(local_28 == 0x400);
        if (local_24 == param_1[5]) {
          uVar4 = (uint7)((ulonglong)param_1 >> 8);
          if (param_1[0x15] < *param_1) {
            uVar3 = CONCAT71(uVar4,1);
          }
          else {
            uVar3 = (ulonglong)uVar4 << 8;
          }
        }
        else {
          uVar3 = (ulonglong)(uint3)(param_1[5] >> 8) << 8;
        }
      }
      else {
        uVar3 = CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
      }
    }
  }
  else {
    uVar3 = (ulonglong)(byte)((ushort)(short)param_1[0xe] >> 8) << 8;
  }
  return uVar3;
}




ulonglong FUN_1800029c0(uint *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  uint *puVar4;
  uint local_28;
  uint local_20;
  
  if (param_2 == 0) {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar3 = FUN_180002880(param_1);
    if ((uVar3 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
        puVar4 = (uint *)(param_2 + (ulonglong)local_28 * 0x20);
        uVar1 = param_1[8] * local_28 + param_1[5];
        iVar2 = FUN_180002820((longlong)param_1);
        if (local_28 == iVar2 - 1U) {
          local_20 = param_1[1] - 1;
        }
        else {
          local_20 = (uVar1 - 1) + param_1[8];
        }
        if ((*puVar4 < uVar1) || (local_20 < *puVar4)) {
          return (ulonglong)puVar4 & 0xffffffffffffff00;
        }
        if ((puVar4[1] < uVar1) || (local_20 < puVar4[1])) {
          return (ulonglong)puVar4 & 0xffffffffffffff00;
        }
        if ((puVar4[2] < uVar1) || (local_20 < puVar4[2])) {
          return (ulonglong)puVar4 & 0xffffffffffffff00;
        }
      }
      uVar3 = CONCAT71((uint7)(uint3)(param_3 >> 8),1);
    }
  }
  return uVar3;
}




undefined8 * FUN_180002b00(undefined8 *param_1)

{
  FUN_180001ac0(param_1);
  *param_1 = CExtXBlockParser::vftable;
  param_1[1] = 0;
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CExtXBlockParser::vftable;
  FUN_180001ae0((undefined8 *)this);
  return;
}




undefined4
FUN_180002b90(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  longlong lVar4;
  undefined4 extraout_var_00;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0xfffffffa;
  *(undefined8 *)(param_1 + 8) = param_5;
  local_14 = 0x200;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_14 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 8))
                         (*(longlong *)(param_1 + 8) + 8);
  }
  puVar2 = (uint *)(param_2 + 0x400);
  uVar3 = FUN_180002880(puVar2);
  if (((uVar3 & 0xff) != 0) && (*(short *)(param_2 + 0x45a) == 0)) {
    FUN_180001a00((longlong)param_4,local_14);
    if (((*(uint *)(param_2 + 0x45c) & 4) == 0) || (*(int *)(param_2 + 0x4e0) == 0)) {
      if (((*(uint *)(param_2 + 0x45c) & 4) == 0) && (*(int *)(param_2 + 0x4e0) == 0)) {
        FUN_180001a20((longlong)param_4,5);
        uVar3 = FUN_180002ff0(param_1,(longlong)puVar2);
        FUN_180001a60((longlong)param_4,(int)uVar3);
        FUN_180001a80(param_4,param_3);
        iVar1 = FUN_180003090(param_1,(longlong)puVar2);
        FUN_180001aa0((longlong)param_4,CONCAT44(extraout_var_00,iVar1));
        lVar4 = FUN_1800039b0((longlong)param_4);
        if (lVar4 != 0) {
          local_18 = 0;
        }
      }
    }
    else {
      FUN_180001a20((longlong)param_4,6);
      uVar3 = FUN_180002ff0(param_1,(longlong)puVar2);
      FUN_180001a60((longlong)param_4,(int)uVar3);
      FUN_180001a80(param_4,param_3);
      iVar1 = FUN_180003090(param_1,(longlong)puVar2);
      FUN_180001aa0((longlong)param_4,CONCAT44(extraout_var,iVar1));
      lVar4 = FUN_1800039b0((longlong)param_4);
      if (lVar4 != 0) {
        local_18 = 0;
      }
    }
  }
  return local_18;
}




undefined4
FUN_180002d60(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
             )

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 local_84;
  uint local_70;
  undefined8 local_48 [3];
  undefined4 local_30;
  uint local_2c;
  undefined8 *local_28;
  ulonglong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_84 = 0xfffffff1;
  iVar2 = FUN_1800039a0(param_5);
  if ((iVar2 == 5) || (iVar2 = FUN_1800039a0(param_5), iVar2 == 6)) {
    local_28 = *(undefined8 **)(param_3 + 8);
    uVar3 = (*(code *)*local_28)(param_3 + 8);
    if (uVar3 == 0) {
      local_84 = 0xfffffff1;
    }
    else {
      uVar4 = 0x400 << ((byte)*(undefined4 *)(param_2 + 0x418) & 0x1f);
      local_30 = *(undefined4 *)(param_2 + 0x428);
      if (*(int *)(param_2 + 0x44c) == 0) {
        local_70 = 0x80;
      }
      else {
        local_70 = (uint)*(ushort *)(param_2 + 0x458);
      }
      local_2c = local_70;
      uVar5 = FUN_180002820(param_2 + 0x400);
      local_20 = CONCAT44(0,uVar3);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_20;
      iVar2 = (int)(((ulonglong)uVar5 * 0x20) / (ulonglong)uVar3) + 1;
      FUN_1800038a0(local_48);
      FUN_180003ff0(local_48,(ulonglong)(iVar2 * uVar3));
      lVar7 = FUN_180003900(local_48,0);
      local_18 = *(longlong *)(param_3 + 8);
      iVar6 = (**(code **)(local_18 + 8))
                        (param_3 + 8,lVar7,
                         (ulonglong)
                         ((((SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x7ff)) / auVar1,0) + 1) * uVar3 -
                           1) / uVar4 + 1) * (uVar4 / uVar3)) + param_4,iVar2);
      if (iVar6 == iVar2) {
        lVar7 = FUN_180003900(local_48,0);
        uVar8 = FUN_1800029c0((uint *)(param_2 + 0x400),lVar7,uVar5);
        if ((uVar8 & 0xff) == 0) {
          FUN_1800038d0(local_48);
          local_84 = 0xfffffff1;
        }
        else {
          local_84 = 0;
          FUN_1800038d0(local_48);
        }
      }
      else {
        FUN_1800038d0(local_48);
        local_84 = 0xfffffff1;
      }
    }
  }
  return local_84;
}




ulonglong FUN_180002ff0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0x400 << ((byte)*(undefined4 *)(param_2 + 0x18) & 0x1f);
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (iVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 8))
                        (*(longlong *)(param_1 + 8) + 8), iVar2 != 0)) {
    uVar3 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 8))
                      (*(longlong *)(param_1 + 8) + 8);
    return (ulonglong)uVar1 / (ulonglong)uVar3;
  }
  return (ulonglong)uVar1 / 0x200;
}




int FUN_180003090(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180002ff0(param_1,param_2);
  return *(int *)(param_2 + 4) * (int)uVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<char> >,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<char> >,class std::_String_val<struct
   std::_Simple_types<char> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned
   short> >,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1>::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned short> >,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<wchar_t>
   >,class std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<wchar_t> >,class std::_String_val<struct
   std::_Simple_types<wchar_t> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
   
   Library: Visual Studio 2015 Release */

undefined8 * _Compressed_pair<><>(undefined8 *param_1)

{
  FUN_1800032f0(param_1);
  FUN_180003860(param_1);
  return param_1;
}




/* Library Function - Single Match
    void * __ptr64 __cdecl std::_Allocate<16,struct std::_Default_allocate_traits,0>(unsigned
   __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __cdecl std::_Allocate<16,struct_std::_Default_allocate_traits,0>(__uint64 param_1)

{
  void *pvVar1;
  
  if (param_1 < 0x1000) {
    if (param_1 == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_180003a60(param_1);
    }
  }
  else {
    pvVar1 = (void *)FUN_180003140(param_1);
  }
  return pvVar1;
}




ulonglong FUN_180003140(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  
  local_28 = param_1 + 0x27;
  if (local_28 <= param_1) {
    local_28 = 0xffffffffffffffff;
  }
  lVar1 = FUN_180003a60(local_28);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




longlong FUN_1800031d0(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1);
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Deallocate<8,0>(void * __ptr64,unsigned __int64)
    void __cdecl std::_Deallocate<16,0>(void * __ptr64,unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _Deallocate<>(void *param_1,ulonglong param_2)

{
  void *local_res8;
  ulonglong local_res10 [3];
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  if (0xfff < param_2) {
    FUN_1800039c0((longlong *)&local_res8,(longlong *)local_res10);
  }
  free(local_res8);
  return;
}




void FUN_180003280(void)

{
  return;
}




void FUN_1800032a0(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_180003280();
  return;
}




undefined8 FUN_1800032f0(undefined8 param_1)

{
  return param_1;
}




longlong FUN_180003300(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1;
}




void FUN_180003330(longlong *param_1,longlong *param_2)

{
  FUN_180003300(param_1,param_2);
  return;
}




/* Library Function - Single Match
    unsigned __int64 const & __ptr64 __cdecl std::_Min_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

__uint64 * __cdecl std::_Min_value<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 *local_18;
  
  local_18 = param_1;
  if (*param_2 < *param_1) {
    local_18 = param_2;
  }
  return local_18;
}




undefined8 FUN_1800033b0(undefined8 param_1)

{
  return param_1;
}




void FUN_1800033d0(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  CLogWriter *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  uVar2 = FUN_180004030(param_1);
  uVar3 = FUN_180003f10(param_1);
  if (uVar3 < param_2) {
    _Var4 = FUN_180003fa0(param_1);
    if (_Var4 < param_2) {
      FUN_180003ec0();
    }
    uVar3 = FUN_180003a80(param_1,param_2);
    uVar5 = FUN_180003c60(param_1);
    pCVar6 = (CLogWriter *)allocate(uVar5,uVar3);
    FUN_180003930(local_res18,pCVar6 + uVar2,param_2 - uVar2);
    puVar7 = (undefined8 *)FUN_180003cc0(param_1);
    puVar8 = (undefined8 *)FUN_180003ca0(param_1);
    FUN_180003e60(param_1,*puVar8,*puVar7,pCVar6);
    FUN_180003b10(param_1,(longlong)pCVar6,param_2,uVar3);
  }
  else if (uVar2 < param_2) {
    puVar7 = (undefined8 *)FUN_180003cc0(param_1);
    uVar5 = FUN_180003930(local_res18,(void *)*puVar7,param_2 - uVar2);
    puVar7 = (undefined8 *)FUN_180003cc0(param_1);
    *puVar7 = uVar5;
    FUN_180003d00();
  }
  else if (param_2 != uVar2) {
    plVar9 = (longlong *)FUN_180003ca0(param_1);
    lVar1 = *plVar9;
    FUN_180003cc0(param_1);
    FUN_180003d00();
    FUN_180003cc0(param_1);
    FUN_180003c20(param_1);
    plVar9 = (longlong *)FUN_180003cc0(param_1);
    *plVar9 = lVar1 + param_2;
  }
  return;
}




CLogWriter *
FUN_180003640(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  CLogWriter *pCVar1;
  undefined8 uVar2;
  CLogWriter *local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  void *local_20;
  CLogWriter *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (void *)FUN_1800032f0(param_1);
  local_10[0] = FUN_1800032f0(param_2);
  pCVar1 = (CLogWriter *)FUN_180003330((longlong *)&local_20,local_10);
  local_18 = CLogWriter::operator=(local_res18,pCVar1);
  FUN_1800033b0(local_28);
  uVar2 = FUN_1800036f0(local_20,local_10[0],local_18);
  FUN_180001a80(&local_res18,uVar2);
  return local_res18;
}




void FUN_1800036f0(void *param_1,longlong param_2,void *param_3)

{
  FUN_1800031d0(param_1,param_2,param_3);
  return;
}




void FUN_180003730(void *param_1,longlong param_2)

{
  FUN_1800037c0(param_1,(longlong)param_1 + param_2);
  return;
}




void FUN_180003770(void *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_180003730(param_1,param_2);
  return;
}




longlong FUN_1800037c0(void *param_1,longlong param_2)

{
  memset(param_1,0,param_2 - (longlong)param_1);
  return param_2;
}




undefined8 * FUN_180003810(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}




undefined8 * FUN_180003830(undefined8 *param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




undefined8 * FUN_180003860(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




undefined8 * FUN_1800038a0(undefined8 *param_1)

{
  FUN_180003830(param_1);
  return param_1;
}




void FUN_1800038d0(undefined8 param_1)

{
  FUN_180003d10(param_1);
  return;
}




longlong FUN_180003900(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  return *plVar1 + param_2;
}




void FUN_180003930(undefined8 *param_1,void *param_2,longlong param_3)

{
  FUN_180003de0(*param_1,param_2,param_3);
  return;
}




ios_base * FUN_180003960(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined4 FUN_1800039a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}




undefined8 FUN_1800039b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_1800039c0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  *param_2 = *param_2 + 0x27;
  uVar1 = *param_1 - *(longlong *)(*param_1 + -8);
  if ((7 < uVar1) && (uVar1 < 0x28)) {
    *param_1 = *(longlong *)(*param_1 + -8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




void FUN_180003a60(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




ulonglong FUN_180003a80(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_180003f10(param_1);
  _Var2 = FUN_180003fa0(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_180003b10(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180003ce0(param_1);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  if (*plVar1 != 0) {
    FUN_180003cc0(param_1);
    FUN_180003ca0(param_1);
    FUN_180003c20(param_1);
    uVar2 = FUN_180003f10(param_1);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    uVar4 = FUN_180003c60(param_1);
    FUN_180003f50(uVar4,(void *)*puVar3,uVar2);
  }
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  *plVar1 = param_2 + param_3;
  plVar1 = (longlong *)FUN_180003c80(param_1);
  *plVar1 = param_2 + param_4;
  return;
}




void FUN_180003c20(undefined8 param_1)

{
  FUN_180003c60(param_1);
  FUN_1800032a0();
  return;
}




void FUN_180003c60(undefined8 param_1)

{
  FUN_1800032f0(param_1);
  return;
}




longlong FUN_180003c80(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180003c60(param_1);
  return lVar1 + 0x10;
}




void FUN_180003ca0(undefined8 param_1)

{
  FUN_180003c60(param_1);
  return;
}




longlong FUN_180003cc0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180003c60(param_1);
  return lVar1 + 8;
}




void FUN_180003ce0(undefined8 param_1)

{
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_180003c60(param_1);
  IStorageDevice::ReleaseBitlocker(this);
  return;
}




void FUN_180003d00(void)

{
  return;
}




void FUN_180003d10(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180003ce0(param_1);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  if (*plVar1 != 0) {
    FUN_180003cc0(param_1);
    FUN_180003ca0(param_1);
    FUN_180003c20(param_1);
    uVar2 = FUN_180003f10(param_1);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    uVar4 = FUN_180003c60(param_1);
    FUN_180003f50(uVar4,(void *)*puVar3,uVar2);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_180003cc0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_180003c80(param_1);
    *puVar3 = 0;
  }
  return;
}




void FUN_180003de0(undefined8 param_1,void *param_2,longlong param_3)

{
  FUN_180003c60(param_1);
  FUN_180003770(param_2,param_3);
  return;
}




void FUN_180003e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_180003640(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_180003e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_180003e20(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180003ec0(void)

{
  std::_Xlength_error("vector<T> too long");
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

void allocate(undefined8 param_1,undefined8 param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_1800032f0(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




longlong FUN_180003f10(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003c80(param_1);
  plVar2 = (longlong *)FUN_180003ca0(param_1);
  return *plVar1 - *plVar2;
}




void FUN_180003f50(undefined8 param_1,void *param_2,ulonglong param_3)

{
  _Deallocate<>(param_2,param_3);
  return;
}




undefined8 FUN_180003f80(void)

{
  return 0x7fffffffffffffff;
}




undefined8 FUN_180003f90(void)

{
  return 0xffffffffffffffff;
}




__uint64 FUN_180003fa0(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180003c60(param_1);
  local_18 = FUN_180003f90();
  local_10[0] = FUN_180003f80();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




void FUN_180003ff0(undefined8 param_1,ulonglong param_2)

{
  undefined8 local_18 [3];
  
  FUN_180003810(local_18,param_1);
  FUN_1800033d0(param_1,param_2,local_18[0]);
  return;
}




longlong FUN_180004030(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  plVar2 = (longlong *)FUN_180003ca0(param_1);
  return *plVar1 - *plVar2;
}




ulonglong * FUN_180004070(ulonglong *param_1,ulonglong param_2)

{
  *param_1 = param_2;
  FUN_180004610(param_1);
  return param_1;
}




ulonglong * FUN_1800040b0(ulonglong *param_1,ulonglong param_2)

{
  *param_1 = param_2;
  FUN_180004610(param_1);
  return param_1;
}




void FUN_1800040f0(void)

{
  return;
}




undefined1 FUN_180004100(char *param_1)

{
  undefined1 local_18;
  
  if (((*param_1 == '\0') || (param_1[0x1fe] != 'U')) || (param_1[0x1ff] != -0x56)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}




bool FUN_180004180(longlong param_1)

{
  return *(int *)(param_1 + 8) != 0xff;
}




longlong FUN_1800041c0(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined6 extraout_var_02;
  undefined7 extraout_var;
  undefined6 extraout_var_03;
  undefined6 extraout_var_04;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  uint7 uVar9;
  longlong lVar8;
  
  uVar6 = 0;
  iVar5 = FUN_180004590((longlong)param_1);
  if (0 < iVar5) {
    if (iVar5 < 3) {
      uVar4 = FUN_180004480(param_1);
      uVar1 = FUN_1800043c0(param_1);
      uVar6 = FUN_180004420(param_1);
      uVar3 = FUN_180004550(param_1);
      uVar6 = (int)CONCAT62(extraout_var_02,uVar4) + (int)CONCAT71(extraout_var,uVar1) * uVar6 +
              ((int)CONCAT62(extraout_var_03,uVar3) * 0x20 + -1 + (uint)*(ushort *)(*param_1 + 0xb))
              / (uint)*(ushort *)(*param_1 + 0xb);
    }
    else if (iVar5 == 3) {
      uVar4 = FUN_180004480(param_1);
      uVar1 = FUN_1800043c0(param_1);
      uVar6 = FUN_180004420(param_1);
      iVar5 = FUN_180004390(param_1);
      uVar2 = FUN_180004310(param_1);
      uVar6 = (int)CONCAT62(extraout_var_04,uVar4) + (int)CONCAT71(extraout_var_00,uVar1) * uVar6 +
              (iVar5 + -2) * (int)CONCAT71(extraout_var_01,uVar2);
    }
  }
  uVar7 = FUN_1800044e0(param_1);
  uVar9 = (uint7)(uint3)(uVar7 >> 8);
  if (uVar6 < uVar7) {
    lVar8 = CONCAT71(uVar9,1);
  }
  else {
    lVar8 = (ulonglong)uVar9 << 8;
  }
  return lVar8;
}




undefined1 FUN_180004310(longlong *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 1) {
    uVar2 = *(undefined1 *)(*param_1 + 0xd);
  }
  else if (iVar1 == 2) {
    uVar2 = *(undefined1 *)(*param_1 + 0xd);
  }
  else if (iVar1 == 3) {
    uVar2 = *(undefined1 *)(*param_1 + 0xd);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




undefined2 FUN_180004370(longlong *param_1)

{
  return *(undefined2 *)(*param_1 + 0xe);
}




undefined4 FUN_180004390(longlong *param_1)

{
  undefined4 uVar1;
  
  if ((int)param_1[1] == 3) {
    uVar1 = *(undefined4 *)(*param_1 + 0x2c);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




undefined1 FUN_1800043c0(longlong *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 1) {
    uVar2 = *(undefined1 *)(*param_1 + 0x10);
  }
  else if (iVar1 == 2) {
    uVar2 = *(undefined1 *)(*param_1 + 0x10);
  }
  else if (iVar1 == 3) {
    uVar2 = *(undefined1 *)(*param_1 + 0x10);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




uint FUN_180004420(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 1) {
    uVar2 = (uint)*(ushort *)(*param_1 + 0x16);
  }
  else if (iVar1 == 2) {
    uVar2 = (uint)*(ushort *)(*param_1 + 0x16);
  }
  else if (iVar1 == 3) {
    uVar2 = *(uint *)(*param_1 + 0x24);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




undefined2 FUN_180004480(longlong *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 1) {
    uVar2 = *(undefined2 *)(*param_1 + 0xe);
  }
  else if (iVar1 == 2) {
    uVar2 = *(undefined2 *)(*param_1 + 0xe);
  }
  else if (iVar1 == 3) {
    uVar2 = *(undefined2 *)(*param_1 + 0xe);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




uint FUN_1800044e0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (0 < iVar1) {
    if (iVar1 < 3) {
      if (*(int *)(*param_1 + 0x20) != 0) {
        return *(uint *)(*param_1 + 0x20);
      }
      return (uint)*(ushort *)(*param_1 + 0x13);
    }
    if (iVar1 == 3) {
      return *(uint *)(*param_1 + 0x20);
    }
  }
  return 0;
}




undefined2 FUN_180004550(longlong *param_1)

{
  return *(undefined2 *)(*param_1 + 0x11);
}




undefined2 FUN_180004570(longlong *param_1)

{
  return *(undefined2 *)(*param_1 + 0xb);
}




undefined4 FUN_180004590(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_1800045b0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 1) {
    uVar2 = *(undefined4 *)(*param_1 + 0x27);
  }
  else if (iVar1 == 2) {
    uVar2 = *(undefined4 *)(*param_1 + 0x27);
  }
  else if (iVar1 == 3) {
    uVar2 = *(undefined4 *)(*param_1 + 0x43);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_180004610(ulonglong *param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint local_24;
  uint local_20;
  
  cVar1 = FUN_180004ce0((longlong *)param_1);
  if (cVar1 == '\0') {
    if (*(short *)(*param_1 + 0x16) == 0) {
      local_20 = *(uint *)(*param_1 + 0x24);
    }
    else {
      local_20 = (uint)*(ushort *)(*param_1 + 0x16);
    }
    if (*(int *)(*param_1 + 0x20) == 0) {
      local_24 = (uint)*(ushort *)(*param_1 + 0x13);
    }
    else {
      local_24 = *(uint *)(*param_1 + 0x20);
    }
    if ((*(short *)(*param_1 + 0xb) == 0) || (*(char *)(*param_1 + 0xd) == '\0')) {
      *(undefined4 *)(param_1 + 1) = 0xff;
    }
    else if ((*(ushort *)(*param_1 + 0xb) & 0x1ff) == 0) {
      uVar2 = (((local_24 - *(ushort *)(*param_1 + 0xe)) - local_20 * *(byte *)(*param_1 + 0x10)) -
              (int)((ulonglong)((uint)*(ushort *)(*param_1 + 0x11) * 0x20) /
                   (ulonglong)(longlong)(int)(uint)*(ushort *)(*param_1 + 0xb))) /
              (uint)*(byte *)(*param_1 + 0xd);
      if (uVar2 < 0xff5) {
        uVar3 = FUN_1800048f0(param_1);
        if ((uVar3 & 0xff) != 0) {
          *(undefined4 *)(param_1 + 1) = 1;
          return;
        }
        uVar3 = FUN_180004a40(param_1);
        if ((uVar3 & 0xff) != 0) {
          *(undefined4 *)(param_1 + 1) = 2;
          return;
        }
        uVar3 = FUN_180004b70(param_1);
        if ((uVar3 & 0xff) != 0) {
          *(undefined4 *)(param_1 + 1) = 3;
          return;
        }
      }
      else if (uVar2 < 0xfff5) {
        uVar3 = FUN_180004a40(param_1);
        if ((uVar3 & 0xff) != 0) {
          *(undefined4 *)(param_1 + 1) = 2;
          return;
        }
        uVar3 = FUN_180004b70(param_1);
        if ((uVar3 & 0xff) != 0) {
          *(undefined4 *)(param_1 + 1) = 3;
          return;
        }
        uVar3 = FUN_1800048f0(param_1);
        if ((uVar3 & 0xff) != 0) {
          *(undefined4 *)(param_1 + 1) = 1;
          return;
        }
      }
      else if (uVar2 < 0xffffff0) {
        uVar3 = FUN_180004b70(param_1);
        if ((uVar3 & 0xff) != 0) {
          *(undefined4 *)(param_1 + 1) = 3;
          return;
        }
        uVar3 = FUN_180004a40(param_1);
        if ((uVar3 & 0xff) != 0) {
          *(undefined4 *)(param_1 + 1) = 2;
          return;
        }
        uVar3 = FUN_1800048f0(param_1);
        if ((uVar3 & 0xff) != 0) {
          *(undefined4 *)(param_1 + 1) = 1;
          return;
        }
      }
      *(undefined4 *)(param_1 + 1) = 0xff;
    }
    else {
      *(undefined4 *)(param_1 + 1) = 0xff;
    }
  }
  else {
    *(undefined4 *)(param_1 + 1) = 0xb;
  }
  return;
}




ulonglong FUN_1800048f0(ulonglong *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  if (*(char *)(*param_1 + 0x10) == '\0') {
    uVar2 = 0;
  }
  else if ((*(short *)(*param_1 + 0x13) == 0) && (*(int *)(*param_1 + 0x20) == 0)) {
    uVar2 = *param_1 & 0xffffffffffffff00;
  }
  else if ((((*(char *)(*param_1 + 0xd) == '\x01') ||
            ((((*(char *)(*param_1 + 0xd) == '\x02' || (*(char *)(*param_1 + 0xd) == '\x04')) ||
              (*(char *)(*param_1 + 0xd) == '\b')) ||
             ((*(char *)(*param_1 + 0xd) == '\x10' || (*(char *)(*param_1 + 0xd) == ' ')))))) ||
           (*(char *)(*param_1 + 0xd) == '@')) || (*(char *)(*param_1 + 0xd) == -0x80)) {
    uVar1 = *(ushort *)(*param_1 + 0x16);
    if ((uVar1 == 0) || (uVar1 = *(ushort *)(*param_1 + 0x16), 200 < uVar1)) {
      uVar2 = (ulonglong)(uVar1 >> 8) << 8;
    }
    else if ((*(char *)(*param_1 + 0x1fe) == 'U') && (*(char *)(*param_1 + 0x1ff) == -0x56)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




ulonglong FUN_180004a40(ulonglong *param_1)

{
  ulonglong uVar1;
  
  if (*(char *)(*param_1 + 0x10) == '\0') {
    uVar1 = 0;
  }
  else if ((*(short *)(*param_1 + 0x13) == 0) && (*(int *)(*param_1 + 0x20) == 0)) {
    uVar1 = *param_1 & 0xffffffffffffff00;
  }
  else if ((((*(char *)(*param_1 + 0xd) == '\x01') ||
            ((((*(char *)(*param_1 + 0xd) == '\x02' || (*(char *)(*param_1 + 0xd) == '\x04')) ||
              (*(char *)(*param_1 + 0xd) == '\b')) ||
             ((*(char *)(*param_1 + 0xd) == '\x10' || (*(char *)(*param_1 + 0xd) == ' ')))))) ||
           (*(char *)(*param_1 + 0xd) == '@')) || (*(char *)(*param_1 + 0xd) == -0x80)) {
    if (*(short *)(*param_1 + 0x16) == 0) {
      uVar1 = 0;
    }
    else if ((*(char *)(*param_1 + 0x1fe) == 'U') && (*(char *)(*param_1 + 0x1ff) == -0x56)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




ulonglong FUN_180004b70(ulonglong *param_1)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  
  iVar1 = memcmp((void *)(*param_1 + 0x52),"FAT32   ",8);
  if (iVar1 == 0) {
    if (*(char *)(*param_1 + 0x10) == '\0') {
      uVar2 = 0;
    }
    else if (*(int *)(*param_1 + 0x20) == 0) {
      uVar2 = *param_1 & 0xffffffffffffff00;
    }
    else if (((((*(char *)(*param_1 + 0xd) == '\x01') || (*(char *)(*param_1 + 0xd) == '\x02')) ||
              (*(char *)(*param_1 + 0xd) == '\x04')) ||
             ((*(char *)(*param_1 + 0xd) == '\b' || (*(char *)(*param_1 + 0xd) == '\x10')))) ||
            ((*(char *)(*param_1 + 0xd) == ' ' ||
             ((*(char *)(*param_1 + 0xd) == '@' || (*(char *)(*param_1 + 0xd) == -0x80)))))) {
      if (*(int *)(*param_1 + 0x24) == 0) {
        uVar2 = *param_1 & 0xffffffffffffff00;
      }
      else if (*(int *)(*param_1 + 0x24) == 0) {
        uVar2 = *param_1 & 0xffffffffffffff00;
      }
      else if ((*(char *)(*param_1 + 0x1fe) == 'U') && (*(char *)(*param_1 + 0x1ff) == -0x56)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00;
  }
  return uVar2;
}




void FUN_180004ce0(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_68;
  local_40 = 0x2d;
  local_3f = 0x46;
  local_3e = 0x56;
  local_3d = 0x45;
  local_3c = 0x2d;
  local_3b = 0x46;
  local_3a = 0x53;
  local_39 = 0x2d;
  local_38 = 0x78;
  local_37 = 0x78;
  local_36 = 0x78;
  local_35 = 0x78;
  local_34 = 0x78;
  local_33 = 0x78;
  local_32 = 0x78;
  local_31 = 0x78;
  local_30 = 0xff;
  local_2f = 0xff;
  local_2e = 0xff;
  local_2d = 0xff;
  local_2c = 0xff;
  local_2b = 0xff;
  local_2a = 0xff;
  local_29 = 0xff;
  local_28 = 0xff;
  local_27 = 0xff;
  local_26 = 0xff;
  local_25 = 0xff;
  local_24 = 0xff;
  local_23 = 0xff;
  local_22 = 0xff;
  local_21 = 0xff;
  local_20 = 0xff;
  local_1f = 0xff;
  local_1e = 0xff;
  local_1d = 0;
  local_1c = 0x1f;
  local_1b = 0x2c;
  local_48 = (void *)(*param_1 + 3);
  iVar1 = memcmp(local_48,&local_40,8);
  if (iVar1 != 0) {
    local_48 = (void *)(*param_1 + 0x1e0);
    memcmp(local_48,&local_38,0x1e);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




undefined1 * FUN_180004e30(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x200; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_1800040b0((ulonglong *)(param_1 + 0x200),(ulonglong)param_1);
  return param_1;
}




undefined1 * FUN_180004e90(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x200; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_1800040b0((ulonglong *)(param_1 + 0x200),(ulonglong)param_1);
  return param_1;
}




void FUN_180004ef0(void)

{
  FUN_1800040f0();
  return;
}




void FUN_180004f30(char *param_1)

{
  FUN_180004100(param_1);
  return;
}




void FUN_180004f50(longlong param_1)

{
  FUN_180004180(param_1 + 0x200);
  return;
}




void FUN_180004f80(longlong param_1)

{
  FUN_180004310((longlong *)(param_1 + 0x200));
  return;
}




void FUN_180004fb0(longlong param_1)

{
  FUN_180004370((longlong *)(param_1 + 0x200));
  return;
}




void FUN_180004fe0(longlong param_1)

{
  FUN_180004390((longlong *)(param_1 + 0x200));
  return;
}




void FUN_180005010(longlong param_1)

{
  FUN_1800043c0((longlong *)(param_1 + 0x200));
  return;
}




void FUN_180005040(longlong param_1)

{
  FUN_180004420((longlong *)(param_1 + 0x200));
  return;
}




void FUN_180005070(longlong param_1)

{
  FUN_180004480((longlong *)(param_1 + 0x200));
  return;
}




void FUN_1800050a0(longlong param_1)

{
  FUN_1800044e0((longlong *)(param_1 + 0x200));
  return;
}




void FUN_1800050d0(longlong param_1)

{
  FUN_180004550((longlong *)(param_1 + 0x200));
  return;
}




void FUN_180005100(longlong param_1)

{
  FUN_180004590(param_1 + 0x200);
  return;
}




void FUN_180005200(undefined8 *param_1)

{
  *param_1 = CFAT12Table::vftable;
  if (param_1[4] != 0) {
    free((void *)param_1[4]);
    param_1[4] = 0;
  }
  FUN_180006060(param_1);
  return;
}




ulonglong FUN_180005270(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ushort local_28;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = (uint)(param_2 * 3) / 2;
    iVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 8))
                      (*(longlong *)(param_1 + 8) + 8);
    if ((uint)(*(int *)(param_1 + 0x18) * iVar2) < uVar1 + 1) {
      uVar3 = 0;
    }
    else {
      local_28 = *(ushort *)((ulonglong)uVar1 + *(longlong *)(param_1 + 0x20));
      if ((uint)(param_2 * 3) % 2 == 0) {
        local_28 = local_28 & 0xfff;
      }
      else {
        local_28 = local_28 >> 4;
      }
      if (local_28 == 0xff7) {
        uVar3 = 0xffffffff;
      }
      else if (local_28 < DAT_18003a008) {
        uVar3 = (ulonglong)local_28;
      }
      else {
        uVar3 = 0xffffff8;
      }
    }
  }
  return uVar3;
}




bool FUN_180005390(longlong param_1)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = FUN_1800053d0(*(uint **)(param_1 + 0x20));
  }
  return bVar1;
}




bool FUN_1800053d0(uint *param_1)

{
  return (*param_1 & 0xfffff0) == 0xfffff0;
}




undefined8 * FUN_180005420(undefined8 *param_1,uint param_2)

{
  FUN_180005200(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180005530(undefined8 *param_1)

{
  *param_1 = CFAT16Table::vftable;
  if (param_1[4] != 0) {
    free((void *)param_1[4]);
    param_1[4] = 0;
  }
  FUN_180006060(param_1);
  return;
}




ulonglong FUN_1800055a0(longlong param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 8))
                    (*(longlong *)(param_1 + 8) + 8);
  if ((uint)((ulonglong)param_2 / ((ulonglong)uVar2 / 2)) < *(uint *)(param_1 + 0x18)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)param_2 * 2);
    if (uVar1 == 0xfff7) {
      uVar3 = 0xffffffff;
    }
    else if (uVar1 < DAT_18003a00c) {
      uVar3 = (ulonglong)uVar1;
    }
    else {
      uVar3 = 0xffffff8;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




int FUN_180005670(longlong param_1)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_18 = 0;
  }
  else {
    bVar1 = FUN_1800056e0(*(int **)(param_1 + 0x20));
    local_18 = (int)CONCAT71(extraout_var,bVar1);
    if (local_18 != 0) {
      uVar2 = FUN_180005720(param_1);
      local_18 = (int)uVar2;
    }
    if (local_18 != 0) {
      uVar2 = FUN_1800057c0(param_1);
      local_18 = (int)uVar2;
    }
  }
  return local_18;
}




bool FUN_1800056e0(int *param_1)

{
  return *param_1 == -8;
}




undefined8 FUN_180005720(longlong param_1)

{
  longlong lVar1;
  uint local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_18 = 2;
  while( true ) {
    if (*(uint *)(param_1 + 0x1c) <= local_18) {
      return 1;
    }
    if ((((*(uint *)(param_1 + 0x1c) <= (uint)*(ushort *)(lVar1 + (ulonglong)local_18 * 2)) &&
         (*(ushort *)(lVar1 + (ulonglong)local_18 * 2) < 0xfff7)) ||
        (*(short *)(lVar1 + (ulonglong)local_18 * 2) == 1)) ||
       (*(ushort *)(lVar1 + (ulonglong)local_18 * 2) == local_18)) break;
    local_18 = local_18 + 1;
  }
  return 0;
}




undefined8 FUN_1800057c0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  __uint64 _Var4;
  void *_Dst;
  undefined8 uVar5;
  uint local_58;
  uint local_48;
  uint local_44;
  undefined2 local_40;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  auVar2 = ZEXT816(2) * ZEXT416(*(uint *)(param_1 + 0x1c)) * (undefined1  [16])0x2;
  _Var4 = auVar2._0_8_;
  if (auVar2._8_8_ != 0) {
    _Var4 = 0xffffffffffffffff;
  }
  _Dst = operator_new(_Var4);
  if (_Dst == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    memset(_Dst,0,(ulonglong)*(uint *)(param_1 + 0x1c) << 1);
    for (local_48 = 2; local_48 < *(uint *)(param_1 + 0x1c); local_48 = local_48 + 1) {
      if (*(short *)((longlong)_Dst + (ulonglong)local_48 * 2) == 0) {
        local_58 = local_48;
        local_44 = 0;
        while (((local_44 < *(uint *)(param_1 + 0x1c) &&
                (1 < *(ushort *)(lVar1 + (ulonglong)local_58 * 2))) &&
               (*(ushort *)(lVar1 + (ulonglong)local_58 * 2) < 0xfff7))) {
          uVar3 = (uint)*(ushort *)(lVar1 + (ulonglong)local_58 * 2);
          if (*(short *)((longlong)_Dst + (ulonglong)uVar3 * 2) == 0) {
            local_40 = (undefined2)local_58;
            *(undefined2 *)((longlong)_Dst + (ulonglong)uVar3 * 2) = local_40;
          }
          else if (*(ushort *)((longlong)_Dst + (ulonglong)uVar3 * 2) != local_58) {
            free(_Dst);
            return 0;
          }
          local_44 = local_44 + 1;
          local_58 = uVar3;
        }
        if (*(int *)(param_1 + 0x1c) - 2U <= local_44) {
          if (_Dst != (void *)0x0) {
            free(_Dst);
          }
          return 0;
        }
      }
    }
    if (_Dst != (void *)0x0) {
      free(_Dst);
    }
    uVar5 = 1;
  }
  return uVar5;
}




undefined8 * FUN_1800059f0(undefined8 *param_1,uint param_2)

{
  FUN_180005530(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180005b00(undefined8 *param_1)

{
  *param_1 = CFAT32Table::vftable;
  if (param_1[4] != 0) {
    free((void *)param_1[4]);
    param_1[4] = 0;
  }
  FUN_180006060(param_1);
  return;
}




undefined4 FUN_180005b70(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 8))
                      (*(longlong *)(param_1 + 8) + 8);
    if ((uint)((ulonglong)param_2 / ((ulonglong)uVar1 / 4)) < *(uint *)(param_1 + 0x18)) {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)param_2 * 4);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}




int FUN_180005c20(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  int local_28;
  uint local_24;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_28 = 0;
  }
  else {
    bVar2 = FUN_180005d10(*(uint **)(param_1 + 0x20));
    local_28 = (int)CONCAT71(extraout_var,bVar2);
    if (local_28 != 0) {
      uVar4 = FUN_180005d80(param_1);
      local_28 = (int)uVar4;
    }
    if (local_28 != 0) {
      uVar4 = FUN_180005e10(param_1);
      local_28 = (int)uVar4;
    }
    if (local_28 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
        iVar3 = memcmp((void *)(lVar1 + (int)local_24),&DAT_18002ba60 + (longlong)(int)local_24 * 8,
                       8);
        if (iVar3 == 0) {
          local_28 = 1;
        }
      }
    }
  }
  return local_28;
}




bool FUN_180005d10(uint *param_1)

{
  bool bVar1;
  
  if ((*param_1 & 0xfffffff) == 0xffffff8) {
    bVar1 = (param_1[1] & 0xffffff8) == 0xffffff8;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




undefined8 FUN_180005d80(longlong param_1)

{
  longlong lVar1;
  uint local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_18 = 2;
  while( true ) {
    if (*(uint *)(param_1 + 0x1c) <= local_18) {
      return 1;
    }
    if ((((*(uint *)(param_1 + 0x1c) <= *(uint *)(lVar1 + (ulonglong)local_18 * 4)) &&
         (*(uint *)(lVar1 + (ulonglong)local_18 * 4) < 0xffffff7)) ||
        (*(int *)(lVar1 + (ulonglong)local_18 * 4) == 1)) ||
       (*(uint *)(lVar1 + (ulonglong)local_18 * 4) == local_18)) break;
    local_18 = local_18 + 1;
  }
  return 0;
}




undefined8 FUN_180005e10(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  __uint64 _Var4;
  void *_Dst;
  undefined8 uVar5;
  uint local_58;
  uint local_48;
  uint local_44;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  auVar3 = ZEXT816(4) * ZEXT416(*(uint *)(param_1 + 0x1c)) * (undefined1  [16])0x4;
  _Var4 = auVar3._0_8_;
  if (auVar3._8_8_ != 0) {
    _Var4 = 0xffffffffffffffff;
  }
  _Dst = operator_new(_Var4);
  if (_Dst == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    memset(_Dst,0,(ulonglong)*(uint *)(param_1 + 0x1c) << 2);
    for (local_48 = 2; local_48 < *(uint *)(param_1 + 0x1c); local_48 = local_48 + 1) {
      if (*(int *)((longlong)_Dst + (ulonglong)local_48 * 4) == 0) {
        local_58 = local_48;
        local_44 = 0;
        while (((local_44 < *(uint *)(param_1 + 0x1c) &&
                (1 < *(uint *)(lVar2 + (ulonglong)local_58 * 4))) &&
               (*(uint *)(lVar2 + (ulonglong)local_58 * 4) < 0xffffff7))) {
          uVar1 = *(uint *)(lVar2 + (ulonglong)local_58 * 4);
          if (*(int *)((longlong)_Dst + (ulonglong)uVar1 * 4) == 0) {
            *(uint *)((longlong)_Dst + (ulonglong)uVar1 * 4) = local_58;
          }
          else if (*(uint *)((longlong)_Dst + (ulonglong)uVar1 * 4) != local_58) {
            free(_Dst);
            return 0;
          }
          local_44 = local_44 + 1;
          local_58 = uVar1;
        }
        if (*(int *)(param_1 + 0x1c) - 2U <= local_44) {
          if (_Dst != (void *)0x0) {
            free(_Dst);
          }
          return 0;
        }
      }
    }
    if (_Dst != (void *)0x0) {
      free(_Dst);
    }
    uVar5 = 1;
  }
  return uVar5;
}




undefined8 * FUN_180006020(undefined8 *param_1,uint param_2)

{
  FUN_180005b00(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180006060(undefined8 *param_1)

{
  *param_1 = IRealFATTable::vftable;
  return;
}




undefined8 * FUN_180006080(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  *param_1 = IRealFATTable::vftable;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(int *)(param_1 + 3) = param_4;
  *(int *)((longlong)param_1 + 0x1c) = param_4 * 0x80;
  param_1[4] = 0;
  return param_1;
}




undefined4 FUN_180006100(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8))
                      (*(longlong *)(param_1 + 8) + 8,*(undefined8 *)(param_1 + 0x20),
                       (ulonglong)param_2 + *(longlong *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x18));
  }
  return uVar1;
}




undefined8 * FUN_180006190(undefined8 *param_1,uint param_2)

{
  FUN_180006060(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800061d0(undefined8 *param_1)

{
  FUN_180001ac0(param_1);
  *param_1 = CFatxBlockParser::vftable;
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CFatxBlockParser::vftable;
  FUN_180001ae0((undefined8 *)this);
  return;
}




undefined4
FUN_180006250(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined7 extraout_var;
  undefined6 extraout_var_00;
  ulonglong local_20 [4];
  
  FUN_180004070(local_20,param_2);
  bVar1 = FUN_180004180((longlong)local_20);
  if (bVar1) {
    uVar6 = FUN_1800041c0((longlong *)local_20);
    if ((uVar6 & 0xff) == 0) {
      FUN_1800040f0();
      uVar4 = 0xfffffffa;
    }
    else {
      uVar4 = FUN_180004590((longlong)local_20);
      FUN_180001a20((longlong)param_4,uVar4);
      uVar2 = FUN_180004310((longlong *)local_20);
      FUN_180001a60((longlong)param_4,(int)CONCAT71(extraout_var,uVar2));
      uVar5 = FUN_1800044e0((longlong *)local_20);
      FUN_180001aa0((longlong)param_4,(ulonglong)uVar5);
      uVar5 = FUN_1800066e0((longlong *)local_20);
      FUN_180002510((longlong)param_4,(ulonglong)uVar5);
      FUN_180001a80(param_4,param_3);
      uVar3 = FUN_180004570((longlong *)local_20);
      FUN_180001a00((longlong)param_4,(int)CONCAT62(extraout_var_00,uVar3));
      FUN_1800040f0();
      uVar4 = 0;
    }
  }
  else {
    FUN_1800040f0();
    uVar4 = 0xfffffffa;
  }
  return uVar4;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180006380(undefined8 param_1,ulonglong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined1 uVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 extraout_var_01;
  undefined6 extraout_var_00;
  undefined7 extraout_var;
  undefined1 auStack_1098 [32];
  int local_1078;
  int local_1074;
  ulonglong local_1070 [2];
  undefined4 local_1060;
  uint local_105c;
  uint local_1058;
  undefined4 local_1054;
  undefined4 local_1050;
  undefined4 local_104c;
  longlong local_1048;
  longlong local_1040;
  longlong local_1038;
  longlong local_1030;
  undefined8 local_1028;
  uint local_1018 [1024];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x18000639e;
  local_1028 = 0xfffffffffffffffe;
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_1098;
  FUN_180004070(local_1070,param_2);
  lVar7 = FUN_1800039b0(param_5);
  if (lVar7 != 0) {
    uVar4 = FUN_180006700(param_5);
    if (CONCAT44(extraout_var_01,uVar4) != 0) {
      local_1078 = 0;
      local_1074 = 0;
      uVar3 = FUN_180004480((longlong *)local_1070);
      local_1048 = param_4 + (CONCAT62(extraout_var_00,uVar3) & 0xffffffff);
      uVar5 = FUN_180004420((longlong *)local_1070);
      local_1038 = local_1048 + (ulonglong)uVar5;
      local_105c = FUN_180004420((longlong *)local_1070);
      uVar1 = FUN_1800043c0((longlong *)local_1070);
      local_1058 = local_105c * (int)CONCAT71(extraout_var,uVar1);
      uVar5 = FUN_1800044e0((longlong *)local_1070);
      if (uVar5 < local_1058) {
        local_1054 = 0;
        FUN_1800040f0();
      }
      else {
        local_1040 = *(longlong *)(param_3 + 8);
        iVar6 = (**(code **)(local_1040 + 8))(param_3 + 8,local_1018,local_1048,1);
        if (iVar6 != 0) {
          bVar2 = FUN_1800065e0(param_1,local_1018,param_5);
          if (bVar2) {
            local_1078 = 1;
          }
        }
        local_1030 = *(longlong *)(param_3 + 8);
        iVar6 = (**(code **)(local_1030 + 8))(param_3 + 8,local_1018,local_1038,1);
        if (iVar6 != 0) {
          bVar2 = FUN_1800065e0(param_1,local_1018,param_5);
          if (bVar2) {
            local_1074 = 1;
          }
        }
        if ((local_1078 == 0) && (local_1074 == 0)) {
          local_104c = 0xfffffff1;
          FUN_1800040f0();
        }
        else {
          local_1050 = 0;
          FUN_1800040f0();
        }
      }
      goto LAB_1800065bd;
    }
  }
  local_1060 = 0xfffffff1;
  FUN_1800040f0();
LAB_1800065bd:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1098);
  return;
}




bool FUN_1800065e0(undefined8 param_1,uint *param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  
  iVar2 = FUN_1800039a0(param_3);
  if (iVar2 == 1) {
    bVar1 = FUN_1800053d0(param_2);
    bVar1 = (int)CONCAT71(extraout_var,bVar1) == 1;
  }
  else {
    iVar2 = FUN_1800039a0(param_3);
    if (iVar2 == 2) {
      bVar1 = FUN_1800056e0((int *)param_2);
      bVar1 = (int)CONCAT71(extraout_var_00,bVar1) == 1;
    }
    else {
      bVar1 = FUN_180005d10(param_2);
      bVar1 = (int)CONCAT71(extraout_var_01,bVar1) == 1;
    }
  }
  return bVar1;
}




ios_base * FUN_1800066a0(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined4 FUN_1800066e0(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 0x1c);
}




undefined4 FUN_180006700(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}




/* Library Function - Single Match
    public: virtual __cdecl CSettingsStore::~CSettingsStore(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

void __thiscall CSettingsStore::~CSettingsStore(CSettingsStore *this)

{
  *(undefined ***)this = CGeneralGeneratorSetImpl::vftable;
  FUN_180006cb0((longlong)this);
  FUN_180009220(this + 0x20);
  FUN_180009250(this + 8);
  std::ios_base::~ios_base((ios_base *)this);
  return;
}




undefined8 FUN_180006780(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180006bf0(param_1);
  return uVar1;
}




void FUN_1800067c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong local_28;
  longlong *local_20;
  longlong local_18 [3];
  
  local_18[1] = 0xfffffffffffffffe;
  FUN_18000a840(param_1 + 0x20);
  FUN_18000a7a0(param_1 + 8,&local_28);
  FUN_18000aa20(param_1 + 8,local_18);
  while( true ) {
    bVar1 = FID_conflict_operator__(&local_28,local_18);
    if (!bVar1) break;
    puVar2 = (undefined8 *)FUN_180009440(&local_28);
    local_20 = (longlong *)*puVar2;
    (**(code **)(*local_20 + 0x10))(local_20,param_2,param_3);
    puVar2 = (undefined8 *)FUN_180009440(&local_28);
    FUN_180006a30(param_1,(longlong *)*puVar2);
    FUN_1800095a0(&local_28);
  }
  return;
}




ulonglong FUN_1800068a0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *local_res10 [3];
  longlong local_18;
  longlong local_10 [2];
  
  if (param_2 == (longlong *)0x0) {
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_res10[0] = param_2;
    FUN_18000a7a0(param_1 + 8,&local_18);
    FUN_18000aa20(param_1 + 8,local_10);
    while (bVar1 = FID_conflict_operator__(&local_18,local_10), bVar1) {
      plVar2 = (longlong *)FUN_180009440(&local_18);
      if ((longlong *)*plVar2 == local_res10[0]) {
        return (ulonglong)plVar2 & 0xffffffffffffff00;
      }
      FUN_1800095a0(&local_18);
    }
    FUN_18000aed0(param_1 + 8,local_res10);
    uVar3 = FUN_180006a30(param_1,local_res10[0]);
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar4;
}




ulonglong FUN_180006960(longlong param_1,longlong param_2)

{
  bool bVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  undefined8 *puVar3;
  void *local_28;
  longlong local_20;
  void *local_18;
  undefined8 local_10 [2];
  
  if (param_2 != 0) {
    FUN_18000a7a0(param_1 + 8,&local_28);
    FUN_18000aa20(param_1 + 8,&local_20);
    while( true ) {
      bVar1 = FID_conflict_operator__((longlong *)&local_28,&local_20);
      in_RAX = 0;
      if (!bVar1) break;
      plVar2 = (longlong *)FUN_180009440(&local_28);
      if (*plVar2 == param_2) {
        FUN_180006b40(param_1,param_2);
        local_18 = local_28;
        puVar3 = FUN_18000ac20(param_1 + 8,local_10,local_28);
        return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
      }
      FUN_1800095a0((longlong *)&local_28);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180006a30(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong local_38;
  longlong local_30;
  longlong local_28 [5];
  
  local_28[1] = 0xfffffffffffffffe;
  if (param_2 != (longlong *)0x0) {
    local_38 = 0xffffffffffffffff;
    local_38 = (**(code **)(*param_2 + 8))(param_2,0);
    FUN_18000ace0(param_1 + 0x20,&local_30,&local_38);
    FUN_18000a9c0(param_1 + 0x20,local_28);
    while( true ) {
      bVar1 = FUN_180009320(&local_30,local_28);
      in_RAX = 0;
      if ((!bVar1) || (local_38 == 0xffffffffffffffff)) break;
      local_38 = (**(code **)(*param_2 + 8))(param_2,local_38);
      plVar2 = FUN_18000ace0(param_1 + 0x20,local_28 + 2,&local_38);
      local_30 = *plVar2;
    }
    if (local_38 != 0xffffffffffffffff) {
      puVar3 = (undefined8 *)FUN_1800093a0(param_1 + 0x20,&local_38);
      *puVar3 = param_2;
      return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180006b40(longlong param_1,longlong param_2)

{
  bool bVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  if (param_2 != 0) {
    FUN_18000a730(param_1 + 0x20,&local_28);
    while( true ) {
      plVar2 = FUN_18000a9c0(param_1 + 0x20,&local_20);
      bVar1 = FUN_180009320((longlong *)&local_28,plVar2);
      in_RAX = 0;
      if (!bVar1) break;
      lVar3 = FUN_1800093e0((longlong *)&local_28);
      if (*(longlong *)(lVar3 + 8) == param_2) {
        puVar4 = FUN_180008e40(param_1 + 0x20,local_18,local_28);
        return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
      }
      FUN_1800094d0((longlong *)&local_28);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 FUN_180006bf0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_30 = 0xffffffffffffffff;
  FUN_18000a730(param_1 + 0x20,&local_38);
  plVar2 = FUN_18000a9c0(param_1 + 0x20,&local_20);
  bVar1 = FUN_180009320((longlong *)&local_38,plVar2);
  if (bVar1) {
    puVar3 = (undefined8 *)FUN_180009420((longlong *)&local_38);
    local_30 = *puVar3;
    lVar4 = FUN_180009420((longlong *)&local_38);
    local_28 = *(longlong **)(lVar4 + 8);
    FUN_180006a30(param_1,local_28);
    FUN_180008e40(param_1 + 0x20,local_18,local_38);
  }
  return local_30;
}




undefined8 FUN_180006cb0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18000a840(param_1 + 0x20);
  FUN_18000a7a0(param_1 + 8,&local_38);
  FUN_18000aa20(param_1 + 8,&local_28);
  while( true ) {
    bVar1 = FID_conflict_operator__(&local_38,&local_28);
    if (!bVar1) break;
    plVar2 = (longlong *)FUN_180009440(&local_38);
    local_30 = (undefined8 *)*plVar2;
    local_20 = local_30;
    if (local_30 == (undefined8 *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = (**(code **)*local_30)(local_30,1);
    }
    FUN_1800095a0(&local_38);
  }
  uVar3 = FUN_18000a8e0(param_1 + 8);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}




undefined8 * FUN_180006d90(undefined8 *param_1)

{
  FUN_18000ce40(param_1);
  *param_1 = CGeneralGeneratorSetImpl::vftable;
  FUN_1800038a0(param_1 + 1);
  FUN_180009150(param_1 + 4);
  FUN_1800090a0(param_1 + 6);
  return param_1;
}




undefined8 * FUN_180006e00(undefined8 *param_1)

{
  FUN_1800032f0(param_1);
  FUN_180009120(param_1);
  return param_1;
}




undefined8 * FUN_180006e30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1800032f0(param_2);
  *param_1 = *puVar1;
  puVar2 = (undefined1 *)FUN_1800032f0(param_3);
  *(undefined1 *)(param_1 + 1) = *puVar2;
  return param_1;
}




undefined8 *
FUN_180006e80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800032f0(param_3);
  FUN_1800032f0(param_4);
  FUN_180006e00(param_1);
  return param_1;
}




undefined8 * FUN_180006ed0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180007010(param_1,param_3);
  return param_1;
}




undefined8 * FUN_180006f20(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  pbVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = 0;
    pbVar2 = pbVar2 + 1;
  }
  FUN_180006fb0(param_1,(ulonglong)local_18[0],param_2);
  return param_1;
}




undefined8 * FUN_180006f70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800032f0(param_2);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_180006fa0(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_180006fb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [16];
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_180006fa0(param_1);
  uVar1 = FUN_1800032f0(param_3);
  FUN_180006f70(param_1,uVar1);
  return param_1;
}




undefined8 * FUN_180007010(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800032f0(param_2);
  puVar1 = (undefined8 *)FUN_180008ed0(puVar1);
  *param_1 = *puVar1;
  param_1[1] = 0;
  return param_1;
}




undefined8 FUN_180007060(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




_Container_proxy *
FUN_180007080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  p_Var1 = FUN_180009810(param_1);
  p_Var1[0x18] = (_Container_proxy)0x0;
  p_Var1[0x19] = (_Container_proxy)0x0;
  uVar2 = FUN_1800032f0(param_4);
  uVar3 = FUN_1800032f0(param_3);
  uVar4 = FUN_1800032f0(param_2);
  uVar5 = FUN_1800032f0(p_Var1 + 0x20);
  uVar6 = FUN_18000a1d0(param_1);
  FUN_180008c70(uVar6,uVar5,uVar4,uVar3,uVar2);
  return p_Var1;
}




void FUN_180007150(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_1800032f0(param_2);
  puVar2 = (undefined8 *)FUN_180003cc0(param_1);
  uVar3 = FUN_1800032f0(*puVar2);
  uVar4 = FUN_180003c60(param_1);
  construct<>(uVar4,uVar3,uVar1);
  FUN_180003cc0(param_1);
  FUN_180003cc0(param_1);
  FUN_180003d00();
  FUN_180003cc0(param_1);
  plVar5 = (longlong *)FUN_180003cc0(param_1);
  *plVar5 = *plVar5 + 8;
  return;
}




longlong FUN_180007210(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  CLogWriter *pCVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  lVar2 = param_2 - *plVar1 >> 3;
  uVar3 = FUN_180003c60(param_1);
  _Var4 = FUN_18000af20(param_1);
  _Var5 = FUN_18000ae60(param_1);
  if (_Var4 == _Var5) {
    FUN_180003ec0();
  }
  uVar6 = FUN_1800098f0(param_1,_Var4 + 1);
  pCVar7 = (CLogWriter *)allocate(uVar3,uVar6);
  uVar8 = FUN_1800032f0(param_3);
  uVar9 = FUN_1800032f0(pCVar7 + lVar2 * 8);
  construct<>(uVar3,uVar9,uVar8);
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  if (param_2 == *plVar1) {
    puVar10 = (undefined8 *)FUN_180003cc0(param_1);
    puVar11 = (undefined8 *)FUN_180003ca0(param_1);
    FUN_18000a670(param_1,*puVar11,*puVar10,pCVar7);
  }
  else {
    puVar10 = (undefined8 *)FUN_180003ca0(param_1);
    FUN_18000a630(param_1,*puVar10,param_2,pCVar7);
    puVar10 = (undefined8 *)FUN_180003cc0(param_1);
    FUN_18000a630(param_1,param_2,*puVar10,pCVar7 + lVar2 * 8 + 8);
  }
  FUN_180009980(param_1,(longlong)pCVar7,_Var4 + 1,uVar6);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  return *plVar1 + lVar2 * 8;
}




void FUN_180007450(undefined8 param_1,void *param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800032f0(param_2);
  FUN_180008d20();
  FUN_1800032f0((longlong)param_2 + 8);
  FUN_180008d20();
  FUN_1800032f0((longlong)param_2 + 0x10);
  FUN_180008d20();
  FUN_18000a960(local_18,param_2,1);
  return;
}




longlong FUN_1800074e0(ulonglong param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 << 3;
  if (0x1fffffffffffffff < param_1) {
    local_18 = -1;
  }
  return local_18;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<16>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<16>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x30;
  if (0x555555555555555 < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




longlong FUN_180007580(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1 >> 3;
}




void FUN_1800075b0(longlong *param_1,longlong *param_2)

{
  FUN_180007580(param_1,param_2);
  return;
}




undefined8 *
FUN_1800075e0(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,void *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_28;
  
  plVar1 = (longlong *)FUN_18000a1d0(param_1);
  lVar2 = FUN_18000ae40(param_1);
  if (lVar2 - 1U <= (ulonglong)plVar1[1]) {
    FUN_180009b00(param_1,param_6);
    std::_Xlength_error("map/set<T> too long");
  }
  FUN_1800032f0(param_5);
  plVar3 = (longlong *)FUN_180007060(param_1,param_6);
  plVar1[1] = plVar1[1] + 1;
  plVar3[1] = (longlong)param_4;
  local_28 = plVar3;
  if (param_4 == (undefined8 *)*plVar1) {
    puVar4 = (undefined8 *)FUN_18000a400(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_180002800(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_18000a3e0(plVar1);
    *puVar4 = plVar3;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar3;
    plVar5 = (longlong *)FUN_18000a3e0(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_18000a3e0(plVar1);
      *puVar4 = plVar3;
    }
  }
  else {
    *param_4 = plVar3;
    plVar5 = (longlong *)FUN_180002800(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_180002800(plVar1);
      *puVar4 = plVar3;
    }
  }
  while (*(char *)(local_28[1] + 0x18) == '\0') {
    if (local_28[1] == **(longlong **)(local_28[1] + 8)) {
      lVar2 = *(longlong *)(*(longlong *)(local_28[1] + 8) + 0x10);
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        local_28 = *(longlong **)(local_28[1] + 8);
      }
      else {
        if (local_28 == *(longlong **)(local_28[1] + 0x10)) {
          local_28 = (longlong *)local_28[1];
          FUN_18000a2a0(plVar1,(longlong)local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_18000a420(plVar1,*(longlong **)(local_28[1] + 8));
      }
    }
    else {
      lVar2 = **(longlong **)(local_28[1] + 8);
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        local_28 = *(longlong **)(local_28[1] + 8);
      }
      else {
        if (local_28 == *(longlong **)local_28[1]) {
          local_28 = (longlong *)local_28[1];
          FUN_18000a420(plVar1,local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_18000a2a0(plVar1,*(longlong *)(local_28[1] + 8));
      }
    }
  }
  plVar5 = (longlong *)FUN_18000a400(plVar1);
  *(undefined1 *)(*plVar5 + 0x18) = 1;
  FUN_1800032f0(plVar1);
  FUN_180009060(param_2,plVar3);
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x0001800079f5) */
/* WARNING: Removing unreachable block (ram,0x000180007adb) */
/* WARNING: Removing unreachable block (ram,0x000180007bd0) */
/* WARNING: Removing unreachable block (ram,0x000180007c34) */
/* WARNING: Removing unreachable block (ram,0x000180007cb6) */
/* WARNING: Removing unreachable block (ram,0x000180007d12) */
/* WARNING: Removing unreachable block (ram,0x000180007cc7) */
/* WARNING: Removing unreachable block (ram,0x000180007d63) */
/* WARNING: Removing unreachable block (ram,0x000180007dd3) */
/* WARNING: Removing unreachable block (ram,0x000180007e21) */
/* WARNING: Removing unreachable block (ram,0x000180007e8e) */
/* WARNING: Removing unreachable block (ram,0x000180007ef0) */
/* WARNING: Removing unreachable block (ram,0x000180007ea2) */
/* WARNING: Removing unreachable block (ram,0x000180007f3b) */
/* WARNING: Removing unreachable block (ram,0x000180007b0b) */
/* WARNING: Removing unreachable block (ram,0x000180007b70) */
/* WARNING: Removing unreachable block (ram,0x000180007bcb) */
/* WARNING: Removing unreachable block (ram,0x000180007a25) */
/* WARNING: Removing unreachable block (ram,0x000180007a85) */
/* WARNING: Removing unreachable block (ram,0x000180007ad1) */
/* WARNING: Removing unreachable block (ram,0x000180007f40) */

undefined8 *
FUN_180007940(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             void *param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *local_res18;
  undefined8 local_res20;
  undefined8 *local_140;
  longlong *local_138;
  ulonglong *local_c0;
  ulonglong *local_b8;
  ulonglong *local_b0;
  ulonglong *local_a8;
  undefined8 local_a0;
  ulonglong *local_98;
  ulonglong *local_90;
  ulonglong *local_88;
  ulonglong *local_80;
  ulonglong *local_78;
  ulonglong *local_70;
  longlong *local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  undefined8 local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_50 = 0xfffffffffffffffe;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180009040(&local_140);
  local_138 = (longlong *)FUN_18000a1d0(param_1);
  lVar2 = FUN_18000af00(param_1);
  if (lVar2 == 0) {
    uVar3 = FUN_1800032f0(local_res20);
    FUN_1800075e0(param_1,param_2,'\x01',(undefined8 *)*local_138,uVar3,param_5);
    return param_2;
  }
  plVar4 = FUN_18000a730(param_1,&local_30);
  bVar1 = FUN_180009290((longlong *)&local_res18,plVar4);
  if (bVar1) {
    local_c0 = (ulonglong *)FUN_18000a250(param_1,(longlong)local_res18);
    local_b8 = (ulonglong *)FUN_18000a280(param_1,local_res20);
    uVar3 = FUN_180003c60(param_1);
    bVar1 = FUN_1800096d0(uVar3,local_b8,local_c0);
    if (bVar1) {
      uVar3 = FUN_1800032f0(local_res20);
      FUN_1800075e0(param_1,param_2,'\x01',local_res18,uVar3,param_5);
      return param_2;
    }
  }
  else {
    plVar4 = FUN_18000a9c0(param_1,&local_28);
    bVar1 = FUN_180009290((longlong *)&local_res18,plVar4);
    if (bVar1) {
      local_b0 = (ulonglong *)FUN_18000a280(param_1,local_res20);
      plVar4 = (longlong *)FUN_18000a3e0(local_138);
      local_a8 = (ulonglong *)FUN_18000a250(param_1,*plVar4);
      uVar3 = FUN_180003c60(param_1);
      bVar1 = FUN_1800096d0(uVar3,local_a8,local_b0);
      if (bVar1) {
        local_a0 = FUN_1800032f0(local_res20);
        puVar5 = (undefined8 *)FUN_18000a3e0(local_138);
        FUN_1800075e0(param_1,param_2,'\0',(undefined8 *)*puVar5,local_a0,param_5);
        return param_2;
      }
    }
    else {
      local_98 = (ulonglong *)FUN_18000a250(param_1,(longlong)local_res18);
      local_90 = (ulonglong *)FUN_18000a280(param_1,local_res20);
      uVar3 = FUN_180003c60(param_1);
      bVar1 = FUN_1800096d0(uVar3,local_90,local_98);
      if (bVar1) {
        local_140 = local_res18;
        local_88 = (ulonglong *)FUN_18000a280(param_1,local_res20);
        plVar4 = FUN_1800095c0((longlong *)&local_140);
        local_80 = (ulonglong *)FUN_18000a250(param_1,*plVar4);
        uVar3 = FUN_180003c60(param_1);
        bVar1 = FUN_1800096d0(uVar3,local_80,local_88);
        if (bVar1) {
          if (*(char *)(local_140[2] + 0x19) != '\0') {
            uVar3 = FUN_1800032f0(local_res20);
            FUN_1800075e0(param_1,param_2,'\0',local_140,uVar3,param_5);
            return param_2;
          }
          uVar3 = FUN_1800032f0(local_res20);
          FUN_1800075e0(param_1,param_2,'\x01',local_res18,uVar3,param_5);
          return param_2;
        }
      }
      local_78 = (ulonglong *)FUN_18000a280(param_1,local_res20);
      local_70 = (ulonglong *)FUN_18000a250(param_1,(longlong)local_res18);
      uVar3 = FUN_180003c60(param_1);
      bVar1 = FUN_1800096d0(uVar3,local_70,local_78);
      if (bVar1) {
        local_140 = local_res18;
        local_68 = FUN_18000a9c0(param_1,&local_20);
        plVar4 = FUN_1800094b0((longlong *)&local_140);
        bVar1 = FUN_180009290(plVar4,local_68);
        if (!bVar1) {
          local_60 = (ulonglong *)FUN_18000a250(param_1,(longlong)local_140);
          local_58 = (ulonglong *)FUN_18000a280(param_1,local_res20);
          uVar3 = FUN_180003c60(param_1);
          bVar1 = FUN_1800096d0(uVar3,local_58,local_60);
          if (!bVar1) goto LAB_1800084ab;
        }
        if (*(char *)(local_res18[2] + 0x19) != '\0') {
          uVar3 = FUN_1800032f0(local_res20);
          FUN_1800075e0(param_1,param_2,'\0',local_res18,uVar3,param_5);
          return param_2;
        }
        uVar3 = FUN_1800032f0(local_res20);
        FUN_1800075e0(param_1,param_2,'\x01',local_140,uVar3,param_5);
        return param_2;
      }
    }
  }
LAB_1800084ab:
  uVar3 = FUN_1800032f0(local_res20);
  puVar5 = FUN_180008510(param_1,local_18,'\0',uVar3,param_5);
  *param_2 = *puVar5;
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x0001800086a5) */

undefined8 *
FUN_180008510(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,void *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  bool local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94 [4];
  undefined8 *local_90;
  undefined8 *local_88;
  uint local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong *local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  ulonglong *local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  ulonglong *local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_30 = 0xfffffffffffffffe;
  local_68 = (longlong *)FUN_18000a1d0(param_1);
  local_88 = (undefined8 *)*local_68;
  local_90 = (undefined8 *)local_88[1];
  local_98 = true;
  while (*(char *)((longlong)local_90 + 0x19) == '\0') {
    local_88 = local_90;
    if (param_3 == '\0') {
      local_50 = (ulonglong *)FUN_18000a250(param_1,(longlong)local_90);
      local_48 = (ulonglong *)FUN_18000a280(param_1,param_4);
      uVar2 = FUN_180003c60(param_1);
      local_98 = FUN_1800096d0(uVar2,local_48,local_50);
    }
    else {
      local_60 = (ulonglong *)FUN_18000a280(param_1,param_4);
      local_58 = (ulonglong *)FUN_18000a250(param_1,(longlong)local_90);
      uVar2 = FUN_180003c60(param_1);
      local_98 = FUN_1800096d0(uVar2,local_58,local_60);
      local_98 = !local_98;
      local_80 = (uint)local_98;
    }
    if (local_98 == false) {
      local_70 = (undefined8 *)local_90[2];
    }
    else {
      local_70 = (undefined8 *)*local_90;
    }
    local_90 = local_70;
  }
  FUN_1800032f0(local_68);
  FUN_180009060(&local_78,local_88);
  if (local_98 != false) {
    plVar3 = FUN_18000a730(param_1,&local_20);
    bVar1 = FUN_180009290(&local_78,plVar3);
    if (bVar1) {
      local_96 = 1;
      uVar2 = FUN_1800032f0(param_4);
      puVar4 = FUN_1800075e0(param_1,&local_18,'\x01',local_88,uVar2,param_5);
      FUN_180006e30(param_2,puVar4,&local_96);
      return param_2;
    }
    FUN_1800095e0(&local_78);
  }
  local_40 = (ulonglong *)FUN_18000a280(param_1,param_4);
  local_38 = (ulonglong *)FUN_18000a250(param_1,local_78);
  uVar2 = FUN_180003c60(param_1);
  bVar1 = FUN_1800096d0(uVar2,local_38,local_40);
  if (bVar1) {
    local_95 = 1;
    uVar2 = FUN_1800032f0(param_4);
    puVar4 = FUN_1800075e0(param_1,local_10,local_98,local_88,uVar2,param_5);
    FUN_180006e30(param_2,puVar4,&local_95);
  }
  else {
    FUN_180009b00(param_1,param_5);
    local_94[0] = 0;
    FUN_180006e30(param_2,&local_78,local_94);
  }
  return param_2;
}




undefined8 * FUN_1800088f0(undefined8 param_1,ulonglong *param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined8 *local_18;
  undefined8 *local_10;
  
  plVar2 = (longlong *)FUN_18000a1d0(param_1);
  local_10 = (undefined8 *)*plVar2;
  local_18 = (undefined8 *)local_10[1];
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    puVar3 = (ulonglong *)FUN_18000a250(param_1,(longlong)local_18);
    cVar1 = FUN_180009a90(param_1,puVar3,param_2);
    if (cVar1 == '\0') {
      local_10 = local_18;
      local_18 = (undefined8 *)*local_18;
    }
    else {
      local_18 = (undefined8 *)local_18[2];
    }
  }
  return local_10;
}




void FUN_180008990(void *param_1,longlong param_2,void *param_3)

{
  FUN_1800031d0(param_1,param_2,param_3);
  return;
}




void FUN_1800089d0(void *param_1,longlong param_2,void *param_3)

{
  undefined1 local_18 [24];
  
  FUN_1800033b0(local_18);
  FUN_180008990(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_180008a20(undefined8 param_1,undefined8 *param_2,ulonglong *param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46 [6];
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_18000adc0(param_1,&local_40,param_3);
  plVar2 = FUN_18000a9c0(param_1,&local_20);
  bVar1 = FUN_180009290((longlong *)&local_40,plVar2);
  if (!bVar1) {
    local_38 = (ulonglong *)FUN_18000a250(param_1,(longlong)local_40);
    uVar3 = FUN_180003c60(param_1);
    bVar1 = FUN_1800096d0(uVar3,param_3,local_38);
    if (!bVar1) {
      local_47 = 0;
      FUN_180006e30(param_2,&local_40,&local_47);
      return param_2;
    }
  }
  local_48 = 1;
  local_28 = local_40;
  local_30 = FUN_180008e80(local_46);
  uVar3 = FUN_1800032f0(param_3);
  puVar4 = FUN_180008ea0(&local_18,uVar3);
  puVar4 = FUN_180008da0(param_1,local_10,local_28,"",puVar4,local_30);
  FUN_180006e30(param_2,puVar4,&local_48);
  return param_2;
}




CLogWriter *
FUN_180008b70(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  CLogWriter *pCVar1;
  undefined8 uVar2;
  CLogWriter *local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  void *local_20;
  CLogWriter *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (void *)FUN_1800032f0(param_1);
  local_10[0] = FUN_1800032f0(param_2);
  pCVar1 = (CLogWriter *)FUN_1800075b0((longlong *)&local_20,local_10);
  local_18 = CLogWriter::operator=(local_res18,pCVar1);
  FUN_1800033b0(local_28);
  uVar2 = FUN_1800036f0(local_20,local_10[0],local_18);
  FUN_180001a80(&local_res18,uVar2);
  return local_res18;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<unsigned short>
   >::construct<unsigned short * __ptr64,unsigned short * __ptr64 const & __ptr64>(class
   std::allocator<unsigned short> & __ptr64,unsigned short * __ptr64 * __ptr64 const,unsigned short
   * __ptr64 const & __ptr64)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<wchar_t>
   >::construct<wchar_t * __ptr64,wchar_t * __ptr64 const & __ptr64>(class std::allocator<wchar_t> &
   __ptr64,wchar_t * __ptr64 * __ptr64 const,wchar_t * __ptr64 const & __ptr64)
   
   Library: Visual Studio 2017 Release */

void construct<>(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180009280(8,param_2);
  puVar2 = (undefined8 *)FUN_1800032f0(param_3);
  *puVar1 = *puVar2;
  return;
}




void FUN_180008c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  CLogWriter *pCVar1;
  byte *pbVar2;
  CLogWriter local_48 [8];
  CLogWriter *local_40;
  CLogWriter *local_38;
  CLogWriter *local_30;
  CLogWriter *local_28;
  undefined8 *local_20;
  CLogWriter local_18 [24];
  
  local_20 = (undefined8 *)FUN_180009280(0x10,param_2);
  local_40 = local_48;
  local_38 = local_18;
  pCVar1 = (CLogWriter *)FUN_1800032f0(param_5);
  local_30 = CLogWriter::operator=(local_40,pCVar1);
  pCVar1 = (CLogWriter *)FUN_1800032f0(param_4);
  local_28 = FUN_180009180(local_38,pCVar1);
  pbVar2 = (byte *)FUN_1800032f0(param_3);
  FUN_180006ed0(local_20,(ulonglong)*pbVar2,local_28);
  return;
}




void FUN_180008d20(void)

{
  return;
}




void FUN_180008d30(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_18000a200(param_1);
  if (bVar1) {
    uVar2 = FUN_1800032f0(param_2);
    FUN_180007150(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800032f0(param_2);
    plVar3 = (longlong *)FUN_180003cc0(param_1);
    FUN_180007210(param_1,*plVar3,uVar2);
  }
  return;
}




undefined8 *
FUN_180008da0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  _Container_proxy *p_Var4;
  
  uVar1 = FUN_1800032f0(param_6);
  uVar2 = FUN_1800032f0(param_5);
  uVar3 = FUN_1800032f0(param_4);
  p_Var4 = FUN_180007080(param_1,uVar3,uVar2,uVar1);
  FUN_180007940(param_1,param_2,param_3,p_Var4 + 0x20,p_Var4);
  return param_2;
}




undefined8 * FUN_180008e40(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  FUN_18000ab70(param_1,param_2,param_3);
  return param_2;
}




undefined8 FUN_180008e80(undefined8 param_1)

{
  FUN_1800032f0(param_1);
  return param_1;
}




undefined8 * FUN_180008ea0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800032f0(param_2);
  FUN_180006f20(param_1,uVar1);
  return param_1;
}




void FUN_180008ed0(undefined8 *param_1)

{
  FUN_1800032f0(*param_1);
  return;
}




/* Library Function - Single Match
    void __cdecl std::swap<char,void>(char & __ptr64,char & __ptr64)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __cdecl std::swap<char,void>(char *param_1,char *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 local_18 [24];
  
  puVar1 = (undefined1 *)FUN_1800032f0(param_1);
  local_18[0] = *puVar1;
  pcVar2 = (char *)FUN_1800032f0(param_2);
  *param_1 = *pcVar2;
  pcVar2 = (char *)FUN_1800032f0(local_18);
  *param_2 = *pcVar2;
  return;
}




undefined8 * FUN_180008f40(undefined8 param_1,undefined8 *param_2,ulonglong *param_3)

{
  FUN_180008a20(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_180008f80(undefined8 *param_1,undefined8 param_2)

{
  FUN_180008fc0(param_1,param_2);
  return param_1;
}




undefined8 * FUN_180008fc0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_18;
  byte local_17;
  
  FUN_180006e80(param_1,(ulonglong)local_17,param_2,&local_18);
  FUN_180009ad0(param_1);
  return param_1;
}




undefined8 * FUN_180009000(undefined8 *param_1,undefined8 param_2)

{
  FUN_1800090c0(param_1,param_2);
  return param_1;
}




undefined8 * FUN_180009040(undefined8 *param_1)

{
  FUN_180009100(param_1);
  return param_1;
}




undefined8 * FUN_180009060(undefined8 *param_1,undefined8 param_2)

{
  FUN_180009000(param_1,param_2);
  return param_1;
}




undefined8 * FUN_1800090a0(undefined8 *param_1)

{
  FUN_180009040(param_1);
  return param_1;
}




undefined8 * FUN_1800090c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_180008d20();
  return param_1;
}




undefined8 * FUN_180009100(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}




undefined8 * FUN_180009120(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}




undefined8 * FUN_180009150(undefined8 *param_1)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180008f80(param_1,local_18);
  return param_1;
}




CLogWriter * FUN_180009180(CLogWriter *param_1,CLogWriter *param_2)

{
  CLogWriter::operator=(param_1,param_2);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return param_1;
}




void FUN_1800091c0(undefined8 param_1)

{
  FUN_18000a500(param_1);
  FUN_1800091f0(param_1);
  return;
}




void FUN_1800091f0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18000a1d0(param_1);
  FUN_18000a1a0(param_1,(void *)*puVar1);
  return;
}




void FUN_180009220(undefined8 param_1)

{
  FUN_1800091c0(param_1);
  return;
}




void FUN_180009250(undefined8 param_1)

{
  FUN_18000a560(param_1);
  return;
}




undefined8 FUN_180009280(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




bool FUN_180009290(longlong *param_1,longlong *param_2)

{
  return *param_1 == *param_2;
}




/* Library Function - Multiple Matches With Different Base Names
    public: bool __cdecl std::_String_const_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >::operator==(class std::_String_const_iterator<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::operator==(class
   std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator==(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator==(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<unsigned short> > > const & __ptr64)const __ptr64
     8 names - too many to list
   
   Library: Visual Studio */

bool FID_conflict_operator__(longlong *param_1,longlong *param_2)

{
  FUN_180008d20();
  return *param_1 == *param_2;
}




bool FUN_180009320(longlong *param_1,longlong *param_2)

{
  bool local_18;
  
  local_18 = FUN_180009290(param_1,param_2);
  local_18 = !local_18;
  return local_18;
}




/* Library Function - Multiple Matches With Different Base Names
    public: bool __cdecl std::_String_const_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >::operator!=(class std::_String_const_iterator<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::operator!=(class
   std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator!=(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator!=(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<unsigned short> > > const & __ptr64)const __ptr64
     8 names - too many to list
   
   Library: Visual Studio */

bool FID_conflict_operator__(longlong *param_1,longlong *param_2)

{
  bool local_18;
  
  local_18 = FID_conflict_operator__(param_1,param_2);
  local_18 = !local_18;
  return local_18;
}




longlong FUN_1800093a0(undefined8 param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18 [3];
  
  plVar1 = FUN_180008f40(param_1,local_18,param_2);
  lVar2 = FUN_1800093e0(plVar1);
  return lVar2 + 8;
}




void FUN_1800093e0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180009420(param_1);
  FUN_18000aeb0(uVar1);
  return;
}




longlong FUN_180009400(longlong *param_1)

{
  return *param_1 + 0x20;
}




void FUN_180009420(longlong *param_1)

{
  FUN_180009400(param_1);
  return;
}




void FUN_180009440(undefined8 *param_1)

{
  FUN_180002800(param_1);
  return;
}




longlong * FUN_180009460(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1800094b0(param_1);
  *param_2 = lVar1;
  return param_2;
}




longlong * FUN_1800094b0(longlong *param_1)

{
  FUN_1800094f0(param_1);
  return param_1;
}




longlong * FUN_1800094d0(longlong *param_1)

{
  FUN_1800094b0(param_1);
  return param_1;
}




longlong * FUN_1800094f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(*(longlong *)(*param_1 + 0x10) + 0x19) == '\0') {
    plVar2 = FUN_18000a3b0(*(longlong **)(*param_1 + 0x10));
    *param_1 = (longlong)plVar2;
  }
  else {
    while ((lVar1 = *(longlong *)(*param_1 + 8), *(char *)(lVar1 + 0x19) == '\0' &&
           (*param_1 == *(longlong *)(lVar1 + 0x10)))) {
      *param_1 = lVar1;
    }
    *param_1 = lVar1;
  }
  return param_1;
}




longlong * FUN_180009580(longlong *param_1)

{
  *param_1 = *param_1 + 8;
  return param_1;
}




longlong * FUN_1800095a0(longlong *param_1)

{
  FUN_180009580(param_1);
  return param_1;
}




longlong * FUN_1800095c0(longlong *param_1)

{
  FUN_180009600(param_1);
  return param_1;
}




longlong * FUN_1800095e0(longlong *param_1)

{
  FUN_1800095c0(param_1);
  return param_1;
}




longlong * FUN_180009600(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(*param_1 + 0x19) == '\0') {
    if (*(char *)(*(longlong *)*param_1 + 0x19) == '\0') {
      lVar2 = FUN_18000a380(*(longlong *)*param_1);
      *param_1 = lVar2;
    }
    else {
      while ((plVar1 = *(longlong **)(*param_1 + 8), *(char *)((longlong)plVar1 + 0x19) == '\0' &&
             (*param_1 == *plVar1))) {
        *param_1 = (longlong)plVar1;
      }
      if (*(char *)(*param_1 + 0x19) == '\0') {
        *param_1 = (longlong)plVar1;
      }
    }
  }
  else {
    *param_1 = *(longlong *)(*param_1 + 0x10);
  }
  return param_1;
}




bool FUN_1800096d0(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  return *param_2 < *param_3;
}




CSettingsStore * FUN_180009710(CSettingsStore *param_1,uint param_2)

{
  CSettingsStore::~CSettingsStore(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




_Container_proxy * FUN_180009750(undefined8 param_1)

{
  undefined8 uVar1;
  _Container_proxy *local_28;
  allocator<struct_std::_Container_proxy> *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (allocator<struct_std::_Container_proxy> *)FUN_18000a1d0(param_1);
  local_28 = std::allocator<struct_std::_Container_proxy>::allocate(local_20,1);
  uVar1 = FUN_1800032f0(local_28);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_1800032f0(local_28 + 8);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_1800032f0(local_28 + 0x10);
  construct<>(local_20,uVar1,&local_28);
  local_28[0x18] = (_Container_proxy)0x1;
  local_28[0x19] = (_Container_proxy)0x1;
  return local_28;
}




_Container_proxy * FUN_180009810(undefined8 param_1)

{
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this = (allocator<struct_std::_Container_proxy> *)FUN_18000a1d0(param_1);
  p_Var1 = std::allocator<struct_std::_Container_proxy>::allocate(this,1);
  uVar2 = FUN_18000a1d0(param_1);
  uVar3 = FUN_1800032f0(p_Var1);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_1800032f0(p_Var1 + 8);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_1800032f0(p_Var1 + 0x10);
  construct<>(this,uVar3,uVar2);
  return p_Var1;
}




ulonglong FUN_1800098f0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_18000a800(param_1);
  _Var2 = FUN_18000ae60(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_180009980(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180003ce0(param_1);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  if (*plVar1 != 0) {
    FUN_180003cc0(param_1);
    FUN_180003ca0(param_1);
    FUN_180003c20(param_1);
    lVar2 = FUN_18000a800(param_1);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    uVar4 = FUN_180003c60(param_1);
    FUN_18000a990(uVar4,(void *)*puVar3,lVar2);
  }
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  *plVar1 = param_2 + param_3 * 8;
  plVar1 = (longlong *)FUN_180003c80(param_1);
  *plVar1 = param_2 + param_4 * 8;
  return;
}




void FUN_180009a90(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_1800096d0(uVar1,param_2,param_3);
  return;
}




void FUN_180009ad0(undefined8 param_1)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  
  p_Var1 = FUN_180009750(param_1);
  puVar2 = (undefined8 *)FUN_18000a1d0(param_1);
  *puVar2 = p_Var1;
  return;
}




void FUN_180009b00(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18000a1d0(param_1);
  FUN_1800032f0((longlong)param_2 + 0x20);
  FUN_180008d20();
  FUN_180007450(uVar1,param_2);
  return;
}




void FUN_180009b50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *local_18;
  
  local_18 = param_2;
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    FUN_180009b50(param_1,(undefined8 *)local_18[2]);
    puVar1 = (undefined8 *)*local_18;
    uVar2 = FUN_18000a1d0(param_1);
    FUN_1800032f0(local_18 + 4);
    FUN_180008d20();
    FUN_180007450(uVar2,local_18);
    local_18 = puVar1;
  }
  return;
}




longlong * FUN_180009bf0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *local_res10 [3];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_18;
  longlong *local_10;
  
  local_res10[0] = param_2;
  FUN_1800094b0((longlong *)local_res10);
  local_38 = param_2;
  if (*(char *)(*param_2 + 0x19) == '\0') {
    if (*(char *)(param_2[2] + 0x19) == '\0') {
      local_38 = local_res10[0];
      local_28 = (longlong *)local_res10[0][2];
    }
    else {
      local_28 = (longlong *)*param_2;
    }
  }
  else {
    local_28 = (longlong *)param_2[2];
  }
  if (local_38 == param_2) {
    local_30 = (longlong *)param_2[1];
    if (*(char *)((longlong)local_28 + 0x19) == '\0') {
      local_28[1] = (longlong)local_30;
    }
    plVar1 = (longlong *)FUN_18000a400(param_1);
    if ((longlong *)*plVar1 == param_2) {
      puVar2 = (undefined8 *)FUN_18000a400(param_1);
      *puVar2 = local_28;
    }
    else if ((longlong *)*local_30 == param_2) {
      *local_30 = (longlong)local_28;
    }
    else {
      local_30[2] = (longlong)local_28;
    }
    plVar1 = (longlong *)FUN_180002800(param_1);
    if ((longlong *)*plVar1 == param_2) {
      local_18 = local_30;
      if (*(char *)((longlong)local_28 + 0x19) == '\0') {
        local_18 = FUN_18000a3b0(local_28);
      }
      plVar1 = (longlong *)FUN_180002800(param_1);
      *plVar1 = (longlong)local_18;
    }
    plVar1 = (longlong *)FUN_18000a3e0(param_1);
    if ((longlong *)*plVar1 == param_2) {
      local_10 = local_30;
      if (*(char *)((longlong)local_28 + 0x19) == '\0') {
        local_10 = (longlong *)FUN_18000a380((longlong)local_28);
      }
      plVar1 = (longlong *)FUN_18000a3e0(param_1);
      *plVar1 = (longlong)local_10;
    }
  }
  else {
    *(longlong **)(*param_2 + 8) = local_38;
    *local_38 = *param_2;
    if (local_38 == (longlong *)param_2[2]) {
      local_30 = local_38;
    }
    else {
      local_30 = (longlong *)local_38[1];
      if (*(char *)((longlong)local_28 + 0x19) == '\0') {
        local_28[1] = (longlong)local_30;
      }
      *local_30 = (longlong)local_28;
      local_38[2] = param_2[2];
      *(longlong **)(param_2[2] + 8) = local_38;
    }
    plVar1 = (longlong *)FUN_18000a400(param_1);
    if ((longlong *)*plVar1 == param_2) {
      puVar2 = (undefined8 *)FUN_18000a400(param_1);
      *puVar2 = local_38;
    }
    else if (*(longlong **)param_2[1] == param_2) {
      *(longlong **)param_2[1] = local_38;
    }
    else {
      *(longlong **)(param_2[1] + 0x10) = local_38;
    }
    local_38[1] = param_2[1];
    std::swap<char,void>((char *)(local_38 + 3),(char *)(param_2 + 3));
  }
  if ((char)param_2[3] != '\x01') {
LAB_18000a16a:
    if (param_1[1] != 0) {
      param_1[1] = param_1[1] + -1;
    }
    return param_2;
  }
LAB_180009ee7:
  plVar1 = (longlong *)FUN_18000a400(param_1);
  if ((local_28 == (longlong *)*plVar1) || ((char)local_28[3] != '\x01')) goto LAB_18000a161;
  if (local_28 == (longlong *)*local_30) {
    local_38 = (longlong *)local_30[2];
    if ((char)local_38[3] == '\0') {
      *(undefined1 *)(local_38 + 3) = 1;
      *(undefined1 *)(local_30 + 3) = 0;
      FUN_18000a2a0(param_1,(longlong)local_30);
      local_38 = (longlong *)local_30[2];
    }
    if (*(char *)((longlong)local_38 + 0x19) == '\0') {
      if ((*(char *)(*local_38 + 0x18) != '\x01') || (*(char *)(local_38[2] + 0x18) != '\x01')) {
        if (*(char *)(local_38[2] + 0x18) == '\x01') {
          *(undefined1 *)(*local_38 + 0x18) = 1;
          *(undefined1 *)(local_38 + 3) = 0;
          FUN_18000a420(param_1,local_38);
          local_38 = (longlong *)local_30[2];
        }
        *(char *)(local_38 + 3) = (char)local_30[3];
        *(undefined1 *)(local_30 + 3) = 1;
        *(undefined1 *)(local_38[2] + 0x18) = 1;
        FUN_18000a2a0(param_1,(longlong)local_30);
LAB_18000a161:
        *(undefined1 *)(local_28 + 3) = 1;
        goto LAB_18000a16a;
      }
      *(undefined1 *)(local_38 + 3) = 0;
    }
  }
  else {
    local_38 = (longlong *)*local_30;
    if ((char)local_38[3] == '\0') {
      *(undefined1 *)(local_38 + 3) = 1;
      *(undefined1 *)(local_30 + 3) = 0;
      FUN_18000a420(param_1,local_30);
      local_38 = (longlong *)*local_30;
    }
    if (*(char *)((longlong)local_38 + 0x19) == '\0') {
      if ((*(char *)(local_38[2] + 0x18) != '\x01') || (*(char *)(*local_38 + 0x18) != '\x01')) {
        if (*(char *)(*local_38 + 0x18) == '\x01') {
          *(undefined1 *)(local_38[2] + 0x18) = 1;
          *(undefined1 *)(local_38 + 3) = 0;
          FUN_18000a2a0(param_1,(longlong)local_38);
          local_38 = (longlong *)*local_30;
        }
        *(char *)(local_38 + 3) = (char)local_30[3];
        *(undefined1 *)(local_30 + 3) = 1;
        *(undefined1 *)(*local_38 + 0x18) = 1;
        FUN_18000a420(param_1,local_30);
        goto LAB_18000a161;
      }
      *(undefined1 *)(local_38 + 3) = 0;
    }
  }
  local_28 = local_30;
  local_30 = (longlong *)local_30[1];
  goto LAB_180009ee7;
}




void FUN_18000a1a0(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18000a1d0(param_1);
  FUN_180007450(uVar1,param_2);
  return;
}




void FUN_18000a1d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800032f0(param_1);
  FUN_1800032f0(uVar1);
  return;
}




bool FUN_18000a200(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003c80(param_1);
  plVar2 = (longlong *)FUN_180003cc0(param_1);
  return *plVar1 != *plVar2;
}




void FUN_18000a250(undefined8 param_1,longlong param_2)

{
  FUN_18000a280(param_1,param_2 + 0x20);
  return;
}




void FUN_18000a280(undefined8 param_1,undefined8 param_2)

{
  FUN_1800032f0(param_2);
  return;
}




void FUN_18000a2a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
  }
  else if (param_2 == **(longlong **)(param_2 + 8)) {
    **(longlong **)(param_2 + 8) = (longlong)plVar1;
  }
  else {
    *(longlong **)(*(longlong *)(param_2 + 8) + 0x10) = plVar1;
  }
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




longlong FUN_18000a380(longlong param_1)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  while (*(char *)(*(longlong *)(local_res8 + 0x10) + 0x19) == '\0') {
    local_res8 = *(longlong *)(local_res8 + 0x10);
  }
  return local_res8;
}




longlong * FUN_18000a3b0(longlong *param_1)

{
  undefined8 local_res8;
  
  for (local_res8 = param_1; *(char *)(*local_res8 + 0x19) == '\0';
      local_res8 = (longlong *)*local_res8) {
  }
  return local_res8;
}




longlong FUN_18000a3e0(longlong *param_1)

{
  return *param_1 + 0x10;
}




longlong FUN_18000a400(longlong *param_1)

{
  return *param_1 + 8;
}




void FUN_18000a420(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
  }
  else if (param_2 == *(longlong **)(param_2[1] + 0x10)) {
    *(longlong *)(param_2[1] + 0x10) = lVar1;
  }
  else {
    *(longlong *)param_2[1] = lVar1;
  }
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}




void FUN_18000a500(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  plVar2 = FUN_18000a9c0(param_1,&local_28);
  lVar1 = *plVar2;
  plVar2 = FUN_18000a730(param_1,&local_20);
  FUN_18000aa80(param_1,local_18,*plVar2,lVar1);
  return;
}




void FUN_18000a560(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180003ce0(param_1);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  if (*plVar1 != 0) {
    FUN_180003cc0(param_1);
    FUN_180003ca0(param_1);
    FUN_180003c20(param_1);
    lVar2 = FUN_18000a800(param_1);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    uVar4 = FUN_180003c60(param_1);
    FUN_18000a990(uVar4,(void *)*puVar3,lVar2);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_180003cc0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_180003c80(param_1);
    *puVar3 = 0;
  }
  return;
}




void FUN_18000a630(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_180008b70(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_18000a670(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18000a630(param_1,param_2,param_3,param_4);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl std::allocator<char>::allocate(unsigned __int64) __ptr64
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void allocate(undefined8 param_1,ulonglong param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_1800074e0(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




/* Library Function - Single Match
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

_Container_proxy * __thiscall
std::allocator<struct_std::_Container_proxy>::allocate
          (allocator<struct_std::_Container_proxy> *this,__uint64 param_1)

{
  __uint64 _Var1;
  _Container_proxy *p_Var2;
  
  _Var1 = _Get_size_of_n<16>(param_1);
  p_Var2 = (_Container_proxy *)_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return p_Var2;
}




undefined8 * FUN_18000a730(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18000a1d0(param_1);
  FUN_1800032f0(puVar1);
  puVar1 = (undefined8 *)FUN_180002800(puVar1);
  FUN_180009060(param_2,*puVar1);
  return param_2;
}




undefined8 * FUN_18000a7a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_1800032f0(uVar1);
  puVar2 = (undefined8 *)FUN_180003ca0(param_1);
  FUN_180009000(param_2,*puVar2);
  return param_2;
}




longlong FUN_18000a800(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003c80(param_1);
  plVar2 = (longlong *)FUN_180003ca0(param_1);
  return *plVar1 - *plVar2 >> 3;
}




void FUN_18000a840(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)FUN_18000a1d0(param_1);
  lVar1 = *plVar2;
  puVar3 = (undefined8 *)FUN_18000a400(plVar2);
  FUN_180009b50(param_1,(undefined8 *)*puVar3);
  plVar4 = (longlong *)FUN_18000a400(plVar2);
  *plVar4 = lVar1;
  plVar4 = (longlong *)FUN_180002800(plVar2);
  *plVar4 = lVar1;
  plVar4 = (longlong *)FUN_18000a3e0(plVar2);
  *plVar4 = lVar1;
  plVar2[1] = 0;
  return;
}




void FUN_18000a8e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_180003ce0(param_1);
  FUN_180003cc0(param_1);
  FUN_180003ca0(param_1);
  FUN_180003c20(param_1);
  puVar1 = (undefined8 *)FUN_180003ca0(param_1);
  puVar2 = (undefined8 *)FUN_180003cc0(param_1);
  *puVar2 = *puVar1;
  return;
}




void FUN_18000a960(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x30);
  return;
}




void FUN_18000a990(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 << 3);
  return;
}




undefined8 * FUN_18000a9c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18000a1d0(param_1);
  FUN_1800032f0(puVar1);
  FUN_180009060(param_2,*puVar1);
  return param_2;
}




undefined8 * FUN_18000aa20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_1800032f0(uVar1);
  puVar2 = (undefined8 *)FUN_180003cc0(param_1);
  FUN_180009000(param_2,*puVar2);
  return param_2;
}




undefined8 * FUN_18000aa80(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *local_res18;
  longlong local_res20;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_res18 = (undefined8 *)param_3;
  local_res20 = param_4;
  plVar2 = FUN_18000a730(param_1,&local_28);
  bVar1 = FUN_180009290((longlong *)&local_res18,plVar2);
  if (bVar1) {
    plVar2 = FUN_18000a9c0(param_1,&local_20);
    bVar1 = FUN_180009290(&local_res20,plVar2);
    if (bVar1) {
      FUN_18000a840(param_1);
      FUN_18000a730(param_1,param_2);
      return param_2;
    }
  }
  while (bVar1 = FUN_180009320((longlong *)&local_res18,&local_res20), bVar1) {
    plVar2 = FUN_180009460((longlong *)&local_res18,&local_18);
    FUN_18000ab70(param_1,local_10,(longlong *)*plVar2);
  }
  uVar3 = FUN_18000a1d0(param_1);
  FUN_1800032f0(uVar3);
  FUN_180009060(param_2,local_res18);
  return local_res18;
}




undefined8 * FUN_18000ab70(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *local_10 [2];
  
  plVar1 = (longlong *)FUN_18000a1d0(param_1);
  local_10[0] = param_3;
  FUN_1800094b0((longlong *)local_10);
  plVar2 = FUN_180009bf0(plVar1,param_3);
  uVar3 = FUN_18000a1d0(param_1);
  FUN_1800032f0(plVar2 + 4);
  FUN_180008d20();
  FUN_180007450(uVar3,plVar2);
  FUN_1800032f0(plVar1);
  FUN_180009060(param_2,local_10[0]);
  return param_2;
}




undefined8 * FUN_18000ac20(undefined8 param_1,undefined8 *param_2,void *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  FUN_1800089d0((void *)((longlong)param_3 + 8),*plVar1,param_3);
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  FUN_1800032f0(*plVar1 + -8);
  FUN_180003c60(param_1);
  FUN_180008d20();
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  *plVar1 = *plVar1 + -8;
  uVar2 = FUN_180003c60(param_1);
  FUN_1800032f0(uVar2);
  FUN_180009000(param_2,param_3);
  return param_2;
}




undefined8 * FUN_18000ace0(undefined8 param_1,undefined8 *param_2,ulonglong *param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18 [3];
  
  FUN_18000adc0(param_1,&local_48,param_3);
  plVar2 = FUN_18000a9c0(param_1,&local_20);
  bVar1 = FUN_180009290(&local_48,plVar2);
  if (!bVar1) {
    local_38 = (ulonglong *)FUN_18000a250(param_1,local_48);
    uVar3 = FUN_180003c60(param_1);
    bVar1 = FUN_1800096d0(uVar3,param_3,local_38);
    if (!bVar1) {
      local_40 = local_30;
      goto LAB_18000ad94;
    }
  }
  local_40 = FUN_18000a9c0(param_1,local_18);
LAB_18000ad94:
  *param_2 = *local_40;
  return param_2;
}




undefined8 * FUN_18000adc0(undefined8 param_1,undefined8 *param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_18000a1d0(param_1);
  FUN_1800032f0(uVar1);
  puVar2 = FUN_1800088f0(param_1,param_3);
  FUN_180009060(param_2,puVar2);
  return param_2;
}




undefined8 FUN_18000ae20(void)

{
  return 0x1fffffffffffffff;
}




undefined8 FUN_18000ae30(void)

{
  return 0x555555555555555;
}




void FUN_18000ae40(undefined8 param_1)

{
  FUN_18000a1d0(param_1);
  FUN_18000ae30();
  return;
}




__uint64 FUN_18000ae60(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180003c60(param_1);
  local_18 = FUN_18000ae20();
  local_10[0] = FUN_180003f80();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




void FUN_18000aeb0(undefined8 param_1)

{
  FUN_1800032f0(param_1);
  return;
}




void FUN_18000aed0(undefined8 param_1,undefined8 param_2)

{
  FUN_180008d30(param_1,param_2);
  return;
}




undefined8 FUN_18000af00(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18000a1d0(param_1);
  return *(undefined8 *)(lVar1 + 8);
}




longlong FUN_18000af20(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  plVar2 = (longlong *)FUN_180003ca0(param_1);
  return *plVar1 - *plVar2 >> 3;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CGeneratorSetCompleteSearch::vftable;
  CSettingsStore::~CSettingsStore((CSettingsStore *)this);
  return;
}




undefined8 * FUN_18000b050(undefined8 *param_1)

{
  FUN_180006d90(param_1);
  *param_1 = CGeneratorSetCompleteSearch::vftable;
  return param_1;
}




undefined8 FUN_18000b090(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_18000d440();
  FUN_18000d3b0(puVar1,4,0x18000afa0);
  return param_1;
}




undefined8 * FUN_18000b0c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18000b190(param_2);
  *param_1 = uVar1;
  return param_1;
}




void FUN_18000b0f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}




ios_base * FUN_18000b150(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_18000b190(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CGeneratorSetRegSearch::vftable;
  CSettingsStore::~CSettingsStore((CSettingsStore *)this);
  return;
}




undefined8 * FUN_18000b2c0(undefined8 *param_1)

{
  FUN_180006d90(param_1);
  *param_1 = CGeneratorSetRegSearch::vftable;
  return param_1;
}




undefined8 FUN_18000b300(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_18000d440();
  FUN_18000d3b0(puVar1,1,0x18000b200);
  return param_1;
}




ios_base * FUN_18000b330(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined4 * FUN_18000b370(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  FUN_18000c180((undefined8 *)(param_1 + 2));
  FUN_18000c180((undefined8 *)(param_1 + 4));
  FUN_18000c180((undefined8 *)(param_1 + 6));
  FUN_18000c180((undefined8 *)(param_1 + 8));
  FUN_18000c180((undefined8 *)(param_1 + 10));
  FUN_18000c180((undefined8 *)(param_1 + 0xc));
  return param_1;
}




void FUN_18000b410(longlong param_1)

{
  FUN_18000c370((longlong *)(param_1 + 0x30));
  FUN_18000c370((longlong *)(param_1 + 0x28));
  FUN_18000c370((longlong *)(param_1 + 0x20));
  FUN_18000c370((longlong *)(param_1 + 0x18));
  FUN_18000c370((longlong *)(param_1 + 0x10));
  FUN_18000c370((longlong *)(param_1 + 8));
  return;
}




void FUN_18000b4a0(undefined4 *param_1,int param_2,undefined1 *param_3,ulonglong param_4,
                  uint param_5,int param_6)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  IObject *pIVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStackY_9e8 [32];
  longlong local_9a8;
  undefined4 local_9a0;
  undefined4 local_99c;
  longlong local_998;
  longlong *local_990;
  longlong *local_988;
  longlong *local_980;
  longlong *local_978;
  longlong local_970;
  char *local_968;
  longlong local_960;
  longlong *local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 local_938;
  undefined8 local_930;
  undefined8 local_928 [2];
  undefined4 local_918 [292];
  undefined1 local_488 [1136];
  ulonglong local_18;
  
  local_948 = 0xfffffffffffffffe;
  local_18 = DAT_18003a118 ^ (ulonglong)auStackY_9e8;
  local_99c = 0;
  if ((((param_4 != 0) && (param_6 != 0)) &&
      (iVar3 = FUN_18000b880(param_1,param_2,param_3,param_4), iVar3 != 0)) &&
     ((lVar4 = FUN_180002800((undefined8 *)(param_1 + 10)), lVar4 != 0 &&
      (lVar4 = FUN_180002800((undefined8 *)(param_1 + 0xc)), lVar4 != 0)))) {
    FUN_18000c230(local_918);
    uVar10 = (ulonglong)param_5;
    cVar2 = FUN_18000ba70(param_1,(longlong)param_3,param_4,param_5,param_6,local_918);
    if (cVar2 != '\0') {
      puVar5 = FUN_18000c3d0((undefined8 *)(param_1 + 10),&local_940);
      local_988 = (longlong *)FUN_180002800(puVar5);
      (**(code **)(*local_988 + 0x58))(local_988);
      puVar5 = FUN_18000c3d0((undefined8 *)(param_1 + 10),&local_938);
      local_980 = (longlong *)FUN_180002800(puVar5);
      uVar7 = 0;
      pIVar6 = (IObject *)(**(code **)(*local_980 + 0x40))(local_980,local_918);
      FUN_18000bb20(&local_9a8,pIVar6,uVar7,uVar10);
      lVar4 = FUN_180002800(&local_9a8);
      if (lVar4 == 0) {
        FUN_18000c370(&local_9a8);
      }
      else {
        local_968 = (char *)FUN_18000bd80(0,pIVar6,uVar7,uVar10);
        puVar5 = FUN_18000c3d0(&local_9a8,&local_930);
        pIVar6 = (IObject *)FUN_180002800(puVar5);
        pIVar6 = IObject::GetInterfaceEx(pIVar6,local_968);
        FUN_18000bb60(&local_998,pIVar6,uVar7,uVar10);
        lVar4 = FUN_180002800(&local_998);
        if (lVar4 == 0) {
          FUN_18000c370(&local_998);
          FUN_18000c370(&local_9a8);
        }
        else {
          if (((param_5 == 5) || (param_5 == 6)) || (param_5 == 0x18)) {
            local_9a0 = 1;
          }
          else {
            local_9a0 = 0;
          }
          uVar1 = (undefined1)local_9a0;
          puVar5 = FUN_18000c3d0((undefined8 *)(param_1 + 0xc),local_928);
          local_978 = (longlong *)FUN_180002800(puVar5);
          uVar7 = FUN_180002800(&local_998);
          local_960 = *local_978;
          plVar8 = (longlong *)(**(code **)(local_960 + 0x38))(local_978,uVar7,uVar1);
          if (plVar8 == (longlong *)0x0) {
            FUN_18000c370(&local_998);
            FUN_18000c370(&local_9a8);
          }
          else {
            puVar9 = local_488;
            for (lVar4 = 0x468; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            local_970 = (**(code **)*plVar8)(plVar8,&DAT_18002c3ec);
            if (local_970 != 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8,local_970);
              local_99c = 1;
            }
            local_990 = plVar8;
            local_958 = plVar8;
            if (plVar8 == (longlong *)0x0) {
              local_950 = 0;
            }
            else {
              local_950 = (**(code **)(*plVar8 + 0x28))(plVar8,1);
            }
            FUN_18000c370(&local_998);
            FUN_18000c370(&local_9a8);
          }
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_9e8);
  return;
}




undefined4 FUN_18000b880(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  IObject *pIVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined4 local_38;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_38 = 0;
  pIVar1 = (IObject *)FUN_18000bfd0("Device");
  FUN_18000bbd0((longlong *)(param_1 + 2),pIVar1,param_3,param_4);
  lVar2 = FUN_180002800((undefined8 *)(param_1 + 2));
  if (lVar2 != 0) {
    pIVar1 = (IObject *)FUN_18000bfd0("DeviceManager");
    FUN_18000bba0((longlong *)(param_1 + 4),pIVar1,param_3,param_4);
    lVar2 = FUN_180002800((undefined8 *)(param_1 + 4));
    if (lVar2 != 0) {
      puVar3 = FUN_18000c3d0((undefined8 *)(param_1 + 4),&local_18);
      plVar4 = (longlong *)FUN_180002800(puVar3);
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x60))(plVar4,*param_1);
      if (plVar4 != (longlong *)0x0) {
        pIVar1 = (IObject *)(**(code **)(*plVar4 + 0x18))(plVar4,0);
        FUN_18000bc60((longlong *)(param_1 + 6),pIVar1,param_3,param_4);
        lVar2 = FUN_180002800((undefined8 *)(param_1 + 6));
        if (lVar2 != 0) {
          pIVar1 = FUN_1800262c0((undefined8 *)(param_1 + 6),param_2,param_3,param_4);
          FUN_18000bc30((longlong *)(param_1 + 8),pIVar1,param_3,param_4);
          lVar2 = FUN_180002800((undefined8 *)(param_1 + 8));
          if (lVar2 != 0) {
            pcVar5 = (char *)FUN_18000bd60(0,pIVar1,param_3,param_4);
            puVar3 = FUN_18000c3d0((undefined8 *)(param_1 + 8),local_10);
            pIVar1 = (IObject *)FUN_180002800(puVar3);
            pIVar1 = IObject::GetInterfaceEx(pIVar1,pcVar5);
            FUN_18000bc90((longlong *)(param_1 + 10),pIVar1,param_3,param_4);
            lVar2 = FUN_180002800((undefined8 *)(param_1 + 10));
            if (lVar2 != 0) {
              pIVar1 = (IObject *)FUN_18000bfd0("FileSystem");
              FUN_18000bc00((longlong *)(param_1 + 0xc),pIVar1,param_3,param_4);
              local_38 = 1;
            }
          }
        }
      }
    }
  }
  return local_38;
}




undefined1
FUN_18000ba70(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 *param_6)

{
  memset(param_6,0,0x488);
  *(undefined1 *)(param_6 + 0x114) = 1;
  *param_6 = param_4;
  *(undefined1 *)((longlong)param_6 + 0x425) = 1;
  *(longlong *)(param_6 + 2) = param_2;
  *(longlong *)(param_6 + 4) = param_3;
  *(longlong *)(param_6 + 6) = param_3 - param_2;
  param_6[0x10a] = param_5;
  return 1;
}




longlong * FUN_18000bb20(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,param_2,param_3,param_4);
  return param_1;
}




longlong * FUN_18000bb60(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,param_2,param_3,param_4);
  return param_1;
}




void FUN_18000bba0(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c7d0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bbd0(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c890(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bc00(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c950(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bc30(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000cad0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bc60(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000ca10(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bc90(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000cb90(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000bda0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000bdf0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000be40(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bd20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000be90(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bd40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000bee0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000bf30(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000bd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000bf80(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_18000bda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003c0d0 == (undefined1 *)0x0) {
    DAT_18003c0d0 = &DAT_18003bfd0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003a560,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003c0d0,local_18);
  }
  return DAT_18003c0d0;
}




undefined1 *
FUN_18000bdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003c1e0 == (undefined1 *)0x0) {
    DAT_18003c1e0 = &DAT_18003c0e0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003a590,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003c1e0,local_18);
  }
  return DAT_18003c1e0;
}




undefined1 *
FUN_18000be40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003bda0 == (undefined1 *)0x0) {
    DAT_18003bda0 = &DAT_18003bca0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003a4f0,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003bda0,local_18);
  }
  return DAT_18003bda0;
}




undefined1 *
FUN_18000be90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003bfc0 == (undefined1 *)0x0) {
    DAT_18003bfc0 = &DAT_18003bec0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003a540,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003bfc0,local_18);
  }
  return DAT_18003bfc0;
}




undefined1 *
FUN_18000bee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003beb0 == (undefined1 *)0x0) {
    DAT_18003beb0 = &DAT_18003bdb0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003a518,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003beb0,local_18);
  }
  return DAT_18003beb0;
}




undefined1 *
FUN_18000bf30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003bb80 == (undefined1 *)0x0) {
    DAT_18003bb80 = &DAT_18003ba80;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003a4c8,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003bb80,local_18);
  }
  return DAT_18003bb80;
}




undefined1 *
FUN_18000bf80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003bc90 == (undefined1 *)0x0) {
    DAT_18003bc90 = &DAT_18003bb90;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003a170,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003bc90,local_18);
  }
  return DAT_18003bc90;
}




void FUN_18000bfd0(char *param_1)

{
  undefined1 auStack_168 [32];
  char *local_148;
  undefined8 *local_140;
  char *local_138;
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_168;
  local_140 = (undefined8 *)FUN_18000c5b0(param_1);
  if (local_140 != (undefined8 *)0x0) {
    local_128[0] = 'I';
    for (local_148 = param_1; *local_148 != '\0'; local_148 = local_148 + 1) {
      if (0xff < (longlong)local_148 - (longlong)param_1) goto LAB_18000c164;
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
LAB_18000c164:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_168);
  return;
}




undefined8 * FUN_18000c180(undefined8 *param_1)

{
  FUN_180009100(param_1);
  return param_1;
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

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_18000cad0(param_1,param_2,param_3,param_4);
  return param_1;
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

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_18000cc50(param_1,param_2,param_3,param_4);
  return param_1;
}




undefined4 * FUN_18000c230(undefined4 *param_1)

{
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
  memset(param_1 + 0x115,0,0x10);
  return param_1;
}




void FUN_18000c370(longlong *param_1)

{
  AddRef(param_1);
  return;
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




undefined8 * FUN_18000c3d0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_180003810(param_2,*param_1);
  return param_2;
}




undefined8 FUN_18000c400(undefined *param_1,undefined8 param_2)

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




int FUN_18000c440(char *param_1,undefined1 *param_2,uint *param_3)

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




void FUN_18000c5b0(char *param_1)

{
  char *pcVar1;
  undefined1 auStack_168 [32];
  char *local_148;
  ulonglong local_140;
  ulonglong local_138;
  CHAR local_128;
  char acStack_127 [271];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_168;
  pcVar1 = param_1;
  if (param_1 != (char *)0x0) {
    while (local_148 = pcVar1, *local_148 != '\0') {
      if (0xff < (longlong)local_148 - (longlong)param_1) goto LAB_18000c72c;
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
    FUN_18000c750(&local_128);
  }
LAB_18000c72c:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_168);
  return;
}




undefined8 FUN_18000c750(LPCSTR param_1)

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
      uVar2 = FUN_18000c400(pFVar1,hModule);
    }
  }
  return uVar2;
}




longlong FUN_18000c7d0(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_18000bcc0(0,pIVar2,param_3,param_4);
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




longlong FUN_18000c890(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_18000bce0(0,pIVar2,param_3,param_4);
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




longlong FUN_18000c950(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_18000bd00(0,pIVar2,param_3,param_4);
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




longlong FUN_18000ca10(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_18000bd20(0,pIVar2,param_3,param_4);
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




longlong FUN_18000cad0(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_18000bd40(0,pIVar2,param_3,param_4);
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




longlong FUN_18000cb90(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_18000bd60(0,pIVar2,param_3,param_4);
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




longlong FUN_18000cc50(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_18000bd80(0,pIVar2,param_3,param_4);
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




void FUN_18000cd10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __std_type_info_name(param_1 + 8,&DAT_18003d5d0,param_3,param_4,0xfffffffffffffffe);
  return;
}




undefined8 * FUN_18000cd40(undefined8 *param_1)

{
  FUN_180001ac0(param_1);
  *param_1 = IBlockparserSet::vftable;
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = IBlockparserSet::vftable;
  FUN_180001ae0((undefined8 *)this);
  return;
}




ios_base * FUN_18000cdc0(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = ILocationGeneratorSet::vftable;
  FUN_18000ef70((undefined8 *)this);
  return;
}




undefined8 * FUN_18000ce40(undefined8 *param_1)

{
  FUN_18000ef90(param_1);
  *param_1 = ILocationGeneratorSet::vftable;
  return param_1;
}




ios_base * FUN_18000ce80(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000cec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_18 = 0xfffffffffffffffe;
  FUN_18001f400(param_1,param_2,param_3);
  *param_1 = CLocationGenAbnormal::vftable;
  FUN_1800038a0(param_1 + 3);
  FUN_180009040(param_1 + 6);
  local_48 = 6;
  FUN_18000d1b0(param_1 + 3,&local_48);
  local_40 = 0x22;
  FUN_18000d1b0(param_1 + 3,&local_40);
  local_38 = 0x80;
  FUN_18000d1b0(param_1 + 3,&local_38);
  local_30 = 0x100;
  FUN_18000d1b0(param_1 + 3,&local_30);
  local_28 = 0x800;
  FUN_18000d1b0(param_1 + 3,&local_28);
  local_20 = 0x10800;
  FUN_18000d1b0(param_1 + 3,&local_20);
  puVar1 = FUN_18000a7a0(param_1 + 3,local_10);
  param_1[6] = *puVar1;
  return param_1;
}




void FUN_18000d020(ios_base *param_1)

{
  *(undefined ***)param_1 = CLocationGenAbnormal::vftable;
  FUN_180009250(param_1 + 0x18);
  std::ios_base::~ios_base(param_1);
  return;
}




ulonglong FUN_18000d070(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong local_18;
  undefined8 local_10 [2];
  
  local_18 = 0xffffffffffffffff;
  plVar2 = FUN_18000aa20(param_1 + 0x18,local_10);
  bVar1 = FID_conflict_operator__((longlong *)(param_1 + 0x30),plVar2);
  if (bVar1) {
    puVar3 = (ulonglong *)FUN_180009440((undefined8 *)(param_1 + 0x30));
    local_18 = *puVar3;
    FUN_1800095a0((longlong *)(param_1 + 0x30));
    if ((local_18 < *(ulonglong *)(param_1 + 8)) || (*(ulonglong *)(param_1 + 0x10) < local_18)) {
      local_18 = 0xffffffffffffffff;
    }
  }
  return local_18;
}




void FUN_18000d120(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_18 [3];
  
  FUN_18001f3c0(param_1,param_2,param_3);
  puVar1 = FUN_18000a7a0(param_1 + 0x18,local_18);
  *(undefined8 *)(param_1 + 0x30) = *puVar1;
  return;
}




ios_base * FUN_18000d170(ios_base *param_1,uint param_2)

{
  FUN_18000d020(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000d1b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800032f0(param_2);
  FUN_180008d30(param_1,uVar1);
  return;
}




undefined8 * FUN_18000d1e0(undefined8 *param_1)

{
  FUN_180009150(param_1);
  return param_1;
}




void FUN_18000d210(undefined8 param_1)

{
  FUN_180009220(param_1);
  return;
}




undefined8 *
FUN_18000d240(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  int local_res18 [2];
  undefined8 local_res20;
  longlong local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong local_38 [3];
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_38[1] = 0xfffffffffffffffe;
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_180003810(&local_70,0);
  FUN_18000ead0(param_1,&local_68,local_res18);
  plVar2 = FUN_18000a9c0(param_1,local_38 + 2);
  bVar1 = FUN_180009320(&local_68,plVar2);
  if (bVar1) {
    lVar3 = FUN_180009420(&local_68);
    local_60 = (undefined8 *)(**(code **)(lVar3 + 8))(&local_50,local_res20,param_5);
    local_58 = local_60;
    plVar2 = FUN_18000d560(local_60,&local_20);
    FUN_18000e9c0(&local_70,*plVar2);
    FUN_18000b0f0(&local_50);
  }
  else {
    local_48 = FUN_1800168f0(local_38);
    local_40 = local_48;
    plVar2 = FUN_18000d560(local_48,local_18);
    FUN_18000e9c0(&local_70,*plVar2);
    FUN_18000b0f0(local_38);
  }
  FUN_18000b0c0(param_2,&local_70);
  FUN_18000b0f0(&local_70);
  return param_2;
}




undefined1 FUN_18000d3b0(undefined8 param_1,int param_2,longlong param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res10 [2];
  longlong local_res18;
  undefined1 local_28;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_28 = 0;
  if (param_3 != 0) {
    local_res10[0] = param_2;
    local_res18 = param_3;
    plVar2 = FUN_18000ead0(param_1,&local_18,local_res10);
    plVar3 = FUN_18000a9c0(param_1,local_10);
    bVar1 = FUN_180009290(plVar3,plVar2);
    if (bVar1) {
      plVar2 = (longlong *)FUN_18000ea10(param_1,local_res10);
      *plVar2 = local_res18;
      local_28 = 1;
    }
  }
  return local_28;
}




undefined * FUN_18000d440(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18003c1f8) {
    _Init_thread_header(&DAT_18003c1f8);
    if (DAT_18003c1f8 == -1) {
      FUN_18000d1e0((undefined8 *)&DAT_18003c1e8);
      atexit(FUN_18002a960);
      _Init_thread_footer(&DAT_18003c1f8);
    }
  }
  return &DAT_18003c1e8;
}




undefined4 * FUN_18000d4c0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18000d510(param_1,param_3);
  return param_1;
}




undefined4 * FUN_18000d510(undefined4 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1800032f0(param_2);
  puVar2 = (undefined4 *)FUN_180008ed0(puVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return param_1;
}




undefined8 * FUN_18000d560(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_180003810(&local_20,*param_1);
  *param_1 = 0;
  *param_2 = local_20;
  return param_2;
}




_Container_proxy *
FUN_18000d5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  p_Var1 = FUN_180009810(param_1);
  p_Var1[0x18] = (_Container_proxy)0x0;
  p_Var1[0x19] = (_Container_proxy)0x0;
  uVar2 = FUN_1800032f0(param_4);
  uVar3 = FUN_1800032f0(param_3);
  uVar4 = FUN_1800032f0(param_2);
  uVar5 = FUN_1800032f0(p_Var1 + 0x20);
  uVar6 = FUN_18000a1d0(param_1);
  FUN_18000e830(uVar6,uVar5,uVar4,uVar3,uVar2);
  return p_Var1;
}




/* WARNING: Removing unreachable block (ram,0x00018000d745) */
/* WARNING: Removing unreachable block (ram,0x00018000d82b) */
/* WARNING: Removing unreachable block (ram,0x00018000d920) */
/* WARNING: Removing unreachable block (ram,0x00018000d984) */
/* WARNING: Removing unreachable block (ram,0x00018000da06) */
/* WARNING: Removing unreachable block (ram,0x00018000da62) */
/* WARNING: Removing unreachable block (ram,0x00018000da17) */
/* WARNING: Removing unreachable block (ram,0x00018000dab3) */
/* WARNING: Removing unreachable block (ram,0x00018000db23) */
/* WARNING: Removing unreachable block (ram,0x00018000db71) */
/* WARNING: Removing unreachable block (ram,0x00018000dbde) */
/* WARNING: Removing unreachable block (ram,0x00018000dc40) */
/* WARNING: Removing unreachable block (ram,0x00018000dbf2) */
/* WARNING: Removing unreachable block (ram,0x00018000dc8b) */
/* WARNING: Removing unreachable block (ram,0x00018000d85b) */
/* WARNING: Removing unreachable block (ram,0x00018000d8c0) */
/* WARNING: Removing unreachable block (ram,0x00018000d91b) */
/* WARNING: Removing unreachable block (ram,0x00018000d775) */
/* WARNING: Removing unreachable block (ram,0x00018000d7d5) */
/* WARNING: Removing unreachable block (ram,0x00018000d821) */
/* WARNING: Removing unreachable block (ram,0x00018000dc90) */

undefined8 *
FUN_18000d690(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             void *param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *local_res18;
  undefined8 local_res20;
  undefined8 *local_140;
  longlong *local_138;
  int *local_c0;
  int *local_b8;
  int *local_b0;
  int *local_a8;
  undefined8 local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  longlong *local_68;
  int *local_60;
  int *local_58;
  undefined8 local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_50 = 0xfffffffffffffffe;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180009040(&local_140);
  local_138 = (longlong *)FUN_18000a1d0(param_1);
  lVar2 = FUN_18000af00(param_1);
  if (lVar2 == 0) {
    uVar3 = FUN_1800032f0(local_res20);
    FUN_1800075e0(param_1,param_2,'\x01',(undefined8 *)*local_138,uVar3,param_5);
    return param_2;
  }
  plVar4 = FUN_18000a730(param_1,&local_30);
  bVar1 = FUN_180009290((longlong *)&local_res18,plVar4);
  if (bVar1) {
    local_c0 = (int *)FUN_18000a250(param_1,(longlong)local_res18);
    local_b8 = (int *)FUN_18000a280(param_1,local_res20);
    uVar3 = FUN_180003c60(param_1);
    bVar1 = FUN_18000ea50(uVar3,local_b8,local_c0);
    if (bVar1) {
      uVar3 = FUN_1800032f0(local_res20);
      FUN_1800075e0(param_1,param_2,'\x01',local_res18,uVar3,param_5);
      return param_2;
    }
  }
  else {
    plVar4 = FUN_18000a9c0(param_1,&local_28);
    bVar1 = FUN_180009290((longlong *)&local_res18,plVar4);
    if (bVar1) {
      local_b0 = (int *)FUN_18000a280(param_1,local_res20);
      plVar4 = (longlong *)FUN_18000a3e0(local_138);
      local_a8 = (int *)FUN_18000a250(param_1,*plVar4);
      uVar3 = FUN_180003c60(param_1);
      bVar1 = FUN_18000ea50(uVar3,local_a8,local_b0);
      if (bVar1) {
        local_a0 = FUN_1800032f0(local_res20);
        puVar5 = (undefined8 *)FUN_18000a3e0(local_138);
        FUN_1800075e0(param_1,param_2,'\0',(undefined8 *)*puVar5,local_a0,param_5);
        return param_2;
      }
    }
    else {
      local_98 = (int *)FUN_18000a250(param_1,(longlong)local_res18);
      local_90 = (int *)FUN_18000a280(param_1,local_res20);
      uVar3 = FUN_180003c60(param_1);
      bVar1 = FUN_18000ea50(uVar3,local_90,local_98);
      if (bVar1) {
        local_140 = local_res18;
        local_88 = (int *)FUN_18000a280(param_1,local_res20);
        plVar4 = FUN_1800095c0((longlong *)&local_140);
        local_80 = (int *)FUN_18000a250(param_1,*plVar4);
        uVar3 = FUN_180003c60(param_1);
        bVar1 = FUN_18000ea50(uVar3,local_80,local_88);
        if (bVar1) {
          if (*(char *)(local_140[2] + 0x19) != '\0') {
            uVar3 = FUN_1800032f0(local_res20);
            FUN_1800075e0(param_1,param_2,'\0',local_140,uVar3,param_5);
            return param_2;
          }
          uVar3 = FUN_1800032f0(local_res20);
          FUN_1800075e0(param_1,param_2,'\x01',local_res18,uVar3,param_5);
          return param_2;
        }
      }
      local_78 = (int *)FUN_18000a280(param_1,local_res20);
      local_70 = (int *)FUN_18000a250(param_1,(longlong)local_res18);
      uVar3 = FUN_180003c60(param_1);
      bVar1 = FUN_18000ea50(uVar3,local_70,local_78);
      if (bVar1) {
        local_140 = local_res18;
        local_68 = FUN_18000a9c0(param_1,&local_20);
        plVar4 = FUN_1800094b0((longlong *)&local_140);
        bVar1 = FUN_180009290(plVar4,local_68);
        if (!bVar1) {
          local_60 = (int *)FUN_18000a250(param_1,(longlong)local_140);
          local_58 = (int *)FUN_18000a280(param_1,local_res20);
          uVar3 = FUN_180003c60(param_1);
          bVar1 = FUN_18000ea50(uVar3,local_58,local_60);
          if (!bVar1) goto LAB_18000e1fb;
        }
        if (*(char *)(local_res18[2] + 0x19) != '\0') {
          uVar3 = FUN_1800032f0(local_res20);
          FUN_1800075e0(param_1,param_2,'\0',local_res18,uVar3,param_5);
          return param_2;
        }
        uVar3 = FUN_1800032f0(local_res20);
        FUN_1800075e0(param_1,param_2,'\x01',local_140,uVar3,param_5);
        return param_2;
      }
    }
  }
LAB_18000e1fb:
  uVar3 = FUN_1800032f0(local_res20);
  puVar5 = FUN_18000e260(param_1,local_18,'\0',uVar3,param_5);
  *param_2 = *puVar5;
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x00018000e3f5) */

undefined8 *
FUN_18000e260(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,void *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  bool local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94 [4];
  undefined8 *local_90;
  undefined8 *local_88;
  uint local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_30 = 0xfffffffffffffffe;
  local_68 = (longlong *)FUN_18000a1d0(param_1);
  local_88 = (undefined8 *)*local_68;
  local_90 = (undefined8 *)local_88[1];
  local_98 = true;
  while (*(char *)((longlong)local_90 + 0x19) == '\0') {
    local_88 = local_90;
    if (param_3 == '\0') {
      local_50 = (int *)FUN_18000a250(param_1,(longlong)local_90);
      local_48 = (int *)FUN_18000a280(param_1,param_4);
      uVar2 = FUN_180003c60(param_1);
      local_98 = FUN_18000ea50(uVar2,local_48,local_50);
    }
    else {
      local_60 = (int *)FUN_18000a280(param_1,param_4);
      local_58 = (int *)FUN_18000a250(param_1,(longlong)local_90);
      uVar2 = FUN_180003c60(param_1);
      local_98 = FUN_18000ea50(uVar2,local_58,local_60);
      local_98 = !local_98;
      local_80 = (uint)local_98;
    }
    if (local_98 == false) {
      local_70 = (undefined8 *)local_90[2];
    }
    else {
      local_70 = (undefined8 *)*local_90;
    }
    local_90 = local_70;
  }
  FUN_1800032f0(local_68);
  FUN_180009060(&local_78,local_88);
  if (local_98 != false) {
    plVar3 = FUN_18000a730(param_1,&local_20);
    bVar1 = FUN_180009290(&local_78,plVar3);
    if (bVar1) {
      local_96 = 1;
      uVar2 = FUN_1800032f0(param_4);
      puVar4 = FUN_1800075e0(param_1,&local_18,'\x01',local_88,uVar2,param_5);
      FUN_180006e30(param_2,puVar4,&local_96);
      return param_2;
    }
    FUN_1800095e0(&local_78);
  }
  local_40 = (int *)FUN_18000a280(param_1,param_4);
  local_38 = (int *)FUN_18000a250(param_1,local_78);
  uVar2 = FUN_180003c60(param_1);
  bVar1 = FUN_18000ea50(uVar2,local_38,local_40);
  if (bVar1) {
    local_95 = 1;
    uVar2 = FUN_1800032f0(param_4);
    puVar4 = FUN_1800075e0(param_1,local_10,local_98,local_88,uVar2,param_5);
    FUN_180006e30(param_2,puVar4,&local_95);
  }
  else {
    FUN_180009b00(param_1,param_5);
    local_94[0] = 0;
    FUN_180006e30(param_2,&local_78,local_94);
  }
  return param_2;
}




undefined8 * FUN_18000e640(undefined8 param_1,int *param_2)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *local_18;
  undefined8 *local_10;
  
  plVar2 = (longlong *)FUN_18000a1d0(param_1);
  local_10 = (undefined8 *)*plVar2;
  local_18 = (undefined8 *)local_10[1];
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    piVar3 = (int *)FUN_18000a250(param_1,(longlong)local_18);
    cVar1 = FUN_18000ea90(param_1,piVar3,param_2);
    if (cVar1 == '\0') {
      local_10 = local_18;
      local_18 = (undefined8 *)*local_18;
    }
    else {
      local_18 = (undefined8 *)local_18[2];
    }
  }
  return local_10;
}




undefined8 * FUN_18000e6e0(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46 [6];
  undefined8 *local_40;
  int *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_18000ebb0(param_1,&local_40,param_3);
  plVar2 = FUN_18000a9c0(param_1,&local_20);
  bVar1 = FUN_180009290((longlong *)&local_40,plVar2);
  if (!bVar1) {
    local_38 = (int *)FUN_18000a250(param_1,(longlong)local_40);
    uVar3 = FUN_180003c60(param_1);
    bVar1 = FUN_18000ea50(uVar3,param_3,local_38);
    if (!bVar1) {
      local_47 = 0;
      FUN_180006e30(param_2,&local_40,&local_47);
      return param_2;
    }
  }
  local_48 = 1;
  local_28 = local_40;
  local_30 = FUN_180008e80(local_46);
  uVar3 = FUN_1800032f0(param_3);
  puVar4 = FUN_180008ea0(&local_18,uVar3);
  puVar4 = FUN_18000e8e0(param_1,local_10,local_28,&PTR_18002c9b0,puVar4,local_30);
  FUN_180006e30(param_2,puVar4,&local_48);
  return param_2;
}




void FUN_18000e830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  CLogWriter *pCVar1;
  byte *pbVar2;
  CLogWriter local_48 [8];
  CLogWriter *local_40;
  CLogWriter *local_38;
  CLogWriter *local_30;
  CLogWriter *local_28;
  undefined4 *local_20;
  CLogWriter local_18 [24];
  
  local_20 = (undefined4 *)FUN_180009280(0x10,param_2);
  local_40 = local_48;
  local_38 = local_18;
  pCVar1 = (CLogWriter *)FUN_1800032f0(param_5);
  local_30 = CLogWriter::operator=(local_40,pCVar1);
  pCVar1 = (CLogWriter *)FUN_1800032f0(param_4);
  local_28 = FUN_180009180(local_38,pCVar1);
  pbVar2 = (byte *)FUN_1800032f0(param_3);
  FUN_18000d4c0(local_20,(ulonglong)*pbVar2,local_28);
  return;
}




undefined8 *
FUN_18000e8e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  _Container_proxy *p_Var4;
  
  uVar1 = FUN_1800032f0(param_6);
  uVar2 = FUN_1800032f0(param_5);
  uVar3 = FUN_1800032f0(param_4);
  p_Var4 = FUN_18000d5c0(param_1,uVar3,uVar2,uVar1);
  FUN_18000d690(param_1,param_2,param_3,p_Var4 + 0x20,p_Var4);
  return param_2;
}




undefined8 * FUN_18000e980(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  FUN_18000e6e0(param_1,param_2,param_3);
  return param_2;
}




longlong * FUN_18000e9c0(longlong *param_1,longlong param_2)

{
  FUN_18000ec10(param_1,param_2);
  return param_1;
}




longlong FUN_18000ea10(undefined8 param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18 [3];
  
  plVar1 = FUN_18000e980(param_1,local_18,param_2);
  lVar2 = FUN_1800093e0(plVar1);
  return lVar2 + 8;
}




bool FUN_18000ea50(undefined8 param_1,int *param_2,int *param_3)

{
  return *param_2 < *param_3;
}




void FUN_18000ea90(undefined8 param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_18000ea50(uVar1,param_2,param_3);
  return;
}




undefined8 * FUN_18000ead0(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_48;
  undefined8 *local_40;
  int *local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18 [3];
  
  FUN_18000ebb0(param_1,&local_48,param_3);
  plVar2 = FUN_18000a9c0(param_1,&local_20);
  bVar1 = FUN_180009290(&local_48,plVar2);
  if (!bVar1) {
    local_38 = (int *)FUN_18000a250(param_1,local_48);
    uVar3 = FUN_180003c60(param_1);
    bVar1 = FUN_18000ea50(uVar3,param_3,local_38);
    if (!bVar1) {
      local_40 = local_30;
      goto LAB_18000eb84;
    }
  }
  local_40 = FUN_18000a9c0(param_1,local_18);
LAB_18000eb84:
  *param_2 = *local_40;
  return param_2;
}




undefined8 * FUN_18000ebb0(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_18000a1d0(param_1);
  FUN_1800032f0(uVar1);
  puVar2 = FUN_18000e640(param_1,param_3);
  FUN_180009060(param_2,puVar2);
  return param_2;
}




void FUN_18000ec10(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if ((param_2 != *param_1) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = param_2;
  return;
}




undefined8 *
FUN_18000ec90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001f400(param_1,param_3,param_4);
  *param_1 = CLocationGenDependOnGeomotry::vftable;
  param_1[3] = *param_2;
  param_1[4] = 0;
  param_1[5] = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x1c) * *(int *)(param_1 + 3));
  param_1[6] = 0;
  FUN_18000eed0((longlong)param_1);
  return param_1;
}




void FUN_18000ed40(ios_base *param_1)

{
  *(undefined ***)param_1 = CLocationGenDependOnGeomotry::vftable;
  FUN_180026c40();
  std::ios_base::~ios_base(param_1);
  return;
}




ulonglong FUN_18000ed90(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_18;
  
  local_18 = *(longlong *)(param_1 + 0x20) * *(longlong *)(param_1 + 0x28) +
             *(longlong *)(param_1 + 0x30) * (ulonglong)*(uint *)(param_1 + 0x1c);
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
  uVar1 = *(ulonglong *)(param_1 + 0x30) % 2;
  *(ulonglong *)(param_1 + 0x30) = uVar1;
  if ((uVar1 == 0) || ((ulonglong)*(uint *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 0x30))) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  }
  if ((local_18 < *(ulonglong *)(param_1 + 8)) || (*(ulonglong *)(param_1 + 0x10) < local_18)) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




void FUN_18000ee90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18001f3c0(param_1,param_2,param_3);
  FUN_18000eed0(param_1);
  return;
}




void FUN_18000eed0(longlong param_1)

{
  *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 8) / *(ulonglong *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 8) % *(ulonglong *)(param_1 + 0x28) != 0) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  }
  return;
}




ios_base * FUN_18000ef30(ios_base *param_1,uint param_2)

{
  FUN_18000ed40(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000ef70(undefined8 *param_1)

{
  *param_1 = ILocationGenerator::vftable;
  return;
}




undefined8 * FUN_18000ef90(undefined8 *param_1)

{
  *param_1 = ILocationGenerator::vftable;
  return param_1;
}




undefined8 * FUN_18000efb0(undefined8 *param_1,uint param_2)

{
  FUN_18000ef70(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CGeneratorSetFast1MSearch::vftable;
  CSettingsStore::~CSettingsStore((CSettingsStore *)this);
  return;
}




undefined8 * FUN_18000f030(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180006d90(param_1);
  *param_1 = CGeneratorSetFast1MSearch::vftable;
  param_1[7] = param_2;
  param_1[8] = param_3;
  return param_1;
}




undefined8 FUN_18000f150(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_18000d440();
  FUN_18000d3b0(puVar1,3,0x18000f0a0);
  return param_1;
}




ios_base * FUN_18000f180(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CGeneratorSetFastSearch::vftable;
  CSettingsStore::~CSettingsStore((CSettingsStore *)this);
  return;
}




undefined8 * FUN_18000f200(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180006d90(param_1);
  *param_1 = CGeneratorSetFastSearch::vftable;
  param_1[7] = param_2;
  param_1[8] = param_3;
  return param_1;
}




undefined8 FUN_18000f320(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_18000d440();
  FUN_18000d3b0(puVar1,2,0x18000f270);
  return param_1;
}




ios_base * FUN_18000f350(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000f390(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 local_10 [2];
  
  FUN_18001f400(param_1,param_2,param_3);
  *param_1 = CLocationGenFromReg::vftable;
  FUN_1800038a0(param_1 + 3);
  FUN_180009040(param_1 + 6);
  FUN_18000f840(param_1,param_4,param_1 + 3);
  puVar1 = FUN_18000a7a0(param_1 + 3,local_10);
  param_1[6] = *puVar1;
  return param_1;
}




void FUN_18000f450(ios_base *param_1)

{
  *(undefined ***)param_1 = CLocationGenFromReg::vftable;
  FUN_180009250(param_1 + 0x18);
  std::ios_base::~ios_base(param_1);
  return;
}




ulonglong FUN_18000f4a0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong local_18;
  undefined8 local_10 [2];
  
  local_18 = 0xffffffffffffffff;
  plVar2 = FUN_18000aa20(param_1 + 0x18,local_10);
  bVar1 = FID_conflict_operator__((longlong *)(param_1 + 0x30),plVar2);
  if (bVar1) {
    puVar3 = (ulonglong *)FUN_180009440((undefined8 *)(param_1 + 0x30));
    local_18 = *puVar3;
    FUN_1800095a0((longlong *)(param_1 + 0x30));
    if ((local_18 < *(ulonglong *)(param_1 + 8)) || (*(ulonglong *)(param_1 + 0x10) < local_18)) {
      local_18 = 0xffffffffffffffff;
    }
  }
  return local_18;
}




void FUN_18000f550(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_18 [3];
  
  FUN_18001f3c0(param_1,param_2,param_3);
  puVar1 = FUN_18000a7a0(param_1 + 0x18,local_18);
  *(undefined8 *)(param_1 + 0x30) = *puVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018000f763) */

void FUN_18000f5b0(undefined8 param_1,int param_2,HKEY param_3,LPCSTR param_4)

{
  LSTATUS LVar1;
  longlong lVar2;
  undefined1 *puVar3;
  LPDWORD lpType;
  undefined1 auStackY_108 [32];
  LPBYTE local_d8;
  DWORD local_d0;
  DWORD local_cc;
  HKEY local_c8;
  ulonglong local_c0 [3];
  LPBYTE local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  LPBYTE local_90;
  undefined1 local_88 [32];
  undefined2 uStack_68;
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStackY_108;
  local_c0[2] = 0;
  local_d8 = (LPBYTE)0x0;
  local_d0 = 0x8000;
  if (((param_4 != (LPCSTR)0x0) && (param_2 != 0)) &&
     (local_d8 = (LPBYTE)thunk_FUN_180026e64(0x8000), local_a8 = local_d8, local_d8 != (LPBYTE)0x0))
  {
    local_c8 = (HKEY)0x0;
    LVar1 = RegOpenKeyA(param_3,param_4,&local_c8);
    if ((LVar1 == 0) && (local_c8 != (HKEY)0x0)) {
      local_cc = 0;
      lpType = &local_cc;
      LVar1 = RegQueryValueExA(local_c8,"Data",(LPDWORD)0x0,lpType,local_d8,&local_d0);
      if ((((LVar1 == 0) && ((local_cc == 3 && (0xe7 < local_d0)))) && (local_d8[0xc4] == '#')) &&
         (local_d8[0xe6] == '#')) {
        puVar3 = local_88;
        for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        memcpy(local_88,local_d8 + 0xc6,0x20);
        local_c0[1] = 0x20;
        uStack_68 = 0;
        local_c0[0] = 0;
        FUN_180010b70(local_88,L"%I64X",local_c0,lpType);
        local_a0 = (ulonglong)param_2;
        if (local_c0[0] % local_a0 == 0) {
          local_98 = (ulonglong)param_2;
          local_c0[2] = local_c0[0] / local_98;
        }
      }
      RegCloseKey(local_c8);
    }
  }
  if (local_d8 != (LPBYTE)0x0) {
    local_90 = local_d8;
    free(local_d8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_108);
  return;
}




void FUN_18000f840(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  LSTATUS LVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  CHAR *pCVar6;
  undefined1 auStack_1a8 [32];
  uint local_188;
  HKEY local_180;
  longlong local_178;
  undefined8 *local_170;
  longlong *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_1a8;
  local_180 = (HKEY)0x0;
  LVar2 = RegOpenKeyA((HKEY)0xffffffff80000001,
                      "Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MountPoints2\\CPC\\Volume"
                      ,&local_180);
  if ((LVar2 == 0) && (local_180 != (HKEY)0x0)) {
    for (local_188 = 0; local_188 < 1000; local_188 = local_188 + 1) {
      pCVar6 = local_128;
      for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
        *pCVar6 = '\0';
        pCVar6 = pCVar6 + 1;
      }
      LVar2 = RegEnumKeyA(local_180,local_188,local_128,0x104);
      if (LVar2 != 0) break;
      local_178 = FUN_18000f5b0(param_1,param_2,local_180,local_128);
      if (local_178 != 0) {
        local_168 = FUN_18000aa20(param_3,&local_158);
        local_170 = FUN_18000aa20(param_3,&local_150);
        puVar3 = FUN_18000a7a0(param_3,&local_148);
        plVar4 = FUN_1800108f0(&local_140,*puVar3,*local_170,&local_178);
        bVar1 = FID_conflict_operator__(plVar4,local_168);
        if (bVar1) {
          FUN_18000aed0(param_3,&local_178);
        }
      }
    }
    RegCloseKey(local_180);
  }
  local_160 = FUN_18000aa20(param_3,&local_138);
  puVar3 = FUN_18000a7a0(param_3,&local_130);
  FUN_1800109a0(*puVar3,*local_160);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1a8);
  return;
}




undefined8 * FUN_18000fa20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800032f0(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_1800032f0(param_3);
  param_1[1] = *puVar1;
  return param_1;
}




void FUN_18000fa70(void)

{
  return;
}




/* Library Function - Single Match
    void __cdecl std::_Enable_shared_from_this<class __ExceptionPtr,class __ExceptionPtr>(class
   std::shared_ptr<class __ExceptionPtr> const & __ptr64,class __ExceptionPtr * __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl
std::_Enable_shared_from_this<class___ExceptionPtr,class___ExceptionPtr>
          (shared_ptr<class___ExceptionPtr> *param_1,__ExceptionPtr *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18000fa70();
  return;
}




void FUN_18000fac0(void *param_1,longlong param_2,longlong param_3)

{
  memmove((void *)(param_3 - (param_2 - (longlong)param_1)),param_1,param_2 - (longlong)param_1);
  return;
}




longlong * FUN_18000fb30(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *local_res8;
  
  for (local_res8 = param_1; (local_res8 != param_2 && (*local_res8 != *param_3));
      local_res8 = local_res8 + 1) {
  }
  return local_res8;
}




void FUN_18000fb80(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18000fb30(param_1,param_2,param_3);
  return;
}




void FUN_18000fbd0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (lVar1 < 0x29) {
    FUN_18000ff10(param_1,param_2,param_3,param_4);
  }
  else {
    lVar1 = lVar1 + 1 >> 3;
    FUN_18000ff10(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_18000ff10(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_18000ff10(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_18000ff10(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
  }
  return;
}




ulonglong * FUN_18000fd30(ulonglong *param_1,ulonglong *param_2,undefined1 param_3)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined1 local_res18 [16];
  ulonglong *local_20;
  ulonglong *local_18;
  ulonglong local_10 [2];
  
  local_res18[0] = param_3;
  local_20 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = local_20 + 1, puVar2 != param_2) {
      puVar3 = (ulonglong *)FUN_1800032f0(puVar2);
      local_10[0] = *puVar3;
      bVar1 = FUN_1800096d0(local_res18,local_10,param_1);
      local_18 = puVar2;
      if (bVar1) {
        FUN_18000fff0(param_1,(longlong)puVar2,(longlong)(local_20 + 2));
        puVar3 = (ulonglong *)FUN_1800032f0(local_10);
        *param_1 = *puVar3;
        local_20 = puVar2;
      }
      else {
        while( true ) {
          puVar3 = local_18 + -1;
          bVar1 = FUN_1800096d0(local_res18,local_10,puVar3);
          if (!bVar1) break;
          puVar4 = (ulonglong *)FUN_1800032f0(puVar3);
          *local_18 = *puVar4;
          local_18 = puVar3;
        }
        puVar3 = (ulonglong *)FUN_1800032f0(local_10);
        *local_18 = *puVar3;
        local_20 = puVar2;
      }
    }
  }
  return param_2;
}




void FUN_18000fe70(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong local_28;
  undefined8 local_18 [3];
  
  local_28 = param_2 - param_1 >> 4;
  while (0 < local_28) {
    local_28 = local_28 + -1;
    puVar1 = (undefined8 *)FUN_1800032f0(param_1 + local_28 * 8);
    local_18[0] = *puVar1;
    uVar2 = FUN_1800032f0(local_18);
    FUN_180010400(param_1,local_28,param_2 - param_1 >> 3,uVar2,param_3);
  }
  return;
}




void FUN_18000ff10(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,undefined1 param_4)

{
  bool bVar1;
  undefined1 local_res20 [8];
  
  local_res20[0] = param_4;
  bVar1 = FUN_1800096d0(local_res20,param_2,param_1);
  if (bVar1) {
    FUN_180010970(param_2,param_1);
  }
  bVar1 = FUN_1800096d0(local_res20,param_3,param_2);
  if (bVar1) {
    FUN_180010970(param_3,param_2);
    bVar1 = FUN_1800096d0(local_res20,param_2,param_1);
    if (bVar1) {
      FUN_180010970(param_2,param_1);
    }
  }
  return;
}




void FUN_18000ffb0(void *param_1,longlong param_2,longlong param_3)

{
  FUN_18000fac0(param_1,param_2,param_3);
  return;
}




void FUN_18000fff0(void *param_1,longlong param_2,longlong param_3)

{
  undefined1 local_18 [24];
  
  FUN_1800033b0(local_18);
  FUN_18000ffb0(param_1,param_2,param_3);
  return;
}




undefined8 *
FUN_180010040(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,undefined1 param_4)

{
  bool bVar1;
  undefined1 local_res20 [8];
  ulonglong *local_38;
  ulonglong *local_30;
  ulonglong *local_28;
  ulonglong *local_20;
  ulonglong *local_18;
  
  local_18 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 4);
  local_res20[0] = param_4;
  FUN_18000fbd0(param_2,local_18,param_3 + -1,param_4);
  local_38 = local_18;
  local_30 = local_18 + 1;
  while (((param_2 < local_38 && (bVar1 = FUN_1800096d0(local_res20,local_38 + -1,local_38), !bVar1)
          ) && (bVar1 = FUN_1800096d0(local_res20,local_38,local_38 + -1), !bVar1))) {
    local_38 = local_38 + -1;
  }
  while (((local_30 < param_3 && (bVar1 = FUN_1800096d0(local_res20,local_30,local_38), !bVar1)) &&
         (bVar1 = FUN_1800096d0(local_res20,local_38,local_30), !bVar1))) {
    local_30 = local_30 + 1;
  }
  local_20 = local_30;
  local_28 = local_38;
  do {
    while (param_3 <= local_20) {
LAB_180010222:
      for (; param_2 < local_28; local_28 = local_28 + -1) {
        bVar1 = FUN_1800096d0(local_res20,local_28 + -1,local_38);
        if (!bVar1) {
          bVar1 = FUN_1800096d0(local_res20,local_38,local_28 + -1);
          if (bVar1) break;
          local_38 = local_38 + -1;
          if (local_38 != local_28 + -1) {
            FUN_180010970(local_38,local_28 + -1);
          }
        }
      }
      if ((local_28 == param_2) && (local_20 == param_3)) {
        FUN_18000fa20(param_1,&local_38,&local_30);
        return param_1;
      }
      if (local_28 == param_2) {
        if (local_30 != local_20) {
          FUN_180010970(local_38,local_30);
        }
        local_30 = local_30 + 1;
        FUN_180010970(local_38,local_20);
        local_38 = local_38 + 1;
        local_20 = local_20 + 1;
      }
      else if (local_20 == param_3) {
        local_28 = local_28 + -1;
        local_38 = local_38 + -1;
        if (local_28 != local_38) {
          FUN_180010970(local_28,local_38);
        }
        local_30 = local_30 + -1;
        FUN_180010970(local_38,local_30);
      }
      else {
        local_28 = local_28 + -1;
        FUN_180010970(local_20,local_28);
        local_20 = local_20 + 1;
      }
    }
    bVar1 = FUN_1800096d0(local_res20,local_38,local_20);
    if (!bVar1) {
      bVar1 = FUN_1800096d0(local_res20,local_20,local_38);
      if (bVar1) goto LAB_180010222;
      if (local_30 == local_20) {
        local_30 = local_30 + 1;
      }
      else {
        FUN_180010970(local_30,local_20);
        local_30 = local_30 + 1;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}




undefined1 FUN_1800103f0(undefined1 param_1)

{
  return param_1;
}




void FUN_180010400(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  longlong local_res10;
  longlong local_28;
  
  lVar4 = (longlong)(param_3 - 1) >> 1;
  local_28 = param_2;
  while (lVar2 = local_28, local_28 < lVar4) {
    lVar1 = local_28 * 2;
    local_28 = lVar1 + 2;
    bVar3 = FUN_1800096d0(&param_5,(ulonglong *)(param_1 + local_28 * 8),
                          (ulonglong *)(param_1 + -8 + local_28 * 8));
    if (bVar3) {
      local_28 = lVar1 + 1;
    }
    puVar5 = (undefined8 *)FUN_1800032f0(param_1 + local_28 * 8);
    *(undefined8 *)(param_1 + lVar2 * 8) = *puVar5;
  }
  local_res10 = local_28;
  if ((local_28 == lVar4) &&
     ((param_3 & 1 ^ (longlong)param_3 >> 0x3f) == (longlong)param_3 >> 0x3f)) {
    puVar5 = (undefined8 *)FUN_1800032f0(param_1 + -8 + param_3 * 8);
    *(undefined8 *)(param_1 + local_28 * 8) = *puVar5;
    local_res10 = param_3 - 1;
  }
  puVar6 = (ulonglong *)FUN_1800032f0(param_4);
  FUN_180010650(param_1,local_res10,param_2,puVar6);
  return;
}




void FUN_180010560(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1800032f0(param_1);
  *param_3 = *puVar1;
  uVar2 = FUN_1800032f0(param_4);
  FUN_180010400(param_1,0,param_2 - param_1 >> 3,uVar2,param_5);
  return;
}




void FUN_1800105d0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_18 [3];
  
  if (1 < param_2 - param_1 >> 3) {
    lVar1 = param_2 + -8;
    puVar2 = (undefined8 *)FUN_1800032f0(lVar1);
    local_18[0] = *puVar2;
    uVar3 = FUN_1800032f0(local_18);
    FUN_180010560(param_1,lVar1,(undefined8 *)lVar1,uVar3,param_3);
  }
  return;
}




void FUN_180010650(longlong param_1,longlong param_2,longlong param_3,ulonglong *param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong local_res10;
  longlong local_18;
  
  lVar2 = param_2 + -1;
  local_res10 = param_2;
  while (local_18 = lVar2 >> 1, param_3 < local_res10) {
    bVar1 = FUN_1800096d0(&stack0x00000028,(ulonglong *)(param_1 + local_18 * 8),param_4);
    if (!bVar1) break;
    puVar3 = (undefined8 *)FUN_1800032f0(param_1 + local_18 * 8);
    *(undefined8 *)(param_1 + local_res10 * 8) = *puVar3;
    lVar2 = local_18 + -1;
    local_res10 = local_18;
  }
  puVar3 = (undefined8 *)FUN_1800032f0(param_4);
  *(undefined8 *)(param_1 + local_res10 * 8) = *puVar3;
  return;
}




void FUN_180010710(undefined8 *param_1,undefined8 *param_2)

{
  FUN_180010ae0(param_1,*param_2);
  return;
}




void FUN_180010740(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined8 local_res10;
  
  for (local_res10 = param_2; 1 < local_res10 - param_1 >> 3; local_res10 = local_res10 + -8) {
    FUN_1800105d0(param_1,local_res10,param_3);
  }
  return;
}




void FUN_1800107a0(ulonglong *param_1,ulonglong *param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  ulonglong *local_res8;
  ulonglong *local_res10;
  longlong local_res18;
  ulonglong *local_20;
  ulonglong *local_18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  while ((lVar1 = (longlong)local_res10 - (longlong)local_res8 >> 3, 0x20 < lVar1 &&
         (0 < local_res18))) {
    FUN_180010040(&local_20,local_res8,local_res10,param_4);
    local_res18 = (local_res18 >> 1) + (local_res18 >> 2);
    if ((longlong)local_20 - (longlong)local_res8 >> 3 <
        (longlong)local_res10 - (longlong)local_18 >> 3) {
      FUN_1800107a0(local_res8,local_20,local_res18,param_4);
      local_res8 = local_18;
    }
    else {
      FUN_1800107a0(local_18,local_res10,local_res18,param_4);
      local_res10 = local_20;
    }
  }
  if (lVar1 < 0x21) {
    if (1 < lVar1) {
      FUN_18000fd30(local_res8,local_res10,param_4);
    }
  }
  else {
    FUN_18000fe70((longlong)local_res8,(longlong)local_res10,param_4);
    FUN_180010740((longlong)local_res8,(longlong)local_res10,param_4);
  }
  return;
}




undefined8 *
FUN_1800108f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  undefined8 local_10 [2];
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  std::_Enable_shared_from_this<class___ExceptionPtr,class___ExceptionPtr>
            ((shared_ptr<class___ExceptionPtr> *)&local_res10,(__ExceptionPtr *)&local_res18);
  plVar1 = (longlong *)FUN_180009440(&local_res18);
  plVar2 = (longlong *)FUN_180009440(&local_res10);
  local_10[0] = FUN_18000fb80(plVar2,plVar1,local_res20);
  FUN_180010710(&local_res10,local_10);
  *param_1 = local_res10;
  return param_1;
}




void FUN_180010970(undefined8 *param_1,undefined8 *param_2)

{
  swap<>(param_1,param_2);
  return;
}




void FUN_1800109a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_1800109d0(param_1,param_2,local_18);
  return;
}




void FUN_1800109d0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  std::_Enable_shared_from_this<class___ExceptionPtr,class___ExceptionPtr>
            ((shared_ptr<class___ExceptionPtr> *)&local_res8,(__ExceptionPtr *)&local_res10);
  puVar2 = (ulonglong *)FUN_180009440(&local_res8);
  puVar3 = (ulonglong *)FUN_180009440(&local_res10);
  uVar1 = FUN_1800103f0(local_res18);
  FUN_1800107a0(puVar2,puVar3,(longlong)puVar3 - (longlong)puVar2 >> 3,uVar1);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::swap<char * __ptr64,void>(char * __ptr64 & __ptr64,char * __ptr64 & __ptr64)
    void __cdecl std::swap<struct std::_Container_proxy * __ptr64>(struct std::_Container_proxy *
   __ptr64 & __ptr64,struct std::_Container_proxy * __ptr64 & __ptr64)
    void __cdecl std::swap<class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned
   char> > * __ptr64>(class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> >
   * __ptr64 & __ptr64,class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char>
   > * __ptr64 & __ptr64)
    void __cdecl std::swap<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState * __ptr64> > > *
   __ptr64>(class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned
   char,class Concurrency::details::_CancellationTokenState * __ptr64> > > * __ptr64 & __ptr64,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState * __ptr64> > > * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release, Visual Studio 2015 Debug, Visual
   Studio 2015 Release */

void swap<>(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_18 [3];
  
  puVar1 = (undefined8 *)FUN_1800032f0(param_1);
  local_18[0] = *puVar1;
  puVar1 = (undefined8 *)FUN_1800032f0(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_1800032f0(local_18);
  *param_2 = *puVar1;
  return;
}




ios_base * FUN_180010aa0(ios_base *param_1,uint param_2)

{
  FUN_18000f450(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180010ae0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800032f0(param_2);
  *param_1 = uVar1;
  return;
}




undefined * FUN_180010b10(void)

{
  return &DAT_18003c200;
}




void FUN_180010b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180010b10();
  __stdio_common_vswscanf(*puVar1,param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}




undefined4
FUN_180010b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180010b20(param_1,param_2,0,&local_res18);
  return uVar1;
}




undefined8 * FUN_180010bc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18001f400(param_1,param_2,param_3);
  *param_1 = CLocationGenOneByOne::vftable;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CLocationGenOneByOne::vftable;
  ~ios_base(this);
  return;
}




ulonglong FUN_180010c60(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x18) + *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x10) < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return uVar1;
}




void FUN_180010cc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18001f3c0(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




ios_base * FUN_180010d00(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 *
FUN_180010d40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001f400(param_1,param_3,param_4);
  *param_1 = CLocationGenOneByOneWithinSingleCylinder::vftable;
  param_1[3] = *param_2;
  param_1[4] = param_3;
  FUN_180010ec0((longlong)param_1);
  return param_1;
}




void FUN_180010dc0(ios_base *param_1)

{
  *(undefined ***)param_1 = CLocationGenOneByOneWithinSingleCylinder::vftable;
  FUN_180026c40();
  std::ios_base::~ios_base(param_1);
  return;
}




undefined8 FUN_180010e10(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(ulonglong *)(param_1 + 0x20) < *(ulonglong *)(param_1 + 8)) ||
     (*(ulonglong *)(param_1 + 0x10) <= *(ulonglong *)(param_1 + 0x20))) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  }
  return uVar1;
}




void FUN_180010e80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18001f3c0(param_1,param_2,param_3);
  FUN_180010ec0(param_1);
  return;
}




void FUN_180010ec0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_18;
  
  uVar1 = (ulonglong)(uint)(*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c));
  local_18 = *(ulonglong *)(param_1 + 8) / uVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 8) % uVar1 != 0) {
    local_18 = local_18 + 1;
  }
  *(ulonglong *)(param_1 + 0x10) = local_18 * uVar1;
  return;
}




ios_base * FUN_180010f50(ios_base *param_1,uint param_2)

{
  FUN_180010dc0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180010f90(undefined8 *param_1)

{
  FUN_180001ac0(param_1);
  *param_1 = CNTFSBlockParser::vftable;
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CNTFSBlockParser::vftable;
  FUN_180001ae0((undefined8 *)this);
  return;
}




void FUN_180011010(undefined8 param_1,void *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined6 extraout_var;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_220 = 0xfffffffffffffffe;
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_248;
  FUN_180011980(local_218);
  bVar1 = FUN_1800119c0(local_218,param_2);
  if (bVar1) {
    FUN_180001a20((longlong)param_4,4);
    bVar2 = FUN_180011b90((longlong)local_218);
    FUN_180001a60((longlong)param_4,(uint)bVar2);
    uVar5 = FUN_180011bb0((longlong)local_218);
    FUN_180001aa0((longlong)param_4,uVar5);
    uVar4 = FUN_180006700((longlong)local_218);
    FUN_180002510((longlong)param_4,(ulonglong)uVar4);
    FUN_180001a80(param_4,param_3);
    uVar3 = FUN_180011880((longlong)local_218);
    FUN_180001a00((longlong)param_4,(int)CONCAT62(extraout_var,uVar3));
    local_224 = 0;
    FUN_1800119b0();
  }
  else {
    local_228 = 0xfffffffa;
    FUN_1800119b0();
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_248);
  return;
}




void FUN_180011150(undefined8 param_1,void *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined8 local_228;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_228 = 0xfffffffffffffffe;
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_258;
  FUN_180011980(local_218);
  FUN_1800119c0(local_218,param_2);
  iVar1 = FUN_180011260(param_1,param_3,param_4,(longlong)local_218);
  if (iVar1 == 0) {
    iVar1 = FUN_180011560(param_1,param_3,param_4,(longlong)local_218);
    if (iVar1 == 0) {
      local_234 = 0xfffffff1;
      FUN_1800119b0();
    }
    else {
      local_230 = 0;
      FUN_1800119b0();
    }
  }
  else {
    local_238 = 0xfffffff1;
    FUN_1800119b0();
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180011260(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_1278 [32];
  undefined4 local_1258;
  longlong local_1250;
  longlong local_1248;
  longlong local_1240;
  longlong local_1238;
  longlong local_1230;
  undefined8 local_1228;
  undefined1 local_1218 [512];
  undefined1 local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x18001127e;
  local_1228 = 0xfffffffffffffffe;
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_1278;
  local_1258 = 0;
  local_1250 = FUN_180011bb0(param_4);
  local_1250 = param_3 - local_1250;
  if (-1 < local_1250) {
    local_1248 = *(longlong *)(param_2 + 8);
    iVar3 = (**(code **)(local_1248 + 8))(param_2 + 8,local_1018,local_1250,1);
    if ((iVar3 != 0) && (cVar1 = FUN_180011e30(local_1018), cVar1 != '\0')) {
      FUN_180011980(local_1218);
      bVar2 = FUN_1800119c0(local_1218,local_1018);
      if (bVar2) {
        local_1240 = FUN_180011bb0((longlong)local_1218);
        lVar4 = FUN_180011bb0(param_4);
        if (local_1240 == lVar4) {
          local_1238 = FUN_180011bd0((longlong)local_1218);
          lVar4 = FUN_180011bd0(param_4);
          if (local_1238 == lVar4) {
            local_1230 = FUN_180011b10((longlong)local_1218);
            lVar4 = FUN_180011b10(param_4);
            if (local_1230 == lVar4) {
              lVar4 = FUN_180011bb0((longlong)local_1218);
              if (lVar4 == 0) {
                FUN_1800119b0();
              }
              else {
                local_1258 = 1;
                FUN_1800119b0();
              }
              goto LAB_180011416;
            }
          }
        }
        FUN_1800119b0();
      }
      else {
        FUN_1800119b0();
      }
    }
  }
LAB_180011416:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1278);
  return;
}




undefined4 FUN_180011440(undefined8 param_1,int *param_2,int param_3)

{
  bool bVar1;
  ulonglong uVar2;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 0;
  while( true ) {
    if (3 < local_18) {
      bVar1 = FUN_180015060(param_2,param_3);
      if ((((bVar1) &&
           (bVar1 = FUN_1800150a0((int *)((longlong)param_2 + (longlong)param_3),param_3), bVar1))
          && (bVar1 = FUN_1800150e0((int *)((longlong)param_2 + (longlong)(param_3 << 1)),param_3),
             bVar1)) &&
         (bVar1 = FUN_1800151e0((int *)((longlong)param_2 + (longlong)(param_3 * 3)),param_3), bVar1
         )) {
        local_14 = 1;
      }
      return local_14;
    }
    uVar2 = FUN_180014610((int *)((longlong)param_2 + (longlong)(local_18 * param_3)),param_3);
    if ((uVar2 & 0xff) == 0) break;
    local_18 = local_18 + 1;
  }
  return 0;
}




undefined4 FUN_180011560(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 local_78 [4];
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28 [3];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_74 = 0;
  iVar2 = FUN_180011a10(param_4);
  local_70 = (longlong)iVar2;
  uVar4 = FUN_1800032f0(local_78);
  FUN_1800117c0(local_28,local_70 << 2,uVar4);
  local_58 = FUN_180011b10(param_4);
  bVar1 = FUN_180011b90(param_4);
  local_60 = local_58 * (ulonglong)bVar1 + param_3;
  local_50 = local_70 << 2;
  uVar3 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
  local_48 = (ulonglong)uVar3;
  local_40 = local_50 / local_48;
  lVar5 = FUN_180003900(local_28,0);
  local_38 = *(longlong *)(param_2 + 8);
  (**(code **)(local_38 + 8))(param_2 + 8,lVar5,local_60,local_40 & 0xffffffff);
  piVar6 = (int *)FUN_180003900(local_28,0);
  iVar2 = FUN_180011440(param_1,piVar6,(int)local_70);
  if (iVar2 == 0) {
    local_30 = FUN_180011b30(param_4);
    bVar1 = FUN_180011b90(param_4);
    local_60 = local_30 * (ulonglong)bVar1 + param_3;
    piVar6 = (int *)FUN_180003900(local_28,0);
    iVar2 = FUN_180011440(param_1,piVar6,(int)local_70);
    if (iVar2 != 0) {
      local_74 = 1;
    }
  }
  else {
    local_74 = 1;
  }
  local_68 = local_74;
  FUN_1800038d0(local_28);
  return local_68;
}




undefined8 * FUN_180011740(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1800032f0(param_3);
  FUN_180003860(param_1);
  return param_1;
}




undefined8 * FUN_180011780(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  
  uVar1 = FUN_1800032f0(param_2);
  FUN_180011740(param_1,(ulonglong)local_18,uVar1);
  return param_1;
}




undefined8 * FUN_1800117c0(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_180011780(param_1,param_3);
  uVar1 = FUN_180011890(param_1,param_2);
  if ((uVar1 & 0xff) != 0) {
    puVar2 = (undefined8 *)FUN_180003ca0(param_1);
    uVar3 = FUN_180003de0(param_1,(void *)*puVar2,param_2);
    puVar2 = (undefined8 *)FUN_180003cc0(param_1);
    *puVar2 = uVar3;
  }
  return param_1;
}




ios_base * FUN_180011840(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined2 FUN_180011880(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0xb);
}




ulonglong FUN_180011890(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  puVar2 = (undefined8 *)FUN_180003ca0(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_180003cc0(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_180003c80(param_1);
  *puVar2 = 0;
  if (param_2 == 0) {
    uVar3 = (ulonglong)puVar2 & 0xffffffffffffff00;
  }
  else {
    _Var4 = FUN_180003fa0(param_1);
    if (_Var4 < param_2) {
      FUN_180003ec0();
    }
    uVar5 = FUN_180003c60(param_1);
    uVar5 = allocate(uVar5,param_2);
    puVar2 = (undefined8 *)FUN_180003ca0(param_1);
    *puVar2 = uVar5;
    puVar2 = (undefined8 *)FUN_180003ca0(param_1);
    puVar6 = (undefined8 *)FUN_180003cc0(param_1);
    *puVar6 = *puVar2;
    plVar7 = (longlong *)FUN_180003ca0(param_1);
    lVar1 = *plVar7;
    plVar7 = (longlong *)FUN_180003c80(param_1);
    *plVar7 = lVar1 + param_2;
    uVar3 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  }
  return uVar3;
}




void * FUN_180011980(void *param_1)

{
  memset(param_1,0,0x200);
  return param_1;
}




void FUN_1800119b0(void)

{
  return;
}




bool FUN_1800119c0(void *param_1,void *param_2)

{
  char cVar1;
  
  cVar1 = FUN_180011bf0(param_2);
  if (cVar1 != '\0') {
    memcpy(param_1,param_2,0x200);
  }
  return cVar1 != '\0';
}




int FUN_180011a10(longlong param_1)

{
  int iVar1;
  
  if (((int)*(char *)(param_1 + 0x40) & 0x80U) == 0) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      iVar1 = 0x400;
    }
    else {
      iVar1 = (int)*(char *)(param_1 + 0x40) * (uint)*(ushort *)(param_1 + 0xb) *
              (uint)*(byte *)(param_1 + 0xd);
    }
  }
  else {
    iVar1 = 1 << (~*(byte *)(param_1 + 0x40) + 1 & 0x1f);
  }
  return iVar1;
}




int FUN_180011a90(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if ((uVar1 & 0x80) == 0) {
    if ((byte)uVar1 == 0) {
      iVar2 = 0x1000;
    }
    else {
      iVar2 = (uVar1 & 0xff) * (uint)*(ushort *)(param_1 + 0xb) * (uint)*(byte *)(param_1 + 0xd);
    }
  }
  else {
    iVar2 = 1 << (~(byte)uVar1 + 1 & 0x1f);
  }
  return iVar2;
}




undefined8 FUN_180011b10(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}




undefined8 FUN_180011b30(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}




void FUN_180011b50(longlong param_1,void *param_2)

{
  memcpy(param_2,(void *)(param_1 + 3),8);
  return;
}




undefined1 FUN_180011b90(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}




undefined8 FUN_180011bb0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_180011bd0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}




/* WARNING: Removing unreachable block (ram,0x000180011cf6) */

void FUN_180011bf0(void *param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218 [3];
  undefined1 local_215 [509];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_238;
  memcpy(local_218,param_1,0x200);
  if (param_1 != (void *)0x0) {
    memcmp(local_215,"NTFS    ",8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_238);
  return;
}




void FUN_180011e30(void *param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218 [3];
  undefined1 local_215 [509];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_238;
  memcpy(local_218,param_1,0x200);
  memcmp(local_215,"NTFS    ",8);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_238);
  return;
}




void FUN_180011ed0(void)

{
  return;
}




undefined4 FUN_180011ee0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_18;
  
  local_18 = 1;
  bVar1 = FUN_1800145c0(param_1);
  if (bVar1) {
    iVar2 = FUN_1800149d0(param_1);
    lVar3 = FUN_180014b50(param_1,iVar2,0xa0,0);
    if (lVar3 == 0) {
      local_18 = 0;
    }
    else {
      bVar1 = FUN_1800156e0(lVar3);
      if (bVar1) {
        local_18 = 0;
      }
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}




undefined8 FUN_180011f70(undefined8 param_1)

{
  return param_1;
}




void FUN_180011f90(void)

{
  return;
}




void FUN_180011fa0(int *param_1)

{
  FUN_180012340(param_1,(ushort *)L"$MFT");
  return;
}




void FUN_180011fd0(int *param_1)

{
  FUN_180012340(param_1,(ushort *)L"$MFTMirr");
  return;
}




void FUN_180012000(int *param_1)

{
  FUN_180012340(param_1,(ushort *)L"$LogFile");
  return;
}




void FUN_180012030(int *param_1)

{
  FUN_180012340(param_1,(ushort *)L"$Bitmap");
  return;
}




undefined8 FUN_180012060(int *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_180012200(param_1);
  if (iVar1 == -1) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_180014f40(param_1,0x10,0);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_1800167f0(lVar3);
      if (((uVar2 & 4) == 0) || ((uVar2 & 2) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}




void FUN_1800120e0(int *param_1,int param_2)

{
  FUN_1800122e0(param_1,param_2,(ushort *)L"$MFT");
  return;
}




void FUN_180012110(int *param_1,int param_2)

{
  FUN_1800122e0(param_1,param_2,(ushort *)L"$MFTMirr");
  return;
}




void FUN_180012140(int *param_1,int param_2)

{
  FUN_1800122e0(param_1,param_2,(ushort *)L"$LogFile");
  return;
}




void FUN_180012170(int *param_1,int param_2)

{
  FUN_1800122e0(param_1,param_2,(ushort *)L"$AttrDef");
  return;
}




void FUN_1800121a0(int *param_1,int param_2)

{
  FUN_1800122e0(param_1,param_2,(ushort *)L"$UpCase");
  return;
}




void FUN_1800121d0(int *param_1,int param_2)

{
  FUN_1800122e0(param_1,param_2,(ushort *)L"$Volume");
  return;
}




undefined4 FUN_180012200(int *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  int local_18;
  
  bVar1 = FUN_180014f20((longlong)param_1);
  if (((bVar1) && (cVar2 = FUN_180014f80((longlong)param_1), cVar2 == '\0')) &&
     (lVar3 = FUN_180014f40(param_1,0x30,0), lVar3 != 0)) {
    for (local_18 = 0; local_18 < 0xf; local_18 = local_18 + 1) {
      uVar4 = FUN_180015e50(lVar3,(ushort *)(&PTR_u__MFT_18003a018)[(longlong)local_18 * 2]);
      if ((uVar4 & 0xff) != 0) {
        return *(undefined4 *)(&DAT_18003a010 + (longlong)local_18 * 0x10);
      }
    }
  }
  return 0xffffffff;
}




ulonglong FUN_1800122e0(int *param_1,int param_2,ushort *param_3)

{
  ulonglong uVar1;
  int local_28 [10];
  
  FUN_180014dd0(local_28,param_1,param_2,'\0');
  uVar1 = FUN_180012340(local_28,param_3);
  FUN_1800144f0((longlong)local_28);
  return uVar1 & 0xffffffff;
}




undefined8 FUN_180012340(int *param_1,ushort *param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  bVar1 = FUN_180014f20((longlong)param_1);
  if (bVar1) {
    lVar3 = FUN_180014f40(param_1,0x10,0);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_1800167f0(lVar3);
      bVar1 = false;
      if (((uVar2 & 4) != 0) && ((uVar2 & 2) != 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = FUN_180014f40(param_1,0x30,0);
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar5 = FUN_180015e50(lVar3,param_2);
          if ((uVar5 & 0xff) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}




undefined8 * FUN_180012420(undefined8 *param_1)

{
  FUN_180013b70(param_1);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >::~_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >(void) __ptr64
    public: __cdecl std::_String_alloc<struct std::_String_base_types<unsigned short,class
   std::allocator<unsigned short> > >::~_String_alloc<struct std::_String_base_types<unsigned
   short,class std::allocator<unsigned short> > >(void) __ptr64
    public: __cdecl std::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >::~_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void ~_String_alloc<>(undefined8 param_1)

{
  FUN_1800134b0(param_1);
  FUN_180013c00(param_1);
  return;
}




void FUN_1800124f0(undefined8 param_1,char *param_2,int param_3,longlong param_4)

{
  bool bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong local_48;
  longlong local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_40[1] = 0xfffffffffffffffe;
  uVar2 = FUN_180012a80(param_2,param_3);
  if ((uVar2 & 0xff) != 0) {
    FUN_180013b70(local_18);
    FUN_180012610((longlong)param_2,param_3,local_18);
    FUN_1800090a0(local_40);
    local_48 = 0;
    plVar3 = FUN_180014150(local_18,local_40 + 2);
    local_40[0] = *plVar3;
    while( true ) {
      plVar3 = FUN_180014300(local_18,&local_20);
      bVar1 = FUN_180009320(local_40,plVar3);
      if (!bVar1) break;
      plVar3 = (longlong *)FUN_180013c30(local_40);
      local_48 = *plVar3;
      if (local_48 != 0) {
        *(longlong *)(local_48 + 8) = *(longlong *)(local_48 + 8) + param_4;
        FUN_180014390(param_1,&local_48);
      }
      FUN_180013c70(local_40,&local_28);
    }
    FUN_180013c00(local_18);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180012724) */
/* WARNING: Removing unreachable block (ram,0x00018001282e) */
/* WARNING: Removing unreachable block (ram,0x000180012848) */
/* WARNING: Removing unreachable block (ram,0x0001800127e5) */
/* WARNING: Removing unreachable block (ram,0x0001800127ff) */
/* WARNING: Removing unreachable block (ram,0x00018001282c) */
/* WARNING: Removing unreachable block (ram,0x000180012799) */
/* WARNING: Removing unreachable block (ram,0x0001800127b3) */
/* WARNING: Removing unreachable block (ram,0x0001800127e0) */
/* WARNING: Removing unreachable block (ram,0x00018001278a) */
/* WARNING: Removing unreachable block (ram,0x00018001275c) */
/* WARNING: Removing unreachable block (ram,0x000180012767) */
/* WARNING: Removing unreachable block (ram,0x000180012785) */
/* WARNING: Removing unreachable block (ram,0x00018001274c) */
/* WARNING: Removing unreachable block (ram,0x00018001273c) */
/* WARNING: Removing unreachable block (ram,0x0001800128a5) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_180012610(longlong param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  undefined8 *local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined8 *local_10;
  
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  local_18 = 0;
  for (local_38 = 0; (local_38 < param_2 && (*(char *)(param_1 + local_38) != '\0'));
      local_38 = (uint)bVar1 + local_38 + 1) {
    bVar1 = *(byte *)(param_1 + local_38) & 0xf;
    local_20 = 0;
    local_40 = 0;
    memcpy(&local_20,(void *)(param_1 + 1 + (longlong)local_38),(ulonglong)bVar1);
    memcpy(&local_40,(void *)(param_1 + local_38 + 1 + (ulonglong)bVar1),0);
    local_34 = 0xffffffff;
    local_30 = (undefined8 *)operator_new(0x18);
    *local_30 = 0xffffffffffffffff;
    local_30[1] = local_18;
    local_30[2] = local_20;
    local_10 = local_30;
    FUN_180014390(param_3,&local_30);
    local_28 = local_28 + local_40;
    local_18 = local_18 + local_20;
  }
  return;
}




void FUN_180012960(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_48 = (undefined8 *)0x0;
  local_40 = (undefined8 *)0x0;
  FUN_1800090a0(&local_38);
  plVar2 = FUN_180014150(param_1,&local_28);
  local_38 = *plVar2;
  while( true ) {
    plVar2 = FUN_180014300(param_1,local_18);
    bVar1 = FUN_180009320(&local_38,plVar2);
    if (!bVar1) break;
    plVar2 = (longlong *)FUN_180013c30(&local_38);
    local_40 = (undefined8 *)*plVar2;
    if (local_40 != (undefined8 *)0x0) {
      local_48 = (undefined8 *)operator_new(0x18);
      *local_48 = *local_40;
      local_48[1] = local_40[1];
      local_48[2] = local_40[2];
      local_30 = local_48;
      FUN_180014390(param_2,&local_48);
      local_48 = (undefined8 *)0x0;
    }
    local_40 = (undefined8 *)0x0;
    FUN_180013c70(&local_38,&local_20);
  }
  return;
}




longlong FUN_180012a80(char *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int local_14;
  char *local_10;
  
  local_14 = 0;
  local_10 = param_1;
  while( true ) {
    if (*local_10 == '\0') {
      return 1;
    }
    uVar2 = (int)((int)*local_10 + ((int)*local_10 >> 0x1f & 0xfU)) >> 4;
    bVar1 = *local_10 >> 0x1f & 0xf;
    bVar1 = (*local_10 + bVar1 & 0xf) - bVar1;
    if ((4 < (byte)uVar2) || (4 < bVar1)) break;
    local_14 = (uVar2 & 0xff) + local_14 + 1 + (uint)bVar1;
    if (param_2 <= local_14) {
      return (ulonglong)(uint3)((uint)param_2 >> 8) << 8;
    }
    local_10 = local_10 + (int)(bVar1 + 1 + (uVar2 & 0xff));
  }
  return 0;
}




longlong FUN_180012b50(char *param_1)

{
  char cVar1;
  byte bVar2;
  int local_24;
  int local_20 [2];
  char *local_18;
  
  local_24 = 0;
  local_20[1] = 8;
  for (local_18 = param_1; *local_18 != '\0';
      local_18 = local_18 +
                 (int)(bVar2 + 1 + ((int)((int)cVar1 + ((int)cVar1 >> 0x1f & 0xfU)) >> 4 & 0xffU)))
  {
    cVar1 = *local_18;
    bVar2 = *local_18 >> 0x1f & 0xf;
    bVar2 = (*local_18 + bVar2 & 0xf) - bVar2;
    local_20[0] = 0;
    memcpy(local_20,local_18 + 1,(ulonglong)bVar2);
    local_24 = local_24 + local_20[0];
  }
  return (longlong)local_24;
}




longlong FUN_180012c20(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_28 = 0;
  FUN_1800090a0(&local_38);
  local_30 = 0;
  plVar2 = FUN_180014150(param_1,&local_20);
  local_38 = *plVar2;
  while( true ) {
    plVar2 = FUN_180014300(param_1,local_10);
    bVar1 = FUN_180009320(&local_38,plVar2);
    if (!bVar1) break;
    plVar2 = (longlong *)FUN_180013c30(&local_38);
    local_30 = *plVar2;
    if (local_30 != 0) {
      local_28 = local_28 + *(longlong *)(local_30 + 0x10);
    }
    FUN_180013c70(&local_38,&local_18);
  }
  return local_28;
}




longlong FUN_180012ce0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  FUN_1800090a0(&local_30);
  plVar2 = FUN_180014150(param_1,&local_28);
  local_30 = *plVar2;
  while( true ) {
    plVar2 = FUN_180014300(param_1,local_18);
    bVar1 = FUN_180009320(&local_30,plVar2);
    if (!bVar1) {
      return -1;
    }
    plVar2 = (longlong *)FUN_180013c30(&local_30);
    plVar2 = (longlong *)*plVar2;
    if (((plVar2 != (longlong *)0x0) && (plVar2[1] <= param_2)) && (param_2 < plVar2[1] + plVar2[2])
       ) break;
    FUN_180013c70(&local_30,&local_20);
  }
  return (param_2 - plVar2[1]) + *plVar2;
}




void FUN_180012dd0(undefined8 param_1)

{
  FUN_1800142c0(param_1);
  return;
}




ulonglong FUN_180012e00(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_58 = FUN_1800143d0(param_1);
  uVar2 = FUN_1800143d0(param_2);
  if (local_58 == uVar2) {
    FUN_1800090a0(&local_68);
    FUN_1800090a0(&local_60);
    plVar3 = FUN_180014150(param_1,&local_38);
    local_68 = *plVar3;
    plVar3 = FUN_180014150(param_2,&local_30);
    local_60 = *plVar3;
    while( true ) {
      plVar3 = FUN_180014300(param_1,local_18);
      bVar1 = FUN_180009320(&local_68,plVar3);
      if (!bVar1) break;
      plVar3 = (longlong *)FUN_180013c30(&local_68);
      local_50 = *plVar3;
      plVar3 = (longlong *)FUN_180013c30(&local_60);
      uVar2 = *(ulonglong *)(*plVar3 + 8);
      if (*(ulonglong *)(local_50 + 8) != uVar2) {
LAB_180012f6d:
        return uVar2 & 0xffffffffffffff00;
      }
      puVar4 = (undefined8 *)FUN_180013c30(&local_68);
      local_48 = (ulonglong *)*puVar4;
      puVar4 = (undefined8 *)FUN_180013c30(&local_60);
      uVar2 = *(ulonglong *)*puVar4;
      if (*local_48 != uVar2) goto LAB_180012f6d;
      plVar3 = (longlong *)FUN_180013c30(&local_68);
      local_40 = *plVar3;
      plVar3 = (longlong *)FUN_180013c30(&local_60);
      uVar2 = *(ulonglong *)(*plVar3 + 0x10);
      if (*(ulonglong *)(local_40 + 0x10) != uVar2) goto LAB_180012f6d;
      FUN_180013c70(&local_68,&local_28);
      FUN_180013c70(&local_60,&local_20);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  return uVar2;
}




undefined8 FUN_180012f90(undefined8 param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  cVar1 = FUN_180012dd0(param_1);
  if (cVar1 == '\0') {
    FUN_1800090a0(&local_30);
    plVar3 = FUN_180014150(param_1,&local_28);
    local_30 = *plVar3;
    while( true ) {
      plVar3 = FUN_180014300(param_1,local_18);
      bVar2 = FUN_180009320(&local_30,plVar3);
      if (!bVar2) break;
      plVar3 = (longlong *)FUN_180013c30(&local_30);
      plVar3 = (longlong *)*plVar3;
      if (((plVar3 != (longlong *)0x0) && (*plVar3 <= param_2)) && (param_2 < *plVar3 + plVar3[2]))
      {
        return CONCAT71((int7)((ulonglong)(*plVar3 + plVar3[2]) >> 8),1);
      }
      FUN_180013c70(&local_30,&local_20);
    }
  }
  return 0;
}




longlong FUN_180013080(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong local_30 [3];
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_30[1] = 0xffffffffffffffff;
  uVar2 = FUN_180012f90(param_1,param_2);
  if ((uVar2 & 0xff) != 0) {
    FUN_1800090a0(local_30);
    plVar3 = FUN_180014150(param_1,local_30 + 2);
    local_30[0] = *plVar3;
    while( true ) {
      plVar3 = FUN_180014300(param_1,local_10);
      bVar1 = FUN_180009320(local_30,plVar3);
      if (!bVar1) break;
      plVar3 = (longlong *)FUN_180013c30(local_30);
      plVar3 = (longlong *)*plVar3;
      if (((plVar3 != (longlong *)0x0) && (*plVar3 <= param_2)) && (param_2 < *plVar3 + plVar3[2]))
      {
        return (param_2 - *plVar3) + plVar3[1];
      }
      FUN_180013c70(local_30,&local_18);
    }
  }
  return -1;
}




void FUN_1800131b0(longlong param_1)

{
  char cVar1;
  undefined1 local_18;
  
  cVar1 = FUN_180012dd0(param_1);
  if (cVar1 == '\0') {
    FUN_180013a70(param_1,local_18);
  }
  return;
}




undefined8 * FUN_1800131f0(undefined8 param_1,undefined8 *param_2)

{
  FUN_180014150(param_1,param_2);
  return param_2;
}




undefined8 * FUN_180013220(undefined8 param_1,undefined8 *param_2)

{
  FUN_180014300(param_1,param_2);
  return param_2;
}




void FUN_180013250(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_38 = FUN_1800143d0(param_1);
  (**(code **)(*param_2 + 0x70))(param_2,&local_38,8);
  FUN_1800090a0(&local_48);
  plVar2 = FUN_180014150(param_1,&local_18);
  local_48 = *plVar2;
  while( true ) {
    plVar2 = FUN_180014300(param_1,local_10);
    bVar1 = FUN_180009320(&local_48,plVar2);
    if (!bVar1) break;
    plVar2 = (longlong *)FUN_180013c30(&local_48);
    local_40 = *plVar2;
    local_30 = *param_2;
    (**(code **)(local_30 + 0x70))(param_2,local_40,8);
    local_28 = *param_2;
    (**(code **)(local_28 + 0x70))(param_2,local_40 + 0x10,8);
    local_20 = *param_2;
    (**(code **)(local_20 + 0x70))(param_2,local_40 + 8,8);
    FUN_180013cc0(&local_48);
  }
  return;
}




void FUN_180013390(undefined8 param_1,longlong *param_2)

{
  void *local_48;
  longlong local_40;
  longlong local_38;
  void *local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_38 = 0;
  (**(code **)(*param_2 + 0x68))(param_2,&local_38,8);
  for (local_40 = 0; local_40 < local_38; local_40 = local_40 + 1) {
    local_48 = operator_new(0x18);
    local_28 = *param_2;
    local_30 = local_48;
    (**(code **)(local_28 + 0x68))(param_2,local_48,8);
    local_20 = *param_2;
    (**(code **)(local_20 + 0x68))(param_2,(longlong)local_48 + 0x10,8);
    local_18 = *param_2;
    (**(code **)(local_18 + 0x68))(param_2,(longlong)local_48 + 8,8);
    FUN_180014390(param_1,&local_48);
  }
  return;
}




void FUN_1800134b0(undefined8 param_1)

{
  FUN_1800134e0(param_1);
  return;
}




undefined1 FUN_1800134d0(void)

{
  return 0;
}




void FUN_1800134e0(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong local_38;
  void *local_30;
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_1800090a0(&local_38);
  plVar2 = FUN_180014150(param_1,&local_20);
  local_38 = *plVar2;
  while( true ) {
    plVar2 = FUN_180014300(param_1,local_10);
    bVar1 = FUN_180009320(&local_38,plVar2);
    if (!bVar1) break;
    puVar3 = (undefined8 *)FUN_180013c30(&local_38);
    local_30 = (void *)*puVar3;
    if (local_30 != (void *)0x0) {
      local_28 = local_30;
      free(local_30);
      local_30 = (void *)0x0;
    }
    FUN_180013c70(&local_38,&local_18);
  }
  FUN_1800141b0(param_1);
  return;
}




void FUN_180013590(longlong *param_1,longlong param_2)

{
  undefined8 local_res10;
  
  for (local_res10 = param_2; 0 < local_res10; local_res10 = local_res10 + -1) {
    FUN_180013cc0(param_1);
  }
  for (; local_res10 < 0; local_res10 = local_res10 + 1) {
    FUN_180013d10(param_1);
  }
  return;
}




_Container_proxy *
FUN_1800135f0(undefined8 param_1,_Container_proxy *param_2,_Container_proxy *param_3,
             undefined8 param_4)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  p_Var1 = FUN_180013da0(param_1,param_2,param_3);
  uVar2 = FUN_180003c60(param_1);
  uVar3 = FUN_1800032f0(param_4);
  uVar4 = FUN_1800032f0(p_Var1 + 0x10);
  construct<>(uVar2,uVar4,uVar3);
  return p_Var1;
}




void FUN_180013680(undefined8 param_1,void *param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800032f0(param_2);
  FUN_180008d20();
  FUN_1800032f0((longlong)param_2 + 8);
  FUN_180008d20();
  FUN_180014290(local_18,param_2,1);
  return;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<16>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<16>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x18;
  if (0xaaaaaaaaaaaaaaa < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




void FUN_180013740(undefined8 param_1,_Container_proxy *param_2,undefined8 param_3)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  _Container_proxy *p_Var3;
  
  p_Var1 = *(_Container_proxy **)(param_2 + 8);
  uVar2 = FUN_1800032f0(param_3);
  p_Var3 = FUN_1800135f0(param_1,param_2,p_Var1,uVar2);
  FUN_180013ee0(param_1,1);
  *(_Container_proxy **)(param_2 + 8) = p_Var3;
  *(_Container_proxy **)p_Var1 = p_Var3;
  return;
}




longlong *
FUN_1800137c0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5,ulonglong param_6)

{
  bool bVar1;
  bool bVar2;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *plVar3;
  longlong local_res18;
  longlong local_res20;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18 [3];
  
  if (param_6 < 2) {
    *param_2 = param_3;
    return param_2;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180013a30(&local_50,param_3,param_6 >> 1);
  FUN_1800137c0(param_1,&local_28,local_res18,local_50,param_5,param_6 >> 1);
  local_res18 = *extraout_RAX;
  FUN_1800137c0(param_1,&local_20,local_50,local_res20,param_5,param_6 - (param_6 >> 1));
  local_50 = *extraout_RAX_00;
  local_48 = local_res18;
  bVar2 = true;
  do {
    local_40 = (longlong *)FUN_180013c30(&local_res18);
    plVar3 = (longlong *)FUN_180013c30(&local_50);
    bVar1 = FUN_180013d30(param_5,plVar3,local_40);
    if (bVar1) {
      if (bVar2) {
        local_48 = local_50;
      }
      plVar3 = FUN_180013c70(&local_50,local_18);
      local_38 = *plVar3;
      local_30 = local_res18;
      FUN_1800143f0(param_1,local_res18,param_1,local_38);
      plVar3 = &local_res20;
      bVar2 = FUN_180009290(&local_50,plVar3);
      if (bVar2) {
        *param_2 = local_48;
        return plVar3;
      }
    }
    else {
      FUN_180013cc0(&local_res18);
      plVar3 = &local_50;
      bVar2 = FUN_180009290(&local_res18,plVar3);
      if (bVar2) {
        *param_2 = local_48;
        return plVar3;
      }
    }
    bVar2 = false;
  } while( true );
}




void FUN_180013a00(longlong *param_1,longlong param_2)

{
  FUN_180013590(param_1,param_2);
  return;
}




longlong * FUN_180013a30(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong local_res10;
  longlong local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_180013a00(&local_res10,param_3);
  *param_1 = local_res10;
  return param_1;
}




void FUN_180013a70(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res10 [24];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [3];
  
  local_res10[0] = param_2;
  puVar1 = (ulonglong *)FUN_180003cc0(param_1);
  plVar2 = FUN_180014300(param_1,&local_28);
  plVar3 = FUN_180014150(param_1,&local_20);
  FUN_1800137c0(param_1,local_18,*plVar3,*plVar2,local_res10,*puVar1);
  return;
}




undefined8 * FUN_180013af0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_180006e00(param_1);
  uVar1 = FUN_180013d80(param_1);
  puVar2 = (undefined8 *)FUN_180003ca0(param_1);
  *puVar2 = uVar1;
  return param_1;
}




undefined8 * FUN_180013b40(undefined8 *param_1)

{
  FUN_180013af0(param_1);
  return param_1;
}




undefined8 * FUN_180013b70(undefined8 *param_1)

{
  FUN_180013b40(param_1);
  return param_1;
}




void FUN_180013ba0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180003ca0(param_1);
  FUN_180013e60(param_1,(void *)*puVar1);
  return;
}




void FUN_180013bd0(undefined8 param_1)

{
  FUN_180013ba0(param_1);
  return;
}




void FUN_180013c00(undefined8 param_1)

{
  FUN_1800140c0(param_1);
  FUN_180013bd0(param_1);
  return;
}




void FUN_180013c30(longlong *param_1)

{
  FUN_18000a3e0(param_1);
  return;
}




undefined8 * FUN_180013c50(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 * FUN_180013c70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_180013cc0(param_1);
  *param_2 = uVar1;
  return param_2;
}




undefined8 * FUN_180013cc0(undefined8 *param_1)

{
  FUN_180013c50(param_1);
  return param_1;
}




longlong * FUN_180013ce0(longlong *param_1)

{
  *param_1 = *(longlong *)(*param_1 + 8);
  return param_1;
}




longlong * FUN_180013d10(longlong *param_1)

{
  FUN_180013ce0(param_1);
  return param_1;
}




bool FUN_180013d30(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  return *(longlong *)(*param_2 + 8) < *(longlong *)(*param_3 + 8);
}




void FUN_180013d80(undefined8 param_1)

{
  FUN_180013da0(param_1,(_Container_proxy *)0x0,(_Container_proxy *)0x0);
  return;
}




_Container_proxy *
FUN_180013da0(undefined8 param_1,_Container_proxy *param_2,_Container_proxy *param_3)

{
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  _Container_proxy *local_res10;
  _Container_proxy *local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  this = (allocator<struct_std::_Container_proxy> *)FUN_180003c60(param_1);
  p_Var1 = std::allocator<struct_std::_Container_proxy>::allocate(this,1);
  if (local_res10 == (_Container_proxy *)0x0) {
    local_res10 = p_Var1;
    local_res18[0] = p_Var1;
  }
  uVar2 = FUN_180003c60(param_1);
  uVar3 = FUN_1800032f0(p_Var1);
  construct<>(uVar2,uVar3,&local_res10);
  uVar3 = FUN_1800032f0(p_Var1 + 8);
  construct<>(uVar2,uVar3,local_res18);
  return p_Var1;
}




void FUN_180013e60(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_180013680(uVar1,param_2);
  return;
}




void FUN_180013e90(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_1800032f0((longlong)param_2 + 0x10);
  FUN_180008d20();
  FUN_180013680(uVar1,param_2);
  return;
}




void FUN_180013ee0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_180014370(param_1);
  plVar2 = (longlong *)FUN_180003cc0(param_1);
  if ((lVar1 - *plVar2) - 1U < param_2) {
    std::_Xlength_error("list<T> too long");
  }
  plVar2 = (longlong *)FUN_180003cc0(param_1);
  *plVar2 = *plVar2 + param_2;
  return;
}




void FUN_180013f60(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  char cVar1;
  
  FUN_180003c60(param_3);
  FUN_180003c60(param_1);
  cVar1 = FUN_1800134d0();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  FUN_180013fe0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




void FUN_180013fe0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_1800032f0(param_3);
  if (param_1 != lVar2) {
    FUN_180013ee0(param_1,param_6);
    plVar3 = (longlong *)FUN_180003cc0(param_3);
    *plVar3 = *plVar3 - param_6;
  }
  **(longlong **)(param_4 + 8) = param_5;
  **(longlong **)(param_5 + 8) = param_2;
  **(longlong **)(param_2 + 8) = param_4;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(param_5 + 8) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_4 + 8) = uVar1;
  return;
}




void FUN_1800140c0(undefined8 param_1)

{
  FUN_1800141b0(param_1);
  return;
}




undefined8 * FUN_1800140e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180003ca0(param_1);
  FUN_180009000(param_2,*puVar1);
  return param_2;
}




/* Library Function - Single Match
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

_Container_proxy * __thiscall
std::allocator<struct_std::_Container_proxy>::allocate
          (allocator<struct_std::_Container_proxy> *this,__uint64 param_1)

{
  __uint64 _Var1;
  _Container_proxy *p_Var2;
  
  _Var1 = _Get_size_of_n<16>(param_1);
  p_Var2 = (_Container_proxy *)_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return p_Var2;
}




undefined8 * FUN_180014150(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_1800032f0(uVar1);
  puVar2 = (undefined8 *)FUN_180003ca0(param_1);
  FUN_180009060(param_2,*(undefined8 *)*puVar2);
  return param_2;
}




void FUN_1800141b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_180003ca0(param_1);
  local_38 = *(undefined8 **)*puVar1;
  puVar1 = (undefined8 *)FUN_180003ca0(param_1);
  puVar2 = (undefined8 *)FUN_180003ca0(param_1);
  *(undefined8 *)*puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_180003ca0(param_1);
  plVar3 = (longlong *)FUN_180003ca0(param_1);
  *(undefined8 *)(*plVar3 + 8) = *puVar1;
  puVar1 = (undefined8 *)FUN_180003cc0(param_1);
  *puVar1 = 0;
  while( true ) {
    plVar3 = (longlong *)FUN_180003ca0(param_1);
    if (local_38 == (undefined8 *)*plVar3) break;
    puVar1 = (undefined8 *)*local_38;
    FUN_180013e90(param_1,local_38);
    local_38 = puVar1;
  }
  return;
}




void FUN_180014290(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x18);
  return;
}




bool FUN_1800142c0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  return *plVar1 == 0;
}




undefined8 * FUN_180014300(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_1800032f0(uVar1);
  puVar2 = (undefined8 *)FUN_180003ca0(param_1);
  FUN_180009060(param_2,*puVar2);
  return param_2;
}




undefined8 FUN_180014360(void)

{
  return 0xaaaaaaaaaaaaaaa;
}




void FUN_180014370(undefined8 param_1)

{
  FUN_180003c60(param_1);
  FUN_180014360();
  return;
}




void FUN_180014390(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_10 [2];
  
  puVar1 = FUN_1800140e0(param_1,local_10);
  FUN_180013740(param_1,(_Container_proxy *)*puVar1,param_2);
  return;
}




undefined8 FUN_1800143d0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180003cc0(param_1);
  return *puVar1;
}




void FUN_1800143f0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  plVar2 = FUN_180014300(param_3,local_10);
  bVar1 = FUN_180009320(&local_res20,plVar2);
  if (!bVar1) {
    return;
  }
  local_18 = local_res20;
  FUN_180013c50(&local_18);
  lVar3 = FUN_1800032f0(local_res18);
  if (param_1 == lVar3) {
    bVar1 = FUN_180009320(&local_res10,&local_res20);
    if (!bVar1) {
      return;
    }
    bVar1 = FUN_180009320(&local_res10,&local_18);
    if (!bVar1) {
      return;
    }
  }
  FUN_180013f60(param_1,local_res10,local_res18,local_res20,local_18,1);
  return;
}




undefined4 * FUN_1800144b0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = 0x400;
  return param_1;
}




void FUN_1800144f0(longlong param_1)

{
  bool bVar1;
  
  bVar1 = FUN_180014f20(param_1);
  if (bVar1) {
    if (*(char *)(param_1 + 0x11) != '\0') {
      FUN_1800146a0(*(longlong *)(param_1 + 8));
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      free(*(void **)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  return;
}




bool FUN_1800145c0(longlong param_1)

{
  return (*(ushort *)(param_1 + 0x16) & 2) != 0;
}




undefined8 FUN_180014610(int *param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_180016560(param_1,param_2);
  if ((uVar1 & 0xff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_180014750((longlong)param_1);
    uVar2 = FUN_180014870((longlong)param_1,param_2);
    if ((uVar2 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      if ((uVar1 & 0xff) != 0) {
        uVar3 = FUN_1800146a0((longlong)param_1);
      }
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
  }
  return uVar3;
}




undefined8 FUN_1800146a0(longlong param_1)

{
  int iVar1;
  undefined4 local_18;
  
  for (local_18 = 0; iVar1 = *(ushort *)(param_1 + 6) - 1, local_18 < iVar1; local_18 = local_18 + 1
      ) {
    *(undefined2 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 4) + 2 + (longlong)local_18 * 2) =
         *(undefined2 *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200));
    *(undefined2 *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200)) =
         *(undefined2 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 4));
  }
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}




undefined8 FUN_180014750(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 local_18;
  
  uVar2 = FUN_1800147f0(param_1);
  if ((uVar2 & 0xff) == 0) {
    uVar3 = 0;
  }
  else {
    for (local_18 = 0; iVar1 = *(ushort *)(param_1 + 6) - 1, local_18 < iVar1;
        local_18 = local_18 + 1) {
      *(undefined2 *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200)) =
           *(undefined2 *)
            (param_1 + (ulonglong)*(ushort *)(param_1 + 4) + 2 + (longlong)local_18 * 2);
    }
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}




longlong FUN_1800147f0(longlong param_1)

{
  short sVar1;
  int iVar2;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    iVar2 = *(ushort *)(param_1 + 6) - 1;
    if (iVar2 <= local_18) {
      return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    }
    sVar1 = *(short *)(param_1 + (ulonglong)*(ushort *)(param_1 + 4));
    if (sVar1 != *(short *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200))) break;
    local_18 = local_18 + 1;
  }
  return (ulonglong)(byte)((ushort)sVar1 >> 8) << 8;
}




undefined8 FUN_180014870(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  uint local_28;
  
  uVar1 = FUN_180014a00(param_1);
  local_28 = (uint)uVar1;
  FUN_180014a30(param_1);
  do {
    uVar3 = (ulonglong)(param_2 - 8U);
    if (param_2 - 8U <= local_28) {
LAB_1800149bc:
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((*(int *)(param_1 + (ulonglong)local_28) == -1) ||
       (*(int *)(param_1 + (ulonglong)local_28) == 0)) {
      uVar3 = (ulonglong)local_28;
      goto LAB_1800149bc;
    }
    uVar3 = FUN_1800155c0((undefined4 *)(param_1 + (ulonglong)local_28),param_2 - local_28);
    if ((uVar3 & 0xff) == 0) {
      return 0;
    }
    iVar2 = FUN_180015660((undefined4 *)(param_1 + (ulonglong)local_28));
    if ((iVar2 == 0x30) &&
       (uVar3 = FUN_180015dc0((undefined4 *)(param_1 + (ulonglong)local_28),param_2 - local_28),
       (uVar3 & 0xff) == 0)) {
      return 0;
    }
    iVar2 = FUN_180015640(param_1 + (ulonglong)local_28);
    uVar3 = CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0) goto LAB_1800149bc;
    iVar2 = FUN_180015640(param_1 + (ulonglong)local_28);
    local_28 = local_28 + iVar2;
  } while( true );
}




undefined4 FUN_1800149d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}




undefined2 FUN_180014a00(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x14);
}




undefined4 FUN_180014a30(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}




undefined8 FUN_180014a60(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




longlong FUN_180014b50(longlong param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  uint local_18;
  int local_14;
  
  uVar1 = FUN_180014a00(param_1);
  local_18 = (uint)uVar1;
  FUN_180014a30(param_1);
  local_14 = 0;
  while( true ) {
    if (((param_2 - 8U <= local_18) || (*(int *)(param_1 + (ulonglong)local_18) == -1)) ||
       (*(int *)(param_1 + (ulonglong)local_18) == 0)) {
      return 0;
    }
    iVar2 = FUN_180015660((undefined4 *)(param_1 + (ulonglong)local_18));
    if (param_3 == iVar2) {
      if (local_14 == param_4) {
        return param_1 + (ulonglong)local_18;
      }
      local_14 = local_14 + 1;
    }
    iVar2 = FUN_180015640(param_1 + (ulonglong)local_18);
    if (iVar2 == 0) break;
    iVar2 = FUN_180015640(param_1 + (ulonglong)local_18);
    local_18 = local_18 + iVar2;
  }
  return 0;
}




longlong FUN_180014c60(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 < 0x30) || (uVar1 = *(ushort *)(param_1 + 0x2a), uVar1 != 0)) {
    lVar2 = (ulonglong)(uVar1 >> 8) << 8;
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}




undefined4 FUN_180014ca0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




ushort FUN_180014cd0(longlong param_1)

{
  return *(ushort *)(param_1 + 0x16) & 1;
}




bool FUN_180014d50(longlong param_1)

{
  return *(longlong *)(param_1 + 0x20) != 0;
}




ulonglong FUN_180014d90(longlong param_1)

{
  return *(ulonglong *)(param_1 + 0x20) & 0xffffffffffff;
}




int * FUN_180014dd0(int *param_1,int *param_2,int param_3,char param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  
  *(int **)(param_1 + 2) = param_2;
  *(char *)(param_1 + 4) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = param_3;
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_180014610(param_2,param_3);
    if ((uVar1 & 0xff) == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      if (param_4 == '\0') {
        *(int **)(param_1 + 2) = param_2;
      }
      else {
        pvVar2 = operator_new((longlong)param_3);
        *(void **)(param_1 + 2) = pvVar2;
        memcpy(*(void **)(param_1 + 2),param_2,(longlong)param_3);
      }
      uVar1 = FUN_1800147f0(*(longlong *)(param_1 + 2));
      if ((uVar1 & 0xff) != 0) {
        FUN_180014750(*(longlong *)(param_1 + 2));
        *(undefined1 *)((longlong)param_1 + 0x11) = 1;
      }
    }
  }
  return param_1;
}




void FUN_180014ef0(longlong param_1)

{
  FUN_1800145c0(*(longlong *)(param_1 + 8));
  return;
}




bool FUN_180014f20(longlong param_1)

{
  return *(longlong *)(param_1 + 8) != 0;
}




void FUN_180014f40(int *param_1,int param_2,int param_3)

{
  FUN_180014b50(*(longlong *)(param_1 + 2),*param_1,param_2,param_3);
  return;
}




void FUN_180014f80(longlong param_1)

{
  FUN_180014d50(*(longlong *)(param_1 + 8));
  return;
}




void FUN_180014fb0(longlong param_1)

{
  FUN_180014a60(*(longlong *)(param_1 + 8));
  return;
}




void FUN_180014fe0(longlong param_1)

{
  FUN_180014c60(*(longlong *)(param_1 + 8));
  return;
}




void FUN_180015010(longlong param_1)

{
  FUN_180014ca0(*(longlong *)(param_1 + 8));
  return;
}




undefined8 FUN_180015030(undefined8 param_1)

{
  return param_1;
}




void FUN_180015050(void)

{
  return;
}




bool FUN_180015060(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_1800120e0(param_1,param_2);
  return iVar1 != 0;
}




bool FUN_1800150a0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_180012110(param_1,param_2);
  return iVar1 != 0;
}




bool FUN_1800150e0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_180012140(param_1,param_2);
  return iVar1 != 0;
}




bool FUN_1800151a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_180011ee0(param_1);
  return iVar1 != 0;
}




bool FUN_1800151e0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_1800121d0(param_1,param_2);
  return iVar1 != 0;
}




void FUN_180015220(undefined4 *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 local_10;
  
  uVar2 = FUN_180015640((longlong)param_1);
  bVar1 = FUN_1800156a0((longlong)param_1);
  if ((!bVar1) && (uVar4 = FUN_1800155c0(param_1,uVar2), (uVar4 & 0xff) != 0)) {
    pcVar5 = (char *)FUN_180015b90((longlong)param_1);
    iVar3 = FUN_180015bf0((longlong)param_1);
    lVar6 = FUN_180015c30((longlong)param_1);
    *param_3 = lVar6;
    local_10 = 0;
    if ((pcVar5 != (char *)0x0) && (0 < iVar3)) {
      FUN_1800124f0(param_4,pcVar5,iVar3,lVar6);
      local_10 = FUN_1800159a0((longlong)param_1);
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = local_10;
    }
  }
  return;
}




ulonglong FUN_1800153c0(int *param_1,undefined8 param_2,char param_3,undefined8 *param_4)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  int local_44;
  undefined4 *local_40;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  bVar1 = FUN_180014f20((longlong)param_1);
  if (bVar1) {
    local_44 = 0;
    local_40 = (undefined4 *)FUN_180014f40(param_1,0x80,0);
    while (local_40 != (undefined4 *)0x0) {
      iVar3 = FUN_180015640((longlong)local_40);
      if (iVar3 < 1) {
        return CONCAT44(extraout_var,iVar3) & 0xffffffffffffff00;
      }
      bVar1 = FUN_1800156a0((longlong)local_40);
      if (bVar1) {
        local_44 = local_44 + 1;
        local_40 = (undefined4 *)FUN_180014f40(param_1,0x80,local_44);
      }
      else {
        bVar1 = FUN_1800156e0((longlong)local_40);
        if (bVar1) {
          return 0;
        }
        local_28 = 0;
        uVar2 = FUN_180015890((longlong)local_40);
        if ((param_3 != '\0') && ((char)uVar2 == '\0')) {
          local_10 = FUN_180012b50((char *)((longlong)local_40 +
                                           (ulonglong)*(ushort *)(local_40 + 8)));
          local_18 = (*(longlong *)(local_40 + 6) - *(longlong *)(local_40 + 4)) + 1;
          if (local_10 != local_18) {
            return local_18 & 0xffffffffffffff00;
          }
        }
        local_20 = 0;
        FUN_180015220(local_40,&local_20,&local_28,param_2);
        if ((local_28 == 0) && (param_4 != (undefined8 *)0x0)) {
          *param_4 = local_20;
        }
        local_44 = local_44 + 1;
        local_40 = (undefined4 *)FUN_180014f40(param_1,0x80,local_44);
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}




undefined8 FUN_180015590(undefined8 param_1)

{
  return param_1;
}




void FUN_1800155b0(void)

{
  return;
}




ulonglong FUN_1800155c0(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  
  if (param_2 < 0x10) {
    uVar3 = (ulonglong)(uint7)(int7)(int3)(param_2 >> 8) << 8;
  }
  else {
    uVar2 = FUN_180015640((longlong)param_1);
    if (param_2 < uVar2) {
      uVar3 = CONCAT44(extraout_var,uVar2) & 0xffffffffffffff00;
    }
    else {
      bVar1 = FUN_1800156e0((longlong)param_1);
      if (bVar1) {
        uVar3 = FUN_180015740((longlong)param_1);
        if ((uVar3 & 0xff) == 0) {
          return 0;
        }
      }
      else {
        uVar3 = FUN_180015790(param_1);
        if ((uVar3 & 0xff) == 0) {
          return 0;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}




undefined4 FUN_180015640(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




undefined4 FUN_180015660(undefined4 *param_1)

{
  return *param_1;
}




undefined2 FUN_180015680(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0xe);
}




bool FUN_1800156a0(longlong param_1)

{
  return *(char *)(param_1 + 9) != '\0';
}




bool FUN_1800156e0(longlong param_1)

{
  return *(char *)(param_1 + 8) == '\0';
}




longlong FUN_180015740(longlong param_1)

{
  uint uVar1;
  uint7 uVar3;
  longlong lVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x14) + *(int *)(param_1 + 0x10);
  uVar3 = (uint7)(uint3)(uVar1 >> 8);
  if (*(uint *)(param_1 + 4) < uVar1) {
    lVar2 = (ulonglong)uVar3 << 8;
  }
  else {
    lVar2 = CONCAT71(uVar3,1);
  }
  return lVar2;
}




longlong FUN_180015790(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  uVar2 = param_1[1];
  if (uVar2 < uVar1) {
    lVar4 = (ulonglong)(byte)(uVar1 >> 8) << 8;
  }
  else {
    iVar3 = FUN_180015660(param_1);
    uVar5 = CONCAT44(extraout_var,iVar3);
    if (iVar3 == 0x80) {
      uVar5 = FUN_180012a80((char *)((longlong)param_1 + (ulonglong)uVar1),uVar2 - uVar1);
      uVar5 = uVar5 & 0xff;
      if ((int)uVar5 == 0) {
        return 0;
      }
    }
    lVar4 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  return lVar4;
}




undefined2 FUN_180015810(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x14);
}




undefined4 FUN_180015840(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined2 FUN_180015860(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}




ushort FUN_180015890(longlong param_1)

{
  ushort uVar1;
  
  uVar1 = FUN_180015860(param_1);
  return uVar1 & 1;
}




bool FUN_1800158c0(longlong param_1)

{
  ushort uVar1;
  
  uVar1 = FUN_180015860(param_1);
  return (uVar1 & 0x4000) != 0;
}




undefined2 FUN_180015910(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x14);
}




undefined4 FUN_180015940(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined8 FUN_180015970(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}




undefined8 FUN_1800159a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}




undefined8 FUN_1800159d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined2 FUN_1800159f0(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x22);
}




void FUN_180015a60(undefined8 *param_1)

{
  *param_1 = CNTFSFileRecordDataRunsAttribute::vftable;
  FUN_180015cd0((longlong)param_1);
  FUN_180013c00(param_1 + 1);
  FUN_1800155b0();
  return;
}




undefined8 FUN_180015ac0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  pcVar2 = (char *)FUN_180015b90(param_1);
  if (pcVar2 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_180015bf0(param_1);
    uVar3 = FUN_180012a80(pcVar2,iVar1);
    if ((uVar3 & 0xff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_180012610((longlong)pcVar2,iVar1,param_3);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
  return uVar4;
}




longlong FUN_180015b90(longlong param_1)

{
  return param_1 + (ulonglong)*(ushort *)(param_1 + 0x20);
}




int FUN_180015bf0(longlong param_1)

{
  return *(int *)(param_1 + 4) - (uint)*(ushort *)(param_1 + 0x20);
}




undefined8 FUN_180015c30(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_180015cd0(longlong param_1)

{
  FUN_1800134e0(param_1 + 8);
  return;
}




undefined8 * FUN_180015cf0(undefined8 *param_1,uint param_2)

{
  FUN_180015a60(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180015d30(undefined8 *param_1)

{
  FUN_180015590(param_1 + 1);
  *param_1 = CNTFSFileRecordFileNameAttribute::vftable;
  return param_1;
}




void FUN_180015d80(undefined8 *param_1)

{
  *param_1 = CNTFSFileRecordFileNameAttribute::vftable;
  FUN_1800155b0();
  return;
}




ulonglong FUN_180015dc0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  
  uVar2 = FUN_1800155c0(param_1,param_2);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_180015660(param_1);
    if (iVar1 == 0x30) {
      uVar2 = FUN_180016230((ushort *)
                            ((longlong)param_1 + (ulonglong)*(ushort *)(param_1 + 5) + 0x42),
                            (uint)*(byte *)((longlong)param_1 +
                                           (ulonglong)*(ushort *)(param_1 + 5) + 0x40));
      if ((uVar2 & 0xff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00;
    }
  }
  return uVar2;
}




ulonglong FUN_180015e50(longlong param_1,ushort *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint7 uVar3;
  longlong lVar4;
  
  lVar4 = param_1 + (ulonglong)*(ushort *)(param_1 + 0x14);
  uVar1 = FUN_180016330((short *)param_2);
  if (uVar1 == *(byte *)(lVar4 + 0x40)) {
    uVar2 = FUN_180016380((ushort *)(lVar4 + 0x42),param_2,(ulonglong)*(byte *)(lVar4 + 0x40));
    uVar3 = (uint7)((ulonglong)uVar2 >> 8);
    if ((int)uVar2 == 0) {
      uVar1 = CONCAT71(uVar3,1);
    }
    else {
      uVar1 = (ulonglong)uVar3 << 8;
    }
  }
  else {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  return uVar1;
}




ulonglong FUN_180015ee0(longlong param_1)

{
  return *(ulonglong *)(param_1 + (ulonglong)*(ushort *)(param_1 + 0x14)) & 0xffffffffffff;
}




undefined1 FUN_180015f30(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = param_1 + (ulonglong)*(ushort *)(param_1 + 0x14);
  if (*(byte *)(lVar2 + 0x41) < 4) {
    uVar1 = *(undefined1 *)(lVar2 + 0x41);
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}




longlong FUN_180015fa0(longlong param_1)

{
  return param_1 + (ulonglong)*(ushort *)(param_1 + 0x14) + 0x42;
}




undefined1 FUN_180015fe0(longlong param_1)

{
  return *(undefined1 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 0x14) + 0x40);
}




undefined8 FUN_180016020(longlong param_1)

{
  return *(undefined8 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 0x14) + 8);
}




undefined8 FUN_180016060(longlong param_1)

{
  return *(undefined8 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 0x14) + 0x10);
}




undefined8 FUN_1800160a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 0x14) + 0x20);
}




undefined4 FUN_1800160e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 0x14) + 0x38);
}




bool FUN_180016120(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1800160e0(param_1);
  return (uVar1 & 0x10000000) != 0;
}




uint FUN_180016170(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1800160e0(param_1);
  return uVar1 & 1;
}




bool FUN_1800161a0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1800160e0(param_1);
  return (uVar1 & 0x4000) != 0;
}




undefined8 FUN_1800161f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 0x14) + 0x30);
}




ulonglong FUN_180016230(ushort *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint local_14;
  ushort *local_10;
  
  local_10 = param_1;
  for (local_14 = 0;
      (uVar2 = (ulonglong)*local_10, *local_10 != 0 &&
      (uVar2 = (ulonglong)local_14, (int)local_14 < param_2)); local_14 = local_14 + 1) {
    uVar1 = *local_10 - 0x22;
    if (uVar1 < 0x5b) {
      switch(*local_10) {
      case 0x22:
      case 0x2a:
      case 0x2f:
      case 0x3a:
      case 0x3c:
      case 0x3e:
      case 0x3f:
      case 0x5c:
      case 0x7c:
        return (ulonglong)
               (&switchD_18001629c::switchdataD_1800162c4)
               [(&switchD_18001629c::switchdataD_1800162cc)[(int)uVar1]] + 0x180000000 &
               0xffffffffffffff00;
      }
    }
    local_10 = local_10 + 1;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}




longlong FUN_180016330(short *param_1)

{
  short *local_18;
  
  for (local_18 = param_1; *local_18 != 0; local_18 = local_18 + 1) {
  }
  return (longlong)local_18 - (longlong)param_1 >> 1;
}




undefined8 FUN_180016380(ushort *param_1,ushort *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ushort *local_18;
  ushort *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  while( true ) {
    if (((*local_18 == 0) || (*local_10 == 0)) ||
       (param_3 <= (ulonglong)((longlong)local_18 - (longlong)param_1 >> 1))) {
      if ((ulonglong)((longlong)local_18 - (longlong)param_1 >> 1) < param_3) {
        if (*local_10 < *local_18) {
          uVar1 = 1;
        }
        else if (*local_18 < *local_10) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
      return uVar1;
    }
    if (*local_10 < *local_18) {
      return 1;
    }
    if (*local_18 < *local_10) break;
    local_18 = local_18 + 1;
    local_10 = local_10 + 1;
  }
  return 0xffffffff;
}




undefined8 * FUN_1800164a0(undefined8 *param_1,uint param_2)

{
  FUN_180015d80(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800164e0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}




void FUN_180016510(longlong *param_1)

{
  if (*param_1 != 0) {
    free((void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}




ulonglong FUN_180016560(int *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint7 uVar3;
  
  if (*param_1 == 0x454c4946) {
    if (*(ushort *)((longlong)param_1 + 6) < 0x11) {
      iVar1 = param_2 + (param_2 >> 0x1f & 0x1ffU);
      if (iVar1 >> 9 < (int)(*(ushort *)((longlong)param_1 + 6) - 1)) {
        uVar2 = (ulonglong)(uint3)(iVar1 >> 0x11) << 8;
      }
      else if (*(ushort *)(param_1 + 1) < 0x2a) {
        uVar2 = (ulonglong)(byte)(*(ushort *)(param_1 + 1) >> 8) << 8;
      }
      else {
        uVar3 = (uint7)(byte)(*(ushort *)(param_1 + 1) >> 8);
        if (*(ushort *)(param_1 + 1) < 0x101) {
          uVar2 = CONCAT71(uVar3,1);
        }
        else {
          uVar2 = (ulonglong)uVar3 << 8;
        }
      }
    }
    else {
      uVar2 = (ulonglong)(byte)(*(ushort *)((longlong)param_1 + 6) >> 8) << 8;
    }
  }
  else {
    uVar2 = (ulonglong)param_1 & 0xffffffffffffff00;
  }
  return uVar2;
}




undefined8 FUN_1800166f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 0x14));
}




undefined8 FUN_180016730(longlong param_1)

{
  return *(undefined8 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 0x14) + 8);
}




undefined8 FUN_180016770(longlong param_1)

{
  return *(undefined8 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 0x14) + 0x18);
}




undefined4 FUN_1800167f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 0x14) + 0x20);
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CNullObjectLocationGen::vftable;
  ~ios_base(this);
  return;
}




undefined8 FUN_180016870(void)

{
  return 0xffffffffffffffff;
}




void FUN_180016890(void)

{
  return;
}




undefined1 FUN_1800168b0(void)

{
  return 0;
}




undefined1 FUN_1800168d0(void)

{
  return 0;
}




undefined8 * FUN_1800168f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_1800169a0(puVar1);
  }
  local_18 = local_28;
  FUN_180003810(&local_20,local_28);
  FUN_18000b0c0(param_1,&local_20);
  FUN_18000b0f0(&local_20);
  return param_1;
}




undefined8 * FUN_1800169a0(undefined8 *param_1)

{
  FUN_18000ce40(param_1);
  *param_1 = CNullObjectLocationGen::vftable;
  return param_1;
}




ios_base * FUN_1800169e0(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180016a20(undefined8 *param_1)

{
  FUN_18000cd40(param_1);
  *param_1 = CParserSetGeneralImpl::vftable;
  FUN_1800038a0(param_1 + 1);
  return param_1;
}




void FUN_180016a70(ios_base *param_1)

{
  *(undefined ***)param_1 = CParserSetGeneralImpl::vftable;
  FUN_180016e00((longlong)param_1);
  FUN_180009250(param_1 + 8);
  std::ios_base::~ios_base(param_1);
  return;
}




int FUN_180016ad0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  int local_38;
  longlong local_30;
  longlong *local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_38 = -6;
  FUN_18000a7a0(param_1 + 8,&local_30);
  FUN_18000aa20(param_1 + 8,local_20);
  while( true ) {
    bVar1 = FID_conflict_operator__(&local_30,local_20);
    if (!bVar1) {
      return local_38;
    }
    puVar2 = (undefined8 *)FUN_180009440(&local_30);
    local_28 = (longlong *)*puVar2;
    local_38 = (**(code **)(*local_28 + 8))(local_28,param_2,param_3,param_4,param_5);
    if (local_38 == 0) break;
    FUN_1800095a0(&local_30);
  }
  return 0;
}




int FUN_180016bb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  int local_28;
  longlong local_20;
  longlong *local_18;
  longlong local_10 [2];
  
  local_28 = -6;
  FUN_18000a7a0(param_1 + 8,&local_20);
  FUN_18000aa20(param_1 + 8,local_10);
  while( true ) {
    bVar1 = FID_conflict_operator__(&local_20,local_10);
    if (!bVar1) {
      return local_28;
    }
    puVar2 = (undefined8 *)FUN_180009440(&local_20);
    local_18 = (longlong *)*puVar2;
    local_28 = (**(code **)(*local_18 + 0x10))(local_18,param_2,param_3,param_4,param_5);
    if (local_28 == 0) break;
    FUN_1800095a0(&local_20);
  }
  return 0;
}




undefined1 FUN_180016c80(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong local_res10 [3];
  undefined1 local_28;
  longlong local_20;
  longlong local_18 [3];
  
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_18000a7a0(param_1 + 8,&local_20);
  FUN_18000aa20(param_1 + 8,local_18);
  if (local_res10[0] != 0) {
    while ((bVar1 = FID_conflict_operator__(&local_20,local_18), bVar1 &&
           (plVar2 = (longlong *)FUN_180009440(&local_20), *plVar2 != local_res10[0]))) {
      FUN_1800095a0(&local_20);
    }
    bVar1 = FID_conflict_operator__(&local_20,local_18);
    if (bVar1) {
      FUN_18000aed0(param_1 + 8,local_res10);
      local_28 = 1;
    }
  }
  return local_28;
}




undefined8 FUN_180016d50(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *local_28;
  longlong local_20;
  void *local_18;
  undefined8 local_10 [2];
  
  FUN_18000a7a0(param_1 + 8,&local_28);
  FUN_18000aa20(param_1 + 8,&local_20);
  while( true ) {
    bVar1 = FID_conflict_operator__((longlong *)&local_28,&local_20);
    if (!bVar1) {
      return 0;
    }
    plVar2 = (longlong *)FUN_180009440(&local_28);
    if (*plVar2 == param_2) break;
    FUN_1800095a0((longlong *)&local_28);
  }
  local_18 = local_28;
  puVar3 = FUN_18000ac20(param_1 + 8,local_10,local_28);
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}




undefined8 FUN_180016e00(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18000a7a0(param_1 + 8,&local_38);
  FUN_18000aa20(param_1 + 8,&local_28);
  while( true ) {
    bVar1 = FID_conflict_operator__(&local_38,&local_28);
    if (!bVar1) break;
    plVar2 = (longlong *)FUN_180009440(&local_38);
    local_30 = (undefined8 *)*plVar2;
    local_20 = local_30;
    if (local_30 == (undefined8 *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = (**(code **)*local_30)(local_30,1);
    }
    FUN_1800095a0(&local_38);
  }
  uVar3 = FUN_18000a8e0(param_1 + 8);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}




ios_base * FUN_180016ed0(ios_base *param_1,uint param_2)

{
  FUN_180016a70(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180016f10(void)

{
  FUN_18001d400();
  return;
}




undefined8 FUN_180016f30(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_180016f50(undefined8 param_1)

{
  return param_1;
}




char * FUN_180016f70(void)

{
  return "CPartitionRecoveryDModule";
}




undefined8 FUN_180016f80(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  
  if (param_2 == (char *)0x0) {
    param_1 = 0;
  }
  else {
    local_58 = (uint)(*param_2 == '*');
    if (param_2[(int)local_58] != '1') {
      pcVar1 = param_2;
      local_48 = (char *)FUN_180017830(0,param_2,param_3,param_4);
      local_50 = param_2 + (int)local_58;
      for (; ((*local_50 == *local_48 && (*local_50 != '\0')) && (*local_48 != '\0'));
          local_48 = local_48 + 1) {
        local_50 = local_50 + 1;
      }
      if (*local_50 != *local_48) {
        local_38 = (char *)FUN_180017810(0,pcVar1,param_3,param_4);
        local_40 = param_2 + (int)local_58;
        for (; ((*local_40 == *local_38 && (*local_40 != '\0')) && (*local_38 != '\0'));
            local_38 = local_38 + 1) {
          local_40 = local_40 + 1;
        }
        if (*local_40 != *local_38) {
          param_1 = 0;
        }
      }
    }
  }
  return param_1;
}




undefined8 FUN_180017140(void)

{
  return DAT_18003c220;
}




char * FUN_180017160(void)

{
  return "PartitionRecoveryD";
}




IStorageDevice * FUN_180017180(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [6];
  longlong local_28;
  IStorageDevice *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  puVar1 = FUN_180019d70(&local_28,local_res10);
  local_20 = FUN_180017c00(puVar1);
  FUN_18001be00(&local_28);
  return local_20;
}




void GetModule(undefined8 param_1)

{
  DAT_18003c220 = param_1;
                    /* 0x171e0  32  GetModule */
  FUN_18001d400();
  return;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_180017200(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             undefined8 param_2,undefined8 param_3)

{
  FUN_180017730(param_1,param_3);
  return param_1;
}




longlong FUN_180017250(longlong param_1)

{
  FUN_1800032f0(param_1);
  FUN_18001b4f0(param_1);
  return param_1;
}




IObject * FUN_180017290(IObject *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180017330(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x20) = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x28) = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return param_1;
}




IObject * FUN_180017330(IObject *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001f610(param_1,*param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x20) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x28) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return param_1;
}




IObject * FUN_1800173e0(IObject *param_1,undefined8 *param_2,IObject *param_3,undefined8 param_4)

{
  FUN_1800174e0(param_1,*param_2,param_3,param_4);
  *(undefined ***)param_1 =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 0x10) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 0x18) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 0x20) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 0x28) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 0x100) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return param_1;
}




longlong * FUN_1800174a0(longlong *param_1,IObject *param_2)

{
  CTempBuffer<>(param_1,param_2);
  return param_1;
}




IObject * FUN_1800174e0(IObject *param_1,undefined8 param_2,IObject *param_3,undefined8 param_4)

{
  FUN_1800175b0(param_1,param_3,param_3,param_4);
  FUN_18001baf0((undefined8 *)(param_1 + 0x100));
  *(undefined ***)param_1 = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x20) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x28) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x100) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  FUN_18001d3e0((longlong)param_1,param_2);
  return param_1;
}




IObject * FUN_1800175b0(IObject *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001b780(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x20) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x28) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return param_1;
}




longlong FUN_180017650(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1800032f0(param_3);
  FUN_18001b4f0(param_1);
  return param_1;
}




longlong FUN_180017690(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  
  uVar1 = FUN_1800032f0(param_2);
  FUN_180017650(param_1,(ulonglong)local_18,uVar1);
  return param_1;
}




undefined8 * FUN_1800176d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  pbVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = 0;
    pbVar3 = pbVar3 + 1;
  }
  uVar1 = FUN_1800032f0(param_2);
  FUN_180006fb0(param_1,(ulonglong)local_18[0],uVar1);
  return param_1;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_180017730(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1800032f0(param_2);
  uVar2 = FUN_180008ed0(puVar1);
  basic_string<>(param_1,uVar2);
  FUN_1800038a0((undefined8 *)(param_1 + 0x20));
  return param_1;
}




bool FUN_180017790(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18001ee30(param_1,param_2);
  return iVar1 < 0;
}




void FUN_1800177d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800178d0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800177f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180017920(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180017810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180017970(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180017830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800179c0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180017850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180017a10(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180017870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180017a60(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180017890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180017ab0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800178b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180017b00(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_1800178d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003c7d0 == (undefined1 *)0x0) {
    DAT_18003c7d0 = &DAT_18003c6d0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003b0b0,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003c7d0,local_18);
  }
  return DAT_18003c7d0;
}




undefined1 *
FUN_180017920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003c390 == (undefined1 *)0x0) {
    DAT_18003c390 = &DAT_18003c290;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003a9e0,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003c390,local_18);
  }
  return DAT_18003c390;
}




undefined1 *
FUN_180017970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003c5b0 == (undefined1 *)0x0) {
    DAT_18003c5b0 = &DAT_18003c4b0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003aa38,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003c5b0,local_18);
  }
  return DAT_18003c5b0;
}




undefined1 *
FUN_1800179c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003c4a0 == (undefined1 *)0x0) {
    DAT_18003c4a0 = &DAT_18003c3a0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003aa08,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003c4a0,local_18);
  }
  return DAT_18003c4a0;
}




undefined1 *
FUN_180017a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003cb00 == (undefined1 *)0x0) {
    DAT_18003cb00 = &DAT_18003ca00;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003b120,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003cb00,local_18);
  }
  return DAT_18003cb00;
}




undefined1 *
FUN_180017a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003c8e0 == (undefined1 *)0x0) {
    DAT_18003c8e0 = &DAT_18003c7e0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003b0d8,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003c8e0,local_18);
  }
  return DAT_18003c8e0;
}




undefined1 *
FUN_180017ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003c6c0 == (undefined1 *)0x0) {
    DAT_18003c6c0 = &DAT_18003c5c0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003aa58,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003c6c0,local_18);
  }
  return DAT_18003c6c0;
}




undefined1 *
FUN_180017b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003c9f0 == (undefined1 *)0x0) {
    DAT_18003c9f0 = &DAT_18003c8f0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003b0f8,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003c9f0,local_18);
  }
  return DAT_18003c9f0;
}




IStorageDevice * FUN_180017b50(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18001c7f0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        (**(code **)(*(longlong *)this + 0x48))(this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_180017c00(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18001c7f0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        (**(code **)(*(longlong *)this + 0x48))(this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




_Container_proxy *
FUN_180017cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  p_Var1 = FUN_18001df00(param_1);
  p_Var1[0x18] = (_Container_proxy)0x0;
  p_Var1[0x19] = (_Container_proxy)0x0;
  uVar2 = FUN_1800032f0(param_4);
  uVar3 = FUN_1800032f0(param_3);
  uVar4 = FUN_1800032f0(param_2);
  uVar5 = FUN_1800032f0(p_Var1 + 0x20);
  uVar6 = FUN_18000a1d0(param_1);
  FUN_180019ed0(uVar6,uVar5,uVar4,uVar3,uVar2);
  return p_Var1;
}




void FUN_180017d80(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res8;
  
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 8) {
    plVar1 = (longlong *)FUN_1800032f0(local_res8);
    destroy<>(param_3,plVar1);
  }
  return;
}




void FUN_180017de0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_180017d80(param_1,param_2,param_3);
  return;
}




void FUN_180017e30(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1800032f0(param_2);
  uVar2 = FUN_1800032f0(*(undefined8 *)(param_1 + 8));
  FUN_180019f80(*(undefined8 *)(param_1 + 0x10),uVar2,uVar1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  return;
}




void FUN_180017e90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_1800032f0(param_2);
  puVar2 = (undefined8 *)FUN_180003cc0(param_1);
  uVar3 = FUN_1800032f0(*puVar2);
  uVar4 = FUN_180003c60(param_1);
  FUN_180019f80(uVar4,uVar3,uVar1);
  FUN_180003cc0(param_1);
  FUN_180003cc0(param_1);
  FUN_180003d00();
  FUN_180003cc0(param_1);
  plVar5 = (longlong *)FUN_180003cc0(param_1);
  *plVar5 = *plVar5 + 8;
  return;
}




longlong FUN_180017f50(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  CLogWriter *pCVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  lVar2 = param_2 - *plVar1 >> 3;
  uVar3 = FUN_180003c60(param_1);
  _Var4 = FUN_18000af20(param_1);
  _Var5 = FUN_18000ae60(param_1);
  if (_Var4 == _Var5) {
    FUN_180003ec0();
  }
  uVar6 = FUN_1800098f0(param_1,_Var4 + 1);
  pCVar7 = (CLogWriter *)allocate(uVar3,uVar6);
  uVar8 = FUN_1800032f0(param_3);
  uVar9 = FUN_1800032f0(pCVar7 + lVar2 * 8);
  FUN_180019f80(uVar3,uVar9,uVar8);
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  if (param_2 == *plVar1) {
    puVar10 = (undefined8 *)FUN_180003cc0(param_1);
    puVar11 = (undefined8 *)FUN_180003ca0(param_1);
    FUN_18001e850(param_1,*puVar11,*puVar10,pCVar7);
  }
  else {
    puVar10 = (undefined8 *)FUN_180003ca0(param_1);
    FUN_18001e810(param_1,*puVar10,param_2,pCVar7);
    puVar10 = (undefined8 *)FUN_180003cc0(param_1);
    FUN_18001e810(param_1,param_2,*puVar10,pCVar7 + lVar2 * 8 + 8);
  }
  FUN_18001e0a0(param_1,(longlong)pCVar7,_Var4 + 1,uVar6);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  return *plVar1 + lVar2 * 8;
}




void FUN_180018190(undefined8 param_1,void *param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800032f0(param_2);
  FUN_180008d20();
  FUN_1800032f0((longlong)param_2 + 8);
  FUN_180008d20();
  FUN_1800032f0((longlong)param_2 + 0x10);
  FUN_180008d20();
  FUN_18001ef30(local_18,param_2,1);
  return;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<16>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<16>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x58;
  if (0x2e8ba2e8ba2e8ba < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




undefined8 *
FUN_180018270(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,void *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_28;
  
  plVar1 = (longlong *)FUN_18000a1d0(param_1);
  lVar2 = FUN_18001f280(param_1);
  if (lVar2 - 1U <= (ulonglong)plVar1[1]) {
    FUN_18001e260(param_1,param_6);
    std::_Xlength_error("map/set<T> too long");
  }
  FUN_1800032f0(param_5);
  plVar3 = (longlong *)FUN_180007060(param_1,param_6);
  plVar1[1] = plVar1[1] + 1;
  plVar3[1] = (longlong)param_4;
  local_28 = plVar3;
  if (param_4 == (undefined8 *)*plVar1) {
    puVar4 = (undefined8 *)FUN_18000a400(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_180002800(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_18000a3e0(plVar1);
    *puVar4 = plVar3;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar3;
    plVar5 = (longlong *)FUN_18000a3e0(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_18000a3e0(plVar1);
      *puVar4 = plVar3;
    }
  }
  else {
    *param_4 = plVar3;
    plVar5 = (longlong *)FUN_180002800(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_180002800(plVar1);
      *puVar4 = plVar3;
    }
  }
  while (*(char *)(local_28[1] + 0x18) == '\0') {
    if (local_28[1] == **(longlong **)(local_28[1] + 8)) {
      lVar2 = *(longlong *)(*(longlong *)(local_28[1] + 8) + 0x10);
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        local_28 = *(longlong **)(local_28[1] + 8);
      }
      else {
        if (local_28 == *(longlong **)(local_28[1] + 0x10)) {
          local_28 = (longlong *)local_28[1];
          FUN_18000a2a0(plVar1,(longlong)local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_18000a420(plVar1,*(longlong **)(local_28[1] + 8));
      }
    }
    else {
      lVar2 = **(longlong **)(local_28[1] + 8);
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        local_28 = *(longlong **)(local_28[1] + 8);
      }
      else {
        if (local_28 == *(longlong **)local_28[1]) {
          local_28 = (longlong *)local_28[1];
          FUN_18000a420(plVar1,local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_18000a2a0(plVar1,*(longlong *)(local_28[1] + 8));
      }
    }
  }
  plVar5 = (longlong *)FUN_18000a400(plVar1);
  *(undefined1 *)(*plVar5 + 0x18) = 1;
  FUN_1800032f0(plVar1);
  FUN_180009060(param_2,plVar3);
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x000180018685) */
/* WARNING: Removing unreachable block (ram,0x00018001876b) */
/* WARNING: Removing unreachable block (ram,0x000180018860) */
/* WARNING: Removing unreachable block (ram,0x0001800188c4) */
/* WARNING: Removing unreachable block (ram,0x000180018946) */
/* WARNING: Removing unreachable block (ram,0x0001800189a2) */
/* WARNING: Removing unreachable block (ram,0x000180018957) */
/* WARNING: Removing unreachable block (ram,0x0001800189f3) */
/* WARNING: Removing unreachable block (ram,0x000180018a63) */
/* WARNING: Removing unreachable block (ram,0x000180018ab1) */
/* WARNING: Removing unreachable block (ram,0x000180018b1e) */
/* WARNING: Removing unreachable block (ram,0x000180018b80) */
/* WARNING: Removing unreachable block (ram,0x000180018b32) */
/* WARNING: Removing unreachable block (ram,0x000180018bcb) */
/* WARNING: Removing unreachable block (ram,0x00018001879b) */
/* WARNING: Removing unreachable block (ram,0x000180018800) */
/* WARNING: Removing unreachable block (ram,0x00018001885b) */
/* WARNING: Removing unreachable block (ram,0x0001800186b5) */
/* WARNING: Removing unreachable block (ram,0x000180018715) */
/* WARNING: Removing unreachable block (ram,0x000180018761) */
/* WARNING: Removing unreachable block (ram,0x000180018bd0) */

undefined8 *
FUN_1800185d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             void *param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *local_res18;
  undefined8 local_res20;
  undefined8 *local_140;
  longlong *local_138;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_50 = 0xfffffffffffffffe;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180009040(&local_140);
  local_138 = (longlong *)FUN_18000a1d0(param_1);
  lVar3 = FUN_18000af00(param_1);
  if (lVar3 == 0) {
    uVar4 = FUN_1800032f0(local_res20);
    FUN_180018270(param_1,param_2,'\x01',(undefined8 *)*local_138,uVar4,param_5);
    return param_2;
  }
  plVar5 = FUN_18000a730(param_1,&local_30);
  bVar1 = FUN_180009290((longlong *)&local_res18,plVar5);
  if (bVar1) {
    local_c0 = FUN_18000a250(param_1,(longlong)local_res18);
    local_b8 = FUN_18000a280(param_1,local_res20);
    uVar4 = FUN_180003c60(param_1);
    cVar2 = FUN_18001c890(uVar4,local_b8,local_c0);
    if (cVar2 != '\0') {
      uVar4 = FUN_1800032f0(local_res20);
      FUN_180018270(param_1,param_2,'\x01',local_res18,uVar4,param_5);
      return param_2;
    }
  }
  else {
    plVar5 = FUN_18000a9c0(param_1,&local_28);
    bVar1 = FUN_180009290((longlong *)&local_res18,plVar5);
    if (bVar1) {
      local_b0 = FUN_18000a280(param_1,local_res20);
      plVar5 = (longlong *)FUN_18000a3e0(local_138);
      local_a8 = FUN_18000a250(param_1,*plVar5);
      uVar4 = FUN_180003c60(param_1);
      cVar2 = FUN_18001c890(uVar4,local_a8,local_b0);
      if (cVar2 != '\0') {
        local_a0 = FUN_1800032f0(local_res20);
        puVar6 = (undefined8 *)FUN_18000a3e0(local_138);
        FUN_180018270(param_1,param_2,'\0',(undefined8 *)*puVar6,local_a0,param_5);
        return param_2;
      }
    }
    else {
      local_98 = FUN_18000a250(param_1,(longlong)local_res18);
      local_90 = FUN_18000a280(param_1,local_res20);
      uVar4 = FUN_180003c60(param_1);
      cVar2 = FUN_18001c890(uVar4,local_90,local_98);
      if (cVar2 != '\0') {
        local_140 = local_res18;
        local_88 = FUN_18000a280(param_1,local_res20);
        plVar5 = FUN_1800095c0((longlong *)&local_140);
        local_80 = FUN_18000a250(param_1,*plVar5);
        uVar4 = FUN_180003c60(param_1);
        cVar2 = FUN_18001c890(uVar4,local_80,local_88);
        if (cVar2 != '\0') {
          if (*(char *)(local_140[2] + 0x19) != '\0') {
            uVar4 = FUN_1800032f0(local_res20);
            FUN_180018270(param_1,param_2,'\0',local_140,uVar4,param_5);
            return param_2;
          }
          uVar4 = FUN_1800032f0(local_res20);
          FUN_180018270(param_1,param_2,'\x01',local_res18,uVar4,param_5);
          return param_2;
        }
      }
      local_78 = FUN_18000a280(param_1,local_res20);
      local_70 = FUN_18000a250(param_1,(longlong)local_res18);
      uVar4 = FUN_180003c60(param_1);
      cVar2 = FUN_18001c890(uVar4,local_70,local_78);
      if (cVar2 != '\0') {
        local_140 = local_res18;
        local_68 = FUN_18000a9c0(param_1,&local_20);
        plVar5 = FUN_1800094b0((longlong *)&local_140);
        bVar1 = FUN_180009290(plVar5,local_68);
        if (!bVar1) {
          local_60 = FUN_18000a250(param_1,(longlong)local_140);
          local_58 = FUN_18000a280(param_1,local_res20);
          uVar4 = FUN_180003c60(param_1);
          cVar2 = FUN_18001c890(uVar4,local_58,local_60);
          if (cVar2 == '\0') goto LAB_18001913b;
        }
        if (*(char *)(local_res18[2] + 0x19) != '\0') {
          uVar4 = FUN_1800032f0(local_res20);
          FUN_180018270(param_1,param_2,'\0',local_res18,uVar4,param_5);
          return param_2;
        }
        uVar4 = FUN_1800032f0(local_res20);
        FUN_180018270(param_1,param_2,'\x01',local_140,uVar4,param_5);
        return param_2;
      }
    }
  }
LAB_18001913b:
  uVar4 = FUN_1800032f0(local_res20);
  puVar6 = FUN_1800191a0(param_1,local_18,'\0',uVar4,param_5);
  *param_2 = *puVar6;
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x000180019335) */

undefined8 *
FUN_1800191a0(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,void *param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94 [4];
  undefined8 *local_90;
  undefined8 *local_88;
  uint local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_30 = 0xfffffffffffffffe;
  local_68 = (longlong *)FUN_18000a1d0(param_1);
  local_88 = (undefined8 *)*local_68;
  local_90 = (undefined8 *)local_88[1];
  local_98 = '\x01';
  while (*(char *)((longlong)local_90 + 0x19) == '\0') {
    local_88 = local_90;
    if (param_3 == '\0') {
      local_50 = FUN_18000a250(param_1,(longlong)local_90);
      local_48 = FUN_18000a280(param_1,param_4);
      uVar3 = FUN_180003c60(param_1);
      local_98 = FUN_18001c890(uVar3,local_48,local_50);
    }
    else {
      local_60 = FUN_18000a280(param_1,param_4);
      local_58 = FUN_18000a250(param_1,(longlong)local_90);
      uVar3 = FUN_180003c60(param_1);
      cVar1 = FUN_18001c890(uVar3,local_58,local_60);
      local_98 = cVar1 == '\0';
      local_80 = (uint)(byte)local_98;
    }
    if (local_98 == '\0') {
      local_70 = (undefined8 *)local_90[2];
    }
    else {
      local_70 = (undefined8 *)*local_90;
    }
    local_90 = local_70;
  }
  FUN_1800032f0(local_68);
  FUN_180009060(&local_78,local_88);
  if (local_98 != '\0') {
    plVar4 = FUN_18000a730(param_1,&local_20);
    bVar2 = FUN_180009290(&local_78,plVar4);
    if (bVar2) {
      local_96 = 1;
      uVar3 = FUN_1800032f0(param_4);
      puVar5 = FUN_180018270(param_1,&local_18,'\x01',local_88,uVar3,param_5);
      FUN_180006e30(param_2,puVar5,&local_96);
      return param_2;
    }
    FUN_1800095e0(&local_78);
  }
  local_40 = FUN_18000a280(param_1,param_4);
  local_38 = FUN_18000a250(param_1,local_78);
  uVar3 = FUN_180003c60(param_1);
  cVar1 = FUN_18001c890(uVar3,local_38,local_40);
  if (cVar1 == '\0') {
    FUN_18001e260(param_1,param_5);
    local_94[0] = 0;
    FUN_180006e30(param_2,&local_78,local_94);
  }
  else {
    local_95 = 1;
    uVar3 = FUN_1800032f0(param_4);
    puVar5 = FUN_180018270(param_1,local_10,local_98,local_88,uVar3,param_5);
    FUN_180006e30(param_2,puVar5,&local_95);
  }
  return param_2;
}




undefined8 * FUN_180019580(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *local_18;
  undefined8 *local_10;
  
  plVar2 = (longlong *)FUN_18000a1d0(param_1);
  local_10 = (undefined8 *)*plVar2;
  local_18 = (undefined8 *)local_10[1];
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    uVar3 = FUN_18000a250(param_1,(longlong)local_18);
    cVar1 = FUN_18001e1b0(param_1,uVar3,param_2);
    if (cVar1 == '\0') {
      local_10 = local_18;
      local_18 = (undefined8 *)*local_18;
    }
    else {
      local_18 = (undefined8 *)local_18[2];
    }
  }
  return local_10;
}




/* Library Function - Single Match
    unsigned __int64 const & __ptr64 __cdecl std::_Max_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 * __cdecl std::_Max_value<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 *local_18;
  
  local_18 = param_1;
  if (*param_1 < *param_2) {
    local_18 = param_2;
  }
  return local_18;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Pocma<class std::allocator<char> >(class std::allocator<char> & __ptr64,class
   std::allocator<char> & __ptr64)
    void __cdecl std::_Pocma<class std::allocator<unsigned short> >(class std::allocator<unsigned
   short> & __ptr64,class std::allocator<unsigned short> & __ptr64)
    void __cdecl std::_Pocma<class std::allocator<wchar_t> >(class std::allocator<wchar_t> &
   __ptr64,class std::allocator<wchar_t> & __ptr64)
   
   Library: Visual Studio 2017 Release */

void _Pocma<>(undefined8 param_1,undefined8 param_2)

{
  _Pocma<>(param_1,param_2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Pocma<class std::allocator<char> >(class std::allocator<char> & __ptr64,class
   std::allocator<char> & __ptr64,struct std::integral_constant<bool,1>)
    void __cdecl std::_Pocma<class std::allocator<unsigned short> >(class std::allocator<unsigned
   short> & __ptr64,class std::allocator<unsigned short> & __ptr64,struct
   std::integral_constant<bool,1>)
    void __cdecl std::_Pocma<class std::allocator<wchar_t> >(class std::allocator<wchar_t> &
   __ptr64,class std::allocator<wchar_t> & __ptr64,struct std::integral_constant<bool,1>)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void _Pocma<>(undefined8 param_1,undefined8 param_2)

{
  FUN_1800032f0(param_2);
  return;
}




undefined1 FUN_1800196d0(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return local_18[0];
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Reallocate_for<class <lambda_66f57f934f28d61049862f64df852ff0>,char const * __ptr64>(unsigned
   __int64,class <lambda_66f57f934f28d61049862f64df852ff0>,char const * __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
_Reallocate_for<class_<lambda_66f57f934f28d61049862f64df852ff0>,char_const*___ptr64>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          ulonglong param_1,<lambda_66f57f934f28d61049862f64df852ff0> param_3,char *param_4)

{
  __uint64 _Var1;
  IStorageDevice *this_00;
  char *pcVar2;
  undefined8 uVar3;
  <lambda_66f57f934f28d61049862f64df852ff0> local_res18 [8];
  char *local_res20;
  undefined8 local_30;
  undefined8 local_28;
  __uint64 local_20;
  ulonglong local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  _Var1 = FID_conflict_max_size(this);
  if (_Var1 < param_1) {
    FID_conflict__Xlen();
  }
  this_00 = (IStorageDevice *)FUN_180003c60(this);
  local_18 = *(ulonglong *)(this_00 + 0x18);
  local_20 = FID_conflict__Calculate_growth(this,param_1);
  local_28 = FUN_180003c60(this);
  local_30 = allocate(local_28,local_20 + 1);
  IStorageDevice::ReleaseBitlocker(this_00);
  *(ulonglong *)(this_00 + 0x10) = param_1;
  *(__uint64 *)(this_00 + 0x18) = local_20;
  pcVar2 = (char *)FUN_1800032f0(local_30);
  <lambda_66f57f934f28d61049862f64df852ff0>::operator()(local_res18,pcVar2,param_1,local_res20);
  if (local_18 < 0x10) {
    uVar3 = FUN_1800032f0(this_00);
    construct<>(local_28,uVar3,&local_30);
  }
  else {
    FUN_180003f50(local_28,*(void **)this_00,local_18 + 1);
    *(undefined8 *)this_00 = local_30;
  }
  return this;
}




int FUN_180019830(void *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  __uint64 *p_Var2;
  ulonglong local_res10;
  void *local_res18;
  ulonglong local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  p_Var2 = std::_Min_value<unsigned___int64>(&local_res10,&local_res20);
  iVar1 = FUN_18001eeb0(param_1,local_res18,*p_Var2);
  if (iVar1 == 0) {
    if (local_res10 < local_res20) {
      iVar1 = -1;
    }
    else if (local_res20 < local_res10) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}




undefined8 * FUN_1800198b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46 [6];
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_18001f210(param_1,&local_40,param_3);
  plVar3 = FUN_18000a9c0(param_1,&local_20);
  bVar1 = FUN_180009290((longlong *)&local_40,plVar3);
  if (!bVar1) {
    local_38 = FUN_18000a250(param_1,(longlong)local_40);
    uVar4 = FUN_180003c60(param_1);
    cVar2 = FUN_18001c890(uVar4,param_3,local_38);
    if (cVar2 == '\0') {
      local_47 = 0;
      FUN_180006e30(param_2,&local_40,&local_47);
      return param_2;
    }
  }
  local_48 = 1;
  local_28 = local_40;
  local_30 = FUN_180008e80(local_46);
  uVar4 = FUN_1800032f0(param_3);
  puVar5 = FUN_18001a120(&local_18,uVar4);
  puVar5 = FUN_18001a080(param_1,local_10,local_28,&DAT_18002dbfb,puVar5,local_30);
  FUN_180006e30(param_2,puVar5,&local_48);
  return param_2;
}




CLogWriter *
FUN_180019a00(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  CLogWriter *pCVar1;
  undefined8 uVar2;
  CLogWriter *local_res18;
  undefined8 local_res20;
  CLogWriter local_37;
  CLogWriter local_36 [6];
  longlong local_30;
  CLogWriter *local_28;
  longlong local_20;
  CLogWriter *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_30 = FUN_1800032f0(param_1);
  local_20 = FUN_1800032f0(param_2);
  pCVar1 = (CLogWriter *)FUN_1800075b0(&local_30,&local_20);
  local_28 = CLogWriter::operator=(local_res18,pCVar1);
  local_18 = &local_37;
  FUN_1800196d0();
  CLogWriter::operator=(local_18,local_36);
  uVar2 = FUN_180019ad0(local_30,local_20,local_28,local_res20);
  FUN_180001a80(&local_res18,uVar2);
  return local_res18;
}




undefined8 FUN_180019ad0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  longlong local_28 [5];
  
  FUN_18001b5c0(local_28,param_3,param_4);
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 8) {
    uVar1 = FUN_1800032f0(local_res8);
    FUN_180017e30((longlong)local_28,uVar1);
  }
  uVar1 = FUN_18001e550(local_28);
  FUN_18001bf30(local_28);
  return uVar1;
}




undefined8 * FUN_180019b60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001ab30(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001ad90(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_180003810(param_1,local_28);
  FUN_18001be00(&local_20);
  return param_1;
}




undefined8 * FUN_180019c10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001ab90(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001ae90(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_180003810(param_1,local_28);
  FUN_18001be00(&local_20);
  return param_1;
}




undefined8 * FUN_180019cc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001abf0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001af80(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_180003810(param_1,local_28);
  FUN_18001be00(&local_20);
  return param_1;
}




undefined8 * FUN_180019d70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001ac50(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001b060(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_180003810(param_1,local_28);
  FUN_18001be00(&local_20);
  return param_1;
}




undefined8 * FUN_180019e20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001acb0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001b140(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_180003810(param_1,local_28);
  FUN_18001be00(&local_20);
  return param_1;
}




void FUN_180019ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  CLogWriter *pCVar1;
  byte *pbVar2;
  CLogWriter local_48 [8];
  CLogWriter *local_40;
  CLogWriter *local_38;
  CLogWriter *local_30;
  CLogWriter *local_28;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_20;
  CLogWriter local_18 [24];
  
  local_20 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_180009280(0x38,param_2);
  local_40 = local_48;
  local_38 = local_18;
  pCVar1 = (CLogWriter *)FUN_1800032f0(param_5);
  local_30 = CLogWriter::operator=(local_40,pCVar1);
  pCVar1 = (CLogWriter *)FUN_1800032f0(param_4);
  local_28 = FUN_180009180(local_38,pCVar1);
  pbVar2 = (byte *)FUN_1800032f0(param_3);
  FUN_180017200(local_20,(ulonglong)*pbVar2,local_28);
  return;
}




void FUN_180019f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_180009280(8,param_2);
  puVar2 = (undefined8 *)FUN_1800032f0(param_3);
  FUN_18001a5c0(plVar1,puVar2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> >::destroy<class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> >(class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_1187368b38821e05d57fc25412a6151f>,class std::allocator<int>,void,unsigned __int64 const &
   __ptr64> >::destroy<class std::_Func_impl<class <lambda_1187368b38821e05d57fc25412a6151f>,class
   std::allocator<int>,void,unsigned __int64 const & __ptr64> >(class std::_Func_impl<class
   <lambda_1187368b38821e05d57fc25412a6151f>,class std::allocator<int>,void,unsigned __int64 const &
   __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> >::destroy<class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> >(class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_663e0bd7633808f1ab348a7d98e0888e>,class std::allocator<int>,void,class
   Concurrency::message<enum Concurrency::agent_status> * __ptr64> >::destroy<class
   std::_Func_impl<class <lambda_663e0bd7633808f1ab348a7d98e0888e>,class
   std::allocator<int>,void,class Concurrency::message<enum Concurrency::agent_status> * __ptr64>
   >(class std::_Func_impl<class <lambda_663e0bd7633808f1ab348a7d98e0888e>,class
   std::allocator<int>,void,class Concurrency::message<enum Concurrency::agent_status> * __ptr64> *
   __ptr64) __ptr64
     7 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void destroy<>(undefined8 param_1,
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  FUN_18001ca00(param_2,0);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> >::destroy<class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> >(class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_1187368b38821e05d57fc25412a6151f>,class std::allocator<int>,void,unsigned __int64 const &
   __ptr64> >::destroy<class std::_Func_impl<class <lambda_1187368b38821e05d57fc25412a6151f>,class
   std::allocator<int>,void,unsigned __int64 const & __ptr64> >(class std::_Func_impl<class
   <lambda_1187368b38821e05d57fc25412a6151f>,class std::allocator<int>,void,unsigned __int64 const &
   __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> >::destroy<class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> >(class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_663e0bd7633808f1ab348a7d98e0888e>,class std::allocator<int>,void,class
   Concurrency::message<enum Concurrency::agent_status> * __ptr64> >::destroy<class
   std::_Func_impl<class <lambda_663e0bd7633808f1ab348a7d98e0888e>,class
   std::allocator<int>,void,class Concurrency::message<enum Concurrency::agent_status> * __ptr64>
   >(class std::_Func_impl<class <lambda_663e0bd7633808f1ab348a7d98e0888e>,class
   std::allocator<int>,void,class Concurrency::message<enum Concurrency::agent_status> * __ptr64> *
   __ptr64) __ptr64
     7 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void destroy<>(undefined8 param_1,longlong *param_2)

{
  FUN_18001c9c0(param_2,0);
  return;
}




void FUN_18001a010(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_18000a200(param_1);
  if (bVar1) {
    uVar2 = FUN_1800032f0(param_2);
    FUN_180017e90(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800032f0(param_2);
    plVar3 = (longlong *)FUN_180003cc0(param_1);
    FUN_180017f50(param_1,*plVar3,uVar2);
  }
  return;
}




undefined8 *
FUN_18001a080(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  _Container_proxy *p_Var4;
  
  uVar1 = FUN_1800032f0(param_6);
  uVar2 = FUN_1800032f0(param_5);
  uVar3 = FUN_1800032f0(param_4);
  p_Var4 = FUN_180017cb0(param_1,uVar3,uVar2,uVar1);
  FUN_1800185d0(param_1,param_2,param_3,p_Var4 + 0x20,p_Var4);
  return param_2;
}




undefined8 * FUN_18001a120(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800032f0(param_2);
  FUN_1800176d0(param_1,uVar1);
  return param_1;
}




undefined8 * FUN_18001a150(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800032f0(param_3);
  FUN_1800198b0(param_1,param_2,uVar1);
  return param_2;
}




IObject * FUN_18001a190(IObject *param_1)

{
  FUN_18001b750(param_1);
  *(undefined ***)param_1 = CModuleImpl<class_CPartitionRecoveryDModule>::vftable;
  return param_1;
}




IObject * FUN_18001a1c0(IObject *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001a490(param_1,param_2,param_3,param_4);
  FUN_18001bad0((undefined8 *)(param_1 + 0x100));
  *(undefined ***)param_1 = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x20) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x28) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x100) = CMomAggObject<class_CRecoverySearchEngine>::vftable;
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  return param_1;
}




IObject * FUN_18001a2a0(IObject *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001a1c0(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 0x10) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 0x18) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 0x20) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 0x28) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined ***)(param_1 + 0x100) =
       CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>::vftable;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return param_1;
}




IObject * FUN_18001a360(IObject *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800175b0(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x20) = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x28) = CMomCloneObject<class_CRecoverySearchEngine>::vftable;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return param_1;
}




_AfxBindHost * FUN_18001a400(_AfxBindHost *param_1)

{
  _AfxBindHost::_AfxBindHost(param_1);
  *(undefined ***)param_1 =
       CMomEventObject<class_CModuleImpl<class_CPartitionRecoveryDModule>_>::vftable;
  FUN_18001b6d0((undefined8 *)(param_1 + 0x10));
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl _AfxBindHost::_AfxBindHost(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

_AfxBindHost * __thiscall _AfxBindHost::_AfxBindHost(_AfxBindHost *this)

{
  FUN_18001a190((IObject *)this);
  *(undefined ***)this = CMomObject<class_CModuleImpl<class_CPartitionRecoveryDModule>_>::vftable;
  *(undefined4 *)(this + 8) = 0;
  return this;
}




IObject * FUN_18001a490(IObject *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001b780(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x20) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined ***)(param_1 + 0x28) = CMomObject<class_CRecoverySearchEngine>::vftable;
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  return param_1;
}




longlong *
FUN_18001a540(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,(IObject *)*param_2,param_3,param_4);
  return param_1;
}




longlong *
FUN_18001a580(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,(IObject *)*param_2,param_3,param_4);
  return param_1;
}




longlong * FUN_18001a5c0(longlong *param_1,undefined8 *param_2)

{
  CTempBuffer<>(param_1,(IObject *)*param_2);
  return param_1;
}




longlong *
FUN_18001a600(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,(IObject *)*param_2,param_3,param_4);
  return param_1;
}




longlong *
FUN_18001a640(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,(IObject *)*param_2,param_3,param_4);
  return param_1;
}




longlong *
FUN_18001a680(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,(IObject *)*param_2,param_3,param_4);
  return param_1;
}




longlong *
FUN_18001a6c0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,(IObject *)*param_2,param_3,param_4);
  return param_1;
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

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_18001d9a0(param_1,param_2,param_3,param_4);
  return param_1;
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

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_18000ca10(param_1,param_2,param_3,param_4);
  return param_1;
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
  FUN_18001da60(param_1,param_2);
  return param_1;
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

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_18001db20(param_1,param_2,param_3,param_4);
  return param_1;
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

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_18001dbe0(param_1,param_2,param_3,param_4);
  return param_1;
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

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_18001dca0(param_1,param_2,param_3,param_4);
  return param_1;
}




_AfxBindHost * FUN_18001a880(_AfxBindHost *param_1)

{
  FUN_18001a400(param_1);
  *(undefined ***)param_1 =
       CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CPartitionRecoveryDModule>_>_>
       ::vftable;
  return param_1;
}




undefined8 * FUN_18001a8c0(undefined8 *param_1)

{
  FUN_18001b1b0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001a900(undefined8 *param_1)

{
  FUN_18001b1f0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001a930(undefined8 *param_1)

{
  FUN_18001b220(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001a970(undefined8 *param_1)

{
  FUN_18001b260(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001a9a0(undefined8 *param_1)

{
  FUN_18001b290(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001a9e0(undefined8 *param_1)

{
  FUN_18001b2d0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001aa10(undefined8 *param_1)

{
  FUN_18001b370(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001aa50(undefined8 *param_1)

{
  FUN_18001b3b0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001aa80(undefined8 *param_1)

{
  FUN_18001b3e0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001aac0(undefined8 *param_1)

{
  FUN_18001b420(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001aaf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x10))(*param_2);
  *param_1 = uVar1;
  return param_1;
}




undefined8 * FUN_18001ab30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001a900(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001ab90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001a970(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001abf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001a9e0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001ac50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001aa50(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001acb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001aac0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001ad10(undefined8 *param_1,longlong param_2)

{
  FUN_18001b300(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18001aaf0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_18001ad90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001b340(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18001aaf0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_18001ae10(undefined8 *param_1,longlong param_2)

{
  FUN_18001b300(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>,2>
             ::vftable;
  FUN_18001aaf0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_18001ae90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001b340(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>,2>
             ::vftable;
  FUN_18001aaf0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_18001af10(undefined8 *param_1,longlong param_2)

{
  FUN_18001b300(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18001aaf0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001af80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_18001b340(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18001aaf0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001aff0(undefined8 *param_1,longlong param_2)

{
  FUN_18001b450(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(int_const&___ptr64)>,1>
             ::vftable;
  FUN_18001aaf0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001b060(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_18001b490(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(int_const&___ptr64)>,1>
             ::vftable;
  FUN_18001aaf0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001b0d0(undefined8 *param_1,longlong param_2)

{
  FUN_18001b450(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>,1>
             ::vftable;
  FUN_18001aaf0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001b140(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_18001b490(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>,1>
             ::vftable;
  FUN_18001aaf0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001b1b0(undefined8 *param_1)

{
  FUN_18001ba90(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b1f0(undefined8 *param_1)

{
  FUN_18001bab0(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b220(undefined8 *param_1)

{
  FUN_18001ba90(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b260(undefined8 *param_1)

{
  FUN_18001bab0(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b290(undefined8 *param_1)

{
  FUN_18001ba90(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b2d0(undefined8 *param_1)

{
  FUN_18001bab0(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b300(undefined8 *param_1)

{
  FUN_18001ba90(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b340(undefined8 *param_1)

{
  FUN_18001bab0(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b370(undefined8 *param_1)

{
  FUN_18001ba90(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b3b0(undefined8 *param_1)

{
  FUN_18001bab0(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b3e0(undefined8 *param_1)

{
  FUN_18001ba90(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b420(undefined8 *param_1)

{
  FUN_18001bab0(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b450(undefined8 *param_1)

{
  FUN_18001ba90(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001b490(undefined8 *param_1)

{
  FUN_18001bab0(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




longlong FUN_18001b4c0(longlong param_1)

{
  FUN_180017250(param_1);
  return param_1;
}




longlong FUN_18001b4f0(longlong param_1)

{
  FUN_1800032f0(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}




undefined8 * FUN_18001b540(undefined8 *param_1,undefined8 param_2)

{
  FUN_18001b580(param_1,param_2);
  return param_1;
}




undefined8 * FUN_18001b580(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_18;
  byte local_17;
  
  FUN_180006e80(param_1,(ulonglong)local_17,param_2,&local_18);
  FUN_18001e1f0(param_1);
  return param_1;
}




undefined8 * FUN_18001b5c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >(class std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> > && __ptr64) __ptr64
    public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > && __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
basic_string<>(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1
              ,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  uVar1 = FUN_180003c60(param_2);
  uVar1 = FUN_1800032f0(uVar1);
  FUN_180017690((longlong)param_1,uVar1);
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_1800032f0(param_2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _Assign_rv_contents_with_alloc_always_equal(param_1,uVar1,local_18[0]);
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(char const *
   __ptr64 const) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1)

{
  FUN_18001b4c0((longlong)this);
  _Tidy_init(this);
  assign(this,param_1);
  return this;
}




undefined8 * FUN_18001b6d0(undefined8 *param_1)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001b540(param_1,local_18);
  return param_1;
}




undefined8 * FUN_18001b700(undefined8 *param_1,undefined8 param_2,char param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (param_3 != '\0') {
    FUN_18001d6d0(param_1,0xffffffff);
  }
  return param_1;
}




IObject * FUN_18001b750(IObject *param_1)

{
  FUN_18001bb80(param_1);
  *(undefined ***)param_1 = CPartitionRecoveryDModule::vftable;
  return param_1;
}




IObject * FUN_18001b780(IObject *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  IObject *pIVar2;
  IObject *pIVar3;
  
  FUN_18001bbd0(param_1,param_2);
  FUN_18001bcd0(param_1 + 0x28,param_2 + 0x28);
  *(undefined ***)param_1 = CRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 8) = CRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x10) = CRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x18) = CRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x20) = CRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x28) = CRecoverySearchEngine::vftable;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  pIVar2 = param_2 + 0x38;
  pIVar3 = param_1 + 0x38;
  for (lVar1 = 0x28; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pIVar3 = *pIVar2;
    pIVar2 = pIVar2 + 1;
    pIVar3 = pIVar3 + 1;
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  FUN_18001a6c0((longlong *)(param_1 + 0x90),(undefined8 *)(param_2 + 0x90),param_3,param_4);
  FUN_18001a680((longlong *)(param_1 + 0x98),(undefined8 *)(param_2 + 0x98),param_3,param_4);
  FUN_18001a640((longlong *)(param_1 + 0xa0),(undefined8 *)(param_2 + 0xa0),param_3,param_4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  FUN_18001a580((longlong *)(param_1 + 0xb0),(undefined8 *)(param_2 + 0xb0),param_3,param_4);
  FUN_18001a600((longlong *)(param_1 + 0xb8),(undefined8 *)(param_2 + 0xb8),param_3,param_4);
  FUN_18001a600((longlong *)(param_1 + 0xc0),(undefined8 *)(param_2 + 0xc0),param_3,param_4);
  FUN_18001a540((longlong *)(param_1 + 200),(undefined8 *)(param_2 + 200),param_3,param_4);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  return param_1;
}




undefined8 * FUN_18001ba90(undefined8 *param_1)

{
  *param_1 = dnc::FunctorObjectBase::vftable;
  return param_1;
}




undefined8 * FUN_18001bab0(undefined8 *param_1)

{
  *param_1 = dnc::FunctorObjectBase::vftable;
  return param_1;
}




undefined8 * FUN_18001bad0(undefined8 *param_1)

{
  *param_1 = IAggObject::vftable;
  return param_1;
}




undefined8 * FUN_18001baf0(undefined8 *param_1)

{
  *param_1 = IAggObject::vftable;
  return param_1;
}




undefined8 * FUN_18001bb10(undefined8 *param_1)

{
  *param_1 = IAsyncProgressInformation::vftable;
  return param_1;
}




undefined8 * FUN_18001bb30(undefined8 *param_1)

{
  *param_1 = IAsyncSearchResult::vftable;
  return param_1;
}




IObject * FUN_18001bb50(IObject *param_1)

{
  IObject::IObject(param_1);
  *(undefined ***)param_1 = IModule::vftable;
  return param_1;
}




IObject * FUN_18001bb80(IObject *param_1)

{
  FUN_18001bb50(param_1);
  *(undefined ***)param_1 = IPartitionRecoveryDModule::vftable;
  return param_1;
}




undefined8 * FUN_18001bbb0(undefined8 *param_1)

{
  *param_1 = IRecoverySearchControl::vftable;
  return param_1;
}




IObject * FUN_18001bbd0(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  FUN_18001bcb0((undefined8 *)(param_1 + 8));
  FUN_18001bbb0((undefined8 *)(param_1 + 0x10));
  FUN_18001bb10((undefined8 *)(param_1 + 0x18));
  FUN_18001bb30((undefined8 *)(param_1 + 0x20));
  *(undefined ***)param_1 = IRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 8) = IRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x10) = IRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x18) = IRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x20) = IRecoverySearchEngine::vftable;
  return param_1;
}




undefined8 * FUN_18001bcb0(undefined8 *param_1)

{
  *param_1 = IRecoverySearchOptions::vftable;
  return param_1;
}




IObject * FUN_18001bcd0(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IRunObject::vftable;
  return param_1;
}




void FUN_18001bd10(undefined8 *param_1)

{
  FUN_18001bda0(param_1);
  return;
}




void FUN_18001bd40(undefined8 *param_1)

{
  FUN_18001bd10(param_1);
  return;
}




void FUN_18001bd70(longlong param_1)

{
  FUN_18001bfa0(param_1 + 0x10);
  return;
}




void FUN_18001bda0(undefined8 *param_1)

{
  FUN_18001f8d0(param_1);
  return;
}




void FUN_18001bdd0(longlong param_1)

{
  FUN_18001bd70(param_1);
  return;
}




void FUN_18001be00(longlong *param_1)

{
  if (*param_1 != 0) {
    free((void *)*param_1);
  }
  return;
}




void FUN_18001be40(IStorageDevice *param_1)

{
  FUN_18001bea0(param_1);
  return;
}




void FUN_18001be70(IStorageDevice *param_1)

{
  FUN_18001be40(param_1);
  return;
}




void FUN_18001bea0(IStorageDevice *param_1)

{
  IStorageDevice::ReleaseBitlocker(param_1);
  return;
}




void FUN_18001bed0(undefined8 param_1)

{
  FUN_18001e5b0(param_1);
  FUN_18001bf00(param_1);
  return;
}




void FUN_18001bf00(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18000a1d0(param_1);
  FUN_18001e350(param_1,(void *)*puVar1);
  return;
}




void FUN_18001bf30(longlong *param_1)

{
  FUN_180017de0(*param_1,param_1[1],param_1[2]);
  return;
}




void FUN_18001bf70(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _Tidy_deallocate(param_1);
  FUN_18001be70((IStorageDevice *)param_1);
  return;
}




void FUN_18001bfa0(undefined8 param_1)

{
  FUN_18001bed0(param_1);
  return;
}




void FUN_18001bfd0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  FUN_18001c010(param_1 + 0x20);
  FUN_18001bf70(param_1);
  return;
}




void FUN_18001c010(undefined8 param_1)

{
  FUN_18001e610(param_1);
  return;
}




void FUN_18001c040(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))(*param_1);
  return;
}




longlong FUN_18001c070(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  lVar1 = FUN_1800032f0(param_2);
  if (param_1 != lVar1) {
    FUN_18001e610(param_1);
    uVar2 = FUN_180003c60(param_2);
    FUN_18001e3b0(param_1,uVar2);
    puVar3 = local_18;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar2 = FUN_1800032f0(param_2);
    FUN_18001e3e0(param_1,uVar2);
  }
  return param_1;
}




bool FUN_18001c100(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_18001c150(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_18001c1a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_18001c1f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(int_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_18001c240(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




void FUN_18001c290(undefined8 *param_1,undefined8 *param_2)

{
  (*(code *)**(undefined8 **)*param_1)(*param_1,*param_2);
  return;
}




undefined8 FUN_18001c2c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18001c290((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_18001c330(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18001c290((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_18001c3a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRecoverySearchEngine>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18001c290((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_18001c410(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(int_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18001c290((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_18001c480(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRecoverySearchEngine>*___ptr64___cdecl(class_CMomCloneObject<class_CRecoverySearchEngine>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18001c290((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




longlong FUN_18001c4f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_18 [3];
  
  uVar1 = FUN_1800032f0(param_2);
  plVar2 = FUN_18001a150(param_1,local_18,uVar1);
  lVar3 = FUN_1800093e0(plVar2);
  return lVar3 + 0x20;
}




longlong FUN_18001c530(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  return *plVar1 + param_2 * 8;
}




/* Library Function - Single Match
    public: void __cdecl <lambda_66f57f934f28d61049862f64df852ff0>::operator()(char * __ptr64
   const,unsigned __int64,char const * __ptr64 const)const __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
<lambda_66f57f934f28d61049862f64df852ff0>::operator()
          (<lambda_66f57f934f28d61049862f64df852ff0> *this,char *param_1,__uint64 param_2,
          char *param_3)

{
  undefined1 local_18 [24];
  
  FUN_18001eef0(param_1,param_3,param_2);
  local_18[0] = 0;
  FUN_18001ea00(param_1 + param_2,local_18);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: virtual class Concurrency::details::VirtualProcessor * __ptr64 __cdecl
   Concurrency::details::ThreadScheduler::CreateVirtualProcessor(class
   Concurrency::details::SchedulingNode * __ptr64,struct Concurrency::IVirtualProcessorRoot *
   __ptr64) __ptr64
    public: virtual class Concurrency::details::VirtualProcessor * __ptr64 __cdecl
   Concurrency::details::UMSThreadScheduler::CreateVirtualProcessor(class
   Concurrency::details::SchedulingNode * __ptr64,struct Concurrency::IVirtualProcessorRoot *
   __ptr64) __ptr64
   
   Library: Visual Studio 2010 Debug */

IObject * CreateVirtualProcessor
                    (undefined8 param_1,undefined8 *param_2,IObject *param_3,undefined8 param_4)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x110);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_1800173e0(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




IObject * FUN_18001c630(undefined8 param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x110);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18001a2a0(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




IObject * FUN_18001c6a0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4
                       )

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x100);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180017290(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




IObject * FUN_18001c710(undefined8 param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x100);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18001a360(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




void FUN_18001c780(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*(longlong *)*param_1 + 8))(*param_1,param_2,param_3);
  return;
}




void FUN_18001c7c0(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)*param_1 + 8))(*param_1,param_2);
  return;
}




void FUN_18001c7f0(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
  return;
}




void FUN_18001c820(longlong param_1)

{
  FUN_18001c780((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_18001c860(longlong param_1)

{
  FUN_18001c7c0((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_18001c890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180017790(param_2,param_3);
  return;
}




undefined8 * FUN_18001c8c0(undefined8 *param_1,uint param_2)

{
  FUN_18001bd10(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18001c900(undefined8 *param_1,uint param_2)

{
  FUN_18001bd40(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18001c940(undefined8 *param_1,uint param_2)

{
  FUN_18001bd10(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18001c980(undefined8 *param_1,uint param_2)

{
  FUN_18001bda0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_18001c9c0(longlong *param_1,uint param_2)

{
  FUN_18000c370(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_18001ca00(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             uint param_2)

{
  FUN_18001bfd0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18001ca40(undefined8 *param_1,uint param_2)

{
  FUN_18001f8d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18001ca80(longlong param_1,char *param_2,IObject *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [32];
  ulonglong local_18;
  
  local_88 = 0xfffffffffffffffe;
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_c8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58,param_2);
  FUN_18001f100(param_1 + 0x10,&local_a8,local_58);
  FUN_18001bf70(local_58);
  plVar2 = FUN_18000a9c0(param_1 + 0x10,&local_80);
  bVar1 = FUN_180009290(&local_a8,plVar2);
  if (bVar1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,param_2);
    local_98 = FUN_1800038a0(local_70);
    local_90 = local_98;
    lVar3 = FUN_18001c4f0(param_1 + 0x10,local_38);
    FUN_18001c070(lVar3,local_90);
    FUN_18001c010(local_70);
    FUN_18001bf70(local_38);
    plVar2 = FUN_18000a730(param_1 + 0x10,&local_78);
    local_a8 = *plVar2;
  }
  FUN_1800174a0(&local_a0,param_3);
  lVar3 = FUN_1800093e0(&local_a8);
  FUN_18001f350(lVar3 + 0x20,&local_a0);
  FUN_18000c370(&local_a0);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_18001cc10(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x108) + 0x10))(*(undefined8 *)(param_1 + 0x108));
  return;
}




void FUN_18001cc3c(longlong param_1)

{
  FUN_18001cc10(param_1 + -0x28);
  return;
}




void FUN_18001cc50(longlong param_1)

{
  FUN_18001d600(param_1);
  return;
}




void FUN_18001cc70(longlong param_1)

{
  FUN_18001d620(param_1);
  return;
}




void FUN_18001cc88(longlong param_1)

{
  FUN_18001cc70(param_1 + -0x28);
  return;
}




void FUN_18001cca0(longlong param_1)

{
  FUN_18001d620(param_1 + -0x100);
  return;
}




undefined8 FUN_18001ccd0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong local_res10 [3];
  IStorageDevice *local_48;
  longlong local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  longlong local_18 [3];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    puVar1 = FUN_180019cc0(&local_30,param_1 + -0x100);
    local_48 = FUN_180017b50(puVar1);
    FUN_18001be00(&local_30);
  }
  else {
    local_28 = FUN_180019b60(local_18,local_res10,param_1 + -0x100);
    local_20 = local_28;
    local_48 = FUN_180017b50(local_28);
    FUN_18001be00(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18001f4a0(local_48);
  }
  return uVar2;
}




undefined8 FUN_18001cda0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong local_res10 [3];
  IStorageDevice *local_48;
  longlong local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  longlong local_18 [3];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    puVar1 = FUN_180019e20(&local_30,param_1);
    local_48 = FUN_180017c00(puVar1);
    FUN_18001be00(&local_30);
  }
  else {
    local_28 = FUN_180019c10(local_18,local_res10,param_1);
    local_20 = local_28;
    local_48 = FUN_180017b50(local_28);
    FUN_18001be00(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18001f4a0(local_48);
  }
  return uVar2;
}




void FUN_18001ce60(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_158 [32];
  char *local_138;
  char *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_158;
  if (param_2 != (char *)0x0) {
    local_120 = 0;
    if (*param_2 == '*') {
      FUN_18001f4f0(param_1 + -0x100,param_2,param_3,param_4);
    }
    else {
      local_128 = (undefined8 *)
                  (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 *)(param_1 + 8),0);
      if (local_128 == (undefined8 *)0x0) {
        local_138 = &local_118;
        local_118 = '*';
        for (local_130 = param_2; local_138 = local_138 + 1, *local_130 != '\0';
            local_130 = local_130 + 1) {
          *local_138 = *local_130;
        }
        *local_138 = '\0';
        FUN_18001f4f0(param_1 + -0x100,&local_118,param_3,param_4);
      }
      else {
        (**(code **)*local_128)(local_128,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




int FUN_18001cfe0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = FUN_18001d680(param_1 + -0x100);
  if ((iVar1 == 0) && (plVar2 = (longlong *)(param_1 + -0x100), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x48))(plVar2,1);
  }
  return iVar1;
}




void FUN_18001d060(longlong param_1)

{
  FUN_18001ea20(param_1 + 0x10);
  return;
}




void FUN_18001d080(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))(*(undefined8 *)(param_1 + 0x108),param_2);
  return;
}




void FUN_18001d0b8(longlong param_1,undefined8 param_2)

{
  FUN_18001d080(param_1 + -0x28,param_2);
  return;
}




void FUN_18001d0d0(longlong param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_18001d150(param_1,(ulonglong)local_18,param_2);
  return;
}




void FUN_18001d0f8(longlong param_1,undefined8 param_2)

{
  FUN_18001d0d0(param_1 + -0x28,param_2);
  return;
}




void FUN_18001d110(longlong *param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_18001d190(param_1,(ulonglong)local_18,param_2);
  return;
}




void FUN_18001d138(longlong param_1,undefined8 param_2)

{
  FUN_18001d110((longlong *)(param_1 + -0x28),param_2);
  return;
}




void FUN_18001d144(longlong param_1,__uint64 *param_2)

{
  IStorageDevice::GetInformationOffset((IStorageDevice *)(param_1 + -0x28),param_2);
  return;
}




void FUN_18001d150(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))(*(undefined8 *)(param_1 + 0x108),param_3);
  return;
}




void FUN_18001d190(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x50))(param_1,param_3);
  return;
}




void FUN_18001d1c0(longlong param_1,char *param_2,undefined4 *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [32];
  ulonglong local_10;
  
  local_48[1] = 0xfffffffffffffffe;
  local_10 = DAT_18003a118 ^ (ulonglong)auStack_68;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_30,param_2);
  FUN_18001f100(param_1 + 0x10,local_48,local_30);
  FUN_18001bf70(local_30);
  plVar2 = FUN_18000a9c0(param_1 + 0x10,local_48 + 2);
  bVar1 = FUN_180009290(local_48,plVar2);
  if (bVar1) {
    *param_3 = 0;
  }
  else {
    lVar3 = FUN_1800093e0(local_48);
    lVar3 = FUN_18000af20(lVar3 + 0x20);
    *param_3 = (int)lVar3;
    lVar3 = FUN_1800093e0(local_48);
    FUN_18001c530(lVar3 + 0x20,0);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




undefined4 FUN_18001d2b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




longlong FUN_18001d2c0(longlong param_1,longlong param_2)

{
  undefined8 local_18;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = param_1 + 0x100;
    }
  }
  else {
    local_18 = (**(code **)**(undefined8 **)(param_1 + 0x108))
                         (*(undefined8 *)(param_1 + 0x108),param_2);
  }
  return local_18;
}




void FUN_18001d334(longlong param_1,longlong param_2)

{
  FUN_18001d2c0(param_1 + -0x28,param_2);
  return;
}




void FUN_18001d340(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180016f80(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18001d370(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001f4f0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18001d394(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001d370(param_1 + -0x28,param_2,param_3,param_4);
  return;
}




void FUN_18001d3a0(void)

{
  FUN_180016f70();
  return;
}




void FUN_18001d3c0(void)

{
  FUN_18001f4e0();
  return;
}




void FUN_18001d3d4(void)

{
  FUN_18001d3c0();
  return;
}




void FUN_18001d3e0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x108) = param_2;
  return;
}




IStorageDevice *
FUN_18001d400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *extraout_RAX;
  IObject *pIVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  undefined8 local_18 [3];
  
  uVar5 = (undefined7)((ulonglong)param_3 >> 8);
  uVar4 = (undefined1)param_3;
  if (DAT_18003c228 == (IStorageDevice *)0x0) {
    pvVar3 = ThreadLocalStoragePointer;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_18003c238) && (_Init_thread_header(&DAT_18003c238), DAT_18003c238 == -1)) {
      DAT_18003c230 = (IObject *)FUN_18000c5b0("Thread");
      _Init_thread_footer(&DAT_18003c238);
    }
    if (DAT_18003c230 == (IObject *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   4) < DAT_18003c260) && (_Init_thread_header(&DAT_18003c260), DAT_18003c260 == -1)
         ) {
        FUN_18001a880((_AfxBindHost *)&DAT_18003c240);
        atexit(FUN_18002a980);
        _Init_thread_footer(&DAT_18003c260);
      }
      DAT_18003c228 = (IStorageDevice *)&DAT_18003c240;
      IStorageDevice::ConvertVolume((IStorageDevice *)&DAT_18003c240);
    }
    else {
      FUN_180017890(0,pvVar3,CONCAT71(uVar5,uVar4),param_4);
      pIVar1 = IObject::GetInterfaceEx(DAT_18003c230,extraout_RAX);
      if (pIVar1 != (IObject *)0x0) {
        uVar2 = (**(code **)(*(longlong *)pIVar1 + 0x28))(pIVar1);
        FUN_18001b700(local_18,uVar2,'\x01');
        if (DAT_18003c228 == (IStorageDevice *)0x0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
               DAT_18003c288) && (_Init_thread_header(&DAT_18003c288), DAT_18003c288 == -1)) {
            FUN_18001a880((_AfxBindHost *)&DAT_18003c268);
            atexit(FUN_18002a9a0);
            _Init_thread_footer(&DAT_18003c288);
          }
          DAT_18003c228 = (IStorageDevice *)&DAT_18003c268;
          FUN_18001dd60(local_18);
          IStorageDevice::ConvertVolume(DAT_18003c228);
        }
        FUN_18001c040(local_18);
      }
    }
  }
  return DAT_18003c228;
}




undefined4 FUN_18001d600(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_18001d620(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0xf8);
}




undefined4 FUN_18001d640(longlong param_1)

{
  undefined4 local_18;
  
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  UNLOCK();
  if (*(int *)(param_1 + 8) < 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 8);
  }
  return local_18;
}




undefined4 FUN_18001d680(longlong param_1)

{
  undefined4 local_18;
  
  LOCK();
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + -1;
  UNLOCK();
  if (*(int *)(param_1 + 0xf8) < 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0xf8);
  }
  return local_18;
}




undefined4 FUN_18001d6d0(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))(*param_1,param_2);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return *(undefined4 *)(param_1 + 1);
}




undefined8
FUN_18001d710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = ThreadLocalStoragePointer;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18003c210) {
    _Init_thread_header(&DAT_18003c210);
    if (DAT_18003c210 == -1) {
      DAT_18003c208 = (IObject *)FUN_18000c5b0("Error");
      _Init_thread_footer(&DAT_18003c210);
    }
  }
  if ((DAT_18003c208 != (IObject *)0x0) && (DAT_18003c218 == (IObject *)0x0)) {
    pcVar1 = (char *)FUN_1800177f0(0,pvVar3,param_3,param_4);
    DAT_18003c218 = IObject::GetInterfaceEx(DAT_18003c208,pcVar1);
  }
  if (DAT_18003c218 == (IObject *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)DAT_18003c218 + 0x28))(DAT_18003c218);
  }
  return uVar2;
}




undefined * FUN_18001d7d0(void)

{
  return &DAT_18003a100;
}




void FUN_18001d7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_3;
  uVar3 = param_4;
  lVar1 = __RTtypeid(param_1);
  uVar2 = FUN_18000cd10(lVar1,param_2,uVar2,uVar3);
  FUN_18001d860(0xfffffff6,uVar2,param_3,param_4);
  return;
}




undefined4
FUN_18001d860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001d710(param_1,param_2,param_3,param_4);
  return (int)param_1;
}




void FUN_18001d8a0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x108) + 8))(*(undefined8 *)(param_1 + 0x108));
  return;
}




void FUN_18001d8cc(longlong param_1)

{
  FUN_18001d8a0(param_1 + -0x28);
  return;
}




int FUN_18001d8e0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_18001d640((longlong)param_1);
  if (iVar1 == 0) {
    free(param_1);
  }
  return iVar1;
}




int FUN_18001d920(longlong *param_1)

{
  int iVar1;
  
  iVar1 = FUN_18001d680((longlong)param_1);
  if ((iVar1 == 0) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x48))(param_1,1);
  }
  return iVar1;
}




void FUN_18001d988(longlong param_1)

{
  FUN_18001d920((longlong *)(param_1 + -0x28));
  return;
}




longlong FUN_18001d9a0(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_1800177d0(0,pIVar2,param_3,param_4);
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




longlong FUN_18001da60(longlong *param_1,IObject *param_2)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = FUN_18001d7d0();
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




longlong FUN_18001db20(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_180017850(0,pIVar2,param_3,param_4);
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




longlong FUN_18001dbe0(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_180017870(0,pIVar2,param_3,param_4);
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




longlong FUN_18001dca0(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_1800178b0(0,pIVar2,param_3,param_4);
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




undefined8 FUN_18001dd60(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (-1 < *(int *)(param_1 + 1)) {
    iVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))(*param_1);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 1) < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




/* Library Function - Single Match
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Assign_rv_contents_with_alloc_always_equal(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &&
   __ptr64,struct std::integral_constant<bool,1>) __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
_Assign_rv_contents_with_alloc_always_equal
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *_Dst;
  void *_Src;
  
  uVar1 = FUN_180003c60(param_1);
  uVar2 = FUN_180003c60(this);
  _Dst = (void *)FUN_1800032f0(uVar2);
  _Src = (void *)FUN_1800032f0(uVar1);
  memcpy(_Dst,_Src,0x20);
  _Tidy_init(param_1);
  return;
}




_Container_proxy * FUN_18001de40(undefined8 param_1)

{
  undefined8 uVar1;
  _Container_proxy *local_28;
  allocator<struct_std::_Container_proxy> *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (allocator<struct_std::_Container_proxy> *)FUN_18000a1d0(param_1);
  local_28 = std::allocator<struct_std::_Container_proxy>::allocate(local_20,1);
  uVar1 = FUN_1800032f0(local_28);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_1800032f0(local_28 + 8);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_1800032f0(local_28 + 0x10);
  construct<>(local_20,uVar1,&local_28);
  local_28[0x18] = (_Container_proxy)0x1;
  local_28[0x19] = (_Container_proxy)0x1;
  return local_28;
}




_Container_proxy * FUN_18001df00(undefined8 param_1)

{
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this = (allocator<struct_std::_Container_proxy> *)FUN_18000a1d0(param_1);
  p_Var1 = std::allocator<struct_std::_Container_proxy>::allocate(this,1);
  uVar2 = FUN_18000a1d0(param_1);
  uVar3 = FUN_1800032f0(p_Var1);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_1800032f0(p_Var1 + 8);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_1800032f0(p_Var1 + 0x10);
  construct<>(this,uVar3,uVar2);
  return p_Var1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: unsigned __int64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short>
   >::_Calculate_growth(unsigned __int64)const __ptr64
    public: unsigned __int64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Calculate_growth(unsigned
   __int64)const __ptr64
   
   Library: Visual Studio 2017 Release */

__uint64 FID_conflict__Calculate_growth(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  __uint64 *p_Var3;
  ulonglong local_28;
  longlong local_20;
  __uint64 local_18 [3];
  
  _Var2 = FID_conflict_max_size(param_1);
  local_20 = FUN_180003c60(param_1);
  local_28 = param_2 | 0xf;
  if ((local_28 <= _Var2) && (uVar1 = *(ulonglong *)(local_20 + 0x18), uVar1 <= _Var2 - uVar1 / 2))
  {
    local_18[0] = uVar1 + uVar1 / 2;
    p_Var3 = std::_Max_value<unsigned___int64>(&local_28,local_18);
    _Var2 = *p_Var3;
  }
  return _Var2;
}




void FUN_18001e0a0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_180003ce0(param_1);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)FUN_180003cc0(param_1);
    plVar2 = (longlong *)FUN_180003ca0(param_1);
    FUN_18001e220(param_1,*plVar2,*plVar1);
    lVar3 = FUN_18000a800(param_1);
    puVar4 = (undefined8 *)FUN_180003ca0(param_1);
    uVar5 = FUN_180003c60(param_1);
    FUN_18000a990(uVar5,(void *)*puVar4,lVar3);
  }
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  *plVar1 = param_2 + param_3 * 8;
  plVar1 = (longlong *)FUN_180003c80(param_1);
  *plVar1 = param_2 + param_4 * 8;
  return;
}




void FUN_18001e1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_18001c890(uVar1,param_2,param_3);
  return;
}




void FUN_18001e1f0(undefined8 param_1)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  
  p_Var1 = FUN_18001de40(param_1);
  puVar2 = (undefined8 *)FUN_18000a1d0(param_1);
  *puVar2 = p_Var1;
  return;
}




void FUN_18001e220(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_180017de0(param_2,param_3,uVar1);
  return;
}




void FUN_18001e260(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  
  uVar1 = FUN_18000a1d0(param_1);
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_1800032f0((longlong)param_2 + 0x20);
  destroy<>(uVar1,pbVar2);
  FUN_180018190(uVar1,param_2);
  return;
}




void FUN_18001e2b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined8 *local_18;
  
  local_18 = param_2;
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    FUN_18001e2b0(param_1,(undefined8 *)local_18[2]);
    puVar1 = (undefined8 *)*local_18;
    uVar2 = FUN_18000a1d0(param_1);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_1800032f0(local_18 + 4);
    destroy<>(uVar2,pbVar3);
    FUN_180018190(uVar2,local_18);
    local_18 = puVar1;
  }
  return;
}




void FUN_18001e350(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18000a1d0(param_1);
  FUN_180018190(uVar1,param_2);
  return;
}




/* Library Function - Single Match
    public: bool __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Large_string_engaged(void)const __ptr64
   
   Library: Visual Studio 2017 Release */

bool __thiscall
std::_String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged
          (_String_val<struct_std::_Simple_types<char>_> *this)

{
  return 0xf < *(ulonglong *)(this + 0x18);
}




void FUN_18001e3b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  _Pocma<>(uVar1,param_2);
  return;
}




void FUN_18001e3e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [16];
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_1800032f0(param_2);
  FUN_18001e430(param_1,uVar1);
  return;
}




void FUN_18001e430(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_18001e570(param_1,param_2);
  puVar1 = (undefined8 *)FUN_180003ca0(param_2);
  puVar2 = (undefined8 *)FUN_180003ca0(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_180003cc0(param_2);
  puVar2 = (undefined8 *)FUN_180003cc0(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_180003c80(param_2);
  puVar2 = (undefined8 *)FUN_180003c80(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_180003ca0(param_2);
  *puVar1 = 0;
  puVar1 = (undefined8 *)FUN_180003cc0(param_2);
  *puVar1 = 0;
  puVar1 = (undefined8 *)FUN_180003c80(param_2);
  *puVar1 = 0;
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<char> >::_Myptr(void)
   __ptr64
    public: char const * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Myptr(void)const __ptr64
    public: unsigned short * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<unsigned
   short> >::_Myptr(void) __ptr64
    public: unsigned short const * __ptr64 __cdecl std::_String_val<struct
   std::_Simple_types<unsigned short> >::_Myptr(void)const __ptr64
     6 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_String_val<struct_std::_Simple_types<char>_> *
Myptr(_String_val<struct_std::_Simple_types<char>_> *param_1)

{
  bool bVar1;
  undefined8 local_18;
  
  bVar1 = std::_String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(param_1);
  local_18 = param_1;
  if (bVar1) {
    local_18 = (_String_val<struct_std::_Simple_types<char>_> *)
               FUN_1800032f0(*(undefined8 *)param_1);
  }
  return local_18;
}




undefined8 FUN_18001e550(undefined8 *param_1)

{
  *param_1 = param_1[1];
  return param_1[1];
}




void FUN_18001e570(undefined8 param_1,undefined8 param_2)

{
  FUN_180003c60(param_2);
  FUN_180003c60(param_1);
  FUN_180008d20();
  return;
}




void FUN_18001e5b0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  plVar2 = FUN_18000a9c0(param_1,&local_28);
  lVar1 = *plVar2;
  plVar2 = FUN_18000a730(param_1,&local_20);
  FUN_18001ef60(param_1,local_18,*plVar2,lVar1);
  return;
}




void FUN_18001e610(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_180003ce0(param_1);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)FUN_180003cc0(param_1);
    plVar2 = (longlong *)FUN_180003ca0(param_1);
    FUN_18001e220(param_1,*plVar2,*plVar1);
    lVar3 = FUN_18000a800(param_1);
    puVar4 = (undefined8 *)FUN_180003ca0(param_1);
    uVar5 = FUN_180003c60(param_1);
    FUN_18000a990(uVar5,(void *)*puVar4,lVar3);
    puVar4 = (undefined8 *)FUN_180003ca0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180003cc0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180003c80(param_1);
    *puVar4 = 0;
  }
  return;
}




/* Library Function - Single Match
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Tidy_deallocate(void) __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_deallocate
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  bool bVar1;
  undefined1 local_28 [8];
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  undefined8 local_18;
  void *local_10;
  
  FUN_180003ce0(this);
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180003c60(this);
  bVar1 = _String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(local_20);
  if (bVar1) {
    local_10 = *(void **)local_20;
    local_18 = FUN_180003c60(this);
    FUN_1800032f0(local_20);
    FUN_180008d20();
    FUN_180003f50(local_18,local_10,*(longlong *)(local_20 + 0x18) + 1);
  }
  *(undefined8 *)(local_20 + 0x10) = 0;
  *(undefined8 *)(local_20 + 0x18) = 0xf;
  local_28[0] = 0;
  FUN_18001ea00(local_20,local_28);
  return;
}




/* Library Function - Single Match
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Tidy_init(void) __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_init
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  undefined1 local_18 [8];
  undefined1 *local_10;
  
  local_10 = (undefined1 *)FUN_180003c60(this);
  *(undefined8 *)(local_10 + 0x10) = 0;
  *(undefined8 *)(local_10 + 0x18) = 0xf;
  local_18[0] = 0;
  FUN_18001ea00(local_10,local_18);
  return;
}




void FUN_18001e810(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_180019a00(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_18001e850(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001e810(param_1,param_2,param_3,param_4);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: static void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Xlen(void)
    public: static void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Xlen(void)
   
   Library: Visual Studio 2017 Release */

void FID_conflict__Xlen(void)

{
  std::_Xlength_error("string too long");
  return;
}




/* Library Function - Single Match
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

_Container_proxy * __thiscall
std::allocator<struct_std::_Container_proxy>::allocate
          (allocator<struct_std::_Container_proxy> *this,__uint64 param_1)

{
  __uint64 _Var1;
  _Container_proxy *p_Var2;
  
  _Var1 = _Get_size_of_n<16>(param_1);
  p_Var2 = (_Container_proxy *)_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return p_Var2;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const * __ptr64 const) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1)

{
  undefined8 uVar1;
  __uint64 _Var2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  
  uVar1 = FUN_18001f1e0(param_1);
  _Var2 = FUN_1800032f0(uVar1);
  pbVar3 = assign(this,param_1,_Var2);
  return pbVar3;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const * __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1,__uint64 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28;
  undefined1 local_27 [7];
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  _String_val<struct_std::_Simple_types<char>_> *local_18;
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180003c60(this);
  if (*(ulonglong *)(local_20 + 0x18) < param_2) {
    puVar2 = local_27;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = _Reallocate_for<class_<lambda_66f57f934f28d61049862f64df852ff0>,char_const*___ptr64>
                     (this,param_2,local_27[0],param_1);
  }
  else {
    local_18 = Myptr(local_20);
    *(__uint64 *)(local_20 + 0x10) = param_2;
    FUN_18001f310(local_18,param_1,param_2);
    local_28 = 0;
    FUN_18001ea00(local_18 + param_2,&local_28);
  }
  return this;
}




void FUN_18001ea00(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_18001ea20(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)FUN_18000a1d0(param_1);
  lVar1 = *plVar2;
  puVar3 = (undefined8 *)FUN_18000a400(plVar2);
  FUN_18001e2b0(param_1,(undefined8 *)*puVar3);
  plVar4 = (longlong *)FUN_18000a400(plVar2);
  *plVar4 = lVar1;
  plVar4 = (longlong *)FUN_180002800(plVar2);
  *plVar4 = lVar1;
  plVar4 = (longlong *)FUN_18000a3e0(plVar2);
  *plVar4 = lVar1;
  plVar2[1] = 0;
  return;
}




undefined8 * FUN_18001eac0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001a8c0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_18001eb10(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001a930(puVar1);
  }
  return local_10;
}




undefined8 * FUN_18001eb60(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001a9a0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_18001ebb0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001aa10(puVar1);
  }
  return local_10;
}




undefined8 * FUN_18001ec00(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001aa80(puVar1);
  }
  return local_10;
}




undefined8 * FUN_18001ec50(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001ad10(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_18001ecb0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001ae10(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_18001ed10(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001af10(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_18001ed70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001aff0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_18001edd0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001b0d0(puVar1,param_1);
  }
  return local_20;
}




void FUN_18001ee30(undefined8 param_1,undefined8 param_2)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  _String_val<struct_std::_Simple_types<char>_> *p_Var2;
  _String_val<struct_std::_Simple_types<char>_> *p_Var3;
  _String_val<struct_std::_Simple_types<char>_> *p_Var4;
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180003c60(param_1);
  p_Var2 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180003c60(param_2);
  p_Var3 = Myptr(p_Var2);
  p_Var4 = Myptr(p_Var1);
  FUN_180019830(p_Var4,*(ulonglong *)(p_Var1 + 0x10),p_Var3,*(ulonglong *)(p_Var2 + 0x10));
  return;
}




void FUN_18001eeb0(void *param_1,void *param_2,size_t param_3)

{
  memcmp(param_1,param_2,param_3);
  return;
}




void FUN_18001eef0(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return;
}




void FUN_18001ef30(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x58);
  return;
}




undefined8 * FUN_18001ef60(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *local_res18;
  longlong local_res20;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_res18 = (undefined8 *)param_3;
  local_res20 = param_4;
  plVar2 = FUN_18000a730(param_1,&local_28);
  bVar1 = FUN_180009290((longlong *)&local_res18,plVar2);
  if (bVar1) {
    plVar2 = FUN_18000a9c0(param_1,&local_20);
    bVar1 = FUN_180009290(&local_res20,plVar2);
    if (bVar1) {
      FUN_18001ea20(param_1);
      FUN_18000a730(param_1,param_2);
      return param_2;
    }
  }
  while (bVar1 = FUN_180009320((longlong *)&local_res18,&local_res20), bVar1) {
    plVar2 = FUN_180009460((longlong *)&local_res18,&local_18);
    FUN_18001f050(param_1,local_10,(longlong *)*plVar2);
  }
  uVar3 = FUN_18000a1d0(param_1);
  FUN_1800032f0(uVar3);
  FUN_180009060(param_2,local_res18);
  return local_res18;
}




undefined8 * FUN_18001f050(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  longlong *local_10 [2];
  
  plVar1 = (longlong *)FUN_18000a1d0(param_1);
  local_10[0] = param_3;
  FUN_1800094b0((longlong *)local_10);
  plVar2 = FUN_180009bf0(plVar1,param_3);
  uVar3 = FUN_18000a1d0(param_1);
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_1800032f0(plVar2 + 4);
  destroy<>(uVar3,pbVar4);
  FUN_180018190(uVar3,plVar2);
  FUN_1800032f0(plVar1);
  FUN_180009060(param_2,local_10[0]);
  return param_2;
}




undefined8 * FUN_18001f100(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18 [3];
  
  FUN_18001f210(param_1,&local_48,param_3);
  plVar3 = FUN_18000a9c0(param_1,&local_20);
  bVar1 = FUN_180009290(&local_48,plVar3);
  if (!bVar1) {
    local_38 = FUN_18000a250(param_1,local_48);
    uVar4 = FUN_180003c60(param_1);
    cVar2 = FUN_18001c890(uVar4,param_3,local_38);
    if (cVar2 == '\0') {
      local_40 = local_30;
      goto LAB_18001f1b4;
    }
  }
  local_40 = FUN_18000a9c0(param_1,local_18);
LAB_18001f1b4:
  *param_2 = *local_40;
  return param_2;
}




void FUN_18001f1e0(char *param_1)

{
  strlen(param_1);
  return;
}




undefined8 * FUN_18001f210(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_18000a1d0(param_1);
  FUN_1800032f0(uVar1);
  puVar2 = FUN_180019580(param_1,param_3);
  FUN_180009060(param_2,puVar2);
  return param_2;
}




undefined8 FUN_18001f270(void)

{
  return 0x2e8ba2e8ba2e8ba;
}




void FUN_18001f280(undefined8 param_1)

{
  FUN_18000a1d0(param_1);
  FUN_18001f270();
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: unsigned __int64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::max_size(void)const
   __ptr64
    public: unsigned __int64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::max_size(void)const __ptr64
   
   Library: Visual Studio 2017 Release */

__uint64 FID_conflict_max_size(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_38;
  __uint64 local_30;
  __uint64 local_28;
  __uint64 local_20;
  __uint64 local_18 [3];
  
  FUN_180003c60(param_1);
  local_30 = FUN_180003f90();
  local_38 = 0x10;
  p_Var1 = std::_Max_value<unsigned___int64>(&local_30,&local_38);
  local_28 = *p_Var1;
  local_20 = local_28 - 1;
  local_18[0] = FUN_180003f80();
  p_Var1 = std::_Min_value<unsigned___int64>(local_18,&local_20);
  return *p_Var1;
}




void FUN_18001f310(void *param_1,void *param_2,size_t param_3)

{
  memmove(param_1,param_2,param_3);
  return;
}




void FUN_18001f350(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800032f0(param_2);
  FUN_18001a010(param_1,uVar1);
  return;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CRangleLocationGen::vftable;
  FUN_18000ef70((undefined8 *)this);
  return;
}




void FUN_18001f3c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}




undefined8 * FUN_18001f400(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18000ef90(param_1);
  *param_1 = CRangleLocationGen::vftable;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}




ios_base * FUN_18001f460(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_18001f4a0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18001f4c0(undefined8 param_1)

{
  return param_1;
}




char * FUN_18001f4e0(void)

{
  return "CRecoverySearchEngine";
}




undefined8 FUN_18001f4f0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  uint local_38;
  char *local_30;
  char *local_28;
  
  if (param_2 == (char *)0x0) {
    param_1 = 0;
  }
  else {
    local_38 = (uint)(*param_2 == '*');
    if (param_2[(int)local_38] != '1') {
      local_28 = (char *)FUN_180023430(0,param_2,param_3,param_4);
      local_30 = param_2 + (int)local_38;
      for (; ((*local_30 == *local_28 && (*local_30 != '\0')) && (*local_28 != '\0'));
          local_28 = local_28 + 1) {
        local_30 = local_30 + 1;
      }
      if (*local_30 != *local_28) {
        param_1 = 0;
      }
    }
  }
  return param_1;
}




IObject * FUN_18001f610(IObject *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  IObject *pIVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_18 [3];
  
  FUN_1800243e0(param_1);
  FUN_1800244b0(param_1 + 0x28);
  *(undefined ***)param_1 = CRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 8) = CRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x10) = CRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x18) = CRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x20) = CRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x28) = CRecoverySearchEngine::vftable;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_180024040((undefined8 *)(param_1 + 0x90));
  FUN_180024040((undefined8 *)(param_1 + 0x98));
  FUN_18000c180((undefined8 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_180024040((undefined8 *)(param_1 + 0xb0));
  FUN_180024040((undefined8 *)(param_1 + 0xb8));
  FUN_180024040((undefined8 *)(param_1 + 0xc0));
  FUN_180024040((undefined8 *)(param_1 + 200));
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_180025c30((undefined4 *)(param_1 + 0xf0));
  pIVar1 = (IObject *)FUN_18000bfd0("Thread");
  FUN_1800230f0((longlong *)(param_1 + 0x90),pIVar1,param_3,param_4);
  lVar2 = FUN_180002800((undefined8 *)(param_1 + 0x90));
  if (lVar2 != 0) {
    puVar3 = FUN_18000c3d0((undefined8 *)(param_1 + 0x90),local_18);
    plVar4 = (longlong *)FUN_180002800(puVar3);
    pIVar1 = (IObject *)(**(code **)(*plVar4 + 0x40))(plVar4);
    FUN_180023090((longlong *)(param_1 + 0xa0),pIVar1,param_3,param_4);
  }
  return param_1;
}




void FUN_18001f8d0(undefined8 *param_1)

{
  *param_1 = CRecoverySearchEngine::vftable;
  param_1[1] = CRecoverySearchEngine::vftable;
  param_1[2] = CRecoverySearchEngine::vftable;
  param_1[3] = CRecoverySearchEngine::vftable;
  param_1[4] = CRecoverySearchEngine::vftable;
  param_1[5] = CRecoverySearchEngine::vftable;
  FUN_180025c50();
  FUN_18000c370(param_1 + 0x19);
  FUN_18000c370(param_1 + 0x18);
  FUN_18000c370(param_1 + 0x17);
  FUN_18000c370(param_1 + 0x16);
  FUN_18000c370(param_1 + 0x14);
  FUN_18000c370(param_1 + 0x13);
  FUN_18000c370(param_1 + 0x12);
  return;
}




undefined8 FUN_18001f9f0(void)

{
  return 0;
}




undefined4 FUN_18001fa00(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 local_30 [4];
  
  lVar3 = param_1 + 0x98;
  uVar6 = 1000;
  FUN_180024230(local_30,lVar3,1000);
  cVar1 = FUN_180024e50((longlong)local_30);
  if (cVar1 == '\0') {
    FUN_180024620(local_30);
    uVar2 = 0xfffffff3;
  }
  else {
    puVar5 = (undefined1 *)(param_1 + 0x30);
    for (lVar4 = 0x28; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_180020d60(param_1 + -8,lVar3,uVar6,param_4);
    FUN_180024620(local_30);
  }
  return uVar2;
}




undefined4 FUN_18001fab0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 local_28 [3];
  
  FUN_180024230(local_28,param_1 + 0x98,1000);
  cVar1 = FUN_180024e50((longlong)local_28);
  if (cVar1 == '\0') {
    FUN_180024620(local_28);
    uVar2 = 0xfffffff3;
  }
  else {
    puVar4 = (undefined1 *)(param_1 + 0x30);
    for (lVar3 = 0x28; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    FUN_180024620(local_28);
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_18001fb50(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  IObject *pIVar7;
  longlong local_40;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  lVar3 = FUN_180002800((undefined8 *)(param_1 + 0xa8));
  if ((lVar3 == 0) || (lVar3 = FUN_180002800((undefined8 *)(param_1 + 0xb8)), lVar3 == 0)) {
    uVar4 = 0xfffffff6;
  }
  else {
    puVar5 = FUN_18000c3d0((undefined8 *)(param_1 + 0xa8),&local_28);
    lVar3 = FUN_180002800(puVar5);
    (**(code **)(*(longlong *)(lVar3 + 8) + 0x18))((longlong *)(lVar3 + 8));
    if ((*(longlong *)(param_1 + 0x50) == 0) || (*(longlong *)(param_1 + 0x60) == 0)) {
      uVar4 = 0xfffffff5;
    }
    else {
      iVar2 = FUN_180024c20(param_1 + -0x10);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        if (param_1 == 0x10) {
          local_40 = 0;
        }
        else {
          local_40 = param_1 + 0x18;
        }
        puVar5 = FUN_18000c3d0((undefined8 *)(param_1 + 0x80),&local_20);
        plVar6 = (longlong *)FUN_180002800(puVar5);
        uVar4 = 0;
        pIVar7 = (IObject *)(**(code **)(*plVar6 + 0x38))(plVar6,local_40);
        FUN_1800230c0((longlong *)(param_1 + 0x88),pIVar7,uVar4,param_4);
        bVar1 = FUN_180024740((longlong *)(param_1 + 0x88));
        if (bVar1) {
          return 0xfffffffb;
        }
        puVar5 = FUN_18000c3d0((undefined8 *)(param_1 + 0x88),local_18);
        plVar6 = (longlong *)FUN_180002800(puVar5);
        iVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
        if (-1 < iVar2) {
          FUN_180024f20(param_1 + -0x10,1);
          iVar2 = *(int *)(param_1 + 0x70) + 1;
          *(int *)(param_1 + 0x70) = iVar2;
          *param_2 = iVar2;
          return 0;
        }
      }
      uVar4 = 0xfffffffd;
    }
  }
  return uVar4;
}




undefined8 FUN_18001fdc0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 1;
  return 0;
}




undefined8 FUN_18001fde0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  return 0;
}




undefined8 FUN_18001fe00(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_10 [2];
  
  *(undefined4 *)(param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  lVar1 = FUN_180002800((undefined8 *)(param_1 + 0x88));
  if (lVar1 == 0) {
    uVar4 = 0xfffffff4;
  }
  else {
    puVar2 = FUN_18000c3d0((undefined8 *)(param_1 + 0x88),local_10);
    plVar3 = (longlong *)FUN_180002800(puVar2);
    (**(code **)(*plVar3 + 0x58))(plVar3);
    FUN_180024f20(param_1 + -0x10,0);
    uVar4 = 0;
  }
  return uVar4;
}




undefined4 FUN_18001fea0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_18 [3];
  
  FUN_180024230(local_18,param_1 + 0x88,1000);
  cVar1 = FUN_180024e50((longlong)local_18);
  if (cVar1 == '\0') {
    FUN_180024620(local_18);
    uVar2 = 0xfffffff3;
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = param_2;
    *(undefined8 *)(param_1 + 0x50) = param_3;
    FUN_180024620(local_18);
    uVar2 = 0;
  }
  return uVar2;
}




undefined4 FUN_18001ff50(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_18 [3];
  
  FUN_180024230(local_18,param_1 + 0x88,1000);
  cVar1 = FUN_180024e50((longlong)local_18);
  if (cVar1 == '\0') {
    FUN_180024620(local_18);
    uVar2 = 0xfffffff3;
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_180024620(local_18);
    uVar2 = 0;
  }
  return uVar2;
}




undefined4 FUN_18001ffe0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_18 [3];
  
  FUN_180024230(local_18,param_1 + 0x80,1000);
  cVar1 = FUN_180024e50((longlong)local_18);
  if (cVar1 == '\0') {
    FUN_180024620(local_18);
    uVar2 = 0xfffffff3;
  }
  else {
    *(undefined8 *)(param_1 + 0x50) = param_2;
    *(undefined8 *)(param_1 + 0x58) = param_3;
    FUN_180024620(local_18);
    uVar2 = 0;
  }
  return uVar2;
}




undefined4 FUN_180020090(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_18 [3];
  
  FUN_180024230(local_18,param_1 + 0x80,1000);
  cVar1 = FUN_180024e50((longlong)local_18);
  if (cVar1 == '\0') {
    FUN_180024620(local_18);
    uVar2 = 0xfffffff3;
  }
  else {
    *(undefined8 *)(param_1 + 0x50) = 0;
    FUN_180024620(local_18);
    uVar2 = 0;
  }
  return uVar2;
}




undefined4 FUN_180020120(longlong param_1,undefined4 *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined4 local_38;
  undefined8 local_28 [5];
  
  local_38 = 0;
  *param_2 = 0xffffffff;
  FUN_1800038a0(local_28);
  FUN_180023280(param_1 + 0xe8,local_28,0);
  bVar1 = FUN_180025930(local_28);
  if (bVar1) {
    local_38 = 0xfffffff1;
  }
  else {
    lVar2 = FUN_1800247a0(local_28,0);
    *param_2 = *(undefined4 *)(lVar2 + 8);
  }
  FUN_1800245f0(local_28);
  return local_38;
}




undefined4
FUN_1800201d0(longlong param_1,int param_2,undefined1 *param_3,ulonglong param_4,uint param_5,
             int param_6)

{
  int iVar1;
  undefined4 local_58;
  undefined4 local_48 [18];
  
  FUN_18000b370(local_48,*(undefined4 *)(param_1 + 0x28));
  iVar1 = FUN_18000b4a0(local_48,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 == 0) {
    local_58 = 0xfffffff1;
  }
  else {
    local_58 = 0;
  }
  FUN_18000b410((longlong)local_48);
  return local_58;
}




undefined4 FUN_180020280(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code **ppcVar6;
  undefined1 *puVar7;
  uint local_1a8 [2];
  ulonglong local_1a0;
  int local_198 [2];
  int *local_190;
  ulonglong local_188;
  uint local_180;
  uint local_17c;
  longlong local_178;
  undefined4 local_170;
  ulonglong local_168;
  longlong local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  undefined4 local_128;
  longlong local_120;
  longlong local_118;
  code *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  uint local_c8 [8];
  int local_a8 [38];
  
  local_100 = 0xfffffffffffffffe;
  FUN_180022610(param_1 + -0x28);
  FUN_180003810(&local_178,0);
  FUN_180003810(&local_160,0);
  local_128 = 0;
  local_168 = *(ulonglong *)(param_1 + 0x20);
  local_188 = *(longlong *)(param_1 + 0x20) + -1 + *(longlong *)(param_1 + 0x28);
  local_1a8[0] = 1;
  local_180 = 0;
  local_198[0] = 1;
  local_1a0 = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_1800242d0(local_c8,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x14),
                *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  FUN_180022b40(param_1 + -0x28,local_168,local_188,local_1a8,local_198,&local_1a0,(int *)&local_180
                ,&local_178,&local_160);
  local_110 = FUN_180022790;
  local_108 = 0;
  if ((local_198[0] == 0) || (*(int *)(param_1 + 0x14) != 4)) {
    local_17c = 0;
  }
  else {
    local_17c = 1;
  }
  ppcVar6 = &local_110;
  puVar7 = local_d8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *(undefined1 *)ppcVar6;
    ppcVar6 = (code **)((longlong)ppcVar6 + 1);
    puVar7 = puVar7 + 1;
  }
  FUN_1800240d0(local_a8,(ulonglong)local_17c,(ulonglong)local_180,param_1 + -0x28,local_d8);
  if (*(int *)(param_1 + 0x30) != 0) {
    local_198[0] = 0;
  }
  while( true ) {
    while( true ) {
      if (((((local_198[0] == 0) || (local_188 < local_1a0)) ||
           (*(ulonglong *)(param_1 + 0xa8) <= local_1a0 + 3)) ||
          ((local_1a0 < local_168 || (local_168 == 0xffffffffffffffff)))) ||
         (*(int *)(param_1 + 100) != 0)) goto LAB_18002071f;
      if (*(int *)(param_1 + 0x60) == 0) break;
      Sleep(1000);
    }
    if ((*(int *)(param_1 + 0x14) == 4) && (local_188 < local_1a0 + 3 + (ulonglong)local_1a8[0])) {
      local_1a8[0] = 1;
    }
    local_190 = FUN_180024ca0(local_a8);
    if (local_190 == (int *)0x0) goto LAB_18002071f;
    puVar4 = FUN_18000c3d0((undefined8 *)(param_1 + 0x98),&local_f8);
    lVar5 = FUN_180002800(puVar4);
    local_158 = (longlong *)(lVar5 + 8);
    local_120 = *local_158;
    iVar1 = (**(code **)(local_120 + 8))
                      (local_158,*(undefined8 *)(local_190 + 4),local_1a0,local_1a8[0] + 3);
    if (iVar1 < 0) break;
    *(ulonglong *)(local_190 + 6) = local_1a0;
    local_190[8] = local_1a8[0] + 3;
    uVar3 = FUN_180002800(&local_178);
    *(undefined8 *)local_190 = uVar3;
    uVar3 = FUN_180002800(&local_160);
    *(undefined8 *)(local_190 + 2) = uVar3;
    FUN_1800249f0(local_a8,(longlong)local_190);
    if (local_1a8[0] != 1) {
      local_148 = (longlong *)FUN_180009440(&local_178);
      local_118 = *local_148;
      (**(code **)(local_118 + 0x10))(local_148,local_1a0 + local_1a8[0],local_188);
    }
    local_140 = (longlong *)FUN_180009440(&local_178);
    local_1a0 = (**(code **)(*local_140 + 8))(local_140,local_1a0);
  }
  puVar4 = FUN_18000c3d0((undefined8 *)(param_1 + 0x98),&local_f0);
  lVar5 = FUN_180002800(puVar4);
  local_150 = (longlong *)(lVar5 + 8);
  uVar2 = (**(code **)(*local_150 + 0x38))(local_150);
  CLogWriter::Log("m_pStorageDeviceForClone->ReadSector error=%d\n",(ulonglong)uVar2);
LAB_18002071f:
  FUN_180024550(local_a8);
  FUN_1800208c0(param_1 + -0x28,local_188);
  if ((*(int *)(param_1 + 100) != 0) || (*(int *)(param_1 + 0x14) == 4)) {
    FUN_180025c60(param_1 + 200,*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0x18),
                  local_1a0,local_188);
  }
  lVar5 = FUN_180002800((undefined8 *)(param_1 + 0x90));
  if (lVar5 != 0) {
    puVar4 = FUN_18000c3d0((undefined8 *)(param_1 + 0x90),&local_e8);
    lVar5 = FUN_180002800(puVar4);
    local_138 = (longlong *)(lVar5 + 8);
    (**(code **)(*local_138 + 0x20))(local_138);
  }
  lVar5 = FUN_180002800((undefined8 *)(param_1 + 0x98));
  if (lVar5 != 0) {
    puVar4 = FUN_18000c3d0((undefined8 *)(param_1 + 0x98),&local_e0);
    lVar5 = FUN_180002800(puVar4);
    local_130 = (longlong *)(lVar5 + 8);
    (**(code **)(*local_130 + 0x20))(local_130);
  }
  local_170 = 0;
  FUN_180024690(local_c8);
  FUN_18000b0f0(&local_160);
  FUN_18000b0f0(&local_178);
  return local_170;
}




void FUN_1800208c0(longlong param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong local_res10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  ulonglong local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_18003a118 ^ (ulonglong)auStack_78;
  local_58 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_180024230(local_48,param_1 + 0xa0,1000);
    cVar1 = FUN_180024e50((longlong)local_48);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x60) != 0)) {
      local_50 = *(longlong *)(param_1 + 0x48) + -1 + *(longlong *)(param_1 + 0x50);
      local_res10 = param_2;
      if (local_50 < param_2) {
        local_res10 = local_50;
      }
      local_28 = *(undefined8 *)(param_1 + 0x48);
      local_20 = local_res10;
      local_30 = *(undefined4 *)(param_1 + 0x80);
      local_2c = (undefined4)
                 ((((local_res10 - *(longlong *)(param_1 + 0x48)) + 1) * 100) /
                 *(ulonglong *)(param_1 + 0x50));
      local_18 = local_50;
      local_58 = (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x68),&local_30);
    }
    FUN_180024620(local_48);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_78);
  return;
}




void FUN_180020a60(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 auStackY_938 [32];
  undefined4 local_8e8 [2];
  longlong local_8e0;
  undefined8 local_8d8 [2];
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8 [2];
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined8 local_89c;
  undefined4 local_894;
  undefined1 local_890 [1080];
  undefined4 local_458 [266];
  undefined1 local_2f;
  ulonglong local_28;
  
  local_8c8 = 0xfffffffffffffffe;
  local_28 = DAT_18003a118 ^ (ulonglong)auStackY_938;
  FUN_180024230(local_8d8,param_1 + 0xa0,1000);
  cVar1 = FUN_180024e50((longlong)local_8d8);
  if (cVar1 != '\0') {
    lVar4 = FUN_180002800((undefined8 *)(param_1 + 200));
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
      puVar8 = local_458;
      for (lVar4 = 0x430; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((longlong)puVar8 + 1);
      }
      puVar5 = FUN_18000c3d0((undefined8 *)(param_1 + 200),&local_8c0);
      plVar6 = (longlong *)FUN_180002800(puVar5);
      puVar5 = FUN_18000c3d0((undefined8 *)(param_1 + 200),local_8b8);
      plVar7 = (longlong *)FUN_180002800(puVar5);
      uVar2 = (**(code **)(*plVar6 + 0x38))(plVar6);
      local_8e0 = *plVar7;
      uVar3 = (**(code **)(local_8e0 + 0x30))(plVar7);
      FUN_180026c00(local_8e8,uVar3,uVar2);
      uVar2 = *(undefined4 *)(param_1 + 0x84);
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      FUN_1800025a0(param_2,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x40),uVar2,
                    local_8e8,local_458);
      if (*(int *)(param_1 + 0xd8) != 0) {
        local_2f = 1;
      }
      puVar8 = &local_8a8;
      for (lVar4 = 0x448; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((longlong)puVar8 + 1);
      }
      local_8a8 = 0x74726150;
      local_8a4 = *(undefined4 *)(param_1 + 0xdc);
      if (*(int *)(param_1 + 0x3c) == 0) {
        local_8a4 = *(undefined4 *)(param_1 + 0xe0);
      }
      local_894 = 1;
      local_8a0 = *(undefined4 *)(param_1 + 0x40);
      local_89c = 0;
      puVar8 = local_458;
      puVar9 = local_890;
      for (lVar4 = 0x430; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((longlong)puVar8 + 1);
        puVar9 = puVar9 + 1;
      }
      FUN_1800260f0(param_1 + 0xf0,&local_8a8,0);
      (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x78),local_458);
      FUN_180026c40();
    }
  }
  FUN_180024620(local_8d8);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_938);
  return;
}




undefined4 FUN_180020d60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  IObject *pIVar4;
  longlong lVar5;
  char *pcVar6;
  IObject *pIVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 local_68;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_20 = 0xfffffffffffffffe;
  local_68 = 0xfffffff7;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  plVar2 = (longlong *)FUN_18000bfd0("Device");
  if ((plVar2 != (longlong *)0x0) &&
     (plVar3 = (longlong *)FUN_18000bfd0("DeviceManager"), plVar3 != (longlong *)0x0)) {
    local_38 = (longlong *)(**(code **)(*plVar3 + 0x60))(plVar3,*(undefined4 *)(param_1 + 0x30));
    pIVar4 = (IObject *)(**(code **)(*local_38 + 0x18))(local_38,0);
    FUN_18000bc60((longlong *)(param_1 + 0xb0),pIVar4,param_3,param_4);
    lVar5 = FUN_180002800((undefined8 *)(param_1 + 0xb0));
    if (lVar5 != 0) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x40);
      pIVar4 = FUN_1800262c0((undefined8 *)(param_1 + 0xb0),*(uint *)(param_1 + 0x40),param_3,
                             param_4);
      if (pIVar4 != (IObject *)0x0) {
        pcVar6 = (char *)FUN_1800233f0(0,uVar10,param_3,param_4);
        pIVar7 = IObject::GetInterfaceEx(pIVar4,pcVar6);
        if ((pIVar7 == (IObject *)0x0) ||
           (uVar1 = (**(code **)(*(longlong *)pIVar7 + 0x28))(), (uVar1 & 2) == 0)) {
          *(undefined4 *)(param_1 + 0xd8) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0xd8) = 1;
        }
        pcVar6 = (char *)FUN_18000bd80(0,pcVar6,param_3,param_4);
        pIVar7 = IObject::GetInterfaceEx(pIVar4,pcVar6);
        FUN_180023060((longlong *)(param_1 + 0xb8),pIVar7,param_3,param_4);
        lVar5 = FUN_180002800((undefined8 *)(param_1 + 0xb8));
        if (lVar5 != 0) {
          uVar8 = FUN_180002800((undefined8 *)(param_1 + 0xb8));
          local_28 = *plVar2;
          pIVar7 = (IObject *)(**(code **)(local_28 + 0x60))(plVar2,uVar8);
          FUN_180023060((longlong *)(param_1 + 0xc0),pIVar7,param_3,param_4);
          lVar5 = FUN_180002800((undefined8 *)(param_1 + 0xc0));
          if (lVar5 != 0) {
            pcVar6 = (char *)FUN_1800177d0(0,pIVar7,param_3,param_4);
            pIVar7 = IObject::GetInterfaceEx(pIVar4,pcVar6);
            FUN_180023030((longlong *)(param_1 + 200),pIVar7,param_3,param_4);
            lVar5 = FUN_180002800((undefined8 *)(param_1 + 200));
            if (lVar5 != 0) {
              pcVar6 = (char *)FUN_180023410(0,pIVar7,param_3,param_4);
              pIVar4 = IObject::GetInterfaceEx(pIVar4,pcVar6);
              FUN_180022ff0(&local_40,pIVar4,param_3,param_4);
              *(undefined8 *)(param_1 + 0xd0) = 0;
              lVar5 = FUN_180002800(&local_40);
              if (lVar5 != 0) {
                puVar9 = FUN_18000c3d0(&local_40,local_18);
                local_30 = (longlong *)FUN_180002800(puVar9);
                uVar8 = (**(code **)(*local_30 + 0x30))(local_30);
                *(undefined8 *)(param_1 + 0xd0) = uVar8;
              }
              local_68 = 0;
              FUN_18000c370(&local_40);
            }
          }
        }
      }
    }
  }
  return local_68;
}




undefined4
FUN_180021080(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             ulonglong param_5,uint param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  int local_c8;
  longlong local_c0;
  undefined8 *local_98;
  longlong local_88 [5];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_20 = 0xfffffffffffffffe;
  FUN_180002530(local_88);
  if (((param_2 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) ||
     (local_c0 = param_4, param_4 == 0)) {
    FUN_180002590();
    uVar4 = 0xfffffff2;
  }
  else {
    while (3 < param_6) {
      uVar5 = FUN_180002800((undefined8 *)(param_1 + 0xb8));
      local_60 = *param_3;
      local_c8 = (**(code **)(local_60 + 8))(param_3,local_c0,param_5,local_88,uVar5);
      if (local_c8 == 0) {
        puVar6 = FUN_18000c3d0((undefined8 *)(param_1 + 0xb8),&local_18);
        lVar7 = FUN_180002800(puVar6);
        iVar1 = (*(code *)**(undefined8 **)(lVar7 + 8))((undefined8 *)(lVar7 + 8));
        iVar2 = FUN_180024b60((longlong)local_88);
        if (iVar2 != iVar1) {
          local_c8 = -6;
        }
      }
      if ((*(int *)(param_1 + 0xd8) == 0) && (local_c8 == 0)) {
        local_58 = FUN_180002800(local_88);
        lVar7 = FUN_1800039b0((longlong)local_88);
        if (0x100000000 < (ulonglong)(local_58 + lVar7)) {
          local_c8 = -6;
        }
      }
      if ((local_c8 == 0) &&
         ((*(longlong *)(param_1 + 0xd0) == 0 ||
          (uVar8 = FUN_180002760(local_88), uVar8 <= *(ulonglong *)(param_1 + 0xd0))))) {
        if ((*(int *)(param_1 + 0x3c) == 1) || (*(int *)(param_1 + 0x3c) == 2)) {
          puVar6 = (undefined8 *)operator_new(0x20);
          if (puVar6 == (undefined8 *)0x0) {
            local_98 = (undefined8 *)0x0;
          }
          else {
            local_50 = FUN_180002800(local_88);
            local_40 = FUN_1800039b0((longlong)local_88);
            local_40 = local_50 + 0x3ec1 + local_40;
            local_48 = FUN_180002800(local_88);
            lVar7 = FUN_1800039b0((longlong)local_88);
            local_98 = FUN_180010bc0(puVar6,local_48 + lVar7,local_40);
          }
          local_38 = local_98;
          local_30 = local_98;
          (**(code **)(*param_2 + 0x18))(param_2,local_98);
        }
        uVar5 = FUN_180002800((undefined8 *)(param_1 + 0xb8));
        local_28 = *param_3;
        iVar1 = (**(code **)(local_28 + 0x10))(param_3,local_c0,uVar5,param_5,local_88);
        if ((iVar1 == 0) && (iVar1 = FUN_180020a60(param_1,local_88), iVar1 != 0)) break;
      }
      if ((param_7 == 0) &&
         (uVar3 = DAT_18003cb08 % 100, DAT_18003cb08 = DAT_18003cb08 + 1, uVar3 == 0)) {
        FUN_1800208c0(param_1,param_5);
      }
      param_6 = param_6 - 1;
      param_5 = param_5 + 1;
      puVar6 = FUN_18000c3d0((undefined8 *)(param_1 + 0xb8),local_10);
      lVar7 = FUN_180002800(puVar6);
      uVar3 = (*(code *)**(undefined8 **)(lVar7 + 8))((undefined8 *)(lVar7 + 8));
      local_c0 = local_c0 + (ulonglong)uVar3;
    }
    FUN_180002590();
    uVar4 = 0;
  }
  return uVar4;
}




void FUN_1800214c0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *local_30;
  undefined8 local_10 [2];
  
  lVar2 = FUN_180002800((undefined8 *)(param_1 + 200));
  if ((lVar2 != 0) && (lVar2 = FUN_180002800(param_2), lVar2 != 0)) {
    puVar3 = FUN_18000c3d0((undefined8 *)(param_1 + 200),local_10);
    plVar4 = (longlong *)FUN_180002800(puVar3);
    iVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
    if (iVar1 != 0) {
      puVar3 = (undefined8 *)FUN_180026e64(0x38);
      if (puVar3 == (undefined8 *)0x0) {
        local_30 = (undefined8 *)0x0;
      }
      else {
        local_30 = FUN_18000f390(puVar3,param_3,param_4,iVar1);
      }
      plVar4 = (longlong *)FUN_180009440(param_2);
      (**(code **)(*plVar4 + 0x18))(plVar4,local_30);
    }
  }
  return;
}




void FUN_1800215e0(longlong param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  longlong *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  longlong *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_20 = 0xfffffffffffffffe;
  lVar3 = FUN_180002800((undefined8 *)(param_1 + 200));
  if ((lVar3 != 0) && (lVar3 = FUN_180002800(param_2), lVar3 != 0)) {
    FUN_180026c00((undefined4 *)&local_138,0xff,0x3f);
    FUN_180026c00((undefined4 *)&local_140,0xf0,0x3f);
    local_130 = (undefined8 *)operator_new(0x38);
    if (local_130 == (undefined8 *)0x0) {
      local_128 = (undefined8 *)0x0;
    }
    else {
      local_128 = FUN_18000ec90(local_130,&local_138,param_3,param_4);
    }
    local_68 = local_128;
    local_120 = (longlong *)FUN_180009440(param_2);
    (**(code **)(*local_120 + 0x18))(local_120,local_68);
    local_118 = (undefined8 *)operator_new(0x38);
    if (local_118 == (undefined8 *)0x0) {
      local_110 = (undefined8 *)0x0;
    }
    else {
      local_110 = FUN_18000ec90(local_118,&local_140,param_3,param_4);
    }
    local_60 = local_110;
    local_108 = (longlong *)FUN_180009440(param_2);
    (**(code **)(*local_108 + 0x18))(local_108,local_60);
    local_100 = (undefined8 *)operator_new(0x28);
    if (local_100 == (undefined8 *)0x0) {
      local_f8 = (undefined8 *)0x0;
    }
    else {
      local_f8 = FUN_180010d40(local_100,&local_138,param_3,param_4);
    }
    local_58 = local_f8;
    local_f0 = (longlong *)FUN_180009440(param_2);
    (**(code **)(*local_f0 + 0x18))(local_f0,local_58);
    local_e8 = (undefined8 *)operator_new(0x28);
    if (local_e8 == (undefined8 *)0x0) {
      local_e0 = (undefined8 *)0x0;
    }
    else {
      local_e0 = FUN_180010d40(local_e8,&local_140,param_3,param_4);
    }
    local_50 = local_e0;
    local_d8 = (longlong *)FUN_180009440(param_2);
    (**(code **)(*local_d8 + 0x18))(local_d8,local_50);
    local_d0 = (undefined8 *)operator_new(0x38);
    if (local_d0 == (undefined8 *)0x0) {
      local_c8 = (undefined8 *)0x0;
    }
    else {
      local_c8 = FUN_18000cec0(local_d0,param_3,param_4);
    }
    local_48 = local_c8;
    local_c0 = (longlong *)FUN_180009440(param_2);
    (**(code **)(*local_c0 + 0x18))(local_c0,local_48);
    if (param_3 < 0x1001) {
      local_b0 = (undefined8 *)operator_new(0x20);
      if (local_b0 == (undefined8 *)0x0) {
        local_a8 = (undefined8 *)0x0;
      }
      else {
        local_b8 = param_4;
        if (0x1001 < param_4) {
          local_b8 = 0x1001;
        }
        local_a8 = FUN_180010bc0(local_b0,param_3,local_b8);
      }
      local_40 = local_a8;
      local_a0 = (longlong *)FUN_180009440(param_2);
      (**(code **)(*local_a0 + 0x18))(local_a0,local_40);
    }
    puVar4 = FUN_18000c3d0((undefined8 *)(param_1 + 200),&local_18);
    local_98 = (longlong *)FUN_180002800(puVar4);
    puVar4 = FUN_18000c3d0((undefined8 *)(param_1 + 200),local_10);
    local_90 = (longlong *)FUN_180002800(puVar4);
    uVar1 = (**(code **)(*local_98 + 0x38))(local_98);
    local_38 = *local_90;
    uVar2 = (**(code **)(local_38 + 0x30))(local_90);
    FUN_180026c00((undefined4 *)&local_70,uVar2,uVar1);
    local_88 = (undefined8 *)operator_new(0x38);
    if (local_88 == (undefined8 *)0x0) {
      local_80 = (undefined8 *)0x0;
    }
    else {
      local_80 = FUN_18000ec90(local_88,&local_70,param_3,param_4);
    }
    local_30 = local_80;
    local_28 = local_80;
    local_78 = (longlong *)FUN_180009440(param_2);
    (**(code **)(*local_78 + 0x18))(local_78,local_28);
    FUN_180026c40();
    FUN_180026c40();
    FUN_180026c40();
  }
  return;
}




void FUN_180021b80(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_80;
  longlong *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  longlong *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_20 = 0xfffffffffffffffe;
  lVar2 = FUN_180002800((undefined8 *)(param_1 + 200));
  if ((lVar2 != 0) && (lVar2 = FUN_180002800(param_2), lVar2 != 0)) {
    puVar3 = FUN_18000c3d0((undefined8 *)(param_1 + 200),local_18);
    local_78 = (longlong *)FUN_180002800(puVar3);
    uVar1 = (**(code **)(*local_78 + 0x40))(local_78);
    if (uVar1 != 0) {
      FUN_180026c00((undefined4 *)&local_80,1,(int)(0x100000 / (ulonglong)uVar1));
      local_70 = (undefined8 *)operator_new(0x38);
      if (local_70 == (undefined8 *)0x0) {
        local_68 = (undefined8 *)0x0;
      }
      else {
        local_68 = FUN_18000ec90(local_70,&local_80,param_3,param_4);
      }
      local_40 = local_68;
      local_38 = local_68;
      local_60 = (longlong *)FUN_180009440(param_2);
      (**(code **)(*local_60 + 0x18))(local_60,local_38);
      local_58 = (undefined8 *)operator_new(0x28);
      if (local_58 == (undefined8 *)0x0) {
        local_50 = (undefined8 *)0x0;
      }
      else {
        local_50 = FUN_180010d40(local_58,&local_80,param_3,param_4);
      }
      local_30 = local_50;
      local_28 = local_50;
      local_48 = (longlong *)FUN_180009440(param_2);
      (**(code **)(*local_48 + 0x18))(local_48,local_28);
      FUN_180026c40();
    }
  }
  return;
}




void FUN_180021d70(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *local_30;
  undefined8 local_10 [2];
  
  lVar2 = FUN_180002800((undefined8 *)(param_1 + 200));
  if ((lVar2 != 0) && (lVar2 = FUN_180002800(param_2), lVar2 != 0)) {
    puVar3 = FUN_18000c3d0((undefined8 *)(param_1 + 200),local_10);
    plVar4 = (longlong *)FUN_180002800(puVar3);
    iVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
    if (iVar1 != 0) {
      puVar3 = (undefined8 *)operator_new(0x20);
      if (puVar3 == (undefined8 *)0x0) {
        local_30 = (undefined8 *)0x0;
      }
      else {
        local_30 = FUN_180010bc0(puVar3,param_3,param_4);
      }
      plVar4 = (longlong *)FUN_180009440(param_2);
      (**(code **)(*plVar4 + 0x18))(plVar4,local_30);
    }
  }
  return;
}




void FUN_180021e90(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong local_f8;
  uint local_f0 [2];
  ulonglong local_e8;
  ulonglong local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  undefined8 local_c0 [3];
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98 [3];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [6];
  
  local_48 = 0xfffffffffffffffe;
  local_f0[0] = 0;
  puVar5 = param_4;
  FUN_1800229c0(param_1,local_f0,param_3,param_4);
  FUN_1800038a0(local_c0);
  FUN_180023280(param_1 + 0xf0,local_c0,0);
  FUN_180025e30((int *)(param_1 + 0xf0),(undefined8 *)(param_1 + 0xb0),*(uint *)(param_1 + 0x40),
                puVar5);
  FUN_18000a7a0(local_c0,&local_f8);
  while( true ) {
    plVar3 = FUN_18000aa20(local_c0,&local_40);
    bVar1 = FID_conflict_operator__(&local_f8,plVar3);
    if (!bVar1) break;
    lVar4 = FUN_1800247d0(&local_f8);
    if (*(int *)(lVar4 + 0x14) == 0) {
      lVar4 = FUN_1800247d0(&local_f8);
      if (*(uint *)(param_1 + 0xe4) < *(uint *)(lVar4 + 4)) {
        lVar4 = FUN_1800247d0(&local_f8);
        local_d0 = *(undefined4 *)(lVar4 + 4);
      }
      else {
        local_d0 = *(undefined4 *)(param_1 + 0xe4);
      }
      *(undefined4 *)(param_1 + 0xe4) = local_d0;
      lVar4 = FUN_1800247d0(&local_f8);
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar4 + 0xc);
    }
    else {
      lVar4 = FUN_1800247d0(&local_f8);
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(lVar4 + 4);
      local_d8 = 1;
      lVar4 = FUN_180002800((undefined8 *)(param_1 + 0xb8));
      if (lVar4 != 0) {
        puVar5 = FUN_18000c3d0((undefined8 *)(param_1 + 0xb8),&local_38);
        lVar4 = FUN_180002800(puVar5);
        local_a8 = (longlong *)(lVar4 + 8);
        local_c8 = local_d8 + 3;
        lVar4 = FUN_1800247d0(&local_f8);
        local_80 = *local_a8;
        iVar2 = (**(code **)(local_80 + 8))(local_a8,param_2,*(undefined8 *)(lVar4 + 0x28),local_c8)
        ;
        if (-1 < iVar2) {
          FUN_180002530(local_30);
          local_c4 = local_d8 + 3;
          local_78 = FUN_1800247d0(&local_f8);
          local_70 = param_2;
          local_68 = (longlong *)FUN_180002800(param_4);
          plVar3 = (longlong *)FUN_180002800(param_3);
          FUN_180021080(param_1,plVar3,local_68,local_70,*(ulonglong *)(local_78 + 0x28),local_c4,1)
          ;
          lVar4 = FUN_1800247d0(&local_f8);
          if (*(uint *)(param_1 + 0xe4) < *(uint *)(lVar4 + 4)) {
            lVar4 = FUN_1800247d0(&local_f8);
            local_d4 = *(undefined4 *)(lVar4 + 4);
          }
          else {
            local_d4 = *(undefined4 *)(param_1 + 0xe4);
          }
          *(undefined4 *)(param_1 + 0xe4) = local_d4;
          lVar4 = FUN_1800247d0(&local_f8);
          if (*(ulonglong *)(param_1 + 0xe8) < *(ulonglong *)(lVar4 + 0x28)) {
            lVar4 = FUN_1800247d0(&local_f8);
            local_a0 = *(undefined8 *)(lVar4 + 0x28);
          }
          else {
            local_a0 = *(undefined8 *)(param_1 + 0xe8);
          }
          *(undefined8 *)(param_1 + 0xe8) = local_a0;
          FUN_180002590();
        }
      }
    }
    FUN_180024870(&local_f8);
  }
  if (local_f0[0] == 0) {
    FUN_1800038a0(local_98);
    FUN_180023280(param_1 + 0xf0,local_98,0);
    local_e8 = 0;
    while (uVar6 = FUN_180025be0(local_c0), local_e8 < uVar6) {
      lVar4 = FUN_1800247a0(local_c0,local_e8);
      if (*(int *)(lVar4 + 0x14) != 0) {
        local_cc = 0;
        local_e0 = 0;
        while (uVar6 = FUN_180025be0(local_98), local_e0 < uVar6) {
          local_60 = FUN_1800247a0(local_c0,local_e8);
          lVar4 = FUN_1800247a0(local_98,local_e0);
          if (*(longlong *)(local_60 + 0x28) == *(longlong *)(lVar4 + 0x28)) {
            local_58 = FUN_1800247a0(local_c0,local_e8);
            lVar4 = FUN_1800247a0(local_98,local_e0);
            if (*(longlong *)(local_58 + 0x30) == *(longlong *)(lVar4 + 0x30)) {
              local_50 = FUN_1800247a0(local_c0,local_e8);
              lVar4 = FUN_1800247a0(local_98,local_e0);
              if (*(int *)(local_50 + 8) == *(int *)(lVar4 + 8)) {
                local_cc = 1;
                break;
              }
            }
          }
          local_e0 = local_e0 + 1;
        }
        if (local_cc == 0) {
          local_f0[0] = 1;
          break;
        }
      }
      local_e8 = local_e8 + 1;
    }
    FUN_1800245f0(local_98);
  }
  if (local_f0[0] != 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  FUN_1800245f0(local_c0);
  return;
}




undefined4
FUN_180022430(longlong param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4,
             undefined4 *param_5,ulonglong *param_6)

{
  longlong lVar1;
  ulonglong local_res18;
  undefined4 local_18;
  
  local_18 = 1;
  lVar1 = FUN_180002800(param_2);
  local_res18 = param_3;
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    if (((((*(int *)(param_1 + 0x3c) != 0) &&
          (local_res18 = param_4, *(uint *)(param_1 + 0xe4) <= *(uint *)(param_1 + 0xdc))) &&
         (local_res18 = param_3, *(int *)(param_1 + 0xdc) == *(int *)(param_1 + 0xe4))) &&
        ((*(int *)(param_1 + 0xdc) != 1 &&
         (local_res18 = param_4, *(ulonglong *)(param_1 + 0xe8) < param_4)))) &&
       (local_res18 = param_3, param_3 < *(ulonglong *)(param_1 + 0xe8))) {
      local_res18 = *(ulonglong *)(param_1 + 0xe8);
    }
    if (*(int *)(param_1 + 0x3c) == 1) {
      FUN_1800214c0(param_1,param_2,local_res18,param_4);
      FUN_180025e30((int *)(param_1 + 0xf0),(undefined8 *)(param_1 + 0xb0),*(uint *)(param_1 + 0x40)
                    ,param_4);
    }
    else if (*(int *)(param_1 + 0x3c) == 2) {
      FUN_1800215e0(param_1,param_2,local_res18,param_4);
    }
    else if (*(int *)(param_1 + 0x3c) == 3) {
      FUN_180021b80(param_1,param_2,local_res18,param_4);
    }
    else if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x3c) == 4)) {
      FUN_180021d70(param_1,param_2,local_res18,param_4);
      *param_5 = 0x4000;
    }
  }
  *param_6 = local_res18;
  return local_18;
}




void FUN_180022610(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  lVar3 = FUN_180002800((undefined8 *)(param_1 + 200));
  if ((lVar3 != 0) && ((*(int *)(param_1 + 0x3c) == 0 || (*(int *)(param_1 + 0x3c) == 1)))) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    puVar4 = FUN_18000c3d0((undefined8 *)(param_1 + 200),&local_20);
    plVar5 = (longlong *)FUN_180002800(puVar4);
    puVar4 = FUN_18000c3d0((undefined8 *)(param_1 + 200),&local_18);
    plVar6 = (longlong *)FUN_180002800(puVar4);
    puVar4 = FUN_18000c3d0((undefined8 *)(param_1 + 200),local_10);
    plVar7 = (longlong *)FUN_180002800(puVar4);
    uVar1 = (**(code **)(*plVar7 + 0x38))(plVar7);
    uVar2 = (**(code **)(*plVar6 + 0x30))(plVar6);
    lVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
    *(ulonglong *)(param_1 + 0x50) = lVar3 * (ulonglong)uVar2 * (ulonglong)uVar1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  }
  return;
}




undefined4 FUN_180022790(longlong param_1,longlong *param_2)

{
  undefined4 local_18;
  
  local_18 = 0xfffffff2;
  if ((((param_2 != (longlong *)0x0) && (param_2[2] != 0)) && (param_2[1] != 0)) &&
     ((*param_2 != 0 && ((int)param_2[4] != 0)))) {
    local_18 = FUN_180021080(param_1,(longlong *)*param_2,(longlong *)param_2[1],param_2[2],
                             param_2[3],*(uint *)(param_2 + 4),0);
  }
  return local_18;
}




void FUN_180022850(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *_Memory;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  lVar2 = FUN_180002800((undefined8 *)(param_1 + 0xb8));
  if (lVar2 != 0) {
    puVar3 = FUN_18000c3d0((undefined8 *)(param_1 + 0xb8),&local_18);
    lVar2 = FUN_180002800(puVar3);
    iVar1 = (*(code *)**(undefined8 **)(lVar2 + 8))((undefined8 *)(lVar2 + 8));
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x3c) == 0) {
        puVar3 = FUN_18000c3d0((undefined8 *)(param_1 + 0xb8),local_10);
        lVar2 = FUN_180002800(puVar3);
        iVar1 = (*(code *)**(undefined8 **)(lVar2 + 8))((undefined8 *)(lVar2 + 8));
        _Memory = (void *)thunk_FUN_180026e64((ulonglong)(uint)(iVar1 * 0x4003));
        if (_Memory != (void *)0x0) {
          FUN_180021e90(param_1,(longlong)_Memory,param_2,param_3);
          free(_Memory);
        }
        *param_4 = 0;
      }
      if (*(uint *)(param_1 + 0xdc) < *(uint *)(param_1 + 0xe4)) {
        *param_4 = 0;
      }
    }
  }
  return;
}




void FUN_1800229c0(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Buf1;
  uint local_68;
  ulonglong local_60;
  undefined8 local_58 [3];
  longlong local_40;
  longlong local_38;
  void *local_30;
  undefined8 local_28 [3];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800038a0(local_58);
  FUN_180023120(param_1 + 0xf0,local_58,1);
  FUN_1800038a0(local_28);
  FUN_1800264e0((undefined8 *)(param_1 + 0xb0),*(uint *)(param_1 + 0x40),local_28,param_4);
  local_40 = FUN_180025b90(local_58);
  lVar2 = FUN_180025b90(local_28);
  local_68 = (uint)(local_40 != lVar2);
  *param_2 = local_68;
  local_38 = FUN_180025b90(local_58);
  lVar2 = FUN_180025b90(local_28);
  if (local_38 == lVar2) {
    for (local_60 = 0; uVar3 = FUN_180025b90(local_58), local_60 < uVar3; local_60 = local_60 + 1) {
      local_30 = (void *)FUN_180024770(local_28,local_60);
      _Buf1 = (void *)FUN_180024770(local_58,local_60);
      iVar1 = memcmp(_Buf1,local_30,0x18);
      if (iVar1 != 0) {
        *param_2 = 1;
        break;
      }
    }
  }
  FUN_1800245c0(local_28);
  FUN_1800245c0(local_58);
  return;
}




void FUN_180022b40(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 *param_6,int *param_7,longlong *param_8,
                  longlong *param_9)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_30 = 0xfffffffffffffffe;
  *param_5 = 0;
  lVar2 = FUN_180002800((undefined8 *)(param_1 + 0xb8));
  if (lVar2 != 0) {
    puVar3 = FUN_18000c3d0((undefined8 *)(param_1 + 0xb8),&local_28);
    lVar2 = FUN_180002800(puVar3);
    local_d0 = (undefined8 *)(lVar2 + 8);
    iVar1 = (**(code **)*local_d0)(local_d0);
    if (iVar1 != 0) {
      puVar3 = FUN_18000c3d0((undefined8 *)(param_1 + 0xb8),&local_20);
      lVar2 = FUN_180002800(puVar3);
      local_c8 = (undefined8 *)(lVar2 + 8);
      iVar1 = (**(code **)*local_c8)(local_c8);
      *param_7 = iVar1 * 0x4003;
      puVar4 = FUN_18000d440();
      local_70 = FUN_18000d240(puVar4,&local_60,*(int *)(param_1 + 0x3c),param_2,param_3);
      local_68 = local_70;
      plVar5 = FUN_18000d560(local_70,local_18);
      FUN_18000e9c0(param_8,*plVar5);
      FUN_18000b0f0(&local_60);
      lVar2 = FUN_180002800(param_8);
      if ((lVar2 != 0) &&
         (local_c0 = param_2,
         iVar1 = FUN_180022430(param_1,param_8,param_2,param_3,param_4,&local_c0), iVar1 != 0)) {
        local_b8 = (longlong *)FUN_180009440(param_8);
        uVar6 = (**(code **)(*local_b8 + 8))(local_b8,local_c0);
        *param_6 = uVar6;
        local_b0 = (undefined8 *)FUN_180026e64(0x20);
        if (local_b0 == (undefined8 *)0x0) {
          local_a8 = (undefined8 *)0x0;
        }
        else {
          local_a8 = FUN_180001c50(local_b0);
        }
        local_58 = local_a8;
        FUN_180003810(&local_e8,local_a8);
        lVar2 = FUN_180002800(&local_e8);
        if (lVar2 == 0) {
          FUN_18000b0f0(&local_e8);
        }
        else {
          local_a0 = (undefined8 *)FUN_180026e64(0x20);
          if (local_a0 == (undefined8 *)0x0) {
            local_98 = (undefined8 *)0x0;
          }
          else {
            local_98 = FUN_180001b40(local_a0);
          }
          local_50 = local_98;
          FUN_180003810(&local_e0,local_98);
          lVar2 = FUN_180002800(&local_e0);
          if (lVar2 == 0) {
            FUN_18000b0f0(&local_e0);
            FUN_18000b0f0(&local_e8);
          }
          else {
            local_90 = (undefined8 *)FUN_180026e64(0x20);
            if (local_90 == (undefined8 *)0x0) {
              local_88 = (undefined8 *)0x0;
            }
            else {
              local_88 = FUN_180016a20(local_90);
            }
            local_48 = local_88;
            FUN_180003810(&local_d8,local_88);
            lVar2 = FUN_180002800(&local_d8);
            if (lVar2 == 0) {
              FUN_18000b0f0(&local_d8);
              FUN_18000b0f0(&local_e0);
              FUN_18000b0f0(&local_e8);
            }
            else {
              FUN_180024700(param_9,&local_d8);
              local_80 = (longlong *)FUN_180009440(param_9);
              uVar6 = FUN_18000b190(&local_e8);
              local_40 = *local_80;
              (**(code **)(local_40 + 0x18))(local_80,uVar6);
              local_78 = (longlong *)FUN_180009440(param_9);
              uVar6 = FUN_18000b190(&local_e0);
              local_38 = *local_78;
              (**(code **)(local_38 + 0x18))(local_78,uVar6);
              *param_5 = 1;
              FUN_180022850(param_1,param_8,param_9,param_5);
              FUN_18000b0f0(&local_d8);
              FUN_18000b0f0(&local_e0);
              FUN_18000b0f0(&local_e8);
            }
          }
        }
      }
    }
  }
  return;
}




longlong * FUN_180022ff0(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,param_2,param_3,param_4);
  return param_1;
}




void FUN_180023030(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001d9a0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180023060(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000cc50(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180023090(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001db20(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800230c0(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001dbe0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800230f0(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001dca0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180023120(undefined8 param_1,undefined8 param_2,int param_3)

{
  BOOL BVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  int *piVar4;
  undefined1 auStackY_298 [32];
  DWORD local_258 [2];
  HANDLE local_250;
  int local_248 [8];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStackY_298;
  pwVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  if (param_3 == 0) {
    FUN_180025dc0(param_1,L"lostpart.dat",local_228);
  }
  else {
    FUN_180025dc0(param_1,L"partinfo.dat",local_228);
  }
  local_250 = CreateFileW(local_228,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (local_250 != (HANDLE)0xffffffffffffffff) {
    while( true ) {
      local_258[0] = 0;
      piVar4 = local_248;
      for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined1 *)piVar4 = 0;
        piVar4 = (int *)((longlong)piVar4 + 1);
      }
      BVar1 = ReadFile(local_250,local_248,0x18,local_258,(LPOVERLAPPED)0x0);
      if (((BVar1 == 0) || (local_258[0] != 0x18)) || (local_248[0] != 0x74726150)) break;
      FUN_180025af0(param_2,local_248);
    }
    CloseHandle(local_250);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_298);
  return;
}




void FUN_180023280(undefined8 param_1,undefined8 param_2,int param_3)

{
  BOOL BVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  int *piVar4;
  undefined1 auStackY_6c8 [32];
  DWORD local_688 [2];
  HANDLE local_680;
  int local_678 [276];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStackY_6c8;
  pwVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  if (param_3 == 0) {
    FUN_180025dc0(param_1,L"lostpart.dat",local_228);
  }
  else {
    FUN_180025dc0(param_1,L"partinfo.dat",local_228);
  }
  local_680 = CreateFileW(local_228,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (local_680 != (HANDLE)0xffffffffffffffff) {
    while( true ) {
      local_688[0] = 0;
      piVar4 = local_678;
      for (lVar2 = 0x448; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined1 *)piVar4 = 0;
        piVar4 = (int *)((longlong)piVar4 + 1);
      }
      BVar1 = ReadFile(local_680,local_678,0x448,local_688,(LPOVERLAPPED)0x0);
      if (((BVar1 == 0) || (local_688[0] != 0x448)) || (local_678[0] != 0x74726150)) break;
      FUN_180025b20(param_2,local_678);
    }
    CloseHandle(local_680);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_6c8);
  return;
}




void FUN_1800233f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180023450(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180023410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800234a0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180023430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800234f0(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_180023450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003cd20 == (undefined1 *)0x0) {
    DAT_18003cd20 = &DAT_18003cc20;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003b960,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003cd20,local_18);
  }
  return DAT_18003cd20;
}




undefined1 *
FUN_1800234a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003ce30 == (undefined1 *)0x0) {
    DAT_18003ce30 = &DAT_18003cd30;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003b988,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003ce30,local_18);
  }
  return DAT_18003ce30;
}




undefined1 *
FUN_1800234f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003cc10 == (undefined1 *)0x0) {
    DAT_18003cc10 = &DAT_18003cb10;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003b230,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003cc10,local_18);
  }
  return DAT_18003cc10;
}




void FUN_180023540(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  _Container_proxy *p_Var3;
  allocator<struct_std::_Container_proxy> *paVar4;
  longlong *plVar5;
  
  p_Var1 = (_Container_proxy *)FUN_1800032f0(param_2);
  puVar2 = (undefined8 *)FUN_180003cc0(param_1);
  p_Var3 = (_Container_proxy *)FUN_1800032f0(*puVar2);
  paVar4 = (allocator<struct_std::_Container_proxy> *)FUN_180003c60(param_1);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar4,p_Var3,p_Var1);
  FUN_180003cc0(param_1);
  FUN_180003cc0(param_1);
  FUN_180003d00();
  FUN_180003cc0(param_1);
  plVar5 = (longlong *)FUN_180003cc0(param_1);
  *plVar5 = *plVar5 + 0x18;
  return;
}




void FUN_180023600(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  _Container_proxy *p_Var3;
  allocator<struct_std::_Container_proxy> *paVar4;
  longlong *plVar5;
  
  p_Var1 = (_Container_proxy *)FUN_1800032f0(param_2);
  puVar2 = (undefined8 *)FUN_180003cc0(param_1);
  p_Var3 = (_Container_proxy *)FUN_1800032f0(*puVar2);
  paVar4 = (allocator<struct_std::_Container_proxy> *)FUN_180003c60(param_1);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar4,p_Var3,p_Var1);
  FUN_180003cc0(param_1);
  FUN_180003cc0(param_1);
  FUN_180003d00();
  FUN_180003cc0(param_1);
  plVar5 = (longlong *)FUN_180003cc0(param_1);
  *plVar5 = *plVar5 + 0x448;
  return;
}




longlong FUN_1800236c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  allocator<struct_std::_Container_proxy> *this;
  __uint64 _Var3;
  __uint64 _Var4;
  ulonglong uVar5;
  _Container_proxy *p_Var6;
  _Container_proxy *p_Var7;
  _Container_proxy *p_Var8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  lVar2 = (param_2 - *plVar1) / 0x18;
  this = (allocator<struct_std::_Container_proxy> *)FUN_180003c60(param_1);
  _Var3 = FUN_180025b90(param_1);
  _Var4 = FUN_180025a00(param_1);
  if (_Var3 == _Var4) {
    FUN_180003ec0();
  }
  uVar5 = FUN_1800250e0(param_1,_Var3 + 1);
  p_Var6 = std::allocator<struct_std::_Container_proxy>::allocate(this,uVar5);
  p_Var7 = (_Container_proxy *)FUN_1800032f0(param_3);
  p_Var8 = (_Container_proxy *)FUN_1800032f0(p_Var6 + lVar2 * 0x18);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(this,p_Var8,p_Var7);
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  if (param_2 == *plVar1) {
    puVar9 = (undefined8 *)FUN_180003cc0(param_1);
    puVar10 = (undefined8 *)FUN_180003ca0(param_1);
    FUN_180025690(param_1,*puVar10,*puVar9,(CLogWriter *)p_Var6);
  }
  else {
    puVar9 = (undefined8 *)FUN_180003ca0(param_1);
    FUN_180025610(param_1,*puVar9,param_2,(CLogWriter *)p_Var6);
    puVar9 = (undefined8 *)FUN_180003cc0(param_1);
    FUN_180025610(param_1,param_2,*puVar9,(CLogWriter *)(p_Var6 + lVar2 * 0x18 + 0x18));
  }
  FUN_180025200(param_1,(longlong)p_Var6,_Var3 + 1,uVar5);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  return lVar2 * 0x18 + *plVar1;
}




longlong FUN_180023910(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  allocator<struct_std::_Container_proxy> *paVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  CLogWriter *pCVar7;
  _Container_proxy *p_Var8;
  _Container_proxy *p_Var9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  lVar2 = (param_2 - *plVar1) / 0x448;
  paVar3 = (allocator<struct_std::_Container_proxy> *)FUN_180003c60(param_1);
  _Var4 = FUN_180025be0(param_1);
  _Var5 = FUN_180025a50(param_1);
  if (_Var4 == _Var5) {
    FUN_180003ec0();
  }
  uVar6 = FUN_180025170(param_1,_Var4 + 1);
  pCVar7 = (CLogWriter *)allocate(paVar3,uVar6);
  p_Var8 = (_Container_proxy *)FUN_1800032f0(param_3);
  p_Var9 = (_Container_proxy *)FUN_1800032f0(pCVar7 + lVar2 * 0x448);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar3,p_Var9,p_Var8);
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  if (param_2 == *plVar1) {
    puVar10 = (undefined8 *)FUN_180003cc0(param_1);
    puVar11 = (undefined8 *)FUN_180003ca0(param_1);
    FUN_1800256f0(param_1,*puVar11,*puVar10,pCVar7);
  }
  else {
    puVar10 = (undefined8 *)FUN_180003ca0(param_1);
    FUN_180025650(param_1,*puVar10,param_2,pCVar7);
    puVar10 = (undefined8 *)FUN_180003cc0(param_1);
    FUN_180025650(param_1,param_2,*puVar10,pCVar7 + lVar2 * 0x448 + 0x448);
  }
  FUN_180025310(param_1,(longlong)pCVar7,_Var4 + 1,uVar6);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  return lVar2 * 0x448 + *plVar1;
}




longlong FUN_180023b70(ulonglong param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x448;
  if (0x3bcbadc7f10d14 < param_1) {
    local_18 = -1;
  }
  return local_18;
}




longlong FUN_180023bc0(longlong *param_1,longlong *param_2)

{
  return (*param_2 - *param_1) / 0x18;
}




longlong FUN_180023bf0(longlong *param_1,longlong *param_2)

{
  return (*param_2 - *param_1) / 0x448;
}




void FUN_180023c20(longlong *param_1,longlong *param_2)

{
  FUN_180023bc0(param_1,param_2);
  return;
}




void FUN_180023c50(longlong *param_1,longlong *param_2)

{
  FUN_180023bf0(param_1,param_2);
  return;
}




CLogWriter *
FUN_180023c80(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  CLogWriter *pCVar1;
  undefined8 uVar2;
  CLogWriter *local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  void *local_20;
  CLogWriter *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (void *)FUN_1800032f0(param_1);
  local_10[0] = FUN_1800032f0(param_2);
  pCVar1 = (CLogWriter *)FUN_180023c20((longlong *)&local_20,local_10);
  local_18 = CLogWriter::operator=(local_res18,pCVar1);
  FUN_1800033b0(local_28);
  uVar2 = FUN_1800036f0(local_20,local_10[0],local_18);
  FUN_180001a80(&local_res18,uVar2);
  return local_res18;
}




CLogWriter *
FUN_180023d30(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  CLogWriter *pCVar1;
  undefined8 uVar2;
  CLogWriter *local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  void *local_20;
  CLogWriter *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (void *)FUN_1800032f0(param_1);
  local_10[0] = FUN_1800032f0(param_2);
  pCVar1 = (CLogWriter *)FUN_180023c50((longlong *)&local_20,local_10);
  local_18 = CLogWriter::operator=(local_res18,pCVar1);
  FUN_1800033b0(local_28);
  uVar2 = FUN_1800036f0(local_20,local_10[0],local_18);
  FUN_180001a80(&local_res18,uVar2);
  return local_res18;
}




/* Library Function - Single Match
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Container_proxy> >::construct<struct std::_Container_proxy,struct
   std::_Container_proxy>(class std::allocator<struct std::_Container_proxy> & __ptr64,struct
   std::_Container_proxy * __ptr64 const,struct std::_Container_proxy && __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl
std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
construct<struct_std::_Container_proxy,struct_std::_Container_proxy>
          (allocator<struct_std::_Container_proxy> *param_1,_Container_proxy *param_2,
          _Container_proxy *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined1 *)FUN_180009280(0x18,param_2);
  puVar2 = (undefined1 *)FUN_1800032f0(param_3);
  for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}




/* Library Function - Single Match
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Container_proxy> >::construct<struct std::_Container_proxy,struct
   std::_Container_proxy>(class std::allocator<struct std::_Container_proxy> & __ptr64,struct
   std::_Container_proxy * __ptr64 const,struct std::_Container_proxy && __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl
std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
construct<struct_std::_Container_proxy,struct_std::_Container_proxy>
          (allocator<struct_std::_Container_proxy> *param_1,_Container_proxy *param_2,
          _Container_proxy *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined1 *)FUN_180009280(0x448,param_2);
  puVar2 = (undefined1 *)FUN_1800032f0(param_3);
  for (lVar3 = 0x448; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}




void FUN_180023e80(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_18000a200(param_1);
  if (bVar1) {
    uVar2 = FUN_1800032f0(param_2);
    FUN_180023540(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800032f0(param_2);
    plVar3 = (longlong *)FUN_180003cc0(param_1);
    FUN_1800236c0(param_1,*plVar3,uVar2);
  }
  return;
}




void FUN_180023ef0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_18000a200(param_1);
  if (bVar1) {
    uVar2 = FUN_1800032f0(param_2);
    FUN_180023600(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800032f0(param_2);
    plVar3 = (longlong *)FUN_180003cc0(param_1);
    FUN_180023910(param_1,*plVar3,uVar2);
  }
  return;
}




undefined8 *
FUN_180023f60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  IObject *pIVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_18 [3];
  
  FUN_180013b70(param_1);
  FUN_180013b70(param_1 + 2);
  FUN_180024040(param_1 + 4);
  FUN_180024040(param_1 + 5);
  pIVar1 = (IObject *)FUN_18000bfd0("Thread");
  FUN_1800230f0(param_1 + 4,pIVar1,param_3,param_4);
  lVar2 = FUN_180002800(param_1 + 4);
  if (lVar2 != 0) {
    puVar3 = FUN_18000c3d0(param_1 + 4,local_18);
    plVar4 = (longlong *)FUN_180002800(puVar3);
    pIVar1 = (IObject *)(**(code **)(*plVar4 + 0x40))(plVar4);
    FUN_180023090(param_1 + 5,pIVar1,param_3,param_4);
  }
  return param_1;
}




undefined8 * FUN_180024040(undefined8 *param_1)

{
  FUN_1800240b0(param_1);
  return param_1;
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

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_180024e60(param_1,param_2,param_3,param_4);
  return param_1;
}




undefined8 * FUN_1800240b0(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}




undefined4 *
FUN_1800240d0(undefined4 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             undefined1 *param_5)

{
  int iVar1;
  HANDLE pvVar2;
  void *pvVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_res10;
  undefined1 local_28 [24];
  
  uVar7 = (uint)param_3;
  local_res10 = (int)param_2;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  FUN_180023f60((undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  *(undefined8 *)(param_1 + 0x14) = param_4;
  puVar5 = param_5;
  puVar6 = param_1 + 0x16;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = (undefined4 *)((longlong)puVar6 + 1);
  }
  memset(param_1 + 0x1a,0,0x24);
  if (uVar7 == 0) {
    local_res10 = 0;
  }
  if (local_res10 == 0) {
    if (uVar7 != 0) {
      pvVar3 = operator_new(param_3 & 0xffffffff);
      *(void **)(param_1 + 0x1e) = pvVar3;
    }
  }
  else {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + 4) = pvVar2;
    if ((*(longlong *)(param_1 + 4) != 0) &&
       (iVar1 = FUN_180024d00((longlong)(param_1 + 8),uVar7), iVar1 != 0)) {
      puVar5 = local_28;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *param_5;
        param_5 = param_5 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_180024f40(param_1);
    }
  }
  return param_1;
}




undefined8 * FUN_180024230(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_18 [3];
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  lVar2 = FUN_180002800((undefined8 *)*param_1);
  if (lVar2 != 0) {
    puVar3 = FUN_18000c3d0((undefined8 *)*param_1,local_18);
    plVar4 = (longlong *)FUN_180002800(puVar3);
    iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4,param_3);
    *(bool *)(param_1 + 1) = -1 < iVar1;
  }
  return param_1;
}




uint * FUN_1800242d0(uint *param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  DWORD DVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined8 *)(param_1 + 4) = param_4;
  *(undefined8 *)(param_1 + 6) = param_5;
  DVar1 = GetTickCount();
  param_1[1] = DVar1;
  CLogWriter::Log("START!DiskNum=%d,enumSearchMethod=%d,s64StartSector=0x%I64x,s64SectorCount=0x%I64x"
                  ,(ulonglong)*param_1,(ulonglong)param_1[2],*(undefined8 *)(param_1 + 4),
                  *(undefined8 *)(param_1 + 6));
  return param_1;
}




undefined8 * FUN_180024380(undefined8 *param_1)

{
  *param_1 = IAsyncProgressInformation::vftable;
  return param_1;
}




undefined8 * FUN_1800243a0(undefined8 *param_1)

{
  *param_1 = IAsyncSearchResult::vftable;
  return param_1;
}




undefined8 * FUN_1800243c0(undefined8 *param_1)

{
  *param_1 = IRecoverySearchControl::vftable;
  return param_1;
}




IObject * FUN_1800243e0(IObject *param_1)

{
  IObject::IObject(param_1);
  FUN_180024490((undefined8 *)(param_1 + 8));
  FUN_1800243c0((undefined8 *)(param_1 + 0x10));
  FUN_180024380((undefined8 *)(param_1 + 0x18));
  FUN_1800243a0((undefined8 *)(param_1 + 0x20));
  *(undefined ***)param_1 = IRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 8) = IRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x10) = IRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x18) = IRecoverySearchEngine::vftable;
  *(undefined ***)(param_1 + 0x20) = IRecoverySearchEngine::vftable;
  return param_1;
}




undefined8 * FUN_180024490(undefined8 *param_1)

{
  *param_1 = IRecoverySearchOptions::vftable;
  return param_1;
}




IObject * FUN_1800244b0(IObject *param_1)

{
  IObject::IObject(param_1);
  *(undefined ***)param_1 = IRunObject::vftable;
  return param_1;
}




void FUN_1800244e0(longlong param_1)

{
  FUN_180025010(param_1);
  FUN_18000c370((longlong *)(param_1 + 0x28));
  FUN_18000c370((longlong *)(param_1 + 0x20));
  FUN_180013c00(param_1 + 0x10);
  FUN_180013c00(param_1);
  return;
}




void FUN_180024550(int *param_1)

{
  FUN_180024fa0(param_1);
  if (*(longlong *)(param_1 + 0x1e) != 0) {
    free(*(void **)(param_1 + 0x1e));
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  FUN_1800244e0((longlong)(param_1 + 8));
  return;
}




void FUN_1800245c0(undefined8 param_1)

{
  FUN_180025470(param_1);
  return;
}




void FUN_1800245f0(undefined8 param_1)

{
  FUN_180025540(param_1);
  return;
}




void FUN_180024620(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 local_18 [3];
  
  if (*(char *)(param_1 + 1) != '\0') {
    lVar1 = FUN_180002800((undefined8 *)*param_1);
    if (lVar1 != 0) {
      puVar2 = FUN_18000c3d0((undefined8 *)*param_1,local_18);
      plVar3 = (longlong *)FUN_180002800(puVar2);
      (**(code **)(*plVar3 + 0x30))(plVar3);
    }
  }
  return;
}




void FUN_180024690(uint *param_1)

{
  DWORD DVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  DVar1 = GetTickCount();
  CLogWriter::Log("  END!DiskNum=%d,enumSearchMethod=%d,s64StartSector=0x%I64x,s64SectorCount=0x%I64x nUsedTime=%08d"
                  ,(ulonglong)*param_1,(ulonglong)param_1[2],*(undefined8 *)(param_1 + 4),
                  *(undefined8 *)(param_1 + 6),DVar1 - param_1[1],DVar1 - param_1[1],uVar2);
  return;
}




longlong * FUN_180024700(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18000b190(param_2);
  FUN_18000ec10(param_1,lVar1);
  return param_1;
}




bool FUN_180024740(longlong *param_1)

{
  return *param_1 == 0;
}




longlong FUN_180024770(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  return param_2 * 0x18 + *plVar1;
}




longlong FUN_1800247a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  return param_2 * 0x448 + *plVar1;
}




void FUN_1800247d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180002800(param_1);
  FUN_1800032f0(uVar1);
  return;
}




undefined8 * FUN_1800247f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_180013c50(param_1);
  *param_2 = uVar1;
  return param_2;
}




longlong * FUN_180024840(longlong *param_1)

{
  *param_1 = *param_1 + 0x448;
  return param_1;
}




longlong * FUN_180024870(longlong *param_1)

{
  FUN_180024840(param_1);
  return param_1;
}




void FUN_180024890(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_20 [4];
  
  if (param_2 != 0) {
    local_res10 = param_2;
    local_res18 = param_3;
    FUN_180024230(local_20,param_1 + 0x28,0xffffffff);
    FUN_180025b50(local_res18,&local_res10);
    FUN_180024620(local_20);
  }
  return;
}




void FUN_1800248f0(longlong param_1,longlong param_2)

{
  FUN_180024890(param_1,param_2,param_1 + 0x10);
  return;
}




void FUN_180024920(longlong param_1,longlong param_2)

{
  FUN_180024890(param_1,param_2,param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180024993) */

void FUN_180024950(longlong param_1,undefined8 param_2)

{
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    (**(code **)(param_1 + 0x58))
              ((longlong)*(int *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x50),param_2);
  }
  return;
}




void FUN_1800249f0(int *param_1,longlong param_2)

{
  if (*param_1 == 0) {
    FUN_180024950((longlong)param_1,param_2);
  }
  else {
    FUN_180024920((longlong)(param_1 + 8),param_2);
    SetEvent(*(HANDLE *)(param_1 + 4));
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180024af3) */

undefined8 FUN_180024a50(longlong param_1)

{
  longlong lVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) break;
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
    while (lVar1 = FUN_180024c00(param_1 + 0x20), lVar1 != 0) {
      if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
        FUN_180024950(param_1,lVar1);
        FUN_1800248f0(param_1 + 0x20,lVar1);
      }
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      return 0;
    }
  }
  return 0;
}




undefined4 FUN_180024b60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}




undefined8 FUN_180024b70(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined8 local_20 [4];
  
  FUN_180024230(local_20,param_1 + 0x28,0xffffffff);
  local_38 = 0;
  bVar1 = FUN_1800142c0(param_2);
  if (!bVar1) {
    puVar2 = (undefined8 *)FUN_180025830(param_2);
    local_38 = *puVar2;
    FUN_180025aa0(param_2);
  }
  FUN_180024620(local_20);
  return local_38;
}




void FUN_180024c00(longlong param_1)

{
  FUN_180024b70(param_1,param_1);
  return;
}




undefined4 FUN_180024c20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}




longlong FUN_180024c40(longlong param_1)

{
  longlong lVar1;
  
  while (lVar1 = FUN_180024b70(param_1,param_1 + 0x10), lVar1 == 0) {
    Sleep(10);
  }
  return lVar1;
}




int * FUN_180024ca0(int *param_1)

{
  int *local_18;
  
  local_18 = (int *)0x0;
  if (*param_1 == 0) {
    if (*(longlong *)(param_1 + 0x1e) != 0) {
      local_18 = param_1 + 0x1a;
    }
  }
  else {
    local_18 = (int *)FUN_180024c40((longlong)(param_1 + 8));
  }
  return local_18;
}




undefined4 FUN_180024d00(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 local_18;
  
  local_18 = 0;
  lVar1 = FUN_180002800((undefined8 *)(param_1 + 0x28));
  if (lVar1 != 0) {
    local_18 = FUN_180024d50(param_1,param_2);
  }
  return local_18;
}




undefined4 FUN_180024d50(longlong param_1,uint param_2)

{
  int local_38;
  void *local_28;
  void *local_20;
  undefined8 local_18;
  void *local_10;
  
  if (param_2 != 0) {
    local_38 = 0;
    while( true ) {
      if ((int)(0x3200000 / (ulonglong)param_2) <= local_38) {
        return 1;
      }
      local_28 = (void *)FUN_180026e64(0x24);
      if (local_28 == (void *)0x0) {
        return 1;
      }
      local_20 = local_28;
      local_18 = thunk_FUN_180026e64((ulonglong)param_2);
      *(undefined8 *)((longlong)local_28 + 0x10) = local_18;
      if (*(longlong *)((longlong)local_28 + 0x10) == 0) break;
      FUN_180014390(param_1 + 0x10,&local_28);
      local_38 = local_38 + 1;
    }
    local_10 = local_28;
    free(local_28);
  }
  return 0;
}




undefined1 FUN_180024e50(longlong param_1)

{
  return *(undefined1 *)(param_1 + 8);
}




longlong FUN_180024e60(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_180023410(0,pIVar2,param_3,param_4);
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




void FUN_180024f20(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  return;
}




void FUN_180024f40(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_180024a50,param_1,0,(LPDWORD)0x0);
  *(HANDLE *)(param_1 + 2) = pvVar1;
  if (*(longlong *)(param_1 + 2) != 0) {
    *param_1 = 1;
  }
  return;
}




void FUN_180024fa0(int *param_1)

{
  if (*param_1 != 0) {
    param_1[6] = 1;
    SetEvent(*(HANDLE *)(param_1 + 4));
    WaitForSingleObject(*(HANDLE *)(param_1 + 2),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 2));
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_180025010(longlong param_1)

{
  void *_Memory;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18 [3];
  
  FUN_180024230(local_18,param_1 + 0x28,0xffffffff);
  while (bVar1 = FUN_1800142c0(param_1 + 0x10), !bVar1) {
    puVar2 = (undefined8 *)FUN_180025830(param_1 + 0x10);
    _Memory = (void *)*puVar2;
    FUN_180025aa0(param_1 + 0x10);
    if (_Memory != (void *)0x0) {
      if (*(longlong *)((longlong)_Memory + 0x10) != 0) {
        free(*(void **)((longlong)_Memory + 0x10));
      }
      free(_Memory);
    }
  }
  FUN_180024620(local_18);
  return;
}




ulonglong FUN_1800250e0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_180025860(param_1);
  _Var2 = FUN_180025a00(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




ulonglong FUN_180025170(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_1800258b0(param_1);
  _Var2 = FUN_180025a50(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_180025200(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180003ce0(param_1);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  if (*plVar1 != 0) {
    FUN_180003cc0(param_1);
    FUN_180003ca0(param_1);
    FUN_180003c20(param_1);
    lVar2 = FUN_180025860(param_1);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    uVar4 = FUN_180003c60(param_1);
    FUN_180014290(uVar4,(void *)*puVar3,lVar2);
  }
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  *plVar1 = param_2 + param_3 * 0x18;
  plVar1 = (longlong *)FUN_180003c80(param_1);
  *plVar1 = param_2 + param_4 * 0x18;
  return;
}




void FUN_180025310(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180003ce0(param_1);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  if (*plVar1 != 0) {
    FUN_180003cc0(param_1);
    FUN_180003ca0(param_1);
    FUN_180003c20(param_1);
    lVar2 = FUN_1800258b0(param_1);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    uVar4 = FUN_180003c60(param_1);
    FUN_180025900(uVar4,(void *)*puVar3,lVar2);
  }
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  *plVar1 = param_2 + param_3 * 0x448;
  plVar1 = (longlong *)FUN_180003c80(param_1);
  *plVar1 = param_2 + param_4 * 0x448;
  return;
}




undefined8 * FUN_180025420(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_1800032f0(uVar1);
  FUN_180009060(param_2,param_3);
  return param_2;
}




void FUN_180025470(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180003ce0(param_1);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  if (*plVar1 != 0) {
    FUN_180003cc0(param_1);
    FUN_180003ca0(param_1);
    FUN_180003c20(param_1);
    lVar2 = FUN_180025860(param_1);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    uVar4 = FUN_180003c60(param_1);
    FUN_180014290(uVar4,(void *)*puVar3,lVar2);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_180003cc0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_180003c80(param_1);
    *puVar3 = 0;
  }
  return;
}




void FUN_180025540(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180003ce0(param_1);
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  if (*plVar1 != 0) {
    FUN_180003cc0(param_1);
    FUN_180003ca0(param_1);
    FUN_180003c20(param_1);
    lVar2 = FUN_1800258b0(param_1);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    uVar4 = FUN_180003c60(param_1);
    FUN_180025900(uVar4,(void *)*puVar3,lVar2);
    puVar3 = (undefined8 *)FUN_180003ca0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_180003cc0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_180003c80(param_1);
    *puVar3 = 0;
  }
  return;
}




void FUN_180025610(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_180023c80(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_180025650(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003c60(param_1);
  FUN_180023d30(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_180025690(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_180025610(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800256f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_180025650(param_1,param_2,param_3,param_4);
  return;
}




undefined8 * FUN_180025750(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180003ca0(param_1);
  FUN_180009000(param_2,*(undefined8 *)*puVar1);
  return param_2;
}




longlong * FUN_180025790(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  *plVar1 = *plVar1 + -1;
  return param_2;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl std::allocator<char>::allocate(unsigned __int64) __ptr64
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void allocate(undefined8 param_1,ulonglong param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_180023b70(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




void FUN_180025830(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 local_18 [3];
  
  plVar1 = FUN_180014300(param_1,local_18);
  plVar1 = FUN_180013d10(plVar1);
  FUN_180013c30(plVar1);
  return;
}




longlong FUN_180025860(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003c80(param_1);
  plVar2 = (longlong *)FUN_180003ca0(param_1);
  return (*plVar1 - *plVar2) / 0x18;
}




longlong FUN_1800258b0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003c80(param_1);
  plVar2 = (longlong *)FUN_180003ca0(param_1);
  return (*plVar1 - *plVar2) / 0x448;
}




void FUN_180025900(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x448);
  return;
}




bool FUN_180025930(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003ca0(param_1);
  plVar2 = (longlong *)FUN_180003cc0(param_1);
  return *plVar1 == *plVar2;
}




undefined8 * FUN_180025980(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 local_res18 [2];
  undefined8 local_10 [2];
  
  local_res18[0] = param_3;
  puVar1 = FUN_1800247f0(local_res18,local_10);
  plVar2 = FUN_180025790(param_1,(longlong *)*puVar1);
  FUN_180013e90(param_1,plVar2);
  FUN_180025420(param_1,param_2,local_res18[0]);
  return param_2;
}




undefined8 FUN_1800259f0(void)

{
  return 0x3bcbadc7f10d14;
}




__uint64 FUN_180025a00(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180003c60(param_1);
  local_18 = FUN_180014360();
  local_10[0] = FUN_180003f80();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




__uint64 FUN_180025a50(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180003c60(param_1);
  local_18 = FUN_1800259f0();
  local_10[0] = FUN_180003f80();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




void FUN_180025aa0(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  plVar1 = FUN_180014300(param_1,&local_20);
  plVar1 = FUN_180013d10(plVar1);
  FUN_180025980(param_1,local_18,*plVar1);
  return;
}




void FUN_180025af0(undefined8 param_1,undefined8 param_2)

{
  FUN_180023e80(param_1,param_2);
  return;
}




void FUN_180025b20(undefined8 param_1,undefined8 param_2)

{
  FUN_180023ef0(param_1,param_2);
  return;
}




void FUN_180025b50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_10 [2];
  
  puVar1 = FUN_180025750(param_1,local_10);
  FUN_180013740(param_1,(_Container_proxy *)*puVar1,param_2);
  return;
}




longlong FUN_180025b90(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  plVar2 = (longlong *)FUN_180003ca0(param_1);
  return (*plVar1 - *plVar2) / 0x18;
}




longlong FUN_180025be0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003cc0(param_1);
  plVar2 = (longlong *)FUN_180003ca0(param_1);
  return (*plVar1 - *plVar2) / 0x448;
}




undefined4 * FUN_180025c30(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}




void FUN_180025c50(void)

{
  return;
}




void FUN_180025c60(undefined8 param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_498 [32];
  ulonglong local_478;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  ulonglong local_45c;
  undefined4 local_454;
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_498;
  puVar2 = &local_468;
  for (lVar1 = 0x448; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((longlong)puVar2 + 1);
  }
  local_468 = 0x74726150;
  local_454 = 0;
  local_478 = param_4;
  if (param_5 <= param_4) {
    local_478 = param_5;
  }
  local_45c = local_478;
  local_464 = param_2;
  local_460 = param_3;
  FUN_1800260f0(param_1,&local_468,0);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_498);
  return;
}




undefined4 FUN_180025d30(undefined8 param_1,LPWSTR param_2)

{
  DWORD DVar1;
  longlong lVar2;
  undefined4 local_18;
  
  local_18 = 0;
  if (param_2 != (LPWSTR)0x0) {
    DVar1 = GetModuleFileNameW((HMODULE)&IMAGE_DOS_HEADER_180000000,param_2,0x104);
    if (DVar1 != 0) {
      param_2[0x103] = L'\0';
      lVar2 = FUN_180026290(param_2,L'\\');
      if (lVar2 != 0) {
        *(undefined2 *)(lVar2 + 2) = 0;
        local_18 = 1;
      }
    }
  }
  return local_18;
}




undefined4 FUN_180025dc0(undefined8 param_1,wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  undefined4 local_18;
  
  local_18 = 0;
  if (param_2 != (wchar_t *)0x0) {
    iVar1 = FUN_180025d30(param_1,param_3);
    if (iVar1 != 0) {
      wcscat_s(param_3,0x104,param_2);
      local_18 = 1;
    }
  }
  return local_18;
}




void FUN_180025e30(int *param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  LPCVOID pvVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined1 auStack_278 [32];
  longlong local_258;
  undefined8 local_250 [3];
  undefined8 local_238;
  undefined8 local_230;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_238 = 0xfffffffffffffffe;
  local_18 = DAT_18003a118 ^ (ulonglong)auStack_278;
  if (*param_1 == 0) {
    pwVar5 = local_228;
    for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)pwVar5 = 0;
      pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
    }
    FUN_180025dc0(param_1,L"lostpart.dat",local_228);
    DeleteFileW(local_228);
    FUN_180025dc0(param_1,L"partinfo.dat",local_228);
    DeleteFileW(local_228);
    FUN_1800038a0(local_250);
    FUN_1800264e0(param_2,param_3,local_250,param_4);
    FUN_18000a7a0(local_250,&local_258);
    while( true ) {
      plVar2 = FUN_18000aa20(local_250,&local_230);
      bVar1 = FID_conflict_operator__(&local_258,plVar2);
      if (!bVar1) break;
      pvVar3 = (LPCVOID)FUN_180009440(&local_258);
      FUN_180025f90(param_1,pvVar3,1);
      FUN_180026270(&local_258);
    }
    *param_1 = 1;
    FUN_1800245c0(local_250);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_278);
  return;
}




void FUN_180025f90(undefined8 param_1,LPCVOID param_2,int param_3)

{
  LARGE_INTEGER liDistanceToMove;
  BOOL BVar1;
  HANDLE hFile;
  longlong lVar2;
  wchar_t *pwVar3;
  LONG *pLVar4;
  undefined1 auStackY_288 [32];
  DWORD local_240 [2];
  LARGE_INTEGER local_238;
  undefined4 local_230;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStackY_288;
  pwVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  if (param_3 == 0) {
    FUN_180025dc0(param_1,L"lostpart.dat",local_228);
  }
  else {
    FUN_180025dc0(param_1,L"partinfo.dat",local_228);
  }
  hFile = CreateFileW(local_228,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    local_238.s.LowPart = 0;
    pLVar4 = &local_238.s.HighPart;
    for (lVar2 = 4; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pLVar4 = 0;
      pLVar4 = (LONG *)((longlong)pLVar4 + 1);
    }
    BVar1 = GetFileSizeEx(hFile,&local_238);
    if (BVar1 != 0) {
      local_230 = 0;
      liDistanceToMove.s.HighPart = local_238.s.HighPart;
      liDistanceToMove.s.LowPart = local_238.s.LowPart;
      BVar1 = SetFilePointerEx(hFile,liDistanceToMove,(PLARGE_INTEGER)0x0,0);
      if (BVar1 != 0) {
        local_240[0] = 0;
        WriteFile(hFile,param_2,0x18,local_240,(LPOVERLAPPED)0x0);
      }
    }
    CloseHandle(hFile);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_288);
  return;
}




void FUN_1800260f0(undefined8 param_1,LPCVOID param_2,int param_3)

{
  LARGE_INTEGER liDistanceToMove;
  BOOL BVar1;
  HANDLE hFile;
  longlong lVar2;
  wchar_t *pwVar3;
  LONG *pLVar4;
  undefined1 auStackY_288 [32];
  DWORD local_240 [2];
  LARGE_INTEGER local_238;
  undefined4 local_230;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18003a118 ^ (ulonglong)auStackY_288;
  pwVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  if (param_3 == 0) {
    FUN_180025dc0(param_1,L"lostpart.dat",local_228);
  }
  else {
    FUN_180025dc0(param_1,L"partinfo.dat",local_228);
  }
  hFile = CreateFileW(local_228,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    local_238.s.LowPart = 0;
    pLVar4 = &local_238.s.HighPart;
    for (lVar2 = 4; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pLVar4 = 0;
      pLVar4 = (LONG *)((longlong)pLVar4 + 1);
    }
    BVar1 = GetFileSizeEx(hFile,&local_238);
    if (BVar1 != 0) {
      local_230 = 0;
      liDistanceToMove.s.HighPart = local_238.s.HighPart;
      liDistanceToMove.s.LowPart = local_238.s.LowPart;
      BVar1 = SetFilePointerEx(hFile,liDistanceToMove,(PLARGE_INTEGER)0x0,0);
      if (BVar1 != 0) {
        local_240[0] = 0;
        WriteFile(hFile,param_2,0x448,local_240,(LPOVERLAPPED)0x0);
      }
    }
    CloseHandle(hFile);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_288);
  return;
}




longlong * FUN_180026250(longlong *param_1)

{
  *param_1 = *param_1 + 0x18;
  return param_1;
}




longlong * FUN_180026270(longlong *param_1)

{
  FUN_180026250(param_1);
  return param_1;
}




void FUN_180026290(wchar_t *param_1,wchar_t param_2)

{
  wcsrchr(param_1,param_2);
  return;
}




IObject * FUN_1800262c0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  IObject *pIVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong local_70;
  IObject *local_68;
  IObject *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  IObject *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_30 = 0xfffffffffffffffe;
  bVar1 = false;
  local_60 = (IObject *)0x0;
  lVar4 = FUN_180002800(param_1);
  if (lVar4 != 0) {
    puVar5 = FUN_18000c3d0(param_1,&local_28);
    local_50 = (longlong *)FUN_180002800(puVar5);
    pIVar6 = (IObject *)(**(code **)(*local_50 + 0x30))(local_50);
    FUN_1800267e0(&local_58,pIVar6,param_3,param_4);
    lVar4 = FUN_180002800(&local_58);
    if (lVar4 == 0) {
      FUN_18000c370(&local_58);
    }
    else {
      while( true ) {
        puVar5 = &local_20;
        puVar7 = FUN_18000c3d0(&local_58,puVar5);
        local_48 = (longlong *)FUN_180002800(puVar7);
        local_60 = (IObject *)(**(code **)(*local_48 + 0x28))();
        if (local_60 == (IObject *)0x0) break;
        pcVar8 = (char *)FUN_180023410(0,puVar5,param_3,param_4);
        pIVar6 = IObject::GetInterfaceEx(local_60,pcVar8);
        FUN_180022ff0(&local_70,pIVar6,param_3,param_4);
        lVar4 = FUN_180002800(&local_70);
        if (lVar4 == 0) {
          FUN_18000c370(&local_70);
        }
        else {
          puVar5 = local_18;
          puVar7 = FUN_18000c3d0(&local_70,puVar5);
          local_40 = (longlong *)FUN_180002800(puVar7);
          iVar2 = (**(code **)(*local_40 + 0x88))();
          if (iVar2 == param_2) {
            pcVar8 = (char *)FUN_1800233f0(0,puVar5,param_3,param_4);
            local_68 = IObject::GetInterfaceEx(local_60,pcVar8);
            if (local_68 != (IObject *)0x0) {
              uVar3 = (**(code **)(*(longlong *)local_68 + 0x28))(local_68);
              if (((uVar3 & 4) == 0) &&
                 (uVar3 = (**(code **)(*(longlong *)local_68 + 0x28))(local_68), (uVar3 & 2) == 0))
              {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
            }
            FUN_18000c370(&local_70);
            break;
          }
          FUN_18000c370(&local_70);
        }
      }
      FUN_18000c370(&local_58);
    }
  }
  if (bVar1) {
    local_38 = local_60;
  }
  else {
    local_38 = (IObject *)0x0;
  }
  return local_38;
}




void FUN_1800264e0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  char *pcVar3;
  IObject *pIVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  IObject *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_60 = 0xfffffffffffffffe;
  local_10 = DAT_18003a118 ^ (ulonglong)auStack_d8;
  uVar7 = param_3;
  lVar2 = FUN_180002800(param_1);
  if (lVar2 != 0) {
    uVar6 = (ulonglong)param_2;
    local_98 = FUN_1800262c0(param_1,param_2,uVar7,param_4);
    if (local_98 != (IObject *)0x0) {
      pcVar3 = (char *)FUN_18000bd60(0,uVar6,uVar7,param_4);
      pIVar4 = IObject::GetInterfaceEx(local_98,pcVar3);
      FUN_180026860(&local_b0,pIVar4,uVar7,param_4);
      bVar1 = FUN_180026a40(&local_b0,0);
      if (bVar1) {
        FUN_18000c370(&local_b0);
      }
      else {
        puVar5 = FUN_18000c3d0(&local_b0,&local_58);
        local_90 = (longlong *)FUN_180002800(puVar5);
        pIVar4 = (IObject *)(**(code **)(*local_90 + 0x30))(local_90);
        FUN_1800267e0(&local_a8,pIVar4,uVar7,param_4);
        bVar1 = FUN_180026a40(&local_a8,0);
        if (bVar1) {
          FUN_18000c370(&local_a8);
          FUN_18000c370(&local_b0);
        }
        else {
          FUN_18000c180(&local_a0);
          while( true ) {
            puVar5 = FUN_18000c3d0(&local_a8,&local_50);
            local_88 = (longlong *)FUN_180002800(puVar5);
            pIVar4 = (IObject *)(**(code **)(*local_88 + 0x28))(local_88);
            lVar2 = FUN_18000bc30(&local_a0,pIVar4,uVar7,param_4);
            if (lVar2 == 0) break;
            local_68 = (char *)FUN_1800268c0(0,pIVar4,uVar7,param_4);
            puVar5 = FUN_18000c3d0(&local_a0,&local_48);
            pIVar4 = (IObject *)FUN_180002800(puVar5);
            pIVar4 = IObject::GetInterfaceEx(pIVar4,local_68);
            FUN_180026820(&local_b8,pIVar4,uVar7,param_4);
            bVar1 = FUN_180026a40(&local_b8,0);
            if (bVar1) {
              FUN_18000c370(&local_b8);
            }
            else {
              local_28 = 0x74726150;
              puVar5 = FUN_18000c3d0(&local_b8,&local_40);
              local_80 = (longlong *)FUN_180002800(puVar5);
              local_24 = (**(code **)(*local_80 + 0x28))(local_80);
              puVar5 = FUN_18000c3d0(&local_b8,&local_38);
              local_78 = (longlong *)FUN_180002800(puVar5);
              local_1c = (**(code **)(*local_78 + 0x30))(local_78);
              puVar5 = FUN_18000c3d0(&local_b8,&local_30);
              local_70 = (longlong *)FUN_180002800(puVar5);
              local_14 = (**(code **)(*local_70 + 0x58))(local_70);
              FUN_180025af0(param_3,&local_28);
              FUN_18000c370(&local_b8);
            }
          }
          FUN_18000c370(&local_a0);
          FUN_18000c370(&local_a8);
          FUN_18000c370(&local_b0);
        }
      }
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_d8);
  return;
}




longlong * FUN_1800267e0(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,param_2,param_3,param_4);
  return param_1;
}




longlong * FUN_180026820(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,param_2,param_3,param_4);
  return param_1;
}




longlong * FUN_180026860(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,param_2,param_3,param_4);
  return param_1;
}




void FUN_1800268a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800268e0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800268c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180026930(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_1800268e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003d050 == (undefined1 *)0x0) {
    DAT_18003d050 = &DAT_18003cf50;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003b9d8,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003d050,local_18);
  }
  return DAT_18003d050;
}




undefined1 *
FUN_180026930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18003cf40 == (undefined1 *)0x0) {
    DAT_18003cf40 = &DAT_18003ce40;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_18000cd10(0x18003b9b0,param_2,param_3,param_4);
    FUN_18000c440(pcVar1,DAT_18003cf40,local_18);
  }
  return DAT_18003cf40;
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

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_180026a80(param_1,param_2,param_3,param_4);
  return param_1;
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

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_180026b40(param_1,param_2,param_3,param_4);
  return param_1;
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

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_18000cb90(param_1,param_2,param_3,param_4);
  return param_1;
}




bool FUN_180026a40(longlong *param_1,longlong param_2)

{
  return *param_1 == param_2;
}




longlong FUN_180026a80(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_1800268a0(0,pIVar2,param_3,param_4);
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




longlong FUN_180026b40(longlong *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    pIVar2 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = (char *)FUN_1800268c0(0,pIVar2,param_3,param_4);
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




undefined4 * FUN_180026c00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}




void FUN_180026c40(void)

{
  return;
}




/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
__GSHandlerCheck(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4,*(uint **)(param_4 + 0x38));
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




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18003a118) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_180026d14(undefined8 *param_1,ulonglong param_2)

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
    FUN_180027d58();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_180027d38();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
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




void FUN_180026e64(__uint64 param_1)

{
  operator_new(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x000180026eb1. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180026ee2;
  capture_previous_context((PCONTEXT)&DAT_18003d100);
  _DAT_18003d070 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18003d198 = puVar3 + 0x40;
  _DAT_18003d180 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18003d060 = 0xc0000409;
  _DAT_18003d064 = 1;
  _DAT_18003d078 = 1;
  DAT_18003d080 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18003a118;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18003a110;
  *(undefined8 *)(puVar3 + -8) = 0x180026f84;
  DAT_18003d1f8 = _DAT_18003d070;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180030750);
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
  *(undefined8 *)(puVar3 + -8) = 0x180026fca;
  capture_current_context((PCONTEXT)&DAT_18003d100);
  _DAT_18003d070 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18003d198 = puVar3 + 0x30;
  _DAT_18003d060 = 0xc0000409;
  _DAT_18003d064 = 1;
  _DAT_18003d078 = 1;
  DAT_18003d080 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180027036;
  DAT_18003d1f8 = _DAT_18003d070;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180030750);
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




void FUN_180027120(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180027127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18003d5d0);
  return;
}




void FUN_180027130(void)

{
  __std_type_info_destroy_list(&DAT_18003d5d0);
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
LAB_18002716a:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18003d5e8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18003d5e8;
        pvVar1 = DAT_18003d5e8;
      }
      DAT_18003d5e8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18002716a;
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
    uVar3 = FUN_180027f08();
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
  
  uVar1 = FUN_1800272f4(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_1800282ac();
  if (cVar1 != '\0') {
    cVar1 = FUN_1800282ac();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1800282ac();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_1800282ac();
  FUN_1800282ac();
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
    _execute_onexit_table(&DAT_18003d5f8);
    return;
  }
  uVar2 = FUN_1800282b0();
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
  FUN_1800282ac();
  FUN_1800282ac();
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
    DAT_18003d5f0 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_1800282ac();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_1800282ac();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_1800282ac();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800272f4(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18003d5f1 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18003a118 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18003a118;
      _DAT_18003d5f8 = in_RAX;
      uRam000000018003d600 = in_RAX;
      _DAT_18003d608 = in_RAX;
      _DAT_18003d610 = in_RAX;
      uRam000000018003d618 = in_RAX;
      _DAT_18003d620 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18003d5f8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18003d610), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18003d5f1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018002745a) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_180027443;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180027443:
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
    DAT_18003d5e8 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18003d5f0 == '\0') || (param_2 == '\0')) {
    FUN_1800282ac();
    FUN_1800282ac();
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
  
  bVar2 = (byte)DAT_18003a118 & 0x3f;
  if (((DAT_18003a118 ^ _DAT_18003d5f8) >> bVar2 | (DAT_18003a118 ^ _DAT_18003d5f8) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18003d5f8,_Func);
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

undefined8 FUN_180027520(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18003d628,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180027672;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18003d658 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18003d658 != (HANDLE)0x0) goto LAB_180027610;
  }
  else {
    DAT_18003d658 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18003d650);
    bVar7 = 0x40 - ((byte)DAT_18003a118 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18003d660 = DAT_18003a118 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18003d668 = DAT_18003a118 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180027610:
    uVar6 = FUN_1800272f4(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180027680);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180027672:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180027680(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18003d628);
  if (DAT_18003d658 != (HANDLE)0x0) {
    CloseHandle(DAT_18003d658);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18003d628);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18003d628);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18003d628);
  uVar1 = (ulonglong)_tls_index;
  DAT_18003a124 = DAT_18003a124 + 1;
  *param_1 = DAT_18003a124;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18003a124;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18003d628);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18003d628);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18002778c:
                    /* WARNING: Could not recover jumptable at 0x000180027798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18003d628);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18003a124;
      goto LAB_18002778c;
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
  
  if (DAT_18003d658 != (HANDLE)0x0) {
    SetEvent(DAT_18003d658);
                    /* WARNING: Could not recover jumptable at 0x0001800277e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18003d658);
    return;
  }
  bVar1 = (byte)DAT_18003a118 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x0001800282d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18003a118 ^ _DAT_18003d668) >> bVar1 |
            (DAT_18003a118 ^ _DAT_18003d668) << 0x40 - bVar1))(&DAT_18003d650);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18003d658 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18003d628);
    WaitForSingleObjectEx(DAT_18003d658,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180027860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18003d628);
    return;
  }
  bVar1 = (byte)DAT_18003a118 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x0001800282d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18003a118 ^ _DAT_18003d660) >> bVar1 |
            (DAT_18003a118 ^ _DAT_18003d660) << 0x40 - bVar1))
            (&DAT_18003d650,&DAT_18003d628,param_1);
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
    if (DAT_18003d674 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18003d674 = DAT_18003d674 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18003d5e0 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180027130();
      FID_conflict__RTC_Initialize();
      DAT_18003d5e0 = 0;
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
    if (DAT_18003d5e0 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18003d5e0 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180027120();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_18002b308,&DAT_18002b318);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_18002b2d8,&DAT_18002b300);
        DAT_18003d5e0 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180028168();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18003d674 = DAT_18003d674 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180027b30) */
/* WARNING: Removing unreachable block (ram,0x000180027abf) */
/* WARNING: Removing unreachable block (ram,0x000180027b73) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18003d674 < 1)) {
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




undefined8 * FUN_180027be8(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180027c28(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180027c48(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180027c88(undefined8 *param_1)

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




undefined8 * FUN_180027cf4(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180027d38(void)

{
  undefined8 local_28 [5];
  
  FUN_180027c28(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180038cb8);
}




void FUN_180027d58(void)

{
  undefined8 local_28 [5];
  
  FUN_180027c88(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180038d40);
}




char * FUN_180027d78(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x000180027e5a) */
/* WARNING: Removing unreachable block (ram,0x000180027dd8) */
/* WARNING: Removing unreachable block (ram,0x000180027db3) */
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
  
  DAT_18003a12c = 2;
  _DAT_18003a128 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18003a130 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18003d678 = DAT_18003d678 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18003d678 = DAT_18003d678 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18003a128 = 2;
    DAT_18003a12c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18003a12c = 0xe;
      _DAT_18003a128 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18003a128 = 5;
        DAT_18003a12c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_180027f08(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18003a140 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180027f1c(void)

{
  _DAT_18003d67c = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180027f57;
  FUN_180027f1c();
  *(undefined8 *)(puVar4 + -8) = 0x180027f68;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180027f72;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180027f8c;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180027fcd;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180027fff;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180028021;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180028042;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18002804d;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18002805d;
    FUN_180027f1c();
  }
  return;
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
  
  if (DAT_18003a118 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18003a118 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18003a118 == 0x2b992ddfa232) {
      DAT_18003a118 = 0x2b992ddfa233;
    }
  }
  DAT_18003a110 = ~DAT_18003a118;
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




undefined * FUN_180028144(void)

{
  return &DAT_18003d680;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180028144();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180010b10();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180028168(void)

{
  return &DAT_18003d688;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180033dd8; puVar1 < &DAT_180033dd8; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180033de8; puVar1 < &DAT_180033de8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_1800282ac(void)

{
  return 1;
}




undefined8 FUN_1800282b0(void)

{
  return 0;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001800282d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_1800282e0(undefined8 param_1,longlong param_2)

{
  FUN_180016a70(*(ios_base **)(param_2 + 0x50));
  return;
}




void Unwind_1800282f8(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180028315(undefined8 param_1,longlong param_2)

{
  FUN_180016a70(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180028330(undefined8 param_1,longlong param_2)

{
  FUN_180016a70(*(ios_base **)(param_2 + 0xa0));
  return;
}




void Unwind_18002834b(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180028368(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}




void Unwind_180028385(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_1800283a2(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_1800283bf(undefined8 param_1,longlong param_2)

{
  FUN_180016a70(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_1800283e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180028400(undefined8 param_1,longlong param_2)

{
  FUN_180001ae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180028418(undefined8 param_1,longlong param_2)

{
  FUN_180001ae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180028430(undefined8 param_1,longlong param_2)

{
  FUN_1800038d0(param_2 + 0x60);
  return;
}




void Catch_180028450(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_180003c20(*(undefined8 *)(param_2 + 0x90));
  uVar1 = FUN_180003c60(*(undefined8 *)(param_2 + 0x90));
  FUN_180003f50(uVar1,*(void **)(param_2 + 0x28),*(ulonglong *)(param_2 + 0x38));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800284b0(void)

{
  FUN_1800040f0();
  return;
}




void Unwind_1800284cf(void)

{
  FUN_1800040f0();
  return;
}




void Unwind_1800284ee(void)

{
  FUN_1800040f0();
  return;
}




void Unwind_180028510(undefined8 param_1,longlong param_2)

{
  FUN_180006060(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180028528(undefined8 param_1,longlong param_2)

{
  FUN_180006060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180028540(undefined8 param_1,longlong param_2)

{
  FUN_180006060(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180028558(undefined8 param_1,longlong param_2)

{
  FUN_180006060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180028570(undefined8 param_1,longlong param_2)

{
  FUN_180006060(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180028588(undefined8 param_1,longlong param_2)

{
  FUN_180006060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800285a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800285b8(undefined8 param_1,longlong param_2)

{
  FUN_180001ae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800285d0(void)

{
  FUN_1800040f0();
  return;
}




void Unwind_1800285e8(void)

{
  FUN_1800040f0();
  return;
}




void Unwind_180028600(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180028618(undefined8 param_1,longlong param_2)

{
  FUN_180009250(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_180028634(undefined8 param_1,longlong param_2)

{
  FUN_180009220(*(longlong *)(param_2 + 0x40) + 0x20);
  return;
}




undefined * Catch_180028650(void)

{
  return &DAT_180006883;
}




undefined8 Catch_180028674(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
  return 0x180006b03;
}




undefined * Catch_180028697(void)

{
  return &DAT_180006d6d;
}




void Unwind_1800286bb(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_1800286d3(undefined8 param_1,longlong param_2)

{
  FUN_180009250(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_1800286ef(undefined8 param_1,longlong param_2)

{
  FUN_180009220(*(longlong *)(param_2 + 0x40) + 0x20);
  return;
}




void Catch_180028710(undefined8 param_1,longlong param_2)

{
  FUN_18000a1a0(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x30));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180028750(undefined8 param_1,longlong param_2)

{
  FUN_180003c20(*(undefined8 *)(param_2 + 0x90));
  FUN_18000a990(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1800287a0(undefined8 param_1,longlong param_2)

{
  FUN_180009b00(*(undefined8 *)(param_2 + 0x180),*(void **)(param_2 + 0x1a0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1800287e0(undefined8 param_1,longlong param_2)

{
  FUN_180009b00(*(undefined8 *)(param_2 + 0xd0),*(void **)(param_2 + 0xf0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180028820(undefined8 param_1,longlong param_2)

{
  FUN_1800091f0(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180028840(undefined8 param_1,longlong param_2)

{
  FUN_1800091c0(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Catch_180028860(undefined8 param_1,longlong param_2)

{
  FUN_18000a960(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1800288a0(undefined8 param_1,longlong param_2)

{
  FUN_18000a960(*(undefined8 *)(param_2 + 0x20),*(void **)(param_2 + 0x28),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800288e0(undefined8 param_1,longlong param_2)

{
  CSettingsStore::~CSettingsStore(*(CSettingsStore **)(param_2 + 0x40));
  return;
}




void Unwind_1800288f8(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_180028915(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18002892d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18000b0f0(*(longlong **)(param_2 + 0x60));
  }
  return;
}




void Unwind_180028953(undefined8 param_1,longlong param_2)

{
  CSettingsStore::~CSettingsStore(*(CSettingsStore **)(param_2 + 0x40));
  return;
}




void Unwind_180028970(undefined8 param_1,longlong param_2)

{
  CSettingsStore::~CSettingsStore(*(CSettingsStore **)(param_2 + 0x40));
  return;
}




void Unwind_180028988(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_1800289a7(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_1800289bf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18000b0f0(*(longlong **)(param_2 + 0x60));
  }
  return;
}




void Unwind_1800289e5(undefined8 param_1,longlong param_2)

{
  CSettingsStore::~CSettingsStore(*(CSettingsStore **)(param_2 + 0x40));
  return;
}




void Unwind_180028a00(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_180028a1c(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_180028a38(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_180028a54(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_180028a70(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_180028a8c(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}




void Unwind_180028aa8(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_180028ac4(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_180028ae0(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_180028afc(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_180028b18(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_180028b34(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}




void Unwind_180028b50(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180028b68(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180028b80(undefined8 param_1,longlong param_2)

{
  AddRef(*(longlong **)(param_2 + 0x40));
  return;
}




undefined * Catch_180028ba0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x20) = 0;
  return &DAT_18000c430;
}




void Unwind_180028bd0(undefined8 param_1,longlong param_2)

{
  FUN_180001ae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180028be8(undefined8 param_1,longlong param_2)

{
  FUN_180001ae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180028c00(undefined8 param_1,longlong param_2)

{
  FUN_18000ef70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180028c18(undefined8 param_1,longlong param_2)

{
  FUN_18000ef70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180028c30(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x70));
  return;
}




void Unwind_180028c48(undefined8 param_1,longlong param_2)

{
  FUN_180009250(*(longlong *)(param_2 + 0x70) + 0x18);
  return;
}




void Unwind_180028c64(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180028c7c(undefined8 param_1,longlong param_2)

{
  FUN_180009250(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_180028ca0(undefined8 param_1,longlong param_2)

{
  FUN_180009220(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180028cb8(undefined8 param_1,longlong param_2)

{
  FUN_180009220(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180028cd0(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180028ce8(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180028d00(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_180028d18(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18000b0f0(*(longlong **)(param_2 + 0xa8));
  }
  return;
}




void Unwind_180028d41(void)

{
  _Init_thread_abort(&DAT_18003c1f8);
  return;
}




void Catch_180028d60(undefined8 param_1,longlong param_2)

{
  FUN_18000a1a0(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x30));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180028da0(undefined8 param_1,longlong param_2)

{
  FUN_180009b00(*(undefined8 *)(param_2 + 0x180),*(void **)(param_2 + 0x1a0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180028de0(undefined8 param_1,longlong param_2)

{
  FUN_180009b00(*(undefined8 *)(param_2 + 0xd0),*(void **)(param_2 + 0xf0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180028e20(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180028e38(void)

{
  FUN_180026c40();
  return;
}




void Unwind_180028e54(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180028e6c(void)

{
  FUN_180026c40();
  return;
}




void Unwind_180028e90(undefined8 param_1,longlong param_2)

{
  CSettingsStore::~CSettingsStore(*(CSettingsStore **)(param_2 + 0x40));
  return;
}




void Unwind_180028ea8(undefined8 param_1,longlong param_2)

{
  CSettingsStore::~CSettingsStore(*(CSettingsStore **)(param_2 + 0x40));
  return;
}




void Unwind_180028ec0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_180028edd(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180028ef5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18000b0f0(*(longlong **)(param_2 + 0x60));
  }
  return;
}




void Unwind_180028f20(undefined8 param_1,longlong param_2)

{
  CSettingsStore::~CSettingsStore(*(CSettingsStore **)(param_2 + 0x40));
  return;
}




void Unwind_180028f38(undefined8 param_1,longlong param_2)

{
  CSettingsStore::~CSettingsStore(*(CSettingsStore **)(param_2 + 0x40));
  return;
}




void Unwind_180028f50(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_180028f6d(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180028f85(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18000b0f0(*(longlong **)(param_2 + 0x60));
  }
  return;
}




void Unwind_180028fb0(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180028fc8(undefined8 param_1,longlong param_2)

{
  FUN_180009250(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_180028fe4(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180028ffc(undefined8 param_1,longlong param_2)

{
  FUN_180009250(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_180029020(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180029038(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180029050(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180029068(void)

{
  FUN_180026c40();
  return;
}




void Unwind_180029084(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_18002909c(void)

{
  FUN_180026c40();
  return;
}




void Unwind_1800290c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800290d8(undefined8 param_1,longlong param_2)

{
  FUN_180001ae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800290f0(void)

{
  FUN_1800119b0();
  return;
}




void Unwind_180029108(void)

{
  FUN_1800119b0();
  return;
}




void Unwind_180029120(void)

{
  FUN_1800119b0();
  return;
}




void Unwind_180029138(undefined8 param_1,longlong param_2)

{
  FUN_1800038d0(param_2 + 0x70);
  return;
}




undefined8 Catch_180029150(void)

{
  return 0x180011722;
}




void Catch_180029170(undefined8 param_1,longlong param_2)

{
  FUN_180003d10(*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800291a0(undefined8 param_1,longlong param_2)

{
  FUN_1800144f0(param_2 + 0x30);
  return;
}




void Unwind_1800291c0(undefined8 param_1,longlong param_2)

{
  FUN_180013c00(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1800291d8(undefined8 param_1,longlong param_2)

{
  FUN_180013c00(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1800291f0(undefined8 param_1,longlong param_2)

{
  FUN_180013c00(param_2 + 0x50);
  return;
}




void Catch_180029210(undefined8 param_1,longlong param_2)

{
  FUN_180014290(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180029250(undefined8 param_1,longlong param_2)

{
  FUN_180013ba0(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180029270(undefined8 param_1,longlong param_2)

{
  FUN_180013bd0(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Catch_180029290(undefined8 param_1,longlong param_2)

{
  FUN_180014290(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800292d0(undefined8 param_1,longlong param_2)

{
  FUN_1800144f0(param_2 + 0x30);
  return;
}




void Unwind_1800292f0(void)

{
  FUN_1800155b0();
  return;
}




void Unwind_18002930c(undefined8 param_1,longlong param_2)

{
  FUN_180013c00(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_180029328(void)

{
  FUN_1800155b0();
  return;
}




void Unwind_180029344(undefined8 param_1,longlong param_2)

{
  FUN_180013c00(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_180029360(void)

{
  FUN_1800155b0();
  return;
}




void Unwind_18002937c(void)

{
  FUN_1800155b0();
  return;
}




void Unwind_1800293a0(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_1800293b8(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_1800293d5(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_1800293ed(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18000b0f0(*(longlong **)(param_2 + 0x60));
  }
  return;
}




void Unwind_180029413(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180029430(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180029448(undefined8 param_1,longlong param_2)

{
  FUN_180009250(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_180029464(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_18002947c(undefined8 param_1,longlong param_2)

{
  FUN_180009250(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




undefined * Catch_180029498(void)

{
  return &DAT_180016b9c;
}




undefined * Catch_1800294bc(void)

{
  return &DAT_180016eac;
}




void Unwind_1800294e0(undefined8 param_1,longlong param_2)

{
  FUN_18001be00((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180029500(undefined8 param_1,longlong param_2)

{
  FUN_18001bfd0(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                 (param_2 + 0x50));
  return;
}




void Unwind_180029520(undefined8 param_1,longlong param_2)

{
  FUN_18001bea0(*(IStorageDevice **)(param_2 + 0x40));
  return;
}




void Unwind_180029540(undefined8 param_1,longlong param_2)

{
  FUN_18001bda0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180029560(undefined8 param_1,longlong param_2)

{
  FUN_18001f8d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180029580(undefined8 param_1,longlong param_2)

{
  FUN_18001bd10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800295a0(undefined8 param_1,longlong param_2)

{
  FUN_18001be40(*(IStorageDevice **)(param_2 + 0x40));
  return;
}




void Unwind_1800295c0(undefined8 param_1,longlong param_2)

{
  FUN_18001bf70(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                 (param_2 + 0x40));
  return;
}




void Unwind_1800295e0(undefined8 param_1,longlong param_2)

{
  FUN_18001c010(*(longlong *)(param_2 + 0x40) + 0x20);
  return;
}




undefined8 Catch_180029600(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x48))
                        (*(undefined8 *)(param_2 + 0x50),1);
      *(undefined8 *)(param_2 + 0x78) = uVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_180016f10();
  FUN_18001d7e0(*(undefined8 *)(param_2 + 0x98),&DAT_18002dbfc,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x180017be8;
}




undefined * Catch_1800296a4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x48))
                        (*(undefined8 *)(param_2 + 0x58),1);
      *(undefined8 *)(param_2 + 0x88) = uVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_180016f10();
  FUN_18001d860(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_180017be4;
}




undefined8 Catch_180029760(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x48))
                        (*(undefined8 *)(param_2 + 0x50),1);
      *(undefined8 *)(param_2 + 0x78) = uVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_180016f10();
  FUN_18001d7e0(*(undefined8 *)(param_2 + 0x98),&DAT_18002dc54,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x180017c98;
}




undefined * Catch_180029804(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x48))
                        (*(undefined8 *)(param_2 + 0x58),1);
      *(undefined8 *)(param_2 + 0x88) = uVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_180016f10();
  FUN_18001d860(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_180017c94;
}




void Catch_1800298c0(undefined8 param_1,longlong param_2)

{
  FUN_18001e350(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x30));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180029900(undefined8 param_1,longlong param_2)

{
  FUN_18001e220(*(undefined8 *)(param_2 + 0x90),*(longlong *)(param_2 + 0x30),
                *(longlong *)(param_2 + 0x50));
  FUN_18000a990(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180029950(undefined8 param_1,longlong param_2)

{
  FUN_18001e260(*(undefined8 *)(param_2 + 0x180),*(void **)(param_2 + 0x1a0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180029990(undefined8 param_1,longlong param_2)

{
  FUN_18001e260(*(undefined8 *)(param_2 + 0xd0),*(void **)(param_2 + 0xf0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800299d0(undefined8 param_1,longlong param_2)

{
  FUN_18001bf30((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1800299f0(undefined8 param_1,longlong param_2)

{
  FUN_18001be00((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180029a10(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_180029a30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    FUN_18001be00(*(longlong **)(param_2 + 0x60));
  }
  return;
}




void Unwind_180029a60(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_180029a80(undefined8 param_1,longlong param_2)

{
  FUN_18001bfa0(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}




void Unwind_180029aa0(undefined8 param_1,longlong param_2)

{
  FUN_18001bd70(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180029ac0(undefined8 param_1,longlong param_2)

{
  FUN_18001be00((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_180029ae0(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker(*(IStorageDevice **)(param_2 + 0x40));
  return;
}




void Unwind_180029b00(undefined8 param_1,longlong param_2)

{
  FUN_18001bf00(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180029b20(undefined8 param_1,longlong param_2)

{
  FUN_18001be70(*(IStorageDevice **)(param_2 + 0x40));
  return;
}




void Unwind_180029b40(undefined8 param_1,longlong param_2)

{
  FUN_18001bed0(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180029b60(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0x90));
  return;
}




void Unwind_180029b80(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0x98));
  return;
}




void Unwind_180029ba0(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0xa0));
  return;
}




void Unwind_180029bc0(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0xb0));
  return;
}




void Unwind_180029be0(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0xb8));
  return;
}




void Unwind_180029c00(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0xc0));
  return;
}




void Unwind_180029c20(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 200));
  return;
}




void Unwind_180029c40(void)

{
  FUN_180025c50();
  return;
}




void Unwind_180029c60(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180029c80(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180029ca0(undefined8 param_1,longlong param_2)

{
  FUN_18001bf70((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x70));
  return;
}




void Unwind_180029cc0(undefined8 param_1,longlong param_2)

{
  FUN_18001bf70((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x90));
  return;
}




void Unwind_180029ce0(undefined8 param_1,longlong param_2)

{
  FUN_18001c010(param_2 + 0x58);
  return;
}




void Unwind_180029d00(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180029d20(undefined8 param_1,longlong param_2)

{
  FUN_18001be00((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180029d40(undefined8 param_1,longlong param_2)

{
  FUN_18001bf70((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x38));
  return;
}




void Unwind_180029d60(void)

{
  _Init_thread_abort(&DAT_18003c238);
  return;
}




void Unwind_180029d80(void)

{
  _Init_thread_abort(&DAT_18003c260);
  return;
}




void Unwind_180029da0(undefined8 param_1,longlong param_2)

{
  FUN_18001c040((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_180029dc0(void)

{
  _Init_thread_abort(&DAT_18003c288);
  return;
}




void Unwind_180029de0(void)

{
  _Init_thread_abort(&DAT_18003c210);
  return;
}




void Catch_180029e00(undefined8 param_1,longlong param_2)

{
  FUN_18001ef30(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180029e40(undefined8 param_1,longlong param_2)

{
  FUN_18001ef30(*(undefined8 *)(param_2 + 0x20),*(void **)(param_2 + 0x28),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180029e80(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180029ea0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180029ec0(undefined8 param_1,longlong param_2)

{
  FUN_18000ef70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180029ed8(undefined8 param_1,longlong param_2)

{
  FUN_18000ef70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180029ef0(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0x90));
  return;
}




void Unwind_180029f0f(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0x98));
  return;
}




void Unwind_180029f2e(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0xa0));
  return;
}




void Unwind_180029f4d(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0xb0));
  return;
}




void Unwind_180029f6c(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0xb8));
  return;
}




void Unwind_180029f8b(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0xc0));
  return;
}




void Unwind_180029faa(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 200));
  return;
}




void Unwind_180029fc9(void)

{
  FUN_180025c50();
  return;
}




void Unwind_180029fe8(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x90));
  return;
}




void Unwind_18002a007(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x98));
  return;
}




void Unwind_18002a026(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0xa0));
  return;
}




void Unwind_18002a045(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0xb0));
  return;
}




void Unwind_18002a064(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0xb8));
  return;
}




void Unwind_18002a083(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0xc0));
  return;
}




void Unwind_18002a0a2(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 200));
  return;
}




void Unwind_18002a0c1(void)

{
  FUN_180025c50();
  return;
}




void Unwind_18002a0e0(undefined8 param_1,longlong param_2)

{
  FUN_180024620((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_18002a0f8(undefined8 param_1,longlong param_2)

{
  FUN_180024620((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_18002a110(undefined8 param_1,longlong param_2)

{
  FUN_180024620((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_18002a128(undefined8 param_1,longlong param_2)

{
  FUN_180024620((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_18002a140(undefined8 param_1,longlong param_2)

{
  FUN_180024620((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_18002a158(undefined8 param_1,longlong param_2)

{
  FUN_180024620((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_18002a170(undefined8 param_1,longlong param_2)

{
  FUN_1800245f0(param_2 + 0x30);
  return;
}




void Unwind_18002a188(undefined8 param_1,longlong param_2)

{
  FUN_18000b410(param_2 + 0x40);
  return;
}




void Unwind_18002a1a0(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_18002a1bb(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x98));
  return;
}




void Unwind_18002a1d6(undefined8 param_1,longlong param_2)

{
  FUN_180024690((uint *)(param_2 + 0x130));
  return;
}




void Unwind_18002a1f1(undefined8 param_1,longlong param_2)

{
  FUN_180024550((int *)(param_2 + 0x150));
  return;
}




undefined8 Catch_18002a20c(undefined8 param_1,longlong param_2)

{
  FUN_1800208c0(*(longlong *)(param_2 + 0x200) + -0x28,*(ulonglong *)(param_2 + 0x70));
  return 0x18002072f;
}




void Unwind_18002a23f(undefined8 param_1,longlong param_2)

{
  FUN_180024620((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_18002a257(undefined8 param_1,longlong param_2)

{
  FUN_180024620((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_18002a26f(void)

{
  FUN_180026c40();
  return;
}




void Unwind_18002a287(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_18002a29f(void)

{
  FUN_180002590();
  return;
}




void Unwind_18002a2b7(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_18002a2d4(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}




void Unwind_18002a2f3(void)

{
  FUN_180026c40();
  return;
}




void Unwind_18002a30b(void)

{
  FUN_180026c40();
  return;
}




void Unwind_18002a323(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_18002a340(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18002a35d(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x68));
  return;
}




void Unwind_18002a37a(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}




void Unwind_18002a39a(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x98));
  return;
}




void Unwind_18002a3ba(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xb8));
  return;
}




void Unwind_18002a3da(void)

{
  FUN_180026c40();
  return;
}




void Unwind_18002a3f5(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xe0));
  return;
}




void Unwind_18002a415(void)

{
  FUN_180026c40();
  return;
}




void Unwind_18002a42d(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_18002a44a(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18002a467(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}




void Unwind_18002a484(undefined8 param_1,longlong param_2)

{
  FUN_1800245f0(param_2 + 0x78);
  return;
}




void Unwind_18002a49c(void)

{
  FUN_180002590();
  return;
}




void Unwind_18002a4b7(undefined8 param_1,longlong param_2)

{
  FUN_1800245f0(param_2 + 0xa0);
  return;
}




void Unwind_18002a4d2(undefined8 param_1,longlong param_2)

{
  FUN_1800245c0(param_2 + 0x30);
  return;
}




void Unwind_18002a4ea(undefined8 param_1,longlong param_2)

{
  FUN_1800245c0(param_2 + 0x60);
  return;
}




void Unwind_18002a502(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0xb8));
  return;
}




void Unwind_18002a51d(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x68));
  return;
}




void Unwind_18002a53c(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18002a554(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x78));
  return;
}




void Unwind_18002a573(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18002a58b(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x88));
  return;
}




void Unwind_18002a5ad(undefined8 param_1,longlong param_2)

{
  FUN_18000b0f0((longlong *)(param_2 + 0x40));
  return;
}




void Catch_18002a5d0(undefined8 param_1,longlong param_2)

{
  FUN_180003c20(*(undefined8 *)(param_2 + 0x90));
  FUN_180014290(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18002a620(undefined8 param_1,longlong param_2)

{
  FUN_180003c20(*(undefined8 *)(param_2 + 0x90));
  FUN_180025900(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18002a670(undefined8 param_1,longlong param_2)

{
  FUN_180013c00(*(undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_18002a690(undefined8 param_1,longlong param_2)

{
  FUN_180013c00(*(longlong *)(param_2 + 0x50) + 0x10);
  return;
}




void Unwind_18002a6b0(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0x20));
  return;
}




void Unwind_18002a6d0(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x50) + 0x28));
  return;
}




void Unwind_18002a6f0(undefined8 param_1,longlong param_2)

{
  FUN_1800244e0(*(longlong *)(param_2 + 0x60) + 0x20);
  return;
}




void Unwind_18002a710(undefined8 param_1,longlong param_2)

{
  FUN_180013c00(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_18002a730(undefined8 param_1,longlong param_2)

{
  FUN_180013c00(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}




void Unwind_18002a750(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_18002a770(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_18002a790(undefined8 param_1,longlong param_2)

{
  FUN_1800244e0(*(longlong *)(param_2 + 0x40) + 0x20);
  return;
}




void Unwind_18002a7b0(undefined8 param_1,longlong param_2)

{
  FUN_180024620((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18002a7d0(undefined8 param_1,longlong param_2)

{
  FUN_180024620((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_18002a7f0(undefined8 param_1,longlong param_2)

{
  FUN_180024620((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_18002a810(undefined8 param_1,longlong param_2)

{
  FUN_1800245c0(param_2 + 0x28);
  return;
}




void Unwind_18002a830(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_18002a848(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18002a860(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18002a878(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18002a890(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18002a8a8(undefined8 param_1,longlong param_2)

{
  FUN_18000c370((longlong *)(param_2 + 0x20));
  return;
}




undefined * Catch_All_18002a8c0(void)

{
  return &DAT_180026e79;
}




void FUN_18002a8f3(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18002a90a(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18002a926(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_18002a960(void)

{
  FUN_18000d210(&DAT_18003c1e8);
  return;
}




void FUN_18002a980(void)

{
  FUN_18001bdd0(0x18003c240);
  return;
}




void FUN_18002a9a0(void)

{
  FUN_18001bdd0(0x18003c268);
  return;
}



