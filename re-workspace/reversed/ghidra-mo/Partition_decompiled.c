
/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1000  37  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180001003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1010  42  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1020  22  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x1030  2  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x1030  3  ??0IObject@@QEAA@AEBU0@@Z
                       0x1030  4  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: struct IObject & __ptr64 __cdecl IObject::operator=(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::operator=(IObject *this,IObject *param_1)

{
                    /* 0x1040  15  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x1040  16  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




undefined8 * FUN_180001050(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void _guard_check_icall(void)

{
  return;
}




void FUN_180001080(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    *param_1 = param_2;
  }
  return;
}




undefined8 FUN_180001090(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = (*(code *)**(undefined8 **)*param_1)();
  param_1[1] = param_2 / uVar1;
  uVar1 = (*(code *)**(undefined8 **)*param_1)();
  param_1[3] = param_2;
  param_1[2] = param_2 % (ulonglong)uVar1;
  return 1;
}




undefined8 FUN_180001100(longlong *param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *_Dst;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  
  if (((param_3 != 0) && (param_2 != (void *)0x0)) && (param_4 != (uint *)0x0)) {
    uVar1 = (*(code *)**(undefined8 **)*param_1)();
    uVar2 = (*(code *)**(undefined8 **)*param_1)();
    uVar4 = param_3 / uVar1 + 1;
    if (param_3 % uVar2 == 0) {
      uVar4 = param_3 / uVar1;
    }
    iVar7 = (param_1[2] != 0) + uVar4;
    iVar3 = (*(code *)**(undefined8 **)*param_1)();
    uVar4 = iVar3 * iVar7;
    _Dst = operator_new((ulonglong)uVar4);
    memset(_Dst,0,(ulonglong)uVar4);
    iVar3 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,_Dst,param_1[1],iVar7);
    if (iVar3 == 0) {
      free(_Dst);
      uVar5 = 0;
    }
    else {
      memcpy(param_2,(void *)(param_1[2] + (longlong)_Dst),(ulonglong)param_3);
      *param_4 = param_3;
      free(_Dst);
      uVar6 = (ulonglong)param_3 + param_1[3];
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        uVar4 = (*(code *)**(undefined8 **)*param_1)();
        param_1[1] = uVar6 / uVar4;
        uVar4 = (*(code *)**(undefined8 **)*param_1)();
        param_1[3] = uVar6;
        param_1[2] = uVar6 % (ulonglong)uVar4;
      }
      uVar5 = 1;
    }
    return uVar5;
  }
  return 0;
}




void FUN_1800012e0(uint param_1,uint param_2,longlong param_3,longlong *param_4,undefined4 *param_5,
                  int *param_6)

{
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    *param_4 = param_3 / (longlong)(ulonglong)(param_1 * param_2);
    *param_5 = (int)((param_3 / (longlong)(ulonglong)param_2) % (longlong)(ulonglong)param_1);
    *param_6 = (int)(param_3 % (longlong)(ulonglong)param_2) + 1;
  }
  return;
}




undefined8 FUN_1800013b0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_1800013d0(undefined8 param_1)

{
  return param_1;
}




char * FUN_1800013f0(void)

{
  return "CDiskDeviceType";
}




undefined8 FUN_180001400(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

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
      local_28 = (char *)FUN_1800018f0(0,param_2,param_3,param_4);
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




undefined4 FUN_180001520(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}




void FUN_180001540(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}




IObject * FUN_180001560(IObject *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001b50(param_1,param_2);
  *(undefined ***)param_1 = CDiskDeviceType::vftable;
  *(IObject **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x20) = 4;
  FUN_1800015f0((longlong)param_1);
  return param_1;
}




void FUN_1800015f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_58;
  CGPTDiskAnalyzer local_57;
  undefined1 local_56;
  char local_55;
  longlong *local_50;
  int local_48;
  longlong *local_40;
  int local_38;
  int local_34;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_48 = 0;
    CGPTDiskAnalyzer::CGPTDiskAnalyzer(&local_57);
    local_48 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(undefined8 *)(param_1 + 8));
    local_56 = CGPTDiskAnalyzer::IsGPTDisk
                         (*(IStorageDevice **)(param_1 + 0x10),*(__uint64 *)(param_1 + 0x18),
                          local_48);
    if ((bool)local_56) {
      *(undefined4 *)(param_1 + 0x20) = 2;
    }
    FUN_180002160(&local_58);
    local_55 = FUN_180002190(*(longlong *)(param_1 + 0x10),*(ulonglong *)(param_1 + 0x18));
    if (local_55 != '\0') {
      if (*(int *)(param_1 + 0x20) == 4) {
        *(undefined4 *)(param_1 + 0x20) = 5;
      }
      if (*(int *)(param_1 + 0x20) == 2) {
        *(undefined4 *)(param_1 + 0x20) = 3;
      }
    }
    if (((*(int *)(param_1 + 0x20) == 4) && (*(longlong *)(param_1 + 8) != 0)) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(undefined8 *)(param_1 + 8)),
       cVar1 != '\0')) {
      local_30 = (longlong *)FUN_180001960("FileSystemAnalyser");
      if (local_30 == (longlong *)0x0) {
        FUN_180002180();
        CGPTDiskAnalyzer::~CGPTDiskAnalyzer(&local_57);
      }
      else {
        local_40 = (longlong *)0x0;
        local_38 = (**(code **)(*local_30 + 0x38))
                             (local_30,*(undefined8 *)(param_1 + 0x10),0,&local_40);
        if (((local_38 == 0) && (local_40 != (longlong *)0x0)) &&
           (local_34 = (**(code **)(*local_40 + 0x28))(local_40), local_34 != 0xff)) {
          *(undefined4 *)(param_1 + 0x20) = 8;
        }
        local_28 = (longlong *)FUN_180001960("Partition");
        if (local_28 == (longlong *)0x0) {
          FUN_180002180();
          CGPTDiskAnalyzer::~CGPTDiskAnalyzer(&local_57);
        }
        else {
          local_50 = (longlong *)
                     (**(code **)(*local_28 + 0x68))(local_28,*(undefined8 *)(param_1 + 0x10),0,0);
          if (local_50 == (longlong *)0x0) {
            FUN_180002180();
            CGPTDiskAnalyzer::~CGPTDiskAnalyzer(&local_57);
          }
          else {
            iVar2 = (**(code **)(*local_50 + 0x30))(local_50);
            if (iVar2 != 0xff) {
              *(undefined4 *)(param_1 + 0x20) = 8;
            }
            if (local_50 != (longlong *)0x0) {
              local_20 = local_50;
              free(local_50);
              local_50 = (longlong *)0x0;
            }
            FUN_180002180();
            CGPTDiskAnalyzer::~CGPTDiskAnalyzer(&local_57);
          }
        }
      }
    }
    else {
      FUN_180002180();
      CGPTDiskAnalyzer::~CGPTDiskAnalyzer(&local_57);
    }
  }
  return;
}




void FUN_1800018f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001910(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_180001910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005abf0 == (undefined1 *)0x0) {
    DAT_18005abf0 = &DAT_18005aaf0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180053050,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005abf0,local_18);
  }
  return DAT_18005abf0;
}




void FUN_180001960(char *param_1)

{
  undefined1 auStack_168 [32];
  char *local_148;
  undefined8 *local_140;
  char *local_138;
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStack_168;
  local_140 = (undefined8 *)FUN_180001ef0(param_1);
  if (local_140 != (undefined8 *)0x0) {
    local_128[0] = 'I';
    for (local_148 = param_1; *local_148 != '\0'; local_148 = local_148 + 1) {
      if (0xff < (longlong)local_148 - (longlong)param_1) goto LAB_180001af4;
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
LAB_180001af4:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_168);
  return;
}




undefined8 * FUN_180001b10(undefined8 *param_1)

{
  *param_1 = IBlockDevice::vftable;
  return param_1;
}




undefined8 * FUN_180001b30(undefined8 *param_1)

{
  *param_1 = IBlockDevice::vftable;
  return param_1;
}




IObject * FUN_180001b50(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IDiskDeviceType::vftable;
  return param_1;
}




/* public: __cdecl IStorageDevice::IStorageDevice(struct IStorageDevice && __ptr64) __ptr64 */

IStorageDevice * __thiscall
IStorageDevice::IStorageDevice(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x1b80  5  ??0IStorageDevice@@QEAA@$$QEAU0@@Z
                       0x1b80  6  ??0IStorageDevice@@QEAA@AEBU0@@Z */
  IObject::IObject((IObject *)this,(IObject *)param_1);
  FUN_180001b10((undefined8 *)(this + 8));
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




/* public: __cdecl IStorageDevice::IStorageDevice(void) __ptr64 */

IStorageDevice * __thiscall IStorageDevice::IStorageDevice(IStorageDevice *this)

{
  IObject *in_RDX;
  
                    /* 0x1be0  7  ??0IStorageDevice@@QEAA@XZ */
  IObject::IObject((IObject *)this,in_RDX);
  FUN_180001b30((undefined8 *)(this + 8));
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




/* public: class CGPTDiskAnalyzer & __ptr64 __cdecl CGPTDiskAnalyzer::operator=(class
   CGPTDiskAnalyzer const & __ptr64) __ptr64 */

CGPTDiskAnalyzer * __thiscall
CGPTDiskAnalyzer::operator=(CGPTDiskAnalyzer *this,CGPTDiskAnalyzer *param_1)

{
                    /* 0x1c30  9  ??4CGPTDiskAnalyzer@@QEAAAEAV0@AEBV0@@Z
                       0x1c30  11  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x1c30  12  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x1c30  13  ??4CNTFSLib@@QEAAAEAV0@$$QEAV0@@Z
                       0x1c30  14  ??4CNTFSLib@@QEAAAEAV0@AEBV0@@Z */
  return this;
}




/* public: struct IStorageDevice & __ptr64 __cdecl IStorageDevice::operator=(struct IStorageDevice
   && __ptr64) __ptr64 */

IStorageDevice * __thiscall IStorageDevice::operator=(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x1c40  17  ??4IStorageDevice@@QEAAAEAU0@$$QEAU0@@Z
                       0x1c40  18  ??4IStorageDevice@@QEAAAEAU0@AEBU0@@Z */
  IObject::operator=((IObject *)this,(IObject *)param_1);
  CGPTDiskAnalyzer::operator=((CGPTDiskAnalyzer *)(this + 8),(CGPTDiskAnalyzer *)(param_1 + 8));
  return this;
}




void FUN_180001c90(void)

{
  return;
}




undefined8 FUN_180001ca0(undefined *param_1,undefined8 param_2)

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




/* public: virtual int __cdecl IStorageDevice::ConvertVolume(void) __ptr64 */

int __thiscall IStorageDevice::ConvertVolume(IStorageDevice *this)

{
                    /* 0x1ce0  23  ?ConvertVolume@IStorageDevice@@UEAAHXZ
                       0x1ce0  34  ?GetBitlockerInfo@IStorageDevice@@UEAAPEAUBitlockerInfo@@XZ
                       0x1ce0  38  ?IsBitlockerVolume@IStorageDevice@@UEAAHXZ */
  return 0;
}




/* public: virtual int __cdecl IStorageDevice::DeviceIoControl(unsigned long,void * __ptr64,unsigned
   long,void * __ptr64,unsigned long,unsigned long * __ptr64) __ptr64 */

int __thiscall
IStorageDevice::DeviceIoControl
          (IStorageDevice *this,ulong param_1,void *param_2,ulong param_3,void *param_4,
          ulong param_5,ulong *param_6)

{
                    /* 0x1cf0  25  ?DeviceIoControl@IStorageDevice@@UEAAHKPEAXK0KPEAK@Z */
  return 0;
}




/* public: virtual int __cdecl IStorageDevice::SetMetaFilePos(unsigned __int64 * __ptr64
   const,unsigned __int64) __ptr64 */

int __thiscall
IStorageDevice::SetMetaFilePos(IStorageDevice *this,__uint64 *param_1,__uint64 param_2)

{
                    /* 0x1d10  46  ?SetMetaFilePos@IStorageDevice@@UEAAHQEA_K_K@Z */
  return 0;
}




/* public: virtual int __cdecl IStorageDevice::GetBitlockerStatus(void) __ptr64 */

int __thiscall IStorageDevice::GetBitlockerStatus(IStorageDevice *this)

{
                    /* 0x1d30  35  ?GetBitlockerStatus@IStorageDevice@@UEAAHXZ */
  return -1;
}




/* public: virtual int __cdecl IStorageDevice::GetInformationOffset(unsigned __int64 * __ptr64
   const) __ptr64 */

int __thiscall IStorageDevice::GetInformationOffset(IStorageDevice *this,__uint64 *param_1)

{
                    /* 0x1d40  36  ?GetInformationOffset@IStorageDevice@@UEAAHQEA_K@Z
                       0x1d40  45  ?SetBitlockerInfo@IStorageDevice@@UEAAHPEAUBitlockerInfo@@@Z */
  return 0;
}




void FUN_180001d50(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001400(param_1,param_2,param_3,param_4);
  return;
}




int FUN_180001d80(char *param_1,undefined1 *param_2,uint *param_3)

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




void FUN_180001ef0(char *param_1)

{
  char *pcVar1;
  undefined1 auStack_168 [32];
  char *local_148;
  ulonglong local_140;
  ulonglong local_138;
  CHAR local_128;
  char acStack_127 [271];
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStack_168;
  pcVar1 = param_1;
  if (param_1 != (char *)0x0) {
    while (local_148 = pcVar1, *local_148 != '\0') {
      if (0xff < (longlong)local_148 - (longlong)param_1) goto LAB_18000206c;
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
    FUN_180002090(&local_128);
  }
LAB_18000206c:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_168);
  return;
}




undefined8 FUN_180002090(LPCSTR param_1)

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
      uVar2 = FUN_180001ca0(pFVar1,hModule);
    }
  }
  return uVar2;
}




/* public: virtual void __cdecl IStorageDevice::ReleaseBitlocker(void) __ptr64 */

void __thiscall IStorageDevice::ReleaseBitlocker(IStorageDevice *this)

{
                    /* 0x2110  43  ?ReleaseBitlocker@IStorageDevice@@UEAAXXZ */
  return;
}




/* public: virtual int __cdecl IStorageDevice::SetBitlockerEnable(int) __ptr64 */

int __thiscall IStorageDevice::SetBitlockerEnable(IStorageDevice *this,int param_1)

{
                    /* 0x2120  44  ?SetBitlockerEnable@IStorageDevice@@UEAAHH@Z */
  return 0;
}




void FUN_180002130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __std_type_info_name(param_1 + 8,&DAT_18005c820,param_3,param_4,0xfffffffffffffffe);
  return;
}




undefined8 FUN_180002160(undefined8 param_1)

{
  return param_1;
}




void FUN_180002180(void)

{
  return;
}




void FUN_180002190(longlong param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_158 [32];
  char local_138;
  char local_137;
  char local_136;
  byte local_135;
  char local_134;
  char local_133;
  byte local_132;
  byte local_131;
  longlong *local_130;
  char local_128;
  uint local_124;
  int local_120;
  longlong local_118;
  longlong local_110;
  uint local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
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
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  ulonglong local_10;
  
  local_10 = DAT_180053018 ^ (ulonglong)auStack_158;
  local_138 = '\0';
  local_f8 = (longlong *)0x0;
  local_e0 = *(undefined8 **)(param_1 + 8);
  local_108 = (*(code *)*local_e0)(param_1 + 8);
  local_130 = (longlong *)operator_new((ulonglong)local_108);
  local_118 = 0;
  local_d8 = local_130;
  if (param_2 < 7) {
    local_d0 = local_130;
    free(local_130);
  }
  else {
    local_110 = 0;
    local_f0 = -1;
    local_136 = '\0';
    local_134 = '\x01';
    local_100 = 0;
    local_133 = '\0';
    while (local_137 = '\0', local_f0 != local_110) {
      local_c8 = *(longlong *)(param_1 + 8);
      iVar1 = (**(code **)(local_c8 + 8))(param_1 + 8,local_130,local_110,1);
      if (iVar1 == 0) break;
      local_f0 = local_110;
      local_118 = (longlong)local_130 + 0x1be;
      for (local_120 = 0; local_120 < 4; local_120 = local_120 + 1) {
        local_128 = *(char *)(local_118 + 4);
        if ((local_128 == '\x05') || (local_128 == '\x0f')) {
LAB_180002348:
          local_110 = local_100 + (ulonglong)*(uint *)(local_118 + 8);
          if (local_134 != '\0') {
            local_100 = local_100 + (ulonglong)*(uint *)(local_118 + 8);
            local_134 = '\0';
          }
          local_137 = '\x01';
        }
        else {
          if (local_128 == 'B') {
            local_136 = '\x01';
            local_138 = '\x01';
            goto LAB_1800023b6;
          }
          if (local_128 == -0x7b) goto LAB_180002348;
          if (local_128 == -0x12) {
            local_133 = '\x01';
          }
        }
        local_118 = local_118 + 0x10;
      }
      if (local_137 == '\0') break;
    }
LAB_1800023b6:
    if (local_133 == '\0') {
      local_c0 = local_130;
      free(local_130);
    }
    else {
      local_b8 = *(longlong *)(param_1 + 8);
      iVar1 = (**(code **)(local_b8 + 8))(param_1 + 8,local_130,6,1);
      if (iVar1 == 0) {
        local_b0 = local_130;
        free(local_130);
      }
      else {
        local_f8 = local_130;
        FUN_1800029e0((longlong)local_130);
        uVar3 = FUN_180002b90(local_f8);
        if (((uVar3 & 0xff) == 0) || (local_136 == '\0')) {
          if (local_138 == '\0') {
            local_a0 = *(longlong *)(param_1 + 8);
            iVar1 = (**(code **)(local_a0 + 8))(param_1 + 8,local_130,0,1);
            if (iVar1 == 0) {
              local_98 = local_130;
              free(local_130);
              goto LAB_180002913;
            }
            local_90 = (longlong)local_130 + 0x1be;
            if (*(char *)((longlong)local_130 + 0x1c2) == -0x12) {
              local_88 = *(longlong *)(param_1 + 8);
              iVar1 = (**(code **)(local_88 + 8))(param_1 + 8,local_130,2,1);
              if (iVar1 == 0) {
                local_80 = local_130;
                free(local_130);
              }
              else {
                local_40 = 0x4c;
                local_3f = 0;
                local_3e = 0x44;
                local_3d = 0;
                local_3c = 0x4d;
                local_3b = 0;
                local_3a = 0x20;
                local_39 = 0;
                local_38 = 0x6d;
                local_37 = 0;
                local_36 = 0x65;
                local_35 = 0;
                local_34 = 0x74;
                local_33 = 0;
                local_32 = 0x61;
                local_31 = 0;
                local_30 = 100;
                local_2f = 0;
                local_2e = 0x61;
                local_2d = 0;
                local_2c = 0x74;
                local_2b = 0;
                local_2a = 0x61;
                local_29 = 0;
                local_28 = 0x20;
                local_27 = 0;
                local_26 = 0x70;
                local_25 = 0;
                local_24 = 0x61;
                local_23 = 0;
                local_22 = 0x72;
                local_21 = 0;
                local_20 = 0x74;
                local_1f = 0;
                local_1e = 0x69;
                local_1d = 0;
                local_1c = 0x74;
                local_1b = 0;
                local_1a = 0x69;
                local_19 = 0;
                local_18 = 0x6f;
                local_17 = 0;
                local_16 = 0x6e;
                local_68 = 0x4c;
                local_67 = 0;
                local_66 = 0x44;
                local_65 = 0;
                local_64 = 0x4d;
                local_63 = 0;
                local_62 = 0x20;
                local_61 = 0;
                local_60 = 100;
                local_5f = 0;
                local_5e = 0x61;
                local_5d = 0;
                local_5c = 0x74;
                local_5b = 0;
                local_5a = 0x61;
                local_59 = 0;
                local_58 = 0x20;
                local_57 = 0;
                local_56 = 0x70;
                local_55 = 0;
                local_54 = 0x61;
                local_53 = 0;
                local_52 = 0x72;
                local_51 = 0;
                local_50 = 0x74;
                local_4f = 0;
                local_4e = 0x69;
                local_4d = 0;
                local_4c = 0x74;
                local_4b = 0;
                local_4a = 0x69;
                local_49 = 0;
                local_48 = 0x6f;
                local_47 = 0;
                local_46 = 0x6e;
                local_132 = 0;
                local_131 = 0;
                local_124 = 0;
                while( true ) {
                  local_78 = *(undefined8 **)(param_1 + 8);
                  uVar2 = (*(code *)*local_78)(param_1 + 8);
                  if (uVar2 <= local_124) break;
                  local_e8 = (longlong)local_130 + (ulonglong)local_124;
                  iVar1 = memcmp((void *)(local_e8 + 0x38),&local_40,0x2b);
                  if (iVar1 == 0) {
                    local_132 = 1;
                  }
                  iVar1 = memcmp((void *)(local_e8 + 0x38),&local_68,0x23);
                  if (iVar1 == 0) {
                    local_131 = 1;
                  }
                  local_124 = local_124 + 0x80;
                }
                local_135 = local_132 & local_131;
                if (local_135 == 0) {
                  local_135 = FUN_180002bd0(param_1);
                }
              }
              goto LAB_180002913;
            }
          }
          local_70 = local_130;
          free(local_130);
        }
        else {
          local_a8 = local_130;
          free(local_130);
        }
      }
    }
  }
LAB_180002913:
  __security_check_cookie(local_10 ^ (ulonglong)auStack_158);
  return;
}




void FUN_180002940(longlong param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 local_14;
  
  for (local_14 = 0; local_14 < param_2 / 2; local_14 = local_14 + 1) {
    uVar1 = *(undefined1 *)(param_1 + local_14);
    *(undefined1 *)(param_1 + local_14) = *(undefined1 *)(param_1 + ((param_2 - local_14) + -1));
    *(undefined1 *)(param_1 + ((param_2 - local_14) + -1)) = uVar1;
  }
  return;
}




void FUN_1800029e0(longlong param_1)

{
  FUN_180002940(param_1 + 0x133,8);
  FUN_180002940(param_1 + 299,8);
  FUN_180002940(param_1 + 0x123,8);
  FUN_180002940(param_1 + 0x11b,8);
  FUN_180002940(param_1 + 0x13b,8);
  FUN_180002940(param_1 + 0x153,8);
  FUN_180002940(param_1 + 0x15b,8);
  FUN_180002940(param_1 + 0x143,8);
  FUN_180002940(param_1 + 0x163,4);
  FUN_180002940(param_1 + 0x14f,4);
  FUN_180002940(param_1 + 0x14b,4);
  FUN_180002940(param_1 + 0xc,2);
  FUN_180002940(param_1 + 0xe,2);
  return;
}




ulonglong FUN_180002b30(longlong *param_1)

{
  ulonglong uVar1;
  
  if (*param_1 == 0x4441454856495250) {
    FUN_1800029e0((longlong)param_1);
    uVar1 = 1;
  }
  else {
    uVar1 = (ulonglong)param_1 & 0xffffffffffffff00;
  }
  return uVar1;
}




ulonglong FUN_180002b90(longlong *param_1)

{
  ulonglong uVar1;
  
  if (*param_1 == 0x4441454856495250) {
    uVar1 = 1;
  }
  else {
    uVar1 = (ulonglong)param_1 & 0xffffffffffffff00;
  }
  return uVar1;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff03c : 0x000180002ce0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_180002bd0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_10a8 [32];
  char local_1088;
  char local_1087;
  longlong *local_1080;
  undefined1 local_1078;
  uint local_1074;
  void *local_1070;
  uint local_1068;
  uint local_1064;
  undefined4 local_1060;
  void *local_1058;
  uint local_1050;
  longlong local_1048;
  void *local_1040;
  undefined8 *local_1038;
  longlong local_1030;
  void *local_1028;
  void *local_1020;
  longlong local_1018;
  int local_1010;
  int local_100c;
  int local_1004;
  uint local_fc8;
  uint local_fc4;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x180002be0;
  local_18 = DAT_180053018 ^ (ulonglong)auStack_10a8;
  local_1078 = 0;
  plVar4 = &local_1018;
  for (lVar3 = 0x1000; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)plVar4 = 0;
    plVar4 = (longlong *)((longlong)plVar4 + 1);
  }
  local_1048 = *(longlong *)(param_1 + 8);
  iVar1 = (**(code **)(local_1048 + 8))(param_1 + 8,&local_1018,1,1);
  if ((((iVar1 == 1) && (local_1080 = &local_1018, local_1018 == 0x5452415020494645)) &&
      (local_1010 == 0x10000)) && ((local_100c == 0x5c && (local_1004 == 0)))) {
    if (0x80 < local_fc4) {
      local_fc4 = 0x80;
    }
    if (0x80 < local_fc8) {
      local_fc8 = 0x80;
    }
    local_1068 = local_fc4 * local_fc8;
    local_1070 = operator_new((ulonglong)local_1068);
    local_1040 = local_1070;
    if (local_1070 == (void *)0x0) {
      local_1070 = (void *)0;
    }
    else {
      local_1038 = *(undefined8 **)(param_1 + 8);
      local_1050 = (*(code *)*local_1038)(param_1 + 8);
      local_1064 = local_1068 / local_1050;
      local_1030 = *(longlong *)(param_1 + 8);
      uVar2 = (**(code **)(local_1030 + 8))(param_1 + 8,local_1070,local_1080[9],local_1064);
      if (local_1064 == uVar2) {
        local_1087 = '\0';
        local_1088 = '\0';
        local_1058 = local_1070;
        for (local_1074 = 0; local_1074 < *(uint *)(local_1080 + 10); local_1074 = local_1074 + 1) {
          iVar1 = memcmp(local_1058,&DAT_180036640,0x10);
          if (iVar1 == 0) {
            local_1088 = '\x01';
          }
          iVar1 = memcmp(local_1058,&DAT_180036630,0x10);
          if (iVar1 == 0) {
            local_1087 = '\x01';
          }
          local_1058 = (void *)((longlong)local_1058 + 0x80);
        }
        local_1020 = local_1070;
        free(local_1070);
        local_1070 = (void *)0x0;
        if ((local_1088 == '\0') || (local_1087 == '\0')) {
          local_1060 = 0;
        }
        else {
          local_1060 = 1;
        }
      }
      else {
        local_1028 = local_1070;
        free(local_1070);
        local_1070 = (void *)0x0;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_10a8);
  return;
}




undefined8 FUN_180002eb0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_180002ed0(undefined8 param_1)

{
  return param_1;
}




char * FUN_180002ef0(void)

{
  return "CFileSystemPartition";
}




longlong FUN_180002f00(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  longlong local_30;
  
  if (param_2 == (char *)0x0) {
    local_30 = 0;
  }
  else {
    local_58 = (uint)(*param_2 == '*');
    local_30 = param_1;
    if (param_2[(int)local_58] != '1') {
      pcVar1 = param_2;
      local_48 = (char *)FUN_180003cc0(0,param_2,param_3,param_4);
      local_50 = param_2 + (int)local_58;
      for (; ((*local_50 == *local_48 && (*local_50 != '\0')) && (*local_48 != '\0'));
          local_48 = local_48 + 1) {
        local_50 = local_50 + 1;
      }
      if (*local_50 != *local_48) {
        local_38 = (char *)FUN_180003ce0(0,pcVar1,param_3,param_4);
        local_40 = param_2 + (int)local_58;
        for (; ((*local_40 == *local_38 && (*local_40 != '\0')) && (*local_38 != '\0'));
            local_38 = local_38 + 1) {
          local_40 = local_40 + 1;
        }
        if (*local_40 == *local_38) {
          if (param_1 == 0) {
            local_30 = 0;
          }
          else {
            local_30 = param_1 + 8;
          }
        }
        else {
          local_30 = 0;
        }
      }
    }
  }
  return local_30;
}




void FUN_1800030f0(IObject *param_1,IObject *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  IObject *pIVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 *local_60;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_50;
  longlong local_48;
  undefined8 local_40;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [32];
  ulonglong local_18;
  
  local_40 = 0xfffffffffffffffe;
  local_18 = DAT_180053018 ^ (ulonglong)auStack_98;
  pIVar5 = param_2;
  FUN_180004280(param_1,param_2);
  FUN_1800042b0(param_1 + 8,pIVar5);
  *(undefined ***)param_1 = CFileSystemPartition::vftable;
  *(undefined ***)(param_1 + 8) = CFileSystemPartition::vftable;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x10),"");
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xff;
  param_1[0x3c] = (IObject)0x0;
  param_1[0x3d] = (IObject)0x0;
  local_60 = *(undefined8 **)(param_2 + 8);
  local_68 = (*(code *)*local_60)(param_2 + 8);
  local_70 = (longlong *)FUN_180001960("FileSystemAnalyser");
  if (local_70 != (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    local_64 = (**(code **)(*local_70 + 0x38))(local_70,param_2,param_3,&local_78);
    uVar1 = (**(code **)(*local_78 + 0x28))(local_78);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    if (*(int *)(param_1 + 0x38) == 0xb) {
      uVar1 = FUN_1800039b0(param_1,(longlong)param_2,param_3);
      *(undefined4 *)(param_1 + 0x38) = uVar1;
    }
    else if (*(int *)(param_1 + 0x38) == 0xff) {
      uVar4 = FUN_180003650((longlong)param_1,(longlong)param_2,param_3);
      if (((uVar4 & 0xff) == 0) &&
         (uVar4 = FUN_180003810((longlong)param_1,(longlong)param_2,param_3), (uVar4 & 0xff) != 0))
      {
        *(undefined4 *)(param_1 + 0x38) = 0xd;
      }
    }
    else {
      pcVar2 = (char *)(**(code **)(*local_78 + 0x38))(local_78);
      FUN_180004440((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    (param_1 + 0x10),pcVar2);
      local_58 = FUN_180004db0(param_1 + 0x10,local_38,0,0x40);
      local_50 = local_58;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_1 + 0x10),local_58);
      FUN_180004370(local_38);
      uVar3 = (**(code **)(*local_78 + 0x30))(local_78);
      *(undefined8 *)(param_1 + 0x30) = uVar3;
      local_48 = *(longlong *)(param_1 + 0x30);
      if (local_48 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0xff;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_98);
  return;
}




IObject * FUN_1800033e0(IObject *param_1,IObject *param_2)

{
  FUN_180004280(param_1,param_2);
  FUN_1800042b0(param_1 + 8,param_2);
  *(undefined ***)param_1 = CFileSystemPartition::vftable;
  *(undefined ***)(param_1 + 8) = CFileSystemPartition::vftable;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x10),"");
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xff;
  param_1[0x3c] = (IObject)0x0;
  param_1[0x3d] = (IObject)0x0;
  return param_1;
}




void FUN_180003480(longlong param_1)

{
  FUN_180004be0(param_1 + 0x10);
  return;
}




undefined4 FUN_1800034b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




undefined8 FUN_1800034d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}




undefined1 FUN_1800034f0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3c);
}




undefined1 FUN_180003510(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3d);
}




undefined1 FUN_180003530(longlong param_1)

{
  undefined1 local_18;
  
  if ((((*(int *)(param_1 + 0x38) == 1) || (*(int *)(param_1 + 0x38) == 2)) ||
      (*(int *)(param_1 + 0x38) == 3)) ||
     (((*(int *)(param_1 + 0x38) == 4 || (*(int *)(param_1 + 0x38) == 5)) ||
      (*(int *)(param_1 + 0x38) == 6)))) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}




void FUN_1800035a0(longlong param_1,char *param_2)

{
  FUN_180004440((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_1 + 8),param_2);
  return;
}




void FUN_1800035d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_1800035f0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_180003610(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  return;
}




void FUN_180003630(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x35) = param_2;
  return;
}




ulonglong FUN_180003650(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  void *_Memory;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar3;
  
  uVar1 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
  _Memory = operator_new((ulonglong)uVar1);
  if (param_2 == 0) {
    free(_Memory);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    iVar2 = (**(code **)(*(longlong *)(param_2 + 8) + 8))(param_2 + 8,_Memory,param_3,1);
    if (iVar2 == 1) {
      uVar3 = FUN_180003750(param_1,(longlong)_Memory);
      free(_Memory);
      uVar3 = uVar3 & 0xff;
    }
    else {
      free(_Memory);
      uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
    }
  }
  return uVar3;
}




ulonglong FUN_180003750(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_2 == 0) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else if (((*(int *)(param_2 + 3) == 0x41465845) && (*(int *)(param_2 + 7) == 0x20202054)) &&
          (*(ushort *)(param_2 + 0x1fe) == 0xaa55)) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x48);
    uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar1 = (ulonglong)*(ushort *)(param_2 + 0x1fe) & 0xffffffffffffff00;
  }
  return uVar1;
}




ulonglong FUN_180003810(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong in_RAX;
  void *_Memory;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar1 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
    _Memory = operator_new((ulonglong)uVar1);
    if (_Memory == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      iVar2 = (**(code **)(*(longlong *)(param_2 + 8) + 8))(param_2 + 8,_Memory,param_3,1);
      if (iVar2 == 1) {
        uVar3 = FUN_180003900(param_1,(longlong)_Memory);
        free(_Memory);
        uVar3 = uVar3 & 0xff;
      }
      else {
        free(_Memory);
        uVar3 = extraout_RAX & 0xffffffffffffff00;
      }
    }
  }
  return uVar3;
}




ulonglong FUN_180003900(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_2 == 0) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else if ((*(int *)(param_2 + 3) == 0x53466552) && (*(int *)(param_2 + 0x10) == 0x53525346)) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x18);
    uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar1 = (ulonglong)(byte)((ushort)*(undefined2 *)(param_2 + 0x1fe) >> 8) << 8;
  }
  return uVar1;
}




undefined4 FUN_1800039b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  undefined4 local_68;
  void *local_60;
  
  local_60 = (void *)0x0;
  local_68 = 0xb;
  if (param_2 != 0) {
    uVar1 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
    local_60 = operator_new((ulonglong)uVar1);
    if ((local_60 != (void *)0x0) &&
       (iVar2 = (**(code **)(*(longlong *)(param_2 + 8) + 8))(param_2 + 8,local_60,param_3,1),
       iVar2 == 1)) {
      sVar3 = strlen("-FVE-FS-");
      iVar2 = memcmp((void *)((longlong)local_60 + 3),"-FVE-FS-",sVar3);
      if (iVar2 == 0) {
        local_68 = 0x11;
        iVar2 = memcmp((void *)((longlong)local_60 + 0x11),&DAT_180036674,3);
        if (iVar2 == 0) {
          local_68 = 0x17;
        }
        else if (*(short *)((longlong)local_60 + 0x11) == 0) {
          if (*(short *)((longlong)local_60 + 0xe) == 0) {
            if (*(char *)((longlong)local_60 + 0x15) == '\0') {
              local_68 = 0x13;
            }
          }
          else {
            local_68 = 0xf;
          }
        }
        else {
          local_68 = 0x15;
        }
      }
      else {
        sVar3 = strlen("MSWIN4.1");
        iVar2 = memcmp((void *)((longlong)local_60 + 3),"MSWIN4.1",sVar3);
        if ((iVar2 == 0) && (local_68 = 0xf, *(short *)((longlong)local_60 + 0x11) != 0)) {
          local_68 = 0x15;
        }
      }
    }
  }
  if (local_60 != (void *)0x0) {
    free(local_60);
  }
  return local_68;
}




longlong FUN_180003c00(longlong param_1)

{
  FUN_180003e70(param_1);
  FUN_180004180(param_1);
  return param_1;
}




longlong FUN_180003c40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180003e70(param_3);
  FUN_180004180(param_1);
  return param_1;
}




longlong FUN_180003c80(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  
  uVar1 = FUN_180003e70(param_2);
  FUN_180003c40(param_1,(ulonglong)local_18,uVar1);
  return param_1;
}




void FUN_180003cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003d00(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180003ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003d50(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_180003d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005ad00 == (undefined1 *)0x0) {
    DAT_18005ad00 = &DAT_18005ac00;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x1800530f0,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005ad00,local_18);
  }
  return DAT_18005ad00;
}




undefined1 *
FUN_180003d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005ae10 == (undefined1 *)0x0) {
    DAT_18005ae10 = &DAT_18005ad10;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180053120,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005ae10,local_18);
  }
  return DAT_18005ae10;
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
      pvVar1 = (void *)FUN_1800045a0(param_1);
    }
  }
  else {
    pvVar1 = (void *)FUN_180003de0(param_1);
  }
  return pvVar1;
}




ulonglong FUN_180003de0(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  
  local_28 = param_1 + 0x27;
  if (local_28 <= param_1) {
    local_28 = 0xffffffffffffffff;
  }
  lVar1 = FUN_1800045a0(local_28);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




undefined8 FUN_180003e70(undefined8 param_1)

{
  return param_1;
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
    FUN_180004500((longlong *)&local_res8,(longlong *)local_res10);
  }
  free(local_res8);
  return;
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




/* Library Function - Single Match
    unsigned __int64 const & __ptr64 __cdecl std::_Min_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Library: Visual Studio 2017 Release */

__uint64 * __cdecl std::_Min_value<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 *local_18;
  
  local_18 = param_1;
  if (*param_2 < *param_1) {
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
  FUN_180003e70(param_2);
  return;
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
  this_00 = (IStorageDevice *)FUN_1800047c0(this);
  local_18 = *(ulonglong *)(this_00 + 0x18);
  local_20 = FID_conflict__Calculate_growth(this,param_1);
  local_28 = FUN_1800047c0(this);
  local_30 = allocate(local_28,local_20 + 1);
  IStorageDevice::ReleaseBitlocker(this_00);
  *(ulonglong *)(this_00 + 0x10) = param_1;
  *(__uint64 *)(this_00 + 0x18) = local_20;
  pcVar2 = (char *)FUN_180003e70(local_30);
  <lambda_66f57f934f28d61049862f64df852ff0>::operator()(local_res18,pcVar2,param_1,local_res20);
  if (local_18 < 0x10) {
    uVar3 = FUN_180003e70(this_00);
    construct<>(local_28,uVar3,&local_30);
  }
  else {
    FUN_180004c50(local_28,*(void **)this_00,local_18 + 1);
    *(undefined8 *)this_00 = local_30;
  }
  return this;
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
  
  puVar1 = (undefined8 *)FUN_1800043a0(8,param_2);
  puVar2 = (undefined8 *)FUN_180003e70(param_3);
  *puVar1 = *puVar2;
  return;
}




void FUN_180004140(void)

{
  return;
}




longlong FUN_180004150(longlong param_1)

{
  FUN_180003c00(param_1);
  return param_1;
}




longlong FUN_180004180(longlong param_1)

{
  FUN_180003e70(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_1800041d0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             undefined8 param_2,ulonglong param_3,__uint64 param_4,undefined8 param_5)

{
  FUN_180003c80((longlong)param_1,param_5);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_init
            (param_1);
  FUN_180004a40(param_1,param_2,param_3,param_4);
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
  FUN_180004150((longlong)this);
  _Tidy_init(this);
  assign(this,param_1);
  return this;
}




IObject * FUN_180004280(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IFileSystemPartition::vftable;
  return param_1;
}




IObject * FUN_1800042b0(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IFileSystemPartitionEditor::vftable;
  return param_1;
}




void FUN_1800042e0(IStorageDevice *param_1)

{
  FUN_180004340(param_1);
  return;
}




void FUN_180004310(IStorageDevice *param_1)

{
  FUN_1800042e0(param_1);
  return;
}




void FUN_180004340(IStorageDevice *param_1)

{
  IStorageDevice::ReleaseBitlocker(param_1);
  return;
}




void FUN_180004370(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _Tidy_deallocate(param_1);
  FUN_180004310((IStorageDevice *)param_1);
  return;
}




undefined8 FUN_1800043a0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::operator=(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > && __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_180003e70(param_1);
  if (this != pbVar1) {
    _Tidy_deallocate(this);
    uVar2 = FUN_1800047c0(param_1);
    Move_alloc(this,uVar2);
    puVar4 = local_18;
    for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uVar2 = FUN_180003e70(param_1);
    FID_conflict__Assign_rv_contents(this,uVar2);
  }
  return this;
}




void FUN_180004440(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,char *param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
            (param_1,param_2);
  return;
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
  
  FUN_180004c10(param_1,param_3,param_2);
  local_18[0] = 0;
  FUN_180004bc0(param_1 + param_2,local_18);
  return;
}




void FUN_1800044d0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002f00(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800044f4(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800044d0(param_1 + -8,param_2,param_3,param_4);
  return;
}




void FUN_180004500(longlong *param_1,longlong *param_2)

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




void FUN_1800045a0(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Assign_rv_contents(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64,struct
   std::integral_constant<bool,1>) __ptr64
    public: void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Assign_rv_contents(class
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > && __ptr64,struct std::integral_constant<bool,1>) __ptr64
    public: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Assign_rv_contents(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > && __ptr64,struct
   std::integral_constant<bool,1>) __ptr64
   
   Library: Visual Studio 2017 Release */

void FID_conflict__Assign_rv_contents
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                *param_1,undefined8 param_2)

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
  uVar1 = FUN_180003e70(param_2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _Assign_rv_contents_with_alloc_always_equal(param_1,uVar1,local_18[0]);
  return;
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
  
  uVar1 = FUN_1800047c0(param_1);
  uVar2 = FUN_1800047c0(this);
  _Dst = (void *)FUN_180003e70(uVar2);
  _Src = (void *)FUN_180003e70(uVar1);
  memcpy(_Dst,_Src,0x20);
  _Tidy_init(param_1);
  return;
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
  local_20 = FUN_1800047c0(param_1);
  local_28 = param_2 | 0xf;
  if ((local_28 <= _Var2) && (uVar1 = *(ulonglong *)(local_20 + 0x18), uVar1 <= _Var2 - uVar1 / 2))
  {
    local_18[0] = uVar1 + uVar1 / 2;
    p_Var3 = std::_Max_value<unsigned___int64>(&local_28,local_18);
    _Var2 = *p_Var3;
  }
  return _Var2;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_String_val<struct std::_Simple_types<char> >::_Check_offset(unsigned
   __int64)const __ptr64
    public: void __cdecl std::_String_val<struct std::_Simple_types<unsigned short>
   >::_Check_offset(unsigned __int64)const __ptr64
    public: void __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Check_offset(unsigned __int64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void Check_offset(longlong param_1,ulonglong param_2)

{
  if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_1800049f0();
  }
  return;
}




/* Library Function - Single Match
    public: unsigned __int64 __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Clamp_suffix_size(unsigned __int64,unsigned __int64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__uint64 __thiscall
std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
          (_String_val<struct_std::_Simple_types<char>_> *this,__uint64 param_1,__uint64 param_2)

{
  __uint64 *p_Var1;
  __uint64 local_res18 [2];
  __uint64 local_18 [3];
  
  local_18[0] = *(longlong *)(this + 0x10) - param_1;
  local_res18[0] = param_2;
  p_Var1 = _Min_value<unsigned___int64>(local_res18,local_18);
  return *p_Var1;
}




void FUN_1800047c0(undefined8 param_1)

{
  FUN_180003e70(param_1);
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




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_String_alloc<struct std::_String_base_types<unsigned short,class
   std::allocator<unsigned short> > >::_Move_alloc(class std::allocator<unsigned short> & __ptr64)
   __ptr64
    public: void __cdecl std::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >::_Move_alloc(class std::allocator<wchar_t> & __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

void Move_alloc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  _Pocma<>(uVar1,param_2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char const * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Myptr(void)const __ptr64
    public: unsigned short const * __ptr64 __cdecl std::_String_val<struct
   std::_Simple_types<unsigned short> >::_Myptr(void)const __ptr64
    public: wchar_t const * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Myptr(void)const __ptr64
   
   Library: Visual Studio 2017 Release */

_String_val<struct_std::_Simple_types<char>_> *
Myptr(_String_val<struct_std::_Simple_types<char>_> *param_1)

{
  bool bVar1;
  undefined8 local_18;
  
  bVar1 = std::_String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(param_1);
  local_18 = param_1;
  if (bVar1) {
    local_18 = (_String_val<struct_std::_Simple_types<char>_> *)
               FUN_180003e70(*(undefined8 *)param_1);
  }
  return local_18;
}




void FUN_180004880(undefined8 param_1)

{
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_1800047c0(param_1);
  IStorageDevice::ReleaseBitlocker(this);
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
  
  FUN_180004880(this);
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1800047c0(this);
  bVar1 = _String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(local_20);
  if (bVar1) {
    local_10 = *(void **)local_20;
    local_18 = FUN_1800047c0(this);
    FUN_180003e70(local_20);
    FUN_180004140();
    FUN_180004c50(local_18,local_10,*(longlong *)(local_20 + 0x18) + 1);
  }
  *(undefined8 *)(local_20 + 0x10) = 0;
  *(undefined8 *)(local_20 + 0x18) = 0xf;
  local_28[0] = 0;
  FUN_180004bc0(local_20,local_28);
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
  
  local_10 = (undefined1 *)FUN_1800047c0(this);
  *(undefined8 *)(local_10 + 0x10) = 0;
  *(undefined8 *)(local_10 + 0x18) = 0xf;
  local_18[0] = 0;
  FUN_180004bc0(local_10,local_18);
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




void FUN_1800049f0(void)

{
  std::_Xout_of_range("invalid string position");
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
  
  _Var1 = FUN_180003e70(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




void FUN_180004a40(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  __uint64 _Var2;
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1800047c0(param_2);
  Check_offset((longlong)p_Var1,param_3);
  _Var2 = std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
                    (p_Var1,param_3,param_4);
  p_Var1 = Myptr(p_Var1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
            (param_1,(char *)(p_Var1 + param_3),_Var2);
  return;
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
  
  uVar1 = FUN_180004cb0(param_1);
  _Var2 = FUN_180003e70(uVar1);
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
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1800047c0(this);
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
    FUN_180004d70(local_18,param_1,param_2);
    local_28 = 0;
    FUN_180004bc0(local_18 + param_2,&local_28);
  }
  return this;
}




void FUN_180004bc0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_180004be0(undefined8 param_1)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1800047c0(param_1);
  Myptr(p_Var1);
  return;
}




void FUN_180004c10(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return;
}




void FUN_180004c50(undefined8 param_1,void *param_2,ulonglong param_3)

{
  _Deallocate<>(param_2,param_3);
  return;
}




undefined8 FUN_180004c80(undefined8 param_1,undefined8 param_2)

{
  FUN_1800047c0(param_1);
  return param_2;
}




void FUN_180004cb0(char *param_1)

{
  strlen(param_1);
  return;
}




undefined8 FUN_180004ce0(void)

{
  return 0x7fffffffffffffff;
}




undefined8 FUN_180004cf0(void)

{
  return 0xffffffffffffffff;
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
  
  FUN_1800047c0(param_1);
  local_30 = FUN_180004cf0();
  local_38 = 0x10;
  p_Var1 = std::_Max_value<unsigned___int64>(&local_30,&local_38);
  local_28 = *p_Var1;
  local_20 = local_28 - 1;
  local_18[0] = FUN_180004ce0();
  p_Var1 = std::_Min_value<unsigned___int64>(local_18,&local_20);
  return *p_Var1;
}




void FUN_180004d70(void *param_1,void *param_2,size_t param_3)

{
  memmove(param_1,param_2,param_3);
  return;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_180004db0(undefined8 param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
             ulonglong param_3,__uint64 param_4)

{
  undefined8 uVar1;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_14 = 0;
  uVar1 = FUN_180004c80(param_1,local_18);
  FUN_1800041d0(param_2,param_1,param_3,param_4,uVar1);
  return param_2;
}




longlong FUN_180004e20(longlong param_1)

{
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = param_1 + 8;
  }
  return local_18;
}




longlong FUN_180004e60(longlong param_1)

{
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = param_1 + 8;
  }
  return local_18;
}




char * FUN_180004ea0(void)

{
  return "CFileSystemPartitionExtendInfo";
}




longlong FUN_180004eb0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  longlong local_40;
  longlong local_38;
  
  if (param_2 == (char *)0x0) {
    param_1 = 0;
  }
  else {
    local_68 = (uint)(*param_2 == '*');
    if (param_2[(int)local_68] == '1') {
      if (param_1 == 0) {
        local_40 = 0;
        param_1 = local_40;
      }
      else {
        param_1 = param_1 + 8;
      }
    }
    else {
      pcVar1 = param_2;
      local_58 = (char *)FUN_1800057d0(0,param_2,param_3,param_4);
      local_60 = param_2 + (int)local_68;
      for (; ((*local_60 == *local_58 && (*local_60 != '\0')) && (*local_58 != '\0'));
          local_58 = local_58 + 1) {
        local_60 = local_60 + 1;
      }
      if (*local_60 == *local_58) {
        if (param_1 == 0) {
          local_38 = 0;
          param_1 = local_38;
        }
        else {
          param_1 = param_1 + 8;
        }
      }
      else {
        local_48 = (char *)FUN_1800057b0(0,pcVar1,param_3,param_4);
        local_50 = param_2 + (int)local_68;
        for (; ((*local_50 == *local_48 && (*local_50 != '\0')) && (*local_48 != '\0'));
            local_48 = local_48 + 1) {
          local_50 = local_50 + 1;
        }
        if (*local_50 != *local_48) {
          param_1 = 0;
        }
      }
    }
  }
  return param_1;
}




undefined8 FUN_1800050c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined4 FUN_1800050e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}




undefined4 FUN_180005100(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}




undefined8 FUN_180005120(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




undefined4 FUN_180005140(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




undefined1 FUN_180005160(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}




bool FUN_180005180(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  return (uVar1 & 1) == 0;
}




bool FUN_1800051d0(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  return (uVar1 & 2) != 0;
}




undefined4 FUN_180005220(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_180005240(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_180005260(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_180005280(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}




void FUN_1800052a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_1800052c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_1800052e0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_180005300(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




undefined4 FUN_180005320(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}




void FUN_180005340(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}




undefined4 FUN_180005360(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}




void FUN_180005380(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}




undefined8 FUN_1800053a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}




void FUN_1800053c0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}




undefined1 FUN_1800053e0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}




undefined1 FUN_180005400(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x79);
}




undefined8 FUN_180005420(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}




void FUN_180005440(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x70) = param_2;
  return;
}




void FUN_180005460(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x71) = param_2;
  return;
}




void FUN_180005480(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return;
}




void FUN_1800054a0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x80) = param_2;
  return;
}




undefined1 FUN_1800054c0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}




void FUN_1800054e0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2c) = param_2;
  return;
}




/* Library Function - Single Match
    public: void __cdecl CMFCRibbonBaseElement::SetRect(class CRect) __ptr64
   
   Library: Visual Studio 2012 Debug */

void __thiscall
CMFCRibbonBaseElement::SetRect(CMFCRibbonBaseElement *this,CMFCRibbonBaseElement *param_2)

{
  longlong lVar1;
  CMFCRibbonBaseElement *pCVar2;
  
  pCVar2 = this + 0x30;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pCVar2 = *param_2;
    param_2 = param_2 + 1;
    pCVar2 = pCVar2 + 1;
  }
  return;
}




void FUN_180005530(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_180005550(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}




void FUN_180005570(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}




/* Library Function - Single Match
    public: virtual class CRect __cdecl CMFCCaptionButtonEx::GetRect(void)const __ptr64
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2015 Debug */

CMFCCaptionButtonEx * __thiscall CMFCCaptionButtonEx::GetRect(CMFCCaptionButtonEx *this)

{
  longlong lVar1;
  CMFCCaptionButtonEx *in_RDX;
  CMFCCaptionButtonEx *pCVar2;
  CMFCCaptionButtonEx *pCVar3;
  
  pCVar2 = this + 0x38;
  pCVar3 = in_RDX;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pCVar3 = *pCVar2;
    pCVar2 = pCVar2 + 1;
    pCVar3 = pCVar3 + 1;
  }
  return in_RDX;
}




undefined1 FUN_1800055c0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}




undefined8 FUN_1800055e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}




undefined4 FUN_180005600(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}




undefined8 FUN_180005620(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}




void FUN_180005640(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}




IObject * FUN_180005660(IObject *param_1,IObject *param_2)

{
  FUN_180005890(param_1,param_2);
  FUN_1800058c0(param_1 + 8,param_2);
  *(undefined ***)param_1 = CFileSystemPartitionExtendInfo::vftable;
  *(undefined ***)(param_1 + 8) = CFileSystemPartitionExtendInfo::vftable;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2c] = (IObject)0x1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x34] = (IObject)0x0;
  param_1[0x48] = (IObject)0x0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  param_1[0x78] = (IObject)0x0;
  param_1[0x79] = (IObject)0x0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  param_1[0x88] = (IObject)0x0;
  memset(param_1 + 0x38,0,0x10);
  return param_1;
}




void FUN_1800057b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800057f0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800057d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005840(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_1800057f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005b030 == (undefined1 *)0x0) {
    DAT_18005b030 = &DAT_18005af30;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x1800531c8,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005b030,local_18);
  }
  return DAT_18005b030;
}




undefined1 *
FUN_180005840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005af20 == (undefined1 *)0x0) {
    DAT_18005af20 = &DAT_18005ae20;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180053188,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005af20,local_18);
  }
  return DAT_18005af20;
}




IObject * FUN_180005890(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IFileSystemPartitionExtendInfo::vftable;
  return param_1;
}




IObject * FUN_1800058c0(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IFileSystemPartitionExtendInfoEditor::vftable;
  return param_1;
}




void FUN_1800058f0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004eb0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180005914(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800058f0(param_1 + -8,param_2,param_3,param_4);
  return;
}




void FUN_180005920(__time64_t *param_1)

{
  _time64(param_1);
  return;
}




/* enum GPT_PartitionType __cdecl GPT_GetPartitionTypeFromTypeGUID(struct GPT_GUID const & __ptr64)
    */

GPT_PartitionType __cdecl GPT_GetPartitionTypeFromTypeGUID(GPT_GUID *param_1)

{
  int iVar1;
  GPT_PartitionType GVar2;
  
                    /* 0x5940  31
                       ?GPT_GetPartitionTypeFromTypeGUID@@YA?AW4GPT_PartitionType@@AEBUGPT_GUID@@@Z
                        */
  iVar1 = memcmp(param_1,&DAT_180036ef0,0x10);
  if (iVar1 == 0) {
    GVar2 = 0;
  }
  else {
    iVar1 = memcmp(param_1,&DAT_180036f00,0x10);
    if (iVar1 == 0) {
      GVar2 = 1;
    }
    else {
      iVar1 = memcmp(param_1,&DAT_180036f10,0x10);
      if (iVar1 == 0) {
        GVar2 = 2;
      }
      else {
        iVar1 = memcmp(param_1,&DAT_180036f20,0x10);
        if (iVar1 == 0) {
          GVar2 = 3;
        }
        else {
          iVar1 = memcmp(param_1,&DAT_180036f30,0x10);
          if (iVar1 == 0) {
            GVar2 = 4;
          }
          else {
            iVar1 = memcmp(param_1,&DAT_180036f40,0x10);
            if (iVar1 == 0) {
              GVar2 = 5;
            }
            else {
              iVar1 = memcmp(param_1,&DAT_180036f50,0x10);
              if (iVar1 == 0) {
                GVar2 = 6;
              }
              else {
                iVar1 = memcmp(param_1,&DAT_180036f60,0x10);
                if (iVar1 == 0) {
                  GVar2 = 7;
                }
                else {
                  GVar2 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  return GVar2;
}




/* void __cdecl GPT_SetPartitionTypeGUIDFromType(enum GPT_PartitionType,struct GPT_GUID & __ptr64)
    */

void __cdecl GPT_SetPartitionTypeGUIDFromType(GPT_PartitionType param_1,GPT_GUID *param_2)

{
                    /* 0x5a90  32
                       ?GPT_SetPartitionTypeGUIDFromType@@YAXW4GPT_PartitionType@@AEAUGPT_GUID@@@Z
                        */
  switch(param_1) {
  case 0:
    memcpy(param_2,&DAT_180036ef0,0x10);
    break;
  case 1:
    memcpy(param_2,&DAT_180036f00,0x10);
    break;
  case 2:
    memcpy(param_2,&DAT_180036f10,0x10);
    break;
  case 3:
    memcpy(param_2,&DAT_180036f20,0x10);
    break;
  case 4:
    memcpy(param_2,&DAT_180036f30,0x10);
    break;
  case 5:
    memcpy(param_2,&DAT_180036f40,0x10);
    break;
  case 6:
    memcpy(param_2,&DAT_180036f50,0x10);
    break;
  case 7:
    memcpy(param_2,&DAT_180036f60,0x10);
    break;
  default:
    memcpy(param_2,&DAT_180036ef0,0x10);
  }
  return;
}




undefined * FUN_180005be0(int param_1)

{
  return (&PTR_s_Unused_Partition_180036f70)[param_1];
}




/* void __cdecl GPT_FormatGUID(struct GPT_GUID const & __ptr64,char * __ptr64 const) */

void __cdecl GPT_FormatGUID(GPT_GUID *param_1,char *param_2)

{
                    /* 0x5c00  28  ?GPT_FormatGUID@@YAXAEBUGPT_GUID@@QEAD@Z */
  sprintf(param_2,"%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X",
          (ulonglong)(byte)param_1[3],(ulonglong)(byte)param_1[2],(uint)(byte)param_1[1],
          (uint)(byte)*param_1,(uint)(byte)param_1[5],(uint)(byte)param_1[4],(uint)(byte)param_1[7],
          (uint)(byte)param_1[6],(uint)(byte)param_1[8],(uint)(byte)param_1[9],
          (uint)(byte)param_1[10],(uint)(byte)param_1[0xb],(uint)(byte)param_1[0xc],
          (uint)(byte)param_1[0xd],(uint)(byte)param_1[0xe],(uint)(byte)param_1[0xf]);
  return;
}




/* void __cdecl GPT_String2GUID(struct GPT_GUID const & __ptr64,char * __ptr64) */

void __cdecl GPT_String2GUID(GPT_GUID *param_1,char *param_2)

{
  longlong lVar1;
  GPT_GUID *pGVar2;
  undefined1 auStack_148 [32];
  GPT_GUID *local_128;
  GPT_GUID *local_120;
  GPT_GUID *local_118;
  GPT_GUID *local_110;
  GPT_GUID *local_108;
  GPT_GUID *local_100;
  GPT_GUID *local_f8;
  GPT_GUID *local_f0;
  GPT_GUID *local_e8;
  GPT_GUID *local_e0;
  GPT_GUID *local_d8;
  GPT_GUID *local_d0;
  GPT_GUID *local_c8;
  GPT_GUID *local_c0;
  int local_b8;
  GPT_GUID *local_b0;
  GPT_GUID *local_a8;
  GPT_GUID local_98 [64];
  ulonglong local_58;
  
                    /* 0x5e30  33  ?GPT_String2GUID@@YAXAEBUGPT_GUID@@PEAD@Z */
  local_58 = DAT_180053018 ^ (ulonglong)auStack_148;
  pGVar2 = local_98;
  for (lVar1 = 0x40; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pGVar2 = (GPT_GUID)0x0;
    pGVar2 = pGVar2 + 1;
  }
  local_c0 = local_98 + 0x3c;
  local_c8 = local_98 + 0x38;
  local_d0 = local_98 + 0x34;
  local_d8 = local_98 + 0x30;
  local_e0 = local_98 + 0x2c;
  local_e8 = local_98 + 0x28;
  local_f0 = local_98 + 0x24;
  local_f8 = local_98 + 0x20;
  local_100 = local_98 + 0x18;
  local_108 = local_98 + 0x1c;
  local_110 = local_98 + 0x10;
  local_118 = local_98 + 0x14;
  local_120 = local_98;
  local_128 = local_98 + 4;
  local_b0 = local_98 + 8;
  local_a8 = param_1;
  FUN_180006540(param_2,"%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X",
                local_98 + 0xc,local_b0);
  for (local_b8 = 0; local_b8 < 0x10; local_b8 = local_b8 + 1) {
    local_a8[local_b8] = local_98[(longlong)local_b8 * 4];
  }
  __security_check_cookie(local_58 ^ (ulonglong)auStack_148);
  return;
}




/* void __cdecl GPT_GenerateSignature(unsigned long & __ptr64) */

void __cdecl GPT_GenerateSignature(ulong *param_1)

{
  int iVar1;
  
                    /* 0x6090  30  ?GPT_GenerateSignature@@YAXAEAK@Z */
  DAT_18005b450 = DAT_18005b450 + 1;
  iVar1 = FUN_180005920((__time64_t *)0x0);
  srand(iVar1 + (int)DAT_18005b450);
  iVar1 = rand();
  *param_1 = (ulong)(longlong)(((double)iVar1 / 32767.0) * 268435455.0 + 4096.0);
  return;
}




/* void __cdecl GPT_GenerateGUID(struct GPT_GUID & __ptr64) */

void __cdecl GPT_GenerateGUID(GPT_GUID *param_1)

{
  int iVar1;
  int local_18;
  
                    /* 0x6120  29  ?GPT_GenerateGUID@@YAXAEAUGPT_GUID@@@Z */
  DAT_18005b458 = DAT_18005b458 + 1;
  iVar1 = FUN_180005920((__time64_t *)0x0);
  srand(iVar1 + (int)DAT_18005b458);
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    iVar1 = rand();
    param_1[local_18] = SUB41(iVar1,0);
  }
  return;
}




bool FUN_1800061a0(ulonglong param_1)

{
  return (param_1 & 1) == 1;
}




bool FUN_1800061e0(ulonglong param_1)

{
  return (param_1 >> 0x3c & 1) == 1;
}




bool FUN_180006220(ulonglong param_1)

{
  return (param_1 >> 0x3e & 1) == 1;
}




bool FUN_180006260(longlong param_1)

{
  return param_1 < 0;
}




/* void __cdecl GPT_ChksumCrc32Initialize(void) */

void __cdecl GPT_ChksumCrc32Initialize(void)

{
  uint local_18;
  uint local_14;
  int local_10;
  
                    /* 0x62a0  27  ?GPT_ChksumCrc32Initialize@@YAXXZ */
  for (local_14 = 0; (int)local_14 < 0x100; local_14 = local_14 + 1) {
    local_18 = local_14;
    for (local_10 = 8; 0 < local_10; local_10 = local_10 + -1) {
      if ((local_18 & 1) == 0) {
        local_18 = local_18 >> 1;
      }
      else {
        local_18 = local_18 >> 1 ^ 0xedb88320;
      }
    }
    *(uint *)(&DAT_18005b040 + (longlong)(int)local_14 * 4) = local_18;
  }
  return;
}




/* unsigned long __cdecl GPT_ChksumCrc32(unsigned char * __ptr64,unsigned long) */

ulong __cdecl GPT_ChksumCrc32(uchar *param_1,ulong param_2)

{
  byte *local_res8;
  uint local_18;
  uint local_14;
  
                    /* 0x6330  26  ?GPT_ChksumCrc32@@YAKPEAEK@Z */
  local_18 = 0xffffffff;
  local_res8 = param_1;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_18 = local_18 >> 8 ^
               *(uint *)(&DAT_18005b040 + (ulonglong)((local_18 ^ *local_res8) & 0xff) * 4);
    local_res8 = local_res8 + 1;
  }
  return local_18 ^ 0xffffffff;
}




undefined * FUN_1800063b0(void)

{
  return &DAT_18005b440;
}




undefined * FUN_1800063c0(void)

{
  return &DAT_18005b448;
}




/* Library Function - Single Match
    _vsnprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl
_vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  ulonglong *puVar1;
  int local_14;
  
  puVar1 = (ulonglong *)FUN_1800063b0();
  local_14 = __stdio_common_vsprintf(*puVar1 | 1,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




/* Library Function - Single Match
    _vsprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = _vsnprintf_l(_DstBuf,0xffffffffffffffff,_Format,param_3,_ArgList);
  return iVar1;
}




void FUN_1800064a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800063c0();
  __stdio_common_vsscanf(*puVar1,param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}




/* Library Function - Single Match
    sprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  iVar1 = _vsprintf_l(_Dest,_Format,(_locale_t)0x0,(va_list)&local_res18);
  return iVar1;
}




undefined4
FUN_180006540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_1800064a0(param_1,param_2,0,&local_res18);
  return uVar1;
}




/* public: __cdecl CGPTDiskAnalyzer::CGPTDiskAnalyzer(void) __ptr64 */

CGPTDiskAnalyzer * __thiscall CGPTDiskAnalyzer::CGPTDiskAnalyzer(CGPTDiskAnalyzer *this)

{
                    /* 0x6590  1  ??0CGPTDiskAnalyzer@@QEAA@XZ */
  return this;
}




/* public: __cdecl CGPTDiskAnalyzer::~CGPTDiskAnalyzer(void) __ptr64 */

void __thiscall CGPTDiskAnalyzer::~CGPTDiskAnalyzer(CGPTDiskAnalyzer *this)

{
                    /* 0x65b0  8  ??1CGPTDiskAnalyzer@@QEAA@XZ */
  return;
}




/* public: static bool __cdecl CGPTDiskAnalyzer::IsGPTDisk(struct IStorageDevice * __ptr64,unsigned
   __int64,int) */

bool __cdecl CGPTDiskAnalyzer::IsGPTDisk(IStorageDevice *param_1,__uint64 param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong *_Memory;
  
                    /* 0x65c0  40  ?IsGPTDisk@CGPTDiskAnalyzer@@SA_NPEAUIStorageDevice@@_KH@Z */
  uVar2 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8);
  _Memory = (longlong *)operator_new((ulonglong)uVar2);
  iVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,_Memory,0,1);
  if (iVar3 == 0) {
    free(_Memory);
    bVar1 = false;
  }
  else {
    iVar3 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8);
    bVar1 = IsValidSignature((uchar *)_Memory,iVar3);
    if (bVar1) {
      if (*(char *)((longlong)_Memory + 0x1c2) == -0x12) {
        if ((*(char *)((longlong)_Memory + 0x1d2) != '\0') &&
           (*(char *)((longlong)_Memory + 0x1d2) != -0x12)) {
          bVar1 = IsBootRelativeDisk(param_3);
          if (bVar1) {
            bVar1 = CurIsBiosBoot();
            if (bVar1) {
              free(_Memory);
              return false;
            }
          }
          else if ((ulonglong)*(uint *)((longlong)_Memory + 0x1ca) << 1 < param_2) {
            free(_Memory);
            return false;
          }
        }
        iVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,_Memory,1,1);
        if (iVar3 == 0) {
          free(_Memory);
          bVar1 = false;
        }
        else {
          if (*_Memory != 0x5452415020494645) {
            iVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,_Memory,param_2 - 1,1)
            ;
            if (iVar3 == 0) {
              free(_Memory);
              return false;
            }
            if (*_Memory != 0x5452415020494645) {
              free(_Memory);
              return false;
            }
          }
          bVar1 = true;
        }
      }
      else {
        free(_Memory);
        bVar1 = false;
      }
    }
    else {
      free(_Memory);
      bVar1 = false;
    }
  }
  return bVar1;
}




/* private: static bool __cdecl CGPTDiskAnalyzer::IsValidSignature(unsigned char * __ptr64,int) */

bool __cdecl CGPTDiskAnalyzer::IsValidSignature(uchar *param_1,int param_2)

{
  bool local_18;
  
                    /* 0x6900  41  ?IsValidSignature@CGPTDiskAnalyzer@@CA_NPEAEH@Z */
  if ((param_1[0x1fe] == 'U') && (param_1[0x1ff] == 0xaa)) {
    local_18 = true;
  }
  else {
    local_18 = false;
  }
  return local_18;
}




/* private: static bool __cdecl CGPTDiskAnalyzer::IsBootRelativeDisk(int) */

bool __cdecl CGPTDiskAnalyzer::IsBootRelativeDisk(int param_1)

{
  undefined1 extraout_AL;
  LSTATUS LVar1;
  longlong lVar2;
  BYTE *pBVar3;
  undefined8 uVar4;
  undefined1 auStackY_208 [32];
  DWORD local_1d4;
  int local_1d0 [2];
  HKEY local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  BYTE local_1a8 [400];
  ulonglong local_18;
  
                    /* 0x6950  39  ?IsBootRelativeDisk@CGPTDiskAnalyzer@@CA_NH@Z */
  local_18 = DAT_180053018 ^ (ulonglong)auStackY_208;
  local_1d0[0] = -1;
  local_1c8 = (HKEY)0x0;
  pBVar3 = local_1a8;
  for (lVar2 = 400; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pBVar3 = '\0';
    pBVar3 = pBVar3 + 1;
  }
  local_1d4 = 400;
  LVar1 = RegOpenKeyExW((HKEY)0xffffffff80000002,L"System\\CurrentControlSet\\Control",0,1,
                        &local_1c8);
  if (LVar1 == 0) {
    uVar4 = 0;
    LVar1 = RegQueryValueExW(local_1c8,L"FirmwareBootDevice",(LPDWORD)0x0,(LPDWORD)0x0,local_1a8,
                             &local_1d4);
    if (LVar1 == 0) {
      local_1c0 = (ulonglong)local_1d4 / 2 << 1;
      if (399 < local_1c0) {
        __report_rangecheckfailure();
      }
      (local_1a8 + local_1c0)[0] = '\0';
      (local_1a8 + local_1c0)[1] = '\0';
      FUN_180006d00(local_1a8,L"%*[^r]rdisk(%d)",local_1d0,uVar4);
    }
    if (local_1d0[0] != param_1) {
      local_1d4 = 400;
      uVar4 = 0;
      LVar1 = RegQueryValueExW(local_1c8,L"SystemBootDevice",(LPDWORD)0x0,(LPDWORD)0x0,local_1a8,
                               &local_1d4);
      if (LVar1 == 0) {
        local_1b8 = (ulonglong)local_1d4 / 2 << 1;
        if (399 < local_1b8) {
          __report_rangecheckfailure();
        }
        (local_1a8 + local_1b8)[0] = '\0';
        (local_1a8 + local_1b8)[1] = '\0';
        FUN_180006d00(local_1a8,L"%*[^r]rdisk(%d)",local_1d0,uVar4);
      }
    }
    RegCloseKey(local_1c8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_208);
  return (bool)extraout_AL;
}




/* private: static bool __cdecl CGPTDiskAnalyzer::CurIsBiosBoot(void) */

bool __cdecl CGPTDiskAnalyzer::CurIsBiosBoot(void)

{
  undefined1 extraout_AL;
  LSTATUS LVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStackY_1f8 [32];
  DWORD local_1c4;
  HKEY local_1c0;
  ulonglong local_1b8;
  undefined4 local_1b0;
  wchar_t local_1a8 [200];
  ulonglong local_18;
  
                    /* 0x6b20  24  ?CurIsBiosBoot@CGPTDiskAnalyzer@@CA_NXZ */
  local_18 = DAT_180053018 ^ (ulonglong)auStackY_1f8;
  local_1b0 = 0xffffffff;
  local_1c0 = (HKEY)0x0;
  pwVar3 = local_1a8;
  for (lVar2 = 400; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  local_1c4 = 400;
  LVar1 = RegOpenKeyExW((HKEY)0xffffffff80000002,
                        L"BCD00000000\\Objects\\{9dea862c-5cdd-4e70-acc1-f32b344d4795}\\Elements\\12000002"
                        ,0,1,&local_1c0);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExW(local_1c0,L"Element",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_1a8,
                             &local_1c4);
    if (LVar1 == 0) {
      local_1b8 = (ulonglong)local_1c4 / 2 << 1;
      if (399 < local_1b8) {
        __report_rangecheckfailure();
      }
      *(undefined2 *)((longlong)local_1a8 + local_1b8) = 0;
      FUN_180006c80(local_1a8,L"bootmgfw.efi");
    }
    RegCloseKey(local_1c0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_1f8);
  return (bool)extraout_AL;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  longlong lVar1;
  CLogInBootICE *pCVar2;
  
  pCVar2 = this;
                    /* 0x6c50  10  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pCVar2 = *param_1;
    param_1 = param_1 + 1;
    pCVar2 = pCVar2 + 1;
  }
  return this;
}




void FUN_180006c80(wchar_t *param_1,wchar_t *param_2)

{
  wcsstr(param_1,param_2);
  return;
}




void FUN_180006cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800063c0();
  __stdio_common_vswscanf(*puVar1,param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}




undefined4
FUN_180006d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180006cb0(param_1,param_2,0,&local_res18);
  return uVar1;
}




undefined8 * FUN_180006d50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80;
  return param_1;
}




void FUN_180006dc0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x210) != 0) {
    free(*(void **)(param_1 + 0x210));
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  return;
}




void FUN_180006e20(longlong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined8 uVar6;
  __uint64 _Var7;
  undefined1 auStack_338 [32];
  char local_318;
  void *local_310;
  uint local_308 [4];
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  void *local_2d8;
  void *local_2d0;
  void *local_2c8;
  void *local_2c0;
  ulonglong local_2b8;
  void *local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  void *local_298;
  void *local_290;
  void *local_288;
  ulonglong local_280;
  void *local_278;
  void *local_270;
  void *local_268;
  longlong local_260 [4];
  longlong local_240 [4];
  undefined8 local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_220 = 0xfffffffffffffffe;
  local_18 = DAT_180053018 ^ (ulonglong)auStack_338;
  uVar3 = (*(code *)**(undefined8 **)(*param_1 + 8))(*param_1 + 8);
  local_310 = operator_new((ulonglong)uVar3);
  local_2d8 = local_310;
  uVar3 = (*(code *)**(undefined8 **)(*param_1 + 8))(*param_1 + 8);
  memset(local_310,0,(ulonglong)uVar3);
  iVar4 = (**(code **)(*(longlong *)(*param_1 + 8) + 8))(*param_1 + 8,local_310,0,1);
  if (iVar4 == 1) {
    memcpy(local_218,local_310,0x200);
    uVar6 = FUN_180007820(param_1,(longlong)local_218);
    if ((int)uVar6 == 0) {
      iVar4 = (**(code **)(*(longlong *)(*param_1 + 8) + 8))(*param_1 + 8,local_310,1,1);
      if (iVar4 == 0) {
        pbVar5 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "Failed to read GPT HEADER.");
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,FUN_1800083e0);
        local_2c0 = local_310;
        free(local_310);
      }
      else {
        memcpy(param_1 + 2,local_310,0x200);
        local_318 = '\x01';
        uVar6 = FUN_1800078d0((longlong)param_1,param_1 + 2,'\0');
        if ((int)uVar6 == 0) {
          local_2b8 = CONCAT44(0,*(uint *)(param_1 + 0xc));
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_2b8;
          _Var7 = SUB168(ZEXT816(0x80) * auVar1,0);
          if (SUB168(ZEXT816(0x80) * auVar1,8) != 0) {
            _Var7 = 0xffffffffffffffff;
          }
          local_2b0 = operator_new(_Var7);
          param_1[0x42] = (longlong)local_2b0;
          if (param_1[0x42] != 0) {
            *(int *)((longlong)param_1 + 0x21c) = (int)param_1[0xc];
            *(int *)(param_1 + 0x43) = *(int *)((longlong)param_1 + 100) * (int)param_1[0xc];
            FUN_180001050(local_240);
            local_2f8 = *param_1;
            if (local_2f8 == 0) {
              local_2f0 = 0;
            }
            else {
              local_2f0 = local_2f8 + 8;
            }
            FUN_180001080(local_240,local_2f0);
            uVar3 = (*(code *)**(undefined8 **)(*param_1 + 8))(*param_1 + 8);
            FUN_180001090(local_240,param_1[0xb] * (ulonglong)uVar3);
            local_308[0] = 0;
            uVar6 = FUN_180001100(local_240,(void *)param_1[0x42],*(uint *)(param_1 + 0x43),
                                  local_308);
            if (((int)uVar6 != 0) &&
               (uVar6 = FUN_180007b50((longlong)param_1,*(ulong *)(param_1 + 0xd)), (int)uVar6 == 0)
               ) {
              local_318 = '\0';
            }
            _guard_check_icall();
          }
        }
        if (local_318 != '\0') {
          local_2a8 = *param_1 + 8;
          local_2a0 = *(longlong *)(*param_1 + 8);
          iVar4 = (**(code **)(local_2a0 + 8))(local_2a8,local_310,param_1[1] + -1,1);
          if (iVar4 == 0) {
            pbVar5 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                   "Failed to read GPT HEADER.");
            std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                      (pbVar5,FUN_1800083e0);
            local_298 = local_310;
            free(local_310);
          }
          else {
            memcpy(param_1 + 2,local_310,0x200);
            uVar6 = FUN_1800078d0((longlong)param_1,param_1 + 2,'\x01');
            if ((int)uVar6 == 0) {
              if (param_1[0x42] != 0) {
                local_288 = (void *)param_1[0x42];
                free(local_288);
              }
              local_280 = CONCAT44(0,*(uint *)(param_1 + 0xc));
              auVar2._8_8_ = 0;
              auVar2._0_8_ = local_280;
              _Var7 = SUB168(ZEXT816(0x80) * auVar2,0);
              if (SUB168(ZEXT816(0x80) * auVar2,8) != 0) {
                _Var7 = 0xffffffffffffffff;
              }
              local_278 = operator_new(_Var7);
              param_1[0x42] = (longlong)local_278;
              if (param_1[0x42] != 0) {
                *(int *)((longlong)param_1 + 0x21c) = (int)param_1[0xc];
                *(int *)(param_1 + 0x43) = *(int *)((longlong)param_1 + 100) * (int)param_1[0xc];
                FUN_180001050(local_260);
                local_2e8 = *param_1;
                if (local_2e8 == 0) {
                  local_2e0 = 0;
                }
                else {
                  local_2e0 = local_2e8 + 8;
                }
                FUN_180001080(local_260,local_2e0);
                uVar3 = (*(code *)**(undefined8 **)(*param_1 + 8))(*param_1 + 8);
                FUN_180001090(local_260,param_1[0xb] * (ulonglong)uVar3);
                local_308[1] = 0;
                uVar6 = FUN_180001100(local_260,(void *)param_1[0x42],*(uint *)(param_1 + 0x43),
                                      local_308 + 1);
                if ((int)uVar6 == 0) {
                  pbVar5 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)
                                         cout_exref,"Failed to read GPT partition table.");
                  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                            (pbVar5,FUN_1800083e0);
                  local_270 = local_310;
                  free(local_310);
                  local_308[2] = 0xffffffff;
                  _guard_check_icall();
                }
                else {
                  uVar6 = FUN_180007b50((longlong)param_1,*(ulong *)(param_1 + 0xd));
                  if ((int)uVar6 == 0) {
                    _guard_check_icall();
                  }
                  else {
                    pbVar5 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)
                                           cout_exref,"Failed to verify GPT partition table.");
                    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                              (pbVar5,FUN_1800083e0);
                    local_268 = local_310;
                    free(local_310);
                    local_308[3] = 0xffffffff;
                    _guard_check_icall();
                  }
                }
              }
            }
            else {
              pbVar5 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)
                                     cout_exref,"Failed to verify GPT HEADER.");
              std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                        (pbVar5,FUN_1800083e0);
              local_290 = local_310;
              free(local_310);
            }
          }
        }
      }
    }
    else {
      local_2c8 = local_310;
      free(local_310);
    }
  }
  else {
    pbVar5 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Failed to read GPT MBR sector.");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,FUN_1800083e0);
    local_2d0 = local_310;
    free(local_310);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_338);
  return;
}




undefined8
FUN_1800075e0(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(param_1 + 0x48);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *param_3 = *(undefined8 *)(param_1 + 0x38);
  *param_4 = *(undefined8 *)(param_1 + 0x40);
  return 0;
}




void FUN_180007640(longlong param_1,undefined8 param_2)

{
  GPT_PartitionType GVar1;
  undefined1 *puVar2;
  undefined1 auStack_c8 [32];
  uint local_a8;
  GPT_GUID *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStack_c8;
  for (local_a8 = 0; local_a8 < *(uint *)(param_1 + 0x60); local_a8 = local_a8 + 1) {
    local_a0 = (GPT_GUID *)((ulonglong)local_a8 * 0x80 + *(longlong *)(param_1 + 0x210));
    GVar1 = GPT_GetPartitionTypeFromTypeGUID(local_a0);
    if (GVar1 != 0) {
      puVar2 = FUN_1800085b0(local_98,local_a0);
      FUN_180008ff0(param_2,puVar2);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_180007700(longlong param_1)

{
  FUN_180009040(param_1);
  return;
}




void FUN_180007720(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_180053018 ^ (ulonglong)auStack_e8;
  local_c0 = 0;
  FUN_180008e20(param_1,&local_c8);
  do {
    plVar2 = FUN_180008f10(param_1,local_b8);
    bVar1 = FUN_180008890(&local_c8,plVar2);
    if (!bVar1) {
LAB_1800077f7:
      __security_check_cookie(local_28 ^ (ulonglong)auStack_e8);
      return;
    }
    puVar3 = (undefined1 *)FUN_1800088e0(&local_c8);
    puVar5 = local_a8;
    for (lVar4 = 0x80; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar4 = FUN_180008a60((longlong)local_a8);
    if (lVar4 < local_c0) {
      this = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Partition overlapped!");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(this,FUN_1800083e0);
      goto LAB_1800077f7;
    }
    local_c0 = FUN_180008a50((longlong)local_a8);
    FUN_180008920(&local_c8);
  } while( true );
}




undefined8 FUN_180007820(undefined8 param_1,longlong param_2)

{
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar1;
  undefined8 uVar2;
  
  if (*(short *)(param_2 + 0x1fe) == -0x55ab) {
    if (*(char *)(param_2 + 0x1c2) == -0x12) {
      uVar2 = 0;
    }
    else {
      pbVar1 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Failed to find PART_GPT.");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,FUN_1800083e0);
      uVar2 = 0xffffffff;
    }
  }
  else {
    pbVar1 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Verify GPT MBR sector failed.");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,FUN_1800083e0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




undefined8 FUN_1800078d0(longlong param_1,longlong *param_2,char param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  bool bVar4;
  
  if ((((*param_2 == 0x5452415020494645) && ((int)param_2[1] == 0x10000)) &&
      (*(int *)((longlong)param_2 + 0xc) == 0x5c)) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
    if (param_3 == '\0') {
      bVar4 = param_2[3] == 1;
    }
    else {
      bVar4 = param_2[3] == *(longlong *)(param_1 + 8) + -1;
    }
    if (bVar4) {
      if (param_3 == '\0') {
        bVar4 = param_2[4] == *(longlong *)(param_1 + 8) + -1;
      }
      else {
        bVar4 = param_2[4] == 1;
      }
      if (((((bVar4) && ((ulonglong)param_2[5] < *(ulonglong *)(param_1 + 8))) &&
           (((ulonglong)param_2[5] < (ulonglong)param_2[6] &&
            ((ulonglong)param_2[6] < *(ulonglong *)(param_1 + 8))))) &&
          (((ulonglong)param_2[9] < (ulonglong)param_2[5] ||
           ((ulonglong)param_2[6] < (ulonglong)param_2[9])))) &&
         (*(int *)((longlong)param_2 + 0x54) == 0x80)) {
        GPT_ChksumCrc32Initialize();
        uVar1 = *(ulong *)(param_2 + 2);
        *(undefined4 *)(param_2 + 2) = 0;
        uVar2 = GPT_ChksumCrc32((uchar *)param_2,0x5c);
        if (uVar1 != uVar2) {
          pbVar3 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                 "Checksum GPT HEADER sector failed.");
          std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar3,FUN_1800083e0);
          CLogWriter::Log("Checksum GPT HEADER sector failed. should be 0x%x",(ulonglong)uVar2);
          *(ulong *)(param_2 + 2) = uVar1;
          return 0xffffffff;
        }
        *(ulong *)(param_2 + 2) = uVar1;
        return 0;
      }
    }
  }
  pbVar3 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "Verify GPT HEADER sector failed.");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar3,FUN_1800083e0);
  CLogWriter::Log("Verify GPT HEADER sector failed.");
  return 0xffffffff;
}




undefined8 FUN_180007b50(longlong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  GPT_ChksumCrc32Initialize();
  uVar1 = GPT_ChksumCrc32(*(uchar **)(param_1 + 0x210),*(ulong *)(param_1 + 0x218));
  if (uVar1 == param_2) {
    uVar2 = 0;
  }
  else {
    CLogWriter::Log("Checksum PartitionEntryArrayCRC in GPTPartitionTable failed. should be 0x%x",
                    (ulonglong)uVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_180007bb0(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  __int64 _Var5;
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar6;
  undefined8 uVar7;
  int local_58;
  longlong local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  longlong local_30;
  basic_ostream<char,struct_std::char_traits<char>_> *local_28;
  longlong local_20 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_58 = 0;
  lVar4 = FUN_180004cb0(param_2);
  _Var5 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if ((_Var5 < 1) ||
     (_Var5 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4))),
     _Var5 <= lVar4)) {
    local_30 = 0;
  }
  else {
    _Var5 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    local_30 = _Var5 - lVar4;
  }
  local_50 = local_30;
  FUN_180008680(local_20,param_1);
  cVar1 = FUN_1800088d0((longlong)local_20);
  if (cVar1 == '\0') {
    local_58 = 4;
  }
  else {
    uVar3 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((uVar3 & 0x1c0) != 0x40) {
      for (; 0 < local_50; local_50 = local_50 + -1) {
        cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                          ((basic_ios<char,struct_std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        pbVar6 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,struct_std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        local_40 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc(pbVar6,cVar1);
        uVar7 = FUN_180008f70();
        local_3c = (int)uVar7;
        bVar2 = eq_int_type(&local_3c,&local_40);
        if (bVar2) {
          local_58 = 4;
          break;
        }
      }
    }
    if (local_58 == 0) {
      pbVar6 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,struct_std::char_traits<char>_> *)
                          (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      _Var5 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn(pbVar6,param_2,lVar4)
      ;
      if (_Var5 != lVar4) {
        local_58 = 4;
      }
    }
    if (local_58 == 0) {
      for (; 0 < local_50; local_50 = local_50 + -1) {
        cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                          ((basic_ios<char,struct_std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        pbVar6 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,struct_std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        local_38 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc(pbVar6,cVar1);
        uVar7 = FUN_180008f70();
        local_34 = (int)uVar7;
        bVar2 = eq_int_type(&local_34,&local_38);
        if (bVar2) {
          local_58 = 4;
          break;
        }
      }
    }
    std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  }
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),local_58,false);
  local_28 = param_1;
  FUN_180008810(local_20);
  return local_28;
}




undefined1 FUN_180007f20(void)

{
  return 0;
}




void FUN_180007f30(undefined8 param_1,longlong param_2,longlong param_3)

{
  FUN_180008a00(param_2,param_3);
  return;
}




void FUN_180007f60(longlong *param_1,longlong param_2)

{
  undefined8 local_res10;
  
  for (local_res10 = param_2; 0 < local_res10; local_res10 = local_res10 + -1) {
    FUN_180008990(param_1);
  }
  for (; local_res10 < 0; local_res10 = local_res10 + 1) {
    FUN_1800089e0(param_1);
  }
  return;
}




longlong FUN_180007fc0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  allocator<struct_std::_Container_proxy> *paVar2;
  _Container_proxy *p_Var3;
  _Container_proxy *p_Var4;
  
  lVar1 = FUN_180008a70(param_1,param_2,param_3);
  paVar2 = (allocator<struct_std::_Container_proxy> *)FUN_1800047c0(param_1);
  p_Var3 = (_Container_proxy *)FUN_180003e70(param_4);
  p_Var4 = (_Container_proxy *)FUN_180003e70(lVar1 + 0x10);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar2,p_Var4,p_Var3);
  return lVar1;
}




longlong FUN_180008050(ulonglong param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x90;
  if (0x1c71c71c71c71c7 < param_1) {
    local_18 = -1;
  }
  return local_18;
}




void FUN_1800080a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 8);
  uVar2 = FUN_180003e70(param_3);
  lVar3 = FUN_180007fc0(param_1,param_2,(longlong)plVar1,uVar2);
  FUN_180008b30(param_1,1);
  *(longlong *)(param_2 + 8) = lVar3;
  *plVar1 = lVar3;
  return;
}




longlong *
FUN_180008120(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5,ulonglong param_6)

{
  char cVar1;
  bool bVar2;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong lVar3;
  longlong *plVar4;
  longlong local_res18;
  longlong local_res20;
  longlong local_50;
  longlong local_48;
  longlong local_40;
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
  FUN_180008430(&local_50,param_3,param_6 >> 1);
  FUN_180008120(param_1,&local_28,local_res18,local_50,param_5,param_6 >> 1);
  local_res18 = *extraout_RAX;
  FUN_180008120(param_1,&local_20,local_50,local_res20,param_5,param_6 - (param_6 >> 1));
  local_50 = *extraout_RAX_00;
  local_48 = local_res18;
  bVar2 = true;
  do {
    local_40 = FUN_180008900(&local_res18);
    lVar3 = FUN_180008900(&local_50);
    cVar1 = FUN_180007f30(param_5,lVar3,local_40);
    if (cVar1 == '\0') {
      FUN_180008990(&local_res18);
      plVar4 = &local_50;
      bVar2 = FUN_180008850(&local_res18,plVar4);
      if (bVar2) {
        *param_2 = local_48;
        return plVar4;
      }
    }
    else {
      if (bVar2) {
        local_48 = local_50;
      }
      plVar4 = FUN_180008940(&local_50,local_18);
      local_38 = *plVar4;
      local_30 = local_res18;
      FUN_180009060(param_1,local_res18,param_1,local_38);
      plVar4 = &local_res20;
      bVar2 = FUN_180008850(&local_50,plVar4);
      if (bVar2) {
        *param_2 = local_48;
        return plVar4;
      }
    }
    bVar2 = false;
  } while( true );
}




void FUN_180008360(longlong *param_1,longlong param_2)

{
  FUN_180007f60(param_1,param_2);
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
  
  puVar1 = (undefined1 *)FUN_1800043a0(0x80,param_2);
  puVar2 = (undefined1 *)FUN_180003e70(param_3);
  for (lVar3 = 0x80; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_1800083e0(basic_ostream<char,struct_std::char_traits<char>_> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::widen
                    ((basic_ios<char,struct_std::char_traits<char>_> *)
                     (param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<char,struct_std::char_traits<char>_>::put(param_1,cVar1);
  std::basic_ostream<char,struct_std::char_traits<char>_>::flush(param_1);
  return param_1;
}




longlong * FUN_180008430(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong local_res10;
  longlong local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_180008360(&local_res10,param_3);
  *param_1 = local_res10;
  return param_1;
}




void FUN_180008470(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res10 [24];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [3];
  
  local_res10[0] = param_2;
  puVar1 = (ulonglong *)FUN_180008bd0(param_1);
  plVar2 = FUN_180008eb0(param_1,&local_28);
  plVar3 = FUN_180008dc0(param_1,&local_20);
  FUN_180008120(param_1,local_18,*plVar3,*plVar2,local_res10,*puVar1);
  return;
}




undefined8 * FUN_1800084f0(undefined8 *param_1,undefined8 param_2)

{
  FUN_180008570(param_1,param_2);
  return param_1;
}




undefined8 * FUN_180008530(undefined8 *param_1,undefined8 param_2)

{
  FUN_1800084f0(param_1,param_2);
  return param_1;
}




undefined8 * FUN_180008570(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_180004140();
  return param_1;
}




undefined1 * FUN_1800085b0(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x80; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




longlong * FUN_1800085e0(longlong *param_1,longlong param_2)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
  *param_1 = param_2;
  pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
  if (pbVar1 != (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
    pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
    (**(code **)(*(longlong *)pbVar1 + 8))(pbVar1);
  }
  return param_1;
}




longlong *
FUN_180008680(longlong *param_1,basic_ostream<char,struct_std::char_traits<char>_> *param_2)

{
  bool bVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  
  FUN_1800085e0(param_1,(longlong)param_2);
  bVar1 = std::ios_base::good((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
  if (bVar1) {
    pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        (param_2 + *(int *)(*(longlong *)param_2 + 4)));
    if (pbVar2 != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0) {
      pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                         ((basic_ios<char,struct_std::char_traits<char>_> *)
                          (param_2 + *(int *)(*(longlong *)param_2 + 4)));
      if (pbVar2 != param_2) {
        pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                           ((basic_ios<char,struct_std::char_traits<char>_> *)
                            (param_2 + *(int *)(*(longlong *)param_2 + 4)));
        std::basic_ostream<char,struct_std::char_traits<char>_>::flush(pbVar2);
      }
    }
  }
  bVar1 = std::ios_base::good((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
  *(bool *)(param_1 + 1) = bVar1;
  return param_1;
}




void FUN_180008780(longlong *param_1)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
  pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
  if (pbVar1 != (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
    pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
    (**(code **)(*(longlong *)pbVar1 + 0x10))(pbVar1);
  }
  return;
}




void FUN_180008810(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,struct_std::char_traits<char>_> *)*param_1);
  }
  FUN_180008780(param_1);
  return;
}




bool FUN_180008850(longlong *param_1,longlong *param_2)

{
  return *param_1 == *param_2;
}




bool FUN_180008890(longlong *param_1,longlong *param_2)

{
  bool local_18;
  
  local_18 = FUN_180008850(param_1,param_2);
  local_18 = !local_18;
  return local_18;
}




undefined1 FUN_1800088d0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 8);
}




longlong FUN_1800088e0(longlong *param_1)

{
  return *param_1 + 0x10;
}




void FUN_180008900(longlong *param_1)

{
  FUN_1800088e0(param_1);
  return;
}




undefined8 * FUN_180008920(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 * FUN_180008940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_180008990(param_1);
  *param_2 = uVar1;
  return param_2;
}




undefined8 * FUN_180008990(undefined8 *param_1)

{
  FUN_180008920(param_1);
  return param_1;
}




longlong * FUN_1800089b0(longlong *param_1)

{
  *param_1 = *(longlong *)(*param_1 + 8);
  return param_1;
}




longlong * FUN_1800089e0(longlong *param_1)

{
  FUN_1800089b0(param_1);
  return param_1;
}




bool FUN_180008a00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180008a60(param_1);
  lVar2 = FUN_180008a60(param_2);
  return lVar1 < lVar2;
}




undefined8 FUN_180008a50(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_180008a60(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




longlong FUN_180008a70(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res10;
  longlong local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  uVar1 = FUN_1800047c0(param_1);
  lVar2 = allocate(uVar1,1);
  if (local_res10 == 0) {
    local_res10 = lVar2;
    local_res18[0] = lVar2;
  }
  uVar1 = FUN_1800047c0(param_1);
  uVar3 = FUN_180003e70(lVar2);
  construct<>(uVar1,uVar3,&local_res10);
  uVar3 = FUN_180003e70(lVar2 + 8);
  construct<>(uVar1,uVar3,local_res18);
  return lVar2;
}




void FUN_180008b30(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_180008fd0(param_1);
  plVar2 = (longlong *)FUN_180008bd0(param_1);
  if ((lVar1 - *plVar2) - 1U < param_2) {
    std::_Xlength_error("list<T> too long");
  }
  plVar2 = (longlong *)FUN_180008bd0(param_1);
  *plVar2 = *plVar2 + param_2;
  return;
}




void FUN_180008bb0(undefined8 param_1)

{
  FUN_1800047c0(param_1);
  return;
}




longlong FUN_180008bd0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1800047c0(param_1);
  return lVar1 + 8;
}




void FUN_180008bf0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  char cVar1;
  
  FUN_1800047c0(param_3);
  FUN_1800047c0(param_1);
  cVar1 = FUN_180007f20();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  FUN_180008c70(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




void FUN_180008c70(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_180003e70(param_3);
  if (param_1 != lVar2) {
    FUN_180008b30(param_1,param_6);
    plVar3 = (longlong *)FUN_180008bd0(param_3);
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




undefined8 * FUN_180008d50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  FUN_1800084f0(param_2,*puVar1);
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
  
  _Var1 = FUN_180008050(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




undefined8 * FUN_180008dc0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180003e70(uVar1);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  FUN_180008530(param_2,*(undefined8 *)*puVar2);
  return param_2;
}




undefined8 * FUN_180008e20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180003e70(uVar1);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  FUN_1800084f0(param_2,*(undefined8 *)*puVar2);
  return param_2;
}




void FUN_180008e80(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x90);
  return;
}




undefined8 * FUN_180008eb0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180003e70(uVar1);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  FUN_180008530(param_2,*puVar2);
  return param_2;
}




undefined8 * FUN_180008f10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180003e70(uVar1);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  FUN_1800084f0(param_2,*puVar2);
  return param_2;
}




undefined8 FUN_180008f70(void)

{
  return 0xffffffff;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static bool __cdecl std::_Narrow_char_traits<char,int>::eq_int_type(int const &
   __ptr64,int const & __ptr64)
    public: static bool __cdecl std::char_traits<char>::eq_int_type(int const & __ptr64,int const &
   __ptr64)
   
   Library: Visual Studio */

bool eq_int_type(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}




undefined8 FUN_180008fc0(void)

{
  return 0x1c71c71c71c71c7;
}




void FUN_180008fd0(undefined8 param_1)

{
  FUN_1800047c0(param_1);
  FUN_180008fc0();
  return;
}




void FUN_180008ff0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_10 [2];
  
  plVar2 = FUN_180008d50(param_1,local_10);
  lVar1 = *plVar2;
  uVar3 = FUN_180003e70(param_2);
  FUN_1800080a0(param_1,lVar1,uVar3);
  return;
}




void FUN_180009040(longlong param_1)

{
  undefined1 local_18;
  
  FUN_180008470(param_1,local_18);
  return;
}




void FUN_180009060(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

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
  plVar2 = FUN_180008eb0(param_3,local_10);
  bVar1 = FUN_180008890(&local_res20,plVar2);
  if (!bVar1) {
    return;
  }
  local_18 = local_res20;
  FUN_180008920(&local_18);
  lVar3 = FUN_180003e70(local_res18);
  if (param_1 == lVar3) {
    bVar1 = FUN_180008890(&local_res10,&local_res20);
    if (!bVar1) {
      return;
    }
    bVar1 = FUN_180008890(&local_res10,&local_18);
    if (!bVar1) {
      return;
    }
  }
  FUN_180008bf0(param_1,local_res10,local_res18,local_res20,local_18,1);
  return;
}




undefined8 FUN_180009120(undefined8 param_1)

{
  return param_1;
}




void FUN_180009140(void)

{
  return;
}




void FUN_180009150(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_278 [32];
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  undefined8 local_248;
  longlong local_238 [68];
  ulonglong local_18;
  
  local_248 = 0xfffffffffffffffe;
  local_18 = DAT_180053018 ^ (ulonglong)auStack_278;
  FUN_180006d50(local_238,param_2,param_3);
  local_258 = 0;
  FUN_180009320(param_4);
  local_258 = FUN_180006e20(local_238);
  if (local_258 == 0) {
    local_258 = FUN_180007640((longlong)local_238,param_4);
    if (local_258 == 0) {
      FUN_180007700(param_4);
      local_24c = local_258;
      FUN_180006dc0((longlong)local_238);
    }
    else {
      local_250 = local_258;
      FUN_180006dc0((longlong)local_238);
    }
  }
  else {
    local_254 = local_258;
    FUN_180006dc0((longlong)local_238);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_278);
  return;
}




void FUN_180009260(undefined8 param_1,void *param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180003e70(param_2);
  FUN_180004140();
  FUN_180003e70((longlong)param_2 + 8);
  FUN_180004140();
  FUN_180008e80(local_18,param_2,1);
  return;
}




void FUN_1800092d0(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180003e70((longlong)param_2 + 0x10);
  FUN_180004140();
  FUN_180009260(uVar1,param_2);
  return;
}




void FUN_180009320(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  local_38 = *(undefined8 **)*puVar1;
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  *(undefined8 *)*puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  plVar3 = (longlong *)FUN_180008bb0(param_1);
  *(undefined8 *)(*plVar3 + 8) = *puVar1;
  puVar1 = (undefined8 *)FUN_180008bd0(param_1);
  *puVar1 = 0;
  while( true ) {
    plVar3 = (longlong *)FUN_180008bb0(param_1);
    if (local_38 == (undefined8 *)*plVar3) break;
    puVar1 = (undefined8 *)*local_38;
    FUN_1800092d0(param_1,local_38);
    local_38 = puVar1;
  }
  return;
}




undefined8 FUN_180009400(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_180009420(undefined8 param_1)

{
  return param_1;
}




undefined * FUN_180009440(void)

{
  return &DAT_180037aa0;
}




undefined8 FUN_180009450(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

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
      local_48 = FUN_18000ad50();
      local_50 = param_2 + (int)local_58;
      for (; ((*local_50 == *local_48 && (*local_50 != '\0')) && (*local_48 != '\0'));
          local_48 = local_48 + 1) {
        local_50 = local_50 + 1;
      }
      if (*local_50 != *local_48) {
        local_38 = (char *)FUN_18000a240(0,pcVar1,param_3,param_4);
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




IObject * FUN_180009610(IObject *param_1,IObject *param_2,longlong param_3,uint param_4)

{
  FUN_18000aa70(param_1,param_2);
  *(undefined ***)param_1 = CMBR::vftable;
  *(IObject **)(param_1 + 8) = param_2;
  FUN_18000aa40((undefined8 *)(param_1 + 0x10));
  FUN_180009d40((longlong)param_1,param_3,param_4);
  return param_1;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180009690(IObject *param_1,IObject *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_1048 [32];
  undefined2 *local_1028;
  undefined8 local_1020;
  undefined1 local_1018 [510];
  undefined2 local_e1a [1793];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1800096a5;
  local_1020 = 0xfffffffffffffffe;
  local_18 = DAT_180053018 ^ (ulonglong)auStack_1048;
  FUN_18000aa70(param_1,param_2);
  *(undefined ***)param_1 = CMBR::vftable;
  *(IObject **)(param_1 + 8) = param_2;
  FUN_18000aa40((undefined8 *)(param_1 + 0x10));
  puVar2 = local_1018;
  for (lVar1 = 0x1000; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_1028 = local_e1a;
  local_e1a[0] = 0xaa55;
  FUN_180009d40((longlong)param_1,(longlong)local_1018,0x1000);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1048);
  return;
}




void FUN_180009780(undefined8 *param_1)

{
  *param_1 = CMBR::vftable;
  FUN_18000b230(param_1 + 2);
  FUN_18000aae0(param_1 + 2);
  return;
}




undefined4 FUN_1800097d0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  uint local_28;
  undefined4 local_24;
  longlong local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  bVar1 = FUN_18000b2e0(param_1 + 0x10);
  if (bVar1) {
    local_24 = 0xffffffff;
  }
  else {
    local_28 = 0;
    FUN_18000b190(param_1 + 0x10,&local_20);
    while( true ) {
      plVar3 = FUN_18000b390(param_1 + 0x10,local_10);
      bVar1 = FID_conflict_operator__(&local_20,plVar3);
      if (!bVar1) break;
      local_18 = FUN_18000ac00(&local_20);
      cVar2 = FUN_18002e150(local_18);
      if ((cVar2 != '\0') && (cVar2 = FUN_18002e110(local_18), cVar2 != '\0')) {
        local_28 = local_28 + 1;
      }
      FUN_18000ac30(&local_20);
    }
    if (local_28 < 2) {
      local_24 = 0;
    }
    else {
      local_24 = 0xffffffff;
    }
  }
  return local_24;
}




longlong FUN_1800098c0(longlong param_1,undefined4 *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = FUN_18000b2e0(param_1 + 0x10);
  if (bVar1) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18000b4b0(param_1 + 0x10);
    *param_2 = (int)lVar2;
    lVar2 = FUN_18000abd0(param_1 + 0x10,0);
  }
  return lVar2;
}




undefined8 FUN_180009920(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_180009940(longlong *param_1,undefined1 *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong local_38;
  undefined1 *local_30;
  undefined8 local_28 [3];
  
  FUN_180008f10(param_1 + 2,&local_38);
  while( true ) {
    plVar3 = FUN_18000b330(param_1 + 2,local_28);
    bVar1 = FID_conflict_operator__(&local_38,plVar3);
    if (!bVar1) {
      FUN_18000b480(param_1 + 2,param_2);
      (**(code **)(*param_1 + 0x28))(param_1);
      return;
    }
    local_30 = (undefined1 *)FUN_18000ac10(&local_38);
    cVar2 = FUN_18002e110((longlong)local_30);
    if (cVar2 == '\0') break;
    FUN_18000ac50(&local_38);
  }
  puVar5 = local_30;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}




void FUN_180009a20(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  char local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  longlong local_68;
  longlong local_60;
  uint local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  undefined8 local_38;
  longlong local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_180053018 ^ (ulonglong)auStack_98;
  local_48 = (**(code **)(*param_1 + 0x38))(param_1);
  local_50 = *param_2;
  lVar2 = (**(code **)(local_50 + 0x38))(param_2);
  if (local_48 == lVar2) {
    local_74 = 0;
    local_68 = (**(code **)(*param_2 + 0x30))(param_2,&local_74);
    if (((local_68 != 0) && (local_74 != 0)) && (local_74 < 5)) {
      plVar3 = local_30;
      for (lVar2 = 0x20; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined1 *)plVar3 = 0;
        plVar3 = (longlong *)((longlong)plVar3 + 1);
      }
      for (local_6c = 0; local_6c < local_74; local_6c = local_6c + 1) {
        local_30[local_6c] = local_68;
        local_68 = local_68 + 0x10;
      }
      local_58 = local_74;
      FUN_18000b190(param_1 + 2,&local_60);
      while( true ) {
        plVar3 = FUN_18000b390(param_1 + 2,&local_38);
        bVar1 = FID_conflict_operator__(&local_60,plVar3);
        if (!bVar1) break;
        local_78 = '\0';
        for (local_70 = 0; local_70 < local_74; local_70 = local_70 + 1) {
          if (local_30[local_70] != 0) {
            local_40 = (ulonglong)local_70;
            pcVar4 = (char *)FUN_18000ac00(&local_60);
            uVar5 = FUN_18002e320(pcVar4,(char *)local_30[local_40]);
            if ((uVar5 & 0xff) != 0) {
              local_30[local_70] = 0;
              local_78 = '\x01';
              break;
            }
          }
        }
        if (local_78 == '\0') break;
        FUN_18000ac30(&local_60);
      }
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_98);
  return;
}




undefined8 FUN_180009c30(longlong param_1,longlong param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  void *_Src;
  undefined4 local_28;
  
  if ((param_2 == 0) || (param_3 < 0x200)) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined2 *)(param_2 + 0x1fe) = 0xaa55;
    for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
      lVar3 = FUN_18000abd0(param_1 + 0x10,(ulonglong)local_28);
      cVar1 = FUN_18002e110(lVar3);
      if (cVar1 == '\0') {
        memset((void *)(param_2 + 0x1be + (ulonglong)local_28 * 0x10),0,0x10);
      }
      else {
        _Src = (void *)FUN_18000abd0(param_1 + 0x10,(ulonglong)local_28);
        memcpy((void *)(param_2 + 0x1be + (ulonglong)local_28 * 0x10),_Src,0x10);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_180009d40(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 auStack_68 [32];
  uint local_48;
  undefined1 *local_40;
  short *local_38;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_180053018 ^ (ulonglong)auStack_68;
  FUN_18000b230(param_1 + 0x10);
  if ((param_2 != 0) && (0x1ff < param_3)) {
    local_38 = (short *)(param_2 + 0x1fe);
    memset(local_20,0,0x10);
    for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
      if (*local_38 == -0x55ab) {
        local_40 = (undefined1 *)(param_2 + 0x1be + (ulonglong)local_48 * 0x10);
      }
      else {
        local_40 = local_20;
      }
      FUN_18002e0d0(local_30,local_40);
      FUN_18000b450(param_1 + 0x10,local_30);
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




undefined8 FUN_180009e50(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_180009e70(undefined8 param_1)

{
  return param_1;
}




char * FUN_180009e90(void)

{
  return "CExtendMBR";
}




undefined8 FUN_180009ea0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

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
      local_48 = FUN_18000ad50();
      local_50 = param_2 + (int)local_58;
      for (; ((*local_50 == *local_48 && (*local_50 != '\0')) && (*local_48 != '\0'));
          local_48 = local_48 + 1) {
        local_50 = local_50 + 1;
      }
      if (*local_50 != *local_48) {
        local_38 = (char *)FUN_18000a240(0,pcVar1,param_3,param_4);
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




IObject * FUN_18000a060(IObject *param_1,IObject *param_2,longlong param_3,uint param_4)

{
  FUN_180009610(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CExtendMBR::vftable;
  return param_1;
}




IObject * FUN_18000a0c0(IObject *param_1,IObject *param_2)

{
  FUN_180009690(param_1,param_2);
  *(undefined ***)param_1 = CExtendMBR::vftable;
  return param_1;
}




undefined8 FUN_18000a110(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint local_28;
  uint local_24;
  longlong local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  bVar1 = FUN_18000b2e0(param_1 + 0x10);
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    local_24 = 0;
    local_28 = 0;
    FUN_18000b190(param_1 + 0x10,&local_20);
    while( true ) {
      plVar4 = FUN_18000b390(param_1 + 0x10,local_10);
      bVar1 = FID_conflict_operator__(&local_20,plVar4);
      if (!bVar1) break;
      local_18 = FUN_18000ac00(&local_20);
      cVar2 = FUN_18002e110(local_18);
      if (cVar2 != '\0') {
        cVar2 = FUN_18002e150(local_18);
        if (cVar2 == '\0') {
          local_28 = local_28 + 1;
        }
        else {
          local_24 = local_24 + 1;
        }
      }
      FUN_18000ac30(&local_20);
    }
    if (local_28 < 2) {
      if (local_24 < 2) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
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
  FUN_180003e70(param_1);
  FUN_18000aa00(param_1);
  return param_1;
}




void FUN_18000a240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a260(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_18000a260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005b560 == (undefined1 *)0x0) {
    DAT_18005b560 = &DAT_18005b460;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180053238,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005b560,local_18);
  }
  return DAT_18005b560;
}




void FUN_18000a2b0(void)

{
  return;
}




void FUN_18000a2d0(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18000a2b0();
  return;
}




void FUN_18000a320(longlong param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  _Container_proxy *p_Var2;
  
  p_Var1 = (_Container_proxy *)FUN_180003e70(param_2);
  p_Var2 = (_Container_proxy *)FUN_180003e70(*(undefined8 *)(param_1 + 8));
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>
            (*(allocator<struct_std::_Container_proxy> **)(param_1 + 0x10),p_Var2,p_Var1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
  return;
}




void FUN_18000a380(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  _Container_proxy *p_Var3;
  allocator<struct_std::_Container_proxy> *paVar4;
  longlong *plVar5;
  
  p_Var1 = (_Container_proxy *)FUN_180003e70(param_2);
  puVar2 = (undefined8 *)FUN_180008bd0(param_1);
  p_Var3 = (_Container_proxy *)FUN_180003e70(*puVar2);
  paVar4 = (allocator<struct_std::_Container_proxy> *)FUN_1800047c0(param_1);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar4,p_Var3,p_Var1);
  FUN_180008bd0(param_1);
  FUN_180008bd0(param_1);
  FUN_180001c90();
  FUN_180008bd0(param_1);
  plVar5 = (longlong *)FUN_180008bd0(param_1);
  *plVar5 = *plVar5 + 0x10;
  return;
}




longlong FUN_18000a440(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  lVar2 = param_2 - *plVar1 >> 4;
  this = (allocator<struct_std::_Container_proxy> *)FUN_1800047c0(param_1);
  _Var3 = FUN_18000b4b0(param_1);
  _Var4 = FUN_18000b400(param_1);
  if (_Var3 == _Var4) {
    FUN_18000b140();
  }
  uVar5 = FUN_18000ad60(param_1,_Var3 + 1);
  p_Var6 = std::allocator<struct_std::_Container_proxy>::allocate(this,uVar5);
  p_Var7 = (_Container_proxy *)FUN_180003e70(param_3);
  p_Var8 = (_Container_proxy *)FUN_180003e70(p_Var6 + lVar2 * 0x10);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(this,p_Var8,p_Var7);
  plVar1 = (longlong *)FUN_180008bd0(param_1);
  if (param_2 == *plVar1) {
    puVar9 = (undefined8 *)FUN_180008bd0(param_1);
    puVar10 = (undefined8 *)FUN_180008bb0(param_1);
    FUN_18000b0e0(param_1,*puVar10,*puVar9,(CGPTDiskAnalyzer *)p_Var6);
  }
  else {
    puVar9 = (undefined8 *)FUN_180008bb0(param_1);
    FUN_18000b0a0(param_1,*puVar9,param_2,(CGPTDiskAnalyzer *)p_Var6);
    puVar9 = (undefined8 *)FUN_180008bd0(param_1);
    FUN_18000b0a0(param_1,param_2,*puVar9,(CGPTDiskAnalyzer *)(p_Var6 + lVar2 * 0x10 + 0x10));
  }
  FUN_18000adf0(param_1,(longlong)p_Var6,_Var3 + 1,uVar5);
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  return lVar2 * 0x10 + *plVar1;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<16>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<16>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x10;
  if (0xfffffffffffffff < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




longlong FUN_18000a6d0(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1 >> 4;
}




void FUN_18000a700(longlong *param_1,longlong *param_2)

{
  FUN_18000a6d0(param_1,param_2);
  return;
}




undefined8 FUN_18000a730(undefined8 param_1)

{
  return param_1;
}




void FUN_18000a750(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




CGPTDiskAnalyzer *
FUN_18000a770(undefined8 param_1,undefined8 param_2,CGPTDiskAnalyzer *param_3,undefined8 param_4)

{
  CGPTDiskAnalyzer *pCVar1;
  undefined8 uVar2;
  CGPTDiskAnalyzer *local_res18;
  undefined8 local_res20;
  CGPTDiskAnalyzer local_38;
  undefined1 local_37;
  CGPTDiskAnalyzer local_36 [6];
  longlong local_30;
  CGPTDiskAnalyzer *local_28;
  longlong local_20;
  CGPTDiskAnalyzer *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_30 = FUN_180003e70(param_1);
  local_20 = FUN_180003e70(param_2);
  pCVar1 = (CGPTDiskAnalyzer *)FUN_18000a700(&local_30,&local_20);
  local_28 = CGPTDiskAnalyzer::operator=(local_res18,pCVar1);
  local_18 = &local_38;
  FUN_18000a730(&local_37);
  CGPTDiskAnalyzer::operator=(local_18,local_36);
  uVar2 = FUN_18000a840(local_30,local_20,local_28,local_res20);
  FUN_18000a750(&local_res18,uVar2);
  return local_res18;
}




undefined8 FUN_18000a840(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_28 [5];
  
  FUN_18000a990(local_28,param_3,param_4);
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 0x10) {
    uVar1 = FUN_180003e70(local_res8);
    FUN_18000a320((longlong)local_28,uVar1);
  }
  uVar1 = FUN_18000afb0(local_28);
  FUN_18000aaa0();
  return uVar1;
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
  
  puVar1 = (undefined1 *)FUN_1800043a0(0x10,param_2);
  puVar2 = (undefined1 *)FUN_180003e70(param_3);
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}




void FUN_18000a920(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_18000af40(param_1);
  if (bVar1) {
    uVar2 = FUN_180003e70(param_2);
    FUN_18000a380(param_1,uVar2);
  }
  else {
    uVar2 = FUN_180003e70(param_2);
    plVar3 = (longlong *)FUN_180008bd0(param_1);
    FUN_18000a440(param_1,*plVar3,uVar2);
  }
  return;
}




undefined8 * FUN_18000a990(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18000a9d0(undefined8 *param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




undefined8 * FUN_18000aa00(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




undefined8 * FUN_18000aa40(undefined8 *param_1)

{
  FUN_18000a9d0(param_1);
  return param_1;
}




IObject * FUN_18000aa70(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IMBR::vftable;
  return param_1;
}




void FUN_18000aaa0(void)

{
  FUN_18000a2d0();
  return;
}




void FUN_18000aae0(undefined8 param_1)

{
  FUN_18000afd0(param_1);
  return;
}




void FUN_18000ab10(undefined8 *param_1)

{
  FUN_180009780(param_1);
  return;
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
  FUN_180004140();
  return *param_1 == *param_2;
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




longlong FUN_18000abd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  return param_2 * 0x10 + *plVar1;
}




undefined8 FUN_18000ac00(undefined8 *param_1)

{
  return *param_1;
}




void FUN_18000ac10(undefined8 *param_1)

{
  FUN_18000ac00(param_1);
  return;
}




longlong * FUN_18000ac30(longlong *param_1)

{
  *param_1 = *param_1 + 0x10;
  return param_1;
}




longlong * FUN_18000ac50(longlong *param_1)

{
  FUN_18000ac30(param_1);
  return param_1;
}




undefined8 * FUN_18000ac70(undefined8 *param_1,uint param_2)

{
  FUN_18000ab10(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000acb0(undefined8 *param_1,uint param_2)

{
  FUN_180009780(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000acf0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180009ea0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000ad20(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180009450(param_1,param_2,param_3,param_4);
  return;
}




undefined * FUN_18000ad50(void)

{
  return &DAT_180053000;
}




ulonglong FUN_18000ad60(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_18000b1f0(param_1);
  _Var2 = FUN_18000b400(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_18000adf0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180004880(param_1);
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  if (*plVar1 != 0) {
    FUN_180008bd0(param_1);
    FUN_180008bb0(param_1);
    FUN_18000af00(param_1);
    lVar2 = FUN_18000b1f0(param_1);
    puVar3 = (undefined8 *)FUN_180008bb0(param_1);
    uVar4 = FUN_1800047c0(param_1);
    FUN_18000b2b0(uVar4,(void *)*puVar3,lVar2);
  }
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180008bd0(param_1);
  *plVar1 = param_2 + param_3 * 0x10;
  plVar1 = (longlong *)FUN_18000af90(param_1);
  *plVar1 = param_2 + param_4 * 0x10;
  return;
}




void FUN_18000af00(undefined8 param_1)

{
  FUN_1800047c0(param_1);
  FUN_18000a2d0();
  return;
}




bool FUN_18000af40(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_18000af90(param_1);
  plVar2 = (longlong *)FUN_180008bd0(param_1);
  return *plVar1 != *plVar2;
}




longlong FUN_18000af90(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1800047c0(param_1);
  return lVar1 + 0x10;
}




undefined8 FUN_18000afb0(undefined8 *param_1)

{
  *param_1 = param_1[1];
  return param_1[1];
}




void FUN_18000afd0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180004880(param_1);
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  if (*plVar1 != 0) {
    FUN_180008bd0(param_1);
    FUN_180008bb0(param_1);
    FUN_18000af00(param_1);
    lVar2 = FUN_18000b1f0(param_1);
    puVar3 = (undefined8 *)FUN_180008bb0(param_1);
    uVar4 = FUN_1800047c0(param_1);
    FUN_18000b2b0(uVar4,(void *)*puVar3,lVar2);
    puVar3 = (undefined8 *)FUN_180008bb0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_180008bd0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_18000af90(param_1);
    *puVar3 = 0;
  }
  return;
}




void FUN_18000b0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                  CGPTDiskAnalyzer *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_18000a770(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_18000b0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                  CGPTDiskAnalyzer *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18000b0a0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000b140(void)

{
  std::_Xlength_error("vector<T> too long");
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




undefined8 * FUN_18000b190(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180003e70(uVar1);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  FUN_180008570(param_2,*puVar2);
  return param_2;
}




longlong FUN_18000b1f0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_18000af90(param_1);
  plVar2 = (longlong *)FUN_180008bb0(param_1);
  return *plVar1 - *plVar2 >> 4;
}




void FUN_18000b230(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_180004880(param_1);
  FUN_180008bd0(param_1);
  FUN_180008bb0(param_1);
  FUN_18000af00(param_1);
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  puVar2 = (undefined8 *)FUN_180008bd0(param_1);
  *puVar2 = *puVar1;
  return;
}




void FUN_18000b2b0(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x10);
  return;
}




bool FUN_18000b2e0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  plVar2 = (longlong *)FUN_180008bd0(param_1);
  return *plVar1 == *plVar2;
}




undefined8 * FUN_18000b330(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180003e70(uVar1);
  puVar2 = (undefined8 *)FUN_180008bd0(param_1);
  FUN_1800084f0(param_2,*puVar2);
  return param_2;
}




undefined8 * FUN_18000b390(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180003e70(uVar1);
  puVar2 = (undefined8 *)FUN_180008bd0(param_1);
  FUN_180008570(param_2,*puVar2);
  return param_2;
}




undefined8 FUN_18000b3f0(void)

{
  return 0xfffffffffffffff;
}




__uint64 FUN_18000b400(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_1800047c0(param_1);
  local_18 = FUN_18000b3f0();
  local_10[0] = FUN_180004ce0();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




void FUN_18000b450(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003e70(param_2);
  FUN_18000a920(param_1,uVar1);
  return;
}




void FUN_18000b480(undefined8 param_1,undefined8 param_2)

{
  FUN_18000a920(param_1,param_2);
  return;
}




longlong FUN_18000b4b0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180008bd0(param_1);
  plVar2 = (longlong *)FUN_180008bb0(param_1);
  return *plVar1 - *plVar2 >> 4;
}




void FUN_18000b4f0(undefined8 param_1,uint param_2,longlong *param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStackY_178 [32];
  undefined1 local_138;
  undefined1 local_137;
  longlong *local_130;
  int local_128;
  int local_124;
  longlong *local_120;
  longlong *local_118;
  longlong local_110;
  undefined4 local_108 [2];
  undefined8 local_100 [2];
  undefined8 local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  IStorageDevice *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  IStorageDevice *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong local_70;
  IStorageDevice *local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_180053018 ^ (ulonglong)auStackY_178;
  if ((param_2 & 8) == 0) {
    if ((param_2 & 4) == 0) {
      if ((param_2 & 2) != 0) {
        FUN_18000c620(local_48);
        if (param_4 != 0) {
          FUN_180009120(&local_138);
          FUN_180009150(&local_138,param_3,param_4,(longlong)local_48);
          FUN_180009140();
        }
        local_88 = local_48;
        local_80 = FUN_18000be30(&local_70,&local_88);
        local_78 = local_80;
        local_68 = FUN_18000bb50(local_80);
        FUN_18000c7e0(&local_70);
        FUN_18000c970(local_48);
      }
    }
    else {
      FUN_18000c650(local_58);
      if (param_4 != 0) {
        FUN_18002de30(local_108,0xff,0x3f);
        FUN_18002de80(local_108,param_3,(longlong)local_58);
        FUN_18002de70();
      }
      local_b0 = local_58;
      local_a8 = FUN_18000bee0(&local_98,&local_b0);
      local_a0 = local_a8;
      local_90 = FUN_18000bb50(local_a8);
      FUN_18000c7e0(&local_98);
      FUN_18000c9a0(local_58);
    }
  }
  else {
    local_120 = (longlong *)FUN_180001960("FileSystemAnalyser");
    if (local_120 != (longlong *)0x0) {
      local_110 = 0;
      local_128 = (**(code **)(*local_120 + 0x38))(local_120,param_3,0);
      if ((local_128 == 0) && (local_110 != 0)) {
        FUN_18000c650(local_100);
        local_118 = (longlong *)FUN_180001960("Partition");
        if (local_118 == (longlong *)0x0) {
          local_60 = 0;
          FUN_18000c9a0(local_100);
        }
        else {
          local_130 = (longlong *)(**(code **)(*local_118 + 0x68))(local_118,param_3,0);
          if (local_130 == (longlong *)0x0) {
            local_f0 = 0;
            FUN_18000c9a0(local_100);
          }
          else {
            local_124 = (**(code **)(*local_130 + 0x30))(local_130);
            uVar1 = FUN_18000b950(local_124);
            local_137 = (undefined1)uVar1;
            local_e8 = *local_130;
            lVar2 = (**(code **)(local_e8 + 0x38))(local_130);
            FUN_18000c680(local_30,0xff,0x3f,0,0,lVar2,0,local_137);
            if (local_130 != (longlong *)0x0) {
              local_e0 = local_130;
              free(local_130);
              local_130 = (longlong *)0x0;
            }
            FUN_18000d750(local_100,local_30);
            local_d8 = local_100;
            local_d0 = FUN_18000bee0(&local_c0,&local_d8);
            local_c8 = local_d0;
            local_b8 = FUN_18000bb50(local_d0);
            FUN_18000c7e0(&local_c0);
            FUN_18000c9a0(local_100);
          }
        }
      }
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_178);
  return;
}




undefined8 FUN_18000b950(int param_1)

{
  int iVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  
  iVar1 = param_1 + -1;
  uVar3 = (undefined7)
          ((ulonglong)(&switchD_18000b982::switchdataD_18000b9a4)[iVar1] + 0x180000000 >> 8);
  switch(iVar1) {
  case 0:
    uVar2 = CONCAT71(uVar3,1);
    break;
  case 1:
    uVar2 = CONCAT71(uVar3,6);
    break;
  case 2:
    uVar2 = CONCAT71(uVar3,0xb);
    break;
  case 3:
    uVar2 = CONCAT71(uVar3,7);
    break;
  case 4:
    uVar2 = CONCAT71(uVar3,0x83);
    break;
  case 5:
    uVar2 = CONCAT71(uVar3,0x83);
    break;
  default:
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_18000b9c0(undefined8 *param_1)

{
  FUN_180003e70(param_1);
  FUN_18000c5f0(param_1);
  return param_1;
}




IObject * FUN_18000b9f0(IObject *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000e310(param_1,(IObject *)*param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomObject<class_CPartitionEntryContainer>::vftable;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}




IObject * FUN_18000ba40(IObject *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000e190(param_1,(IObject *)*param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomObject<class_CPartitionEntryContainer>::vftable;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}




undefined8 * FUN_18000ba90(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}




void FUN_18000bab0(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)*param_1)(param_1,param_2);
  return;
}




void FUN_18000bae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000bb00(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_18000bb00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005b680 == (undefined1 *)0x0) {
    DAT_18005b680 = &DAT_18005b580;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180053698,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005b680,local_18);
  }
  return DAT_18005b680;
}




IStorageDevice * FUN_18000bb50(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        FUN_18000cd20(this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




_Container_proxy *
FUN_18000bbf0(undefined8 param_1,_Container_proxy *param_2,_Container_proxy *param_3,
             undefined8 param_4)

{
  _Container_proxy *p_Var1;
  allocator<struct_std::_Container_proxy> *paVar2;
  _Container_proxy *p_Var3;
  _Container_proxy *p_Var4;
  
  p_Var1 = FUN_18000d0a0(param_1,param_2,param_3);
  paVar2 = (allocator<struct_std::_Container_proxy> *)FUN_1800047c0(param_1);
  p_Var3 = (_Container_proxy *)FUN_180003e70(param_4);
  p_Var4 = (_Container_proxy *)FUN_180003e70(p_Var1 + 0x10);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar2,p_Var4,p_Var3);
  return p_Var1;
}




void FUN_18000bc80(undefined8 param_1,void *param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180003e70(param_2);
  FUN_180004140();
  FUN_180003e70((longlong)param_2 + 8);
  FUN_180004140();
  FUN_18000d6c0(local_18,param_2,1);
  return;
}




void FUN_18000bcf0(undefined8 param_1,void *param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180003e70(param_2);
  FUN_180004140();
  FUN_180003e70((longlong)param_2 + 8);
  FUN_180004140();
  FUN_18000d6f0(local_18,param_2,1);
  return;
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




void FUN_18000bdb0(undefined8 param_1,_Container_proxy *param_2,undefined8 param_3)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  _Container_proxy *p_Var3;
  
  p_Var1 = *(_Container_proxy **)(param_2 + 8);
  uVar2 = FUN_180003e70(param_3);
  p_Var3 = FUN_18000bbf0(param_1,param_2,p_Var1,uVar2);
  FUN_18000d290(param_1,1);
  *(_Container_proxy **)(param_2 + 8) = p_Var3;
  *(_Container_proxy **)p_Var1 = p_Var3;
  return;
}




undefined8 * FUN_18000be30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18000c120(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18000c250(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18000bee0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18000c180(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18000c330(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
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
  
  puVar1 = (undefined1 *)FUN_1800043a0(0x20,param_2);
  puVar2 = (undefined1 *)FUN_180003e70(param_3);
  for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
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
  FUN_18000cd60(param_2,0);
  return;
}




undefined8 * FUN_18000c000(undefined8 *param_1)

{
  FUN_18000c3a0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CGPTPartitionInfo,class_std::allocator<class_CGPTPartitionInfo>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000c040(undefined8 *param_1)

{
  FUN_18000c3e0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CGPTPartitionInfo,class_std::allocator<class_CGPTPartitionInfo>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000c070(undefined8 *param_1)

{
  FUN_18000c410(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CMBRPartitionInfo,class_std::allocator<class_CMBRPartitionInfo>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000c0b0(undefined8 *param_1)

{
  FUN_18000c450(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CMBRPartitionInfo,class_std::allocator<class_CMBRPartitionInfo>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000c0e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x10))(*param_2);
  *param_1 = uVar1;
  return param_1;
}




undefined8 * FUN_18000c120(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000c040(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18000c180(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000c0b0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18000c1e0(undefined8 *param_1,longlong param_2)

{
  FUN_18000c480(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CGPTPartitionInfo,class_std::allocator<class_CGPTPartitionInfo>_>*___ptr64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18000c250(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_18000c4c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CGPTPartitionInfo,class_std::allocator<class_CGPTPartitionInfo>_>*___ptr64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18000c2c0(undefined8 *param_1,longlong param_2)

{
  FUN_18000c480(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CMBRPartitionInfo,class_std::allocator<class_CMBRPartitionInfo>_>*___ptr64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18000c330(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_18000c4c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CMBRPartitionInfo,class_std::allocator<class_CMBRPartitionInfo>_>*___ptr64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18000c3a0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CGPTPartitionInfo,class_std::allocator<class_CGPTPartitionInfo>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000c3e0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CGPTPartitionInfo,class_std::allocator<class_CGPTPartitionInfo>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000c410(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CMBRPartitionInfo,class_std::allocator<class_CMBRPartitionInfo>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000c450(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CMBRPartitionInfo,class_std::allocator<class_CMBRPartitionInfo>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000c480(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000c4c0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000c4f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_18000b9c0(param_1);
  uVar1 = FUN_18000d060(param_1);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  *puVar2 = uVar1;
  return param_1;
}




undefined8 * FUN_18000c540(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_18000b9c0(param_1);
  uVar1 = FUN_18000d080(param_1);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  *puVar2 = uVar1;
  return param_1;
}




undefined8 * FUN_18000c590(undefined8 *param_1)

{
  FUN_18000c4f0(param_1);
  return param_1;
}




undefined8 * FUN_18000c5c0(undefined8 *param_1)

{
  FUN_18000c540(param_1);
  return param_1;
}




undefined8 * FUN_18000c5f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}




undefined8 * FUN_18000c620(undefined8 *param_1)

{
  FUN_18000c590(param_1);
  return param_1;
}




undefined8 * FUN_18000c650(undefined8 *param_1)

{
  FUN_18000c5c0(param_1);
  return param_1;
}




void * FUN_18000c680(void *param_1,uint param_2,uint param_3,undefined8 param_4,longlong param_5,
                    longlong param_6,undefined1 param_7,undefined1 param_8)

{
  FUN_18002e490(param_1,param_2,param_3,(int)param_4,param_5,param_6,param_7,param_8);
  *(undefined8 *)((longlong)param_1 + 0x10) = param_4;
  *(undefined8 *)((longlong)param_1 + 0x18) = param_4;
  return param_1;
}




undefined8 * FUN_18000c710(undefined8 *param_1)

{
  *param_1 = dnc::FunctorObjectBase::vftable;
  return param_1;
}




undefined8 * FUN_18000c730(undefined8 *param_1)

{
  *param_1 = dnc::FunctorObjectBase::vftable;
  return param_1;
}




void FUN_18000c750(longlong param_1)

{
  FUN_18000c9d0(param_1);
  return;
}




void FUN_18000c780(longlong *param_1)

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




void FUN_18000c7e0(longlong *param_1)

{
  if (*param_1 != 0) {
    free((void *)*param_1);
  }
  return;
}




void FUN_18000c820(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  FUN_18000d160(param_1,(void *)*puVar1);
  return;
}




void FUN_18000c850(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  FUN_18000d190(param_1,(void *)*puVar1);
  return;
}




void FUN_18000c880(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  FUN_18000d1c0(param_1,(void *)*puVar1);
  return;
}




void FUN_18000c8b0(undefined8 param_1)

{
  FUN_18000c820(param_1);
  return;
}




void FUN_18000c8e0(undefined8 param_1)

{
  FUN_18000c850(param_1);
  return;
}




void FUN_18000c910(undefined8 param_1)

{
  FUN_18000c880(param_1);
  return;
}




void FUN_18000c940(undefined8 param_1)

{
  FUN_18000d310(param_1);
  FUN_18000c8b0(param_1);
  return;
}




void FUN_18000c970(undefined8 param_1)

{
  FUN_18000d330(param_1);
  FUN_18000c8e0(param_1);
  return;
}




void FUN_18000c9a0(undefined8 param_1)

{
  FUN_18000d350(param_1);
  FUN_18000c910(param_1);
  return;
}




void FUN_18000c9d0(longlong param_1)

{
  FUN_18000c940(param_1 + 8);
  return;
}




bool FUN_18000ca00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CGPTPartitionInfo,class_std::allocator<class_CGPTPartitionInfo>_>*___ptr64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_18000ca50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CMBRPartitionInfo,class_std::allocator<class_CMBRPartitionInfo>_>*___ptr64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




void FUN_18000caa0(undefined8 *param_1,undefined8 *param_2)

{
  (*(code *)**(undefined8 **)*param_1)(*param_1,*param_2);
  return;
}




undefined8 FUN_18000cad0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CGPTPartitionInfo,class_std::allocator<class_CGPTPartitionInfo>_>*___ptr64_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_18000cb40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CPartitionEntryContainer>*___ptr64___cdecl(class_std::list<class_CMBRPartitionInfo,class_std::allocator<class_CMBRPartitionInfo>_>*___ptr64_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




IObject * FUN_18000cbb0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4
                       )

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x20);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18000b9f0(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




IObject * FUN_18000cc20(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4
                       )

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x20);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18000ba40(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




void FUN_18000cc90(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)*param_1 + 8))(*param_1,param_2);
  return;
}




void FUN_18000ccc0(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
  return;
}




void FUN_18000ccf0(longlong param_1)

{
  FUN_18000cc90((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}




void * FUN_18000cd20(void *param_1,uint param_2)

{
  FUN_18000c750((longlong)param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_18000cd60(longlong *param_1,uint param_2)

{
  FUN_18000c780(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000cda0(longlong param_1)

{
  FUN_18000ce10(param_1);
  return;
}




void FUN_18000cdc0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000e070(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000cdf0(void)

{
  FUN_18000e060();
  return;
}




undefined4 FUN_18000ce10(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x1c);
}




undefined4 FUN_18000ce30(longlong param_1)

{
  undefined4 local_18;
  
  LOCK();
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  UNLOCK();
  if (*(int *)(param_1 + 0x1c) < 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0x1c);
  }
  return local_18;
}




undefined8
FUN_18000ce70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = ThreadLocalStoragePointer;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18005b570) {
    _Init_thread_header(&DAT_18005b570);
    if (DAT_18005b570 == -1) {
      DAT_18005b568 = (undefined8 *)FUN_180001ef0("Error");
      _Init_thread_footer(&DAT_18005b570);
    }
  }
  if ((DAT_18005b568 != (undefined8 *)0x0) && (DAT_18005b578 == (longlong *)0x0)) {
    uVar1 = FUN_18000bae0(0,pvVar2,param_3,param_4);
    DAT_18005b578 = (longlong *)FUN_18000bab0(DAT_18005b568,uVar1);
  }
  if (DAT_18005b578 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_18005b578 + 0x28))(DAT_18005b578);
  }
  return uVar1;
}




void FUN_18000cf30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_3;
  uVar3 = param_4;
  lVar1 = __RTtypeid(param_1);
  uVar2 = FUN_180002130(lVar1,param_2,uVar2,uVar3);
  FUN_18000cfb0(0xfffffff6,uVar2,param_3,param_4);
  return;
}




undefined4
FUN_18000cfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000ce70(param_1,param_2,param_3,param_4);
  return (int)param_1;
}




int FUN_18000cff0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_18000ce30((longlong)param_1);
  if ((iVar1 == 0) && (param_1 != (void *)0x0)) {
    FUN_18000cd20(param_1,1);
  }
  return iVar1;
}




void FUN_18000d060(undefined8 param_1)

{
  FUN_180008a70(param_1,0,0);
  return;
}




void FUN_18000d080(undefined8 param_1)

{
  FUN_18000d0a0(param_1,(_Container_proxy *)0x0,(_Container_proxy *)0x0);
  return;
}




_Container_proxy *
FUN_18000d0a0(undefined8 param_1,_Container_proxy *param_2,_Container_proxy *param_3)

{
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  _Container_proxy *local_res10;
  _Container_proxy *local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  this = (allocator<struct_std::_Container_proxy> *)FUN_1800047c0(param_1);
  p_Var1 = std::allocator<struct_std::_Container_proxy>::allocate(this,1);
  if (local_res10 == (_Container_proxy *)0x0) {
    local_res10 = p_Var1;
    local_res18[0] = p_Var1;
  }
  uVar2 = FUN_1800047c0(param_1);
  uVar3 = FUN_180003e70(p_Var1);
  construct<>(uVar2,uVar3,&local_res10);
  uVar3 = FUN_180003e70(p_Var1 + 8);
  construct<>(uVar2,uVar3,local_res18);
  return p_Var1;
}




void FUN_18000d160(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_18000bc80(uVar1,param_2);
  return;
}




void FUN_18000d190(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180009260(uVar1,param_2);
  return;
}




void FUN_18000d1c0(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_18000bcf0(uVar1,param_2);
  return;
}




void FUN_18000d1f0(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_1800047c0(param_1);
  plVar2 = (longlong *)FUN_180003e70((longlong)param_2 + 0x10);
  destroy<>(uVar1,plVar2);
  FUN_18000bc80(uVar1,param_2);
  return;
}




void FUN_18000d240(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180003e70((longlong)param_2 + 0x10);
  FUN_180004140();
  FUN_18000bcf0(uVar1,param_2);
  return;
}




void FUN_18000d290(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_18000d730(param_1);
  plVar2 = (longlong *)FUN_180008bd0(param_1);
  if ((lVar1 - *plVar2) - 1U < param_2) {
    std::_Xlength_error("list<T> too long");
  }
  plVar2 = (longlong *)FUN_180008bd0(param_1);
  *plVar2 = *plVar2 + param_2;
  return;
}




void FUN_18000d310(undefined8 param_1)

{
  FUN_18000d3a0(param_1);
  return;
}




void FUN_18000d330(undefined8 param_1)

{
  FUN_180009320(param_1);
  return;
}




void FUN_18000d350(undefined8 param_1)

{
  FUN_18000d480(param_1);
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




void FUN_18000d3a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  local_38 = *(undefined8 **)*puVar1;
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  *(undefined8 *)*puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  plVar3 = (longlong *)FUN_180008bb0(param_1);
  *(undefined8 *)(*plVar3 + 8) = *puVar1;
  puVar1 = (undefined8 *)FUN_180008bd0(param_1);
  *puVar1 = 0;
  while( true ) {
    plVar3 = (longlong *)FUN_180008bb0(param_1);
    if (local_38 == (undefined8 *)*plVar3) break;
    puVar1 = (undefined8 *)*local_38;
    FUN_18000d1f0(param_1,local_38);
    local_38 = puVar1;
  }
  return;
}




void FUN_18000d480(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  local_38 = *(undefined8 **)*puVar1;
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  *(undefined8 *)*puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_180008bb0(param_1);
  plVar3 = (longlong *)FUN_180008bb0(param_1);
  *(undefined8 *)(*plVar3 + 8) = *puVar1;
  puVar1 = (undefined8 *)FUN_180008bd0(param_1);
  *puVar1 = 0;
  while( true ) {
    plVar3 = (longlong *)FUN_180008bb0(param_1);
    if (local_38 == (undefined8 *)*plVar3) break;
    puVar1 = (undefined8 *)*local_38;
    FUN_18000d240(param_1,local_38);
    local_38 = puVar1;
  }
  return;
}




undefined8 * FUN_18000d560(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000c000(puVar1);
  }
  return local_10;
}




undefined8 * FUN_18000d5b0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000c070(puVar1);
  }
  return local_10;
}




undefined8 * FUN_18000d600(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18000c1e0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_18000d660(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18000c2c0(puVar1,param_1);
  }
  return local_20;
}




void FUN_18000d6c0(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x18);
  return;
}




void FUN_18000d6f0(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x30);
  return;
}




undefined8 FUN_18000d720(void)

{
  return 0x555555555555555;
}




void FUN_18000d730(undefined8 param_1)

{
  FUN_1800047c0(param_1);
  FUN_18000d720();
  return;
}




void FUN_18000d750(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_10 [2];
  
  puVar1 = FUN_180008d50(param_1,local_10);
  FUN_18000bdb0(param_1,(_Container_proxy *)*puVar1,param_2);
  return;
}




undefined8 FUN_18000d790(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000d7b0(undefined8 param_1)

{
  return param_1;
}




char * FUN_18000d7d0(void)

{
  return "CPartitionEntry";
}




longlong FUN_18000d7e0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  longlong local_30;
  
  if (param_2 == (char *)0x0) {
    local_30 = 0;
  }
  else {
    local_58 = (uint)(*param_2 == '*');
    local_30 = param_1;
    if (param_2[(int)local_58] != '1') {
      pcVar1 = param_2;
      local_48 = (char *)FUN_18000ddb0(0,param_2,param_3,param_4);
      local_50 = param_2 + (int)local_58;
      for (; ((*local_50 == *local_48 && (*local_50 != '\0')) && (*local_48 != '\0'));
          local_48 = local_48 + 1) {
        local_50 = local_50 + 1;
      }
      if (*local_50 != *local_48) {
        local_38 = (char *)FUN_18000ddd0(0,pcVar1,param_3,param_4);
        local_40 = param_2 + (int)local_58;
        for (; ((*local_40 == *local_38 && (*local_40 != '\0')) && (*local_38 != '\0'));
            local_38 = local_38 + 1) {
          local_40 = local_40 + 1;
        }
        if (*local_40 == *local_38) {
          if (param_1 == 0) {
            local_30 = 0;
          }
          else {
            local_30 = param_1 + 8;
          }
        }
        else {
          local_30 = 0;
        }
      }
    }
  }
  return local_30;
}




IObject * FUN_18000d9d0(IObject *param_1,IObject *param_2)

{
  IObject IVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 extraout_var;
  longlong lVar6;
  IObject *pIVar7;
  
  pIVar7 = param_2;
  FUN_18000dec0(param_1,param_2);
  FUN_18000def0(param_1 + 8,pIVar7);
  *(undefined ***)param_1 = CPartitionEntry::vftable;
  *(undefined ***)(param_1 + 8) = CPartitionEntry::vftable;
  *(undefined8 *)(param_1 + 0x38) = 0;
  IVar1 = (IObject)FUN_18000dff0((longlong)param_2);
  param_1[0x10] = IVar1;
  IVar1 = (IObject)FUN_18000dfd0((byte *)param_2);
  param_1[0x11] = IVar1;
  lVar5 = FUN_18000df20((longlong)param_2);
  *(longlong *)(param_1 + 0x18) = lVar5;
  uVar4 = FUN_18000df50((longlong)param_2);
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(extraout_var,uVar4);
  bVar2 = FUN_18000dff0((longlong)param_2);
  if (bVar2) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar5 = FUN_18000df20((longlong)param_2);
    lVar6 = FUN_18000dfa0((longlong)param_2);
    *(longlong *)(param_1 + 0x28) = lVar5 - lVar6;
  }
  bVar3 = FUN_18000dfb0((longlong)param_2);
  *(uint *)(param_1 + 0x30) = (uint)bVar3;
  return param_1;
}




void FUN_18000daf0(undefined8 *param_1)

{
  *param_1 = CPartitionEntry::vftable;
  param_1[1] = CPartitionEntry::vftable;
  return;
}




IObject * FUN_18000db20(IObject *param_1,IObject *param_2,undefined8 param_3,undefined4 param_4,
                       undefined8 param_5,IObject param_6,IObject param_7)

{
  IObject *pIVar1;
  
  pIVar1 = param_2;
  FUN_18000dec0(param_1,param_2);
  FUN_18000def0(param_1 + 8,pIVar1);
  *(undefined ***)param_1 = CPartitionEntry::vftable;
  *(undefined ***)(param_1 + 8) = CPartitionEntry::vftable;
  param_1[0x10] = param_7;
  param_1[0x11] = param_6;
  *(IObject **)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return param_1;
}




undefined8 FUN_18000dbe0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_18000dc00(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




undefined * FUN_18000dc20(void)

{
  return &DAT_180038658;
}




undefined8 FUN_18000dc40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined1 FUN_18000dc60(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}




undefined1 FUN_18000dc80(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}




undefined4 FUN_18000dca0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_18000dcc0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 9) = param_2;
  return;
}




void FUN_18000dce0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_18000dd00(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_18000dd20(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_18000dd40(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_18000dd60(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}




void FUN_18000dd80(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




undefined8 FUN_18000dda0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}




void FUN_18000ddb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000ddf0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000ddd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000de40(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_18000ddf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005b790 == (undefined1 *)0x0) {
    DAT_18005b790 = &DAT_18005b690;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180053940,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005b790,local_18);
  }
  return DAT_18005b790;
}




undefined1 *
FUN_18000de40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005b8a0 == (undefined1 *)0x0) {
    DAT_18005b8a0 = &DAT_18005b7a0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180053968,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005b8a0,local_18);
  }
  return DAT_18005b8a0;
}




IObject * FUN_18000de90(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IDeviceEntry::vftable;
  return param_1;
}




IObject * FUN_18000dec0(IObject *param_1,IObject *param_2)

{
  FUN_18000de90(param_1,param_2);
  *(undefined ***)param_1 = IPartitionEntry::vftable;
  return param_1;
}




IObject * FUN_18000def0(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IPartitionEntryEditor::vftable;
  return param_1;
}




longlong FUN_18000df20(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_18002e2a0(param_1);
  return (ulonglong)uVar1 + *(longlong *)(param_1 + 0x10);
}




undefined4 FUN_18000df50(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18002e2c0(param_1);
  return uVar1;
}




void FUN_18000df70(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000d7e0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000df94(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000df70(param_1 + -8,param_2,param_3,param_4);
  return;
}




undefined8 FUN_18000dfa0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_18000dfb0(longlong param_1)

{
  FUN_18002e2e0(param_1);
  return;
}




void FUN_18000dfd0(byte *param_1)

{
  FUN_18002e1b0(param_1);
  return;
}




bool FUN_18000dff0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) == 0;
}




undefined8 FUN_18000e040(undefined8 param_1)

{
  return param_1;
}




char * FUN_18000e060(void)

{
  return "CPartitionEntryContainer";
}




undefined8 FUN_18000e070(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

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
      local_28 = (char *)FUN_18000eab0(0,param_2,param_3,param_4);
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




void FUN_18000e190(IObject *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  IStorageDevice *local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong local_60 [3];
  undefined8 local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_60[1] = 0xfffffffffffffffe;
  local_20 = DAT_180053018 ^ (ulonglong)auStack_a8;
  FUN_180011980(param_1,param_2);
  *(undefined ***)param_1 = CPartitionEntryContainer::vftable;
  FUN_180011700((undefined8 *)(param_1 + 8));
  FUN_1800116c0(&local_88);
  plVar2 = FUN_180008dc0(param_2,local_60 + 2);
  local_88 = *plVar2;
  while( true ) {
    plVar2 = FUN_180008eb0(param_2,&local_48);
    bVar1 = FUN_180008890(&local_88,plVar2);
    if (!bVar1) break;
    puVar3 = (undefined1 *)FUN_180008900(&local_88);
    puVar5 = local_40;
    for (lVar4 = 0x20; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    local_70 = FUN_18000f450(local_60,local_40);
    local_68 = local_70;
    local_80 = FUN_18000ec60(local_70);
    FUN_18000c7e0(local_60);
    if (local_80 != (IStorageDevice *)0x0) {
      FUN_18000e690(&local_78,(longlong *)local_80,param_3,param_4);
      FUN_180014470(param_1 + 8,&local_78);
      FUN_18000c780(&local_78);
    }
    FUN_180008990(&local_88);
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStack_a8);
  return;
}




void FUN_18000e310(IObject *param_1,IObject *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_118 [32];
  longlong local_f8;
  IStorageDevice *local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  longlong local_d0 [3];
  undefined8 local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_d0[1] = 0xfffffffffffffffe;
  local_28 = DAT_180053018 ^ (ulonglong)auStack_118;
  FUN_180011980(param_1,param_2);
  *(undefined ***)param_1 = CPartitionEntryContainer::vftable;
  FUN_180011700((undefined8 *)(param_1 + 8));
  FUN_1800116c0(&local_f8);
  plVar2 = FUN_180008dc0(param_2,local_d0 + 2);
  local_f8 = *plVar2;
  while( true ) {
    plVar2 = FUN_180008eb0(param_2,local_b8);
    bVar1 = FUN_180008890(&local_f8,plVar2);
    if (!bVar1) break;
    puVar3 = (undefined1 *)FUN_180008900(&local_f8);
    puVar5 = local_a8;
    for (lVar4 = 0x80; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    local_e0 = FUN_18000f5b0(local_d0,local_a8);
    local_d8 = local_e0;
    local_f0 = FUN_18000ed00(local_e0);
    FUN_18000c7e0(local_d0);
    if (local_f0 != (IStorageDevice *)0x0) {
      FUN_18000e690(&local_e8,(longlong *)local_f0,param_3,param_4);
      FUN_180014470(param_1 + 8,&local_e8);
      FUN_18000c780(&local_e8);
    }
    FUN_180008990(&local_f8);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_118);
  return;
}




IStorageDevice * FUN_18000e490(longlong param_1)

{
  longlong local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  longlong local_20;
  IStorageDevice *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_38 = param_1 + 8;
  local_30 = FUN_18000f660(&local_20,&local_38);
  local_28 = local_30;
  local_18 = FUN_18000eda0(local_30);
  FUN_18000c7e0(&local_20);
  return local_18;
}




void FUN_18000e500(longlong param_1)

{
  FUN_1800144c0(param_1 + 8);
  return;
}




IObject * FUN_18000e520(IObject *param_1,undefined8 *param_2,IObject *param_3)

{
  FUN_18000e6d0(param_1,*param_2,param_3);
  *(undefined ***)param_1 = CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>::vftable;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>::vftable;
  *(undefined ***)(param_1 + 0x48) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




IObject * FUN_18000e5a0(IObject *param_1,undefined8 *param_2,IObject *param_3)

{
  FUN_18000e7c0(param_1,*param_2,param_3);
  *(undefined ***)param_1 = CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable
  ;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  *(undefined ***)(param_1 + 0x10) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  *(undefined ***)(param_1 + 0x18) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  *(undefined ***)(param_1 + 0xc0) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return param_1;
}




IObject * FUN_18000e640(IObject *param_1,undefined8 *param_2)

{
  FUN_180015470(param_1,(IObject *)*param_2);
  *(undefined ***)param_1 = CMomObject<class_CPartitionEntryIterator>::vftable;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}




longlong * FUN_18000e690(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,param_2,param_3,param_4);
  return param_1;
}




IObject * FUN_18000e6d0(IObject *param_1,undefined8 param_2,IObject *param_3)

{
  FUN_18000e760(param_1,param_3);
  FUN_180011960((undefined8 *)(param_1 + 0x48));
  *(undefined ***)param_1 = CMomAggObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 0x48) = CMomAggObject<class_CPartitionEntry>::vftable;
  FUN_180013780((longlong)param_1,param_2);
  return param_1;
}




IObject * FUN_18000e760(IObject *param_1,IObject *param_2)

{
  FUN_180011730(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CPartitionEntry>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




IObject * FUN_18000e7c0(IObject *param_1,undefined8 param_2,IObject *param_3)

{
  FUN_18000e870(param_1,param_3);
  FUN_180011960((undefined8 *)(param_1 + 0xc0));
  *(undefined ***)param_1 = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0xc0) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  FUN_1800137a0((longlong)param_1,param_2);
  return param_1;
}




IObject * FUN_18000e870(IObject *param_1,IObject *param_2)

{
  FUN_180011810(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return param_1;
}




IObject * FUN_18000e8f0(IObject *param_1,IObject *param_2)

{
  FUN_18000e970(param_1,param_2);
  *(undefined ***)param_1 = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return param_1;
}




IObject * FUN_18000e970(IObject *param_1,IObject *param_2)

{
  FUN_1800148c0(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return param_1;
}




IObject * FUN_18000e9f0(IObject *param_1,IObject *param_2)

{
  FUN_18000ea50(param_1,param_2);
  *(undefined ***)param_1 = CMomCloneObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CPartitionEntry>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




IObject * FUN_18000ea50(IObject *param_1,IObject *param_2)

{
  FUN_18000d9d0(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CPartitionEntry>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




void FUN_18000eab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000ead0(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_18000ead0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005b9b0 == (undefined1 *)0x0) {
    DAT_18005b9b0 = &DAT_18005b8b0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180053730,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005b9b0,local_18);
  }
  return DAT_18005b9b0;
}




IStorageDevice * FUN_18000eb20(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        FUN_180012940((undefined8 *)this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_18000ebc0(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        FUN_180012980((undefined8 *)this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_18000ec60(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        FUN_1800129c0((undefined8 *)this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_18000ed00(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        FUN_180012a00((undefined8 *)this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_18000eda0(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      free(this);
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




_Container_proxy *
FUN_18000ee20(undefined8 param_1,_Container_proxy *param_2,_Container_proxy *param_3,
             undefined8 param_4)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_4;
  p_Var1 = FUN_180013b40(param_1,param_2,param_3);
  uVar2 = FUN_1800047c0(param_1);
  uVar3 = FUN_180003e70(param_4);
  uVar4 = FUN_180003e70(p_Var1 + 0x10);
  FUN_18000f710(uVar2,uVar4,uVar3,uVar5);
  return p_Var1;
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




void FUN_18000ef00(undefined8 param_1,_Container_proxy *param_2,undefined8 param_3)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  _Container_proxy *p_Var3;
  
  p_Var1 = *(_Container_proxy **)(param_2 + 8);
  uVar2 = FUN_180003e70(param_3);
  p_Var3 = FUN_18000ee20(param_1,param_2,p_Var1,uVar2);
  FUN_180013c00(param_1,1);
  *(_Container_proxy **)(param_2 + 8) = p_Var3;
  *(_Container_proxy **)p_Var1 = p_Var3;
  return;
}




undefined8 * FUN_18000ef80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800100e0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180010580(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18000f030(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180010140(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180010680(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18000f0e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800101a0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180010770(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18000f190(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180010200(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180010860(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18000f240(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180010260(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180010960(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18000f2f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800102c0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180010a50(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18000f3a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180010320(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180010b30(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18000f450(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180010380(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180010c10(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18000f500(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800103e0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180010cf0(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18000f5b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180010440(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180010dd0(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18000f660(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800104a0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180010eb0(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




void FUN_18000f710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_3;
  plVar1 = (longlong *)FUN_1800043a0(8,param_2);
  puVar2 = (undefined8 *)FUN_180003e70(param_3);
  FUN_18000fb90(plVar1,puVar2,uVar3,param_4);
  return;
}




IObject * FUN_18000f760(IObject *param_1,IObject *param_2)

{
  FUN_18000faa0(param_1,param_2);
  FUN_180011940((undefined8 *)(param_1 + 0x48));
  *(undefined ***)param_1 = CMomAggObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 0x48) = CMomAggObject<class_CPartitionEntry>::vftable;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  return param_1;
}




IObject * FUN_18000f7f0(IObject *param_1,IObject *param_2)

{
  FUN_18000fb00(param_1,param_2);
  FUN_180011940((undefined8 *)(param_1 + 0xc0));
  *(undefined ***)param_1 = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0xc0) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  return param_1;
}




IObject * FUN_18000f8b0(IObject *param_1,IObject *param_2)

{
  FUN_18000f760(param_1,param_2);
  *(undefined ***)param_1 = CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>::vftable;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>::vftable;
  *(undefined ***)(param_1 + 0x48) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




IObject * FUN_18000f920(IObject *param_1,IObject *param_2)

{
  FUN_18000f7f0(param_1,param_2);
  *(undefined ***)param_1 = CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable
  ;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  *(undefined ***)(param_1 + 0x10) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  *(undefined ***)(param_1 + 0x18) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  *(undefined ***)(param_1 + 0xc0) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return param_1;
}




IObject * FUN_18000f9c0(IObject *param_1,IObject *param_2)

{
  FUN_18000e760(param_1,param_2);
  *(undefined ***)param_1 = CMomCloneObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CPartitionEntry>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




IObject * FUN_18000fa20(IObject *param_1,IObject *param_2)

{
  FUN_18000e870(param_1,param_2);
  *(undefined ***)param_1 = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return param_1;
}




IObject * FUN_18000faa0(IObject *param_1,IObject *param_2)

{
  FUN_180011730(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CPartitionEntry>::vftable;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}




IObject * FUN_18000fb00(IObject *param_1,IObject *param_2)

{
  FUN_180011810(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  return param_1;
}




longlong *
FUN_18000fb90(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,(longlong *)*param_2,param_3,param_4);
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

longlong * CTempBuffer<>(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_180013a60(param_1,param_2,param_3,param_4);
  return param_1;
}




undefined8 * FUN_18000fc10(undefined8 *param_1)

{
  FUN_180010f20(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fc50(undefined8 *param_1)

{
  FUN_180010f60(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fc80(undefined8 *param_1)

{
  FUN_180010f90(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fcc0(undefined8 *param_1)

{
  FUN_180010fd0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fcf0(undefined8 *param_1)

{
  FUN_180011000(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fd30(undefined8 *param_1)

{
  FUN_180011040(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fd60(undefined8 *param_1)

{
  FUN_1800110e0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fda0(undefined8 *param_1)

{
  FUN_180011120(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fdd0(undefined8 *param_1)

{
  FUN_180011150(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fe10(undefined8 *param_1)

{
  FUN_180011190(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fe40(undefined8 *param_1)

{
  FUN_1800111c0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fe80(undefined8 *param_1)

{
  FUN_180011200(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000feb0(undefined8 *param_1)

{
  FUN_1800112a0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000fef0(undefined8 *param_1)

{
  FUN_1800112e0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000ff20(undefined8 *param_1)

{
  FUN_180011310(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMBRPartitionInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000ff60(undefined8 *param_1)

{
  FUN_180011350(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMBRPartitionInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000ff90(undefined8 *param_1)

{
  FUN_1800113f0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18000ffd0(undefined8 *param_1)

{
  FUN_180011430(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180010000(undefined8 *param_1)

{
  FUN_180011460(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CGPTPartitionInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180010040(undefined8 *param_1)

{
  FUN_1800114a0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CGPTPartitionInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180010070(undefined8 *param_1)

{
  FUN_180011540(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(class_std::list<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>,class_std::allocator<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>_>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800100b0(undefined8 *param_1)

{
  FUN_180011580(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(class_std::list<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>,class_std::allocator<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>_>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800100e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fc50(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_180010140(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fcc0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_1800101a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fd30(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_180010200(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fda0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_180010260(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fe10(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_1800102c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fe80(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_180010320(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fef0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_180010380(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000ff60(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_1800103e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000ffd0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_180010440(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_180010040(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_1800104a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_1800100b0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_180010500(undefined8 *param_1,longlong param_2)

{
  FUN_180011070(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_180010580(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800110b0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_180010600(undefined8 *param_1,longlong param_2)

{
  FUN_180011070(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_180010680(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800110b0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_180010700(undefined8 *param_1,longlong param_2)

{
  FUN_180011070(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_180010770(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1800110b0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_1800107e0(undefined8 *param_1,longlong param_2)

{
  FUN_180011230(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_180010860(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180011270(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_1800108e0(undefined8 *param_1,longlong param_2)

{
  FUN_180011230(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_180010960(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180011270(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_1800109e0(undefined8 *param_1,longlong param_2)

{
  FUN_180011230(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_180010a50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_180011270(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_180010ac0(undefined8 *param_1,longlong param_2)

{
  FUN_180011380(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_180010b30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1800113c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_180010ba0(undefined8 *param_1,longlong param_2)

{
  FUN_180011380(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMBRPartitionInfo_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_180010c10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1800113c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMBRPartitionInfo_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_180010c80(undefined8 *param_1,longlong param_2)

{
  FUN_1800114d0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_180010cf0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_180011510(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_180010d60(undefined8 *param_1,longlong param_2)

{
  FUN_1800114d0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CGPTPartitionInfo_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_180010dd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_180011510(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CGPTPartitionInfo_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_180010e40(undefined8 *param_1,longlong param_2)

{
  FUN_1800115b0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(class_std::list<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>,class_std::allocator<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>_>_>*___ptr64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_180010eb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1800115f0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(class_std::list<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>,class_std::allocator<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>_>_>*___ptr64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_180010f20(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180010f60(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180010f90(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180010fd0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011000(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011040(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011070(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800110b0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800110e0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011120(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011150(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011190(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800111c0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011200(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011230(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011270(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800112a0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800112e0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011310(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMBRPartitionInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011350(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMBRPartitionInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011380(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::FunctorObject<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800113c0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::FunctorObject<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800113f0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011430(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011460(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CGPTPartitionInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800114a0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CGPTPartitionInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800114d0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>::
             vftable;
  return param_1;
}




undefined8 * FUN_180011510(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>::
             vftable;
  return param_1;
}




undefined8 * FUN_180011540(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(class_std::list<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>,class_std::allocator<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>_>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180011580(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(class_std::list<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>,class_std::allocator<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>_>_>*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800115b0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(void)>::
             vftable;
  return param_1;
}




undefined8 * FUN_1800115f0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(void)>::
             vftable;
  return param_1;
}




undefined8 * FUN_180011620(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_18000b9c0(param_1);
  uVar1 = FUN_180013b20(param_1);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  *puVar2 = uVar1;
  return param_1;
}




undefined8 * FUN_180011670(undefined8 *param_1)

{
  FUN_180011620(param_1);
  return param_1;
}




undefined8 * FUN_1800116a0(undefined8 *param_1)

{
  FUN_1800116e0(param_1);
  return param_1;
}




undefined8 * FUN_1800116c0(undefined8 *param_1)

{
  FUN_1800116a0(param_1);
  return param_1;
}




undefined8 * FUN_1800116e0(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}




undefined8 * FUN_180011700(undefined8 *param_1)

{
  FUN_180011670(param_1);
  return param_1;
}




IObject * FUN_180011730(IObject *param_1,IObject *param_2)

{
  FUN_1800119f0(param_1,param_2);
  FUN_180011a30(param_1 + 8,param_2 + 8);
  *(undefined ***)param_1 = CPartitionEntry::vftable;
  *(undefined ***)(param_1 + 8) = CPartitionEntry::vftable;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}




IObject * FUN_180011810(IObject *param_1,IObject *param_2)

{
  longlong lVar1;
  IObject *pIVar2;
  IObject *pIVar3;
  
  FUN_1800119f0(param_1,param_2);
  FUN_180011a30(param_1 + 8,param_2 + 8);
  FUN_180011a70(param_1 + 0x10,param_2 + 0x10);
  FUN_180011ab0(param_1 + 0x18,param_2 + 0x18);
  *(undefined ***)param_1 = CPartitionEntryGPT::vftable;
  *(undefined ***)(param_1 + 8) = CPartitionEntryGPT::vftable;
  *(undefined ***)(param_1 + 0x10) = CPartitionEntryGPT::vftable;
  *(undefined ***)(param_1 + 0x18) = CPartitionEntryGPT::vftable;
  pIVar2 = param_2 + 0x20;
  pIVar3 = param_1 + 0x20;
  for (lVar1 = 0x80; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pIVar3 = *pIVar2;
    pIVar2 = pIVar2 + 1;
    pIVar3 = pIVar3 + 1;
  }
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = param_2[0xb1];
  return param_1;
}




undefined8 * FUN_180011940(undefined8 *param_1)

{
  *param_1 = IAggObject::vftable;
  return param_1;
}




undefined8 * FUN_180011960(undefined8 *param_1)

{
  *param_1 = IAggObject::vftable;
  return param_1;
}




IObject * FUN_180011980(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IContainer::vftable;
  return param_1;
}




IObject * FUN_1800119b0(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IDeviceEntry::vftable;
  return param_1;
}




IObject * FUN_1800119f0(IObject *param_1,IObject *param_2)

{
  FUN_1800119b0(param_1,param_2);
  *(undefined ***)param_1 = IPartitionEntry::vftable;
  return param_1;
}




IObject * FUN_180011a30(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IPartitionEntryEditor::vftable;
  return param_1;
}




IObject * FUN_180011a70(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IPartitionEntryGPT::vftable;
  return param_1;
}




IObject * FUN_180011ab0(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IPartitionEntryGPTEditor::vftable;
  return param_1;
}




void FUN_180011af0(undefined8 *param_1)

{
  FUN_180011bb0(param_1);
  return;
}




void FUN_180011b20(undefined8 *param_1)

{
  FUN_180011be0(param_1);
  return;
}




void FUN_180011b50(undefined8 *param_1)

{
  FUN_180011af0(param_1);
  return;
}




void FUN_180011b80(undefined8 *param_1)

{
  FUN_180011b20(param_1);
  return;
}




void FUN_180011bb0(undefined8 *param_1)

{
  FUN_18000daf0(param_1);
  return;
}




void FUN_180011be0(undefined8 *param_1)

{
  FUN_180014a50(param_1);
  return;
}




bool FUN_180011c10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180011c60(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180011cb0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180011d00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180011d50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180011da0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180011df0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180011e40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMBRPartitionInfo_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180011e90(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180011ee0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CGPTPartitionInfo_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180011f30(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(class_std::list<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>,class_std::allocator<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>_>_>*___ptr64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




undefined8 FUN_180011f80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180011ff0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180012060(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800120d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180012140(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800121b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180012220(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntry>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180012290(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CMBRPartitionInfo_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180012300(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CMomCloneObject<class_CPartitionEntryGPT>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180012370(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CGPTPartitionInfo_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800123e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CPartitionEntryIterator>*___ptr64___cdecl(class_std::list<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>,class_std::allocator<class_CMomPtr<struct_IPartitionEntry,class_CMomPtrWard>_>_>*___ptr64_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
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

IObject * CreateVirtualProcessor(undefined8 param_1,undefined8 *param_2,IObject *param_3)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x58);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18000e520(pIVar1,param_2,param_3);
  }
  return local_20;
}




IObject * FUN_1800124c0(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x58);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18000f8b0(pIVar1,param_2);
  }
  return local_20;
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

IObject * CreateVirtualProcessor(undefined8 param_1,undefined8 *param_2,IObject *param_3)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0xd0);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18000e5a0(pIVar1,param_2,param_3);
  }
  return local_20;
}




IObject * FUN_1800125a0(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0xd0);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18000f920(pIVar1,param_2);
  }
  return local_20;
}




IObject * FUN_180012610(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x48);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18000f9c0(pIVar1,param_2);
  }
  return local_20;
}




IObject * FUN_180012680(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x48);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18000e9f0(pIVar1,param_2);
  }
  return local_20;
}




IObject * FUN_1800126f0(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0xc0);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18000fa20(pIVar1,param_2);
  }
  return local_20;
}




IObject * FUN_180012760(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0xc0);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18000e8f0(pIVar1,param_2);
  }
  return local_20;
}




IObject * FUN_1800127d0(undefined8 param_1,undefined8 *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x20);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18000e640(pIVar1,param_2);
  }
  return local_20;
}




void FUN_180012840(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*(longlong *)*param_1 + 8))(*param_1,param_2,param_3);
  return;
}




void FUN_180012880(longlong param_1)

{
  FUN_180012840((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  return;
}




undefined8 * FUN_1800128c0(undefined8 *param_1,uint param_2)

{
  FUN_180011af0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180012900(undefined8 *param_1,uint param_2)

{
  FUN_180011b20(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180012940(undefined8 *param_1,uint param_2)

{
  FUN_180011b50(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180012980(undefined8 *param_1,uint param_2)

{
  FUN_180011b80(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800129c0(undefined8 *param_1,uint param_2)

{
  FUN_180011af0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180012a00(undefined8 *param_1,uint param_2)

{
  FUN_180011b20(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180012a40(undefined8 *param_1,uint param_2)

{
  FUN_180011bb0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180012a80(undefined8 *param_1,uint param_2)

{
  FUN_180011be0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180012ac0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))(*(undefined8 *)(param_1 + 0x50));
  return;
}




void FUN_180012ae8(longlong param_1)

{
  FUN_180012ac0(param_1 + -8);
  return;
}




void FUN_180012b00(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(undefined8 *)(param_1 + 200));
  return;
}




void FUN_180012b2c(longlong param_1)

{
  FUN_180012b00(param_1 + -8);
  return;
}




void FUN_180012b38(longlong param_1)

{
  FUN_180012b00(param_1 + -0x10);
  return;
}




void FUN_180012b44(longlong param_1)

{
  FUN_180012b00(param_1 + -0x18);
  return;
}




void FUN_180012b50(longlong param_1)

{
  FUN_1800137c0(param_1);
  return;
}




void FUN_180012b68(longlong param_1)

{
  FUN_180012b50(param_1 + -8);
  return;
}




void FUN_180012b80(longlong param_1)

{
  FUN_1800137e0(param_1);
  return;
}




void FUN_180012b98(longlong param_1)

{
  FUN_180012b80(param_1 + -8);
  return;
}




void FUN_180012ba4(longlong param_1)

{
  FUN_180012b80(param_1 + -0x10);
  return;
}




void FUN_180012bb0(longlong param_1)

{
  FUN_180012b80(param_1 + -0x18);
  return;
}




void FUN_180012bc0(longlong param_1)

{
  FUN_1800137c0(param_1 + -0x48);
  return;
}




void FUN_180012be0(longlong param_1)

{
  FUN_1800137e0(param_1 + -0xc0);
  return;
}




undefined8 FUN_180012c10(longlong param_1,longlong param_2)

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
    puVar1 = FUN_18000f0e0(&local_30,param_1 + -0x48);
    local_48 = FUN_18000eb20(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18000ef80(local_18,local_res10,param_1 + -0x48);
    local_20 = local_28;
    local_48 = FUN_18000eb20(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000d790(local_48);
  }
  return uVar2;
}




undefined8 FUN_180012cd0(longlong param_1,longlong param_2)

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
    puVar1 = FUN_18000f2f0(&local_30,param_1 + -0xc0);
    local_48 = FUN_18000ebc0(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18000f190(local_18,local_res10,param_1 + -0xc0);
    local_20 = local_28;
    local_48 = FUN_18000ebc0(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1800144e0(local_48);
  }
  return uVar2;
}




undefined8 FUN_180012da0(undefined8 param_1,longlong param_2)

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
    puVar1 = FUN_18000f3a0(&local_30,param_1);
    local_48 = FUN_18000ec60(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18000f030(local_18,local_res10,param_1);
    local_20 = local_28;
    local_48 = FUN_18000eb20(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000d790(local_48);
  }
  return uVar2;
}




undefined8 FUN_180012e60(undefined8 param_1,longlong param_2)

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
    puVar1 = FUN_18000f500(&local_30,param_1);
    local_48 = FUN_18000ed00(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18000f240(local_18,local_res10,param_1);
    local_20 = local_28;
    local_48 = FUN_18000ebc0(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1800144e0(local_48);
  }
  return uVar2;
}




void FUN_180012f20(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_158 [32];
  char *local_138;
  char *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStack_158;
  if (param_2 != (char *)0x0) {
    local_120 = 0;
    if (*param_2 == '*') {
      FUN_18000d7e0(param_1 + -0x48,param_2,param_3,param_4);
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
        FUN_18000d7e0(param_1 + -0x48,&local_118,param_3,param_4);
      }
      else {
        (**(code **)*local_128)(local_128,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




void FUN_1800130a0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_158 [32];
  char *local_138;
  char *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStack_158;
  if (param_2 != (char *)0x0) {
    local_120 = 0;
    if (*param_2 == '*') {
      FUN_180014530(param_1 + -0xc0,param_2,param_3,param_4);
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
        FUN_180014530(param_1 + -0xc0,&local_118,param_3,param_4);
      }
      else {
        (**(code **)*local_128)(local_128,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




int FUN_180013220(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_180013800(param_1 + -0x48);
  if ((iVar1 == 0) && ((undefined8 *)(param_1 + -0x48) != (undefined8 *)0x0)) {
    FUN_1800128c0((undefined8 *)(param_1 + -0x48),1);
  }
  return iVar1;
}




int FUN_180013290(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_180013840(param_1 + -0xc0);
  if ((iVar1 == 0) && ((undefined8 *)(param_1 + -0xc0) != (undefined8 *)0x0)) {
    FUN_180012900((undefined8 *)(param_1 + -0xc0),1);
  }
  return iVar1;
}




void FUN_180013310(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(undefined8 *)(param_1 + 0x50),param_2);
  return;
}




void FUN_180013340(longlong param_1,undefined8 param_2)

{
  FUN_180013310(param_1 + -8,param_2);
  return;
}




void FUN_180013350(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 200) + 0x18))(*(undefined8 *)(param_1 + 200),param_2);
  return;
}




void FUN_180013388(longlong param_1,undefined8 param_2)

{
  FUN_180013350(param_1 + -8,param_2);
  return;
}




void FUN_180013394(longlong param_1,undefined8 param_2)

{
  FUN_180013350(param_1 + -0x10,param_2);
  return;
}




void FUN_1800133a0(longlong param_1,undefined8 param_2)

{
  FUN_180013350(param_1 + -0x18,param_2);
  return;
}




void FUN_1800133b0(longlong param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_1800134b0(param_1,(ulonglong)local_18,param_2);
  return;
}




void FUN_1800133d8(longlong param_1,undefined8 param_2)

{
  FUN_1800133b0(param_1 + -8,param_2);
  return;
}




void FUN_1800133f0(longlong param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_1800134f0(param_1,(ulonglong)local_18,param_2);
  return;
}




void FUN_180013418(longlong param_1,undefined8 param_2)

{
  FUN_1800133f0(param_1 + -8,param_2);
  return;
}




void FUN_180013424(longlong param_1,undefined8 param_2)

{
  FUN_1800133f0(param_1 + -0x10,param_2);
  return;
}




void FUN_180013430(longlong param_1,undefined8 param_2)

{
  FUN_1800133f0(param_1 + -0x18,param_2);
  return;
}




void FUN_180013440(longlong *param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_180013530(param_1,(ulonglong)local_18,param_2);
  return;
}




void FUN_180013468(longlong param_1,undefined8 param_2)

{
  FUN_180013440((longlong *)(param_1 + -8),param_2);
  return;
}




void FUN_180013474(longlong param_1,undefined8 param_2)

{
  FUN_180013440((longlong *)(param_1 + -0x10),param_2);
  return;
}




void FUN_180013480(longlong param_1,undefined8 param_2)

{
  FUN_180013440((longlong *)(param_1 + -0x18),param_2);
  return;
}




void FUN_18001348c(longlong param_1,__uint64 *param_2)

{
  IStorageDevice::GetInformationOffset((IStorageDevice *)(param_1 + -8),param_2);
  return;
}




void FUN_180013498(longlong param_1,__uint64 *param_2)

{
  IStorageDevice::GetInformationOffset((IStorageDevice *)(param_1 + -0x10),param_2);
  return;
}




void FUN_1800134a4(longlong param_1,__uint64 *param_2)

{
  IStorageDevice::GetInformationOffset((IStorageDevice *)(param_1 + -0x18),param_2);
  return;
}




void FUN_1800134b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(undefined8 *)(param_1 + 0x50),param_3);
  return;
}




void FUN_1800134f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 200) + 0x18))(*(undefined8 *)(param_1 + 200),param_3);
  return;
}




void FUN_180013530(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x78))(param_1,param_3);
  return;
}




longlong FUN_180013560(longlong param_1,longlong param_2)

{
  undefined8 local_18;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = param_1 + 0x48;
    }
  }
  else {
    local_18 = (**(code **)**(undefined8 **)(param_1 + 0x50))
                         (*(undefined8 *)(param_1 + 0x50),param_2);
  }
  return local_18;
}




void FUN_1800135cc(longlong param_1,longlong param_2)

{
  FUN_180013560(param_1 + -8,param_2);
  return;
}




longlong FUN_1800135e0(longlong param_1,longlong param_2)

{
  undefined8 local_18;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = param_1 + 0xc0;
    }
  }
  else {
    local_18 = (**(code **)**(undefined8 **)(param_1 + 200))(*(undefined8 *)(param_1 + 200),param_2)
    ;
  }
  return local_18;
}




void FUN_180013654(longlong param_1,longlong param_2)

{
  FUN_1800135e0(param_1 + -8,param_2);
  return;
}




void FUN_180013660(longlong param_1,longlong param_2)

{
  FUN_1800135e0(param_1 + -0x10,param_2);
  return;
}




void FUN_18001366c(longlong param_1,longlong param_2)

{
  FUN_1800135e0(param_1 + -0x18,param_2);
  return;
}




void FUN_180013680(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180014530(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800136a4(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180013680(param_1 + -8,param_2,param_3,param_4);
  return;
}




void FUN_1800136b0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180013680(param_1 + -0x10,param_2,param_3,param_4);
  return;
}




void FUN_1800136bc(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180013680(param_1 + -0x18,param_2,param_3,param_4);
  return;
}




void FUN_1800136d0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180015350(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180013700(void)

{
  FUN_18000d7d0();
  return;
}




void FUN_180013714(void)

{
  FUN_180013700();
  return;
}




void FUN_180013720(void)

{
  FUN_180014520();
  return;
}




void FUN_180013734(void)

{
  FUN_180013720();
  return;
}




void FUN_180013740(void)

{
  FUN_180013720();
  return;
}




void FUN_18001374c(void)

{
  FUN_180013720();
  return;
}




void FUN_180013760(void)

{
  FUN_180015340();
  return;
}




void FUN_180013780(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_1800137a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 200) = param_2;
  return;
}




undefined4 FUN_1800137c0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x40);
}




undefined4 FUN_1800137e0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0xb8);
}




undefined4 FUN_180013800(longlong param_1)

{
  undefined4 local_18;
  
  LOCK();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  UNLOCK();
  if (*(int *)(param_1 + 0x40) < 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0x40);
  }
  return local_18;
}




undefined4 FUN_180013840(longlong param_1)

{
  undefined4 local_18;
  
  LOCK();
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
  UNLOCK();
  if (*(int *)(param_1 + 0xb8) < 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0xb8);
  }
  return local_18;
}




void FUN_180013890(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x50) + 8))(*(undefined8 *)(param_1 + 0x50));
  return;
}




void FUN_1800138b8(longlong param_1)

{
  FUN_180013890(param_1 + -8);
  return;
}




void FUN_1800138d0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 200) + 8))(*(undefined8 *)(param_1 + 200));
  return;
}




void FUN_1800138fc(longlong param_1)

{
  FUN_1800138d0(param_1 + -8);
  return;
}




void FUN_180013908(longlong param_1)

{
  FUN_1800138d0(param_1 + -0x10);
  return;
}




void FUN_180013914(longlong param_1)

{
  FUN_1800138d0(param_1 + -0x18);
  return;
}




int FUN_180013920(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_180013800((longlong)param_1);
  if ((iVar1 == 0) && (param_1 != (undefined8 *)0x0)) {
    FUN_180012a40(param_1,1);
  }
  return iVar1;
}




void FUN_180013984(longlong param_1)

{
  FUN_180013920((undefined8 *)(param_1 + -8));
  return;
}




int FUN_180013990(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_180013840((longlong)param_1);
  if ((iVar1 == 0) && (param_1 != (undefined8 *)0x0)) {
    FUN_180012a80(param_1,1);
  }
  return iVar1;
}




void FUN_1800139f4(longlong param_1)

{
  FUN_180013990((undefined8 *)(param_1 + -8));
  return;
}




void FUN_180013a00(longlong param_1)

{
  FUN_180013990((undefined8 *)(param_1 + -0x10));
  return;
}




void FUN_180013a0c(longlong param_1)

{
  FUN_180013990((undefined8 *)(param_1 + -0x18));
  return;
}




int FUN_180013a20(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_18000ce30((longlong)param_1);
  if (iVar1 == 0) {
    free(param_1);
  }
  return iVar1;
}




longlong FUN_180013a60(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong *)*param_1 != param_2) {
    plVar3 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (longlong *)0x0) {
      uVar1 = FUN_18000ddb0(0,plVar3,param_3,param_4);
      lVar2 = FUN_18000bab0(param_2,uVar1);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        (**(code **)(*param_2 + 8))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  return *param_1;
}




void FUN_180013b20(undefined8 param_1)

{
  FUN_180013b40(param_1,(_Container_proxy *)0x0,(_Container_proxy *)0x0);
  return;
}




_Container_proxy *
FUN_180013b40(undefined8 param_1,_Container_proxy *param_2,_Container_proxy *param_3)

{
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  _Container_proxy *local_res10;
  _Container_proxy *local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  this = (allocator<struct_std::_Container_proxy> *)FUN_1800047c0(param_1);
  p_Var1 = std::allocator<struct_std::_Container_proxy>::allocate(this,1);
  if (local_res10 == (_Container_proxy *)0x0) {
    local_res10 = p_Var1;
    local_res18[0] = p_Var1;
  }
  uVar2 = FUN_1800047c0(param_1);
  uVar3 = FUN_180003e70(p_Var1);
  construct<>(uVar2,uVar3,&local_res10);
  uVar3 = FUN_180003e70(p_Var1 + 8);
  construct<>(uVar2,uVar3,local_res18);
  return p_Var1;
}




void FUN_180013c00(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_180014450(param_1);
  plVar2 = (longlong *)FUN_180008bd0(param_1);
  if ((lVar1 - *plVar2) - 1U < param_2) {
    std::_Xlength_error("list<T> too long");
  }
  plVar2 = (longlong *)FUN_180008bd0(param_1);
  *plVar2 = *plVar2 + param_2;
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




undefined8 * FUN_180013cb0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fc10(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180013d00(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fc80(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180013d50(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fcf0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180013da0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fd60(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180013df0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fdd0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180013e40(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000fe40(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180013e90(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000feb0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180013ee0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000ff20(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180013f30(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18000ff90(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180013f80(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_180010000(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180013fd0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_180010070(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180014020(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180010500(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180014080(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180010600(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_1800140e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180010700(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180014140(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_1800107e0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_1800141a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_1800108e0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180014200(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_1800109e0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180014260(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180010ac0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_1800142c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180010ba0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180014320(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180010c80(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180014380(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180010d60(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_1800143e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180010e40(puVar1,param_1);
  }
  return local_20;
}




undefined8 FUN_180014440(void)

{
  return 0xaaaaaaaaaaaaaaa;
}




void FUN_180014450(undefined8 param_1)

{
  FUN_1800047c0(param_1);
  FUN_180014440();
  return;
}




void FUN_180014470(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_10 [2];
  
  puVar2 = FUN_180008d50(param_1,local_10);
  p_Var1 = (_Container_proxy *)*puVar2;
  uVar3 = FUN_180003e70(param_2);
  FUN_18000ef00(param_1,p_Var1,uVar3);
  return;
}




undefined8 FUN_1800144c0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180008bd0(param_1);
  return *puVar1;
}




undefined8 FUN_1800144e0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_180014500(undefined8 param_1)

{
  return param_1;
}




char * FUN_180014520(void)

{
  return "CPartitionEntryGPT";
}




longlong FUN_180014530(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  if (param_2 == (char *)0x0) {
    local_40 = 0;
  }
  else {
    local_98 = (uint)(*param_2 == '*');
    local_40 = param_1;
    if (param_2[(int)local_98] != '1') {
      pcVar1 = param_2;
      local_88 = (char *)FUN_18000ddb0(0,param_2,param_3,param_4);
      local_90 = param_2 + (int)local_98;
      for (; ((*local_90 == *local_88 && (*local_90 != '\0')) && (*local_88 != '\0'));
          local_88 = local_88 + 1) {
        local_90 = local_90 + 1;
      }
      if (*local_90 != *local_88) {
        local_78 = (char *)FUN_18000ddd0(0,pcVar1,param_3,param_4);
        local_80 = param_2 + (int)local_98;
        for (; ((*local_80 == *local_78 && (*local_80 != '\0')) && (*local_78 != '\0'));
            local_78 = local_78 + 1) {
          local_80 = local_80 + 1;
        }
        if (*local_80 == *local_78) {
          if (param_1 == 0) {
            local_50 = 0;
            local_40 = local_50;
          }
          else {
            local_40 = param_1 + 8;
          }
        }
        else {
          local_68 = (char *)FUN_180015120(0,pcVar1,param_3,param_4);
          local_70 = param_2 + (int)local_98;
          for (; ((*local_70 == *local_68 && (*local_70 != '\0')) && (*local_68 != '\0'));
              local_68 = local_68 + 1) {
            local_70 = local_70 + 1;
          }
          if (*local_70 == *local_68) {
            if (param_1 == 0) {
              local_48 = 0;
              local_40 = local_48;
            }
            else {
              local_40 = param_1 + 0x10;
            }
          }
          else {
            local_58 = (char *)FUN_180015140(0,pcVar1,param_3,param_4);
            local_60 = param_2 + (int)local_98;
            for (; ((*local_60 == *local_58 && (*local_60 != '\0')) && (*local_58 != '\0'));
                local_58 = local_58 + 1) {
              local_60 = local_60 + 1;
            }
            if (*local_60 == *local_58) {
              if (param_1 == 0) {
                local_40 = 0;
              }
              else {
                local_40 = param_1 + 0x18;
              }
            }
            else {
              local_40 = 0;
            }
          }
        }
      }
    }
  }
  return local_40;
}




IObject * FUN_1800148c0(IObject *param_1,IObject *param_2)

{
  GPT_PartitionType GVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  IObject *pIVar5;
  
  pIVar5 = param_2;
  FUN_18000dec0(param_1,param_2);
  FUN_18000def0(param_1 + 8,pIVar5);
  FUN_180015200(param_1 + 0x10,pIVar5);
  FUN_180015230(param_1 + 0x18,pIVar5);
  *(undefined ***)param_1 = CPartitionEntryGPT::vftable;
  *(undefined ***)(param_1 + 8) = CPartitionEntryGPT::vftable;
  *(undefined ***)(param_1 + 0x10) = CPartitionEntryGPT::vftable;
  *(undefined ***)(param_1 + 0x18) = CPartitionEntryGPT::vftable;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  param_1[0xb0] = (IObject)0x0;
  param_1[0xb1] = (IObject)0x0;
  memset(param_1 + 0x20,0,0x80);
  GVar1 = FUN_1800152b0((GPT_GUID *)param_2);
  GPT_SetPartitionTypeGUIDFromType(GVar1,(GPT_GUID *)(param_1 + 0x20));
  FUN_1800152d0((longlong)param_2,param_1 + 0x30);
  uVar2 = FUN_180008a60((longlong)param_2);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  FUN_180015280((longlong)param_2,param_1 + 0x58);
  lVar3 = FUN_180008a50((longlong)param_2);
  lVar4 = FUN_180008a60((longlong)param_2);
  *(longlong *)(param_1 + 0xa0) = (lVar3 - lVar4) + 1;
  FUN_180015260((longlong)param_2,(undefined8 *)(param_1 + 0x50));
  return param_1;
}




void FUN_180014a50(undefined8 *param_1)

{
  *param_1 = CPartitionEntryGPT::vftable;
  param_1[1] = CPartitionEntryGPT::vftable;
  param_1[2] = CPartitionEntryGPT::vftable;
  param_1[3] = CPartitionEntryGPT::vftable;
  return;
}




IObject * FUN_180014aa0(IObject *param_1,IObject *param_2,void *param_3,void *param_4,
                       undefined8 param_5,undefined8 param_6)

{
  IObject *pIVar1;
  
  pIVar1 = param_2;
  FUN_18000dec0(param_1,param_2);
  FUN_18000def0(param_1 + 8,pIVar1);
  FUN_180015200(param_1 + 0x10,pIVar1);
  FUN_180015230(param_1 + 0x18,pIVar1);
  *(undefined ***)param_1 = CPartitionEntryGPT::vftable;
  *(undefined ***)(param_1 + 8) = CPartitionEntryGPT::vftable;
  *(undefined ***)(param_1 + 0x10) = CPartitionEntryGPT::vftable;
  *(undefined ***)(param_1 + 0x18) = CPartitionEntryGPT::vftable;
  *(undefined8 *)(param_1 + 0xa0) = param_6;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  param_1[0xb0] = (IObject)0x0;
  param_1[0xb1] = (IObject)0x0;
  memset(param_1 + 0x20,0,0x80);
  memcpy(param_1 + 0x20,param_2,0x10);
  memcpy(param_1 + 0x30,param_3,0x10);
  memcpy(param_1 + 0x58,param_4,8);
  *(undefined8 *)(param_1 + 0x40) = param_5;
  return param_1;
}




undefined8 FUN_180014c00(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}




undefined8 FUN_180014c20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}




undefined * FUN_180014c40(void)

{
  return &DAT_18003adb3;
}




undefined8 FUN_180014c60(void)

{
  return 0;
}




undefined1 FUN_180014c70(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xb1);
}




undefined1 FUN_180014c90(void)

{
  return 1;
}




undefined4 FUN_180014ca0(longlong param_1)

{
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    local_18 = 0xee;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}




void FUN_180014ce0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xa9) = param_2;
  return;
}




void FUN_180014d00(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}




void FUN_180014d40(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}




void FUN_180014d70(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_180014d90(void)

{
  return;
}




void FUN_180014db0(void)

{
  return;
}




void FUN_180014dc0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  return;
}




undefined8 FUN_180014df0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}




void FUN_180014e10(longlong param_1)

{
  GPT_GetPartitionTypeFromTypeGUID((GPT_GUID *)(param_1 + 0x10));
  return;
}




void FUN_180014e40(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_180005be0(iVar1);
  return;
}




void FUN_180014e80(longlong param_1,void *param_2)

{
  memcpy(param_2,(void *)(param_1 + 0x10),0x10);
  return;
}




void FUN_180014ec0(longlong param_1,void *param_2)

{
  memcpy(param_2,(void *)(param_1 + 0x20),0x10);
  return;
}




void FUN_180014f00(longlong param_1,void *param_2)

{
  memcpy(param_2,(void *)(param_1 + 0x48),8);
  return;
}




void FUN_180014f40(longlong param_1)

{
  FUN_1800061a0(*(ulonglong *)(param_1 + 0x40));
  return;
}




void FUN_180014f70(longlong param_1)

{
  FUN_1800061e0(*(ulonglong *)(param_1 + 0x40));
  return;
}




void FUN_180014fa0(longlong param_1)

{
  FUN_180006220(*(ulonglong *)(param_1 + 0x40));
  return;
}




void FUN_180014fd0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x40);
  return;
}




void FUN_180015000(longlong param_1,GPT_PartitionType param_2)

{
  GPT_SetPartitionTypeGUIDFromType(param_2,(GPT_GUID *)(param_1 + 8));
  if (param_2 == 1) {
    *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) | 0x8000000000000000;
  }
  return;
}




void FUN_180015060(longlong param_1,void *param_2)

{
  memcpy((void *)(param_1 + 0x18),param_2,0x10);
  return;
}




void FUN_1800150a0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) & 0xbfffffffffffffff;
  }
  else {
    *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) | 0x4000000000000000;
  }
  return;
}




void FUN_180015100(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_180015120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180015160(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180015140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800151b0(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_180015160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005bac0 == (undefined1 *)0x0) {
    DAT_18005bac0 = &DAT_18005b9c0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180054ad8,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005bac0,local_18);
  }
  return DAT_18005bac0;
}




undefined1 *
FUN_1800151b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005bbd0 == (undefined1 *)0x0) {
    DAT_18005bbd0 = &DAT_18005bad0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180054b08,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005bbd0,local_18);
  }
  return DAT_18005bbd0;
}




IObject * FUN_180015200(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IPartitionEntryGPT::vftable;
  return param_1;
}




IObject * FUN_180015230(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IPartitionEntryGPTEditor::vftable;
  return param_1;
}




void FUN_180015260(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  return;
}




void FUN_180015280(longlong param_1,void *param_2)

{
  memcpy(param_2,(void *)(param_1 + 0x38),0x48);
  return;
}




void FUN_1800152b0(GPT_GUID *param_1)

{
  GPT_GetPartitionTypeFromTypeGUID(param_1);
  return;
}




void FUN_1800152d0(longlong param_1,void *param_2)

{
  memcpy(param_2,(void *)(param_1 + 0x10),0x10);
  return;
}




undefined8 FUN_180015320(undefined8 param_1)

{
  return param_1;
}




char * FUN_180015340(void)

{
  return "CPartitionEntryIterator";
}




undefined8 FUN_180015350(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

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
      local_28 = (char *)FUN_180015550(0,param_2,param_3,param_4);
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




IObject * FUN_180015470(IObject *param_1,IObject *param_2)

{
  FUN_1800155c0(param_1,param_2);
  *(undefined ***)param_1 = CPartitionEntryIterator::vftable;
  *(IObject **)(param_1 + 8) = param_2;
  FUN_180008dc0(param_2,(undefined8 *)(param_1 + 0x10));
  return param_1;
}




undefined8 FUN_1800154d0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  plVar2 = FUN_180008eb0(*(undefined8 *)(param_1 + 8),&local_20);
  bVar1 = FUN_180008850(plVar2,(longlong *)(param_1 + 0x10));
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    plVar2 = FUN_180008940((undefined8 *)(param_1 + 0x10),local_18);
    puVar3 = (undefined8 *)FUN_180008900(plVar2);
    uVar4 = FUN_18000ac00(puVar3);
  }
  return uVar4;
}




void FUN_180015550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180015570(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_180015570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005bce0 == (undefined1 *)0x0) {
    DAT_18005bce0 = &DAT_18005bbe0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180054e90,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005bce0,local_18);
  }
  return DAT_18005bce0;
}




IObject * FUN_1800155c0(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IIterator::vftable;
  return param_1;
}




void FUN_1800155f0(void)

{
  FUN_180026a30();
  return;
}




undefined8 FUN_180015610(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_180015630(undefined8 param_1)

{
  return param_1;
}




char * FUN_180015650(void)

{
  return "CPartitionModule";
}




undefined8 FUN_180015660(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

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
      local_48 = (char *)FUN_180018200(0,param_2,param_3,param_4);
      local_50 = param_2 + (int)local_58;
      for (; ((*local_50 == *local_48 && (*local_50 != '\0')) && (*local_48 != '\0'));
          local_48 = local_48 + 1) {
        local_50 = local_50 + 1;
      }
      if (*local_50 != *local_48) {
        local_38 = (char *)FUN_1800181e0(0,pcVar1,param_3,param_4);
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




undefined8 FUN_180015820(void)

{
  return DAT_18005bce8;
}




char * FUN_180015840(void)

{
  return "Partition";
}




IStorageDevice *
FUN_180015860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_28;
  IStorageDevice *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = FUN_18001b2b0(&local_28,&local_res10,&local_res18,&local_res20);
  local_20 = FUN_180018630(puVar1);
  FUN_18000c7e0(&local_28);
  return local_20;
}




IStorageDevice * FUN_1800158e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong local_28;
  IStorageDevice *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  puVar1 = FUN_18001b430(&local_28,param_2);
  local_20 = FUN_180018630(puVar1);
  FUN_18000c7e0(&local_28);
  return local_20;
}




IStorageDevice * FUN_180015940(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong local_48;
  IStorageDevice *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  longlong local_28;
  IStorageDevice *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = __RTDynamicCast(param_2,0,&IPartitionEntry::RTTI_Type_Descriptor,
                          &CPartitionEntryGPT::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    puVar2 = FUN_18001b990(&local_48,param_2);
    local_40 = FUN_18000ec60(puVar2);
    FUN_18000c7e0(&local_48);
  }
  else {
    local_38 = FUN_18001bc30(&local_28,param_2);
    local_30 = local_38;
    local_20 = FUN_18000ed00(local_38);
    FUN_18000c7e0(&local_28);
    local_40 = local_20;
  }
  return local_40;
}




IStorageDevice * FUN_180015a20(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong local_28;
  IStorageDevice *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  puVar1 = FUN_18001b6e0(&local_28,param_2);
  local_20 = FUN_1800186b0(puVar1);
  FUN_18000c7e0(&local_28);
  return local_20;
}




IStorageDevice * FUN_180015a80(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong local_28;
  IStorageDevice *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  puVar1 = FUN_18001b8e0(&local_28,param_2);
  local_20 = FUN_180018750(puVar1);
  FUN_18000c7e0(&local_28);
  return local_20;
}




void FUN_180015ae0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = (**(code **)(*param_2 + 0x28))(param_2);
  FUN_18000b4f0(local_18,local_14,param_3,param_4);
  return;
}




IStorageDevice *
FUN_180015b30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_48;
  IStorageDevice *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  longlong local_28;
  IStorageDevice *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    local_40 = (IStorageDevice *)0x0;
  }
  else {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_5 == 0) {
      puVar1 = FUN_18001bce0(&local_48,&local_res10,&local_res18,&local_res20);
      local_40 = FUN_1800187d0(puVar1);
      FUN_18000c7e0(&local_48);
    }
    else {
      local_38 = FUN_18001afd0(&local_28,&param_5,&local_res10,&local_res18,&local_res20);
      local_30 = local_38;
      local_20 = FUN_180018590(local_38);
      FUN_18000c7e0(&local_28);
      local_40 = local_20;
    }
  }
  return local_40;
}




IStorageDevice *
FUN_180015c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 local_res20 [2];
  longlong in_stack_00000040;
  longlong local_48;
  IStorageDevice *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  longlong local_28;
  IStorageDevice *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20[0] = param_4;
  if (in_stack_00000040 == 0) {
    puVar1 = FUN_18001ba40(&local_48,&local_res10,&local_res18,local_res20,&stack0x00000028,
                           &stack0x00000030,&stack0x00000038);
    local_40 = FUN_18000ec60(puVar1);
    FUN_18000c7e0(&local_48);
  }
  else {
    local_38 = FUN_18001adc0(&local_28,&stack0x00000040,&local_res10,&local_res18,local_res20,
                             &stack0x00000028,&stack0x00000030,&stack0x00000038);
    local_30 = local_38;
    local_20 = FUN_18000eb20(local_38);
    FUN_18000c7e0(&local_28);
    local_40 = local_20;
  }
  return local_40;
}




void FUN_180015d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 auStackY_118 [32];
  longlong local_c8;
  IStorageDevice *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  IStorageDevice *local_a0;
  undefined8 local_98;
  GPT_GUID local_90 [16];
  GPT_GUID local_80 [24];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_98 = 0xfffffffffffffffe;
  local_18 = DAT_180053018 ^ (ulonglong)auStackY_118;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  GPT_SetPartitionTypeGUIDFromType(3,local_80);
  GPT_GenerateGUID(local_90);
  puVar3 = local_68;
  for (lVar2 = 0x48; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (local_res20 == 0) {
    puVar1 = FUN_18001bb40(&local_c8,local_80,local_90,local_68,&local_res10,&local_res18);
    local_c0 = FUN_18000ed00(puVar1);
    FUN_18000c7e0(&local_c8);
  }
  else {
    local_b8 = FUN_18001aed0(&local_a8,&local_res20,local_80,local_90,local_68,&local_res10,
                             &local_res18);
    local_b0 = local_b8;
    local_a0 = FUN_18000ebc0(local_b8);
    FUN_18000c7e0(&local_a8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_118);
  return;
}




IStorageDevice * FUN_180015f00(void)

{
  undefined8 *puVar1;
  longlong local_28;
  IStorageDevice *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  puVar1 = FUN_18001b4e0(&local_28);
  local_20 = FUN_1800186b0(puVar1);
  FUN_18000c7e0(&local_28);
  return local_20;
}




IStorageDevice *
FUN_180015f60(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_48;
  IStorageDevice *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  longlong local_28;
  IStorageDevice *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    local_40 = (IStorageDevice *)0x0;
  }
  else {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_4 == 0) {
      puVar1 = FUN_18001b580(&local_48,&local_res10,&local_res18);
      local_40 = FUN_1800186b0(puVar1);
      FUN_18000c7e0(&local_48);
    }
    else {
      local_38 = FUN_18001a820(&local_28,&local_res20,&local_res10,&local_res18);
      local_30 = local_38;
      local_20 = FUN_180018470(local_38);
      FUN_18000c7e0(&local_28);
      local_40 = local_20;
    }
  }
  return local_40;
}




IStorageDevice * FUN_180016050(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong local_res10 [3];
  longlong local_48;
  IStorageDevice *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  longlong local_28;
  IStorageDevice *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    puVar1 = FUN_18001b790(&local_48);
    local_40 = FUN_180018750(puVar1);
    FUN_18000c7e0(&local_48);
  }
  else {
    local_38 = FUN_18001ab00(&local_28,local_res10);
    local_30 = local_38;
    local_20 = FUN_180018510(local_38);
    FUN_18000c7e0(&local_28);
    local_40 = local_20;
  }
  return local_40;
}




void FUN_180016100(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 0x30))(param_2);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2);
  }
  return;
}




void FUN_180016150(undefined8 param_1,longlong *param_2,undefined1 *param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  char cVar1;
  int iVar2;
  GPT_PartitionType GVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296;
  undefined1 local_295;
  longlong local_290;
  longlong *local_288;
  uint local_280;
  undefined4 local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  longlong *local_268;
  longlong local_260;
  undefined4 local_258;
  longlong local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  longlong local_210;
  undefined4 local_208 [2];
  longlong local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8 [2];
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  undefined8 local_180 [2];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [32];
  GPT_GUID local_e8 [128];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_128 = 0xfffffffffffffffe;
  local_18 = DAT_180053018 ^ (ulonglong)auStackY_2d8;
  puVar9 = param_3;
  lVar6 = param_4;
  local_280 = (**(code **)(*param_2 + 0x28))(param_2);
  if ((local_280 & 8) == 0) {
    if ((local_280 & 4) == 0) {
      if ((local_280 & 2) != 0) {
        plVar4 = (longlong *)(**(code **)(*param_5 + 0x30))(param_5);
        FUN_1800178b0(&local_250,plVar4,puVar9,lVar6);
        FUN_18000c620(local_1e8);
        FUN_18001c9c0(&local_260);
        while( true ) {
          puVar5 = FUN_180023e70(&local_250,&local_140);
          local_1f8 = (longlong *)FUN_18000ac00(puVar5);
          plVar4 = (longlong *)(**(code **)(*local_1f8 + 0x28))(local_1f8);
          lVar7 = FUN_180018120(&local_260,plVar4,puVar9,lVar6);
          if (lVar7 == 0) break;
          local_1c0 = FUN_18000ddb0(0,plVar4,puVar9,lVar6);
          puVar5 = FUN_180023e70(&local_260,&local_138);
          puVar5 = (undefined8 *)FUN_18000ac00(puVar5);
          uVar8 = local_1c0;
          local_268 = (longlong *)FUN_18000bab0(puVar5,local_1c0);
          local_1b8 = FUN_180015120(0,uVar8,puVar9,lVar6);
          puVar5 = FUN_180023e70(&local_260,&local_130);
          puVar5 = (undefined8 *)FUN_18000ac00(puVar5);
          local_288 = (longlong *)FUN_18000bab0(puVar5,local_1b8);
          if (local_288 == (longlong *)0x0) {
            local_296 = 0;
            FUN_18000c780(&local_260);
            FUN_18000c970(local_1e8);
            FUN_18000c780(&local_250);
            goto LAB_1800168b5;
          }
          puVar9 = local_68;
          for (lVar6 = 0x48; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          (**(code **)(*local_288 + 0x48))(local_288,local_68);
          (**(code **)(*local_288 + 0x40))(local_288,local_118);
          local_1f0 = 0;
          (**(code **)(*local_288 + 0x68))(local_288,&local_1f0);
          local_1b0 = (**(code **)(*local_268 + 0x28))(local_268);
          local_198 = FUN_180016100(param_1,local_268);
          local_198 = local_1b0 + -1 + local_198;
          local_1a8 = *local_268;
          local_190 = (**(code **)(local_1a8 + 0x28))(local_268);
          local_1a0 = *local_288;
          GVar3 = (**(code **)(local_1a0 + 0x28))(local_288);
          puVar9 = local_118;
          lVar6 = local_190;
          FUN_180021e00(local_e8,GVar3,puVar9,local_190,local_198,local_68,local_1f0);
          FUN_18002a410(local_1e8,local_e8);
        }
        FUN_18002f090(&local_298);
        iVar2 = FUN_18002f0c0(&local_298,(longlong)param_3,param_4,param_7,local_1e8);
        local_295 = -1 < iVar2;
        local_26c = (uint)(byte)local_295;
        FUN_18002f0b0();
        FUN_18000c780(&local_260);
        FUN_18000c970(local_1e8);
        FUN_18000c780(&local_250);
      }
    }
    else {
      plVar4 = (longlong *)(**(code **)(*param_5 + 0x30))(param_5);
      FUN_1800178b0(&local_200,plVar4,puVar9,lVar6);
      local_274 = (**(code **)(*param_6 + 0x30))(param_6);
      local_278 = (**(code **)(*param_6 + 0x38))(param_6);
      FUN_18000c650(local_180);
      FUN_18001c9c0(&local_290);
      while( true ) {
        puVar5 = FUN_180023e70(&local_200,&local_120);
        local_248 = (longlong *)FUN_18000ac00(puVar5);
        plVar4 = (longlong *)(**(code **)(*local_248 + 0x28))(local_248);
        lVar6 = FUN_180018150(&local_290,plVar4,puVar9,lVar6);
        if (lVar6 == 0) break;
        local_210 = 0;
        puVar5 = FUN_180023e70(&local_290,&local_170);
        local_240 = (longlong *)FUN_18000ac00(puVar5);
        cVar1 = (**(code **)(*local_240 + 0x50))(local_240);
        if (cVar1 == '\0') {
          puVar5 = FUN_180023e70(&local_290,&local_168);
          local_230 = (longlong *)FUN_18000ac00(puVar5);
          puVar5 = FUN_180023e70(&local_290,&local_160);
          local_238 = (longlong *)FUN_18000ac00(puVar5);
          local_1d8 = (**(code **)(*local_238 + 0x40))(local_238);
          local_188 = *local_230;
          local_210 = (**(code **)(local_188 + 0x28))(local_230);
          local_210 = local_210 - local_1d8;
        }
        puVar5 = FUN_180023e70(&local_290,&local_158);
        local_228 = (longlong *)FUN_18000ac00(puVar5);
        cVar1 = (**(code **)(*local_228 + 0x48))(local_228);
        if (cVar1 == '\0') {
          local_27c = 0;
        }
        else {
          local_27c = 0x80;
        }
        puVar5 = FUN_180023e70(&local_290,&local_150);
        local_220 = (longlong *)FUN_18000ac00(puVar5);
        puVar5 = FUN_180023e70(&local_290,&local_148);
        local_218 = (longlong *)FUN_18000ac00(puVar5);
        local_258 = (**(code **)(*local_220 + 0x58))(local_220);
        plVar4 = (longlong *)FUN_18000ac00(&local_290);
        local_1c8 = FUN_180016100(param_1,plVar4);
        local_1d0 = *local_218;
        lVar7 = (**(code **)(local_1d0 + 0x28))(local_218);
        puVar9 = (undefined1 *)(ulonglong)local_278;
        lVar6 = local_210;
        FUN_18000c680(local_108,local_274,local_278,local_210,lVar7,local_1c8,(undefined1)local_27c,
                      (char)local_258);
        FUN_18000d750(local_180,local_108);
      }
      FUN_180030120(local_208,local_274,local_278);
      iVar2 = FUN_180030170(local_208,(longlong)param_3,param_7,local_180);
      local_297 = -1 < iVar2;
      local_270 = (uint)(byte)local_297;
      FUN_180030160();
      FUN_18000c780(&local_290);
      FUN_18000c9a0(local_180);
      FUN_18000c780(&local_200);
    }
  }
LAB_1800168b5:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2d8);
  return;
}




void FUN_1800168e0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 *local_150;
  undefined4 local_148 [2];
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  IStorageDevice *local_128;
  longlong *local_120;
  undefined4 local_118 [2];
  longlong local_110;
  undefined4 local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  IObject local_b0 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_90 [40];
  IObject local_68 [80];
  ulonglong local_18;
  
  local_c8 = 0xfffffffffffffffe;
  local_18 = DAT_180053018 ^ (ulonglong)auStack_188;
  local_158 = (longlong *)FUN_180001960("Device");
  if (local_158 != (longlong *)0x0) {
    local_138 = (longlong *)(**(code **)(*local_158 + 0x38))(local_158);
    local_148[0] = 0;
    local_150 = (undefined8 *)(**(code **)(*local_138 + 0x30))(local_138,local_148);
    local_100 = *local_158;
    local_160 = local_150[1];
    local_168 = 3;
    local_140 = (longlong *)(**(code **)(local_100 + 0x40))(local_158,1,local_150[1],0xc0000000);
    uVar1 = (**(code **)(*(longlong *)*local_150 + 0x30))(*local_150);
    local_f8 = *param_1;
    plVar6 = local_140;
    plVar2 = (longlong *)(**(code **)(local_f8 + 0x38))(param_1,local_150[1]);
    FUN_180017870(&local_110,plVar2,plVar6,uVar1);
    puVar3 = FUN_180023e70(&local_110,&local_c0);
    local_130 = (longlong *)FUN_18000ac00(puVar3);
    local_108 = (**(code **)(*local_130 + 0x28))(local_130);
    FUN_18000c650(local_d8);
    FUN_18002de30(local_118,0xff,0x3f);
    puVar3 = local_d8;
    FUN_18002de80(local_118,local_140,(longlong)puVar3);
    local_f0 = local_d8;
    FUN_180017600(local_b0,&local_f0,puVar3,uVar1);
    lVar4 = FUN_18000e500((longlong)local_b0);
    if (lVar4 != 0) {
      local_128 = FUN_18000e490((longlong)local_b0);
      local_120 = (longlong *)(**(code **)(*(longlong *)local_128 + 0x28))(local_128);
      local_e8 = (**(code **)(*local_120 + 0x28))(local_120);
      FUN_180017410(local_68,&local_140,&local_e8);
      pcVar5 = (char *)FUN_180003480((longlong)local_68);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_90,pcVar5);
      local_b8 = FUN_1800034d0((longlong)local_68);
      FUN_180004370(local_90);
      FUN_180022160((longlong)local_68);
    }
    local_e0 = local_138;
    free(local_138);
    FUN_1800222e0((longlong)local_b0);
    FUN_18002de70();
    FUN_18000c9a0(local_d8);
    FUN_18000c780(&local_110);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_188);
  return;
}




void GetModule(undefined8 param_1)

{
  DAT_18005bce8 = param_1;
                    /* 0x16c00  47  GetModule */
  FUN_180026a30();
  return;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_180016c20(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             undefined8 param_2,undefined8 param_3)

{
  FUN_180017db0(param_1,param_3);
  return param_1;
}




undefined8 * FUN_180016c70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180003e70(param_2);
  *param_1 = *puVar1;
  puVar2 = (undefined1 *)FUN_180003e70(param_3);
  *(undefined1 *)(param_1 + 1) = *puVar2;
  return param_1;
}




undefined8 *
FUN_180016cc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003e70(param_3);
  FUN_180003e70(param_4);
  FUN_18000b9c0(param_1);
  return param_1;
}




IObject * FUN_180016d10(IObject *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4
                       )

{
  FUN_180016d60(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomCloneObject<class_CDiskDeviceType>::vftable;
  return param_1;
}




IObject * FUN_180016d60(IObject *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4
                       )

{
  FUN_180001560(param_1,(IObject *)*param_2,*param_3,*param_4);
  *(undefined ***)param_1 = CMomObject<class_CDiskDeviceType>::vftable;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}




IObject * FUN_180016dc0(IObject *param_1,undefined8 *param_2)

{
  FUN_18001c360(param_1,(IObject *)*param_2);
  *(undefined ***)param_1 =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>::vftable;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>::vftable;
  *(undefined ***)(param_1 + 0x98) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>::vftable;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return param_1;
}




IObject * FUN_180016e30(IObject *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4
                       )

{
  FUN_1800172a0(param_1,*param_2,param_3,param_4);
  *(undefined ***)param_1 =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>::vftable;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>::vftable;
  *(undefined ***)(param_1 + 0x48) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>::vftable;
  return param_1;
}




IStorageDevice *
FUN_180016eb0(IStorageDevice *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  FUN_180017470(param_1,*param_2,param_3,param_4,param_5);
  *(undefined ***)param_1 = CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>::vftable
  ;
  *(undefined ***)(param_1 + 0x30) =
       CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>::vftable;
  return param_1;
}




IObject * FUN_180016f40(IObject *param_1,undefined8 *param_2,IObject *param_3,void *param_4,
                       void *param_5,undefined8 *param_6,undefined8 *param_7)

{
  FUN_180017640(param_1,*param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined ***)param_1 = CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable
  ;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  *(undefined ***)(param_1 + 0x10) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  *(undefined ***)(param_1 + 0x18) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  *(undefined ***)(param_1 + 0xc0) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>::vftable;
  return param_1;
}




IObject * FUN_180017010(IObject *param_1,undefined8 *param_2,IObject *param_3)

{
  FUN_1800179a0(param_1,*param_2,param_3);
  *(undefined ***)param_1 = CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>::vftable;
  *(undefined ***)(param_1 + 0x30) =
       CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>::vftable;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}




IObject * FUN_180017070(IObject *param_1,undefined8 *param_2,IObject *param_3)

{
  FUN_180017a60(param_1,*param_2,param_3);
  *(undefined ***)param_1 =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>::vftable;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>::vftable;
  *(undefined ***)(param_1 + 0x48) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




UMSThreadInternalContext *
FUN_1800170f0(UMSThreadInternalContext *param_1,undefined8 *param_2,SchedulerBase *param_3)

{
  FUN_180017b50(param_1,*param_2,param_3);
  *(undefined ***)param_1 =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>::vftable;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>::vftable;
  *(undefined ***)(param_1 + 0x98) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>::vftable;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return param_1;
}




IStorageDevice *
FUN_180017170(IStorageDevice *param_1,undefined8 *param_2,IStorageDevice *param_3,undefined8 param_4
             )

{
  FUN_180017c30(param_1,*param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>::vftable
  ;
  *(undefined ***)(param_1 + 0x30) =
       CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>::vftable;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}




IObject * FUN_1800171f0(IObject *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4
                       ,undefined4 *param_5,undefined8 *param_6,IObject *param_7,IObject *param_8)

{
  FUN_180017f20(param_1,*param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined ***)param_1 = CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>::vftable;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>::vftable;
  *(undefined ***)(param_1 + 0x48) =
       CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>::vftable;
  return param_1;
}




IObject * FUN_1800172a0(IObject *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_1800173a0(param_1,param_3,param_4);
  FUN_180011960((undefined8 *)(param_1 + 0x48));
  *(undefined ***)param_1 = CMomAggObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 0x48) = CMomAggObject<class_CFileSystemPartition>::vftable;
  FUN_180013780((longlong)param_1,param_2);
  return param_1;
}




IObject * FUN_180017330(IObject *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1800173a0(param_1,param_2,param_3);
  *(undefined ***)param_1 = CMomCloneObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CFileSystemPartition>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




IObject * FUN_1800173a0(IObject *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1800030f0(param_1,(IObject *)*param_2,*param_3);
  *(undefined ***)param_1 = CMomObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CFileSystemPartition>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




IObject * FUN_180017410(IObject *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1800173a0(param_1,param_2,param_3);
  *(undefined ***)param_1 = CMomStackObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 8) = CMomStackObject<class_CFileSystemPartition>::vftable;
  return param_1;
}




IStorageDevice *
FUN_180017470(IStorageDevice *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  FUN_180017580(param_1,param_3,param_4,param_5);
  FUN_180011960((undefined8 *)(param_1 + 0x30));
  *(undefined ***)param_1 = CMomAggObject<class_CRangeDevice>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CRangeDevice>::vftable;
  *(undefined ***)(param_1 + 0x30) = CMomAggObject<class_CRangeDevice>::vftable;
  FUN_1800269f0((longlong)param_1,param_2);
  return param_1;
}




IStorageDevice *
FUN_180017510(IStorageDevice *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_180017580(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomCloneObject<class_CRangeDevice>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CRangeDevice>::vftable;
  return param_1;
}




IStorageDevice *
FUN_180017580(IStorageDevice *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_18002eb60(param_1,(longlong *)*param_2,*param_3,*param_4);
  *(undefined ***)param_1 = CMomObject<class_CRangeDevice>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CRangeDevice>::vftable;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}




IObject * FUN_180017600(IObject *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000ba40(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomStackObject<class_CPartitionEntryContainer>::vftable;
  return param_1;
}




IObject * FUN_180017640(IObject *param_1,undefined8 param_2,IObject *param_3,void *param_4,
                       void *param_5,undefined8 *param_6,undefined8 *param_7)

{
  FUN_1800177c0(param_1,param_3,param_4,param_5,param_6,param_7);
  FUN_180011960((undefined8 *)(param_1 + 0xc0));
  *(undefined ***)param_1 = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0xc0) = CMomAggObject<class_CPartitionEntryGPT>::vftable;
  FUN_1800137a0((longlong)param_1,param_2);
  return param_1;
}




IObject * FUN_180017720(IObject *param_1,IObject *param_2,void *param_3,void *param_4,
                       undefined8 *param_5,undefined8 *param_6)

{
  FUN_1800177c0(param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined ***)param_1 = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomCloneObject<class_CPartitionEntryGPT>::vftable;
  return param_1;
}




IObject * FUN_1800177c0(IObject *param_1,IObject *param_2,void *param_3,void *param_4,
                       undefined8 *param_5,undefined8 *param_6)

{
  FUN_180014aa0(param_1,param_2,param_3,param_4,*param_5,*param_6);
  *(undefined ***)param_1 = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x10) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined ***)(param_1 + 0x18) = CMomObject<class_CPartitionEntryGPT>::vftable;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return param_1;
}




longlong * FUN_180017870(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,param_2,param_3,param_4);
  return param_1;
}




longlong * FUN_1800178b0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,param_2,param_3,param_4);
  return param_1;
}




longlong * FUN_1800178f0(longlong *param_1,longlong *param_2)

{
  CTempBuffer<>(param_1,param_2);
  return param_1;
}




undefined8 FUN_180017930(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_180017940(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_180017930(param_1);
  uVar1 = FUN_180003e70(param_3);
  FUN_180017d80(param_1,uVar1);
  return param_1;
}




IObject * FUN_1800179a0(IObject *param_1,undefined8 param_2,IObject *param_3)

{
  FUN_180017a10(param_1,param_3);
  FUN_180011960((undefined8 *)(param_1 + 0x30));
  *(undefined ***)param_1 = CMomAggObject<class_CDiskDeviceType>::vftable;
  *(undefined ***)(param_1 + 0x30) = CMomAggObject<class_CDiskDeviceType>::vftable;
  FUN_1800269f0((longlong)param_1,param_2);
  return param_1;
}




IObject * FUN_180017a10(IObject *param_1,IObject *param_2)

{
  FUN_180021ae0(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CDiskDeviceType>::vftable;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}




IObject * FUN_180017a60(IObject *param_1,undefined8 param_2,IObject *param_3)

{
  FUN_180017af0(param_1,param_3);
  FUN_180011960((undefined8 *)(param_1 + 0x48));
  *(undefined ***)param_1 = CMomAggObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 0x48) = CMomAggObject<class_CFileSystemPartition>::vftable;
  FUN_180013780((longlong)param_1,param_2);
  return param_1;
}




IObject * FUN_180017af0(IObject *param_1,IObject *param_2)

{
  FUN_180021b60(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CFileSystemPartition>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




UMSThreadInternalContext *
FUN_180017b50(UMSThreadInternalContext *param_1,undefined8 param_2,SchedulerBase *param_3)

{
  Concurrency::details::UMSThreadInternalContext::UMSThreadInternalContext(param_1,param_3);
  FUN_180011960((undefined8 *)(param_1 + 0x98));
  *(undefined ***)param_1 = CMomAggObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined ***)(param_1 + 0x98) = CMomAggObject<class_CFileSystemPartitionExtendInfo>::vftable;
  FUN_180026a10((longlong)param_1,param_2);
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl Concurrency::details::UMSThreadInternalContext::UMSThreadInternalContext(class
   Concurrency::details::SchedulerBase * __ptr64) __ptr64
   
   Library: Visual Studio */

UMSThreadInternalContext * __thiscall
Concurrency::details::UMSThreadInternalContext::UMSThreadInternalContext
          (UMSThreadInternalContext *this,SchedulerBase *param_1)

{
  FUN_180021c30((IObject *)this,(IObject *)param_1);
  *(undefined ***)this = CMomObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined ***)(this + 8) = CMomObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined4 *)(this + 0x90) = 0;
  return this;
}




IStorageDevice *
FUN_180017c30(IStorageDevice *param_1,undefined8 param_2,IStorageDevice *param_3,undefined8 param_4)

{
  FUN_180017cc0(param_1,param_3,param_3,param_4);
  FUN_180011960((undefined8 *)(param_1 + 0x30));
  *(undefined ***)param_1 = CMomAggObject<class_CRangeDevice>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CRangeDevice>::vftable;
  *(undefined ***)(param_1 + 0x30) = CMomAggObject<class_CRangeDevice>::vftable;
  FUN_1800269f0((longlong)param_1,param_2);
  return param_1;
}




IStorageDevice *
FUN_180017cc0(IStorageDevice *param_1,IStorageDevice *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180021f30(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomObject<class_CRangeDevice>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CRangeDevice>::vftable;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}




undefined8 * FUN_180017d20(undefined8 *param_1,undefined8 param_2)

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
  uVar1 = FUN_180003e70(param_2);
  FUN_180017940(param_1,(ulonglong)local_18[0],uVar1);
  return param_1;
}




undefined8 * FUN_180017d80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003e70(param_2);
  *param_1 = uVar1;
  return param_1;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_180017db0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_180003e70(param_2);
  uVar2 = FUN_18001c0e0(puVar1);
  basic_string<>(param_1,uVar2);
  FUN_18000aa40((undefined8 *)(param_1 + 0x20));
  return param_1;
}




IObject * FUN_180017e10(IObject *param_1,IObject *param_2)

{
  FUN_180017a10(param_1,param_2);
  *(undefined ***)param_1 = CMomCloneObject<class_CDiskDeviceType>::vftable;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}




IObject * FUN_180017e60(IObject *param_1,IObject *param_2)

{
  FUN_180017af0(param_1,param_2);
  *(undefined ***)param_1 = CMomCloneObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CFileSystemPartition>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl Concurrency::details::UMSThreadInternalContext::UMSThreadInternalContext(class
   Concurrency::details::SchedulerBase * __ptr64) __ptr64
   
   Library: Visual Studio */

UMSThreadInternalContext * __thiscall
Concurrency::details::UMSThreadInternalContext::UMSThreadInternalContext
          (UMSThreadInternalContext *this,SchedulerBase *param_1)

{
  UMSThreadInternalContext(this,param_1);
  *(undefined ***)this = CMomCloneObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined ***)(this + 8) = CMomCloneObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined4 *)(this + 0x90) = 0;
  return this;
}




IObject * FUN_180017f20(IObject *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                       undefined4 *param_5,undefined8 *param_6,IObject *param_7,IObject *param_8)

{
  FUN_180018070(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_180011960((undefined8 *)(param_1 + 0x48));
  *(undefined ***)param_1 = CMomAggObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 0x48) = CMomAggObject<class_CPartitionEntry>::vftable;
  FUN_180013780((longlong)param_1,param_2);
  return param_1;
}




IObject * FUN_180017fe0(IObject *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4
                       ,undefined8 *param_5,IObject *param_6,IObject *param_7)

{
  FUN_180018070(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined ***)param_1 = CMomCloneObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CPartitionEntry>::vftable;
  return param_1;
}




IObject * FUN_180018070(IObject *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4
                       ,undefined8 *param_5,IObject *param_6,IObject *param_7)

{
  FUN_18000db20(param_1,(IObject *)*param_2,*param_3,*param_4,*param_5,*param_6,*param_7);
  *(undefined ***)param_1 = CMomObject<class_CPartitionEntry>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CPartitionEntry>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




void FUN_180018120(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180027190(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180018150(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180013a60(param_1,param_2,param_3,param_4);
  return;
}




bool FUN_180018180(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_180029f00(param_1,param_2);
  return iVar1 < 0;
}




void FUN_1800181c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180018260(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800181e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800182b0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180018200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180018300(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180018220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180018350(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180018240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800183a0(param_1,param_2,param_3,param_4);
  return;
}




undefined1 *
FUN_180018260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005c190 == (undefined1 *)0x0) {
    DAT_18005c190 = &DAT_18005c090;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x1800584f8,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005c190,local_18);
  }
  return DAT_18005c190;
}




undefined1 *
FUN_1800182b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005bf70 == (undefined1 *)0x0) {
    DAT_18005bf70 = &DAT_18005be70;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180056f00,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005bf70,local_18);
  }
  return DAT_18005bf70;
}




undefined1 *
FUN_180018300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005be60 == (undefined1 *)0x0) {
    DAT_18005be60 = &DAT_18005bd60;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180056ed8,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005be60,local_18);
  }
  return DAT_18005be60;
}




undefined1 *
FUN_180018350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005c2a0 == (undefined1 *)0x0) {
    DAT_18005c2a0 = &DAT_18005c1a0;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x1800530a0,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005c2a0,local_18);
  }
  return DAT_18005c2a0;
}




undefined1 *
FUN_1800183a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint local_18 [6];
  
  if (DAT_18005c080 == (undefined1 *)0x0) {
    DAT_18005c080 = &DAT_18005bf80;
    local_18[0] = 0x100;
    pcVar1 = (char *)FUN_180002130(0x180056f20,param_2,param_3,param_4);
    FUN_180001d80(pcVar1,DAT_18005c080,local_18);
  }
  return DAT_18005c080;
}




IStorageDevice * FUN_1800183f0(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      free(this);
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_180018470(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        FUN_180025130(this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_180018510(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      free(this);
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_180018590(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        FUN_180025170((undefined8 *)this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_180018630(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      free(this);
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_1800186b0(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        FUN_1800251b0(this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_180018750(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      free(this);
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_1800187d0(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        FUN_1800251f0((undefined8 *)this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




undefined8 FUN_180018870(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




_Container_proxy *
FUN_180018890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  p_Var1 = FUN_180027540(param_1);
  p_Var1[0x18] = (_Container_proxy)0x0;
  p_Var1[0x19] = (_Container_proxy)0x0;
  uVar2 = FUN_180003e70(param_4);
  uVar3 = FUN_180003e70(param_3);
  uVar4 = FUN_180003e70(param_2);
  uVar5 = FUN_180003e70(p_Var1 + 0x20);
  uVar6 = FUN_1800280a0(param_1);
  FUN_18001be60(uVar6,uVar5,uVar4,uVar3,uVar2);
  return p_Var1;
}




void FUN_180018960(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res8;
  
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 8) {
    plVar1 = (longlong *)FUN_180003e70(local_res8);
    destroy<>(param_3,plVar1);
  }
  return;
}




void FUN_1800189c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_180018960(param_1,param_2,param_3);
  return;
}




void FUN_180018a10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_180003e70(param_2);
  uVar2 = FUN_180003e70(*(undefined8 *)(param_1 + 8));
  FUN_18001bf10(*(undefined8 *)(param_1 + 0x10),uVar2,uVar1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  return;
}




void FUN_180018a70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_180003e70(param_2);
  puVar2 = (undefined8 *)FUN_180008bd0(param_1);
  uVar3 = FUN_180003e70(*puVar2);
  uVar4 = FUN_1800047c0(param_1);
  FUN_18001bf10(uVar4,uVar3,uVar1);
  FUN_180008bd0(param_1);
  FUN_180008bd0(param_1);
  FUN_180001c90();
  FUN_180008bd0(param_1);
  plVar5 = (longlong *)FUN_180008bd0(param_1);
  *plVar5 = *plVar5 + 8;
  return;
}




longlong FUN_180018b30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  CGPTDiskAnalyzer *pCVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  lVar2 = param_2 - *plVar1 >> 3;
  uVar3 = FUN_1800047c0(param_1);
  _Var4 = FUN_18002a4a0(param_1);
  _Var5 = FUN_18002a3a0(param_1);
  if (_Var4 == _Var5) {
    FUN_18000b140();
  }
  uVar6 = FUN_180027620(param_1,_Var4 + 1);
  pCVar7 = (CGPTDiskAnalyzer *)allocate(uVar3,uVar6);
  uVar8 = FUN_180003e70(param_3);
  uVar9 = FUN_180003e70(pCVar7 + lVar2 * 8);
  FUN_18001bf10(uVar3,uVar9,uVar8);
  plVar1 = (longlong *)FUN_180008bd0(param_1);
  if (param_2 == *plVar1) {
    puVar10 = (undefined8 *)FUN_180008bd0(param_1);
    puVar11 = (undefined8 *)FUN_180008bb0(param_1);
    FUN_180028640(param_1,*puVar11,*puVar10,pCVar7);
  }
  else {
    puVar10 = (undefined8 *)FUN_180008bb0(param_1);
    FUN_180028600(param_1,*puVar10,param_2,pCVar7);
    puVar10 = (undefined8 *)FUN_180008bd0(param_1);
    FUN_180028600(param_1,param_2,*puVar10,pCVar7 + lVar2 * 8 + 8);
  }
  FUN_1800276b0(param_1,(longlong)pCVar7,_Var4 + 1,uVar6);
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  return *plVar1 + lVar2 * 8;
}




void FUN_180018d70(undefined8 param_1,void *param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180003e70(param_2);
  FUN_180004140();
  FUN_180003e70((longlong)param_2 + 8);
  FUN_180004140();
  FUN_180003e70((longlong)param_2 + 0x10);
  FUN_180004140();
  FUN_180029fc0(local_18,param_2,1);
  return;
}




longlong FUN_180018e00(ulonglong param_1)

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
  
  local_18 = param_1 * 0x58;
  if (0x2e8ba2e8ba2e8ba < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




longlong FUN_180018ea0(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1 >> 3;
}




void FUN_180018ed0(longlong *param_1,longlong *param_2)

{
  FUN_180018ea0(param_1,param_2);
  return;
}




undefined8 *
FUN_180018f00(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,void *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_28;
  
  plVar1 = (longlong *)FUN_1800280a0(param_1);
  lVar2 = FUN_18002a380(param_1);
  if (lVar2 - 1U <= (ulonglong)plVar1[1]) {
    FUN_1800279d0(param_1,param_6);
    std::_Xlength_error("map/set<T> too long");
  }
  FUN_180003e70(param_5);
  plVar3 = (longlong *)FUN_180018870(param_1,param_6);
  plVar1[1] = plVar1[1] + 1;
  plVar3[1] = (longlong)param_4;
  local_28 = plVar3;
  if (param_4 == (undefined8 *)*plVar1) {
    puVar4 = (undefined8 *)FUN_180028390(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_18000ac00(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_1800088e0(plVar1);
    *puVar4 = plVar3;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar3;
    plVar5 = (longlong *)FUN_1800088e0(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_1800088e0(plVar1);
      *puVar4 = plVar3;
    }
  }
  else {
    *param_4 = plVar3;
    plVar5 = (longlong *)FUN_18000ac00(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_18000ac00(plVar1);
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
          FUN_180028120(plVar1,(longlong)local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_1800283b0(plVar1,*(longlong **)(local_28[1] + 8));
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
          FUN_1800283b0(plVar1,local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_180028120(plVar1,*(longlong *)(local_28[1] + 8));
      }
    }
  }
  plVar5 = (longlong *)FUN_180028390(plVar1);
  *(undefined1 *)(*plVar5 + 0x18) = 1;
  FUN_180003e70(plVar1);
  FUN_180008530(param_2,plVar3);
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x000180019315) */
/* WARNING: Removing unreachable block (ram,0x0001800193fb) */
/* WARNING: Removing unreachable block (ram,0x0001800194f0) */
/* WARNING: Removing unreachable block (ram,0x000180019554) */
/* WARNING: Removing unreachable block (ram,0x0001800195d6) */
/* WARNING: Removing unreachable block (ram,0x000180019632) */
/* WARNING: Removing unreachable block (ram,0x0001800195e7) */
/* WARNING: Removing unreachable block (ram,0x000180019683) */
/* WARNING: Removing unreachable block (ram,0x0001800196f3) */
/* WARNING: Removing unreachable block (ram,0x000180019741) */
/* WARNING: Removing unreachable block (ram,0x0001800197ae) */
/* WARNING: Removing unreachable block (ram,0x000180019810) */
/* WARNING: Removing unreachable block (ram,0x0001800197c2) */
/* WARNING: Removing unreachable block (ram,0x00018001985b) */
/* WARNING: Removing unreachable block (ram,0x00018001942b) */
/* WARNING: Removing unreachable block (ram,0x000180019490) */
/* WARNING: Removing unreachable block (ram,0x0001800194eb) */
/* WARNING: Removing unreachable block (ram,0x000180019345) */
/* WARNING: Removing unreachable block (ram,0x0001800193a5) */
/* WARNING: Removing unreachable block (ram,0x0001800193f1) */
/* WARNING: Removing unreachable block (ram,0x000180019860) */

undefined8 *
FUN_180019260(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_1800116a0(&local_140);
  local_138 = (longlong *)FUN_1800280a0(param_1);
  lVar3 = FUN_18002a480(param_1);
  if (lVar3 == 0) {
    uVar4 = FUN_180003e70(local_res20);
    FUN_180018f00(param_1,param_2,'\x01',(undefined8 *)*local_138,uVar4,param_5);
    return param_2;
  }
  plVar5 = FUN_180028700(param_1,&local_30);
  bVar1 = FUN_180008850((longlong *)&local_res18,plVar5);
  if (bVar1) {
    local_c0 = FUN_1800280d0(param_1,(longlong)local_res18);
    local_b8 = FUN_180028100(param_1,local_res20);
    uVar4 = FUN_1800047c0(param_1);
    cVar2 = FUN_180025080(uVar4,local_b8,local_c0);
    if (cVar2 != '\0') {
      uVar4 = FUN_180003e70(local_res20);
      FUN_180018f00(param_1,param_2,'\x01',local_res18,uVar4,param_5);
      return param_2;
    }
  }
  else {
    plVar5 = FUN_18002a020(param_1,&local_28);
    bVar1 = FUN_180008850((longlong *)&local_res18,plVar5);
    if (bVar1) {
      local_b0 = FUN_180028100(param_1,local_res20);
      plVar5 = (longlong *)FUN_1800088e0(local_138);
      local_a8 = FUN_1800280d0(param_1,*plVar5);
      uVar4 = FUN_1800047c0(param_1);
      cVar2 = FUN_180025080(uVar4,local_a8,local_b0);
      if (cVar2 != '\0') {
        local_a0 = FUN_180003e70(local_res20);
        puVar6 = (undefined8 *)FUN_1800088e0(local_138);
        FUN_180018f00(param_1,param_2,'\0',(undefined8 *)*puVar6,local_a0,param_5);
        return param_2;
      }
    }
    else {
      local_98 = FUN_1800280d0(param_1,(longlong)local_res18);
      local_90 = FUN_180028100(param_1,local_res20);
      uVar4 = FUN_1800047c0(param_1);
      cVar2 = FUN_180025080(uVar4,local_90,local_98);
      if (cVar2 != '\0') {
        local_140 = local_res18;
        local_88 = FUN_180028100(param_1,local_res20);
        plVar5 = FUN_180024000((longlong *)&local_140);
        local_80 = FUN_1800280d0(param_1,*plVar5);
        uVar4 = FUN_1800047c0(param_1);
        cVar2 = FUN_180025080(uVar4,local_80,local_88);
        if (cVar2 != '\0') {
          if (*(char *)(local_140[2] + 0x19) != '\0') {
            uVar4 = FUN_180003e70(local_res20);
            FUN_180018f00(param_1,param_2,'\0',local_140,uVar4,param_5);
            return param_2;
          }
          uVar4 = FUN_180003e70(local_res20);
          FUN_180018f00(param_1,param_2,'\x01',local_res18,uVar4,param_5);
          return param_2;
        }
      }
      local_78 = FUN_180028100(param_1,local_res20);
      local_70 = FUN_1800280d0(param_1,(longlong)local_res18);
      uVar4 = FUN_1800047c0(param_1);
      cVar2 = FUN_180025080(uVar4,local_70,local_78);
      if (cVar2 != '\0') {
        local_140 = local_res18;
        local_68 = FUN_18002a020(param_1,&local_20);
        plVar5 = FUN_180023f50((longlong *)&local_140);
        bVar1 = FUN_180008850(plVar5,local_68);
        if (!bVar1) {
          local_60 = FUN_1800280d0(param_1,(longlong)local_140);
          local_58 = FUN_180028100(param_1,local_res20);
          uVar4 = FUN_1800047c0(param_1);
          cVar2 = FUN_180025080(uVar4,local_58,local_60);
          if (cVar2 == '\0') goto LAB_180019dcb;
        }
        if (*(char *)(local_res18[2] + 0x19) != '\0') {
          uVar4 = FUN_180003e70(local_res20);
          FUN_180018f00(param_1,param_2,'\0',local_res18,uVar4,param_5);
          return param_2;
        }
        uVar4 = FUN_180003e70(local_res20);
        FUN_180018f00(param_1,param_2,'\x01',local_140,uVar4,param_5);
        return param_2;
      }
    }
  }
LAB_180019dcb:
  uVar4 = FUN_180003e70(local_res20);
  puVar6 = FUN_180019e30(param_1,local_18,'\0',uVar4,param_5);
  *param_2 = *puVar6;
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x000180019fc5) */

undefined8 *
FUN_180019e30(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,void *param_5)

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
  local_68 = (longlong *)FUN_1800280a0(param_1);
  local_88 = (undefined8 *)*local_68;
  local_90 = (undefined8 *)local_88[1];
  local_98 = '\x01';
  while (*(char *)((longlong)local_90 + 0x19) == '\0') {
    local_88 = local_90;
    if (param_3 == '\0') {
      local_50 = FUN_1800280d0(param_1,(longlong)local_90);
      local_48 = FUN_180028100(param_1,param_4);
      uVar3 = FUN_1800047c0(param_1);
      local_98 = FUN_180025080(uVar3,local_48,local_50);
    }
    else {
      local_60 = FUN_180028100(param_1,param_4);
      local_58 = FUN_1800280d0(param_1,(longlong)local_90);
      uVar3 = FUN_1800047c0(param_1);
      cVar1 = FUN_180025080(uVar3,local_58,local_60);
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
  FUN_180003e70(local_68);
  FUN_180008530(&local_78,local_88);
  if (local_98 != '\0') {
    plVar4 = FUN_180028700(param_1,&local_20);
    bVar2 = FUN_180008850(&local_78,plVar4);
    if (bVar2) {
      local_96 = 1;
      uVar3 = FUN_180003e70(param_4);
      puVar5 = FUN_180018f00(param_1,&local_18,'\x01',local_88,uVar3,param_5);
      FUN_180016c70(param_2,puVar5,&local_96);
      return param_2;
    }
    FUN_180024020(&local_78);
  }
  local_40 = FUN_180028100(param_1,param_4);
  local_38 = FUN_1800280d0(param_1,local_78);
  uVar3 = FUN_1800047c0(param_1);
  cVar1 = FUN_180025080(uVar3,local_38,local_40);
  if (cVar1 == '\0') {
    FUN_1800279d0(param_1,param_5);
    local_94[0] = 0;
    FUN_180016c70(param_2,&local_78,local_94);
  }
  else {
    local_95 = 1;
    uVar3 = FUN_180003e70(param_4);
    puVar5 = FUN_180018f00(param_1,local_10,local_98,local_88,uVar3,param_5);
    FUN_180016c70(param_2,puVar5,&local_95);
  }
  return param_2;
}




undefined8 * FUN_18001a210(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *local_18;
  undefined8 *local_10;
  
  plVar2 = (longlong *)FUN_1800280a0(param_1);
  local_10 = (undefined8 *)*plVar2;
  local_18 = (undefined8 *)local_10[1];
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    uVar3 = FUN_1800280d0(param_1,(longlong)local_18);
    cVar1 = FUN_1800277c0(param_1,uVar3,param_2);
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




undefined1 FUN_18001a2b0(void)

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




int FUN_18001a2e0(void *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

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
  iVar1 = FUN_180029f80(param_1,local_res18,*p_Var2);
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




undefined8 * FUN_18001a360(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

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
  
  FUN_18002a300(param_1,&local_40,param_3);
  plVar3 = FUN_18002a020(param_1,&local_20);
  bVar1 = FUN_180008850((longlong *)&local_40,plVar3);
  if (!bVar1) {
    local_38 = FUN_1800280d0(param_1,(longlong)local_40);
    uVar4 = FUN_1800047c0(param_1);
    cVar2 = FUN_180025080(uVar4,param_3,local_38);
    if (cVar2 == '\0') {
      local_47 = 0;
      FUN_180016c70(param_2,&local_40,&local_47);
      return param_2;
    }
  }
  local_48 = 1;
  local_28 = local_40;
  local_30 = FUN_18001c090(local_46);
  uVar4 = FUN_180003e70(param_3);
  puVar5 = FUN_18001c0b0(&local_18,uVar4);
  puVar5 = FUN_18001bff0(param_1,local_10,local_28,&DAT_18003ae8b,puVar5,local_30);
  FUN_180016c70(param_2,puVar5,&local_48);
  return param_2;
}




CGPTDiskAnalyzer *
FUN_18001a4b0(undefined8 param_1,undefined8 param_2,CGPTDiskAnalyzer *param_3,undefined8 param_4)

{
  CGPTDiskAnalyzer *pCVar1;
  undefined8 uVar2;
  CGPTDiskAnalyzer *local_res18;
  undefined8 local_res20;
  CGPTDiskAnalyzer local_37;
  CGPTDiskAnalyzer local_36 [6];
  longlong local_30;
  CGPTDiskAnalyzer *local_28;
  longlong local_20;
  CGPTDiskAnalyzer *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_30 = FUN_180003e70(param_1);
  local_20 = FUN_180003e70(param_2);
  pCVar1 = (CGPTDiskAnalyzer *)FUN_180018ed0(&local_30,&local_20);
  local_28 = CGPTDiskAnalyzer::operator=(local_res18,pCVar1);
  local_18 = &local_37;
  FUN_18001a2b0();
  CGPTDiskAnalyzer::operator=(local_18,local_36);
  uVar2 = FUN_18001a580(local_30,local_20,local_28,local_res20);
  FUN_18000a750(&local_res18,uVar2);
  return local_res18;
}




undefined8 FUN_18001a580(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  longlong local_28 [5];
  
  FUN_18000a990(local_28,param_3,param_4);
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 8) {
    uVar1 = FUN_180003e70(local_res8);
    FUN_180018a10((longlong)local_28,uVar1);
  }
  uVar1 = FUN_18000afb0(local_28);
  FUN_180022370(local_28);
  return uVar1;
}




undefined8 * FUN_18001a610(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001da20(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001e700(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001a6c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001da80(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001e800(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001a770(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001dae0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001e8f0(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 *
FUN_18001a820(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001db40(&local_20);
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001e9f0(puVar1,&local_20,param_2,param_3,param_4);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001a8f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001dba0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001eb00(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001a9a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001dc00(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001ec00(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001aa50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001dc60(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001ecf0(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001ab00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001dcc0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001edd0(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001abb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001dd20(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001eec0(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001ac60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001dd80(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001efc0(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001ad10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001dde0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001f0b0(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 *
FUN_18001adc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001de40(&local_20);
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001f200(puVar1,&local_20,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 *
FUN_18001aed0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001dea0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001f390(puVar1,&local_20,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 *
FUN_18001afd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001df00(&local_20);
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001f4f0(puVar1,&local_20,param_2,param_3,param_4,param_5);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001b0a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001df60(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001f610(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001b150(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001dfc0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001f710(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001b200(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e020(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001f800(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 *
FUN_18001b2b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e080(&local_20);
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001f900(puVar1,&local_20,param_2,param_3,param_4);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001b380(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e0e0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001fa00(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001b430(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e140(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001fae0(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001b4e0(undefined8 *param_1)

{
  CXMLParser *this;
  undefined8 local_28;
  IXMLDOMNode local_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e2c0((undefined8 *)local_20);
  this = (CXMLParser *)operator_new(0x10);
  if (this == (CXMLParser *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = CXMLParser::CXMLParser(this,local_20);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0((longlong *)local_20);
  return param_1;
}




undefined8 * FUN_18001b580(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e1a0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001fc90(puVar1,&local_20,param_2,param_3);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001b630(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e200(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001fd80(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001b6e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e260(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18001fe60(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001b790(undefined8 *param_1)

{
  CXMLParser *this;
  undefined8 local_28;
  IXMLDOMNode local_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e3e0((undefined8 *)local_20);
  this = (CXMLParser *)operator_new(0x10);
  if (this == (CXMLParser *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = CXMLParser::CXMLParser(this,local_20);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0((longlong *)local_20);
  return param_1;
}




undefined8 * FUN_18001b830(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e320(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180020000(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001b8e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e380(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_1800200e0(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001b990(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e440(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_1800201c0(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 *
FUN_18001ba40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e4a0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180020300(puVar1,&local_20,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 *
FUN_18001bb40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e500(&local_20);
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180020470(puVar1,&local_20,param_2,param_3,param_4,param_5,param_6);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001bc30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e560(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180020590(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 *
FUN_18001bce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e5c0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180020690(puVar1,&local_20,param_2,param_3,param_4);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18001bdb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18001e620(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_180020790(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




void FUN_18001be60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  CGPTDiskAnalyzer *pCVar1;
  byte *pbVar2;
  CGPTDiskAnalyzer local_48 [8];
  CGPTDiskAnalyzer *local_40;
  CGPTDiskAnalyzer *local_38;
  CGPTDiskAnalyzer *local_30;
  CGPTDiskAnalyzer *local_28;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_20;
  CGPTDiskAnalyzer local_18 [24];
  
  local_20 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_1800043a0(0x38,param_2);
  local_40 = local_48;
  local_38 = local_18;
  pCVar1 = (CGPTDiskAnalyzer *)FUN_180003e70(param_5);
  local_30 = CGPTDiskAnalyzer::operator=(local_40,pCVar1);
  pCVar1 = (CGPTDiskAnalyzer *)FUN_180003e70(param_4);
  local_28 = FUN_180021aa0(local_38,pCVar1);
  pbVar2 = (byte *)FUN_180003e70(param_3);
  FUN_180016c20(local_20,(ulonglong)*pbVar2,local_28);
  return;
}




void FUN_18001bf10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_1800043a0(8,param_2);
  puVar2 = (undefined8 *)FUN_180003e70(param_3);
  FUN_18001c9f0(plVar1,puVar2);
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
  FUN_1800252b0(param_2,0);
  return;
}




void FUN_18001bf80(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_18000af40(param_1);
  if (bVar1) {
    uVar2 = FUN_180003e70(param_2);
    FUN_180018a70(param_1,uVar2);
  }
  else {
    uVar2 = FUN_180003e70(param_2);
    plVar3 = (longlong *)FUN_180008bd0(param_1);
    FUN_180018b30(param_1,*plVar3,uVar2);
  }
  return;
}




undefined8 *
FUN_18001bff0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  _Container_proxy *p_Var4;
  
  uVar1 = FUN_180003e70(param_6);
  uVar2 = FUN_180003e70(param_5);
  uVar3 = FUN_180003e70(param_4);
  p_Var4 = FUN_180018890(param_1,uVar3,uVar2,uVar1);
  FUN_180019260(param_1,param_2,param_3,p_Var4 + 0x20,p_Var4);
  return param_2;
}




undefined8 FUN_18001c090(undefined8 param_1)

{
  FUN_180003e70(param_1);
  return param_1;
}




undefined8 * FUN_18001c0b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003e70(param_2);
  FUN_180017d20(param_1,uVar1);
  return param_1;
}




void FUN_18001c0e0(undefined8 *param_1)

{
  FUN_180003e70(*param_1);
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
  
  puVar1 = (undefined1 *)FUN_180003e70(param_1);
  local_18[0] = *puVar1;
  pcVar2 = (char *)FUN_180003e70(param_2);
  *param_1 = *pcVar2;
  pcVar2 = (char *)FUN_180003e70(local_18);
  *param_2 = *pcVar2;
  return;
}




undefined8 * FUN_18001c150(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003e70(param_3);
  FUN_18001a360(param_1,param_2,uVar1);
  return param_2;
}




IObject * FUN_18001c190(IObject *param_1,IObject *param_2)

{
  FUN_180021f00(param_1,param_2);
  *(undefined ***)param_1 = CModuleImpl<class_CPartitionModule>::vftable;
  return param_1;
}




IObject * FUN_18001c1c0(IObject *param_1,IObject *param_2)

{
  FUN_18001c7a0(param_1,param_2);
  FUN_180011940((undefined8 *)(param_1 + 0x30));
  *(undefined ***)param_1 = CMomAggObject<class_CDiskDeviceType>::vftable;
  *(undefined ***)(param_1 + 0x30) = CMomAggObject<class_CDiskDeviceType>::vftable;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}




IObject * FUN_18001c240(IObject *param_1,IObject *param_2)

{
  FUN_18001c7f0(param_1,param_2);
  FUN_180011940((undefined8 *)(param_1 + 0x48));
  *(undefined ***)param_1 = CMomAggObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 0x48) = CMomAggObject<class_CFileSystemPartition>::vftable;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  return param_1;
}




IObject * FUN_18001c2d0(IObject *param_1,IObject *param_2)

{
  FUN_18001c8b0(param_1,param_2);
  FUN_180011940((undefined8 *)(param_1 + 0x98));
  *(undefined ***)param_1 = CMomAggObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined ***)(param_1 + 0x98) = CMomAggObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  return param_1;
}




IObject * FUN_18001c360(IObject *param_1,IObject *param_2)

{
  FUN_18001c910(param_1,param_2);
  FUN_180011960((undefined8 *)(param_1 + 0x98));
  *(undefined ***)param_1 = CMomAggObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined ***)(param_1 + 0x98) = CMomAggObject<class_CFileSystemPartitionExtendInfo>::vftable;
  FUN_180026a10((longlong)param_1,param_2);
  return param_1;
}




IStorageDevice *
FUN_18001c3e0(IStorageDevice *param_1,IStorageDevice *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001c960(param_1,param_2,param_3,param_4);
  FUN_180011940((undefined8 *)(param_1 + 0x30));
  *(undefined ***)param_1 = CMomAggObject<class_CRangeDevice>::vftable;
  *(undefined ***)(param_1 + 8) = CMomAggObject<class_CRangeDevice>::vftable;
  *(undefined ***)(param_1 + 0x30) = CMomAggObject<class_CRangeDevice>::vftable;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}




IObject * FUN_18001c470(IObject *param_1,IObject *param_2)

{
  FUN_18001c1c0(param_1,param_2);
  *(undefined ***)param_1 = CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>::vftable;
  *(undefined ***)(param_1 + 0x30) =
       CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>::vftable;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}




IObject * FUN_18001c4d0(IObject *param_1,IObject *param_2)

{
  FUN_18001c240(param_1,param_2);
  *(undefined ***)param_1 =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>::vftable;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>::vftable;
  *(undefined ***)(param_1 + 0x48) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




IObject * FUN_18001c540(IObject *param_1,IObject *param_2)

{
  FUN_18001c2d0(param_1,param_2);
  *(undefined ***)param_1 =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>::vftable;
  *(undefined ***)(param_1 + 8) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>::vftable;
  *(undefined ***)(param_1 + 0x98) =
       CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>::vftable;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return param_1;
}




IStorageDevice *
FUN_18001c5b0(IStorageDevice *param_1,IStorageDevice *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001c3e0(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>::vftable
  ;
  *(undefined ***)(param_1 + 0x30) =
       CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>::vftable;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}




IObject * FUN_18001c620(IObject *param_1,IObject *param_2)

{
  FUN_18001c850(param_1,param_2);
  *(undefined ***)param_1 = CMomCloneObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CFileSystemPartition>::vftable;
  return param_1;
}




IObject * FUN_18001c670(IObject *param_1,IObject *param_2)

{
  FUN_18001c910(param_1,param_2);
  *(undefined ***)param_1 = CMomCloneObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CFileSystemPartitionExtendInfo>::vftable;
  return param_1;
}




IStorageDevice *
FUN_18001c6b0(IStorageDevice *param_1,IStorageDevice *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180017cc0(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomCloneObject<class_CRangeDevice>::vftable;
  *(undefined ***)(param_1 + 8) = CMomCloneObject<class_CRangeDevice>::vftable;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}




_AfxBindHost * FUN_18001c710(_AfxBindHost *param_1)

{
  _AfxBindHost::_AfxBindHost(param_1);
  *(undefined ***)param_1 = CMomEventObject<class_CModuleImpl<class_CPartitionModule>_>::vftable;
  FUN_180021a70((undefined8 *)(param_1 + 0x10));
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl _AfxBindHost::_AfxBindHost(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

_AfxBindHost * __thiscall _AfxBindHost::_AfxBindHost(_AfxBindHost *this)

{
  IObject *in_RDX;
  
  FUN_18001c190((IObject *)this,in_RDX);
  *(undefined ***)this = CMomObject<class_CModuleImpl<class_CPartitionModule>_>::vftable;
  *(undefined4 *)(this + 8) = 0;
  return this;
}




IObject * FUN_18001c7a0(IObject *param_1,IObject *param_2)

{
  FUN_180021ae0(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CDiskDeviceType>::vftable;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}




IObject * FUN_18001c7f0(IObject *param_1,IObject *param_2)

{
  FUN_180021b60(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CFileSystemPartition>::vftable;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}




IObject * FUN_18001c850(IObject *param_1,IObject *param_2)

{
  FUN_1800033e0(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CFileSystemPartition>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CFileSystemPartition>::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}




IObject * FUN_18001c8b0(IObject *param_1,IObject *param_2)

{
  FUN_180021c30(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  return param_1;
}




IObject * FUN_18001c910(IObject *param_1,IObject *param_2)

{
  FUN_180005660(param_1,param_2);
  *(undefined ***)param_1 = CMomObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CFileSystemPartitionExtendInfo>::vftable;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return param_1;
}




IStorageDevice *
FUN_18001c960(IStorageDevice *param_1,IStorageDevice *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180021f30(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = CMomObject<class_CRangeDevice>::vftable;
  *(undefined ***)(param_1 + 8) = CMomObject<class_CRangeDevice>::vftable;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}




undefined8 * FUN_18001c9c0(undefined8 *param_1)

{
  FUN_1800116e0(param_1);
  return param_1;
}




longlong * FUN_18001c9f0(longlong *param_1,undefined8 *param_2)

{
  CTempBuffer<>(param_1,(longlong *)*param_2);
  return param_1;
}




longlong *
FUN_18001ca30(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,(longlong *)*param_2,param_3,param_4);
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

longlong * CTempBuffer<>(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_180027010(param_1,param_2,param_3,param_4);
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

longlong * CTempBuffer<>(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_1800270d0(param_1,param_2,param_3,param_4);
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

longlong * CTempBuffer<>(longlong *param_1,longlong *param_2)

{
  *param_1 = 0;
  FUN_180027250(param_1,param_2);
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

longlong * CTempBuffer<>(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_180027310(param_1,param_2,param_3,param_4);
  return param_1;
}




_AfxBindHost * FUN_18001cb70(_AfxBindHost *param_1)

{
  FUN_18001c710(param_1);
  *(undefined ***)param_1 =
       CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CPartitionModule>_>_>::vftable;
  return param_1;
}




undefined8 * FUN_18001cbb0(undefined8 *param_1)

{
  FUN_180020800(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cbf0(undefined8 *param_1)

{
  FUN_180020840(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cc20(undefined8 *param_1)

{
  FUN_180020870(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cc60(undefined8 *param_1)

{
  FUN_1800208b0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cc90(undefined8 *param_1)

{
  FUN_1800208e0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001ccd0(undefined8 *param_1)

{
  FUN_180020920(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cd00(undefined8 *param_1)

{
  FUN_1800209c0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cd40(undefined8 *param_1)

{
  FUN_180020a00(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cd70(undefined8 *param_1)

{
  FUN_180020a30(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cdb0(undefined8 *param_1)

{
  FUN_180020a70(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cde0(undefined8 *param_1)

{
  FUN_180020aa0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001ce20(undefined8 *param_1)

{
  FUN_180020ae0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001ce50(undefined8 *param_1)

{
  FUN_180020b10(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001ce90(undefined8 *param_1)

{
  FUN_180020b50(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cec0(undefined8 *param_1)

{
  FUN_180020bf0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cf00(undefined8 *param_1)

{
  FUN_180020c30(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cf30(undefined8 *param_1)

{
  FUN_180020c60(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cf70(undefined8 *param_1)

{
  FUN_180020ca0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cfa0(undefined8 *param_1)

{
  FUN_180020cd0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001cfe0(undefined8 *param_1)

{
  FUN_180020d10(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d010(undefined8 *param_1)

{
  FUN_180020d40(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d050(undefined8 *param_1)

{
  FUN_180020d80(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d080(undefined8 *param_1)

{
  FUN_180020e20(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d0c0(undefined8 *param_1)

{
  FUN_180020e60(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d0f0(undefined8 *param_1)

{
  FUN_180020e90(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d130(undefined8 *param_1)

{
  FUN_180020ed0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d160(undefined8 *param_1)

{
  FUN_180020f00(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d1a0(undefined8 *param_1)

{
  FUN_180020f40(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d1d0(undefined8 *param_1)

{
  FUN_180020f70(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d210(undefined8 *param_1)

{
  FUN_180020fb0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d240(undefined8 *param_1)

{
  FUN_180020fe0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d280(undefined8 *param_1)

{
  FUN_180021020(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d2b0(undefined8 *param_1)

{
  FUN_180021050(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d2f0(undefined8 *param_1)

{
  FUN_180021090(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d320(undefined8 *param_1)

{
  FUN_180021130(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(struct_IDiskEntry*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d360(undefined8 *param_1)

{
  FUN_180021170(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(struct_IDiskEntry*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d390(undefined8 *param_1)

{
  FUN_1800211a0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d3d0(undefined8 *param_1)

{
  FUN_1800211e0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d400(undefined8 *param_1)

{
  FUN_180021210(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CDiskDeviceType_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d440(undefined8 *param_1)

{
  FUN_180021250(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CDiskDeviceType_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d470(undefined8 *param_1)

{
  FUN_1800212f0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d4b0(undefined8 *param_1)

{
  FUN_180021330(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d4e0(undefined8 *param_1)

{
  FUN_180021360(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d520(undefined8 *param_1)

{
  FUN_1800213a0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d550(undefined8 *param_1)

{
  FUN_1800213d0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CFileSystemPartition_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d590(undefined8 *param_1)

{
  FUN_180021410(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CFileSystemPartition_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d5c0(undefined8 *param_1)

{
  FUN_180021440(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d600(undefined8 *param_1)

{
  FUN_180021480(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d630(undefined8 *param_1)

{
  FUN_1800214b0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d670(undefined8 *param_1)

{
  FUN_1800214f0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d6a0(undefined8 *param_1)

{
  FUN_180021520(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CFileSystemPartitionExtendInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d6e0(undefined8 *param_1)

{
  FUN_180021560(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CFileSystemPartitionExtendInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d710(undefined8 *param_1)

{
  FUN_180021590(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d750(undefined8 *param_1)

{
  FUN_1800215d0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d780(undefined8 *param_1)

{
  FUN_180021600(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CPartitionEntry_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d7c0(undefined8 *param_1)

{
  FUN_180021640(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CPartitionEntry_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d7f0(undefined8 *param_1)

{
  FUN_180021670(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d830(undefined8 *param_1)

{
  FUN_1800216b0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d860(undefined8 *param_1)

{
  FUN_1800216e0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d8a0(undefined8 *param_1)

{
  FUN_180021720(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d8d0(undefined8 *param_1)

{
  FUN_180021750(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CPartitionEntryGPT_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d910(undefined8 *param_1)

{
  FUN_180021790(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CPartitionEntryGPT_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d940(undefined8 *param_1)

{
  FUN_1800217c0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d980(undefined8 *param_1)

{
  FUN_180021800(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d9b0(undefined8 *param_1)

{
  FUN_180021830(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001d9f0(undefined8 *param_1)

{
  FUN_180021870(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18001da20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cbf0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001da80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cc60(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001dae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001ccd0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001db40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cd40(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001dba0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cdb0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001dc00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001ce20(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001dc60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001ce90(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001dcc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cf00(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001dd20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cf70(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001dd80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cfe0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001dde0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d050(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001de40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d0c0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001dea0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d130(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001df00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d1a0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001df60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d210(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001dfc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d280(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e020(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d2f0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e080(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d360(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e0e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d3d0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e140(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d440(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e1a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d4b0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e200(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d520(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e260(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d590(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e2c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d600(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e320(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d670(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e380(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d6e0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e3e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d750(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e440(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d7c0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e4a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d830(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e500(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d8a0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e560(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d910(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e5c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d980(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e620(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d9f0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18001e680(undefined8 *param_1,longlong param_2)

{
  FUN_180020950(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_18001e700(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180020990(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_18001e780(undefined8 *param_1,longlong param_2)

{
  FUN_180020950(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_18001e800(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180020990(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_18001e880(undefined8 *param_1,longlong param_2)

{
  FUN_180020950(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001e8f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_180020990(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001e960(undefined8 *param_1,longlong param_2)

{
  FUN_180020b80(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,3>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}




undefined8 *
FUN_18001e9f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_180020bc0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,3>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  return param_1;
}




undefined8 * FUN_18001ea80(undefined8 *param_1,longlong param_2)

{
  FUN_180020b80(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_18001eb00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180020bc0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_18001eb80(undefined8 *param_1,longlong param_2)

{
  FUN_180020b80(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_18001ec00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180020bc0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_18001ec80(undefined8 *param_1,longlong param_2)

{
  FUN_180020b80(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001ecf0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_180020bc0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001ed60(undefined8 *param_1,longlong param_2)

{
  FUN_180020db0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001edd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_180020df0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001ee40(undefined8 *param_1,longlong param_2)

{
  FUN_180020db0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_18001eec0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180020df0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_18001ef40(undefined8 *param_1,longlong param_2)

{
  FUN_180020db0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_18001efc0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180020df0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_18001f040(undefined8 *param_1,longlong param_2)

{
  FUN_180020db0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001f0b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_180020df0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001f120(undefined8 *param_1,longlong param_2)

{
  FUN_180011070(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>,7>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  return param_1;
}




undefined8 *
FUN_18001f200(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  FUN_1800110b0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>,7>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  param_1[7] = param_8;
  param_1[8] = param_9;
  return param_1;
}




undefined8 * FUN_18001f2c0(undefined8 *param_1,longlong param_2)

{
  FUN_180011230(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,6>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}




undefined8 *
FUN_18001f390(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_180011270(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,6>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  param_1[7] = param_8;
  return param_1;
}




undefined8 * FUN_18001f440(undefined8 *param_1,longlong param_2)

{
  FUN_1800210c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,4>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}




undefined8 *
FUN_18001f4f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_180021100(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,4>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  return param_1;
}




undefined8 * FUN_18001f590(undefined8 *param_1,longlong param_2)

{
  FUN_1800210c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_18001f610(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180021100(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_18001f690(undefined8 *param_1,longlong param_2)

{
  FUN_1800210c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_18001f710(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180021100(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_18001f790(undefined8 *param_1,longlong param_2)

{
  FUN_1800210c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001f800(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_180021100(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001f870(undefined8 *param_1,longlong param_2)

{
  FUN_180021280(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(struct_IDiskEntry*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,3>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}




undefined8 *
FUN_18001f900(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1800212c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(struct_IDiskEntry*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,3>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  return param_1;
}




undefined8 * FUN_18001f990(undefined8 *param_1,longlong param_2)

{
  FUN_180021280(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001fa00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1800212c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001fa70(undefined8 *param_1,longlong param_2)

{
  FUN_180021280(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CDiskDeviceType_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001fae0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1800212c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CDiskDeviceType_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001fb50(undefined8 *param_1,longlong param_2)

{
  FUN_180021440(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,0>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  return param_1;
}




/* Library Function - Single Match
    protected: __cdecl CXMLParser::CXMLParser(struct IXMLDOMNode * __ptr64) __ptr64
   
   Library: Visual Studio 2010 Debug */

CXMLParser * __thiscall CXMLParser::CXMLParser(CXMLParser *this,IXMLDOMNode *param_1)

{
  FUN_180021480((undefined8 *)this);
  *(undefined ***)this =
       dnc::
       FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,0>
       ::vftable;
  FUN_18000c0e0((undefined8 *)(this + 8),(undefined8 *)param_1);
  return this;
}




undefined8 * FUN_18001fc10(undefined8 *param_1,longlong param_2)

{
  FUN_180021440(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}




undefined8 *
FUN_18001fc90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180021480(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,2>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}




undefined8 * FUN_18001fd10(undefined8 *param_1,longlong param_2)

{
  FUN_180021440(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001fd80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_180021480(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001fdf0(undefined8 *param_1,longlong param_2)

{
  FUN_180021440(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CFileSystemPartition_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18001fe60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_180021480(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CFileSystemPartition_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18001fed0(undefined8 *param_1,longlong param_2)

{
  FUN_180021590(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,0>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  return param_1;
}




/* Library Function - Single Match
    protected: __cdecl CXMLParser::CXMLParser(struct IXMLDOMNode * __ptr64) __ptr64
   
   Library: Visual Studio 2010 Debug */

CXMLParser * __thiscall CXMLParser::CXMLParser(CXMLParser *this,IXMLDOMNode *param_1)

{
  FUN_1800215d0((undefined8 *)this);
  *(undefined ***)this =
       dnc::
       FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,0>
       ::vftable;
  FUN_18000c0e0((undefined8 *)(this + 8),(undefined8 *)param_1);
  return this;
}




undefined8 * FUN_18001ff90(undefined8 *param_1,longlong param_2)

{
  FUN_180021590(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_180020000(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1800215d0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_180020070(undefined8 *param_1,longlong param_2)

{
  FUN_180021590(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CFileSystemPartitionExtendInfo_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_1800200e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1800215d0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CFileSystemPartitionExtendInfo_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_180020150(undefined8 *param_1,longlong param_2)

{
  FUN_180011380(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CPartitionEntry_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_1800201c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1800113c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CPartitionEntry_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_180020230(undefined8 *param_1,longlong param_2)

{
  FUN_180011380(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>,6>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}




undefined8 *
FUN_180020300(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_1800113c0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>,6>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  param_1[7] = param_8;
  return param_1;
}




undefined8 * FUN_1800203b0(undefined8 *param_1,longlong param_2)

{
  FUN_1800114d0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,5>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}




undefined8 *
FUN_180020470(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_180011510(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,5>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  return param_1;
}




undefined8 * FUN_180020520(undefined8 *param_1,longlong param_2)

{
  FUN_1800114d0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CPartitionEntryGPT_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_180020590(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_180011510(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CPartitionEntryGPT_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_180020600(undefined8 *param_1,longlong param_2)

{
  FUN_1800218a0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,3>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}




undefined8 *
FUN_180020690(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1800218e0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,3>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  return param_1;
}




undefined8 * FUN_180020720(undefined8 *param_1,longlong param_2)

{
  FUN_1800218a0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_180020790(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1800218e0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_180020800(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020840(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020870(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800208b0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800208e0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020920(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020950(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020990(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800209c0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020a00(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020a30(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020a70(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020aa0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020ae0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020b10(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020b50(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020b80(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020bc0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020bf0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020c30(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020c60(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020ca0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020cd0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020d10(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020d40(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020d80(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020db0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020df0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020e20(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020e60(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020e90(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020ed0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020f00(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020f40(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020f70(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020fb0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180020fe0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021020(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021050(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021090(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800210c0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021100(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021130(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(struct_IDiskEntry*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021170(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(struct_IDiskEntry*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800211a0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800211e0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021210(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CDiskDeviceType_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021250(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CDiskDeviceType_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021280(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::FunctorObject<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800212c0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::FunctorObject<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800212f0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021330(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021360(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800213a0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800213d0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CFileSystemPartition_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021410(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CFileSystemPartition_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021440(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021480(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800214b0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800214f0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021520(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CFileSystemPartitionExtendInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021560(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CFileSystemPartitionExtendInfo_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021590(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800215d0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021600(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CPartitionEntry_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021640(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CPartitionEntry_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021670(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800216b0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800216e0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021720(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021750(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CPartitionEntryGPT_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021790(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CPartitionEntryGPT_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800217c0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021800(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021830(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_180021870(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_1800218a0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::FunctorObject<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(void)>::
             vftable;
  return param_1;
}




undefined8 * FUN_1800218e0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::FunctorObject<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(void)>::
             vftable;
  return param_1;
}




undefined8 * FUN_180021910(undefined8 *param_1,undefined8 param_2)

{
  FUN_180021950(param_1,param_2);
  return param_1;
}




undefined8 * FUN_180021950(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_18;
  byte local_17;
  
  FUN_180016cc0(param_1,(ulonglong)local_17,param_2,&local_18);
  FUN_180027800(param_1);
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
  uVar1 = FUN_1800047c0(param_2);
  uVar1 = FUN_180003e70(uVar1);
  FUN_180003c80((longlong)param_1,uVar1);
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_180003e70(param_2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _Assign_rv_contents_with_alloc_always_equal(param_1,uVar1,local_18[0]);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64
    public: __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >(class std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> > const & __ptr64) __ptr64
    public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

longlong basic_string<>(longlong param_1,undefined8 param_2)

{
  CGPTDiskAnalyzer *pCVar1;
  CGPTDiskAnalyzer local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  pCVar1 = (CGPTDiskAnalyzer *)FUN_1800047c0(param_2);
  pCVar1 = CGPTDiskAnalyzer::operator=(local_18,pCVar1);
  FUN_180003c80(param_1,pCVar1);
  FID_conflict__Construct_lv_contents(param_1,param_2);
  return param_1;
}




undefined8 * FUN_180021a70(undefined8 *param_1)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180021910(param_1,local_18);
  return param_1;
}




CGPTDiskAnalyzer * FUN_180021aa0(CGPTDiskAnalyzer *param_1,CGPTDiskAnalyzer *param_2)

{
  CGPTDiskAnalyzer::operator=(param_1,param_2);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return param_1;
}




IObject * FUN_180021ae0(IObject *param_1,IObject *param_2)

{
  FUN_180021fc0(param_1,param_2);
  *(undefined ***)param_1 = CDiskDeviceType::vftable;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}




IObject * FUN_180021b60(IObject *param_1,IObject *param_2)

{
  FUN_180022000(param_1,param_2);
  FUN_180022040(param_1 + 8,param_2 + 8);
  *(undefined ***)param_1 = CFileSystemPartition::vftable;
  *(undefined ***)(param_1 + 8) = CFileSystemPartition::vftable;
  basic_string<>((longlong)(param_1 + 0x10),param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  return param_1;
}




IObject * FUN_180021c30(IObject *param_1,IObject *param_2)

{
  longlong lVar1;
  IObject *pIVar2;
  IObject *pIVar3;
  
  FUN_180022080(param_1,param_2);
  FUN_1800220c0(param_1 + 8,param_2 + 8);
  *(undefined ***)param_1 = CFileSystemPartitionExtendInfo::vftable;
  *(undefined ***)(param_1 + 8) = CFileSystemPartitionExtendInfo::vftable;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  param_1[0x2c] = param_2[0x2c];
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  param_1[0x34] = param_2[0x34];
  pIVar2 = param_2 + 0x38;
  pIVar3 = param_1 + 0x38;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pIVar3 = *pIVar2;
    pIVar2 = pIVar2 + 1;
    pIVar3 = pIVar3 + 1;
  }
  param_1[0x48] = param_2[0x48];
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  param_1[0x78] = param_2[0x78];
  param_1[0x79] = param_2[0x79];
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  param_1[0x88] = param_2[0x88];
  return param_1;
}




GPT_GUID *
FUN_180021e00(GPT_GUID *param_1,GPT_PartitionType param_2,void *param_3,undefined8 param_4,
             undefined8 param_5,void *param_6,undefined8 param_7)

{
  memset(param_1,0,0x80);
  GPT_SetPartitionTypeGUIDFromType(param_2,param_1);
  memcpy(param_1 + 0x10,param_3,0x10);
  memcpy(param_1 + 0x38,param_6,8);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *(undefined8 *)(param_1 + 0x30) = param_7;
  return param_1;
}




undefined8 * FUN_180021eb0(undefined8 *param_1,undefined8 param_2,char param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (param_3 != '\0') {
    FUN_180026d60(param_1,0xffffffff);
  }
  return param_1;
}




IObject * FUN_180021f00(IObject *param_1,IObject *param_2)

{
  FUN_180022130(param_1,param_2);
  *(undefined ***)param_1 = CPartitionModule::vftable;
  return param_1;
}




IStorageDevice *
FUN_180021f30(IStorageDevice *param_1,IStorageDevice *param_2,undefined8 param_3,undefined8 param_4)

{
  IStorageDevice::IStorageDevice(param_1,param_2);
  *(undefined ***)param_1 = CRangeDevice::vftable;
  *(undefined ***)(param_1 + 8) = CRangeDevice::vftable;
  FUN_18001ca30((longlong *)(param_1 + 0x10),(undefined8 *)(param_2 + 0x10),param_3,param_4);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}




IObject * FUN_180021fc0(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IDiskDeviceType::vftable;
  return param_1;
}




IObject * FUN_180022000(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IFileSystemPartition::vftable;
  return param_1;
}




IObject * FUN_180022040(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IFileSystemPartitionEditor::vftable;
  return param_1;
}




IObject * FUN_180022080(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IFileSystemPartitionExtendInfo::vftable;
  return param_1;
}




IObject * FUN_1800220c0(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IFileSystemPartitionExtendInfoEditor::vftable;
  return param_1;
}




IObject * FUN_180022100(IObject *param_1,IObject *param_2)

{
  IObject::IObject(param_1,param_2);
  *(undefined ***)param_1 = IModule::vftable;
  return param_1;
}




IObject * FUN_180022130(IObject *param_1,IObject *param_2)

{
  FUN_180022100(param_1,param_2);
  *(undefined ***)param_1 = IPartitionModule::vftable;
  return param_1;
}




void FUN_180022160(longlong param_1)

{
  FUN_180022250(param_1);
  return;
}




void FUN_180022190(undefined8 *param_1)

{
  FUN_180022280(param_1);
  return;
}




void FUN_1800221c0(longlong param_1)

{
  FUN_180022160(param_1);
  return;
}




void FUN_1800221f0(undefined8 *param_1)

{
  FUN_180022190(param_1);
  return;
}




void FUN_180022220(longlong param_1)

{
  FUN_1800223b0(param_1 + 0x10);
  return;
}




void FUN_180022250(longlong param_1)

{
  FUN_180022450(param_1);
  return;
}




void FUN_180022280(undefined8 *param_1)

{
  FUN_18002ebf0(param_1);
  return;
}




void FUN_1800222b0(longlong param_1)

{
  FUN_180022220(param_1);
  return;
}




void FUN_1800222e0(longlong param_1)

{
  FUN_18000c750(param_1);
  return;
}




void FUN_180022310(undefined8 param_1)

{
  FUN_1800284d0(param_1);
  FUN_180022340(param_1);
  return;
}




void FUN_180022340(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800280a0(param_1);
  FUN_180028070(param_1,(void *)*puVar1);
  return;
}




void FUN_180022370(longlong *param_1)

{
  FUN_1800189c0(*param_1,param_1[1],param_1[2]);
  return;
}




void FUN_1800223b0(undefined8 param_1)

{
  FUN_180022310(param_1);
  return;
}




void FUN_1800223e0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  FUN_180022420(param_1 + 0x20);
  FUN_180004370(param_1);
  return;
}




void FUN_180022420(undefined8 param_1)

{
  FUN_180028530(param_1);
  return;
}




void FUN_180022450(longlong param_1)

{
  FUN_180004370((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_1 + 0x10));
  return;
}




void FUN_180022480(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))(*param_1);
  return;
}




longlong FUN_1800224b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  lVar1 = FUN_180003e70(param_2);
  if (param_1 != lVar1) {
    FUN_180028530(param_1);
    uVar2 = FUN_1800047c0(param_2);
    Move_alloc(param_1,uVar2);
    puVar3 = local_18;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar2 = FUN_180003e70(param_2);
    FUN_180028260(param_1,uVar2);
  }
  return param_1;
}




bool FUN_180022540(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022590(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800225e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022630(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022680(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800226d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022720(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022770(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800227c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022810(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022860(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800228b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022900(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022950(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800229a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800229f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022a40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022a90(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(struct_IDiskEntry*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022ae0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022b30(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CDiskDeviceType_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022b80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022bd0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022c20(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CFileSystemPartition_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022c70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022cc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022d10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CFileSystemPartitionExtendInfo_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022d60(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022db0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CPartitionEntry_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022e00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022e50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022ea0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CPartitionEntryGPT_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022ef0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180022f40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




undefined8 FUN_180022f90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023000(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023070(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CDiskDeviceType>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800230e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,3>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023150(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800231c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023230(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartition>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800232a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023310(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023380(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800233f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CFileSystemPartitionExtendInfo>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023460(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntry>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>,7>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800234d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CPartitionEntryGPT>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,6>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023540(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,4>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800235b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023620(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023690(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CRangeDevice>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023700(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(struct_IDiskEntry*___ptr64_const&___ptr64,struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,3>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023770(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CMomCloneObject<class_CDiskDeviceType>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800237e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CDiskDeviceType>*___ptr64___cdecl(class_CDiskDeviceType_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023850(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,0>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800238c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023930(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartition>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_1800239a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartition>*___ptr64___cdecl(class_CFileSystemPartition_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023a10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,0>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023a80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023af0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CFileSystemPartitionExtendInfo>*___ptr64___cdecl(class_CFileSystemPartitionExtendInfo_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023b60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(class_CPartitionEntry_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023bd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntry>*___ptr64___cdecl(unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64,int_const&___ptr64,unsigned___int64_const&___ptr64,bool_const&___ptr64,bool_const&___ptr64)>,6>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023c40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(struct_GPT_GUID_const&___ptr64,struct_GPT_GUID_const&___ptr64,unsigned_short_const_(&___ptr64)[36],unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,5>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023cb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CPartitionEntryGPT>*___ptr64___cdecl(class_CPartitionEntryGPT_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023d20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64,unsigned___int64_const&___ptr64)>,3>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_180023d90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CRangeDevice>*___ptr64___cdecl(class_CMomCloneObject<class_CRangeDevice>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




longlong FUN_180023e00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_18 [3];
  
  uVar1 = FUN_180003e70(param_2);
  plVar2 = FUN_18001c150(param_1,local_18,uVar1);
  lVar3 = FUN_180023ea0(plVar2);
  return lVar3 + 0x20;
}




longlong FUN_180023e40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  return *plVar1 + param_2 * 8;
}




undefined8 * FUN_180023e70(undefined8 *param_1,undefined8 *param_2)

{
  FUN_18000ba90(param_2,*param_1);
  return param_2;
}




void FUN_180023ea0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180023ee0(param_1);
  FUN_18002a3f0(uVar1);
  return;
}




longlong FUN_180023ec0(longlong *param_1)

{
  return *param_1 + 0x20;
}




void FUN_180023ee0(longlong *param_1)

{
  FUN_180023ec0(param_1);
  return;
}




longlong * FUN_180023f00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180023f50(param_1);
  *param_2 = lVar1;
  return param_2;
}




longlong * FUN_180023f50(longlong *param_1)

{
  FUN_180023f70(param_1);
  return param_1;
}




longlong * FUN_180023f70(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(*(longlong *)(*param_1 + 0x10) + 0x19) == '\0') {
    plVar2 = FUN_180028230(*(longlong **)(*param_1 + 0x10));
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




longlong * FUN_180024000(longlong *param_1)

{
  FUN_180024040(param_1);
  return param_1;
}




longlong * FUN_180024020(longlong *param_1)

{
  FUN_180024000(param_1);
  return param_1;
}




longlong * FUN_180024040(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(*param_1 + 0x19) == '\0') {
    if (*(char *)(*(longlong *)*param_1 + 0x19) == '\0') {
      lVar2 = FUN_180028200(*(longlong *)*param_1);
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

IObject * CreateVirtualProcessor(undefined8 param_1,undefined8 *param_2,IObject *param_3)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x40);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180017010(pIVar1,param_2,param_3);
  }
  return local_20;
}




IObject * FUN_180024180(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x40);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18001c470(pIVar1,param_2);
  }
  return local_20;
}




IObject * FUN_1800241f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 *param_4)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x58);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180016e30(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
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

IObject * CreateVirtualProcessor(undefined8 param_1,undefined8 *param_2,IObject *param_3)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x58);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180017070(pIVar1,param_2,param_3);
  }
  return local_20;
}




IObject * FUN_1800242e0(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x58);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18001c4d0(pIVar1,param_2);
  }
  return local_20;
}




IObject * FUN_180024350(undefined8 param_1,undefined8 *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0xa8);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180016dc0(pIVar1,param_2);
  }
  return local_20;
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

UMSThreadInternalContext *
CreateVirtualProcessor(undefined8 param_1,undefined8 *param_2,SchedulerBase *param_3)

{
  UMSThreadInternalContext *pUVar1;
  undefined8 local_20;
  
  pUVar1 = (UMSThreadInternalContext *)operator_new(0xa8);
  if (pUVar1 == (UMSThreadInternalContext *)0x0) {
    local_20 = (UMSThreadInternalContext *)0x0;
  }
  else {
    local_20 = FUN_1800170f0(pUVar1,param_2,param_3);
  }
  return local_20;
}




IObject * FUN_180024430(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0xa8);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18001c540(pIVar1,param_2);
  }
  return local_20;
}




IObject * FUN_1800244a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 *param_4,undefined4 *param_5,undefined8 *param_6,IObject *param_7,
                       IObject *param_8)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x58);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_1800171f0(pIVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return local_20;
}




IObject * FUN_180024550(undefined8 param_1,undefined8 *param_2,IObject *param_3,void *param_4,
                       void *param_5,undefined8 *param_6,undefined8 *param_7)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0xd0);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180016f40(pIVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return local_20;
}




IStorageDevice *
FUN_180024600(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  IStorageDevice *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IStorageDevice *)operator_new(0x40);
  if (pIVar1 == (IStorageDevice *)0x0) {
    local_20 = (IStorageDevice *)0x0;
  }
  else {
    local_20 = FUN_180016eb0(pIVar1,param_2,param_3,param_4,param_5);
  }
  return local_20;
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

IStorageDevice *
CreateVirtualProcessor
          (undefined8 param_1,undefined8 *param_2,IStorageDevice *param_3,undefined8 param_4)

{
  IStorageDevice *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IStorageDevice *)operator_new(0x40);
  if (pIVar1 == (IStorageDevice *)0x0) {
    local_20 = (IStorageDevice *)0x0;
  }
  else {
    local_20 = FUN_180017170(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




IStorageDevice *
FUN_180024700(undefined8 param_1,IStorageDevice *param_2,undefined8 param_3,undefined8 param_4)

{
  IStorageDevice *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IStorageDevice *)operator_new(0x40);
  if (pIVar1 == (IStorageDevice *)0x0) {
    local_20 = (IStorageDevice *)0x0;
  }
  else {
    local_20 = FUN_18001c5b0(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




IObject * FUN_180024770(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 *param_4)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x30);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180016d10(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




IObject * FUN_1800247f0(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x30);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180017e10(pIVar1,param_2);
  }
  return local_20;
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

IObject * CreateVirtualProcessor(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x48);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180017330(pIVar1,param_2,param_3);
  }
  return local_20;
}




IObject * FUN_1800248d0(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x48);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180017e60(pIVar1,param_2);
  }
  return local_20;
}




/* Library Function - Single Match
    public: virtual class CMFCPopupMenu * __ptr64 __cdecl
   CMFCToolBarMenuButton::CreatePopupMenu(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

CMFCPopupMenu * __thiscall CMFCToolBarMenuButton::CreatePopupMenu(CMFCToolBarMenuButton *this)

{
  IObject *pIVar1;
  IObject *in_RDX;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x48);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18001c620(pIVar1,in_RDX);
  }
  return (CMFCPopupMenu *)local_20;
}




undefined8 FUN_1800249a0(undefined8 param_1,SchedulerBase *param_2)

{
  UMSThreadInternalContext *this;
  undefined8 local_20;
  
  this = (UMSThreadInternalContext *)operator_new(0x98);
  if (this == (UMSThreadInternalContext *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = Concurrency::details::UMSThreadInternalContext::UMSThreadInternalContext
                         (this,param_2);
  }
  return local_20;
}




/* Library Function - Single Match
    public: virtual class CMFCPopupMenu * __ptr64 __cdecl
   CMFCToolBarMenuButton::CreatePopupMenu(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

CMFCPopupMenu * __thiscall CMFCToolBarMenuButton::CreatePopupMenu(CMFCToolBarMenuButton *this)

{
  IObject *pIVar1;
  IObject *in_RDX;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x98);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18001c670(pIVar1,in_RDX);
  }
  return (CMFCPopupMenu *)local_20;
}




IObject * FUN_180024a70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined4 *param_4,undefined8 *param_5,IObject *param_6,IObject *param_7)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x48);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180017fe0(pIVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return local_20;
}




IObject * FUN_180024b20(undefined8 param_1,IObject *param_2,void *param_3,void *param_4,
                       undefined8 *param_5,undefined8 *param_6)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0xc0);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_180017720(pIVar1,param_2,param_3,param_4,param_5,param_6);
  }
  return local_20;
}




IStorageDevice *
FUN_180024bb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  IStorageDevice *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IStorageDevice *)operator_new(0x30);
  if (pIVar1 == (IStorageDevice *)0x0) {
    local_20 = (IStorageDevice *)0x0;
  }
  else {
    local_20 = FUN_180017510(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




IStorageDevice *
FUN_180024c30(undefined8 param_1,IStorageDevice *param_2,undefined8 param_3,undefined8 param_4)

{
  IStorageDevice *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IStorageDevice *)operator_new(0x30);
  if (pIVar1 == (IStorageDevice *)0x0) {
    local_20 = (IStorageDevice *)0x0;
  }
  else {
    local_20 = FUN_18001c6b0(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




void FUN_180024ca0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*(longlong *)*param_1 + 8))(*param_1,param_2,param_3,param_4);
  return;
}




void FUN_180024cf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  (**(code **)(*(longlong *)*param_1 + 8))
            (*param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}




void FUN_180024d60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  (**(code **)(*(longlong *)*param_1 + 8))(*param_1,param_2,param_3,param_4,param_5,param_6,param_7)
  ;
  return;
}




void FUN_180024dd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  (**(code **)(*(longlong *)*param_1 + 8))(*param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_180024e20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*(longlong *)*param_1 + 8))(*param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




void FUN_180024e80(longlong param_1)

{
  FUN_180024ca0((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_180024ec0(longlong param_1)

{
  FUN_180024cf0((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}




void FUN_180024f40(longlong param_1)

{
  FUN_180024d60((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38));
  return;
}




void FUN_180024fb0(longlong param_1)

{
  FUN_180024dd0((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_180025000(longlong param_1)

{
  FUN_18000ccc0((undefined8 *)(param_1 + 8));
  return;
}




void FUN_180025020(longlong param_1)

{
  FUN_180024e20((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}




void FUN_180025080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180018180(param_2,param_3);
  return;
}




void * FUN_1800250b0(void *param_1,uint param_2)

{
  FUN_180022160((longlong)param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800250f0(undefined8 *param_1,uint param_2)

{
  FUN_180022190(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void * FUN_180025130(void *param_1,uint param_2)

{
  FUN_1800221c0((longlong)param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180025170(undefined8 *param_1,uint param_2)

{
  FUN_1800221f0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void * FUN_1800251b0(void *param_1,uint param_2)

{
  FUN_180022160((longlong)param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800251f0(undefined8 *param_1,uint param_2)

{
  FUN_180022190(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void * FUN_180025230(void *param_1,uint param_2)

{
  FUN_180022250((longlong)param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180025270(undefined8 *param_1,uint param_2)

{
  FUN_180022280(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_1800252b0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             uint param_2)

{
  FUN_1800223e0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800252f0(longlong param_1,char *param_2,longlong *param_3)

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
  local_18 = DAT_180053018 ^ (ulonglong)auStack_c8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58,param_2);
  FUN_18002a220(param_1 + 0x10,&local_a8,local_58);
  FUN_180004370(local_58);
  plVar2 = FUN_18002a020(param_1 + 0x10,&local_80);
  bVar1 = FUN_180008850(&local_a8,plVar2);
  if (bVar1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,param_2);
    local_98 = FUN_18000aa40(local_70);
    local_90 = local_98;
    lVar3 = FUN_180023e00(param_1 + 0x10,local_38);
    FUN_1800224b0(lVar3,local_90);
    FUN_180022420(local_70);
    FUN_180004370(local_38);
    plVar2 = FUN_180028700(param_1 + 0x10,&local_78);
    local_a8 = *plVar2;
  }
  FUN_1800178f0(&local_a0,param_3);
  lVar3 = FUN_180023ea0(&local_a8);
  FUN_18002a450(lVar3 + 0x20,&local_a0);
  FUN_18000c780(&local_a0);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_180025480(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(undefined8 *)(param_1 + 0x38));
  return;
}




void FUN_1800254b0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))(*(undefined8 *)(param_1 + 0xa0));
  return;
}




void FUN_1800254dc(longlong param_1)

{
  FUN_1800254b0(param_1 + -8);
  return;
}




void FUN_1800254f0(longlong param_1)

{
  FUN_180026c30(param_1);
  return;
}




void FUN_180025510(longlong param_1)

{
  FUN_180026c50(param_1);
  return;
}




void FUN_180025530(longlong param_1)

{
  FUN_180026c70(param_1);
  return;
}




void FUN_180025548(longlong param_1)

{
  FUN_180025530(param_1 + -8);
  return;
}




void FUN_180025554(longlong param_1)

{
  IStorageDevice::ConvertVolume((IStorageDevice *)(param_1 + -8));
  return;
}




void FUN_180025560(longlong param_1)

{
  FUN_180026c50(param_1 + -0x30);
  return;
}




void FUN_180025580(longlong param_1)

{
  FUN_180026c70(param_1 + -0x98);
  return;
}




undefined8 FUN_1800255b0(longlong param_1,longlong param_2)

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
    puVar1 = FUN_18001a770(&local_30,param_1 + -0x30);
    local_48 = FUN_1800183f0(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18001a610(local_18,local_res10,param_1 + -0x30);
    local_20 = local_28;
    local_48 = FUN_1800183f0(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1800013b0(local_48);
  }
  return uVar2;
}




undefined8 FUN_180025670(longlong param_1,longlong param_2)

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
    puVar1 = FUN_18001aa50(&local_30,param_1 + -0x48);
    local_48 = FUN_180018470(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18001a8f0(local_18,local_res10,param_1 + -0x48);
    local_20 = local_28;
    local_48 = FUN_180018470(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180002eb0(local_48);
  }
  return uVar2;
}




longlong FUN_180025730(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong local_res10 [3];
  IStorageDevice *local_48;
  longlong local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  longlong local_18 [3];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    puVar1 = FUN_18001ad10(&local_30,param_1 + -0x98);
    local_48 = FUN_180018510(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18001abb0(local_18,local_res10,param_1 + -0x98);
    local_20 = local_28;
    local_48 = FUN_180018510(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_180004e20((longlong)local_48);
  }
  return lVar2;
}




undefined8 FUN_180025800(longlong param_1,longlong param_2)

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
    puVar1 = FUN_18001b200(&local_30,param_1 + -0x30);
    local_48 = FUN_180018590(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18001b0a0(local_18,local_res10,param_1 + -0x30);
    local_20 = local_28;
    local_48 = FUN_180018590(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18002e9f0(local_48);
  }
  return uVar2;
}




undefined8 FUN_1800258c0(undefined8 param_1,longlong param_2)

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
    puVar1 = FUN_18001b380(&local_30,param_1);
    local_48 = FUN_180018630(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18001a6c0(local_18,local_res10,param_1);
    local_20 = local_28;
    local_48 = FUN_1800183f0(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1800013b0(local_48);
  }
  return uVar2;
}




undefined8 FUN_180025980(undefined8 param_1,longlong param_2)

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
    puVar1 = FUN_18001b630(&local_30,param_1);
    local_48 = FUN_1800186b0(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18001a9a0(local_18,local_res10,param_1);
    local_20 = local_28;
    local_48 = FUN_180018470(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180002eb0(local_48);
  }
  return uVar2;
}




longlong FUN_180025a40(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong local_res10 [3];
  IStorageDevice *local_48;
  longlong local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  longlong local_18 [3];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    puVar1 = FUN_18001b830(&local_30,param_1);
    local_48 = FUN_180018750(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18001ac60(local_18,local_res10,param_1);
    local_20 = local_28;
    local_48 = FUN_180018510(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_180004e20((longlong)local_48);
  }
  return lVar2;
}




undefined8 FUN_180025b00(undefined8 param_1,longlong param_2)

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
    puVar1 = FUN_18001bdb0(&local_30,param_1);
    local_48 = FUN_1800187d0(puVar1);
    FUN_18000c7e0(&local_30);
  }
  else {
    local_28 = FUN_18001b150(local_18,local_res10,param_1);
    local_20 = local_28;
    local_48 = FUN_180018590(local_28);
    FUN_18000c7e0(local_18);
  }
  if (local_48 == (IStorageDevice *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18002e9f0(local_48);
  }
  return uVar2;
}




void FUN_180025bc0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_158 [32];
  char *local_138;
  char *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStack_158;
  if (param_2 != (char *)0x0) {
    local_120 = 0;
    if (*param_2 == '*') {
      FUN_180001400(param_1 + -0x30,param_2,param_3,param_4);
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
        FUN_180001400(param_1 + -0x30,&local_118,param_3,param_4);
      }
      else {
        (**(code **)*local_128)(local_128,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




void FUN_180025d40(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_158 [32];
  char *local_138;
  char *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStack_158;
  if (param_2 != (char *)0x0) {
    local_120 = 0;
    if (*param_2 == '*') {
      FUN_180002f00(param_1 + -0x48,param_2,param_3,param_4);
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
        FUN_180002f00(param_1 + -0x48,&local_118,param_3,param_4);
      }
      else {
        (**(code **)*local_128)(local_128,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




void FUN_180025ec0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_158 [32];
  char *local_138;
  char *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStack_158;
  if (param_2 != (char *)0x0) {
    local_120 = 0;
    if (*param_2 == '*') {
      FUN_180004eb0(param_1 + -0x98,param_2,param_3,param_4);
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
        FUN_180004eb0(param_1 + -0x98,&local_118,param_3,param_4);
      }
      else {
        (**(code **)*local_128)(local_128,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




void FUN_180026040(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_158 [32];
  char *local_138;
  char *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStack_158;
  if (param_2 != (char *)0x0) {
    local_120 = 0;
    if (*param_2 == '*') {
      FUN_18002ea40(param_1 + -0x30,param_2,param_3,param_4);
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
        FUN_18002ea40(param_1 + -0x30,&local_118,param_3,param_4);
      }
      else {
        (**(code **)*local_128)(local_128,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




int FUN_1800261c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_180026cd0(param_1 + -0x30);
  if (iVar1 == 0) {
    free((void *)(param_1 + -0x30));
  }
  return iVar1;
}




int FUN_180026210(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_180013800(param_1 + -0x48);
  if ((iVar1 == 0) && ((void *)(param_1 + -0x48) != (void *)0x0)) {
    FUN_1800250b0((void *)(param_1 + -0x48),1);
  }
  return iVar1;
}




int FUN_180026280(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_180026d10(param_1 + -0x98);
  if (iVar1 == 0) {
    free((void *)(param_1 + -0x98));
  }
  return iVar1;
}




int FUN_1800262d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_180026cd0(param_1 + -0x30);
  if ((iVar1 == 0) && ((undefined8 *)(param_1 + -0x30) != (undefined8 *)0x0)) {
    FUN_1800250f0((undefined8 *)(param_1 + -0x30),1);
  }
  return iVar1;
}




void FUN_180026340(longlong param_1)

{
  FUN_1800287b0(param_1 + 0x10);
  return;
}




void FUN_180026360(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(*(undefined8 *)(param_1 + 0x38),param_2);
  return;
}




void FUN_180026390(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(*(undefined8 *)(param_1 + 0xa0),param_2);
  return;
}




void FUN_1800263c8(longlong param_1,undefined8 param_2)

{
  FUN_180026390(param_1 + -8,param_2);
  return;
}




void FUN_1800263e0(longlong param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_180026530(param_1,(ulonglong)local_18,param_2);
  return;
}




void FUN_180026410(longlong param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_180026570(param_1,(ulonglong)local_18,param_2);
  return;
}




void FUN_180026438(longlong param_1,undefined8 param_2)

{
  FUN_180026410(param_1 + -8,param_2);
  return;
}




void FUN_180026450(longlong *param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_1800265b0(param_1,(ulonglong)local_18,param_2);
  return;
}




void FUN_180026480(longlong *param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_1800265e0(param_1,(ulonglong)local_18,param_2);
  return;
}




void FUN_1800264a8(longlong param_1,undefined8 param_2)

{
  FUN_180026480((longlong *)(param_1 + -8),param_2);
  return;
}




void FUN_1800264c0(longlong *param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_180026610(param_1,(ulonglong)local_18,param_2);
  return;
}




void FUN_1800264e8(longlong param_1,undefined8 param_2)

{
  FUN_1800264c0((longlong *)(param_1 + -8),param_2);
  return;
}




void FUN_180026500(longlong *param_1,undefined8 param_2)

{
  undefined1 local_18;
  
  FUN_180026640(param_1,(ulonglong)local_18,param_2);
  return;
}




void FUN_180026530(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(*(undefined8 *)(param_1 + 0x38),param_3);
  return;
}




void FUN_180026570(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(*(undefined8 *)(param_1 + 0xa0),param_3);
  return;
}




void FUN_1800265b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x48))(param_1,param_3);
  return;
}




void FUN_1800265e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x68))(param_1,param_3);
  return;
}




void FUN_180026610(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0xe0))(param_1,param_3);
  return;
}




void FUN_180026640(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x98))(param_1,param_3);
  return;
}




void FUN_180026670(longlong param_1,char *param_2,undefined4 *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [32];
  ulonglong local_10;
  
  local_48[1] = 0xfffffffffffffffe;
  local_10 = DAT_180053018 ^ (ulonglong)auStack_68;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_30,param_2);
  FUN_18002a220(param_1 + 0x10,local_48,local_30);
  FUN_180004370(local_30);
  plVar2 = FUN_18002a020(param_1 + 0x10,local_48 + 2);
  bVar1 = FUN_180008850(local_48,plVar2);
  if (bVar1) {
    *param_3 = 0;
  }
  else {
    lVar3 = FUN_180023ea0(local_48);
    lVar3 = FUN_18002a4a0(lVar3 + 0x20);
    *param_3 = (int)lVar3;
    lVar3 = FUN_180023ea0(local_48);
    FUN_180023e40(lVar3 + 0x20,0);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




void FUN_180026760(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_10 [2];
  
  puVar1 = FUN_180023e70((undefined8 *)(param_1 + 8),local_10);
  lVar2 = FUN_18000ac00(puVar1);
  (**(code **)(*(longlong *)(lVar2 + 8) + 0x38))((longlong *)(lVar2 + 8));
  return;
}




longlong FUN_1800267b0(longlong param_1,longlong param_2)

{
  undefined8 local_18;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = param_1 + 0x30;
    }
  }
  else {
    local_18 = (**(code **)**(undefined8 **)(param_1 + 0x38))
                         (*(undefined8 *)(param_1 + 0x38),param_2);
  }
  return local_18;
}




longlong FUN_180026820(longlong param_1,longlong param_2)

{
  undefined8 local_18;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = param_1 + 0x98;
    }
  }
  else {
    local_18 = (**(code **)**(undefined8 **)(param_1 + 0xa0))
                         (*(undefined8 *)(param_1 + 0xa0),param_2);
  }
  return local_18;
}




void FUN_180026894(longlong param_1,longlong param_2)

{
  FUN_180026820(param_1 + -8,param_2);
  return;
}




void FUN_1800268a0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180015660(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800268d0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18002ea40(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180026900(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_10 [2];
  
  puVar1 = FUN_180023e70((undefined8 *)(param_1 + 8),local_10);
  lVar2 = FUN_18000ac00(puVar1);
  (*(code *)**(undefined8 **)(lVar2 + 8))((undefined8 *)(lVar2 + 8));
  return;
}




void FUN_180026950(void)

{
  FUN_180015650();
  return;
}




void FUN_180026970(void)

{
  FUN_1800013f0();
  return;
}




void FUN_180026990(void)

{
  FUN_180002ef0();
  return;
}




void FUN_1800269a4(void)

{
  FUN_180026990();
  return;
}




void FUN_1800269b0(void)

{
  FUN_180004ea0();
  return;
}




void FUN_1800269c4(void)

{
  FUN_1800269b0();
  return;
}




void FUN_1800269d0(void)

{
  FUN_18002ea30();
  return;
}




void FUN_1800269f0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_180026a10(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  return;
}




IStorageDevice *
FUN_180026a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_RAX;
  longlong *plVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  undefined8 local_18 [3];
  
  uVar5 = (undefined7)((ulonglong)param_3 >> 8);
  uVar4 = (undefined1)param_3;
  if (DAT_18005bcf0 == (IStorageDevice *)0x0) {
    pvVar3 = ThreadLocalStoragePointer;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_18005bd00) && (_Init_thread_header(&DAT_18005bd00), DAT_18005bd00 == -1)) {
      DAT_18005bcf8 = (undefined8 *)FUN_180001ef0("Thread");
      _Init_thread_footer(&DAT_18005bd00);
    }
    if (DAT_18005bcf8 == (undefined8 *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   4) < DAT_18005bd28) && (_Init_thread_header(&DAT_18005bd28), DAT_18005bd28 == -1)
         ) {
        FUN_18001cb70((_AfxBindHost *)&DAT_18005bd08);
        atexit(FUN_180035900);
        _Init_thread_footer(&DAT_18005bd28);
      }
      DAT_18005bcf0 = (IStorageDevice *)&DAT_18005bd08;
      IStorageDevice::ConvertVolume((IStorageDevice *)&DAT_18005bd08);
    }
    else {
      FUN_180018240(0,pvVar3,CONCAT71(uVar5,uVar4),param_4);
      plVar1 = (longlong *)FUN_18000bab0(DAT_18005bcf8,extraout_RAX);
      if (plVar1 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
        FUN_180021eb0(local_18,uVar2,'\x01');
        if (DAT_18005bcf0 == (IStorageDevice *)0x0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
               DAT_18005bd50) && (_Init_thread_header(&DAT_18005bd50), DAT_18005bd50 == -1)) {
            FUN_18001cb70((_AfxBindHost *)&DAT_18005bd30);
            atexit(FUN_180035920);
            _Init_thread_footer(&DAT_18005bd50);
          }
          DAT_18005bcf0 = (IStorageDevice *)&DAT_18005bd30;
          FUN_1800273d0(local_18);
          IStorageDevice::ConvertVolume(DAT_18005bcf0);
        }
        FUN_180022480(local_18);
      }
    }
  }
  return DAT_18005bcf0;
}




undefined4 FUN_180026c30(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_180026c50(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x28);
}




undefined4 FUN_180026c70(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x90);
}




undefined4 FUN_180026c90(longlong param_1)

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




undefined4 FUN_180026cd0(longlong param_1)

{
  undefined4 local_18;
  
  LOCK();
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  UNLOCK();
  if (*(int *)(param_1 + 0x28) < 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0x28);
  }
  return local_18;
}




undefined4 FUN_180026d10(longlong param_1)

{
  undefined4 local_18;
  
  LOCK();
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
  UNLOCK();
  if (*(int *)(param_1 + 0x90) < 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0x90);
  }
  return local_18;
}




undefined4 FUN_180026d60(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))(*param_1,param_2);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return *(undefined4 *)(param_1 + 1);
}




void FUN_180026da0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_10 [2];
  
  puVar1 = FUN_180023e70((undefined8 *)(param_1 + 8),local_10);
  lVar2 = FUN_18000ac00(puVar1);
  (**(code **)(*(longlong *)(lVar2 + 8) + 0x28))((longlong *)(lVar2 + 8));
  return;
}




void FUN_180026df0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x38) + 8))(*(undefined8 *)(param_1 + 0x38));
  return;
}




void FUN_180026e20(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))(*(undefined8 *)(param_1 + 0xa0));
  return;
}




void FUN_180026e4c(longlong param_1)

{
  FUN_180026e20(param_1 + -8);
  return;
}




int FUN_180026e60(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_180026c90((longlong)param_1);
  if (iVar1 == 0) {
    free(param_1);
  }
  return iVar1;
}




int FUN_180026ea0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_180026cd0((longlong)param_1);
  if (iVar1 == 0) {
    free(param_1);
  }
  return iVar1;
}




int FUN_180026ee0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_180013800((longlong)param_1);
  if ((iVar1 == 0) && (param_1 != (void *)0x0)) {
    FUN_180025230(param_1,1);
  }
  return iVar1;
}




void FUN_180026f44(longlong param_1)

{
  FUN_180026ee0((void *)(param_1 + -8));
  return;
}




int FUN_180026f50(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_180026d10((longlong)param_1);
  if (iVar1 == 0) {
    free(param_1);
  }
  return iVar1;
}




void FUN_180026f90(longlong param_1)

{
  FUN_180026f50((void *)(param_1 + -8));
  return;
}




int FUN_180026fa0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_180026cd0((longlong)param_1);
  if ((iVar1 == 0) && (param_1 != (undefined8 *)0x0)) {
    FUN_180025270(param_1,1);
  }
  return iVar1;
}




longlong FUN_180027010(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong *)*param_1 != param_2) {
    plVar3 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (longlong *)0x0) {
      uVar1 = FUN_1800018f0(0,plVar3,param_3,param_4);
      lVar2 = FUN_18000bab0(param_2,uVar1);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        (**(code **)(*param_2 + 8))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  return *param_1;
}




longlong FUN_1800270d0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong *)*param_1 != param_2) {
    plVar3 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (longlong *)0x0) {
      uVar1 = FUN_180015550(0,plVar3,param_3,param_4);
      lVar2 = FUN_18000bab0(param_2,uVar1);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        (**(code **)(*param_2 + 8))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  return *param_1;
}




longlong FUN_180027190(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong *)*param_1 != param_2) {
    plVar3 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (longlong *)0x0) {
      uVar1 = FUN_1800181c0(0,plVar3,param_3,param_4);
      lVar2 = FUN_18000bab0(param_2,uVar1);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        (**(code **)(*param_2 + 8))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  return *param_1;
}




longlong FUN_180027250(longlong *param_1,longlong *param_2)

{
  undefined *puVar1;
  longlong lVar2;
  
  if ((longlong *)*param_1 != param_2) {
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
      *param_1 = 0;
    }
    if (param_2 != (longlong *)0x0) {
      puVar1 = FUN_18000ad50();
      lVar2 = FUN_18000bab0(param_2,puVar1);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        (**(code **)(*param_2 + 8))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  return *param_1;
}




longlong FUN_180027310(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong *)*param_1 != param_2) {
    plVar3 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (longlong *)0x0) {
      uVar1 = FUN_180018220(0,plVar3,param_3,param_4);
      lVar2 = FUN_18000bab0(param_2,uVar1);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        (**(code **)(*param_2 + 8))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  return *param_1;
}




undefined8 FUN_1800273d0(undefined8 *param_1)

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




void FUN_180027430(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_10 [2];
  
  puVar1 = FUN_180023e70((undefined8 *)(param_1 + 8),local_10);
  lVar2 = FUN_18000ac00(puVar1);
  (**(code **)(*(longlong *)(lVar2 + 8) + 0x30))((longlong *)(lVar2 + 8));
  return;
}




_Container_proxy * FUN_180027480(undefined8 param_1)

{
  undefined8 uVar1;
  _Container_proxy *local_28;
  allocator<struct_std::_Container_proxy> *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (allocator<struct_std::_Container_proxy> *)FUN_1800280a0(param_1);
  local_28 = std::allocator<struct_std::_Container_proxy>::allocate(local_20,1);
  uVar1 = FUN_180003e70(local_28);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_180003e70(local_28 + 8);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_180003e70(local_28 + 0x10);
  construct<>(local_20,uVar1,&local_28);
  local_28[0x18] = (_Container_proxy)0x1;
  local_28[0x19] = (_Container_proxy)0x1;
  return local_28;
}




_Container_proxy * FUN_180027540(undefined8 param_1)

{
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this = (allocator<struct_std::_Container_proxy> *)FUN_1800280a0(param_1);
  p_Var1 = std::allocator<struct_std::_Container_proxy>::allocate(this,1);
  uVar2 = FUN_1800280a0(param_1);
  uVar3 = FUN_180003e70(p_Var1);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_180003e70(p_Var1 + 8);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_180003e70(p_Var1 + 0x10);
  construct<>(this,uVar3,uVar2);
  return p_Var1;
}




ulonglong FUN_180027620(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_180028770(param_1);
  _Var2 = FUN_18002a3a0(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_1800276b0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_180004880(param_1);
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)FUN_180008bd0(param_1);
    plVar2 = (longlong *)FUN_180008bb0(param_1);
    FUN_180027990(param_1,*plVar2,*plVar1);
    lVar3 = FUN_180028770(param_1);
    puVar4 = (undefined8 *)FUN_180008bb0(param_1);
    uVar5 = FUN_1800047c0(param_1);
    FUN_180029ff0(uVar5,(void *)*puVar4,lVar3);
  }
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180008bd0(param_1);
  *plVar1 = param_2 + param_3 * 8;
  plVar1 = (longlong *)FUN_18000af90(param_1);
  *plVar1 = param_2 + param_4 * 8;
  return;
}




void FUN_1800277c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180025080(uVar1,param_2,param_3);
  return;
}




void FUN_180027800(undefined8 param_1)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  
  p_Var1 = FUN_180027480(param_1);
  puVar2 = (undefined8 *)FUN_1800280a0(param_1);
  *puVar2 = p_Var1;
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Construct_lv_contents(class
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > const & __ptr64) __ptr64
    public: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Construct_lv_contents(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

void FID_conflict__Construct_lv_contents(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  _String_val<struct_std::_Simple_types<char>_> *p_Var3;
  undefined8 uVar4;
  __uint64 *p_Var5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 local_38;
  _String_val<struct_std::_Simple_types<char>_> *local_30;
  __uint64 local_28;
  __uint64 local_20;
  ulonglong local_18;
  size_t local_10;
  
  pvVar2 = (void *)FUN_1800047c0(param_1);
  p_Var3 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1800047c0(param_2);
  uVar1 = *(ulonglong *)(p_Var3 + 0x10);
  local_30 = Myptr(p_Var3);
  if (uVar1 < 0x10) {
    FUN_180004c10(pvVar2,local_30,0x10);
    *(ulonglong *)((longlong)pvVar2 + 0x10) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x18) = 0xf;
  }
  else {
    uVar4 = FUN_1800047c0(param_1);
    local_20 = FID_conflict_max_size(param_1);
    local_18 = uVar1 | 0xf;
    p_Var5 = std::_Min_value<unsigned___int64>(&local_18,&local_20);
    local_28 = *p_Var5;
    local_38 = allocate(uVar4,local_28 + 1);
    uVar6 = FUN_180003e70(pvVar2);
    construct<>(uVar4,uVar6,&local_38);
    local_10 = uVar1 + 1;
    pvVar7 = (void *)FUN_180003e70(local_38);
    FUN_180004c10(pvVar7,local_30,local_10);
    *(ulonglong *)((longlong)pvVar2 + 0x10) = uVar1;
    *(__uint64 *)((longlong)pvVar2 + 0x18) = local_28;
  }
  return;
}




void FUN_180027990(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_1800189c0(param_2,param_3,uVar1);
  return;
}




void FUN_1800279d0(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  
  uVar1 = FUN_1800280a0(param_1);
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_180003e70((longlong)param_2 + 0x20);
  destroy<>(uVar1,pbVar2);
  FUN_180018d70(uVar1,param_2);
  return;
}




void FUN_180027a20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined8 *local_18;
  
  local_18 = param_2;
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    FUN_180027a20(param_1,(undefined8 *)local_18[2]);
    puVar1 = (undefined8 *)*local_18;
    uVar2 = FUN_1800280a0(param_1);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_180003e70(local_18 + 4);
    destroy<>(uVar2,pbVar3);
    FUN_180018d70(uVar2,local_18);
    local_18 = puVar1;
  }
  return;
}




longlong * FUN_180027ac0(longlong *param_1,longlong *param_2)

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
  FUN_180023f50((longlong *)local_res10);
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
    plVar1 = (longlong *)FUN_180028390(param_1);
    if ((longlong *)*plVar1 == param_2) {
      puVar2 = (undefined8 *)FUN_180028390(param_1);
      *puVar2 = local_28;
    }
    else if ((longlong *)*local_30 == param_2) {
      *local_30 = (longlong)local_28;
    }
    else {
      local_30[2] = (longlong)local_28;
    }
    plVar1 = (longlong *)FUN_18000ac00(param_1);
    if ((longlong *)*plVar1 == param_2) {
      local_18 = local_30;
      if (*(char *)((longlong)local_28 + 0x19) == '\0') {
        local_18 = FUN_180028230(local_28);
      }
      plVar1 = (longlong *)FUN_18000ac00(param_1);
      *plVar1 = (longlong)local_18;
    }
    plVar1 = (longlong *)FUN_1800088e0(param_1);
    if ((longlong *)*plVar1 == param_2) {
      local_10 = local_30;
      if (*(char *)((longlong)local_28 + 0x19) == '\0') {
        local_10 = (longlong *)FUN_180028200((longlong)local_28);
      }
      plVar1 = (longlong *)FUN_1800088e0(param_1);
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
    plVar1 = (longlong *)FUN_180028390(param_1);
    if ((longlong *)*plVar1 == param_2) {
      puVar2 = (undefined8 *)FUN_180028390(param_1);
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
LAB_18002803a:
    if (param_1[1] != 0) {
      param_1[1] = param_1[1] + -1;
    }
    return param_2;
  }
LAB_180027db7:
  plVar1 = (longlong *)FUN_180028390(param_1);
  if ((local_28 == (longlong *)*plVar1) || ((char)local_28[3] != '\x01')) goto LAB_180028031;
  if (local_28 == (longlong *)*local_30) {
    local_38 = (longlong *)local_30[2];
    if ((char)local_38[3] == '\0') {
      *(undefined1 *)(local_38 + 3) = 1;
      *(undefined1 *)(local_30 + 3) = 0;
      FUN_180028120(param_1,(longlong)local_30);
      local_38 = (longlong *)local_30[2];
    }
    if (*(char *)((longlong)local_38 + 0x19) == '\0') {
      if ((*(char *)(*local_38 + 0x18) != '\x01') || (*(char *)(local_38[2] + 0x18) != '\x01')) {
        if (*(char *)(local_38[2] + 0x18) == '\x01') {
          *(undefined1 *)(*local_38 + 0x18) = 1;
          *(undefined1 *)(local_38 + 3) = 0;
          FUN_1800283b0(param_1,local_38);
          local_38 = (longlong *)local_30[2];
        }
        *(char *)(local_38 + 3) = (char)local_30[3];
        *(undefined1 *)(local_30 + 3) = 1;
        *(undefined1 *)(local_38[2] + 0x18) = 1;
        FUN_180028120(param_1,(longlong)local_30);
LAB_180028031:
        *(undefined1 *)(local_28 + 3) = 1;
        goto LAB_18002803a;
      }
      *(undefined1 *)(local_38 + 3) = 0;
    }
  }
  else {
    local_38 = (longlong *)*local_30;
    if ((char)local_38[3] == '\0') {
      *(undefined1 *)(local_38 + 3) = 1;
      *(undefined1 *)(local_30 + 3) = 0;
      FUN_1800283b0(param_1,local_30);
      local_38 = (longlong *)*local_30;
    }
    if (*(char *)((longlong)local_38 + 0x19) == '\0') {
      if ((*(char *)(local_38[2] + 0x18) != '\x01') || (*(char *)(*local_38 + 0x18) != '\x01')) {
        if (*(char *)(*local_38 + 0x18) == '\x01') {
          *(undefined1 *)(local_38[2] + 0x18) = 1;
          *(undefined1 *)(local_38 + 3) = 0;
          FUN_180028120(param_1,(longlong)local_38);
          local_38 = (longlong *)*local_30;
        }
        *(char *)(local_38 + 3) = (char)local_30[3];
        *(undefined1 *)(local_30 + 3) = 1;
        *(undefined1 *)(*local_38 + 0x18) = 1;
        FUN_1800283b0(param_1,local_30);
        goto LAB_180028031;
      }
      *(undefined1 *)(local_38 + 3) = 0;
    }
  }
  local_28 = local_30;
  local_30 = (longlong *)local_30[1];
  goto LAB_180027db7;
}




void FUN_180028070(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800280a0(param_1);
  FUN_180018d70(uVar1,param_2);
  return;
}




void FUN_1800280a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003e70(param_1);
  FUN_180003e70(uVar1);
  return;
}




void FUN_1800280d0(undefined8 param_1,longlong param_2)

{
  FUN_180028100(param_1,param_2 + 0x20);
  return;
}




void FUN_180028100(undefined8 param_1,undefined8 param_2)

{
  FUN_180003e70(param_2);
  return;
}




void FUN_180028120(longlong *param_1,longlong param_2)

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




longlong FUN_180028200(longlong param_1)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  while (*(char *)(*(longlong *)(local_res8 + 0x10) + 0x19) == '\0') {
    local_res8 = *(longlong *)(local_res8 + 0x10);
  }
  return local_res8;
}




longlong * FUN_180028230(longlong *param_1)

{
  undefined8 local_res8;
  
  for (local_res8 = param_1; *(char *)(*local_res8 + 0x19) == '\0';
      local_res8 = (longlong *)*local_res8) {
  }
  return local_res8;
}




void FUN_180028260(undefined8 param_1,undefined8 param_2)

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
  uVar1 = FUN_180003e70(param_2);
  FUN_1800282b0(param_1,uVar1);
  return;
}




void FUN_1800282b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_180028490(param_1,param_2);
  puVar1 = (undefined8 *)FUN_180008bb0(param_2);
  puVar2 = (undefined8 *)FUN_180008bb0(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_180008bd0(param_2);
  puVar2 = (undefined8 *)FUN_180008bd0(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_18000af90(param_2);
  puVar2 = (undefined8 *)FUN_18000af90(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_180008bb0(param_2);
  *puVar1 = 0;
  puVar1 = (undefined8 *)FUN_180008bd0(param_2);
  *puVar1 = 0;
  puVar1 = (undefined8 *)FUN_18000af90(param_2);
  *puVar1 = 0;
  return;
}




longlong FUN_180028390(longlong *param_1)

{
  return *param_1 + 8;
}




void FUN_1800283b0(longlong *param_1,longlong *param_2)

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




void FUN_180028490(undefined8 param_1,undefined8 param_2)

{
  FUN_1800047c0(param_2);
  FUN_1800047c0(param_1);
  FUN_180004140();
  return;
}




void FUN_1800284d0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  plVar2 = FUN_18002a020(param_1,&local_28);
  lVar1 = *plVar2;
  plVar2 = FUN_180028700(param_1,&local_20);
  FUN_18002a080(param_1,local_18,*plVar2,lVar1);
  return;
}




void FUN_180028530(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_180004880(param_1);
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)FUN_180008bd0(param_1);
    plVar2 = (longlong *)FUN_180008bb0(param_1);
    FUN_180027990(param_1,*plVar2,*plVar1);
    lVar3 = FUN_180028770(param_1);
    puVar4 = (undefined8 *)FUN_180008bb0(param_1);
    uVar5 = FUN_1800047c0(param_1);
    FUN_180029ff0(uVar5,(void *)*puVar4,lVar3);
    puVar4 = (undefined8 *)FUN_180008bb0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180008bd0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_18000af90(param_1);
    *puVar4 = 0;
  }
  return;
}




void FUN_180028600(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                  CGPTDiskAnalyzer *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_18001a4b0(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_180028640(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                  CGPTDiskAnalyzer *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_180028600(param_1,param_2,param_3,param_4);
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
  
  _Var1 = FUN_180018e00(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




undefined8 * FUN_180028700(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800280a0(param_1);
  FUN_180003e70(puVar1);
  puVar1 = (undefined8 *)FUN_18000ac00(puVar1);
  FUN_180008530(param_2,*puVar1);
  return param_2;
}




longlong FUN_180028770(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_18000af90(param_1);
  plVar2 = (longlong *)FUN_180008bb0(param_1);
  return *plVar1 - *plVar2 >> 3;
}




void FUN_1800287b0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)FUN_1800280a0(param_1);
  lVar1 = *plVar2;
  puVar3 = (undefined8 *)FUN_180028390(plVar2);
  FUN_180027a20(param_1,(undefined8 *)*puVar3);
  plVar4 = (longlong *)FUN_180028390(plVar2);
  *plVar4 = lVar1;
  plVar4 = (longlong *)FUN_18000ac00(plVar2);
  *plVar4 = lVar1;
  plVar4 = (longlong *)FUN_1800088e0(plVar2);
  *plVar4 = lVar1;
  plVar2[1] = 0;
  return;
}




undefined8 * FUN_180028850(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cbb0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_1800288a0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cc20(puVar1);
  }
  return local_10;
}




undefined8 * FUN_1800288f0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cc90(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028940(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cd00(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028990(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cd70(puVar1);
  }
  return local_10;
}




undefined8 * FUN_1800289e0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cde0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028a30(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001ce50(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028a80(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cec0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028ad0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cf30(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028b20(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001cfa0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028b70(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d010(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028bc0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d080(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028c10(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d0f0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028c60(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d160(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028cb0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d1d0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028d00(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d240(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028d50(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d2b0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028da0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d320(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028df0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d390(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028e40(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d400(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028e90(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d470(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028ee0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d4e0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028f30(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d550(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028f80(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d5c0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180028fd0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d630(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180029020(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d6a0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180029070(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d710(puVar1);
  }
  return local_10;
}




undefined8 * FUN_1800290c0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d780(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180029110(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d7f0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180029160(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d860(puVar1);
  }
  return local_10;
}




undefined8 * FUN_1800291b0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d8d0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180029200(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d940(puVar1);
  }
  return local_10;
}




undefined8 * FUN_180029250(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18001d9b0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_1800292a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001e680(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029300(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001e780(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029360(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001e880(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_1800293c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001e960(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029420(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001ea80(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029480(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001eb80(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_1800294e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001ec80(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029540(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001ed60(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_1800295a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001ee40(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029600(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001ef40(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029660(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001f040(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_1800296c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001f120(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029720(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001f2c0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029780(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001f440(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_1800297e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001f590(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029840(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001f690(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_1800298a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001f790(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029900(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001f870(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029960(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001f990(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_1800299c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001fa70(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029a20(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001fb50(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029a80(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001fc10(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029ae0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001fd10(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029b40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001fdf0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029ba0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001fed0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029c00(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18001ff90(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029c60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180020070(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029cc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180020150(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029d20(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180020230(puVar1,param_1);
  }
  return local_20;
}




/* Library Function - Single Match
    private: static class std::locale::_Locimp * __ptr64 __cdecl
   std::locale::_Locimp::_New_Locimp(class std::locale::_Locimp const & __ptr64)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

_Locimp * __cdecl std::locale::_Locimp::_New_Locimp(_Locimp *param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (_Locimp *)0x0;
  }
  else {
    local_20 = (_Locimp *)FUN_1800203b0(puVar1,(longlong)param_1);
  }
  return local_20;
}




undefined8 * FUN_180029de0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180020520(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029e40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180020600(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_180029ea0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180020720(puVar1,param_1);
  }
  return local_20;
}




void FUN_180029f00(undefined8 param_1,undefined8 param_2)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  _String_val<struct_std::_Simple_types<char>_> *p_Var2;
  _String_val<struct_std::_Simple_types<char>_> *p_Var3;
  _String_val<struct_std::_Simple_types<char>_> *p_Var4;
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1800047c0(param_1);
  p_Var2 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1800047c0(param_2);
  p_Var3 = Myptr(p_Var2);
  p_Var4 = Myptr(p_Var1);
  FUN_18001a2e0(p_Var4,*(ulonglong *)(p_Var1 + 0x10),p_Var3,*(ulonglong *)(p_Var2 + 0x10));
  return;
}




void FUN_180029f80(void *param_1,void *param_2,size_t param_3)

{
  memcmp(param_1,param_2,param_3);
  return;
}




void FUN_180029fc0(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x58);
  return;
}




void FUN_180029ff0(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 << 3);
  return;
}




undefined8 * FUN_18002a020(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800280a0(param_1);
  FUN_180003e70(puVar1);
  FUN_180008530(param_2,*puVar1);
  return param_2;
}




undefined8 * FUN_18002a080(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

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
  plVar2 = FUN_180028700(param_1,&local_28);
  bVar1 = FUN_180008850((longlong *)&local_res18,plVar2);
  if (bVar1) {
    plVar2 = FUN_18002a020(param_1,&local_20);
    bVar1 = FUN_180008850(&local_res20,plVar2);
    if (bVar1) {
      FUN_1800287b0(param_1);
      FUN_180028700(param_1,param_2);
      return param_2;
    }
  }
  while (bVar1 = FUN_180008890((longlong *)&local_res18,&local_res20), bVar1) {
    plVar2 = FUN_180023f00((longlong *)&local_res18,&local_18);
    FUN_18002a170(param_1,local_10,(longlong *)*plVar2);
  }
  uVar3 = FUN_1800280a0(param_1);
  FUN_180003e70(uVar3);
  FUN_180008530(param_2,local_res18);
  return local_res18;
}




undefined8 * FUN_18002a170(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  longlong *local_10 [2];
  
  plVar1 = (longlong *)FUN_1800280a0(param_1);
  local_10[0] = param_3;
  FUN_180023f50((longlong *)local_10);
  plVar2 = FUN_180027ac0(plVar1,param_3);
  uVar3 = FUN_1800280a0(param_1);
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_180003e70(plVar2 + 4);
  destroy<>(uVar3,pbVar4);
  FUN_180018d70(uVar3,plVar2);
  FUN_180003e70(plVar1);
  FUN_180008530(param_2,local_10[0]);
  return param_2;
}




undefined8 * FUN_18002a220(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

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
  
  FUN_18002a300(param_1,&local_48,param_3);
  plVar3 = FUN_18002a020(param_1,&local_20);
  bVar1 = FUN_180008850(&local_48,plVar3);
  if (!bVar1) {
    local_38 = FUN_1800280d0(param_1,local_48);
    uVar4 = FUN_1800047c0(param_1);
    cVar2 = FUN_180025080(uVar4,param_3,local_38);
    if (cVar2 == '\0') {
      local_40 = local_30;
      goto LAB_18002a2d4;
    }
  }
  local_40 = FUN_18002a020(param_1,local_18);
LAB_18002a2d4:
  *param_2 = *local_40;
  return param_2;
}




undefined8 * FUN_18002a300(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1800280a0(param_1);
  FUN_180003e70(uVar1);
  puVar2 = FUN_18001a210(param_1,param_3);
  FUN_180008530(param_2,puVar2);
  return param_2;
}




undefined8 FUN_18002a360(void)

{
  return 0x2e8ba2e8ba2e8ba;
}




undefined8 FUN_18002a370(void)

{
  return 0x1fffffffffffffff;
}




void FUN_18002a380(undefined8 param_1)

{
  FUN_1800280a0(param_1);
  FUN_18002a360();
  return;
}




__uint64 FUN_18002a3a0(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_1800047c0(param_1);
  local_18 = FUN_18002a370();
  local_10[0] = FUN_180004ce0();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




void FUN_18002a3f0(undefined8 param_1)

{
  FUN_180003e70(param_1);
  return;
}




void FUN_18002a410(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_10 [2];
  
  plVar1 = FUN_180008d50(param_1,local_10);
  FUN_1800080a0(param_1,*plVar1,param_2);
  return;
}




void FUN_18002a450(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003e70(param_2);
  FUN_18001bf80(param_1,uVar1);
  return;
}




undefined8 FUN_18002a480(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1800280a0(param_1);
  return *(undefined8 *)(lVar1 + 8);
}




longlong FUN_18002a4a0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180008bd0(param_1);
  plVar2 = (longlong *)FUN_180008bb0(param_1);
  return *plVar1 - *plVar2 >> 3;
}




undefined4 *
FUN_18002a4e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = param_4;
  return param_1;
}




void FUN_18002a530(void)

{
  return;
}




void FUN_18002a540(longlong param_1,longlong *param_2)

{
  FUN_18002a6a0(param_1,0,param_2);
  return;
}




undefined8 FUN_18002a570(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint local_48;
  uint local_44;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_20 = 0xfffffffffffffffe;
  local_44 = 0;
  puVar3 = FUN_180023e70(param_2,local_18);
  local_38 = (longlong *)FUN_18000ac00(puVar3);
  local_28 = (**(code **)(*local_38 + 0x30))(local_38,&local_44);
  local_48 = 0;
  while( true ) {
    if (local_44 <= local_48) {
      FUN_18002c410(&local_30);
      FUN_18002cf00(param_4,&local_30);
      FUN_18000c780(&local_30);
      return 0;
    }
    local_40 = local_28 + (ulonglong)local_48 * 0x10;
    cVar1 = FUN_18002e150(local_40);
    if ((cVar1 != '\0') && (cVar1 = FUN_18002e110(local_40), cVar1 != '\0')) break;
    local_48 = local_48 + 1;
  }
  uVar2 = FUN_18002e2a0(local_40);
  uVar4 = FUN_18002a6a0(param_1,param_3 + (ulonglong)uVar2,param_4);
  return uVar4;
}




undefined8 FUN_18002a6a0(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  IStorageDevice *pIVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void **ppvVar7;
  uint *puVar8;
  longlong local_res10;
  longlong *local_res18;
  uint local_88 [2];
  void *local_80;
  longlong local_78;
  longlong *local_70;
  void *local_68;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  longlong local_30;
  void *local_28;
  void *local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_18 = 0xfffffffffffffffe;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_18002c410(&local_78);
  FUN_18002cf00(local_res18,&local_78);
  FUN_18000c780(&local_78);
  if (local_res10 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_88[0] = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 8))
                            (*(longlong *)(param_1 + 8) + 8);
    local_80 = operator_new((ulonglong)local_88[0]);
    local_68 = local_80;
    iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8))
                      (*(longlong *)(param_1 + 8) + 8,local_80,local_res10,1);
    if (iVar1 == 1) {
      if (local_res10 == 0) {
        puVar8 = local_88;
        ppvVar7 = &local_80;
        local_58 = FUN_18002c1c0(&local_48,&local_res10,ppvVar7,puVar8);
        local_50 = local_58;
        pIVar4 = FUN_18002b7e0(local_58);
        FUN_18002b6d0(local_res18,(longlong *)pIVar4,ppvVar7,puVar8);
        FUN_18000c7e0(&local_48);
      }
      else {
        puVar8 = local_88;
        ppvVar7 = &local_80;
        local_40 = FUN_18002c040(&local_30,&local_res10,ppvVar7,puVar8);
        local_38 = local_40;
        pIVar4 = FUN_18002b730(local_40);
        FUN_18002b6d0(local_res18,(longlong *)pIVar4,ppvVar7,puVar8);
        FUN_18000c7e0(&local_30);
      }
      lVar5 = FUN_18000ac00(local_res18);
      if (lVar5 == 0) {
        local_28 = local_80;
        free(local_80);
        uVar2 = 0xffffffff;
      }
      else {
        local_20 = local_80;
        free(local_80);
        puVar6 = FUN_180023e70(local_res18,local_10);
        local_70 = (longlong *)FUN_18000ac00(puVar6);
        uVar2 = (**(code **)(*local_70 + 0x28))(local_70);
      }
    }
    else {
      pbVar3 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Failed to read sector ");
      pbVar3 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                         (pbVar3,local_res10);
      pbVar3 = FUN_180007bb0(pbVar3,".");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar3,FUN_1800083e0);
      local_60 = local_80;
      free(local_80);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}




undefined8 FUN_18002a920(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  IStorageDevice *pIVar3;
  longlong lVar4;
  longlong local_res10;
  longlong *local_res18;
  longlong local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  if (param_2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_res10 = param_2;
    local_res18 = param_3;
    if (param_2 == 0) {
      puVar2 = FUN_18002c110(&local_38,&local_res10);
      pIVar3 = FUN_18002b7e0(puVar2);
      FUN_18002b6d0(local_res18,(longlong *)pIVar3,param_3,param_4);
      FUN_18000c7e0(&local_38);
    }
    else {
      local_30 = FUN_18002bf90(local_20,&local_res10);
      local_28 = local_30;
      pIVar3 = FUN_18002b730(local_30);
      FUN_18002b6d0(local_res18,(longlong *)pIVar3,param_3,param_4);
      FUN_18000c7e0(local_20);
    }
    lVar4 = FUN_18000ac00(local_res18);
    if (lVar4 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_18002aa10(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Memory;
  undefined8 *puVar4;
  longlong *plVar5;
  __int64 _Var6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  undefined8 uVar8;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  uVar1 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 8))
                    (*(longlong *)(param_1 + 8) + 8);
  _Memory = operator_new((ulonglong)uVar1);
  puVar4 = FUN_180023e70(param_2,&local_20);
  plVar5 = (longlong *)FUN_18000ac00(puVar4);
  _Var6 = (**(code **)(*plVar5 + 0x38))(plVar5);
  iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8))
                    (*(longlong *)(param_1 + 8) + 8,_Memory,_Var6,1);
  if (iVar2 == 1) {
    puVar4 = FUN_180023e70(param_2,local_18);
    plVar5 = (longlong *)FUN_18000ac00(puVar4);
    uVar3 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 8))
                      (*(longlong *)(param_1 + 8) + 8);
    iVar2 = (**(code **)(*plVar5 + 0x50))(plVar5,_Memory,uVar3);
    if (iVar2 < 0) {
      free(_Memory);
      uVar8 = 0xffffffff;
    }
    else {
      iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10))
                        (*(longlong *)(param_1 + 8) + 8,_Memory,_Var6,1);
      if (iVar2 == 1) {
        free(_Memory);
        uVar8 = 0;
      }
      else {
        pbVar7 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "Failed to write sector ");
        pbVar7 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,_Var6);
        pbVar7 = FUN_180007bb0(pbVar7,".");
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,FUN_1800083e0);
        free(_Memory);
        uVar8 = 0xffffffff;
      }
    }
  }
  else {
    pbVar7 = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Failed to verify sector ");
    pbVar7 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,_Var6);
    pbVar7 = FUN_180007bb0(pbVar7,".");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,FUN_1800083e0);
    free(_Memory);
    uVar8 = 0xffffffff;
  }
  return uVar8;
}




void FUN_18002b280(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_84;
  undefined1 *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStack_a8;
  local_84 = 0;
  puVar2 = FUN_180023e70(param_2,&local_50);
  local_78 = (longlong *)FUN_18000ac00(puVar2);
  local_58 = (**(code **)(*local_78 + 0x30))(local_78,&local_84);
  for (local_88 = 0; local_88 < local_84; local_88 = local_88 + 1) {
    local_80 = (undefined1 *)(local_58 + (ulonglong)local_88 * 0x10);
    cVar1 = FUN_18002e150((longlong)local_80);
    if (cVar1 == '\0') {
      cVar1 = FUN_18002e110((longlong)local_80);
      if (cVar1 != '\0') {
        puVar2 = FUN_180023e70(param_2,&local_48);
        local_70 = (longlong *)FUN_18000ac00(puVar2);
        local_60 = (**(code **)(*local_70 + 0x38))(local_70);
        if (local_60 != 0) {
          FUN_18002e2a0((longlong)local_80);
        }
        puVar2 = FUN_180023e70(param_2,&local_40);
        local_68 = (longlong *)FUN_18000ac00(puVar2);
        uVar3 = (**(code **)(*local_68 + 0x38))(local_68);
        puVar4 = FUN_18002ce80(local_38,local_80,uVar3,local_60);
        FUN_18002dcd0(param_3,puVar4);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_a8);
  return;
}




void FUN_18002b420(longlong param_1)

{
  FUN_18002dd50(param_1);
  return;
}




void FUN_18002b440(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180053018 ^ (ulonglong)auStack_88;
  local_60 = 0;
  FUN_180008e20(param_1,&local_68);
  do {
    plVar2 = FUN_180008f10(param_1,&local_50);
    bVar1 = FUN_180008890(&local_68,plVar2);
    if (!bVar1) {
LAB_18002b52f:
      __security_check_cookie(local_28 ^ (ulonglong)auStack_88);
      return;
    }
    puVar3 = (undefined1 *)FUN_1800088e0(&local_68);
    puVar6 = local_48;
    for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar4 = FUN_18002d590((longlong)local_48);
    if ((longlong)uVar4 < local_60) {
      this = FUN_180007bb0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Partition overlapped!");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(this,FUN_1800083e0);
      goto LAB_18002b52f;
    }
    local_58 = FUN_18002d590((longlong)local_48);
    local_60 = FUN_18002d5e0((longlong)local_48);
    local_60 = local_58 + local_60;
    FUN_180008920(&local_68);
  } while( true );
}




IObject * FUN_18002b550(IObject *param_1,undefined8 *param_2)

{
  FUN_18000a0c0(param_1,(IObject *)*param_2);
  *(undefined ***)param_1 = CMomObject<class_CExtendMBR>::vftable;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return param_1;
}




IObject * FUN_18002b5a0(IObject *param_1,undefined8 *param_2)

{
  FUN_180009690(param_1,(IObject *)*param_2);
  *(undefined ***)param_1 = CMomObject<class_CMBR>::vftable;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return param_1;
}




IObject * FUN_18002b5f0(IObject *param_1,undefined8 *param_2,longlong *param_3,uint *param_4)

{
  FUN_18000a060(param_1,(IObject *)*param_2,*param_3,*param_4);
  *(undefined ***)param_1 = CMomObject<class_CExtendMBR>::vftable;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return param_1;
}




IObject * FUN_18002b660(IObject *param_1,undefined8 *param_2,longlong *param_3,uint *param_4)

{
  FUN_180009610(param_1,(IObject *)*param_2,*param_3,*param_4);
  *(undefined ***)param_1 = CMomObject<class_CMBR>::vftable;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return param_1;
}




void FUN_18002b6d0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18002d750(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18002b700(undefined8 param_1,longlong param_2,longlong param_3)

{
  FUN_18002d2a0(param_2,param_3);
  return;
}




IStorageDevice * FUN_18002b730(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        (**(code **)(*(longlong *)this + 0x68))(this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




IStorageDevice * FUN_18002b7e0(undefined8 *param_1)

{
  int iVar1;
  IStorageDevice *this;
  
  this = (IStorageDevice *)FUN_18000ccc0(param_1);
  if (this == (IStorageDevice *)0x0) {
    this = (IStorageDevice *)0x0;
  }
  else {
    iVar1 = IStorageDevice::ConvertVolume(this);
    if (iVar1 < 0) {
      if (this != (IStorageDevice *)0x0) {
        (**(code **)(*(longlong *)this + 0x68))(this,1);
      }
      this = (IStorageDevice *)0x0;
    }
  }
  return this;
}




void FUN_18002b890(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_180003e70(param_2);
  uVar2 = FUN_180003e70(*(undefined8 *)(param_1 + 8));
  FUN_18002c290(*(undefined8 *)(param_1 + 0x10),uVar2,uVar1,param_4);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  return;
}




void FUN_18002b8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_180003e70(param_2);
  puVar2 = (undefined8 *)FUN_180008bd0(param_1);
  uVar3 = FUN_180003e70(*puVar2);
  uVar4 = FUN_1800047c0(param_1);
  FUN_18002c290(uVar4,uVar3,uVar1,param_4);
  FUN_180008bd0(param_1);
  FUN_180008bd0(param_1);
  FUN_180001c90();
  FUN_180008bd0(param_1);
  plVar5 = (longlong *)FUN_180008bd0(param_1);
  *plVar5 = *plVar5 + 8;
  return;
}




longlong FUN_18002b9b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  CGPTDiskAnalyzer *pCVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  lVar2 = param_2 - *plVar1 >> 3;
  uVar3 = FUN_1800047c0(param_1);
  _Var4 = FUN_18002a4a0(param_1);
  _Var5 = FUN_18002a3a0(param_1);
  if (_Var4 == _Var5) {
    FUN_18000b140();
  }
  uVar6 = FUN_180027620(param_1,_Var4 + 1);
  pCVar7 = (CGPTDiskAnalyzer *)allocate(uVar3,uVar6);
  uVar8 = FUN_180003e70(param_3);
  uVar9 = FUN_180003e70(pCVar7 + lVar2 * 8);
  FUN_18002c290(uVar3,uVar9,uVar8,param_4);
  plVar1 = (longlong *)FUN_180008bd0(param_1);
  if (param_2 == *plVar1) {
    puVar10 = (undefined8 *)FUN_180008bd0(param_1);
    puVar11 = (undefined8 *)FUN_180008bb0(param_1);
    FUN_18002d9b0(param_1,*puVar11,*puVar10,pCVar7);
  }
  else {
    puVar10 = (undefined8 *)FUN_180008bb0(param_1);
    FUN_18002d970(param_1,*puVar10,param_2,pCVar7);
    puVar10 = (undefined8 *)FUN_180008bd0(param_1);
    FUN_18002d970(param_1,param_2,*puVar10,pCVar7 + lVar2 * 8 + 8);
  }
  FUN_1800276b0(param_1,(longlong)pCVar7,_Var4 + 1,uVar6);
  plVar1 = (longlong *)FUN_180008bb0(param_1);
  return *plVar1 + lVar2 * 8;
}




longlong *
FUN_18002bbf0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5,ulonglong param_6)

{
  char cVar1;
  bool bVar2;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong lVar3;
  longlong *plVar4;
  longlong local_res18;
  longlong local_res20;
  longlong local_50;
  longlong local_48;
  longlong local_40;
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
  FUN_180008430(&local_50,param_3,param_6 >> 1);
  FUN_18002bbf0(param_1,&local_28,local_res18,local_50,param_5,param_6 >> 1);
  local_res18 = *extraout_RAX;
  FUN_18002bbf0(param_1,&local_20,local_50,local_res20,param_5,param_6 - (param_6 >> 1));
  local_50 = *extraout_RAX_00;
  local_48 = local_res18;
  bVar2 = true;
  do {
    local_40 = FUN_180008900(&local_res18);
    lVar3 = FUN_180008900(&local_50);
    cVar1 = FUN_18002b700(param_5,lVar3,local_40);
    if (cVar1 == '\0') {
      FUN_180008990(&local_res18);
      plVar4 = &local_50;
      bVar2 = FUN_180008850(&local_res18,plVar4);
      if (bVar2) {
        *param_2 = local_48;
        return plVar4;
      }
    }
    else {
      if (bVar2) {
        local_48 = local_50;
      }
      plVar4 = FUN_180008940(&local_50,local_18);
      local_38 = *plVar4;
      local_30 = local_res18;
      FUN_18002dd70(param_1,local_res18,param_1,local_38);
      plVar4 = &local_res20;
      bVar2 = FUN_180008850(&local_50,plVar4);
      if (bVar2) {
        *param_2 = local_48;
        return plVar4;
      }
    }
    bVar2 = false;
  } while( true );
}




CGPTDiskAnalyzer *
FUN_18002be30(undefined8 param_1,undefined8 param_2,CGPTDiskAnalyzer *param_3,undefined8 param_4)

{
  CGPTDiskAnalyzer *pCVar1;
  undefined8 uVar2;
  CGPTDiskAnalyzer *local_res18;
  undefined8 local_res20;
  CGPTDiskAnalyzer local_37;
  CGPTDiskAnalyzer local_36 [6];
  longlong local_30;
  CGPTDiskAnalyzer *local_28;
  longlong local_20;
  CGPTDiskAnalyzer *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_30 = FUN_180003e70(param_1);
  local_20 = FUN_180003e70(param_2);
  pCVar1 = (CGPTDiskAnalyzer *)FUN_180018ed0(&local_30,&local_20);
  local_28 = CGPTDiskAnalyzer::operator=(local_res18,pCVar1);
  local_18 = &local_37;
  FUN_18001a2b0();
  CGPTDiskAnalyzer::operator=(local_18,local_36);
  uVar2 = FUN_18002bf00(local_30,local_20,local_28,local_res20);
  FUN_18000a750(&local_res18,uVar2);
  return local_res18;
}




undefined8 FUN_18002bf00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong local_res8;
  longlong local_28 [5];
  
  uVar2 = param_4;
  FUN_18000a990(local_28,param_3,param_4);
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 8) {
    uVar1 = FUN_180003e70(local_res8);
    FUN_18002b890((longlong)local_28,uVar1,param_4,uVar2);
  }
  uVar2 = FUN_18000afb0(local_28);
  FUN_180022370(local_28);
  return uVar2;
}




undefined8 * FUN_18002bf90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18002c660(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18002c850(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 *
FUN_18002c040(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18002c6c0(&local_20);
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18002c950(puVar1,&local_20,param_2,param_3,param_4);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 * FUN_18002c110(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18002c720(&local_20);
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18002ca50(puVar1,&local_20,param_2);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




undefined8 *
FUN_18002c1c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18002c780(&local_20);
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = FUN_18002cb50(puVar1,&local_20,param_2,param_3,param_4);
  }
  local_18 = local_28;
  FUN_18000ba90(param_1,local_28);
  FUN_18000c7e0(&local_20);
  return param_1;
}




void FUN_18002c290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_3;
  plVar1 = (longlong *)FUN_1800043a0(8,param_2);
  puVar2 = (undefined8 *)FUN_180003e70(param_3);
  FUN_18002c3d0(plVar1,puVar2,uVar3,param_4);
  return;
}




void FUN_18002c2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_18000af40(param_1);
  if (bVar1) {
    uVar2 = FUN_180003e70(param_2);
    FUN_18002b8f0(param_1,uVar2,param_3,param_4);
  }
  else {
    uVar2 = FUN_180003e70(param_2);
    plVar3 = (longlong *)FUN_180008bd0(param_1);
    FUN_18002b9b0(param_1,*plVar3,uVar2,param_4);
  }
  return;
}




void FUN_18002c350(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res10 [24];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [3];
  
  local_res10[0] = param_2;
  puVar1 = (ulonglong *)FUN_180008bd0(param_1);
  plVar2 = FUN_180008eb0(param_1,&local_28);
  plVar3 = FUN_180008dc0(param_1,&local_20);
  FUN_18002bbf0(param_1,local_18,*plVar3,*plVar2,local_res10,*puVar1);
  return;
}




longlong *
FUN_18002c3d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,(longlong *)*param_2,param_3,param_4);
  return param_1;
}




undefined8 * FUN_18002c410(undefined8 *param_1)

{
  FUN_18002c440(param_1);
  return param_1;
}




undefined8 * FUN_18002c440(undefined8 *param_1)

{
  *param_1 = 0;
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

longlong * CTempBuffer<>(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_18002d750(param_1,param_2,param_3,param_4);
  return param_1;
}




undefined8 * FUN_18002c4a0(undefined8 *param_1)

{
  FUN_18002cbe0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002c4e0(undefined8 *param_1)

{
  FUN_18002cc20(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002c510(undefined8 *param_1)

{
  FUN_18002cc50(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002c550(undefined8 *param_1)

{
  FUN_18002cc90(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002c580(undefined8 *param_1)

{
  FUN_18002cd30(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002c5c0(undefined8 *param_1)

{
  FUN_18002cd70(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002c5f0(undefined8 *param_1)

{
  FUN_18002cda0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002c630(undefined8 *param_1)

{
  FUN_18002cde0(param_1);
  *param_1 = dnc::
             ConstructFunction<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002c660(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18002c4e0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18002c6c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18002c550(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18002c720(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18002c5c0(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18002c780(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18002c630(puVar1);
  }
  *param_1 = local_10;
  return param_1;
}




undefined8 * FUN_18002c7e0(undefined8 *param_1,longlong param_2)

{
  FUN_18002ccc0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18002c850(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_18002cd00(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18002c8c0(undefined8 *param_1,longlong param_2)

{
  FUN_18002ccc0(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>,3>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}




undefined8 *
FUN_18002c950(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_18002cd00(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>,3>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  return param_1;
}




undefined8 * FUN_18002c9e0(undefined8 *param_1,longlong param_2)

{
  FUN_18002ce10(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 * FUN_18002ca50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_18002ce50(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64)>,1>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18002cac0(undefined8 *param_1,longlong param_2)

{
  FUN_18002ce10(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>,3>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,(undefined8 *)(param_2 + 8));
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}




undefined8 *
FUN_18002cb50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_18002ce50(param_1);
  *param_1 = dnc::
             FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>,3>
             ::vftable;
  FUN_18000c0e0(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  return param_1;
}




undefined8 * FUN_18002cbe0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002cc20(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002cc50(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002cc90(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002ccc0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::FunctorObject<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(void)>::vftable;
  return param_1;
}




undefined8 * FUN_18002cd00(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::FunctorObject<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(void)>::vftable;
  return param_1;
}




undefined8 * FUN_18002cd30(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64)>::
             vftable;
  return param_1;
}




undefined8 * FUN_18002cd70(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64)>::
             vftable;
  return param_1;
}




undefined8 * FUN_18002cda0(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002cde0(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::
             FunctorObject<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>
             ::vftable;
  return param_1;
}




undefined8 * FUN_18002ce10(undefined8 *param_1)

{
  FUN_18000c710(param_1);
  *param_1 = dnc::FunctorObject<class_CMomObject<class_CMBR>*___ptr64___cdecl(void)>::vftable;
  return param_1;
}




undefined8 * FUN_18002ce50(undefined8 *param_1)

{
  FUN_18000c730(param_1);
  *param_1 = dnc::FunctorObject<class_CMomObject<class_CMBR>*___ptr64___cdecl(void)>::vftable;
  return param_1;
}




undefined1 *
FUN_18002ce80(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  return param_1;
}




void FUN_18002ced0(undefined8 *param_1)

{
  FUN_18000ab10(param_1);
  return;
}




void FUN_18002cf00(longlong *param_1,undefined8 *param_2)

{
  FUN_18002cf30(param_1,(longlong *)*param_2);
  return;
}




longlong FUN_18002cf30(longlong *param_1,longlong *param_2)

{
  if ((longlong *)*param_1 != param_2) {
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
    }
    *param_1 = (longlong)param_2;
  }
  return *param_1;
}




bool FUN_18002cfa0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_18002cff0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_18002d040(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_18002d090(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




undefined8 FUN_18002d0e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_18002d150(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CExtendMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>,3>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_18002d1c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




undefined8 FUN_18002d230(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMBR>*___ptr64___cdecl(__int64_const&___ptr64,unsigned_char*___ptr64_const&___ptr64,unsigned_int_const&___ptr64)>,3>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18000caa0((undefined8 *)(param_1 + 8),(undefined8 *)(lVar1 + 8));
  }
  return uVar2;
}




bool FUN_18002d2a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_18000df20(param_1);
  lVar2 = FUN_18000df20(param_2);
  return lVar1 < lVar2;
}




IObject * FUN_18002d2f0(undefined8 param_1,undefined8 *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x30);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18002b550(pIVar1,param_2);
  }
  return local_20;
}




IObject * FUN_18002d360(undefined8 param_1,undefined8 *param_2,longlong *param_3,uint *param_4)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x30);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18002b5f0(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




IObject * FUN_18002d3e0(undefined8 param_1,undefined8 *param_2)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x30);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18002b5a0(pIVar1,param_2);
  }
  return local_20;
}




IObject * FUN_18002d450(undefined8 param_1,undefined8 *param_2,longlong *param_3,uint *param_4)

{
  IObject *pIVar1;
  undefined8 local_20;
  
  pIVar1 = (IObject *)operator_new(0x30);
  if (pIVar1 == (IObject *)0x0) {
    local_20 = (IObject *)0x0;
  }
  else {
    local_20 = FUN_18002b660(pIVar1,param_2,param_3,param_4);
  }
  return local_20;
}




undefined8 * FUN_18002d4d0(undefined8 *param_1,uint param_2)

{
  FUN_18002ced0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18002d510(undefined8 *param_1,uint param_2)

{
  FUN_18000ab10(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18002d550(longlong param_1)

{
  FUN_18002d680(param_1);
  return;
}




void FUN_18002d570(undefined1 *param_1)

{
  FUN_18002e300(param_1);
  return;
}




ulonglong FUN_18002d590(longlong param_1)

{
  uint uVar1;
  undefined8 local_18;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar1 = FUN_18002e2a0(param_1);
    local_18 = (ulonglong)uVar1;
  }
  else {
    local_18 = *(ulonglong *)(param_1 + 0x18);
  }
  return local_18;
}




longlong FUN_18002d5e0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_18002e2c0(param_1);
  lVar2 = FUN_18000df20(param_1);
  uVar3 = FUN_18002d590(param_1);
  return ((ulonglong)uVar1 + lVar2) - uVar3;
}




void FUN_18002d640(void)

{
  FUN_180009e90();
  return;
}




void FUN_18002d660(void)

{
  FUN_180009440();
  return;
}




undefined4 FUN_18002d680(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x2c);
}




undefined4 FUN_18002d6a0(longlong param_1)

{
  undefined4 local_18;
  
  LOCK();
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  UNLOCK();
  if (*(int *)(param_1 + 0x2c) < 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0x2c);
  }
  return local_18;
}




int FUN_18002d6e0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = FUN_18002d6a0((longlong)param_1);
  if ((iVar1 == 0) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x68))(param_1,1);
  }
  return iVar1;
}




longlong FUN_18002d750(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong *)*param_1 != param_2) {
    plVar3 = param_2;
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
      *param_1 = 0;
    }
    if (param_2 != (longlong *)0x0) {
      uVar1 = FUN_18000a240(0,plVar3,param_3,param_4);
      lVar2 = FUN_18000bab0(param_2,uVar1);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        (**(code **)(*param_2 + 8))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  return *param_1;
}




void FUN_18002d810(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  char cVar1;
  
  FUN_1800047c0(param_3);
  FUN_1800047c0(param_1);
  cVar1 = FUN_180007f20();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  FUN_18002d890(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




void FUN_18002d890(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_180003e70(param_3);
  if (param_1 != lVar2) {
    FUN_18000d290(param_1,param_6);
    plVar3 = (longlong *)FUN_180008bd0(param_3);
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




void FUN_18002d970(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                  CGPTDiskAnalyzer *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_18002be30(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_18002d9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                  CGPTDiskAnalyzer *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18002d970(param_1,param_2,param_3,param_4);
  return;
}




undefined8 * FUN_18002da10(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18002c4a0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_18002da60(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18002c510(puVar1);
  }
  return local_10;
}




undefined8 * FUN_18002dab0(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18002c580(puVar1);
  }
  return local_10;
}




undefined8 * FUN_18002db00(void)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = FUN_18002c5f0(puVar1);
  }
  return local_10;
}




undefined8 * FUN_18002db50(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18002c7e0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_18002dbb0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18002c8c0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_18002dc10(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18002c9e0(puVar1,param_1);
  }
  return local_20;
}




undefined8 * FUN_18002dc70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_18002cac0(puVar1,param_1);
  }
  return local_20;
}




void FUN_18002dcd0(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_10 [2];
  
  puVar2 = FUN_180008d50(param_1,local_10);
  p_Var1 = (_Container_proxy *)*puVar2;
  uVar3 = FUN_180003e70(param_2);
  FUN_18000bdb0(param_1,p_Var1,uVar3);
  return;
}




void FUN_18002dd20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18002c2e0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18002dd50(longlong param_1)

{
  undefined1 local_18;
  
  FUN_18002c350(param_1,local_18);
  return;
}




void FUN_18002dd70(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

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
  plVar2 = FUN_180008eb0(param_3,local_10);
  bVar1 = FUN_180008890(&local_res20,plVar2);
  if (!bVar1) {
    return;
  }
  local_18 = local_res20;
  FUN_180008920(&local_18);
  lVar3 = FUN_180003e70(local_res18);
  if (param_1 == lVar3) {
    bVar1 = FUN_180008890(&local_res10,&local_res20);
    if (!bVar1) {
      return;
    }
    bVar1 = FUN_180008890(&local_res10,&local_18);
    if (!bVar1) {
      return;
    }
  }
  FUN_18002d810(param_1,local_res10,local_res18,local_res20,local_18,1);
  return;
}




undefined4 * FUN_18002de30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}




void FUN_18002de70(void)

{
  return;
}




int FUN_18002de80(undefined4 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_38 [4];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_28 = 0xfffffffffffffffe;
  FUN_18002a4e0(local_38,*param_1,param_1[1],param_2);
  FUN_18000d480(param_3);
  FUN_18001c9c0(&local_80);
  local_58 = 0;
  local_88 = FUN_18002a540((longlong)local_38,&local_80);
  if (-1 < local_88) {
    local_70 = -1;
    lVar1 = FUN_18000ac00(&local_80);
    if (lVar1 != 0) {
      puVar2 = FUN_180023e70(&local_80,&local_20);
      local_50 = (longlong *)FUN_18000ac00(puVar2);
      local_70 = (**(code **)(*local_50 + 0x38))(local_50);
    }
    local_78 = 0;
    while( true ) {
      lVar1 = FUN_18000ac00(&local_80);
      if ((lVar1 == 0) || (0x31 < local_78)) goto LAB_18002e08e;
      lVar1 = param_3;
      FUN_18002b280(local_38,&local_80,param_3);
      FUN_18002c3d0(&local_68,&local_80,lVar1,param_2);
      param_2 = &local_80;
      uVar3 = FUN_18002a570((longlong)local_38,&local_68,local_58,param_2);
      local_88 = (int)uVar3;
      if (local_88 < 0) break;
      lVar1 = FUN_18000ac00(&local_80);
      if (lVar1 == 0) break;
      puVar2 = FUN_180023e70(&local_80,&local_18);
      local_48 = (longlong *)FUN_18000ac00(puVar2);
      lVar1 = (**(code **)(*local_48 + 0x38))(local_48);
      if (lVar1 == local_70) {
        FUN_18000c780(&local_68);
        goto LAB_18002e08e;
      }
      puVar2 = FUN_180023e70(&local_80,local_10);
      local_40 = (longlong *)FUN_18000ac00(puVar2);
      local_70 = (**(code **)(*local_40 + 0x38))(local_40);
      if (local_58 == 0) {
        local_58 = local_70;
      }
      local_78 = local_78 + 1;
      FUN_18000c780(&local_68);
    }
    FUN_18000c780(&local_68);
  }
LAB_18002e08e:
  FUN_18000c780(&local_80);
  FUN_18002b420(param_3);
  local_60 = local_88;
  FUN_18002a530();
  return local_60;
}




void * FUN_18002e0d0(void *param_1,void *param_2)

{
  memcpy(param_1,param_2,0x10);
  return param_1;
}




undefined1 FUN_18002e110(longlong param_1)

{
  undefined1 local_18;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (*(char *)(param_1 + 4) == '\0')) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}




undefined1 FUN_18002e150(longlong param_1)

{
  undefined1 local_18;
  
  if (((*(char *)(param_1 + 4) == '\x0f') || (*(char *)(param_1 + 4) == '\x05')) ||
     (*(char *)(param_1 + 4) == -0x7b)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}




bool FUN_18002e1b0(byte *param_1)

{
  return 0x7f < *param_1;
}




undefined1 FUN_18002e1f0(longlong param_1)

{
  undefined1 local_18;
  
  if ((((((*(char *)(param_1 + 4) == '\x11') || (*(char *)(param_1 + 4) == '\x14')) ||
        (*(char *)(param_1 + 4) == '\x16')) ||
       ((*(char *)(param_1 + 4) == '\x17' || (*(char *)(param_1 + 4) == '\x1b')))) ||
      ((*(char *)(param_1 + 4) == '\x1e' ||
       ((*(char *)(param_1 + 4) == '\x1c' || (*(char *)(param_1 + 4) == -0x6e)))))) ||
     (*(char *)(param_1 + 4) == -0x6d)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}




undefined4 FUN_18002e2a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_18002e2c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}




undefined1 FUN_18002e2e0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 4);
}




undefined1 FUN_18002e300(undefined1 *param_1)

{
  return *param_1;
}




ulonglong FUN_18002e320(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar3;
  
  iVar1 = FUN_18002e2a0((longlong)param_1);
  iVar2 = FUN_18002e2a0((longlong)param_2);
  uVar3 = CONCAT44(extraout_var,iVar2);
  if (iVar1 == iVar2) {
    iVar1 = FUN_18002e2c0((longlong)param_1);
    iVar2 = FUN_18002e2c0((longlong)param_2);
    uVar3 = CONCAT44(extraout_var_00,iVar2);
    if ((((((iVar1 == iVar2) && (uVar3 = 0, param_1[3] == param_2[3])) &&
          (uVar3 = 0, param_1[1] == param_2[1])) &&
         ((uVar3 = 0, param_1[2] == param_2[2] && (uVar3 = 0, param_1[7] == param_2[7])))) &&
        ((uVar3 = 0, param_1[5] == param_2[5] &&
         ((uVar3 = 0, param_1[6] == param_2[6] && (uVar3 = 0, param_1[4] == param_2[4])))))) &&
       (uVar3 = 0, *param_1 == *param_2)) {
      return 1;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




void FUN_18002e490(void *param_1,uint param_2,uint param_3,int param_4,longlong param_5,
                  longlong param_6,undefined1 param_7,undefined1 param_8)

{
  undefined1 auStackY_68 [32];
  uint local_38;
  uint local_34;
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  byte local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  byte local_22;
  undefined1 local_21;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStackY_68;
  local_28 = param_7;
  local_24 = param_8;
  local_20 = (int)param_5 - param_4;
  local_1c = (undefined4)param_6;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  FUN_1800012e0(param_2,param_3,param_5,&local_30,&local_34,(int *)&local_38);
  FUN_18002e610(local_30,local_34,local_38,&local_25,&local_27,&local_26);
  FUN_1800012e0(param_2,param_3,param_5 + -1 + param_6,&local_30,&local_34,(int *)&local_38);
  FUN_18002e610(local_30,local_34,local_38,&local_21,&local_23,&local_22);
  FUN_18002e0d0(param_1,&local_28);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_68);
  return;
}




void FUN_18002e610(longlong param_1,uint param_2,uint param_3,undefined1 *param_4,
                  undefined1 *param_5,byte *param_6)

{
  undefined2 local_res8;
  undefined1 local_res10;
  undefined1 local_res18;
  undefined2 local_18;
  
  if (param_2 < 0x100) {
    local_res10 = (undefined1)param_2;
    *param_5 = local_res10;
  }
  else {
    *param_5 = 0xff;
  }
  if (param_3 < 0x40) {
    local_res18 = (byte)param_3;
    *param_6 = local_res18;
  }
  else {
    *param_6 = 0x3f;
  }
  if (param_1 < 0x400) {
    local_res8 = (ushort)param_1;
    local_18 = local_res8;
  }
  else {
    local_18 = 0x3ff;
  }
  *param_4 = (char)local_18;
  *param_6 = *param_6 | (byte)((int)(local_18 & 0x300) >> 2);
  return;
}




undefined8 FUN_18002e9f0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18002ea10(undefined8 param_1)

{
  return param_1;
}




char * FUN_18002ea30(void)

{
  return "CRangeDevice";
}




undefined8 FUN_18002ea40(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

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
      local_28 = (char *)FUN_180018220(0,param_2,param_3,param_4);
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




IStorageDevice *
FUN_18002eb60(IStorageDevice *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  uVar2 = param_4;
  IStorageDevice::IStorageDevice(param_1);
  *(undefined ***)param_1 = CRangeDevice::vftable;
  *(undefined ***)(param_1 + 8) = CRangeDevice::vftable;
  FUN_18002f050((longlong *)(param_1 + 0x10),param_2,uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return param_1;
}




void FUN_18002ebf0(undefined8 *param_1)

{
  *param_1 = CRangeDevice::vftable;
  param_1[1] = CRangeDevice::vftable;
  FUN_18000c780(param_1 + 2);
  return;
}




undefined4 FUN_18002ec40(longlong param_1,longlong param_2,ulonglong param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong local_58;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  uVar3 = FUN_18002f010(param_1 + -8,param_3,(ulonglong)param_4,*(undefined8 *)(param_1 + 0x10),
                        *(ulonglong *)(param_1 + 0x18));
  if ((uVar3 & 0xff) == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    local_58 = (ulonglong)param_4;
    if (*(ulonglong *)(param_1 + 0x18) < param_3 + param_4) {
      local_58 = *(longlong *)(param_1 + 0x18) - param_3;
    }
    puVar4 = FUN_180023e70((undefined8 *)(param_1 + 8),&local_20);
    lVar5 = FUN_18000ac00(puVar4);
    uVar1 = (**(code **)(*(longlong *)(lVar5 + 8) + 8))
                      ((longlong *)(lVar5 + 8),param_2,param_3 + *(longlong *)(param_1 + 0x10),
                       local_58 & 0xffffffff);
    puVar4 = FUN_180023e70((undefined8 *)(param_1 + 8),local_18);
    lVar5 = FUN_18000ac00(puVar4);
    uVar2 = (*(code *)**(undefined8 **)(lVar5 + 8))((undefined8 *)(lVar5 + 8));
    memset((void *)(param_2 + uVar2 * local_58),0,param_4 - local_58);
  }
  return uVar1;
}




undefined4 FUN_18002ee00(longlong param_1,undefined8 param_2,ulonglong param_3,uint param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong local_38;
  undefined8 local_18 [3];
  
  uVar2 = FUN_18002f010(param_1 + -8,param_3,(ulonglong)param_4,*(undefined8 *)(param_1 + 0x10),
                        *(ulonglong *)(param_1 + 0x18));
  if ((uVar2 & 0xff) == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    local_38 = (ulonglong)param_4;
    if (*(ulonglong *)(param_1 + 0x18) < param_3 + param_4) {
      local_38 = *(longlong *)(param_1 + 0x18) - param_3;
    }
    puVar3 = FUN_180023e70((undefined8 *)(param_1 + 8),local_18);
    lVar4 = FUN_18000ac00(puVar3);
    uVar1 = (**(code **)(*(longlong *)(lVar4 + 8) + 0x10))
                      ((longlong *)(lVar4 + 8),param_2,param_3 + *(longlong *)(param_1 + 0x10),
                       local_38 & 0xffffffff);
  }
  return uVar1;
}




void FUN_18002ef20(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 local_10 [2];
  
  puVar1 = FUN_180023e70((undefined8 *)(param_1 + 0x10),local_10);
  plVar2 = (longlong *)FUN_18000ac00(puVar1);
  (**(code **)(*plVar2 + 0x28))(plVar2,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}




undefined8 FUN_18002efb0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




undefined8 FUN_18002efd0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_18002eff0(void)

{
  return 0;
}




void FUN_18002f000(void)

{
  return;
}




ulonglong FUN_18002f010(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  uint7 uVar2;
  
  if (((longlong)param_2 < 0) || (in_RAX = param_5, param_5 <= param_2)) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(param_5 >> 8);
    if (param_5 < param_3) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}




longlong * FUN_18002f050(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  CTempBuffer<>(param_1,param_2,param_3,param_4);
  return param_1;
}




undefined8 FUN_18002f090(undefined8 param_1)

{
  return param_1;
}




void FUN_18002f0b0(void)

{
  return;
}




void FUN_18002f0c0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  __uint64 _Var6;
  void *_Dst;
  undefined1 auStackY_2f8 [32];
  uint local_2b0;
  longlong local_290;
  longlong local_288;
  ulonglong local_280;
  void *local_278;
  undefined8 *local_270;
  void *local_268;
  void *local_260;
  undefined8 local_258;
  undefined1 local_250 [24];
  longlong local_238 [68];
  ulonglong local_18;
  
  local_258 = 0xfffffffffffffffe;
  local_18 = DAT_180053018 ^ (ulonglong)auStackY_2f8;
  FUN_18002fa80(param_5);
  uVar5 = FUN_18002f3d0();
  if ((int)uVar5 != 0) {
    uVar2 = FUN_18002f3f0(param_5);
    local_280 = CONCAT44(0,uVar2);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_280;
    _Var6 = SUB168(ZEXT816(0x90) * auVar1,0);
    if (SUB168(ZEXT816(0x90) * auVar1,8) != 0) {
      _Var6 = 0xffffffffffffffff;
    }
    _Dst = operator_new(_Var6);
    local_278 = _Dst;
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,(ulonglong)uVar2 * 0x90);
      for (local_2b0 = 0; local_2b0 < uVar2; local_2b0 = local_2b0 + 1) {
        *(undefined1 *)((longlong)_Dst + (ulonglong)local_2b0 * 0x90 + 0x1c) = 1;
      }
      local_270 = *(undefined8 **)(param_2 + 8);
      uVar3 = (*(code *)*local_270)(param_2 + 8);
      FUN_18002f410(param_5,(longlong)_Dst,uVar3);
      FUN_180006d50(local_238,param_2,param_3);
      iVar4 = FUN_180006e20(local_238);
      if (iVar4 < 0) {
        if (_Dst != (void *)0x0) {
          local_268 = _Dst;
          free(_Dst);
        }
        FUN_180006dc0((longlong)local_238);
      }
      else {
        local_288 = 0;
        local_290 = 0;
        uVar5 = FUN_1800075e0((longlong)local_238,local_250,&local_288,&local_290);
        if ((int)uVar5 < 0) {
          FUN_180006dc0((longlong)local_238);
        }
        else {
          iVar4 = FUN_18002fd80((longlong)local_238);
          uVar3 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
          FUN_18002f680(param_4,_Dst,uVar2,local_250,local_288,local_290,uVar3,iVar4);
          if (_Dst != (void *)0x0) {
            local_260 = _Dst;
            free(_Dst);
          }
          FUN_180006dc0((longlong)local_238);
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2f8);
  return;
}




undefined8 FUN_18002f3d0(void)

{
  return 1;
}




void FUN_18002f3f0(undefined8 param_1)

{
  FUN_1800144c0(param_1);
  return;
}




void FUN_18002f410(undefined8 param_1,longlong param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  uint local_70;
  void *local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_180053018 ^ (ulonglong)auStack_98;
  local_70 = 0;
  local_78 = (undefined4 *)0x0;
  FUN_180008e20(param_1,&local_60);
  while( true ) {
    plVar3 = FUN_180008f10(param_1,&local_40);
    bVar1 = FUN_180008890(&local_60,plVar3);
    if (!bVar1) break;
    local_68 = (void *)FUN_1800088e0(&local_60);
    local_78 = (undefined4 *)(param_2 + (ulonglong)local_70 * 0x90);
    *(undefined1 *)(local_78 + 7) = 1;
    *local_78 = 1;
    local_70 = local_70 + 1;
    local_78[6] = local_70;
    local_50 = (ulonglong)param_3;
    local_58 = FUN_180008a50((longlong)local_68);
    lVar4 = FUN_180008a60((longlong)local_68);
    *(ulonglong *)(local_78 + 4) = local_50 * ((local_58 - lVar4) + 1);
    local_48 = (ulonglong)param_3;
    lVar4 = FUN_180008a60((longlong)local_68);
    *(ulonglong *)(local_78 + 2) = local_48 * lVar4;
    *(undefined8 *)(local_78 + 0x10) = *(undefined8 *)((longlong)local_68 + 0x30);
    memcpy(local_78 + 0x12,(void *)((longlong)local_68 + 0x38),0x48);
    memcpy(local_78 + 0xc,(void *)((longlong)local_68 + 0x10),0x10);
    puVar5 = local_28;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar2 = memcmp(local_68,local_28,0x10);
    if (iVar2 == 0) {
      local_38 = 0xde94bba4;
      local_34 = 0x6d1;
      local_32 = 0x4d40;
      local_30 = 0xa1;
      local_2f = 0x6a;
      local_2e = 0xbf;
      local_2d = 0xd5;
      local_2c = 1;
      local_2b = 0x79;
      local_2a = 0xd6;
      local_29 = 0xac;
      memcpy(local_78 + 8,&local_38,0x10);
    }
    else {
      memcpy(local_78 + 8,local_68,0x10);
    }
    FUN_180008920(&local_60);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_98);
  return;
}




int FUN_18002f680(longlong *param_1,void *param_2,uint param_3,void *param_4,longlong param_5,
                 longlong param_6,uint param_7,int param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *local_60;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_40;
  int *local_38;
  int *local_30;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int *local_10;
  
  local_48 = 0;
  local_4c = (param_3 - 1) * 0x90 + 0xc0;
  local_30 = (int *)operator_new((longlong)local_4c);
  local_20 = local_30;
  memset(local_30,0,(longlong)local_4c);
  piVar1 = local_30;
  local_30[1] = param_3;
  *local_30 = 1;
  memcpy(local_30 + 2,param_4,0x10);
  piVar1[10] = param_8;
  *(ulonglong *)(piVar1 + 6) = param_5 * (ulonglong)param_7;
  *(ulonglong *)(piVar1 + 8) = (param_6 * (ulonglong)param_7 - param_5 * (ulonglong)param_7) + 1;
  memcpy(piVar1 + 0xc,param_2,(ulonglong)param_3 * 0x90);
  for (local_50 = 0; local_50 < 3; local_50 = local_50 + 1) {
    cVar2 = (**(code **)(*param_1 + 0x30))(param_1,local_30,local_4c);
    if (cVar2 != '\0') {
      local_60 = (int *)0x0;
      cVar2 = (**(code **)(*param_1 + 0x28))(param_1,&local_60);
      if ((cVar2 != '\0') && (local_60 != (int *)0x0)) {
        if ((local_60[1] == piVar1[1]) &&
           ((((*local_60 == *piVar1 && (*local_60 == 1)) &&
             (bVar3 = ATL__operator__(local_60 + 2,piVar1 + 2), bVar3)) &&
            (local_60[10] == piVar1[10])))) {
          local_24 = 1;
          for (local_58 = 0; local_58 < (uint)piVar1[1]; local_58 = local_58 + 1) {
            local_38 = piVar1 + (ulonglong)local_58 * 0x24 + 0xc;
            local_28 = 0;
            for (local_54 = 0; local_54 < (uint)local_60[1]; local_54 = local_54 + 1) {
              local_40 = local_60 + (ulonglong)local_54 * 0x24 + 0xc;
              if ((((*(longlong *)(local_38 + 2) == *(longlong *)(local_40 + 2)) &&
                   (*(longlong *)(local_38 + 4) == *(longlong *)(local_40 + 4))) &&
                  ((*local_38 == *local_40 &&
                   ((bVar3 = ATL__operator__(local_38 + 8,local_40 + 8), bVar3 &&
                    (*(longlong *)(local_38 + 0x10) == *(longlong *)(local_40 + 0x10))))))) &&
                 (iVar4 = memcmp(local_38 + 0x12,local_40 + 0x12,0x48), iVar4 == 0)) {
                local_28 = 1;
                break;
              }
            }
            if (local_28 == 0) {
              local_24 = 0;
              break;
            }
          }
          if (local_24 != 0) {
            local_48 = 1;
          }
        }
        local_18 = local_60;
        free(local_60);
      }
    }
    if (local_48 == 1) break;
  }
  if (local_30 != (int *)0x0) {
    local_10 = local_30;
    free(local_30);
  }
  return local_48;
}




void FUN_18002fa80(undefined8 param_1)

{
  bool bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined8 local_1e0 [2];
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_1c0 = 0xfffffffffffffffe;
  local_28 = DAT_180053018 ^ (ulonglong)auStack_208;
  uVar2 = FUN_1800144c0(param_1);
  if (1 < uVar2) {
    FUN_18000c620(local_1e0);
    while (uVar2 = FUN_1800144c0(param_1), 1 < uVar2) {
      plVar3 = FUN_180008dc0(param_1,&local_1b8);
      local_1e8 = *plVar3;
      puVar4 = (undefined1 *)FUN_1800088e0(&local_1e8);
      puVar7 = local_1a8;
      for (lVar6 = 0x80; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_180008920(&local_1e8);
      while( true ) {
        plVar3 = FUN_180008eb0(param_1,&local_1b0);
        bVar1 = FUN_180008890(&local_1e8,plVar3);
        if (!bVar1) break;
        puVar4 = (undefined1 *)FUN_1800088e0(&local_1e8);
        puVar7 = local_128;
        for (lVar6 = 0x80; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar4 = local_1a8;
        puVar7 = local_a8;
        for (lVar6 = 0x80; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        local_1c8 = FUN_180008a60((longlong)local_a8);
        local_1d0 = FUN_180008a60((longlong)local_128);
        if (local_1d0 < local_1c8) {
          puVar4 = local_128;
          puVar7 = local_1a8;
          for (lVar6 = 0x80; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        FUN_180008920(&local_1e8);
      }
      FUN_18002a410(local_1e0,local_1a8);
      FUN_18002ff80(param_1,(longlong)local_1a8);
    }
    lVar6 = FUN_1800144c0(param_1);
    if (lVar6 != 0) {
      uVar5 = FUN_18002ff10(param_1);
      FUN_18002a410(local_1e0,uVar5);
      FUN_180009320(param_1);
    }
    while (bVar1 = FUN_18002fe60(local_1e0), !bVar1) {
      uVar5 = FUN_18002ff10(local_1e0);
      FUN_18002a410(param_1,uVar5);
      FUN_18002ff40(local_1e0);
    }
    FUN_18000c970(local_1e0);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_208);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    bool __cdecl ATL::operator!=(class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > > const & __ptr64,char const * __ptr64)
    bool __cdecl ATL::operator!=(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > const & __ptr64,wchar_t const * __ptr64)
   
   Library: Visual Studio 2010 Debug */

bool ATL__operator__(void *param_1,void *param_2)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = IsEqualGUID(param_1,param_2);
  return (int)CONCAT71(extraout_var,bVar1) != 0;
}




/* Library Function - Multiple Matches With Same Base Name
    bool __cdecl std::operator==<struct _EXCEPTION_RECORD const ,struct _EXCEPTION_RECORD const
   >(class std::shared_ptr<struct _EXCEPTION_RECORD const > const & __ptr64,class
   std::shared_ptr<struct _EXCEPTION_RECORD const > const & __ptr64)
    bool __cdecl std::operator==<class __ExceptionPtr,class __ExceptionPtr>(class
   std::shared_ptr<class __ExceptionPtr> const & __ptr64,class std::shared_ptr<class __ExceptionPtr>
   const & __ptr64)
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

bool operator==<>(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180008a60(param_1);
  lVar2 = FUN_180008a60(param_2);
  return lVar1 == lVar2;
}




undefined8 * FUN_18002fd30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_180008920(param_1);
  *param_2 = uVar1;
  return param_2;
}




undefined4 FUN_18002fd80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x21c);
}




undefined8 * FUN_18002fda0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800047c0(param_1);
  FUN_180003e70(uVar1);
  FUN_180008530(param_2,param_3);
  return param_2;
}




longlong * FUN_18002fdf0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  plVar1 = (longlong *)FUN_180008bd0(param_1);
  *plVar1 = *plVar1 + -1;
  return param_2;
}




bool FUN_18002fe60(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180008bd0(param_1);
  return *plVar1 == 0;
}




undefined8 * FUN_18002fea0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 local_res18 [2];
  undefined8 local_10 [2];
  
  local_res18[0] = param_3;
  puVar1 = FUN_18002fd30(local_res18,local_10);
  plVar2 = FUN_18002fdf0(param_1,(longlong *)*puVar1);
  FUN_1800092d0(param_1,plVar2);
  FUN_18002fda0(param_1,param_2,local_res18[0]);
  return param_2;
}




void FUN_18002ff10(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 local_18 [3];
  
  plVar1 = FUN_180008dc0(param_1,local_18);
  FUN_180008900(plVar1);
  return;
}




void FUN_18002ff40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  puVar1 = FUN_180008dc0(param_1,&local_20);
  FUN_18002fea0(param_1,local_18,*puVar1);
  return;
}




void FUN_18002ff80(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_180008eb0(param_1,&local_50);
  FUN_180008dc0(param_1,&local_58);
  while( true ) {
    plVar2 = FUN_180008eb0(param_1,&local_30);
    bVar1 = FUN_180008890(&local_58,plVar2);
    if (!bVar1) break;
    lVar3 = FUN_180008900(&local_58);
    bVar1 = operator==<>(lVar3,param_2);
    if (bVar1) {
      uVar4 = FUN_180008900(&local_58);
      local_48 = FUN_180003e70(uVar4);
      lVar3 = FUN_180003e70(param_2);
      if (local_48 == lVar3) {
        plVar2 = FUN_180008940(&local_58,&local_28);
        local_50 = *plVar2;
      }
      else {
        local_40 = local_58;
        plVar2 = FUN_18002fea0(param_1,&local_20,local_58);
        local_58 = *plVar2;
      }
    }
    else {
      FUN_180008990(&local_58);
    }
  }
  plVar2 = FUN_180008eb0(param_1,&local_18);
  bVar1 = FUN_180008890(&local_50,plVar2);
  if (bVar1) {
    local_38 = local_50;
    FUN_18002fea0(param_1,local_10,local_50);
  }
  return;
}




/* Library Function - Single Match
    IsEqualGUID
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

bool IsEqualGUID(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_2,0x10);
  return iVar1 == 0;
}




undefined4 * FUN_180030120(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}




void FUN_180030160(void)

{
  return;
}




undefined4 FUN_180030170(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  __uint64 _Var8;
  void *_Dst;
  longlong lVar9;
  uint local_90;
  uint local_78;
  undefined4 local_74;
  
  FUN_180031090(param_4);
  uVar7 = FUN_1800305b0(param_4);
  if ((int)uVar7 == 0) {
    local_74 = 0xffffffff;
  }
  else {
    uVar2 = FUN_180030670(param_4);
    uVar3 = FUN_180030700(param_4);
    uVar1 = uVar2 * 4 + 4;
    _Var8 = SUB168(ZEXT816(0x90) * ZEXT416(uVar1),0);
    if (SUB168(ZEXT816(0x90) * ZEXT416(uVar1),8) != 0) {
      _Var8 = 0xffffffffffffffff;
    }
    _Dst = operator_new(_Var8);
    if (_Dst == (void *)0x0) {
      local_74 = 0xffffffff;
    }
    else {
      memset(_Dst,0,(ulonglong)uVar1 * 0x90);
      for (local_90 = 0; local_90 < uVar1; local_90 = local_90 + 1) {
        *(undefined4 *)((longlong)_Dst + (ulonglong)local_90 * 0x90) = 0;
        *(undefined1 *)((longlong)_Dst + (ulonglong)local_90 * 0x90 + 0x1c) = 1;
      }
      uVar4 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
      lVar9 = FUN_180030790(param_4,(longlong)_Dst,uVar4);
      local_78 = 0;
      if (uVar2 != 0) {
        *(undefined1 *)((longlong)_Dst + (ulonglong)uVar3 * 0x90 + 0x20) = 0xf;
        *(undefined4 *)((longlong)_Dst + (ulonglong)uVar3 * 0x90 + 0x18) = 0;
        *(undefined1 *)((longlong)_Dst + (ulonglong)uVar3 * 0x90 + 0x22) = 0;
        *(undefined1 *)((longlong)_Dst + (ulonglong)uVar3 * 0x90 + 0x1c) = 1;
        *(undefined1 *)((longlong)_Dst + (ulonglong)uVar3 * 0x90 + 0x21) = 0;
        uVar4 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
        *(int *)((longlong)_Dst + (ulonglong)uVar3 * 0x90 + 0x24) =
             (int)(*(longlong *)((longlong)_Dst + 0x248) / (longlong)(ulonglong)uVar4) -
             *(int *)((longlong)_Dst + 0x264);
        local_78 = *(uint *)((longlong)_Dst + (ulonglong)uVar3 * 0x90 + 0x24);
        uVar4 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
        *(ulonglong *)((longlong)_Dst + (ulonglong)uVar3 * 0x90 + 8) =
             (ulonglong)uVar4 *
             (ulonglong)*(uint *)((longlong)_Dst + (ulonglong)uVar3 * 0x90 + 0x24);
        uVar4 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
        *(ulonglong *)((longlong)_Dst + (ulonglong)uVar3 * 0x90 + 0x10) =
             ((lVar9 - (ulonglong)local_78) + 1) * (ulonglong)uVar4;
      }
      if (1 < uVar2) {
        uVar3 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
        FUN_180030a70((longlong)_Dst,local_78,uVar2,uVar3);
      }
      uVar5 = FUN_180030c30(param_2);
      iVar6 = FUN_180030d00(param_2,param_3,_Dst,(ulonglong)uVar1,uVar5);
      if (_Dst != (void *)0x0) {
        free(_Dst);
      }
      if (iVar6 == 1) {
        local_74 = 0;
      }
      else {
        local_74 = 0xffffffff;
      }
    }
  }
  return local_74;
}




void FUN_180030540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FARPROC pFVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pFVar1 = FUN_180031310("fsclog.dll","log_write");
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)(param_1,&local_res10);
  }
  return;
}




undefined8 FUN_1800305b0(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint local_28;
  int local_24;
  longlong local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_28 = 0;
  local_24 = 0;
  FUN_180008e20(param_1,&local_20);
  while( true ) {
    plVar2 = FUN_180008f10(param_1,local_10);
    bVar1 = FUN_180008890(&local_20,plVar2);
    if (!bVar1) break;
    local_18 = FUN_1800088e0(&local_20);
    bVar1 = FUN_18000dff0(local_18);
    if (bVar1) {
      local_28 = local_28 + 1;
    }
    else {
      local_24 = local_24 + 1;
    }
    FUN_180008920(&local_20);
  }
  if (((local_28 < 4) || (local_24 == 0)) && (local_28 < 5)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




int FUN_180030670(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  int local_28;
  longlong local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_28 = 0;
  FUN_180008e20(param_1,&local_20);
  while( true ) {
    plVar2 = FUN_180008f10(param_1,local_10);
    bVar1 = FUN_180008890(&local_20,plVar2);
    if (!bVar1) break;
    local_18 = FUN_1800088e0(&local_20);
    bVar1 = FUN_18000dff0(local_18);
    if (!bVar1) {
      local_28 = local_28 + 1;
    }
    FUN_180008920(&local_20);
  }
  return local_28;
}




int FUN_180030700(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  int local_28;
  longlong local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_28 = 0;
  FUN_180008e20(param_1,&local_20);
  while( true ) {
    plVar2 = FUN_180008f10(param_1,local_10);
    bVar1 = FUN_180008890(&local_20,plVar2);
    if (!bVar1) break;
    local_18 = FUN_1800088e0(&local_20);
    bVar1 = FUN_18000dff0(local_18);
    if (bVar1) {
      local_28 = local_28 + 1;
    }
    FUN_180008920(&local_20);
  }
  return local_28;
}




longlong FUN_180030790(undefined8 param_1,longlong param_2,uint param_3)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong local_68;
  int local_50;
  uint local_4c;
  int local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  undefined8 local_10 [2];
  
  local_4c = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  FUN_180008e20(param_1,&local_40);
  while( true ) {
    plVar5 = FUN_180008f10(param_1,local_10);
    bVar1 = FUN_180008890(&local_40,plVar5);
    if (!bVar1) break;
    pbVar6 = (byte *)FUN_1800088e0(&local_40);
    bVar1 = FUN_18000dff0((longlong)pbVar6);
    if (bVar1) {
      local_68 = param_2 + (ulonglong)local_4c * 0x90;
      uVar7 = FUN_18002d590((longlong)pbVar6);
      *(int *)(local_68 + 0x24) = (int)uVar7;
      *(int *)(local_68 + 0x18) = local_50 + 1;
      local_30 = (ulonglong)param_3;
      lVar8 = FUN_18002d5e0((longlong)pbVar6);
      *(ulonglong *)(local_68 + 0x10) = local_30 * lVar8;
      uVar7 = FUN_18002d590((longlong)pbVar6);
      *(ulonglong *)(local_68 + 8) = uVar7 * param_3;
      local_4c = local_4c + 1;
    }
    else {
      local_68 = param_2 + (ulonglong)(local_48 * 4 + 4) * 0x90;
      lVar8 = FUN_180003e70(pbVar6);
      uVar4 = FUN_18002e2a0(lVar8);
      *(undefined4 *)(local_68 + 0x24) = uVar4;
      *(int *)(local_68 + 0x18) = local_50 + 1;
      local_28 = (ulonglong)param_3;
      lVar8 = FUN_18002d5e0((longlong)pbVar6);
      *(ulonglong *)(local_68 + 0x10) = local_28 * (lVar8 - (ulonglong)*(uint *)(local_68 + 0x24));
      uVar7 = FUN_18002d590((longlong)pbVar6);
      *(ulonglong *)(local_68 + 8) = (uVar7 + *(uint *)(local_68 + 0x24)) * (ulonglong)param_3;
      local_20 = FUN_18002d590((longlong)pbVar6);
      lVar8 = FUN_18002d5e0((longlong)pbVar6);
      if (local_38 < (longlong)(local_20 + lVar8)) {
        local_18 = FUN_18002d590((longlong)pbVar6);
        local_38 = FUN_18002d5e0((longlong)pbVar6);
        local_38 = (local_18 - 1) + local_38;
      }
      local_48 = local_48 + 1;
    }
    local_50 = local_50 + 1;
    uVar2 = FUN_18000dfd0(pbVar6);
    *(undefined1 *)(local_68 + 0x21) = uVar2;
    cVar3 = FUN_18000dfb0((longlong)pbVar6);
    if (cVar3 == -0x12) {
      uVar2 = 7;
    }
    else {
      uVar2 = FUN_18000dfb0((longlong)pbVar6);
    }
    *(undefined1 *)(local_68 + 0x20) = uVar2;
    *(undefined1 *)(local_68 + 0x22) = 1;
    *(undefined1 *)(local_68 + 0x1c) = 1;
    FUN_180008920(&local_40);
  }
  return local_38;
}




undefined8 FUN_180030a70(longlong param_1,int param_2,int param_3,uint param_4)

{
  uint local_28;
  int local_24;
  longlong local_20;
  
  local_28 = 0;
  do {
    if (param_3 - 1U <= local_28) {
      return 1;
    }
    local_20 = 0;
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      if (*(char *)(param_1 + 0x20 + (ulonglong)(local_24 + 4 + local_28 * 4) * 0x90) == '\0') {
        local_20 = param_1 + (ulonglong)(local_24 + 4 + local_28 * 4) * 0x90;
        break;
      }
    }
    if (local_20 == 0) {
      return 0;
    }
    *(undefined1 *)(local_20 + 0x20) = 5;
    *(undefined4 *)(local_20 + 0x18) = 0;
    *(undefined1 *)(local_20 + 0x22) = 0;
    *(undefined1 *)(local_20 + 0x1c) = 1;
    *(undefined1 *)(local_20 + 0x21) = 0;
    *(ulonglong *)(local_20 + 0x10) =
         (ulonglong)param_4 *
         (ulonglong)*(uint *)(param_1 + 0x24 + (ulonglong)(local_28 * 4 + 8) * 0x90) +
         *(longlong *)(param_1 + 0x10 + (ulonglong)(local_28 * 4 + 8) * 0x90);
    *(ulonglong *)(local_20 + 8) =
         *(longlong *)(param_1 + 8 + (ulonglong)(local_28 * 4 + 8) * 0x90) -
         (ulonglong)param_4 *
         (ulonglong)*(uint *)(param_1 + 0x24 + (ulonglong)(local_28 * 4 + 8) * 0x90);
    *(int *)(local_20 + 0x24) =
         (int)(*(longlong *)(local_20 + 8) / (longlong)(ulonglong)param_4) - param_2;
    local_28 = local_28 + 1;
  } while( true );
}




undefined4 FUN_180030c30(longlong param_1)

{
  uint uVar1;
  int iVar2;
  void *_Memory;
  undefined4 local_38;
  
  local_38 = 0;
  uVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8);
  _Memory = operator_new((ulonglong)uVar1);
  iVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,_Memory,0,1);
  if (iVar2 == 1) {
    local_38 = *(undefined4 *)((longlong)_Memory + 0x1b8);
  }
  free(_Memory);
  return local_38;
}




int FUN_180030d00(longlong param_1,longlong *param_2,void *param_3,ulonglong param_4,
                 undefined4 param_5)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  longlong lVar6;
  void **ppvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint local_78;
  int local_74;
  uint local_70;
  int local_5c;
  void *local_50;
  void *local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  void *local_30;
  undefined8 *local_28;
  void *local_20;
  void *local_18;
  
  local_5c = 0;
  uVar3 = ((int)param_4 + -1) * 0x90 + 0xc0;
  uVar9 = param_4;
  local_48 = operator_new((longlong)(int)uVar3);
  local_30 = local_48;
  memset(local_48,0,(longlong)(int)uVar3);
  pvVar1 = local_48;
  *(int *)((longlong)local_48 + 4) = (int)param_4;
  *(undefined4 *)((longlong)local_48 + 8) = param_5;
  memcpy((void *)((longlong)local_48 + 0x30),param_3,(param_4 & 0xffffffff) * 0x90);
  for (local_74 = 0; local_74 < 3; local_74 = local_74 + 1) {
    uVar8 = (ulonglong)uVar3;
    cVar2 = (**(code **)(*param_2 + 0x30))(param_2,local_48);
    if (cVar2 == '\0') {
      DVar5 = GetLastError();
      FUN_180030540(L"[WritePartChainToDisk] WriteDiskDriveLayout error,%d",(ulonglong)DVar5,uVar8,
                    uVar9);
    }
    else {
      local_50 = (void *)0x0;
      ppvVar7 = &local_50;
      cVar2 = (**(code **)(*param_2 + 0x28))(param_2);
      if ((cVar2 == '\0') || (local_50 == (void *)0x0)) {
        DVar5 = GetLastError();
        FUN_180030540(L"[WritePartChainToDisk] ReadDiskDriveLayout error,%d",(ulonglong)DVar5,uVar8,
                      uVar9);
      }
      else {
        if (*(int *)((longlong)local_50 + 4) == *(int *)((longlong)pvVar1 + 4)) {
          if (*(int *)((longlong)local_50 + 8) != *(int *)((longlong)pvVar1 + 8)) {
            local_28 = *(undefined8 **)(param_1 + 8);
            iVar4 = (*(code *)*local_28)(param_1 + 8);
            if ((iVar4 == 0x200) || (*(int *)((longlong)pvVar1 + 8) != 0)) goto LAB_180030ffc;
          }
          local_3c = 1;
          for (local_78 = 0; local_78 < *(uint *)((longlong)pvVar1 + 4); local_78 = local_78 + 1) {
            lVar6 = (ulonglong)local_78 * 0x90;
            if ((*(longlong *)((longlong)pvVar1 + lVar6 + 0x40) != 0) ||
               (*(longlong *)((longlong)pvVar1 + lVar6 + 0x38) != 0)) {
              local_40 = 0;
              for (local_70 = 0; local_70 < *(uint *)((longlong)local_50 + 4);
                  local_70 = local_70 + 1) {
                local_38 = (longlong)local_50 + (ulonglong)local_70 * 0x90 + 0x30;
                if ((((*(char *)((longlong)pvVar1 + lVar6 + 0x51) == *(char *)(local_38 + 0x21)) &&
                     (*(int *)((longlong)pvVar1 + lVar6 + 0x54) == *(int *)(local_38 + 0x24))) &&
                    (*(longlong *)((longlong)pvVar1 + lVar6 + 0x38) == *(longlong *)(local_38 + 8)))
                   && ((*(longlong *)((longlong)pvVar1 + lVar6 + 0x40) ==
                        *(longlong *)(local_38 + 0x10) &&
                       (*(char *)((longlong)pvVar1 + lVar6 + 0x50) == *(char *)(local_38 + 0x20)))))
                {
                  local_40 = 1;
                  break;
                }
              }
              if (local_40 == 0) {
                local_3c = 0;
                FUN_180030540(L"[WritePartChainToDisk] can not found target part info!!!",ppvVar7,
                              uVar8,uVar9);
                break;
              }
            }
          }
          if (local_3c != 0) {
            local_5c = 1;
          }
        }
LAB_180030ffc:
        local_20 = local_50;
        free(local_50);
      }
    }
    if (local_5c == 1) break;
  }
  if (local_48 != (void *)0x0) {
    local_18 = local_48;
    free(local_48);
  }
  return local_5c;
}




void FUN_180031090(undefined8 param_1)

{
  bool bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_e8 [32];
  char local_c8;
  undefined1 local_c7;
  longlong local_c0;
  undefined8 local_b8 [2];
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_98 = 0xfffffffffffffffe;
  local_20 = DAT_180053018 ^ (ulonglong)auStack_e8;
  uVar2 = FUN_1800144c0(param_1);
  if (1 < uVar2) {
    FUN_18000c650(local_b8);
    while (uVar2 = FUN_1800144c0(param_1), 1 < uVar2) {
      plVar3 = FUN_180008dc0(param_1,&local_90);
      local_c0 = *plVar3;
      puVar4 = (undefined1 *)FUN_1800088e0(&local_c0);
      puVar7 = local_80;
      for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_180008920(&local_c0);
      while( true ) {
        plVar3 = FUN_180008eb0(param_1,&local_88);
        bVar1 = FUN_180008890(&local_c0,plVar3);
        if (!bVar1) break;
        puVar4 = (undefined1 *)FUN_1800088e0(&local_c0);
        puVar7 = local_60;
        for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar4 = local_80;
        puVar7 = local_40;
        for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        local_a0 = FUN_18000df20((longlong)local_40);
        local_a8 = FUN_18000df20((longlong)local_60);
        local_c8 = FUN_18000dff0((longlong)local_40);
        local_c7 = FUN_18000dff0((longlong)local_60);
        if ((((local_c8 == '\0') && ((bool)local_c7)) ||
            ((local_a8 < local_a0 && ((local_c8 != '\0' && ((bool)local_c7)))))) ||
           ((local_a8 < local_a0 && ((local_c8 == '\0' && (!(bool)local_c7)))))) {
          puVar4 = local_60;
          puVar7 = local_80;
          for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        FUN_180008920(&local_c0);
      }
      FUN_18000d750(local_b8,local_80);
      FUN_180031490(param_1,(longlong)local_80);
    }
    lVar6 = FUN_1800144c0(param_1);
    if (lVar6 != 0) {
      uVar5 = FUN_18002ff10(param_1);
      FUN_18000d750(local_b8,uVar5);
      FUN_18000d480(param_1);
    }
    while (bVar1 = FUN_18002fe60(local_b8), !bVar1) {
      uVar5 = FUN_18002ff10(local_b8);
      FUN_18000d750(param_1,uVar5);
      FUN_180031450(local_b8);
    }
    FUN_18000c9a0(local_b8);
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStack_e8);
  return;
}




FARPROC FUN_180031310(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  DWORD DVar2;
  HMODULE hModule;
  undefined8 in_R9;
  FARPROC local_10;
  
  local_10 = (FARPROC)0x0;
  hModule = LoadLibraryA(param_1);
  if (hModule == (HMODULE)0x0) {
    iVar1 = _stricmp(param_1,"fsclog.dll");
    if (iVar1 != 0) {
      DVar2 = GetLastError();
      FUN_180030540(L"Loadd %S err=%u",param_1,(ulonglong)DVar2,in_R9);
    }
  }
  else {
    local_10 = GetProcAddress(hModule,param_2);
  }
  return local_10;
}




/* Library Function - Multiple Matches With Same Base Name
    bool __cdecl std::operator==<struct _EXCEPTION_RECORD const ,struct _EXCEPTION_RECORD const
   >(class std::shared_ptr<struct _EXCEPTION_RECORD const > const & __ptr64,class
   std::shared_ptr<struct _EXCEPTION_RECORD const > const & __ptr64)
    bool __cdecl std::operator==<class __ExceptionPtr,class __ExceptionPtr>(class
   std::shared_ptr<class __ExceptionPtr> const & __ptr64,class std::shared_ptr<class __ExceptionPtr>
   const & __ptr64)
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

bool operator==<>(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_18000df20(param_1);
  lVar2 = FUN_18000df20(param_2);
  return lVar1 == lVar2;
}




undefined8 * FUN_1800313e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 local_res18 [2];
  undefined8 local_10 [2];
  
  local_res18[0] = param_3;
  puVar1 = FUN_18002fd30(local_res18,local_10);
  plVar2 = FUN_18002fdf0(param_1,(longlong *)*puVar1);
  FUN_18000d240(param_1,plVar2);
  FUN_18002fda0(param_1,param_2,local_res18[0]);
  return param_2;
}




void FUN_180031450(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  puVar1 = FUN_180008dc0(param_1,&local_20);
  FUN_1800313e0(param_1,local_18,*puVar1);
  return;
}




void FUN_180031490(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_180008eb0(param_1,&local_50);
  FUN_180008dc0(param_1,&local_58);
  while( true ) {
    plVar2 = FUN_180008eb0(param_1,&local_30);
    bVar1 = FUN_180008890(&local_58,plVar2);
    if (!bVar1) break;
    lVar3 = FUN_180008900(&local_58);
    bVar1 = operator==<>(lVar3,param_2);
    if (bVar1) {
      uVar4 = FUN_180008900(&local_58);
      local_48 = FUN_180003e70(uVar4);
      lVar3 = FUN_180003e70(param_2);
      if (local_48 == lVar3) {
        plVar2 = FUN_180008940(&local_58,&local_28);
        local_50 = *plVar2;
      }
      else {
        local_40 = local_58;
        plVar2 = FUN_1800313e0(param_1,&local_20,local_58);
        local_58 = *plVar2;
      }
    }
    else {
      FUN_180008990(&local_58);
    }
  }
  plVar2 = FUN_180008eb0(param_1,&local_18);
  bVar1 = FUN_180008890(&local_50,plVar2);
  if (bVar1) {
    local_38 = local_50;
    FUN_1800313e0(param_1,local_10,local_50);
  }
  return;
}




undefined8 * FUN_1800315f8(undefined8 *param_1,ulonglong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000180031659. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x18003168a;
  capture_previous_context((PCONTEXT)&DAT_18005c350);
  _DAT_18005c2c0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18005c3e8 = puVar3 + 0x40;
  _DAT_18005c3d0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18005c2b0 = 0xc0000409;
  _DAT_18005c2b4 = 1;
  _DAT_18005c2c8 = 1;
  DAT_18005c2d0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180053018;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180053010;
  *(undefined8 *)(puVar3 + -8) = 0x18003172c;
  DAT_18005c448 = _DAT_18005c2c0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800411f8);
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
  *(undefined8 *)(puVar3 + -8) = 0x180031772;
  capture_current_context((PCONTEXT)&DAT_18005c350);
  _DAT_18005c2c0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18005c3e8 = puVar3 + 0x30;
  _DAT_18005c2b0 = 0xc0000409;
  _DAT_18005c2b4 = 1;
  _DAT_18005c2c8 = 1;
  DAT_18005c2d0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x1800317de;
  DAT_18005c448 = _DAT_18005c2c0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800411f8);
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
  if ((_StackCookie == DAT_180053018) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




void FUN_180031984(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018003198b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18005c820);
  return;
}




void FUN_180031994(void)

{
  __std_type_info_destroy_list(&DAT_18005c820);
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
    FUN_1800326e4();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_1800326c4();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_180031ad0(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18005c830,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180031c22;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18005c860 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18005c860 != (HANDLE)0x0) goto LAB_180031bc0;
  }
  else {
    DAT_18005c860 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18005c858);
    bVar7 = 0x40 - ((byte)DAT_180053018 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18005c868 = DAT_180053018 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18005c870 = DAT_180053018 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180031bc0:
    uVar6 = FUN_180031fd0(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180031c30);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180031c22:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180031c30(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18005c830);
  if (DAT_18005c860 != (HANDLE)0x0) {
    CloseHandle(DAT_18005c860);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18005c830);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18005c830);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18005c830);
  uVar1 = (ulonglong)_tls_index;
  DAT_180053024 = DAT_180053024 + 1;
  *param_1 = DAT_180053024;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_180053024;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18005c830);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18005c830);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180031d3c:
                    /* WARNING: Could not recover jumptable at 0x000180031d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18005c830);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_180053024;
      goto LAB_180031d3c;
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
  
  if (DAT_18005c860 != (HANDLE)0x0) {
    SetEvent(DAT_18005c860);
                    /* WARNING: Could not recover jumptable at 0x000180031d99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18005c860);
    return;
  }
  bVar1 = (byte)DAT_180053018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180032c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180053018 ^ _DAT_18005c870) >> bVar1 |
            (DAT_180053018 ^ _DAT_18005c870) << 0x40 - bVar1))(&DAT_18005c858);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18005c860 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18005c830);
    WaitForSingleObjectEx(DAT_18005c860,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180031e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18005c830);
    return;
  }
  bVar1 = (byte)DAT_180053018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180032c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180053018 ^ _DAT_18005c868) >> bVar1 |
            (DAT_180053018 ^ _DAT_18005c868) << 0x40 - bVar1))
            (&DAT_18005c858,&DAT_18005c830,param_1);
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
LAB_180031e46:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18005c888 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18005c888;
        pvVar1 = DAT_18005c888;
      }
      DAT_18005c888 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180031e46;
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
    uVar3 = FUN_1800329e8();
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
  
  uVar1 = FUN_180031fd0(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180032c2c();
  if (cVar1 != '\0') {
    cVar1 = FUN_180032c2c();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180032c2c();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180032c2c();
  FUN_180032c2c();
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
    _execute_onexit_table(&DAT_18005c898);
    return;
  }
  uVar2 = FUN_180032c30();
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
  FUN_180032c2c();
  FUN_180032c2c();
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
    DAT_18005c890 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180032c2c();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180032c2c();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180032c2c();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180031fd0(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18005c891 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180053018 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180053018;
      _DAT_18005c898 = in_RAX;
      uRam000000018005c8a0 = in_RAX;
      _DAT_18005c8a8 = in_RAX;
      _DAT_18005c8b0 = in_RAX;
      uRam000000018005c8b8 = in_RAX;
      _DAT_18005c8c0 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18005c898);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18005c8b0), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18005c891 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180032136) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_18003211f;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18003211f:
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
    DAT_18005c888 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18005c890 == '\0') || (param_2 == '\0')) {
    FUN_180032c2c();
    FUN_180032c2c();
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
  
  bVar2 = (byte)DAT_180053018 & 0x3f;
  if (((DAT_180053018 ^ _DAT_18005c898) >> bVar2 | (DAT_180053018 ^ _DAT_18005c898) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18005c898,_Func);
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
    if (DAT_18005c8c8 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18005c8c8 = DAT_18005c8c8 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18005c880 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180031994();
      FID_conflict__RTC_Initialize();
      DAT_18005c880 = 0;
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
    if (DAT_18005c880 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18005c880 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180031984();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180036358,&DAT_180036368);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180036348,&DAT_180036350);
        DAT_18005c880 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180032ae8();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18005c8c8 = DAT_18005c8c8 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x0001800324bc) */
/* WARNING: Removing unreachable block (ram,0x00018003244b) */
/* WARNING: Removing unreachable block (ram,0x0001800324ff) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18005c8c8 < 1)) {
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




undefined8 * FUN_180032574(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800325b4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800325d4(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180032614(undefined8 *param_1)

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




undefined8 * FUN_180032680(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800326c4(void)

{
  undefined8 local_28 [5];
  
  FUN_1800325b4(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180051140);
}




void FUN_1800326e4(void)

{
  undefined8 local_28 [5];
  
  FUN_180032614(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1800511c8);
}




char * FUN_180032704(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180032718(void)

{
  _DAT_18005c8cc = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180032753;
  FUN_180032718();
  *(undefined8 *)(puVar4 + -8) = 0x180032764;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18003276e;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180032788;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x1800327c9;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1800327fb;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18003281d;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18003283e;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180032849;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180032859;
    FUN_180032718();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018003293a) */
/* WARNING: Removing unreachable block (ram,0x0001800328b8) */
/* WARNING: Removing unreachable block (ram,0x000180032893) */
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
  
  DAT_180053034 = 2;
  _DAT_180053030 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180053038 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18005c8d0 = DAT_18005c8d0 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18005c8d0 = DAT_18005c8d0 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180053030 = 2;
    DAT_180053034 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_180053034 = 0xe;
      _DAT_180053030 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180053030 = 5;
        DAT_180053034 = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_1800329e8(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180053040 != 0;
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
  
  if (DAT_180053018 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180053018 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180053018 == 0x2b992ddfa232) {
      DAT_180053018 = 0x2b992ddfa233;
    }
  }
  DAT_180053010 = ~DAT_180053018;
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




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1800063b0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_1800063c0();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180032ae8(void)

{
  return &DAT_18005c8d8;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18004a358; puVar1 < &DAT_18004a358; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_18004a368; puVar1 < &DAT_18004a368; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180032c2c(void)

{
  return 1;
}




undefined8 FUN_180032c30(void)

{
  return 0;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180032c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180032c60(undefined8 param_1,longlong param_2)

{
  CGPTDiskAnalyzer::~CGPTDiskAnalyzer((CGPTDiskAnalyzer *)(param_2 + 0x21));
  return;
}




void Unwind_180032c78(void)

{
  FUN_180002180();
  return;
}




undefined * Catch_180032c90(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x20) = 0;
  return &DAT_180001cd0;
}




void Unwind_180032cc0(undefined8 param_1,longlong param_2)

{
  FUN_180004370((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (*(longlong *)(param_2 + 0xa0) + 0x10));
  return;
}




void Unwind_180032cdf(undefined8 param_1,longlong param_2)

{
  FUN_180004370((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x60));
  return;
}




void Unwind_180032cf7(undefined8 param_1,longlong param_2)

{
  FUN_180004370((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_180032d20(undefined8 param_1,longlong param_2)

{
  FUN_180004340(*(IStorageDevice **)(param_2 + 0x40));
  return;
}




void Unwind_180032d40(undefined8 param_1,longlong param_2)

{
  FUN_1800042e0(*(IStorageDevice **)(param_2 + 0x40));
  return;
}




void Unwind_180032d60(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker(*(IStorageDevice **)(param_2 + 0x40));
  return;
}




void Unwind_180032d80(undefined8 param_1,longlong param_2)

{
  FUN_180004310(*(IStorageDevice **)(param_2 + 0x40));
  return;
}




void Unwind_180032da0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_180004370(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (param_2 + 0x58));
  }
  return;
}




void Unwind_180032dd0(void)

{
  _guard_check_icall();
  return;
}




void Unwind_180032deb(void)

{
  _guard_check_icall();
  return;
}




undefined8 Catch_180032e10(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x80) +
             (longlong)*(int *)(**(longlong **)(param_2 + 0x80) + 4)),4,true);
  return 0x180007ecd;
}




void Unwind_180032e60(undefined8 param_1,longlong param_2)

{
  FUN_180008810((longlong *)(param_2 + 0x58));
  return;
}




void Catch_180032e80(undefined8 param_1,longlong param_2)

{
  FUN_180008e80(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180032ec0(undefined8 param_1,longlong param_2)

{
  FUN_180008780(*(longlong **)(param_2 + 0x40));
  return;
}




void Catch_180032ee0(undefined8 param_1,longlong param_2)

{
  FUN_180008e80(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180032f20(undefined8 param_1,longlong param_2)

{
  FUN_180006dc0(param_2 + 0x40);
  return;
}




undefined8 Catch_180032f38(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  return 0x18000921a;
}




void Unwind_180032f60(undefined8 param_1,longlong param_2)

{
  FUN_18000aae0(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}




void Unwind_180032f7c(undefined8 param_1,longlong param_2)

{
  FUN_18000aae0(*(longlong *)(param_2 + 0x1050) + 0x10);
  return;
}




void Unwind_180032f9b(undefined8 param_1,longlong param_2)

{
  FUN_18000aae0(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}




void Unwind_180032fb7(undefined8 param_1,longlong param_2)

{
  FUN_180009780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180032fcf(undefined8 param_1,longlong param_2)

{
  FUN_180009780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_180032ff0(undefined8 param_1,longlong param_2)

{
  FUN_18000af00(*(undefined8 *)(param_2 + 0x90));
  FUN_18000b2b0(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180033040(void)

{
  FUN_18000aaa0();
  return;
}




void Unwind_180033060(undefined8 param_1,longlong param_2)

{
  FUN_180009780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180033080(undefined8 param_1,longlong param_2)

{
  FUN_18000c9a0(param_2 + 0x78);
  return;
}




void Unwind_180033098(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0xb8));
  return;
}




void Unwind_1800330b3(undefined8 param_1,longlong param_2)

{
  FUN_18000c9a0(param_2 + 0x120);
  return;
}




void Unwind_1800330ce(void)

{
  FUN_18002de70();
  return;
}




void Unwind_1800330e6(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0xe0));
  return;
}




void Unwind_180033101(undefined8 param_1,longlong param_2)

{
  FUN_18000c970(param_2 + 0x130);
  return;
}




void Unwind_18003311c(void)

{
  FUN_180009140();
  return;
}




void Unwind_180033134(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x108));
  return;
}




void Unwind_180033150(undefined8 param_1,longlong param_2)

{
  FUN_18000c9d0(*(longlong *)(param_2 + 0x40));
  return;
}




undefined8 Catch_180033170(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      pvVar1 = FUN_18000cd20(*(void **)(param_2 + 0x50),1);
      *(void **)(param_2 + 0x78) = pvVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x98),&DAT_180037eb4,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x18000bbe2;
}




undefined * Catch_18003320f(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      pvVar1 = FUN_18000cd20(*(void **)(param_2 + 0x58),1);
      *(void **)(param_2 + 0x88) = pvVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_18000bbde;
}




void Catch_1800332c0(undefined8 param_1,longlong param_2)

{
  FUN_18000d6f0(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180033300(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180033320(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_180033340(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    FUN_18000c7e0(*(longlong **)(param_2 + 0x60));
  }
  return;
}




void Unwind_180033370(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_180033390(undefined8 param_1,longlong param_2)

{
  FUN_18000c850(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1800333b0(undefined8 param_1,longlong param_2)

{
  FUN_18000c880(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1800333d0(undefined8 param_1,longlong param_2)

{
  FUN_18000c8e0(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1800333f0(undefined8 param_1,longlong param_2)

{
  FUN_18000c910(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180033410(undefined8 param_1,longlong param_2)

{
  AddRef(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_180033430(undefined8 param_1,longlong param_2)

{
  FUN_18000c820(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180033450(undefined8 param_1,longlong param_2)

{
  FUN_18000c8b0(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180033470(undefined8 param_1,longlong param_2)

{
  FUN_18000c940(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_180033490(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_1800334b0(void)

{
  _Init_thread_abort(&DAT_18005b570);
  return;
}




void Catch_1800334d0(undefined8 param_1,longlong param_2)

{
  FUN_18000d6f0(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180033510(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180033530(undefined8 param_1,longlong param_2)

{
  FUN_18000c940(*(longlong *)(param_2 + 0xb0) + 8);
  return;
}




void Unwind_18003354f(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180033567(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18003357f(undefined8 param_1,longlong param_2)

{
  FUN_18000c940(*(longlong *)(param_2 + 0x120) + 8);
  return;
}




void Unwind_18003359e(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_1800335b6(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1800335ce(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_1800335f0(undefined8 param_1,longlong param_2)

{
  FUN_180011af0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180033610(undefined8 param_1,longlong param_2)

{
  FUN_180011b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180033630(undefined8 param_1,longlong param_2)

{
  FUN_180011bb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180033650(undefined8 param_1,longlong param_2)

{
  FUN_18000daf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180033670(undefined8 param_1,longlong param_2)

{
  FUN_180011be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180033690(undefined8 param_1,longlong param_2)

{
  FUN_180014a50(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_1800336b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      puVar1 = FUN_180012940(*(undefined8 **)(param_2 + 0x50),1);
      *(undefined8 **)(param_2 + 0x78) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x98),&DAT_1800388a4,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x18000ebb2;
}




undefined * Catch_18003374f(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      puVar1 = FUN_180012940(*(undefined8 **)(param_2 + 0x58),1);
      *(undefined8 **)(param_2 + 0x88) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_18000ebae;
}




undefined8 Catch_180033800(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      puVar1 = FUN_180012980(*(undefined8 **)(param_2 + 0x50),1);
      *(undefined8 **)(param_2 + 0x78) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x98),&DAT_1800388e4,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x18000ec52;
}




undefined * Catch_18003389f(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      puVar1 = FUN_180012980(*(undefined8 **)(param_2 + 0x58),1);
      *(undefined8 **)(param_2 + 0x88) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_18000ec4e;
}




undefined8 Catch_180033950(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      puVar1 = FUN_1800129c0(*(undefined8 **)(param_2 + 0x50),1);
      *(undefined8 **)(param_2 + 0x78) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x98),&DAT_1800388fc,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x18000ecf2;
}




undefined * Catch_1800339ef(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      puVar1 = FUN_1800129c0(*(undefined8 **)(param_2 + 0x58),1);
      *(undefined8 **)(param_2 + 0x88) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_18000ecee;
}




undefined8 Catch_180033aa0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      puVar1 = FUN_180012a00(*(undefined8 **)(param_2 + 0x50),1);
      *(undefined8 **)(param_2 + 0x78) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x98),&DAT_18003893c,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x18000ed92;
}




undefined * Catch_180033b3f(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      puVar1 = FUN_180012a00(*(undefined8 **)(param_2 + 0x58),1);
      *(undefined8 **)(param_2 + 0x88) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_18000ed8e;
}




undefined8 Catch_180033bf0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x40);
    free(*(void **)(param_2 + 0x50));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x68),&DAT_18003897c,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x18000ee0a;
}




undefined * Catch_180033c6f(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x40);
    free(*(void **)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_18000ee06;
}




void Catch_180033cf0(undefined8 param_1,longlong param_2)

{
  FUN_18000d6c0(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180033d30(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_180033d50(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180033d70(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180033d90(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180033db0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180033dd0(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x50));
  return;
}




void Catch_180033df0(undefined8 param_1,longlong param_2)

{
  FUN_18000d6c0(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180033e30(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180033e48(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180033e60(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180033e78(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_180033e90(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180033ea8(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180033ec0(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180033ed8(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_180033ef0(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180033f08(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180033f20(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180033f38(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180033f50(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180033f68(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180033f80(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180033f98(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180033fb0(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180033fc8(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0xd8));
  return;
}




void Unwind_180033fe3(undefined8 param_1,longlong param_2)

{
  FUN_18000c9a0(param_2 + 0x158);
  return;
}




void Unwind_180033ffe(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180034016(void)

{
  FUN_180030160();
  return;
}




void Unwind_180034031(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x88));
  return;
}




void Unwind_18003404c(undefined8 param_1,longlong param_2)

{
  FUN_18000c970(param_2 + 0xf0);
  return;
}




void Unwind_180034067(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_18003407f(void)

{
  FUN_18002f0b0();
  return;
}




void Unwind_180034097(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_1800340af(undefined8 param_1,longlong param_2)

{
  FUN_18000c9a0(param_2 + 0xb0);
  return;
}




void Unwind_1800340ca(void)

{
  FUN_18002de70();
  return;
}




void Unwind_1800340e2(undefined8 param_1,longlong param_2)

{
  FUN_1800222e0(param_2 + 0xd8);
  return;
}




void Unwind_1800340fd(undefined8 param_1,longlong param_2)

{
  FUN_180022160(param_2 + 0x120);
  return;
}




void Unwind_180034118(undefined8 param_1,longlong param_2)

{
  FUN_180004370((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0xf8));
  return;
}




void Unwind_180034140(undefined8 param_1,longlong param_2)

{
  FUN_1800223e0(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                 (param_2 + 0x50));
  return;
}




void Unwind_180034160(undefined8 param_1,longlong param_2)

{
  FUN_180022160(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180034180(undefined8 param_1,longlong param_2)

{
  FUN_180022190(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_1800341a0(undefined8 param_1,longlong param_2)

{
  FUN_180011b20(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_1800341c0(undefined8 param_1,longlong param_2)

{
  FUN_180022190(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800341e0(undefined8 param_1,longlong param_2)

{
  FUN_180011af0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_180034200(undefined8 param_1,longlong param_2)

{
  FUN_180022250(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180034220(undefined8 param_1,longlong param_2)

{
  FUN_180022450(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180034240(undefined8 param_1,longlong param_2)

{
  FUN_180022280(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180034260(undefined8 param_1,longlong param_2)

{
  FUN_18002ebf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180034280(undefined8 param_1,longlong param_2)

{
  FUN_18000c750(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_1800342a0(undefined8 param_1,longlong param_2)

{
  FUN_180011be0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_1800342c0(undefined8 param_1,longlong param_2)

{
  FUN_180014a50(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_1800342e0(undefined8 param_1,longlong param_2)

{
  FUN_180004370(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                 (param_2 + 0x40));
  return;
}




void Unwind_180034300(undefined8 param_1,longlong param_2)

{
  FUN_180022420(*(longlong *)(param_2 + 0x40) + 0x20);
  return;
}




void Unwind_180034320(undefined8 param_1,longlong param_2)

{
  FUN_180011bb0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_180034340(undefined8 param_1,longlong param_2)

{
  FUN_18000daf0(*(undefined8 **)(param_2 + 0x60));
  return;
}




undefined8 Catch_180034360(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x40);
    free(*(void **)(param_2 + 0x50));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x68),&DAT_18003b09c,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x18001845a;
}




undefined * Catch_1800343df(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x40);
    free(*(void **)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_180018456;
}




undefined8 Catch_180034460(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      pvVar1 = FUN_180025130(*(void **)(param_2 + 0x50),1);
      *(void **)(param_2 + 0x78) = pvVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x98),&DAT_18003aecc,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x180018502;
}




undefined * Catch_1800344ff(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      pvVar1 = FUN_180025130(*(void **)(param_2 + 0x58),1);
      *(void **)(param_2 + 0x88) = pvVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_1800184fe;
}




undefined8 Catch_1800345b0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x40);
    free(*(void **)(param_2 + 0x50));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x68),&DAT_18003af24,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x18001857a;
}




undefined * Catch_18003462f(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x40);
    free(*(void **)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_180018576;
}




undefined8 Catch_1800346b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      puVar1 = FUN_180025170(*(undefined8 **)(param_2 + 0x50),1);
      *(undefined8 **)(param_2 + 0x78) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x98),&DAT_18003b01c,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x180018622;
}




undefined * Catch_18003474f(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      puVar1 = FUN_180025170(*(undefined8 **)(param_2 + 0x58),1);
      *(undefined8 **)(param_2 + 0x88) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_18001861e;
}




undefined8 Catch_180034800(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x40);
    free(*(void **)(param_2 + 0x50));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x68),&DAT_18003ae8c,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x18001869a;
}




undefined * Catch_18003487f(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x40);
    free(*(void **)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_180018696;
}




undefined8 Catch_180034900(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      pvVar1 = FUN_1800251b0(*(void **)(param_2 + 0x50),1);
      *(void **)(param_2 + 0x78) = pvVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x98),&DAT_18003af84,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x180018742;
}




undefined * Catch_18003499f(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      pvVar1 = FUN_1800251b0(*(void **)(param_2 + 0x58),1);
      *(void **)(param_2 + 0x88) = pvVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_18001873e;
}




undefined8 Catch_180034a50(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x40);
    free(*(void **)(param_2 + 0x50));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x68),&DAT_18003afc4,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x1800187ba;
}




undefined * Catch_180034acf(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x40);
    free(*(void **)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_1800187b6;
}




undefined8 Catch_180034b50(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      puVar1 = FUN_1800251f0(*(undefined8 **)(param_2 + 0x50),1);
      *(undefined8 **)(param_2 + 0x78) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x98),&DAT_18003b004,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x180018862;
}




undefined * Catch_180034bef(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      puVar1 = FUN_1800251f0(*(undefined8 **)(param_2 + 0x58),1);
      *(undefined8 **)(param_2 + 0x88) = puVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_18001885e;
}




void Catch_180034ca0(undefined8 param_1,longlong param_2)

{
  FUN_180028070(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x30));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180034ce0(undefined8 param_1,longlong param_2)

{
  FUN_180027990(*(undefined8 *)(param_2 + 0x90),*(longlong *)(param_2 + 0x30),
                *(longlong *)(param_2 + 0x50));
  FUN_180029ff0(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180034d30(undefined8 param_1,longlong param_2)

{
  FUN_1800279d0(*(undefined8 *)(param_2 + 0x180),*(void **)(param_2 + 0x1a0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180034d70(undefined8 param_1,longlong param_2)

{
  FUN_1800279d0(*(undefined8 *)(param_2 + 0xd0),*(void **)(param_2 + 0xf0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180034db0(undefined8 param_1,longlong param_2)

{
  FUN_180022370((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180034dd0(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180034df0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_180034e10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_18000c7e0(*(longlong **)(param_2 + 0x70));
  }
  return;
}




void Unwind_180034e40(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_180034e60(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_180034e80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 1) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffffe;
    FUN_18000c7e0(*(longlong **)(param_2 + 0x90));
  }
  return;
}




void Unwind_180034eb0(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_180034ed0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_180034ef0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    FUN_18000c7e0(*(longlong **)(param_2 + 0x80));
  }
  return;
}




void Unwind_180034f20(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_180034f40(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_180034f60(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_180034f80(undefined8 param_1,longlong param_2)

{
  FUN_1800223b0(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}




void Unwind_180034fa0(undefined8 param_1,longlong param_2)

{
  FUN_180022220(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180034fc0(undefined8 param_1,longlong param_2)

{
  FUN_180022340(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180034fe0(undefined8 param_1,longlong param_2)

{
  FUN_180022310(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180035000(undefined8 param_1,longlong param_2)

{
  FUN_180004370((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_180035020(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_180035040(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180035060(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180035080(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_1800350a0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_1800350c0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}




void Unwind_1800350e0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180035100(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180035120(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_180035140(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}




void Unwind_180035160(undefined8 param_1,longlong param_2)

{
  FUN_180004370((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x70));
  return;
}




void Unwind_180035180(undefined8 param_1,longlong param_2)

{
  FUN_180004370((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x90));
  return;
}




void Unwind_1800351a0(undefined8 param_1,longlong param_2)

{
  FUN_180022420(param_2 + 0x58);
  return;
}




void Unwind_1800351c0(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_1800351e0(undefined8 param_1,longlong param_2)

{
  FUN_180004370((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x38));
  return;
}




void Unwind_180035200(void)

{
  _Init_thread_abort(&DAT_18005bd00);
  return;
}




void Unwind_180035220(void)

{
  _Init_thread_abort(&DAT_18005bd28);
  return;
}




void Unwind_180035240(undefined8 param_1,longlong param_2)

{
  FUN_180022480((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_180035260(void)

{
  _Init_thread_abort(&DAT_18005bd50);
  return;
}




void Catch_180035280(undefined8 param_1,longlong param_2)

{
  FUN_180029fc0(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1800352c0(undefined8 param_1,longlong param_2)

{
  FUN_180029fc0(*(undefined8 *)(param_2 + 0x20),*(void **)(param_2 + 0x28),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180035300(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180035320(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180035340(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180035360(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180035378(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180035390(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_1800353a8(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_1800353c0(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1800353d8(undefined8 param_1,longlong param_2)

{
  FUN_18000c7e0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_1800353f0(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180035408(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_180035420(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180035440(undefined8 param_1,longlong param_2)

{
  FUN_18000ab10(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_180035460(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x68))
                        (*(undefined8 *)(param_2 + 0x50),1);
      *(undefined8 *)(param_2 + 0x78) = uVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x98),&DAT_1800404d4,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x18002b7c8;
}




undefined * Catch_180035504(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x68))
                        (*(undefined8 *)(param_2 + 0x58),1);
      *(undefined8 *)(param_2 + 0x88) = uVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_18002b7c4;
}




undefined8 Catch_1800355c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x68))
                        (*(undefined8 *)(param_2 + 0x50),1);
      *(undefined8 *)(param_2 + 0x78) = uVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cf30(*(undefined8 *)(param_2 + 0x98),&DAT_18004047c,
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return 0x18002b878;
}




undefined * Catch_180035664(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x68))
                        (*(undefined8 *)(param_2 + 0x58),1);
      *(undefined8 *)(param_2 + 0x88) = uVar1;
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800155f0();
  FUN_18000cfb0(0xfffffff5,"EUE_UNKNOWNEXCEPT",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h",0);
  return &DAT_18002b874;
}




void Catch_180035720(undefined8 param_1,longlong param_2)

{
  FUN_180027990(*(undefined8 *)(param_2 + 0x90),*(longlong *)(param_2 + 0x30),
                *(longlong *)(param_2 + 0x50));
  FUN_180029ff0(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180035770(void)

{
  FUN_18002a530();
  return;
}




void Unwind_180035788(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_1800357a0(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(param_2 + 0x40));
  return;
}




undefined8 Catch_1800357b8(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  return 0x18002e09b;
}




void Unwind_1800357e0(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1800357fc(undefined8 param_1,longlong param_2)

{
  FUN_18000c780((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_180035820(undefined8 param_1,longlong param_2)

{
  FUN_180006dc0(param_2 + 0xc0);
  return;
}




void Unwind_18003583b(undefined8 param_1,longlong param_2)

{
  FUN_18000c970(param_2 + 0x28);
  return;
}




void Unwind_180035860(undefined8 param_1,longlong param_2)

{
  FUN_18000c9a0(param_2 + 0x30);
  return;
}




void FUN_180035890(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_1800358a7(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_1800358c3(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180035900(void)

{
  FUN_1800222b0(0x18005bd08);
  return;
}




void FUN_180035920(void)

{
  FUN_1800222b0(0x18005bd30);
  return;
}



