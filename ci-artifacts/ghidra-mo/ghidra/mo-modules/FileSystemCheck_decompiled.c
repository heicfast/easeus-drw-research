
/* public: __cdecl MyTemplate::CSimpleArray<unsigned int,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned int> >::CSimpleArray<unsigned int,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned int> >(void) __ptr64 */

CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> * __thiscall
MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
          (CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *this
          )

{
                    /* 0x1000  1
                       ??0?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@MyTemplate@@@MyTemplate@@QEAA@XZ
                       0x1000  2
                       ??0?$CSimpleArray@USECTOR_RANGE@@V?$CSimpleArrayEqualHelper@USECTOR_RANGE@@@MyTemplate@@@MyTemplate@@QEAA@XZ
                        */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}




undefined8 * FUN_180001010(undefined8 *param_1)

{
  *param_1 = CCheckFAT::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return param_1;
}




/* public: __cdecl CHardDriveIO::CHardDriveIO(class CHardDriveIO const & __ptr64) __ptr64 */

CHardDriveIO * __thiscall CHardDriveIO::CHardDriveIO(CHardDriveIO *this,CHardDriveIO *param_1)

{
                    /* 0x1040  4  ??0CHardDriveIO@@QEAA@AEBV0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  this[0x48] = param_1[0x48];
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  return this;
}




/* public: __cdecl CHardDriveIOSetting::CHardDriveIOSetting(class CHardDriveIOSetting const &
   __ptr64) __ptr64 */

CHardDriveIOSetting * __thiscall
CHardDriveIOSetting::CHardDriveIOSetting(CHardDriveIOSetting *this,CHardDriveIOSetting *param_1)

{
                    /* 0x10b0  5  ??0CHardDriveIOSetting@@QEAA@AEBV0@@Z */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x10c0  9  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x10c0  10  ??0IObject@@QEAA@AEBU0@@Z
                       0x10c0  11  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl MyTemplate::CSimpleArray<unsigned int,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned int> >::~CSimpleArray<unsigned int,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned int> >(void) __ptr64 */

void __thiscall
MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
~CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
          (CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *this
          )

{
                    /* 0x10d0  15
                       ??1?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@MyTemplate@@@MyTemplate@@QEAA@XZ
                       0x10d0  16
                       ??1?$CSimpleArray@USECTOR_RANGE@@V?$CSimpleArrayEqualHelper@USECTOR_RANGE@@@MyTemplate@@@MyTemplate@@QEAA@XZ
                       0x10d0  17
                       ??1?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAA@XZ
                        */
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}




void FUN_180001110(undefined8 *param_1)

{
  *param_1 = CCheckFAT::vftable;
  return;
}




void FUN_180001120(undefined8 *param_1)

{
  *param_1 = CFatChain::vftable;
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  param_1[2] = 0;
  return;
}




/* public: virtual void __cdecl IStorageDevice::ReleaseBitlocker(void) __ptr64 */

void __thiscall IStorageDevice::ReleaseBitlocker(IStorageDevice *this)

{
                    /* 0x1170  98  ?ReleaseBitlocker@IStorageDevice@@UEAAXXZ */
  return;
}




/* public: class CHardDriveIO & __ptr64 __cdecl CHardDriveIO::operator=(class CHardDriveIO const &
   __ptr64) __ptr64 */

CHardDriveIO * __thiscall CHardDriveIO::operator=(CHardDriveIO *this,CHardDriveIO *param_1)

{
                    /* 0x1180  19  ??4CHardDriveIO@@QEAAAEAV0@AEBV0@@Z */
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  this[0x48] = param_1[0x48];
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  return this;
}




/* public: class CHardDriveIOSetting & __ptr64 __cdecl CHardDriveIOSetting::operator=(class
   CHardDriveIOSetting const & __ptr64) __ptr64 */

CHardDriveIOSetting * __thiscall
CHardDriveIOSetting::operator=(CHardDriveIOSetting *this,CHardDriveIOSetting *param_1)

{
                    /* 0x11e0  20  ??4CHardDriveIOSetting@@QEAAAEAV0@AEBV0@@Z
                       0x11e0  22  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x11e0  23  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x11e0  24  ??4CNTFSLib@@QEAAAEAV0@$$QEAV0@@Z
                       0x11e0  25  ??4CNTFSLib@@QEAAAEAV0@AEBV0@@Z
                       0x11e0  28  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x11e0  29  ??4IObject@@QEAAAEAU0@AEBU0@@Z
                       0x11e0  30  ??4IStorageDevice@@QEAAAEAU0@$$QEAU0@@Z
                       0x11e0  31  ??4IStorageDevice@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  undefined8 uVar1;
  
                    /* 0x11f0  21  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}




/* public: unsigned int & __ptr64 __cdecl MyTemplate::CSimpleArray<unsigned int,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned int> >::operator[](int) __ptr64 */

uint * __thiscall
MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
operator[](CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *this
          ,int param_1)

{
  uint *in_RAX;
  
                    /* 0x1200  32
                       ??A?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@MyTemplate@@@MyTemplate@@QEAAAEAIH@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    in_RAX = (uint *)(*(longlong *)this + (longlong)param_1 * 4);
  }
  return in_RAX;
}




/* public: struct SECTOR_RANGE & __ptr64 __cdecl MyTemplate::CSimpleArray<struct SECTOR_RANGE,class
   MyTemplate::CSimpleArrayEqualHelper<struct SECTOR_RANGE> >::operator[](int) __ptr64 */

SECTOR_RANGE * __thiscall
MyTemplate::
CSimpleArray<struct_SECTOR_RANGE,class_MyTemplate::CSimpleArrayEqualHelper<struct_SECTOR_RANGE>_>::
operator[](CSimpleArray<struct_SECTOR_RANGE,class_MyTemplate::CSimpleArrayEqualHelper<struct_SECTOR_RANGE>_>
           *this,int param_1)

{
  SECTOR_RANGE *in_RAX;
  
                    /* 0x1220  33
                       ??A?$CSimpleArray@USECTOR_RANGE@@V?$CSimpleArrayEqualHelper@USECTOR_RANGE@@@MyTemplate@@@MyTemplate@@QEAAAEAUSECTOR_RANGE@@H@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    in_RAX = (SECTOR_RANGE *)(*(longlong *)this + (longlong)param_1 * 8);
  }
  return in_RAX;
}




CHardDriveIO * FUN_180001240(CHardDriveIO *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x60,*(__uint64 *)(param_1 + -8),CHardDriveIO::~CHardDriveIO);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  CHardDriveIO::~CHardDriveIO(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




CHardDriveIOSetting * FUN_1800012e0(CHardDriveIOSetting *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,8,*(__uint64 *)(param_1 + -8),CHardDriveIOSetting::~CHardDriveIOSetting);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  CHardDriveIOSetting::~CHardDriveIOSetting(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001380(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CCheckFAT::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800013b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CFatChain::vftable;
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* public: int __cdecl MyTemplate::CSimpleArray<unsigned int,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned int> >::Add(unsigned int const & __ptr64) __ptr64 */

int __thiscall
MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::Add
          (CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *this
          ,uint *param_1)

{
  uint *puVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  
                    /* 0x1420  43
                       ?Add@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@MyTemplate@@@MyTemplate@@QEAAHAEBI@Z
                        */
  iVar2 = *(int *)(this + 8);
  if (iVar2 == *(int *)(this + 0xc)) {
    iVar3 = 1;
    if (*(int *)(this + 0xc) != 0) {
      iVar3 = iVar2 * 2;
    }
    _Dst = malloc((longlong)iVar3 << 2);
    if (_Dst == (void *)0x0) {
      return 0;
    }
    if (*(void **)this != (void *)0x0) {
      memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) << 2);
      free(*(void **)this);
    }
    *(int *)(this + 0xc) = iVar3;
    *(void **)this = _Dst;
    iVar2 = *(int *)(this + 8);
  }
  puVar1 = (uint *)(*(longlong *)this + (longlong)iVar2 * 4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return 1;
}




/* public: int __cdecl MyTemplate::CSimpleArray<struct SECTOR_RANGE,class
   MyTemplate::CSimpleArrayEqualHelper<struct SECTOR_RANGE> >::Add(struct SECTOR_RANGE const &
   __ptr64) __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<struct_SECTOR_RANGE,class_MyTemplate::CSimpleArrayEqualHelper<struct_SECTOR_RANGE>_>::
Add(CSimpleArray<struct_SECTOR_RANGE,class_MyTemplate::CSimpleArrayEqualHelper<struct_SECTOR_RANGE>_>
    *this,SECTOR_RANGE *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  
                    /* 0x14e0  44
                       ?Add@?$CSimpleArray@USECTOR_RANGE@@V?$CSimpleArrayEqualHelper@USECTOR_RANGE@@@MyTemplate@@@MyTemplate@@QEAAHAEBUSECTOR_RANGE@@@Z
                        */
  iVar2 = *(int *)(this + 8);
  if (iVar2 == *(int *)(this + 0xc)) {
    iVar3 = 1;
    if (*(int *)(this + 0xc) != 0) {
      iVar3 = iVar2 * 2;
    }
    _Dst = malloc((longlong)iVar3 << 3);
    if (_Dst == (void *)0x0) {
      return 0;
    }
    if (*(void **)this != (void *)0x0) {
      memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) << 3);
      free(*(void **)this);
    }
    *(int *)(this + 0xc) = iVar3;
    *(void **)this = _Dst;
    iVar2 = *(int *)(this + 8);
  }
  puVar1 = (undefined8 *)(*(longlong *)this + (longlong)iVar2 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)param_1;
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return 1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x15a0  46  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x0001800015a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800015b0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  __uint64 _Var8;
  void *pvVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStackY_11d8 [32];
  undefined **local_11a0;
  void *local_1198;
  int local_1190;
  undefined4 local_118c;
  void *local_1188;
  undefined8 local_1180;
  longlong *local_1178;
  longlong *local_1170;
  undefined8 local_1168;
  uint local_1160 [8];
  longlong local_1140;
  undefined8 local_1138 [4];
  uint local_1118;
  uint local_1114;
  uint local_1110;
  uint local_110c;
  longlong local_1108;
  void *local_1100;
  uint *local_10f8;
  uint local_10f0;
  uint local_10ec;
  uint local_10e8;
  uint local_10e4;
  uint local_10e0;
  uint local_10dc;
  uint local_10d8;
  uint local_10d4;
  uint local_10d0;
  uint local_10cc;
  void *local_10c8;
  void *local_10c0;
  uint local_10b8;
  uint local_10b4;
  uint local_10b0;
  uint local_10ac;
  uint local_10a8;
  undefined8 local_10a0 [4];
  undefined8 local_1080;
  undefined1 local_1078 [20];
  int local_1064;
  int local_1058 [4];
  undefined1 local_1048 [4096];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1800015c6;
  local_1080 = 0xfffffffffffffffe;
  local_48 = DAT_180014018 ^ (ulonglong)auStackY_11d8;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined8 *)(param_1 + 8) = param_6;
  *(undefined8 *)(param_1 + 0x10) = param_7;
  puVar1 = (uint *)(param_1 + 0x20);
  local_1178 = param_2;
  local_1170 = param_2;
  local_1108 = param_1;
  local_10f8 = puVar1;
  memset(local_1048,0,0x1000);
  iVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_1078);
  if (iVar3 != 0) {
    pvVar9 = (void *)0x0;
    FUN_180003220(param_1,"  Checking");
    uVar6 = 1;
    iVar3 = (**(code **)(*param_2 + 0x10))(param_2,local_1048,param_3);
    if (iVar3 == 0) {
      FUN_180002680("Call ReadSector() failed! (%s,%d)",
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkfat.cpp"
                    ,0xeb,uVar6);
    }
    else {
      FUN_180003220(param_1,"  Checking DBR");
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar6 = FUN_180002a60(param_1,param_3,(longlong)local_1048,puVar1);
        if ((int)uVar6 == 0) {
          FUN_1800032e0(param_1,0x100d,0);
          goto LAB_18000265b;
        }
      }
      if (*(int *)(param_1 + 0x18) == 1) {
        uVar6 = FUN_180002c20(param_1,param_3,(longlong)local_1048,puVar1);
        if ((int)uVar6 == 0) {
          FUN_1800032e0(param_1,0x100d,0);
          goto LAB_18000265b;
        }
      }
      if (*(int *)(param_1 + 0x18) == 2) {
        uVar6 = FUN_180002dd0(param_1,param_3,(longlong)local_1048,puVar1);
        if ((int)uVar6 == 0) {
          FUN_1800032e0(param_1,0x100d,0);
          goto LAB_18000265b;
        }
      }
      FUN_1800032a0(param_1,0,*(int *)(param_1 + 0x4c) + 500);
      FUN_1800031e0(param_1,0,*(int *)(param_1 + 0x4c) + 500);
      FUN_1800031a0(param_1,0);
      iVar3 = 0x32;
      FUN_180003260(param_1,0x32);
      if (param_4 < *(longlong *)(param_1 + 0x30)) {
        FUN_1800032e0(param_1,0x1001,0);
      }
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x4c);
      FUN_180003220(param_1,"  Checking FAT");
      local_1118 = 0;
      pvVar7 = pvVar9;
      while (local_1100 = (void *)0x0, iVar5 = (int)pvVar7, iVar5 < *(int *)(param_1 + 0x4c)) {
        lVar11 = (ulonglong)(uint)(*(int *)(param_1 + 0x48) * iVar5) + *(longlong *)(param_1 + 0x40)
        ;
        local_1168 = lVar11;
        pvVar7 = operator_new((ulonglong)(uint)(*(int *)(param_1 + 0x48) * local_1064));
        if (pvVar7 == (void *)0x0) {
          local_1100 = (void *)0x0;
          goto LAB_18000265b;
        }
        local_1100 = pvVar7;
        iVar4 = (**(code **)(*local_1178 + 0x10))
                          (local_1178,pvVar7,lVar11,*(undefined4 *)(param_1 + 0x48));
        if (iVar4 != 0) {
          FUN_180005df0(local_10a0);
          uVar6 = FUN_180006130((longlong)local_10a0,pvVar7,*(int *)(param_1 + 0x48) * local_1064,
                                *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x18));
          if ((int)uVar6 != 0) {
            free(pvVar7);
            local_1100 = (void *)0x0;
            FUN_1800031a0(param_1,iVar3);
            FUN_180003260(param_1,iVar3 + 0x32);
            iVar4 = FUN_180005fd0((longlong)local_10a0);
            if (iVar4 == 0) {
              FUN_1800032e0(param_1,0x1006,0);
              FUN_180005e10(local_10a0);
              goto LAB_18000265b;
            }
            FUN_1800031a0(param_1,iVar3 + 0x32);
            iVar3 = iVar3 + 100;
            FUN_180003260(param_1,iVar3);
            iVar4 = FUN_180005e90((longlong)local_10a0);
            pvVar7 = pvVar9;
            if (iVar4 == 0) {
              FUN_1800032e0(param_1,0x1006,0);
              FUN_180005e10(local_10a0);
              goto LAB_18000265b;
            }
          }
          FUN_180005e10(local_10a0);
        }
        free(pvVar7);
        local_1118 = iVar5 + 1;
        pvVar7 = (void *)(ulonglong)local_1118;
      }
      FUN_180003220(param_1,"  Comparing FAT");
      FUN_180005df0((undefined8 *)local_1160);
      FUN_180005df0(local_1138);
      if (*(int *)(param_1 + 0x6c) < 2) {
        lVar11 = *(longlong *)(param_1 + 0x40);
        local_10c0 = (void *)0x0;
        local_1168 = lVar11;
        FUN_1800031a0(param_1,iVar3);
        iVar3 = iVar3 + 0x32;
        FUN_180003260(param_1,iVar3);
        pvVar7 = operator_new((ulonglong)(uint)(*(int *)(param_1 + 0x48) * local_1064));
        plVar12 = local_1178;
        local_10c0 = pvVar7;
        if (pvVar7 == (void *)0x0) {
          FUN_180005e10(local_1138);
          FUN_180005e10((undefined8 *)local_1160);
          goto LAB_18000265b;
        }
        iVar5 = (**(code **)(*local_1178 + 0x10))
                          (local_1178,pvVar7,lVar11,*(undefined4 *)(param_1 + 0x48));
        if (iVar5 == 0) {
          free(pvVar7);
          FUN_180005e10(local_1138);
          FUN_180005e10((undefined8 *)local_1160);
          goto LAB_18000265b;
        }
        uVar6 = FUN_180006130((longlong)local_1160,pvVar7,*(int *)(param_1 + 0x48) * local_1064,
                              *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x18));
        if ((int)uVar6 == 0) {
          free(pvVar7);
          FUN_180005e10(local_1138);
          FUN_180005e10((undefined8 *)local_1160);
          goto LAB_18000265b;
        }
        free(pvVar7);
        local_10c0 = (void *)0x0;
        local_1140 = CONCAT44(local_1140._4_4_,0xffffffff);
        FUN_1800060d0((longlong)local_1160,0,&local_1140);
        iVar5 = *(int *)(param_1 + 0x18);
        if (iVar5 == 0) {
          if (((byte)local_1140 & 0xf8) != 0xf8) {
            FUN_180005e10(local_1138);
            FUN_180005e10((undefined8 *)local_1160);
            goto LAB_18000265b;
          }
        }
        else if (iVar5 == 1) {
          if (((uint)local_1140 & 0xfff8) != 0xfff8) {
            FUN_180005e10(local_1138);
            FUN_180005e10((undefined8 *)local_1160);
            goto LAB_18000265b;
          }
        }
        else if ((iVar5 == 2) && (((uint)local_1140 & 0xffffff8) != 0xffffff8)) {
          FUN_180005e10(local_1138);
          FUN_180005e10((undefined8 *)local_1160);
          goto LAB_18000265b;
        }
      }
      else {
        local_110c = 0;
        pvVar7 = pvVar9;
        while (iVar5 = (int)pvVar7, iVar5 < *(int *)(param_1 + 0x4c) + -1) {
          lVar13 = (ulonglong)(uint)(*(int *)(param_1 + 0x48) * iVar5) +
                   *(longlong *)(param_1 + 0x40);
          lVar11 = (ulonglong)(uint)((iVar5 + 1) * *(int *)(param_1 + 0x48)) +
                   *(longlong *)(param_1 + 0x40);
          local_10c8 = (void *)0x0;
          local_1168 = lVar13;
          local_1140 = lVar11;
          FUN_1800031a0(param_1,iVar3);
          iVar3 = iVar3 + 0x32;
          FUN_180003260(param_1,iVar3);
          pvVar7 = operator_new((ulonglong)(uint)(*(int *)(param_1 + 0x48) * local_1064));
          local_10c8 = pvVar7;
          if (pvVar7 == (void *)0x0) {
            FUN_180005e10(local_1138);
            FUN_180005e10((undefined8 *)local_1160);
            goto LAB_18000265b;
          }
          iVar5 = (**(code **)(*local_1178 + 0x10))
                            (local_1178,pvVar7,lVar13,*(undefined4 *)(param_1 + 0x48));
          if (iVar5 == 0) {
            free(pvVar7);
            FUN_180005e10(local_1138);
            FUN_180005e10((undefined8 *)local_1160);
            goto LAB_18000265b;
          }
          uVar6 = FUN_180006130((longlong)local_1160,pvVar7,*(int *)(param_1 + 0x48) * local_1064,
                                *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x18));
          if ((int)uVar6 == 0) {
            free(pvVar7);
            FUN_180005e10(local_1138);
            FUN_180005e10((undefined8 *)local_1160);
            goto LAB_18000265b;
          }
          iVar5 = (**(code **)(*local_1178 + 0x10))
                            (local_1178,pvVar7,lVar11,*(undefined4 *)(param_1 + 0x48));
          if (iVar5 == 0) {
            free(pvVar7);
            FUN_180005e10(local_1138);
            FUN_180005e10((undefined8 *)local_1160);
            goto LAB_18000265b;
          }
          uVar6 = FUN_180006130((longlong)local_1138,pvVar7,*(int *)(param_1 + 0x48) * local_1064,
                                *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x18));
          if ((int)uVar6 == 0) {
            free(pvVar7);
            FUN_180005e10(local_1138);
            FUN_180005e10((undefined8 *)local_1160);
            goto LAB_18000265b;
          }
          free(pvVar7);
          local_10c8 = (void *)0x0;
          local_10d4 = 0;
          pvVar7 = pvVar9;
          while (iVar5 = (int)pvVar7, (longlong)pvVar7 < *(longlong *)(param_1 + 0x38)) {
            local_1114 = 0xffffffff;
            local_1110 = 0xfffffffe;
            FUN_1800060d0((longlong)local_1160,iVar5,&local_1114);
            FUN_1800060d0((longlong)local_1138,iVar5,&local_1110);
            if (local_1114 != local_1110) {
              FUN_1800032e0(param_1,0x1005,0);
              FUN_180005e10(local_1138);
              FUN_180005e10((undefined8 *)local_1160);
              goto LAB_18000265b;
            }
            if (iVar5 == 0) {
              iVar4 = *(int *)(param_1 + 0x18);
              if (iVar4 == 0) {
                if (((byte)local_1110 & (byte)local_1114 & 0xf8) != 0xf8) {
                  FUN_180005e10(local_1138);
                  FUN_180005e10((undefined8 *)local_1160);
                  goto LAB_18000265b;
                }
              }
              else if (iVar4 == 1) {
                if ((local_1110 & local_1114 & 0xfff8) != 0xfff8) {
                  FUN_180005e10(local_1138);
                  FUN_180005e10((undefined8 *)local_1160);
                  goto LAB_18000265b;
                }
              }
              else if ((iVar4 == 2) && ((local_1110 & local_1114 & 0xffffff8) != 0xffffff8)) {
                FUN_180005e10(local_1138);
                FUN_180005e10((undefined8 *)local_1160);
                goto LAB_18000265b;
              }
            }
            local_10d4 = iVar5 + 1;
            pvVar7 = (void *)(ulonglong)local_10d4;
          }
          local_110c = local_110c + 1;
          pvVar7 = (void *)(ulonglong)local_110c;
        }
        FUN_1800061d0((longlong)local_1138);
        plVar12 = local_1178;
      }
      local_1198 = (void *)0x0;
      local_1190 = 0;
      local_118c = 0;
      local_11a0 = CFatChain::vftable;
      FUN_180003220(param_1,"  Checking Cluster Chain");
      FUN_1800031a0(param_1,iVar3);
      FUN_180003260(param_1,iVar3 + 0x32);
      auVar2 = ZEXT816(4) * ZEXT416(*(uint *)(param_1 + 0x38));
      _Var8 = auVar2._0_8_;
      if (auVar2._8_8_ != 0) {
        _Var8 = 0xffffffffffffffff;
      }
      pvVar7 = operator_new(_Var8);
      *(void **)(param_1 + 0x60) = pvVar7;
      if (*(void **)(param_1 + 0x60) != (void *)0x0) {
        memset(*(void **)(param_1 + 0x60),0,(ulonglong)(uint)(*(int *)(param_1 + 0x38) << 2));
      }
      if (*(int *)(param_1 + 0x18) == 2) {
        uVar6 = FUN_1800027a0(param_1,(longlong)local_1160,*(uint *)(param_1 + 0x50),
                              (longlong)&local_11a0);
        if ((int)uVar6 == 0) {
          FUN_1800032e0(param_1,0x1006,0);
          free(*(void **)(param_1 + 0x60));
          *(undefined8 *)(param_1 + 0x60) = 0;
          local_11a0 = CFatChain::vftable;
          if (local_1198 != (void *)0x0) {
            local_10d0 = 0;
            while ((int)pvVar9 < local_1190) {
              local_10d0 = (int)pvVar9 + 1;
              pvVar9 = (void *)(ulonglong)local_10d0;
            }
            free(local_1198);
            local_1198 = (void *)0x0;
          }
          local_1190 = 0;
          local_118c = 0;
          FUN_180005e10(local_1138);
          FUN_180005e10((undefined8 *)local_1160);
          goto LAB_18000265b;
        }
      }
      else {
        local_1168 = CONCAT44(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50));
        MyTemplate::
        CSimpleArray<struct_SECTOR_RANGE,class_MyTemplate::CSimpleArrayEqualHelper<struct_SECTOR_RANGE>_>
        ::Add((CSimpleArray<struct_SECTOR_RANGE,class_MyTemplate::CSimpleArrayEqualHelper<struct_SECTOR_RANGE>_>
               *)&local_1198,(SECTOR_RANGE *)&local_1168);
      }
      local_1188 = (void *)0x0;
      local_1180 = 0;
      local_1178 = (longlong *)CONCAT44(local_1178._4_4_,0xffffffff);
      MyTemplate::
      CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::Add
                ((CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
                  *)&local_1188,(uint *)&local_1178);
      *(int *)(param_1 + 0x70) = iVar3 + 0x32;
      *(undefined4 *)(param_1 + 0x68) = 0;
      iVar3 = FUN_180003360(param_1,plVar12,local_1160,(longlong)&local_11a0,
                            (CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
                             *)&local_1188,"");
      if (iVar3 == 0) {
        if (local_1188 != (void *)0x0) {
          local_10cc = 0;
          pvVar7 = pvVar9;
          while ((int)pvVar7 < (int)local_1180) {
            local_10cc = (int)pvVar7 + 1;
            pvVar7 = (void *)(ulonglong)local_10cc;
          }
          free(local_1188);
          local_1188 = (void *)0x0;
        }
        local_1180 = 0;
        local_11a0 = CFatChain::vftable;
        if (local_1198 != (void *)0x0) {
          local_10b8 = 0;
          while ((int)pvVar9 < local_1190) {
            local_10b8 = (int)pvVar9 + 1;
            pvVar9 = (void *)(ulonglong)local_10b8;
          }
          free(local_1198);
          local_1198 = (void *)0x0;
        }
        local_1190 = 0;
        local_118c = 0;
        FUN_180005e10(local_1138);
        FUN_180005e10((undefined8 *)local_1160);
      }
      else if (*(int *)(param_1 + 0x68) == 0) {
        iVar3 = *(int *)(param_1 + 0x70);
        local_1058[0] = 0xff7;
        local_1058[1] = 0xfff7;
        local_1058[2] = 0xffffff7;
        FUN_1800031a0(param_1,iVar3);
        FUN_180003260(param_1,iVar3 + 0x32);
        uVar10 = 2;
        while( true ) {
          pvVar7 = *(void **)(param_1 + 0x60);
          local_10e0 = uVar10;
          if ((pvVar7 == (void *)0x0) ||
             (*(longlong *)(param_1 + 0x38) <= (longlong)(ulonglong)uVar10)) break;
          local_1170 = (longlong *)CONCAT44(local_1170._4_4_,0xffffffff);
          iVar5 = *(int *)((longlong)pvVar7 + (ulonglong)uVar10 * 4);
          FUN_1800060d0((longlong)local_1160,uVar10,&local_1170);
          if (*(int *)(param_1 + 0x6c) < 2) {
            if ((int)local_1170 == local_1058[*(int *)(param_1 + 0x18)]) {
              if (local_1188 != (void *)0x0) {
                local_10e8 = 0;
                pvVar7 = pvVar9;
                while ((int)pvVar7 < (int)local_1180) {
                  local_10e8 = (int)pvVar7 + 1;
                  pvVar7 = (void *)(ulonglong)local_10e8;
                }
                free(local_1188);
                local_1188 = (void *)0x0;
              }
              local_1180 = 0;
              local_11a0 = CFatChain::vftable;
              if (local_1198 != (void *)0x0) {
                local_10e4 = 0;
                while ((int)pvVar9 < local_1190) {
                  local_10e4 = (int)pvVar9 + 1;
                  pvVar9 = (void *)(ulonglong)local_10e4;
                }
                free(local_1198);
                local_1198 = (void *)0x0;
              }
              local_1190 = 0;
              local_118c = 0;
              FUN_180005e10(local_1138);
              FUN_180005e10((undefined8 *)local_1160);
              goto LAB_18000265b;
            }
          }
          else if ((((int)local_1170 != iVar5) &&
                   ((int)local_1170 != local_1058[*(int *)(param_1 + 0x18)])) && (iVar5 == 0)) {
            uVar6 = FUN_180002770(param_1);
            if ((int)uVar6 == 0) {
              if (local_1188 != (void *)0x0) {
                local_10ac = 0;
                pvVar7 = pvVar9;
                while ((int)pvVar7 < (int)local_1180) {
                  local_10ac = (int)pvVar7 + 1;
                  pvVar7 = (void *)(ulonglong)local_10ac;
                }
                free(local_1188);
                local_1188 = (void *)0x0;
              }
              local_1180 = 0;
              local_11a0 = CFatChain::vftable;
              if (local_1198 != (void *)0x0) {
                local_10a8 = 0;
                while ((int)pvVar9 < local_1190) {
                  local_10a8 = (int)pvVar9 + 1;
                  pvVar9 = (void *)(ulonglong)local_10a8;
                }
                free(local_1198);
                local_1198 = (void *)0x0;
              }
              local_1190 = 0;
              local_118c = 0;
              FUN_180005e10(local_1138);
              FUN_180005e10((undefined8 *)local_1160);
            }
            else {
              FUN_1800032e0(param_1,0x1003,0);
              free(*(void **)(param_1 + 0x60));
              *(undefined8 *)(param_1 + 0x60) = 0;
              if (local_1188 != (void *)0x0) {
                local_10f0 = 0;
                pvVar7 = pvVar9;
                while ((int)pvVar7 < (int)local_1180) {
                  local_10f0 = (int)pvVar7 + 1;
                  pvVar7 = (void *)(ulonglong)local_10f0;
                }
                free(local_1188);
                local_1188 = (void *)0x0;
              }
              local_1180 = 0;
              local_11a0 = CFatChain::vftable;
              if (local_1198 != (void *)0x0) {
                local_10ec = 0;
                while ((int)pvVar9 < local_1190) {
                  local_10ec = (int)pvVar9 + 1;
                  pvVar9 = (void *)(ulonglong)local_10ec;
                }
                free(local_1198);
                local_1198 = (void *)0x0;
              }
              local_1190 = 0;
              local_118c = 0;
              FUN_180005e10(local_1138);
              FUN_180005e10((undefined8 *)local_1160);
            }
            goto LAB_18000265b;
          }
          uVar10 = uVar10 + 1;
        }
        free(pvVar7);
        *(undefined8 *)(param_1 + 0x60) = 0;
        FUN_1800031a0(param_1,iVar3 + 0x32);
        FUN_180003260(param_1,iVar3 + 100);
        FUN_180003220(param_1,"  Checking Finished");
        if (local_1188 != (void *)0x0) {
          local_10dc = 0;
          pvVar7 = pvVar9;
          while ((int)pvVar7 < (int)local_1180) {
            local_10dc = (int)pvVar7 + 1;
            pvVar7 = (void *)(ulonglong)local_10dc;
          }
          free(local_1188);
          local_1188 = (void *)0x0;
        }
        local_1180 = 0;
        local_11a0 = CFatChain::vftable;
        if (local_1198 != (void *)0x0) {
          local_10d8 = 0;
          while ((int)pvVar9 < local_1190) {
            local_10d8 = (int)pvVar9 + 1;
            pvVar9 = (void *)(ulonglong)local_10d8;
          }
          free(local_1198);
          local_1198 = (void *)0x0;
        }
        local_1190 = 0;
        local_118c = 0;
        FUN_180005e10(local_1138);
        FUN_180005e10((undefined8 *)local_1160);
      }
      else {
        free(*(void **)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x60) = 0;
        if (local_1188 != (void *)0x0) {
          local_10b4 = 0;
          pvVar7 = pvVar9;
          while ((int)pvVar7 < (int)local_1180) {
            local_10b4 = (int)pvVar7 + 1;
            pvVar7 = (void *)(ulonglong)local_10b4;
          }
          free(local_1188);
          local_1188 = (void *)0x0;
        }
        local_1180 = 0;
        local_11a0 = CFatChain::vftable;
        if (local_1198 != (void *)0x0) {
          local_10b0 = 0;
          while ((int)pvVar9 < local_1190) {
            local_10b0 = (int)pvVar9 + 1;
            pvVar9 = (void *)(ulonglong)local_10b0;
          }
          free(local_1198);
          local_1198 = (void *)0x0;
        }
        local_1190 = 0;
        local_118c = 0;
        FUN_180005e10(local_1138);
        FUN_180005e10((undefined8 *)local_1160);
      }
    }
  }
LAB_18000265b:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_11d8);
  return;
}




void FUN_180002680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  local_28 = DAT_180014018 ^ (ulonglong)auStack_448;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  memset(&local_418,0,1000);
  puVar2 = (undefined8 *)FUN_180003c90();
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




undefined8 FUN_180002770(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_28 [10];
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    local_28[0] = 6;
    uVar1 = (**(code **)(param_1 + 8))(local_28,*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 1;
}




undefined8 FUN_1800027a0(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint local_res18 [2];
  longlong local_res20;
  TBitmap local_68 [24];
  undefined4 local_50 [2];
  undefined4 local_48;
  uint local_44;
  
  local_res20 = param_4;
  TBitmap::TBitmap(local_68);
  plVar1 = (longlong *)(param_4 + 8);
  local_res18[0] = param_3;
  if ((void *)*plVar1 != (void *)0x0) {
    free((void *)*plVar1);
    *plVar1 = 0;
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  lVar11 = 0;
  uVar9 = 0;
  iVar3 = TBitmap::CreateBitmap(local_68,(ulonglong)*(uint *)(param_2 + 0x14));
  if (iVar3 == 0) {
LAB_180002990:
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    do {
      uVar7 = (ulonglong)local_res18[0];
      iVar3 = (int)uVar9;
      if (*(longlong *)(param_1 + 0x60) != 0) {
        if (((local_res18[0] < *(uint *)(param_2 + 0x14)) &&
            (*(int *)(*(longlong *)(param_1 + 0x60) + uVar7 * 4) != 0)) &&
           (*(code **)(param_1 + 8) != (code *)0x0)) {
          local_50[0] = 5;
          local_48 = 0x1002;
          local_44 = local_res18[0];
          iVar4 = (**(code **)(param_1 + 8))(local_50,*(undefined8 *)(param_1 + 0x10));
          if (iVar4 == 0) goto LAB_180002990;
          uVar7 = (ulonglong)local_res18[0];
        }
        if (iVar3 != 0) {
          *(int *)(*(longlong *)(param_1 + 0x60) + uVar9 * 4) = (int)uVar7;
          uVar7 = (ulonglong)local_res18[0];
        }
      }
      if (*(uint *)(param_2 + 0x14) <= (uint)uVar7) break;
      iVar4 = TBitmap::GetBit(local_68,uVar7);
      if (iVar4 != 0) goto LAB_180002990;
      if (*(uint *)(param_2 + 0x14) <= local_res18[0]) break;
      if (((lVar11 == 0) || (iVar3 == 0)) || (iVar3 != local_res18[0] - 1)) {
        iVar3 = *(int *)(param_1 + 0x20);
        iVar5 = local_res18[0] - 2;
        iVar4 = *(int *)(param_1 + 0x28);
        iVar6 = *(int *)(param_4 + 0x10);
        if (iVar6 == *(int *)(param_4 + 0x14)) {
          iVar8 = 1;
          if (*(int *)(param_4 + 0x14) != 0) {
            iVar8 = iVar6 * 2;
          }
          _Dst = malloc((longlong)iVar8 << 3);
          if (_Dst == (void *)0x0) goto LAB_180002948;
          if ((void *)*plVar1 != (void *)0x0) {
            memcpy(_Dst,(void *)*plVar1,(longlong)*(int *)(param_4 + 0x14) << 3);
            free((void *)*plVar1);
          }
          *(int *)(param_4 + 0x14) = iVar8;
          *plVar1 = (longlong)_Dst;
          iVar6 = *(int *)(param_4 + 0x10);
        }
        puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar6 * 8);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = CONCAT44(iVar3,iVar5 * iVar3 + iVar4);
        }
        *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
      }
      else {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + *(int *)(param_1 + 0x20);
      }
LAB_180002948:
      iVar3 = *(int *)(local_res20 + 0x10) + -1;
      if ((-1 < iVar3) && (iVar3 < *(int *)(param_4 + 0x10))) {
        lVar11 = *plVar1 + (longlong)iVar3 * 8;
      }
      uVar9 = (ulonglong)local_res18[0];
      TBitmap::SetBit(local_68,uVar9,1,1);
      iVar3 = FUN_1800060d0(param_2,local_res18[0],local_res18);
    } while (iVar3 != 0);
  }
  TBitmap::~TBitmap(local_68);
  return uVar10;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x29c0  64  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x0001800029c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




/* public: int __cdecl MyTemplate::CSimpleArray<unsigned int,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned int> >::GetSize(void)const __ptr64 */

int __thiscall
MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
GetSize(CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *this)

{
                    /* 0x29d0  74
                       ?GetSize@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@MyTemplate@@@MyTemplate@@QEBAHXZ
                       0x29d0  75
                       ?GetSize@?$CSimpleArray@USECTOR_RANGE@@V?$CSimpleArrayEqualHelper@USECTOR_RANGE@@@MyTemplate@@@MyTemplate@@QEBAHXZ
                       0x29d0  76
                       ?GetSize@?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEBAHXZ
                       0x29d0  77
                       ?GetSize@?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@QEBAHXZ
                        */
  return *(int *)(this + 8);
}




/* public: void __cdecl MyTemplate::CSimpleArray<unsigned int,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned int> >::InternalSetAtIndex(int,unsigned int const &
   __ptr64) __ptr64 */

void __thiscall
MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
InternalSetAtIndex(CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
                   *this,int param_1,uint *param_2)

{
  uint *puVar1;
  
                    /* 0x29e0  88
                       ?InternalSetAtIndex@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@MyTemplate@@@MyTemplate@@QEAAXHAEBI@Z
                        */
  puVar1 = (uint *)(*(longlong *)this + (longlong)param_1 * 4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}




/* public: void __cdecl MyTemplate::CSimpleArray<struct SECTOR_RANGE,class
   MyTemplate::CSimpleArrayEqualHelper<struct SECTOR_RANGE> >::InternalSetAtIndex(int,struct
   SECTOR_RANGE const & __ptr64) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<struct_SECTOR_RANGE,class_MyTemplate::CSimpleArrayEqualHelper<struct_SECTOR_RANGE>_>::
InternalSetAtIndex(CSimpleArray<struct_SECTOR_RANGE,class_MyTemplate::CSimpleArrayEqualHelper<struct_SECTOR_RANGE>_>
                   *this,int param_1,SECTOR_RANGE *param_2)

{
  undefined8 *puVar1;
  
                    /* 0x2a20  89
                       ?InternalSetAtIndex@?$CSimpleArray@USECTOR_RANGE@@V?$CSimpleArrayEqualHelper@USECTOR_RANGE@@@MyTemplate@@@MyTemplate@@QEAAXHAEBUSECTOR_RANGE@@@Z
                        */
  puVar1 = (undefined8 *)(*(longlong *)this + (longlong)param_1 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)param_2;
  }
  return;
}




undefined8 FUN_180002a60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  if ((*(int *)(param_3 + 0x36) == 0x31544146) && (*(char *)(param_3 + 0x3a) == '2')) {
    bVar1 = *(byte *)(param_3 + 0xd);
    switch(bVar1) {
    case 1:
    case 2:
    case 4:
    case 8:
    case 0x10:
    case 0x20:
    case 0x40:
    case 0x80:
      if ((byte)(*(char *)(param_3 + 0x10) - 1U) < 4) {
        uVar5 = *(uint *)(param_3 + 0x20);
        if (uVar5 == 0) {
          uVar5 = (uint)*(ushort *)(param_3 + 0x13);
        }
        *param_4 = (uint)bVar1;
        uVar6 = (uint)(*(ushort *)(param_3 + 0x11) >> 4);
        param_4[0xe] = uVar6;
        lVar4 = (ulonglong)*(ushort *)(param_3 + 0x16) * (ulonglong)*(byte *)(param_3 + 0x10) +
                param_2 + (ulonglong)*(ushort *)(param_3 + 0xe);
        *(longlong *)(param_4 + 0xc) = lVar4;
        *(ulonglong *)(param_4 + 2) = (ulonglong)uVar6 + lVar4;
        *(ulonglong *)(param_4 + 4) = (ulonglong)uVar5;
        *(ulonglong *)(param_4 + 8) = (ulonglong)*(ushort *)(param_3 + 0xe) + param_2;
        uVar3 = *(ushort *)(param_3 + 0x16);
        param_4[10] = (uint)uVar3;
        bVar2 = *(byte *)(param_3 + 0x10);
        param_4[0xb] = (uint)bVar2;
        lVar4 = (longlong)
                ((((ulonglong)uVar5 - (ulonglong)((uint)bVar2 * (uint)uVar3)) -
                 (ulonglong)*(ushort *)(param_3 + 0xe)) - (ulonglong)uVar6) /
                (longlong)(ulonglong)bVar1 + 2;
        if ((longlong)((double)uVar3 * 341.3333333) < lVar4) {
          lVar4 = (longlong)((double)uVar3 * 341.3333333);
        }
        *(longlong *)(param_4 + 6) = lVar4;
        return 1;
      }
    }
  }
  return 0;
}




undefined8 FUN_180002c20(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  if ((*(int *)(param_3 + 0x36) == 0x31544146) && (*(char *)(param_3 + 0x3a) == '6')) {
    bVar1 = *(byte *)(param_3 + 0xd);
    switch(bVar1) {
    case 1:
    case 2:
    case 4:
    case 8:
    case 0x10:
    case 0x20:
    case 0x40:
    case 0x80:
      if ((byte)(*(char *)(param_3 + 0x10) - 1U) < 4) {
        uVar5 = *(uint *)(param_3 + 0x20);
        if (uVar5 == 0) {
          uVar5 = (uint)*(ushort *)(param_3 + 0x13);
        }
        *param_4 = (uint)bVar1;
        uVar6 = (uint)(*(ushort *)(param_3 + 0x11) >> 4);
        param_4[0xe] = uVar6;
        lVar4 = (ulonglong)*(ushort *)(param_3 + 0x16) * (ulonglong)*(byte *)(param_3 + 0x10) +
                param_2 + (ulonglong)*(ushort *)(param_3 + 0xe);
        *(longlong *)(param_4 + 0xc) = lVar4;
        *(ulonglong *)(param_4 + 2) = (ulonglong)uVar6 + lVar4;
        *(ulonglong *)(param_4 + 4) = (ulonglong)uVar5;
        *(ulonglong *)(param_4 + 8) = (ulonglong)*(ushort *)(param_3 + 0xe) + param_2;
        uVar3 = *(ushort *)(param_3 + 0x16);
        param_4[10] = (uint)uVar3;
        bVar2 = *(byte *)(param_3 + 0x10);
        param_4[0xb] = (uint)bVar2;
        lVar4 = (longlong)
                ((((ulonglong)uVar5 - (ulonglong)((uint)bVar2 * (uint)uVar3)) -
                 (ulonglong)*(ushort *)(param_3 + 0xe)) - (ulonglong)uVar6) /
                (longlong)(ulonglong)bVar1 + 2;
        if ((longlong)((ulonglong)uVar3 * 0x100) < lVar4) {
          lVar4 = (ulonglong)uVar3 * 0x100;
        }
        *(longlong *)(param_4 + 6) = lVar4;
        return 1;
      }
    }
  }
  return 0;
}




undefined8 FUN_180002dd0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((*(int *)(param_3 + 0x52) == 0x33544146) && (*(char *)(param_3 + 0x56) == '2')) {
    bVar1 = *(byte *)(param_3 + 0xd);
    switch(bVar1) {
    case 1:
    case 2:
    case 4:
    case 8:
    case 0x10:
    case 0x20:
    case 0x40:
    case 0x80:
      if ((byte)(*(char *)(param_3 + 0x10) - 1U) < 4) {
        uVar4 = *(uint *)(param_3 + 0x20);
        uVar5 = *(uint *)(param_3 + 0x24);
        if ((((*(ushort *)(param_3 + 0x16) == 0) || (*(ushort *)(param_3 + 0x16) == uVar5)) &&
            (1 < *(uint *)(param_3 + 0x2c))) && (*(uint *)(param_3 + 0x2c) < uVar4 / bVar1)) {
          *param_4 = (uint)bVar1;
          param_4[0xc] = *(uint *)(param_3 + 0x2c);
          bVar2 = *(byte *)(param_3 + 0x10);
          uVar3 = *(ushort *)(param_3 + 0xe);
          *(ulonglong *)(param_4 + 4) = (ulonglong)uVar4;
          *(ulonglong *)(param_4 + 2) = (ulonglong)uVar3 + (ulonglong)(bVar2 * uVar5) + param_2;
          uVar3 = *(ushort *)(param_3 + 0xe);
          param_4[10] = uVar5;
          *(ulonglong *)(param_4 + 8) = (ulonglong)uVar3 + param_2;
          bVar2 = *(byte *)(param_3 + 0x10);
          param_4[0xb] = (uint)bVar2;
          uVar7 = (longlong)
                  (((ulonglong)uVar4 - (ulonglong)(bVar2 * uVar5)) -
                  (ulonglong)*(ushort *)(param_3 + 0xe)) / (longlong)(ulonglong)bVar1 + 2;
          *(ulonglong *)(param_4 + 6) = uVar7;
          uVar6 = (ulonglong)(*(ushort *)(param_3 + 0xb) * uVar5 >> 2);
          if (uVar6 < uVar7) {
            uVar7 = uVar6;
          }
          *(ulonglong *)(param_4 + 6) = uVar7;
          return 1;
        }
      }
    }
  }
  return 0;
}




void FUN_180002fa0(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [20];
  int local_44;
  ulonglong local_38;
  
  local_60 = 0xfffffffffffffffe;
  local_38 = DAT_180014018 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  iVar3 = 0;
  iVar6 = *(int *)(param_3 + 0x10);
  if (0 < iVar6) {
    lVar4 = 0;
    plVar1 = param_4;
    do {
      if ((-1 < iVar3) && (iVar3 < iVar6)) {
        plVar1 = (longlong *)(*(longlong *)(param_3 + 8) + lVar4);
      }
      iVar5 = iVar5 + *(int *)((longlong)plVar1 + 4);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < iVar6);
  }
  local_78 = param_4;
  local_70 = param_2;
  local_68 = param_3;
  free((void *)*param_4);
  *param_4 = 0;
  (**(code **)(*param_2 + 0x38))(param_2,local_58);
  pvVar2 = operator_new((ulonglong)(uint)(iVar5 * local_44));
  *param_4 = (longlong)pvVar2;
  lVar4 = *param_4;
  if ((lVar4 != 0) && (iVar6 = 0, plVar1 = local_78, 0 < *(int *)(param_3 + 0x10))) {
    do {
      if ((-1 < iVar6) && (iVar6 < *(int *)(param_3 + 0x10))) {
        plVar1 = (longlong *)(*(longlong *)(param_3 + 8) + (longlong)iVar6 * 8);
      }
      iVar3 = (**(code **)(*param_2 + 0x10))
                        (param_2,lVar4,(int)*plVar1,*(undefined4 *)((longlong)plVar1 + 4));
      if (iVar3 == 0) {
        free((void *)*param_4);
        *param_4 = 0;
        break;
      }
      lVar4 = lVar4 + (ulonglong)(uint)(local_44 * *(int *)((longlong)plVar1 + 4));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_3 + 0x10));
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_98);
  return;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x30f0  97  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x0001800030f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




/* public: void __cdecl MyTemplate::CSimpleArray<unsigned int,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned int> >::RemoveAll(void) __ptr64 */

void __thiscall
MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
RemoveAll(CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *this)

{
                    /* 0x3100  99
                       ?RemoveAll@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@MyTemplate@@@MyTemplate@@QEAAXXZ
                       0x3100  100
                       ?RemoveAll@?$CSimpleArray@USECTOR_RANGE@@V?$CSimpleArrayEqualHelper@USECTOR_RANGE@@@MyTemplate@@@MyTemplate@@QEAAXXZ
                       0x3100  101
                       ?RemoveAll@?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAXXZ
                        */
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}




/* public: int __cdecl MyTemplate::CSimpleArray<unsigned int,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned int> >::RemoveAt(int) __ptr64 */

int __thiscall
MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
RemoveAt(CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *this,
        int param_1)

{
  void *_Dst;
  int iVar1;
  
                    /* 0x3140  102
                       ?RemoveAt@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@MyTemplate@@@MyTemplate@@QEAAHH@Z
                        */
  if ((-1 < param_1) && (iVar1 = *(int *)(this + 8), param_1 < iVar1)) {
    if (param_1 != iVar1 + -1) {
      _Dst = (void *)(*(longlong *)this + (longlong)param_1 * 4);
      memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)((iVar1 - param_1) + -1) << 2);
      iVar1 = *(int *)(this + 8);
    }
    *(int *)(this + 8) = iVar1 + -1;
    return 1;
  }
  return 0;
}




undefined8 FUN_1800031a0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  undefined4 local_20;
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    local_28[0] = 4;
    local_20 = param_2;
    uVar1 = (**(code **)(param_1 + 8))(local_28,*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 1;
}




undefined8 FUN_1800031e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    local_28[0] = 3;
    local_20 = param_2;
    local_1c = param_3;
    uVar1 = (**(code **)(param_1 + 8))(local_28,*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 1;
}




undefined8 FUN_180003220(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    local_28[0] = 7;
    local_18 = 1;
    local_20 = param_2;
    uVar1 = (**(code **)(param_1 + 8))(local_28,*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 1;
}




undefined8 FUN_180003260(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  undefined4 local_20;
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    local_28[0] = 1;
    local_20 = param_2;
    uVar1 = (**(code **)(param_1 + 8))(local_28,*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 1;
}




undefined8 FUN_1800032a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    local_28[0] = 0;
    local_20 = param_2;
    local_1c = param_3;
    uVar1 = (**(code **)(param_1 + 8))(local_28,*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 1;
}




undefined8 FUN_1800032e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    local_28[0] = 5;
    local_20 = param_2;
    local_1c = param_3;
    uVar1 = (**(code **)(param_1 + 8))(local_28,*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 1;
}




undefined8 FUN_180003320(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    local_28[0] = 2;
    local_18 = 1;
    local_20 = param_2;
    uVar1 = (**(code **)(param_1 + 8))(local_28,*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 1;
}




void FUN_180003360(longlong param_1,longlong *param_2,uint *param_3,longlong param_4,
                  CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
                  *param_5,char *param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  code *pcVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  void *pvVar14;
  ulonglong uVar15;
  void *pvVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined ***pppuVar21;
  undefined1 auStackY_178 [32];
  undefined **local_148;
  void *local_140;
  undefined8 local_138;
  uint local_130;
  int local_12c;
  CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *local_128;
  uint *local_120;
  int local_118;
  longlong *local_110;
  char *local_108;
  int local_100;
  uint *local_f8;
  longlong *local_f0;
  char *local_e8;
  uint *local_e0;
  longlong *local_d8;
  void *local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0 [2];
  undefined *local_a8;
  undefined4 local_a0;
  int local_9c;
  undefined1 local_90 [20];
  uint local_7c;
  char local_70 [24];
  undefined1 local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  ulonglong local_48;
  
  local_b8 = 0xfffffffffffffffe;
  local_48 = DAT_180014018 ^ (ulonglong)auStackY_178;
  local_128 = param_5;
  local_108 = param_6;
  uVar15 = 0;
  uVar19 = 0;
  iVar4 = *(int *)(param_4 + 0x10);
  puVar5 = param_3;
  uVar8 = uVar15;
  uVar10 = uVar15;
  uVar18 = uVar15;
  local_120 = param_3;
  local_f8 = param_3;
  local_d8 = param_2;
  local_c8 = param_2;
  local_c0 = param_1;
  if (iVar4 < 1) goto LAB_180003754;
  do {
    iVar12 = (int)uVar8;
    if ((-1 < iVar12) && (iVar12 < iVar4)) {
      puVar5 = (uint *)(*(longlong *)(param_4 + 8) + uVar10);
    }
    uVar17 = (int)uVar18 + puVar5[1];
    uVar8 = (ulonglong)(iVar12 + 1U);
    uVar10 = uVar10 + 8;
    uVar18 = (ulonglong)uVar17;
  } while ((int)(iVar12 + 1U) < iVar4);
  if (uVar17 == 0) goto LAB_180003754;
  (**(code **)(*param_2 + 0x38))(param_2,local_90);
  iVar4 = *(int *)(param_5 + 8) + -1;
  puVar5 = local_120;
  if ((-1 < iVar4) && (iVar4 < *(int *)(param_5 + 8))) {
    puVar5 = (uint *)(*(longlong *)param_5 + (longlong)iVar4 * 4);
  }
  uVar17 = *puVar5;
  if (uVar17 == 0xffffffff) {
LAB_1800034fb:
    local_f0 = (longlong *)0x0;
    iVar4 = FUN_180002fa0(param_1,param_2,param_4,(longlong *)&local_f0);
    plVar2 = local_f0;
    if (iVar4 != 0) {
      local_110 = local_f0;
      iVar4 = *(int *)(param_4 + 0x10);
      puVar5 = local_120;
      uVar8 = uVar15;
      uVar10 = uVar15;
      uVar18 = uVar15;
      if (0 < iVar4) {
        do {
          iVar12 = (int)uVar8;
          if ((-1 < iVar12) && (iVar12 < iVar4)) {
            puVar5 = (uint *)(*(longlong *)(param_4 + 8) + uVar10);
          }
          uVar19 = (int)uVar18 + puVar5[1];
          uVar8 = (ulonglong)(iVar12 + 1U);
          uVar10 = uVar10 + 8;
          uVar18 = (ulonglong)uVar19;
        } while ((int)(iVar12 + 1U) < iVar4);
      }
      local_130 = uVar19 * local_7c >> 5;
      if (uVar17 != 0xffffffff) {
        if (((((char)*local_f0 != '.') || (*(char *)((longlong)local_f0 + 1) != ' ')) ||
            ((char)local_f0[4] != '.')) ||
           ((*(char *)((longlong)local_f0 + 0x21) != '.' ||
            (*(char *)((longlong)local_f0 + 0x22) != ' ')))) {
          if (*(code **)(param_1 + 8) != (code *)0x0) {
            local_148 = (undefined **)CONCAT44(local_148._4_4_,5);
            local_140 = (void *)0x1007;
            (**(code **)(param_1 + 8))(&local_148,*(undefined8 *)(param_1 + 0x10));
          }
          free(plVar2);
          goto LAB_180003754;
        }
        local_110 = local_f0 + 8;
        local_130 = local_130 - 2;
      }
      puVar5 = local_120;
      if (0 < iVar4) {
        puVar5 = *(uint **)(param_4 + 8);
      }
      iVar4 = (int)((longlong)((ulonglong)*puVar5 - *(longlong *)(param_1 + 0x28)) /
                   (longlong)*(int *)(param_1 + 0x20)) + 2;
      uVar8 = uVar15;
      pvVar16 = local_d0;
      puVar5 = local_e0;
      local_118 = 0;
      local_100 = 0;
      uVar19 = local_130;
      if (uVar17 != 0xffffffff) {
        local_118 = iVar4;
        local_100 = iVar4;
      }
LAB_180003661:
      plVar2 = local_110;
      local_12c = (int)uVar8;
      if (((int)uVar19 <= local_12c) || (*(int *)(param_1 + 0x68) != 0)) goto LAB_180003a20;
      if ((*(char *)((longlong)local_110 + 0xb) != '\x0f') && ((char)*local_110 != -0x1b)) {
        local_58 = 0x20;
        uStack_57 = 0;
        uStack_50 = 0;
        uStack_4f = 0;
        uStack_4e = 0;
        if (((char)*local_110 == '\0') ||
           (((*local_110 == 0x20 && ((short)local_110[1] == 0)) &&
            (*(char *)((longlong)local_110 + 10) == '\0')))) goto LAB_180003a20;
        uVar17 = CONCAT22(*(undefined2 *)((longlong)local_110 + 0x14),
                          *(undefined2 *)((longlong)local_110 + 0x1a));
        if (uVar17 != 0) {
          if ((uVar17 == 1) || (*(longlong *)(param_1 + 0x38) <= (longlong)(ulonglong)uVar17)) {
            if (*(code **)(param_1 + 8) != (code *)0x0) {
              local_b0[0] = 5;
              local_a8 = (undefined *)0x1007;
              (**(code **)(param_1 + 8))(local_b0);
              uVar19 = local_130;
            }
          }
          else {
            local_140 = (void *)0x0;
            local_138 = 0;
            local_148 = CFatChain::vftable;
            uVar7 = FUN_180002770(param_1);
            if ((int)uVar7 == 0) {
              *(undefined4 *)(param_1 + 0x68) = 1;
LAB_180003734:
              local_148 = CFatChain::vftable;
              if (local_140 != (void *)0x0) {
                free(local_140);
                local_140 = (void *)0x0;
              }
              local_138 = 0;
              goto LAB_180003754;
            }
            local_70[0] = '\0';
            local_70[1] = '\0';
            local_70[2] = '\0';
            local_70[3] = '\0';
            local_70[4] = '\0';
            local_70[5] = '\0';
            local_70[6] = '\0';
            local_70[7] = '\0';
            local_70[8] = '\0';
            local_70[9] = '\0';
            local_70[10] = '\0';
            local_70[0xb] = '\0';
            local_70[0xc] = '\0';
            local_70[0xd] = '\0';
            local_70[0xe] = '\0';
            local_70[0xf] = '\0';
            local_70[0x10] = '\0';
            local_70[0x11] = '\0';
            local_70[0x12] = '\0';
            local_70[0x13] = '\0';
            uVar8 = uVar15;
            uVar10 = uVar15;
            do {
              uVar19 = (uint)uVar10;
              cVar1 = (local_70 + uVar8)[(longlong)plVar2 - (longlong)local_70];
              if (cVar1 == ' ') break;
              local_70[uVar8] = cVar1;
              uVar19 = uVar19 + 1;
              uVar10 = (ulonglong)uVar19;
              uVar8 = uVar8 + 1;
            } while ((longlong)uVar8 < 8);
            if ((char)plVar2[1] == ' ') {
              if (0x13 < (ulonglong)(longlong)(int)uVar19) {
                __report_rangecheckfailure();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_70[(int)uVar19] = '\0';
            }
            else {
              local_70[(int)uVar19] = '.';
              uVar8 = uVar15;
              uVar10 = uVar15;
              do {
                uVar20 = (uint)uVar10;
                cVar1 = *(char *)(uVar8 + 8 + (longlong)plVar2);
                if (cVar1 == ' ') break;
                local_70[(longlong)(int)uVar19 + uVar8 + 1] = cVar1;
                uVar20 = uVar20 + 1;
                uVar10 = (ulonglong)uVar20;
                uVar8 = uVar8 + 1;
              } while ((longlong)uVar8 < 3);
              if (0x13 < (longlong)(int)(uVar20 + uVar19) + 1U) {
                __report_rangecheckfailure();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_70[(longlong)(int)(uVar20 + uVar19) + 1] = '\0';
            }
            if (local_70[0] == -0x1b) {
              local_70[0] = 0x23;
            }
            else {
              if (local_70[0] == '\x05') {
                local_70[0] = -0x1b;
              }
            }
            pppuVar21 = &local_148;
            uVar8 = (ulonglong)uVar17;
            uVar7 = FUN_1800027a0(param_1,(longlong)local_f8,uVar17,(longlong)pppuVar21);
            if ((int)uVar7 == 0) {
              uVar7 = FUN_180002770(param_1);
              if ((int)uVar7 == 0) goto LAB_180003734;
              pcVar9 = *(code **)(param_1 + 8);
              if (pcVar9 != (code *)0x0) {
                local_a8 = (undefined *)0x1006;
LAB_1800038b8:
                local_b0[0] = 5;
                (*pcVar9)(local_b0,*(undefined8 *)(param_1 + 0x10));
              }
LAB_1800038d1:
              FUN_180002680("Name: %s",local_70,uVar8,pppuVar21);
            }
            else if ((*(byte *)((longlong)plVar2 + 0xb) & 0x10) == 0) {
              uVar19 = ((*(int *)((longlong)plVar2 + 0x1c) + 0x1ffU & 0xfffffe00) / local_7c - 1) +
                       *(int *)(param_1 + 0x20) & -*(int *)(param_1 + 0x20);
              uVar18 = (ulonglong)uVar19;
              uVar8 = uVar15;
              pvVar14 = local_140;
              uVar10 = uVar15;
              if (0 < (int)local_138) {
                do {
                  iVar4 = (int)uVar8;
                  if ((-1 < iVar4) && (local_d0 = pvVar16, iVar4 < (int)local_138)) {
                    pvVar16 = pvVar14;
                    local_d0 = pvVar14;
                  }
                  uVar10 = (ulonglong)(uint)((int)uVar10 + *(int *)((longlong)pvVar16 + 4));
                  uVar8 = (ulonglong)(iVar4 + 1U);
                  pvVar14 = (void *)((longlong)pvVar14 + 8);
                } while ((int)(iVar4 + 1U) < (int)local_138);
              }
              if (uVar19 != (uint)uVar10) {
                if (*(code **)(param_1 + 8) != (code *)0x0) {
                  local_b0[0] = 5;
                  local_a8 = (undefined *)0x1004;
                  (**(code **)(param_1 + 8))(local_b0,*(undefined8 *)(param_1 + 0x10));
                }
                FUN_180002680("Name: %s\\%s",local_108,local_70,uVar18);
              }
            }
            else {
              uVar19 = *(uint *)(local_128 + 8);
              uVar8 = (ulonglong)uVar19;
              uVar10 = uVar15;
              if (0 < (int)uVar19) {
                do {
                  iVar4 = (int)uVar10;
                  if ((-1 < iVar4) && (iVar4 < (int)uVar19)) {
                    puVar5 = (uint *)(*(longlong *)local_128 + (longlong)iVar4 * 4);
                    local_e0 = puVar5;
                  }
                  if (*puVar5 == uVar17) {
                    pcVar9 = *(code **)(param_1 + 8);
                    if (pcVar9 == (code *)0x0) goto LAB_1800038d1;
                    local_a8 = (undefined *)0x1007;
                    goto LAB_1800038b8;
                  }
                  uVar10 = (ulonglong)(iVar4 + 1U);
                } while ((int)(iVar4 + 1U) < (int)uVar19);
              }
              local_e8 = (char *)0x0;
              lVar13 = -1;
              do {
                lVar13 = lVar13 + 1;
              } while (local_108[lVar13] != '\0');
              lVar3 = -1;
              do {
                lVar11 = lVar3;
                lVar3 = lVar11 + 1;
              } while (local_70[lVar11 + 1] != '\0');
              pcVar6 = (char *)operator_new(lVar13 + lVar11 + 3);
              local_e8 = pcVar6;
              if (pcVar6 == (char *)0x0) {
                local_148 = CFatChain::vftable;
                if (local_140 != (void *)0x0) {
                  free(local_140);
                  local_140 = (void *)0x0;
                }
                local_138 = 0;
LAB_180003a20:
                free(local_f0);
                goto LAB_180003754;
              }
              FUN_180003ca0(pcVar6,"%s\\%s",local_108,local_70);
              FUN_180003320(param_1,pcVar6);
              local_110 = (longlong *)CONCAT44(local_110._4_4_,local_118);
              MyTemplate::
              CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
              Add(local_128,(uint *)&local_110);
              DAT_180014588 = DAT_180014588 + 1;
              if (DAT_180014588 == (DAT_180014588 / 0x78) * 0x78) {
                FUN_1800031a0(param_1,*(undefined4 *)(param_1 + 0x70));
                iVar4 = *(int *)(param_1 + 0x70);
                *(int *)(param_1 + 0x70) = iVar4 + 1;
                FUN_180003260(param_1,iVar4);
              }
              FUN_180003360(param_1,local_d8,local_f8,(longlong)&local_148,local_128,pcVar6);
              MyTemplate::
              CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
              RemoveAt(local_128,*(int *)(local_128 + 8) + -1);
              if (*local_108 == '\0') {
                if (*(code **)(param_1 + 8) != (code *)0x0) {
                  local_b0[0] = 2;
                  local_a0 = 1;
                  local_a8 = &DAT_18000c8ac;
                  (**(code **)(param_1 + 8))(local_b0);
                }
                free(pcVar6);
              }
              else {
                FUN_180003320(param_1,local_108);
                free(pcVar6);
              }
            }
            local_148 = CFatChain::vftable;
            if (local_140 != (void *)0x0) {
              free(local_140);
              local_140 = (void *)0x0;
            }
            local_138 = 0;
            uVar19 = local_130;
          }
        }
      }
      local_110 = plVar2 + 4;
      uVar8 = (ulonglong)(local_12c + 1);
      goto LAB_180003661;
    }
  }
  else {
    if (0 < *(int *)(param_4 + 0x10)) {
      uVar8 = **(ulonglong **)(param_4 + 8);
      (**(code **)(*param_2 + 0x38))(param_2,local_b0);
      iVar4 = (int)(uVar8 >> 0x20);
      if (iVar4 == 0) {
        iVar4 = 4;
      }
      pcVar6 = (char *)operator_new((ulonglong)(uint)(iVar4 * local_9c));
      iVar4 = (**(code **)(*param_2 + 0x10))(param_2,pcVar6,uVar8 & 0xffffffff,1);
      if (((((iVar4 != 0) && (*pcVar6 == '.')) && (pcVar6[1] == ' ')) &&
          ((pcVar6[0x20] == '.' && (pcVar6[0x21] == '.')))) && (pcVar6[0x22] == ' ')) {
        free(pcVar6);
        goto LAB_1800034fb;
      }
      free(pcVar6);
    }
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      local_148 = (undefined **)CONCAT44(local_148._4_4_,5);
      local_140 = (void *)0x1007;
      (**(code **)(param_1 + 8))(&local_148,*(undefined8 *)(param_1 + 0x10));
    }
  }
LAB_180003754:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_178);
  return;
}




undefined * FUN_180003c90(void)

{
  return &DAT_180014580;
}




int FUN_180003ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180003c90();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* public: __cdecl MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >(class MyTemplate::CSimpleArray<struct
   tagDataRun,class MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> > const & __ptr64)
   __ptr64 */

CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_> *
__thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
          (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
           *this,CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
  *pCVar8;
  
                    /* 0x3d00  3
                       ??0?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAA@AEBV01@@Z
                        */
  iVar7 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar6 = malloc((longlong)*(int *)(param_1 + 8) * 0x18);
  *(void **)this = pvVar6;
  if (pvVar6 != (void *)0x0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 8);
    pCVar8 = this;
    if (0 < iVar5) {
      do {
        if ((-1 < iVar7) && (iVar7 < iVar5)) {
          pCVar8 = (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                    *)(*(longlong *)param_1 + (longlong)iVar7 * 0x18);
        }
        if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
          if (*(int *)(this + 0xc) == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = *(int *)(this + 8) * 2;
          }
          pvVar6 = malloc((longlong)iVar5 * 0x18);
          if (pvVar6 != (void *)0x0) {
            if (*(void **)this != (void *)0x0) {
              memcpy(pvVar6,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x18);
              free(*(void **)this);
            }
            *(int *)(this + 0xc) = iVar5;
            *(void **)this = pvVar6;
            goto LAB_180003dd2;
          }
        }
        else {
LAB_180003dd2:
          puVar1 = (undefined4 *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 0x18);
          if (puVar1 != (undefined4 *)0x0) {
            uVar2 = *(undefined4 *)(pCVar8 + 4);
            uVar3 = *(undefined4 *)(pCVar8 + 8);
            uVar4 = *(undefined4 *)(pCVar8 + 0xc);
            *puVar1 = *(undefined4 *)pCVar8;
            puVar1[1] = uVar2;
            puVar1[2] = uVar3;
            puVar1[3] = uVar4;
            *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(pCVar8 + 0x10);
          }
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
        iVar7 = iVar7 + 1;
        iVar5 = *(int *)(param_1 + 8);
      } while (iVar7 < iVar5);
    }
  }
  return this;
}




ulonglong * FUN_180003e30(ulonglong *param_1,ulonglong param_2)

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
      FUN_180005dd0();
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




undefined8 * FUN_180003f00(undefined8 *param_1)

{
  *param_1 = CCheckNTFSVolume::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  CNtfsVolume::CNtfsVolume((CNtfsVolume *)(param_1 + 3));
  CNtfsMFT::CNtfsMFT((CNtfsMFT *)(param_1 + 0xe));
  TBitmap::TBitmap((TBitmap *)(param_1 + 0x2d));
  TBitmap::TBitmap((TBitmap *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x33) = 0;
  return param_1;
}




/* public: __cdecl CNtfsRunList::CNtfsRunList(class CNtfsRunList const & __ptr64) __ptr64 */

CNtfsRunList * __thiscall CNtfsRunList::CNtfsRunList(CNtfsRunList *this,CNtfsRunList *param_1)

{
                    /* 0x3f80  6  ??0CNtfsRunList@@QEAA@AEBV0@@Z */
  MyTemplate::
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
            ((CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
              *)this,(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                      *)param_1);
  return this;
}




/* protected: __cdecl CNtfsVolume::CNtfsVolume(class CNtfsVolume & __ptr64) __ptr64 */

CNtfsVolume * __thiscall CNtfsVolume::CNtfsVolume(CNtfsVolume *this,CNtfsVolume *param_1)

{
                    /* 0x3fb0  7  ??0CNtfsVolume@@IEAA@AEAV0@@Z
                       0x3fb0  8  ??0CNtfsVolume@@IEAA@PEAV0@@Z */
  *(undefined ***)this = vftable;
  return this;
}




void FUN_180003fc0(longlong *param_1)

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




void FUN_180004030(undefined8 *param_1)

{
  *param_1 = CCheckNTFSVolume::vftable;
  TBitmap::~TBitmap((TBitmap *)(param_1 + 0x30));
  TBitmap::~TBitmap((TBitmap *)(param_1 + 0x2d));
  CNtfsMFT::~CNtfsMFT((CNtfsMFT *)(param_1 + 0xe));
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(param_1 + 3));
  return;
}




/* public: class MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> > & __ptr64 __cdecl
   MyTemplate::CSimpleArray<struct tagDataRun,class MyTemplate::CSimpleArrayEqualHelper<struct
   tagDataRun> >::operator=(class MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> > const & __ptr64) __ptr64 */

CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_> *
__thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
operator=(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
          *this,CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
  *pCVar9;
  
                    /* 0x4090  18
                       ??4?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAAEAV01@AEBV01@@Z
                        */
  iVar5 = *(int *)(this + 8);
  iVar6 = 0;
  if (iVar5 == *(int *)(param_1 + 8)) {
    if (0 < iVar5) {
      iVar7 = iVar5 + -1;
      lVar8 = (longlong)iVar7 * 0x18;
      do {
        if ((-1 < iVar7) && (iVar4 = *(int *)(this + 8), iVar7 < iVar4)) {
          if (iVar7 != iVar4 + -1) {
            memmove((void *)(*(longlong *)this + lVar8),(void *)(*(longlong *)this + lVar8 + 0x18),
                    (longlong)(iVar4 - iVar5) * 0x18);
            iVar4 = *(int *)(this + 8);
          }
          *(int *)(this + 8) = iVar4 + -1;
        }
        iVar5 = iVar5 + -1;
        iVar7 = iVar7 + -1;
        lVar8 = lVar8 + -0x18;
      } while (0 < iVar5);
    }
  }
  else {
    if (*(void **)this != (void *)0x0) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    *(undefined8 *)(this + 8) = 0;
    pvVar3 = malloc((longlong)*(int *)(param_1 + 8) * 0x18);
    *(void **)this = pvVar3;
    if (pvVar3 != (void *)0x0) {
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
    }
  }
  iVar5 = *(int *)(param_1 + 8);
  pCVar9 = this;
  if (0 < iVar5) {
    do {
      if ((-1 < iVar6) && (iVar6 < iVar5)) {
        pCVar9 = (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                  *)(*(longlong *)param_1 + (longlong)iVar6 * 0x18);
      }
      if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
        if (*(int *)(this + 0xc) == 0) {
          iVar5 = 1;
        }
        else {
          iVar5 = *(int *)(this + 8) * 2;
        }
        pvVar3 = malloc((longlong)iVar5 * 0x18);
        if (pvVar3 != (void *)0x0) {
          if (*(void **)this != (void *)0x0) {
            memcpy(pvVar3,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x18);
            free(*(void **)this);
          }
          *(int *)(this + 0xc) = iVar5;
          *(void **)this = pvVar3;
          goto LAB_1800041cf;
        }
      }
      else {
LAB_1800041cf:
        puVar1 = (undefined8 *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 0x18);
        if (puVar1 != (undefined8 *)0x0) {
          uVar2 = *(undefined8 *)(pCVar9 + 8);
          *puVar1 = *(undefined8 *)pCVar9;
          puVar1[1] = uVar2;
          puVar1[2] = *(undefined8 *)(pCVar9 + 0x10);
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = *(int *)(param_1 + 8);
    } while (iVar6 < iVar5);
  }
  return this;
}




/* public: class CNtfsMFT & __ptr64 __cdecl CNtfsMFT::operator=(class CNtfsMFT & __ptr64) __ptr64 */

CNtfsMFT * __thiscall CNtfsMFT::operator=(CNtfsMFT *this,CNtfsMFT *param_1)

{
                    /* 0x4230  26  ??4CNtfsMFT@@QEAAAEAV0@AEAV0@@Z */
  CNtfsVolume::operator=((CNtfsVolume *)(this + 8),(CNtfsVolume *)(param_1 + 8));
  MyTemplate::
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
  operator=((CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
             *)(this + 0x60),
            (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
             *)(param_1 + 0x60));
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  this[0xc0] = param_1[0xc0];
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  return this;
}




/* public: class CNtfsRunList & __ptr64 __cdecl CNtfsRunList::operator=(class CNtfsRunList const &
   __ptr64) __ptr64 */

CNtfsRunList * __thiscall CNtfsRunList::operator=(CNtfsRunList *this,CNtfsRunList *param_1)

{
                    /* 0x4350  27  ??4CNtfsRunList@@QEAAAEAV0@AEBV0@@Z */
  MyTemplate::
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
  operator=((CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
             *)this,(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                     *)param_1);
  return this;
}




/* public: struct tagDataRun & __ptr64 __cdecl MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >::operator[](int) __ptr64 */

tagDataRun * __thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
operator[](CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
           *this,int param_1)

{
  tagDataRun *in_RAX;
  
                    /* 0x4370  34
                       ??A?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAAEAUtagDataRun@@H@Z
                       0x4370  35
                       ??A?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEBAAEBUtagDataRun@@H@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    in_RAX = (tagDataRun *)(*(longlong *)this + (longlong)param_1 * 0x18);
  }
  return in_RAX;
}




/* public: class CNtfsFileRecordAttribute & __ptr64 __cdecl MyTemplate::CSimpleArray<class
   CNtfsFileRecordAttribute,class MyTemplate::CSimpleArrayEqualHelper<class
   CNtfsFileRecordAttribute> >::operator[](int) __ptr64 */

CNtfsFileRecordAttribute * __thiscall
MyTemplate::
CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
::operator[](CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
             *this,int param_1)

{
  CNtfsFileRecordAttribute *in_RAX;
  
                    /* 0x4390  36
                       ??A?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@QEAAAEAVCNtfsFileRecordAttribute@@H@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    in_RAX = (CNtfsFileRecordAttribute *)((longlong)param_1 * 0x10 + *(longlong *)this);
  }
  return in_RAX;
}




CNtfsVolume * FUN_1800043b0(CNtfsVolume *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x58,*(__uint64 *)(param_1 + -8),CNtfsVolume::~CNtfsVolume);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  CNtfsVolume::~CNtfsVolume(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180004450(undefined8 *param_1,uint param_2)

{
  *param_1 = CCheckNTFSVolume::vftable;
  TBitmap::~TBitmap((TBitmap *)(param_1 + 0x30));
  TBitmap::~TBitmap((TBitmap *)(param_1 + 0x2d));
  CNtfsMFT::~CNtfsMFT((CNtfsMFT *)(param_1 + 0xe));
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(param_1 + 3));
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* public: int __cdecl MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >::Add(struct tagDataRun const & __ptr64)
   __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::Add
          (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
           *this,tagDataRun *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
                    /* 0x44d0  45
                       ?Add@?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAHAEBUtagDataRun@@@Z
                        */
  iVar3 = *(int *)(this + 8);
  if (iVar3 == *(int *)(this + 0xc)) {
    iVar4 = 1;
    if (*(int *)(this + 0xc) != 0) {
      iVar4 = iVar3 * 2;
    }
    _Dst = malloc((longlong)iVar4 * 0x18);
    if (_Dst == (void *)0x0) {
      return 0;
    }
    if (*(void **)this != (void *)0x0) {
      memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x18);
      free(*(void **)this);
    }
    *(int *)(this + 0xc) = iVar4;
    *(void **)this = _Dst;
    iVar3 = *(int *)(this + 8);
  }
  puVar1 = (undefined8 *)(*(longlong *)this + (longlong)iVar3 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    *puVar1 = *(undefined8 *)param_1;
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return 1;
}




void FUN_1800045a0(longlong param_1,CNtfsFileRecordAttribute *param_2,__int64 param_3,
                  longlong param_4,undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  bool bVar2;
  DWORD DVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  CNtfsFileRecordAttribute *pCVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  long lVar14;
  longlong lVar15;
  size_t _Size;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  uint local_118;
  int local_114;
  uint local_10c;
  ulong local_108 [2];
  uchar *local_100 [3];
  int local_e8;
  int local_e4;
  int local_e0;
  longlong local_d8;
  int local_d0;
  CNtfsFileRecordAttribute *local_b8;
  CNtfsFileRecordAttribute *local_b0;
  __int64 local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_78;
  CNtfsFileRecordAttribute *local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_50;
  ulonglong local_40;
  
  local_78 = 0xfffffffffffffffe;
  local_40 = DAT_180014018 ^ (ulonglong)auStack_148;
  local_118 = 0;
  local_a8 = param_3;
  local_a0 = param_1;
  local_70 = param_2;
  if (param_2 == (CNtfsFileRecordAttribute *)0x0) {
    DVar3 = GetLastError();
    local_128 = CONCAT44(local_128._4_4_,DVar3);
    FUN_180002680("file: %s, line: %d, error = 0x%I64x, lasterror = 0x%x \n",
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkntfs.cpp"
                  ,0x2f6,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 8) = param_5;
    *(undefined8 *)(param_1 + 0x10) = param_6;
    local_10c = 0;
    (**(code **)(*(longlong *)param_2 + 0x48))(param_2);
    FUN_1800032a0(param_1,0,6);
    FUN_180003260(param_1,0);
    FUN_180003220(param_1,"  NTFS Volume Loading");
    local_128 = 0;
    uVar10 = 0;
    uVar5 = (ulonglong)local_10c;
    iVar4 = (**(code **)(*(longlong *)(param_1 + 0x18) + 8))();
    if (iVar4 == 0) {
      FUN_180002680("Call m_ntfsVolume.LoadNtfsVolume() failed!",uVar5,param_3,uVar10);
    }
    else {
      bVar2 = param_4 < *(longlong *)(param_1 + 0x40);
      if (bVar2) {
        local_118 = 1;
        FUN_1800032e0(param_1,0x1001,0);
      }
      uVar7 = (uint)bVar2;
      FUN_180003220(param_1,"  Checking $MFT");
      FUN_180003260(param_1,1);
      lVar9 = *(longlong *)(param_1 + 0x20);
      local_60 = *(longlong *)(param_1 + 0x28);
      iVar4 = *(int *)(param_1 + 0x30);
      if (iVar4 < 1) {
        DVar3 = GetLastError();
        local_128 = CONCAT44(local_128._4_4_,DVar3);
        FUN_180002680("file: %s, line: %d, error = 0x%I64x, lasterror = 0x%x \n",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkntfs.cpp"
                      ,0x31d,0);
      }
      else {
        lVar1 = *(long *)(param_1 + 0x38);
        if (lVar1 < 1) {
          DVar3 = GetLastError();
          local_128 = CONCAT44(local_128._4_4_,DVar3);
          FUN_180002680("file: %s, line: %d, error = 0x%I64x, lasterror = 0x%x \n",
                        "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkntfs.cpp"
                        ,800,0);
        }
        else {
          lVar14 = lVar1;
          if (lVar1 < iVar4) {
            lVar14 = iVar4;
          }
          local_114 = lVar14;
          FUN_180003e30((ulonglong *)local_100,(longlong)lVar14);
          lVar15 = (longlong)(lVar14 / iVar4);
          if (lVar9 < *(longlong *)(param_1 + 0x40) / (longlong)*(int *)(param_1 + 0x34)) {
            if (lVar9 == -1) {
              lVar9 = -1;
            }
            else {
              lVar9 = *(int *)(param_1 + 0x34) * lVar9 + *(longlong *)(param_1 + 0x48);
            }
            memset(local_100[0],0,(longlong)local_114);
            lVar12 = lVar15;
            iVar4 = (**(code **)(*(longlong *)local_70 + 0x10))(local_70,local_100[0],lVar9);
            if (iVar4 == 0) {
              FUN_180002680("Call ReadSector() failed! (%s,%d)",
                            "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkntfs.cpp"
                            ,0x334,lVar12);
              FUN_180003fc0((longlong *)local_100);
            }
            else {
              CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_d8);
              iVar4 = CNtfsFileRecord::InitFromSourceFileRecord
                                ((CNtfsFileRecord *)&local_d8,local_100[0],lVar1);
              if (iVar4 == 0) {
                FUN_1800032e0(param_1,0x1008,0);
                CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_d8);
                FUN_180003fc0((longlong *)local_100);
              }
              else {
                pCVar8 = local_b8;
                for (local_e8 = 0; local_e8 < local_d0; local_e8 = local_e8 + 1) {
                  if (-1 < local_e8) {
                    pCVar8 = (CNtfsFileRecordAttribute *)((longlong)local_e8 * 0x10 + local_d8);
                    local_b8 = pCVar8;
                  }
                  if (**(int **)pCVar8 == 0x30) {
                    if ((char)(*(int **)pCVar8)[2] != '\0') {
                      FUN_1800032e0(param_1,0x1008,0);
                      CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_d8);
                      FUN_180003fc0((longlong *)local_100);
                      goto LAB_180004d58;
                    }
                    memset(local_100[0],0,(longlong)local_114);
                    CNtfsFileRecordAttribute::GetResidentData
                              (pCVar8,local_100[0],(longlong)local_114);
                    local_50 = 0x540046004d0024;
                    if (((local_100[0][0x40] != '\x04') ||
                        (*(longlong *)(local_100[0] + 0x42) != 0x540046004d0024)) ||
                       (*(short *)(local_100[0] + 0x4a) != 0)) {
                      FUN_1800032e0(param_1,0x1008,0);
                      CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_d8);
                      FUN_180003fc0((longlong *)local_100);
                      goto LAB_180004d58;
                    }
                    break;
                  }
                }
                FUN_180003220(param_1,"  Checking $MFTMirr");
                FUN_180003260(param_1,2);
                uVar6 = (uint)bVar2;
                if (local_60 < *(longlong *)(param_1 + 0x40) / (longlong)*(int *)(param_1 + 0x34)) {
                  if (local_60 == -1) {
                    lVar9 = -1;
                  }
                  else {
                    lVar9 = *(int *)(param_1 + 0x34) * local_60 + *(longlong *)(param_1 + 0x48);
                  }
                  memset(local_100[0],0,(longlong)local_114);
                  pCVar8 = local_70;
                  iVar4 = (**(code **)(*(longlong *)local_70 + 0x10))(local_70,local_100[0],lVar9);
                  if (iVar4 == 0) {
                    uVar7 = uVar6 + 1;
                    local_118 = uVar7;
                    FUN_180002680("Call ReadSector() failed! (%s,%d)",
                                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkntfs.cpp"
                                  ,0x378,lVar15);
                  }
                  else {
                    CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_98);
                    iVar4 = CNtfsFileRecord::InitFromSourceFileRecord
                                      ((CNtfsFileRecord *)&local_98,local_100[0],lVar1);
                    if (iVar4 == 0) {
                      uVar7 = uVar6 + 1;
                      local_118 = uVar7;
                      FUN_1800032e0(param_1,0x1009,0);
                    }
                    pCVar8 = local_b0;
                    for (local_e4 = 0; local_e4 < local_90; local_e4 = local_e4 + 1) {
                      if (-1 < local_e4) {
                        pCVar8 = (CNtfsFileRecordAttribute *)((longlong)local_e4 * 0x10 + local_98);
                        local_b0 = pCVar8;
                      }
                      if (**(int **)pCVar8 == 0x30) {
                        if ((char)(*(int **)pCVar8)[2] == '\0') {
                          _Size = (size_t)local_114;
                          memset(local_100[0],0,_Size);
                          CNtfsFileRecordAttribute::GetResidentData(pCVar8,local_100[0],_Size);
                          local_60 = 0x540046004d0024;
                          if (((local_100[0][0x40] == '\x04') &&
                              (*(longlong *)(local_100[0] + 0x42) == 0x540046004d0024)) &&
                             (*(short *)(local_100[0] + 0x4a) == 0)) break;
                        }
                        uVar7 = uVar7 + 1;
                        local_118 = uVar7;
                        FUN_1800032e0(param_1,0x1009,0);
                        break;
                      }
                    }
                    CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_98);
                    pCVar8 = local_70;
                  }
                }
                else {
                  uVar7 = uVar6 + 1;
                  local_118 = uVar7;
                  FUN_1800032e0(param_1,0x1009,0);
                  pCVar8 = local_70;
                }
                FUN_180003260(param_1,3);
                uVar13 = 0xffffffffffffffff;
                uVar10 = 0;
                lVar9 = param_1 + 0x18;
                iVar4 = (**(code **)(*(longlong *)(param_1 + 0x70) + 8))();
                if (iVar4 == 0) {
                  FUN_180002680("Call m_ntfsMft.Init() failed!",lVar9,uVar10,uVar13);
                  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_d8);
                  FUN_180003fc0((longlong *)local_100);
                }
                else {
                  local_108[0] = 0;
                  local_70 = (CNtfsFileRecordAttribute *)0x30000000102;
                  local_68 = 0x301;
                  FUN_180003220(param_1,"  Checking NTFS Version");
                  CNTFSLib::GetNTFSVersion(local_10c,local_a8,local_108);
                  for (local_e0 = 0; (ulonglong)(longlong)local_e0 < 3; local_e0 = local_e0 + 1) {
                    if (*(ulong *)((longlong)&local_70 + (longlong)local_e0 * 4) == local_108[0])
                    goto LAB_180004c1e;
                  }
                  local_118 = uVar7 + 1;
                  FUN_1800032e0(param_1,0x100a,local_108[0]);
LAB_180004c1e:
                  FUN_180003260(param_1,4);
                  FUN_180003220(param_1,"  Checking $Bitmap");
                  iVar4 = FUN_180005590(param_1,pCVar8,(int *)&local_118,uVar13);
                  if (iVar4 == 0) {
                    FUN_180002680("Call LoadVolumeBitmap() failed!(%s,%d)",
                                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkntfs.cpp"
                                  ,0x3d9,uVar13);
                    CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_d8);
                    FUN_180003fc0((longlong *)local_100);
                  }
                  else {
                    FUN_180003260(param_1,5);
                    puVar11 = &local_118;
                    iVar4 = FUN_180004d80(param_1,pCVar8,(int *)puVar11);
                    if (iVar4 == 0) {
                      FUN_180002680("The return value of CollectTheLocationOfData() is FALSE!!!",
                                    pCVar8,puVar11,uVar13);
                      CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_d8);
                      FUN_180003fc0((longlong *)local_100);
                    }
                    else if (*(int *)(param_1 + 0x198) == 0) {
                      FUN_180003260(param_1,6);
                      FUN_180003220(param_1,"  Checking Finished");
                      CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_d8);
                      FUN_180003fc0((longlong *)local_100);
                    }
                    else {
                      DVar3 = GetLastError();
                      local_128 = CONCAT44(local_128._4_4_,DVar3);
                      FUN_180002680("file: %s, line: %d, error = 0x%I64x, lasterror = 0x%x \n",
                                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkntfs.cpp"
                                    ,0x3e5,0);
                      CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_d8);
                      FUN_180003fc0((longlong *)local_100);
                    }
                  }
                }
              }
            }
          }
          else {
            FUN_1800032e0(param_1,0x1008,0);
            FUN_180003fc0((longlong *)local_100);
          }
        }
      }
    }
  }
LAB_180004d58:
  __security_check_cookie(local_40 ^ (ulonglong)auStack_148);
  return;
}




void FUN_180004d80(longlong param_1,CNtfsFileRecordAttribute *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  __int64 _Var4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  TBitmap *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  CNtfsFileRecordAttribute *this;
  undefined1 auStack_108 [32];
  uint local_e8;
  int local_e4;
  undefined4 local_e0 [2];
  int local_d8;
  int local_d4;
  int local_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  int local_a8;
  TBitmap local_90 [24];
  undefined8 local_78;
  tagFILERECORD local_70 [22];
  byte local_5a;
  ulonglong local_40;
  
  local_78 = 0xfffffffffffffffe;
  local_40 = DAT_180014018 ^ (ulonglong)auStack_108;
  lVar10 = (longlong)*(int *)(param_1 + 0x34);
  uVar3 = *(longlong *)(param_1 + 0x40) / lVar10 + 7;
  uVar3 = ((longlong)
           ((ulonglong)((uint)((longlong)uVar3 >> 0x3f) & 7) + (uVar3 & 0xfffffffffffffff8)) >> 3) +
          7;
  piVar11 = param_3;
  iVar1 = TBitmap::CreateBitmap((TBitmap *)(param_1 + 0x180),(uVar3 & 0xfffffffffffffff8) * 8);
  if (iVar1 == 0) {
    FUN_180002680("Call m_ntfsNewBitmap.CreateBitmap() failed!(size:%lu)",uVar3 & 0xfffffff8,piVar11
                  ,lVar10);
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x40) / (longlong)*(int *)(param_1 + 0x34);
    _Var4 = TBitmap::GetMaxBitIndex((TBitmap *)(param_1 + 0x180));
    if (lVar10 <= _Var4) {
      do {
        TBitmap::SetBit((TBitmap *)(param_1 + 0x180),lVar10,1,1);
        lVar10 = lVar10 + 1;
        _Var4 = TBitmap::GetMaxBitIndex((TBitmap *)(param_1 + 0x180));
      } while (lVar10 <= _Var4);
    }
    CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_b0);
    CNtfsRunList::CNtfsRunList((CNtfsRunList *)&local_c0);
    _Var4 = CNtfsMFT::GetFileRecordCount((CNtfsMFT *)(param_1 + 0x70));
    uVar3 = 0;
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      local_e0[0] = 3;
      local_d8 = 0;
      local_d4 = (int)_Var4 + -1;
      (**(code **)(param_1 + 8))(local_e0,*(undefined8 *)(param_1 + 0x10));
    }
    TBitmap::TBitmap(local_90);
    pTVar8 = local_90;
    piVar11 = param_3;
    uVar5 = FUN_180005900(param_1,param_2,pTVar8,param_3);
    if ((int)uVar5 == 0) {
      FUN_180002680("Call Read_MFT_Bitmap() failed!",param_2,pTVar8,piVar11);
    }
    else {
      local_e8 = 0;
      _Var4 = CNtfsMFT::GetFileRecordCount((CNtfsMFT *)(param_1 + 0x70));
      if (0 < _Var4) {
        this = (CNtfsFileRecordAttribute *)CONCAT44(uStack_c4,local_c8);
        plVar6 = (longlong *)CONCAT44(uStack_c4,local_c8);
        do {
          iVar1 = (int)uVar3;
          if (*(code **)(param_1 + 8) == (code *)0x0) {
LAB_180004f44:
            iVar2 = 1;
          }
          else {
            local_e0[0] = 4;
            local_d8 = iVar1;
            (**(code **)(param_1 + 8))(local_e0,*(undefined8 *)(param_1 + 0x10));
            if (*(code **)(param_1 + 8) == (code *)0x0) goto LAB_180004f44;
            local_e0[0] = 6;
            iVar2 = (**(code **)(param_1 + 8))(local_e0,*(undefined8 *)(param_1 + 0x10));
          }
          *(uint *)(param_1 + 0x198) = (uint)(iVar2 == 0);
          if (iVar2 == 0) break;
          iVar2 = TBitmap::GetBit(local_90,(longlong)iVar1);
          if (iVar2 != 0) {
            plVar9 = &local_b0;
            iVar2 = (**(code **)(*(longlong *)(param_1 + 0x70) + 0x10))
                              ((longlong *)(param_1 + 0x70),(longlong)iVar1);
            if (iVar2 == 0) {
              *param_3 = *param_3 + 1;
              FUN_180002680("ReadFileRecord failed(Index:%lu)",uVar3,plVar9,piVar11);
            }
            else {
              iVar2 = CNtfsFileRecord::GetFileRecordHeader((CNtfsFileRecord *)&local_b0,local_70);
              if (iVar2 == 0) {
                *param_3 = *param_3 + 1;
                FUN_180002680("Call fileRecord.GetFileRecordHeader() failed(Index:%lu)",uVar3,plVar9
                              ,piVar11);
              }
              else if (((local_5a & 1) != 0) && (local_c8 = 0, 0 < local_a8)) {
                do {
                  if ((-1 < local_c8) && (local_c8 < local_a8)) {
                    this = (CNtfsFileRecordAttribute *)((longlong)local_c8 * 0x10 + local_b0);
                  }
                  if (*(char *)(*(longlong *)this + 8) != '\0') {
                    iVar1 = CNtfsFileRecordAttribute::GetDataRunList(this,(CNtfsRunList *)&local_c0)
                    ;
                    if (iVar1 == 0) {
                      *param_3 = *param_3 + 1;
                      FUN_180002680("Call GetDataRunList() for attribute:0x%x failed!(Index:%lu)",
                                    (ulonglong)**(uint **)this,uVar3,piVar11);
                    }
                    else {
                      local_e4 = 0;
                      iVar1 = local_b8;
                      if (0 < local_b8) {
                        do {
                          if ((-1 < local_e4) && (local_e4 < iVar1)) {
                            plVar6 = (longlong *)(local_c0 + (longlong)local_e4 * 0x18);
                          }
                          if ((*plVar6 != -1) && (iVar2 = 0, 0 < plVar6[2])) {
                            lVar10 = 0;
                            do {
                              iVar1 = TBitmap::GetBit((TBitmap *)(param_1 + 0x168),*plVar6 + lVar10)
                              ;
                              if (iVar1 == 0) {
                                *param_3 = *param_3 + 1;
                                FUN_180002680("The location of attribute 0x%x of file record%lu is illegal!!!! Bitmap mark it as free!!!(LCN:%lu)"
                                              ,(ulonglong)**(uint **)this,(ulonglong)local_e8,
                                              (ulonglong)(uint)((int)*plVar6 + iVar2));
                                if (*(code **)(param_1 + 8) != (code *)0x0) {
                                  local_e0[0] = 5;
                                  local_d8 = 0x1003;
                                  local_d4 = (int)*plVar6 + iVar2;
                                  (**(code **)(param_1 + 8))
                                            (local_e0,*(undefined8 *)(param_1 + 0x10));
                                }
                              }
                              iVar1 = TBitmap::GetBit((TBitmap *)(param_1 + 0x180),*plVar6 + lVar10)
                              ;
                              if (iVar1 != 0) {
                                *param_3 = *param_3 + 1;
                                FUN_180002680("The location of attribute 0x%x of file record%lu is illegal!!!! Please use \'Chkdsk\' first!!!(LCN:%lu)"
                                              ,(ulonglong)**(uint **)this,(ulonglong)local_e8,
                                              (ulonglong)(uint)((int)*plVar6 + iVar2));
                                if (*(code **)(param_1 + 8) != (code *)0x0) {
                                  local_e0[0] = 5;
                                  local_d8 = 0x1002;
                                  local_d4 = (int)*plVar6 + iVar2;
                                  (**(code **)(param_1 + 8))
                                            (local_e0,*(undefined8 *)(param_1 + 0x10));
                                }
                              }
                              piVar11 = (int *)0x1;
                              TBitmap::SetBit((TBitmap *)(param_1 + 0x180),*plVar6 + lVar10,1,1);
                              iVar2 = iVar2 + 1;
                              lVar10 = (longlong)iVar2;
                              iVar1 = local_b8;
                            } while (lVar10 < plVar6[2]);
                          }
                          local_e4 = local_e4 + 1;
                        } while (local_e4 < iVar1);
                        uVar3 = (ulonglong)local_e8;
                      }
                    }
                  }
                  iVar1 = (int)uVar3;
                  local_c8 = local_c8 + 1;
                } while (local_c8 < local_a8);
              }
            }
          }
          uVar7 = iVar1 + 1;
          uVar3 = (ulonglong)uVar7;
          local_e8 = uVar7;
          _Var4 = CNtfsMFT::GetFileRecordCount((CNtfsMFT *)(param_1 + 0x70));
        } while ((int)uVar7 < _Var4);
      }
    }
    TBitmap::~TBitmap(local_90);
    CNtfsRunList::~CNtfsRunList((CNtfsRunList *)&local_c0);
    CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_b0);
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStack_108);
  return;
}




/* public: long __cdecl CNtfsFileRecordAttribute::GetAttributeHeaderSize(void) __ptr64 */

long __thiscall CNtfsFileRecordAttribute::GetAttributeHeaderSize(CNtfsFileRecordAttribute *this)

{
  longlong lVar1;
  
                    /* 0x5210  49  ?GetAttributeHeaderSize@CNtfsFileRecordAttribute@@QEAAJXZ */
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 8) == '\0') {
    return (long)*(ushort *)(lVar1 + 0x14);
  }
  return (long)*(ushort *)(lVar1 + 0x20);
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetAttributeLength(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetAttributeLength(CNtfsFileRecordAttribute *this)

{
                    /* 0x5230  50  ?GetAttributeLength@CNtfsFileRecordAttribute@@QEBA_JXZ */
  return (ulonglong)*(uint *)(*(longlong *)this + 4);
}




/* public: long __cdecl CNtfsVolume::GetBytesPerFileRecord(void)const __ptr64 */

long __thiscall CNtfsVolume::GetBytesPerFileRecord(CNtfsVolume *this)

{
                    /* 0x5240  53  ?GetBytesPerFileRecord@CNtfsVolume@@QEBAJXZ */
  return *(long *)(this + 0x20);
}




/* public: long __cdecl CNtfsVolume::GetBytesPerSector(void)const __ptr64 */

long __thiscall CNtfsVolume::GetBytesPerSector(CNtfsVolume *this)

{
                    /* 0x5250  54  ?GetBytesPerSector@CNtfsVolume@@QEBAJXZ */
  return *(long *)(this + 0x18);
}




/* public: unsigned short __cdecl CNtfsFileRecordAttribute::GetCompressionUnitSize(void)const
   __ptr64 */

ushort __thiscall CNtfsFileRecordAttribute::GetCompressionUnitSize(CNtfsFileRecordAttribute *this)

{
                    /* 0x5260  55  ?GetCompressionUnitSize@CNtfsFileRecordAttribute@@QEBAGXZ */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  return *(ushort *)(*(longlong *)this + 0x22);
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetDataAllocatedLength(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetDataAllocatedLength(CNtfsFileRecordAttribute *this)

{
  longlong lVar1;
  
                    /* 0x5280  56  ?GetDataAllocatedLength@CNtfsFileRecordAttribute@@QEBA_JXZ */
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 8) == '\0') {
    return (ulonglong)*(uint *)(lVar1 + 0x10);
  }
  return *(__int64 *)(lVar1 + 0x28);
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetDataInitiatedLength(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetDataInitiatedLength(CNtfsFileRecordAttribute *this)

{
  longlong lVar1;
  
                    /* 0x52a0  57  ?GetDataInitiatedLength@CNtfsFileRecordAttribute@@QEBA_JXZ */
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 8) == '\0') {
    return (ulonglong)*(uint *)(lVar1 + 0x10);
  }
  return *(__int64 *)(lVar1 + 0x38);
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetDataRealLength(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetDataRealLength(CNtfsFileRecordAttribute *this)

{
  longlong lVar1;
  
                    /* 0x52c0  58  ?GetDataRealLength@CNtfsFileRecordAttribute@@QEBA_JXZ */
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 8) == '\0') {
    return (ulonglong)*(uint *)(lVar1 + 0x10);
  }
  return *(__int64 *)(lVar1 + 0x30);
}




/* public: unsigned short __cdecl CNtfsFileRecordAttribute::GetFlags(void)const __ptr64 */

ushort __thiscall CNtfsFileRecordAttribute::GetFlags(CNtfsFileRecordAttribute *this)

{
                    /* 0x52e0  59  ?GetFlags@CNtfsFileRecordAttribute@@QEBAGXZ */
  return *(ushort *)(*(longlong *)this + 0xc);
}




/* public: class CHardDriveIO & __ptr64 __cdecl CNtfsMFT::GetHardDriveIO(void) __ptr64 */

CHardDriveIO * __thiscall CNtfsMFT::GetHardDriveIO(CNtfsMFT *this)

{
                    /* 0x52f0  60  ?GetHardDriveIO@CNtfsMFT@@QEAAAEAVCHardDriveIO@@XZ */
  return (CHardDriveIO *)(this + 0x78);
}




/* public: long __cdecl CNtfsVolume::GetHardDriveNumber(void)const __ptr64 */

long __thiscall CNtfsVolume::GetHardDriveNumber(CNtfsVolume *this)

{
                    /* 0x5300  61  ?GetHardDriveNumber@CNtfsVolume@@QEBAJXZ */
  return *(long *)(this + 0x38);
}




/* public: unsigned long __cdecl CNtfsFileRecordAttribute::GetID(void)const __ptr64 */

ulong __thiscall CNtfsFileRecordAttribute::GetID(CNtfsFileRecordAttribute *this)

{
                    /* 0x5310  62  ?GetID@CNtfsFileRecordAttribute@@QEBAKXZ */
  return (ulong)*(ushort *)(*(longlong *)this + 0xe);
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetLastVCN(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetLastVCN(CNtfsFileRecordAttribute *this)

{
                    /* 0x5320  65  ?GetLastVCN@CNtfsFileRecordAttribute@@QEBA_JXZ */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return -1;
  }
  return *(__int64 *)(*(longlong *)this + 0x18);
}




/* public: struct ILdmVolume * __ptr64 __cdecl CNtfsVolume::GetLdmVolumeAsDisk(void)const __ptr64 */

ILdmVolume * __thiscall CNtfsVolume::GetLdmVolumeAsDisk(CNtfsVolume *this)

{
                    /* 0x5340  66  ?GetLdmVolumeAsDisk@CNtfsVolume@@QEBAPEAUILdmVolume@@XZ */
  return *(ILdmVolume **)(this + 0x48);
}




/* public: __int64 __cdecl CNtfsVolume::GetMftLcnAddress(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetMftLcnAddress(CNtfsVolume *this)

{
                    /* 0x5350  67  ?GetMftLcnAddress@CNtfsVolume@@QEBA_JXZ */
  return *(__int64 *)(this + 8);
}




/* public: __int64 __cdecl CNtfsVolume::GetMftMirrorLcnAddress(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetMftMirrorLcnAddress(CNtfsVolume *this)

{
                    /* 0x5360  68  ?GetMftMirrorLcnAddress@CNtfsVolume@@QEBA_JXZ */
  return *(__int64 *)(this + 0x10);
}




/* public: int __cdecl CNtfsFileRecordAttribute::GetName(unsigned short * __ptr64,long)const __ptr64
    */

int __thiscall
CNtfsFileRecordAttribute::GetName(CNtfsFileRecordAttribute *this,ushort *param_1,long param_2)

{
  longlong lVar1;
  
                    /* 0x5370  69  ?GetName@CNtfsFileRecordAttribute@@QEBAHPEAGJ@Z */
  if ((*(byte *)(*(longlong *)this + 9) != 0) &&
     ((int)((uint)*(byte *)(*(longlong *)this + 9) * 2) <= param_2)) {
    memset(param_1,0,(longlong)param_2);
    lVar1 = *(longlong *)this;
    memcpy(param_1,(void *)((ulonglong)*(ushort *)(lVar1 + 10) + lVar1),
           (ulonglong)*(byte *)(lVar1 + 9) * 2);
    return 1;
  }
  return 0;
}




/* public: long __cdecl CNtfsFileRecordAttribute::GetNameLength(void)const __ptr64 */

long __thiscall CNtfsFileRecordAttribute::GetNameLength(CNtfsFileRecordAttribute *this)

{
                    /* 0x53e0  70  ?GetNameLength@CNtfsFileRecordAttribute@@QEBAJXZ
                       0x53e0  94  ?IsNamed@CNtfsFileRecordAttribute@@QEBAHXZ */
  return (long)*(byte *)(*(longlong *)this + 9);
}




/* public: __int64 __cdecl CNtfsVolume::GetSectorAddressFromLCN(__int64)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetSectorAddressFromLCN(CNtfsVolume *this,__int64 param_1)

{
                    /* 0x53f0  71  ?GetSectorAddressFromLCN@CNtfsVolume@@QEBA_J_J@Z */
  if (param_1 == -1) {
    return -1;
  }
  return *(int *)(this + 0x1c) * param_1 + *(longlong *)(this + 0x30);
}




/* public: long __cdecl CNtfsVolume::GetSectorsPerCluster(void)const __ptr64 */

long __thiscall CNtfsVolume::GetSectorsPerCluster(CNtfsVolume *this)

{
                    /* 0x5410  72  ?GetSectorsPerCluster@CNtfsVolume@@QEBAJXZ */
  return *(long *)(this + 0x1c);
}




/* public: long __cdecl CNtfsVolume::GetSectorsPerIndexRecord(void)const __ptr64 */

long __thiscall CNtfsVolume::GetSectorsPerIndexRecord(CNtfsVolume *this)

{
                    /* 0x5420  73  ?GetSectorsPerIndexRecord@CNtfsVolume@@QEBAJXZ */
  return *(long *)(this + 0x24);
}




/* public: unsigned char * __ptr64 __cdecl CNtfsFileRecord::GetSourceFileRecord(long & __ptr64)
   __ptr64 */

uchar * __thiscall CNtfsFileRecord::GetSourceFileRecord(CNtfsFileRecord *this,long *param_1)

{
                    /* 0x5430  78  ?GetSourceFileRecord@CNtfsFileRecord@@QEAAPEAEAEAJ@Z */
  *param_1 = *(long *)(this + 0x18);
  return *(uchar **)(this + 0x10);
}




/* public: unsigned char * __ptr64 __cdecl
   CNtfsFileRecordAttribute::GetSourceFileRecordAttribute(long & __ptr64)const __ptr64 */

uchar * __thiscall
CNtfsFileRecordAttribute::GetSourceFileRecordAttribute(CNtfsFileRecordAttribute *this,long *param_1)

{
                    /* 0x5440  79
                       ?GetSourceFileRecordAttribute@CNtfsFileRecordAttribute@@QEBAPEAEAEAJ@Z */
  *param_1 = *(long *)(this + 8);
  return *(uchar **)this;
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetStartVCN(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetStartVCN(CNtfsFileRecordAttribute *this)

{
                    /* 0x5450  80  ?GetStartVCN@CNtfsFileRecordAttribute@@QEBA_JXZ */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return -1;
  }
  return *(__int64 *)(*(longlong *)this + 0x10);
}




/* public: unsigned long __cdecl CNtfsFileRecordAttribute::GetType(void)const __ptr64 */

ulong __thiscall CNtfsFileRecordAttribute::GetType(CNtfsFileRecordAttribute *this)

{
                    /* 0x5470  81  ?GetType@CNtfsFileRecordAttribute@@QEBAKXZ */
  return **(ulong **)this;
}




/* public: __int64 __cdecl CNtfsVolume::GetVolumeClusterCount(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetVolumeClusterCount(CNtfsVolume *this)

{
                    /* 0x5480  82  ?GetVolumeClusterCount@CNtfsVolume@@QEBA_JXZ */
  return *(longlong *)(this + 0x28) / (longlong)*(int *)(this + 0x1c);
}




/* public: __int64 __cdecl CNtfsVolume::GetVolumeNewStartSectorNumber(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetVolumeNewStartSectorNumber(CNtfsVolume *this)

{
                    /* 0x5490  83  ?GetVolumeNewStartSectorNumber@CNtfsVolume@@QEBA_JXZ */
  return *(__int64 *)(this + 0x50);
}




/* public: __int64 __cdecl CNtfsVolume::GetVolumeSerialNumber(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetVolumeSerialNumber(CNtfsVolume *this)

{
                    /* 0x54a0  84  ?GetVolumeSerialNumber@CNtfsVolume@@QEBA_JXZ */
  return *(__int64 *)(this + 0x40);
}




/* public: __int64 __cdecl CNtfsVolume::GetVolumeStartSectorNumber(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetVolumeStartSectorNumber(CNtfsVolume *this)

{
                    /* 0x54b0  85  ?GetVolumeStartSectorNumber@CNtfsVolume@@QEBA_JXZ */
  return *(__int64 *)(this + 0x30);
}




/* public: __int64 __cdecl CNtfsVolume::GetVolumeTotalSectorNumber(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetVolumeTotalSectorNumber(CNtfsVolume *this)

{
                    /* 0x54c0  86  ?GetVolumeTotalSectorNumber@CNtfsVolume@@QEBA_JXZ */
  return *(__int64 *)(this + 0x28);
}




/* public: int __cdecl CNtfsMFT::Has0X20(void) __ptr64 */

int __thiscall CNtfsMFT::Has0X20(CNtfsMFT *this)

{
                    /* 0x54d0  87  ?Has0X20@CNtfsMFT@@QEAAHXZ */
  return *(int *)(this + 0xec);
}




/* public: void __cdecl MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >::InternalSetAtIndex(int,struct
   tagDataRun const & __ptr64) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
InternalSetAtIndex(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                   *this,int param_1,tagDataRun *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* 0x54e0  90
                       ?InternalSetAtIndex@?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAXHAEBUtagDataRun@@@Z
                        */
  puVar1 = (undefined8 *)(*(longlong *)this + (longlong)param_1 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    *puVar1 = *(undefined8 *)param_2;
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}




/* public: int __cdecl CNtfsFileRecordAttribute::IsCompressed(void)const __ptr64 */

int __thiscall CNtfsFileRecordAttribute::IsCompressed(CNtfsFileRecordAttribute *this)

{
                    /* 0x5530  92  ?IsCompressed@CNtfsFileRecordAttribute@@QEBAHXZ */
  if ((*(char *)(*(longlong *)this + 8) != '\0') && ((*(byte *)(*(longlong *)this + 0xc) & 1) != 0))
  {
    return 1;
  }
  return 0;
}




/* public: int __cdecl CNtfsMFT::IsInitiated(void) __ptr64 */

int __thiscall CNtfsMFT::IsInitiated(CNtfsMFT *this)

{
                    /* 0x5550  93  ?IsInitiated@CNtfsMFT@@QEAAHXZ */
  return *(int *)(this + 0xd8);
}




/* public: int __cdecl CNtfsFileRecordAttribute::IsResident(void)const __ptr64 */

int __thiscall CNtfsFileRecordAttribute::IsResident(CNtfsFileRecordAttribute *this)

{
                    /* 0x5560  95  ?IsResident@CNtfsFileRecordAttribute@@QEBAHXZ */
  return (int)(*(char *)(*(longlong *)this + 8) == '\0');
}




/* public: int __cdecl CNtfsFileRecordAttribute::IsSparseFile(void)const __ptr64 */

int __thiscall CNtfsFileRecordAttribute::IsSparseFile(CNtfsFileRecordAttribute *this)

{
                    /* 0x5570  96  ?IsSparseFile@CNtfsFileRecordAttribute@@QEBAHXZ */
  if ((*(char *)(*(longlong *)this + 8) != '\0') && (*(short *)(*(longlong *)this + 0xc) < 0)) {
    return 1;
  }
  return 0;
}




undefined4
FUN_180005590(longlong param_1,CNtfsFileRecordAttribute *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  uchar *_Dst_00;
  int iVar4;
  undefined8 uVar5;
  CNtfsFileRecordAttribute *pCVar6;
  ulonglong uVar7;
  __uint64 _Size;
  TBitmap *this;
  int iVar8;
  CNtfsFileRecordAttribute *pCVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 uVar12;
  int iVar13;
  int *local_90 [2];
  longlong local_80;
  int local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  longlong local_58;
  int local_50;
  
  if (param_2 == (CNtfsFileRecordAttribute *)0x0) {
    uVar12 = 0;
  }
  else {
    CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_58);
    CNtfsRunList::CNtfsRunList((CNtfsRunList *)&local_80);
    plVar10 = &local_58;
    uVar5 = 6;
    iVar1 = (**(code **)(*(longlong *)(param_1 + 0x70) + 0x10))();
    if (iVar1 == 0) {
      FUN_180002680("Call m_ntfsMft.ReadFileRecord(FILE_Bitmap,fileRecord) in CCheckNTFSVolume::LoadVolumeBitmap() failed!"
                    ,uVar5,plVar10,param_4);
      uVar12 = 0;
    }
    else {
      iVar1 = CNtfsFileRecord::IsAttributeListPresent((CNtfsFileRecord *)&local_58);
      if (iVar1 == 0) {
        CNtfsFileRecordAttribute::CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)local_90);
        uVar12 = 0;
        iVar1 = 0;
        pCVar9 = param_2;
        if (0 < local_50) {
          do {
            if ((-1 < iVar1) && (iVar1 < local_50)) {
              pCVar9 = (CNtfsFileRecordAttribute *)((longlong)iVar1 * 0x10 + local_58);
            }
            pCVar6 = pCVar9;
            CNtfsFileRecordAttribute::operator=((CNtfsFileRecordAttribute *)local_90,pCVar9);
            if ((*local_90[0] == 0x80) && (*(char *)((longlong)local_90[0] + 9) == '\0')) {
              if ((char)local_90[0][2] == '\0') {
                FUN_180002680("The $Bitmap::$DATA stream is resident! Currently, we do not support it!"
                              ,pCVar6,plVar10,param_4);
                goto LAB_1800058c2;
              }
              iVar1 = CNtfsFileRecordAttribute::GetDataRunList
                                ((CNtfsFileRecordAttribute *)local_90,(CNtfsRunList *)&local_80);
              if (iVar1 == 0) {
                FUN_180002680("Call attribute.GetDataRunList() in CCheckNTFSVolume::LoadVolumeBitmap() failed!(Line:%d)"
                              ,0x130,plVar10,param_4);
                goto LAB_1800058c2;
              }
              break;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_50);
        }
        if ((char)local_90[0][2] == '\0') {
          _Size = (__uint64)(uint)local_90[0][4];
        }
        else {
          _Size = *(__uint64 *)(local_90[0] + 10);
        }
        _Dst = operator_new(_Size);
        if (_Dst == (void *)0x0) {
          FUN_180002680("allocate memory failed!(%s,%d)",
                        "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkntfs.cpp"
                        ,0x140,param_4);
          uVar12 = 0;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x34);
          iVar13 = 0;
          memset(_Dst,0,_Size);
          if ((char)local_90[0][2] == '\0') {
            uVar7 = (ulonglong)(uint)local_90[0][4];
          }
          else {
            uVar7 = *(ulonglong *)(local_90[0] + 0xc);
          }
          lVar3 = *(longlong *)(param_1 + 0x40) / (longlong)*(int *)(param_1 + 0x34);
          if (((longlong)(uVar7 * 8) < lVar3) ||
             ((longlong)(*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30) * 8) <=
              (longlong)(uVar7 * 8 - lVar3))) {
            *param_3 = *param_3 + 1;
            if (*(code **)(param_1 + 8) != (code *)0x0) {
              local_70[0] = 5;
              local_68 = 0x100b;
              (**(code **)(param_1 + 8))(local_70,*(undefined8 *)(param_1 + 0x10));
            }
          }
          iVar8 = 0;
          pCVar9 = param_2;
          iVar4 = local_78;
          if (0 < local_78) {
            do {
              if ((-1 < iVar8) && (iVar8 < iVar4)) {
                pCVar9 = (CNtfsFileRecordAttribute *)(local_80 + (longlong)iVar8 * 0x18);
              }
              lVar3 = *(longlong *)(pCVar9 + 0x10) * (longlong)iVar1;
              if ((*(longlong *)pCVar9 != -1) &&
                 (lVar11 = lVar3,
                 iVar2 = (**(code **)(*(longlong *)param_2 + 0x10))
                                   (param_2,(longlong)iVar13 + (longlong)_Dst,
                                    (longlong)*(int *)(param_1 + 0x34) * *(longlong *)pCVar9 +
                                    *(longlong *)(param_1 + 0x48)), iVar4 = local_78, iVar2 == 0)) {
                free(_Dst);
                FUN_180002680("Call ReadSector() failed!(%s,%d)",
                              "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkntfs.cpp"
                              ,0x168,lVar11);
                goto LAB_1800058c2;
              }
              iVar8 = iVar8 + 1;
              iVar13 = iVar13 + (int)lVar3 * *(int *)(param_1 + 0x30);
            } while (iVar8 < iVar4);
          }
          if ((char)local_90[0][2] == '\0') {
            uVar7 = (ulonglong)(uint)local_90[0][4];
          }
          else {
            uVar7 = *(ulonglong *)(local_90[0] + 0xc);
          }
          this = (TBitmap *)(param_1 + 0x168);
          iVar1 = TBitmap::CreateBitmap(this,uVar7 * 8);
          if (iVar1 == 0) {
            free(_Dst);
            if ((char)local_90[0][2] == '\0') {
              iVar1 = local_90[0][4];
            }
            else {
              iVar1 = (int)*(undefined8 *)(local_90[0] + 0xc);
            }
            FUN_180002680("Call CreateBitmap(%lu) failed!(%s,%d)",(ulonglong)(uint)(iVar1 * 8),
                          "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkntfs.cpp"
                          ,0x172);
          }
          else {
            iVar1 = TBitmap::GetBitmapSize(this);
            _Dst_00 = TBitmap::GetBitmapData(this);
            memcpy(_Dst_00,_Dst,(longlong)iVar1);
            free(_Dst);
            uVar12 = 1;
          }
        }
LAB_1800058c2:
        CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)local_90);
      }
      else {
        FUN_180002680("The $Bitmap file have 0x20 attribute! Currently, we do not support it!",uVar5
                      ,plVar10,param_4);
        uVar12 = 0;
      }
    }
    CNtfsRunList::~CNtfsRunList((CNtfsRunList *)&local_80);
    CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_58);
  }
  return uVar12;
}




ulonglong FUN_180005900(longlong param_1,CNtfsFileRecordAttribute *param_2,TBitmap *param_3,
                       int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uchar *puVar7;
  __int64 _Var8;
  int *piVar9;
  ulonglong uVar10;
  CNtfsFileRecordAttribute *pCVar12;
  longlong lVar13;
  longlong local_80;
  int local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  longlong local_58;
  int local_50;
  ulonglong uVar11;
  
  CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_58);
  if (param_2 != (CNtfsFileRecordAttribute *)0x0) {
    TBitmap::DestroyBitmap(param_3);
    iVar2 = (**(code **)(*(longlong *)(param_1 + 0x70) + 0x10))(param_1 + 0x70,0,&local_58);
    if (iVar2 != 0) {
      CNtfsRunList::CNtfsRunList((CNtfsRunList *)&local_80);
      uVar11 = 0;
      uVar10 = 0;
      uVar4 = uVar11;
      uVar5 = uVar11;
      pCVar12 = param_2;
      uVar6 = uVar11;
      if (0 < local_50) {
        do {
          iVar2 = (int)uVar4;
          if ((-1 < iVar2) && (iVar2 < local_50)) {
            pCVar12 = (CNtfsFileRecordAttribute *)((longlong)iVar2 * 0x10 + local_58);
          }
          piVar9 = *(int **)pCVar12;
          if (*piVar9 == 0xb0) {
            if ((char)piVar9[2] == '\0') goto LAB_1800059bc;
            lVar13 = *(longlong *)(piVar9 + 0xc);
            iVar2 = CNtfsFileRecordAttribute::GetDataRunList(pCVar12,(CNtfsRunList *)&local_80);
            if (iVar2 == 0) goto LAB_180005c10;
            lVar1 = *(longlong *)pCVar12;
            uVar6 = lVar13 * 8;
            if (*(char *)(lVar1 + 8) == '\0') {
              uVar5 = (ulonglong)*(uint *)(lVar1 + 0x10);
            }
            else {
              uVar5 = *(ulonglong *)(lVar1 + 0x28);
            }
            break;
          }
          uVar4 = (ulonglong)(iVar2 + 1U);
          uVar5 = 0;
          uVar6 = 0;
        } while ((int)(iVar2 + 1U) < local_50);
      }
      if (local_78 < 1) {
        iVar2 = CNtfsMFT::Get0XB0FileRecord
                          ((CNtfsMFT *)(param_1 + 0x70),(CNtfsFileRecord *)&local_58);
        if (iVar2 == 0) {
          iVar2 = CNtfsMFT::Get0XB0DataRun((CNtfsMFT *)(param_1 + 0x70),(CNtfsRunList *)&local_80);
          if (iVar2 == 0) goto LAB_180005c10;
          uVar5 = CNtfsMFT::Get0XB0AllocSize((CNtfsMFT *)(param_1 + 0x70));
          uVar6 = CNtfsMFT::GetFileRecordCount((CNtfsMFT *)(param_1 + 0x70));
        }
        else {
          uVar4 = uVar11;
          pCVar12 = param_2;
          if (0 < local_50) {
            do {
              iVar2 = (int)uVar4;
              if ((-1 < iVar2) && (iVar2 < local_50)) {
                pCVar12 = (CNtfsFileRecordAttribute *)((longlong)iVar2 * 0x10 + local_58);
              }
              piVar9 = *(int **)pCVar12;
              if (*piVar9 == 0xb0) {
                if ((char)piVar9[2] == '\0') goto LAB_1800059bc;
                uVar6 = *(longlong *)(piVar9 + 0xc) * 8;
                iVar2 = CNtfsFileRecordAttribute::GetDataRunList(pCVar12,(CNtfsRunList *)&local_80);
                if (iVar2 == 0) goto LAB_180005c10;
                lVar13 = *(longlong *)pCVar12;
                if (*(char *)(lVar13 + 8) == '\0') {
                  uVar5 = (ulonglong)*(uint *)(lVar13 + 0x10);
                }
                else {
                  uVar5 = *(ulonglong *)(lVar13 + 0x28);
                }
                break;
              }
              uVar4 = (ulonglong)(iVar2 + 1U);
            } while ((int)(iVar2 + 1U) < local_50);
          }
        }
        uVar10 = uVar11;
        if (local_78 < 1) goto LAB_180005c10;
      }
      iVar2 = TBitmap::CreateBitmap(param_3,uVar5 * 8);
      uVar10 = uVar11;
      if (iVar2 != 0) {
        puVar7 = TBitmap::GetBitmapData(param_3);
        _Var8 = CNtfsMFT::GetFileRecordCount((CNtfsMFT *)(param_1 + 0x70));
        if (((longlong)uVar6 < _Var8) ||
           (iVar2 = *(int *)(param_1 + 0x30), iVar3 = *(int *)(param_1 + 0x34),
           _Var8 = CNtfsMFT::GetFileRecordCount((CNtfsMFT *)(param_1 + 0x70)),
           (longlong)(iVar3 * iVar2 * 8) <= (longlong)(uVar6 - _Var8))) {
          *param_4 = *param_4 + 1;
          if (*(code **)(param_1 + 8) != (code *)0x0) {
            local_70[0] = 5;
            local_68 = 0x100c;
            (**(code **)(param_1 + 8))(local_70,*(undefined8 *)(param_1 + 0x10));
          }
        }
        uVar6 = uVar11;
        pCVar12 = param_2;
        uVar5 = uVar11;
        if (0 < local_78) {
          do {
            iVar2 = (int)uVar6;
            if ((-1 < iVar2) && (iVar2 < local_78)) {
              pCVar12 = (CNtfsFileRecordAttribute *)(local_80 + (longlong)iVar2 * 0x18);
            }
            if (*(longlong *)pCVar12 == -1) {
              lVar13 = -1;
            }
            else {
              lVar13 = (longlong)*(int *)(param_1 + 0x34) * *(longlong *)pCVar12 +
                       *(longlong *)(param_1 + 0x48);
            }
            iVar3 = (**(code **)(*(longlong *)param_2 + 0x10))
                              (param_2,puVar7 + uVar5,lVar13,
                               *(longlong *)(pCVar12 + 0x10) * (longlong)*(int *)(param_1 + 0x34));
            if (iVar3 == 0) goto LAB_180005c10;
            uVar6 = (ulonglong)(iVar2 + 1U);
            uVar5 = uVar5 + (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_1 + 0x30)
                            * *(longlong *)(pCVar12 + 0x10);
          } while ((int)(iVar2 + 1U) < local_78);
        }
        goto LAB_180005c0b;
      }
      goto LAB_180005c10;
    }
  }
  uVar10 = 0;
  goto LAB_180005c1e;
LAB_1800059bc:
  iVar2 = TBitmap::CreateBitmap(param_3,(ulonglong)(uint)piVar9[4] * 8);
  if (iVar2 != 0) {
    iVar2 = TBitmap::GetBitmapSize(param_3);
    puVar7 = TBitmap::GetBitmapData(param_3);
    CNtfsFileRecordAttribute::GetResidentData(pCVar12,puVar7,(longlong)iVar2);
LAB_180005c0b:
    uVar10 = 1;
  }
LAB_180005c10:
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)&local_80);
LAB_180005c1e:
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_58);
  return uVar10;
}




/* public: int __cdecl MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >::RemoveAt(int) __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
RemoveAt(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
         *this,int param_1)

{
  void *_Dst;
  int iVar1;
  
                    /* 0x5c50  103
                       ?RemoveAt@?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAHH@Z
                        */
  if ((-1 < param_1) && (iVar1 = *(int *)(this + 8), param_1 < iVar1)) {
    if (param_1 != iVar1 + -1) {
      _Dst = (void *)(*(longlong *)this + (longlong)param_1 * 0x18);
      memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)((iVar1 - param_1) + -1) * 0x18);
      iVar1 = *(int *)(this + 8);
    }
    *(int *)(this + 8) = iVar1 + -1;
    return 1;
  }
  return 0;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetDataAllocatedLength(__int64) __ptr64 */

int __thiscall
CNtfsFileRecordAttribute::SetDataAllocatedLength(CNtfsFileRecordAttribute *this,__int64 param_1)

{
                    /* 0x5cc0  106  ?SetDataAllocatedLength@CNtfsFileRecordAttribute@@QEAAH_J@Z */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  *(__int64 *)(*(longlong *)this + 0x28) = param_1;
  return 1;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetDataInitiatedLength(__int64) __ptr64 */

int __thiscall
CNtfsFileRecordAttribute::SetDataInitiatedLength(CNtfsFileRecordAttribute *this,__int64 param_1)

{
                    /* 0x5ce0  107  ?SetDataInitiatedLength@CNtfsFileRecordAttribute@@QEAAH_J@Z */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  *(__int64 *)(*(longlong *)this + 0x38) = param_1;
  return 1;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetDataRealLength(__int64) __ptr64 */

int __thiscall
CNtfsFileRecordAttribute::SetDataRealLength(CNtfsFileRecordAttribute *this,__int64 param_1)

{
                    /* 0x5d00  108  ?SetDataRealLength@CNtfsFileRecordAttribute@@QEAAH_J@Z */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  *(__int64 *)(*(longlong *)this + 0x30) = param_1;
  return 1;
}




/* public: void __cdecl CNtfsFileRecordAttribute::SetID(unsigned short) __ptr64 */

void __thiscall CNtfsFileRecordAttribute::SetID(CNtfsFileRecordAttribute *this,ushort param_1)

{
                    /* 0x5d20  109  ?SetID@CNtfsFileRecordAttribute@@QEAAXG@Z */
  *(ushort *)(*(longlong *)this + 0xe) = param_1;
  return;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetLastVCN(__int64) __ptr64 */

int __thiscall CNtfsFileRecordAttribute::SetLastVCN(CNtfsFileRecordAttribute *this,__int64 param_1)

{
                    /* 0x5d30  110  ?SetLastVCN@CNtfsFileRecordAttribute@@QEAAH_J@Z */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  *(__int64 *)(*(longlong *)this + 0x18) = param_1;
  return 1;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetStartVCN(__int64) __ptr64 */

int __thiscall CNtfsFileRecordAttribute::SetStartVCN(CNtfsFileRecordAttribute *this,__int64 param_1)

{
                    /* 0x5d50  112  ?SetStartVCN@CNtfsFileRecordAttribute@@QEAAH_J@Z */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  *(__int64 *)(*(longlong *)this + 0x10) = param_1;
  return 1;
}




void FUN_180005d70(longlong *param_1)

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




void FUN_180005dd0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined8 * FUN_180005df0(undefined8 *param_1)

{
  *param_1 = CFileAllocationTable::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}




void FUN_180005e10(undefined8 *param_1)

{
  *param_1 = CFileAllocationTable::vftable;
  free((void *)param_1[1]);
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}




undefined8 * FUN_180005e40(undefined8 *param_1,uint param_2)

{
  *param_1 = CFileAllocationTable::vftable;
  free((void *)param_1[1]);
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180005e90(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  uint local_88 [2];
  TBitmap local_80 [24];
  undefined8 local_68;
  uint local_60 [4];
  undefined1 *local_50 [3];
  ulonglong local_38;
  
  local_68 = 0xfffffffffffffffe;
  local_38 = DAT_180014018 ^ (ulonglong)auStack_a8;
  local_60[0] = 0xff6;
  local_60[1] = 0xfff6;
  local_60[2] = 0xffffff6;
  TBitmap::TBitmap(local_80);
  iVar2 = TBitmap::CreateBitmap(local_80,(ulonglong)*(uint *)(param_1 + 0x14));
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x14);
    iVar2 = 2;
    if (2 < (int)uVar1) {
      do {
        local_50[0] = &LAB_180006200;
        local_50[1] = &LAB_180006290;
        local_50[2] = &LAB_1800062c0;
        iVar3 = (*(code *)local_50[*(int *)(param_1 + 0x18)])(iVar2,local_88,param_1);
        if (iVar3 == 0) break;
        if (((local_88[0] != 0) && (local_88[0] <= local_60[*(int *)(param_1 + 0x18)])) &&
           (local_88[0] < uVar1)) {
          iVar3 = TBitmap::GetBit(local_80,(ulonglong)local_88[0]);
          if (iVar3 != 0) break;
          TBitmap::SetBit(local_80,(ulonglong)local_88[0],1,1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar1);
    }
  }
  TBitmap::~TBitmap(local_80);
  __security_check_cookie(local_38 ^ (ulonglong)auStack_a8);
  return;
}




void FUN_180005fd0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  uint local_58 [2];
  uint local_50 [4];
  undefined1 *local_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_180014018 ^ (ulonglong)auStack_78;
  local_50[0] = 0xff6;
  local_50[1] = 0xfff6;
  local_50[2] = 0xffffff6;
  if ((((*(int *)(param_1 + 0x10) != 0) && (*(uint *)(param_1 + 0x14) != 0)) &&
      (*(longlong *)(param_1 + 8) != 0)) && (uVar2 = 2, 2 < *(uint *)(param_1 + 0x14))) {
    do {
      local_58[0] = 0;
      local_40[0] = &LAB_180006200;
      local_40[1] = &LAB_180006290;
      local_40[2] = &LAB_1800062c0;
      iVar1 = (*(code *)local_40[*(int *)(param_1 + 0x18)])(uVar2,local_58,param_1);
      if ((iVar1 == 0) ||
         ((*(uint *)(param_1 + 0x14) <= local_58[0] &&
          (local_58[0] <= local_50[*(int *)(param_1 + 0x18)])))) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x14));
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_78);
  return;
}




void FUN_1800060d0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_180014018 ^ (ulonglong)auStack_48;
  local_28[0] = &LAB_180006200;
  local_28[1] = &LAB_180006290;
  local_28[2] = &LAB_1800062c0;
  (*(code *)local_28[*(int *)(param_1 + 0x18)])(param_2,param_3,param_1);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_48);
  return;
}




undefined8
FUN_180006130(longlong param_1,void *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  void *pvVar1;
  
  free(*(void **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  pvVar1 = operator_new((ulonglong)*(uint *)(param_1 + 0x10));
  *(void **)(param_1 + 8) = pvVar1;
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return 0;
  }
  memcpy(*(void **)(param_1 + 8),param_2,(ulonglong)*(uint *)(param_1 + 0x10));
  return 1;
}




void FUN_1800061d0(longlong param_1)

{
  free(*(void **)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_1800062f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_1800083d0(param_1);
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




longlong * FUN_180006370(longlong *param_1,longlong *param_2,longlong *param_3)

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
    FUN_180005dd0();
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
      goto LAB_180006465;
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
LAB_180006465:
  plVar2 = plVar12 + (lVar11 >> 3);
  FUN_180006cc0(param_1,plVar2,param_3,lVar14);
  plVar10 = (longlong *)param_1[1];
  plVar9 = (longlong *)*param_1;
  plVar13 = plVar12;
  if (param_2 != plVar10) {
    FUN_180006c10((longlong *)*param_1,param_2,plVar12);
    plVar10 = (longlong *)param_1[1];
    plVar9 = param_2;
    plVar13 = plVar2 + 1;
  }
  FUN_180006c10(plVar9,plVar10,plVar13);
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
FUN_180006570(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_180008460(param_1,param_6);
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
      goto LAB_1800065ef;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_1800065ef;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_1800065ef:
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
        goto LAB_180006795;
      }
LAB_180006706:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_180006706;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180008550(param_1,plVar2);
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
LAB_180006795:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_1800067f0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
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
    FUN_180006570(param_1,param_2,'\x01',(undefined8 *)*param_1,param_4,param_5);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    uVar2 = FUN_180008820(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      FUN_180006570(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    puVar5 = (undefined8 *)plVar3[2];
    uVar2 = FUN_180008820(puVar5 + 4,param_4);
    if ((int)uVar2 < 0) {
      FUN_180006570(param_1,param_2,'\0',puVar5,param_4,param_5);
      return param_2;
    }
  }
  else {
    uVar2 = FUN_180008820(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      local_38 = param_3;
      plVar3 = FUN_180007050((longlong *)&local_38);
      uVar2 = FUN_180008820((undefined8 *)(*plVar3 + 0x20),param_4);
      if ((int)uVar2 < 0) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          FUN_180006570(param_1,param_2,'\0',local_38,param_4,param_5);
          return param_2;
        }
        FUN_180006570(param_1,param_2,'\x01',param_3,param_4,param_5);
        return param_2;
      }
    }
    uVar2 = FUN_180008820(param_3 + 4,param_4);
    if (((int)uVar2 < 0) &&
       ((lVar1 = *param_1, local_38 = param_3, plVar4 = FUN_180006fe0((longlong *)&local_38),
        plVar3 = local_38, *plVar4 == lVar1 ||
        (uVar2 = FUN_180008820(param_4,local_38 + 4), (int)uVar2 < 0)))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_180006570(param_1,param_2,'\0',param_3,param_4,param_5);
        return param_2;
      }
      FUN_180006570(param_1,param_2,'\x01',plVar3,param_4,param_5);
      return param_2;
    }
  }
  puVar5 = FUN_180006a20(param_1,local_28,'\0',param_4,param_5);
  *param_2 = *puVar5;
  return param_2;
}




undefined8 *
FUN_180006a20(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
      uVar3 = FUN_180008820(param_4,plVar5 + 4);
    }
    else {
      uVar3 = FUN_180008820(plVar5 + 4,param_4);
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
      puVar4 = FUN_180006570(param_1,&local_38,'\x01',plVar6,param_4,param_5);
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
  uVar3 = FUN_180008820(plVar5 + 4,param_4);
  if ((int)uVar3 < 0) {
    puVar4 = FUN_180006570(param_1,&local_38,(char)uVar7,plVar6,param_4,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_38 = param_5 + 4;
    FUN_1800085b0(param_5 + 8);
    FUN_180006ed0(param_5 + 4);
    local_30 = 0x58;
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




longlong * FUN_180006c10(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    do {
      plVar1 = (longlong *)*param_1;
      *param_3 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)*plVar1)(plVar1,&DAT_180014000);
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




void FUN_180006cc0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_3;
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)*plVar1)(plVar1,&DAT_180014000,param_3,param_4,0xfffffffffffffffe);
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




undefined8 * FUN_180006d30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = CMomEventObject<class_CModuleImpl<class_CFileSystemCheckModule>_>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_180008390();
  param_1[2] = uVar1;
  *param_1 = CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CFileSystemCheckModule>_>_>
             ::vftable;
  return param_1;
}




/* public: __cdecl IStorageDevice::IStorageDevice(struct IStorageDevice && __ptr64) __ptr64 */

IStorageDevice * __thiscall
IStorageDevice::IStorageDevice(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x6d90  12  ??0IStorageDevice@@QEAA@$$QEAU0@@Z
                       0x6d90  13  ??0IStorageDevice@@QEAA@AEBU0@@Z
                       0x6d90  14  ??0IStorageDevice@@QEAA@XZ */
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




void FUN_180006db0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800087d0((longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  free(*(void **)(param_1 + 0x10));
  return;
}




void FUN_180006df0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}




void FUN_180006e20(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180006e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))();
    return;
  }
  return;
}




void FUN_180006e30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800087d0(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_180006e60(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180006e80(undefined8 *param_1)

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




void FUN_180006ed0(longlong *param_1)

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




void FUN_180006f40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800087d0(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_180006f70(longlong *param_1)

{
  FUN_1800085b0(param_1 + 4);
  FUN_180006ed0(param_1);
  return;
}




void FUN_180006fa0(longlong *param_1)

{
  FUN_1800085b0(param_1);
  return;
}




void FUN_180006fc0(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  return;
}




longlong * FUN_180006fe0(longlong *param_1)

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




longlong * FUN_180007050(longlong *param_1)

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

void FUN_1800070e0(longlong param_1,void *param_2,longlong *param_3)

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
  local_48 = DAT_180014018 ^ (ulonglong)auStackY_d8;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar13 = 0xffffffffffffffff;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  local_90 = param_3;
  FUN_180008680(local_68,param_2,sVar13);
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
      if (uVar3 <= uVar2) goto LAB_1800071b7;
LAB_180007218:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_180007218;
LAB_1800071b7:
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
  if (plVar10 != (longlong *)*local_98) goto LAB_18000744c;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  FUN_180008680(local_68,param_2,sVar13);
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
      if (uVar2 <= uVar15) goto LAB_180007327;
LAB_180007377:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_180007377;
LAB_180007327:
      plVar11 = (longlong *)*plVar8;
      plVar10 = plVar8;
    }
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    plVar8 = plVar11;
    plVar11 = local_98;
  }
  if (plVar10 == plVar7) {
LAB_18000737f:
    local_a8[0] = local_68;
    plVar7 = (longlong *)FUN_1800062f0(plVar11,&DAT_18000d1a8,local_a8);
    FUN_1800067f0(plVar11,local_a8,plVar10,plVar7 + 4,plVar7);
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
      if (uVar2 < uVar3) goto LAB_18000737f;
    }
    else if (iVar6 < 0) goto LAB_18000737f;
  }
  plVar7 = plVar10 + 8;
  if (plVar7 != &local_88) {
    FUN_1800085b0(plVar7);
    *plVar7 = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_1800085b0(&local_88);
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
LAB_18000744c:
  plVar7 = local_90;
  local_50 = 0xf;
  local_58 = 0;
  local_68[0]._0_1_ = 0;
  plVar8 = (longlong *)0x0;
  local_a8[0] = (longlong *)0x0;
  if (local_90 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)*local_90)(local_90,&DAT_180014000);
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
    FUN_180006370(plVar10 + 8,plVar7,(longlong *)local_a8);
  }
  else {
    *plVar7 = 0;
    local_90 = plVar7;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)*plVar8)(plVar8,&DAT_180014000);
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




undefined4 FUN_180007530(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 8);
}




/* public: virtual int __cdecl IStorageDevice::ConvertVolume(void) __ptr64 */

int __thiscall IStorageDevice::ConvertVolume(IStorageDevice *this)

{
                    /* 0x7540  47  ?ConvertVolume@IStorageDevice@@UEAAHXZ
                       0x7540  48  ?DeviceIoControl@IStorageDevice@@UEAAHKPEAXK0KPEAK@Z
                       0x7540  51  ?GetBitlockerInfo@IStorageDevice@@UEAAPEAUBitlockerInfo@@XZ
                       0x7540  63  ?GetInformationOffset@IStorageDevice@@UEAAHQEA_K@Z
                       0x7540  91  ?IsBitlockerVolume@IStorageDevice@@UEAAHXZ
                       0x7540  104  ?SetBitlockerEnable@IStorageDevice@@UEAAHH@Z
                       0x7540  105  ?SetBitlockerInfo@IStorageDevice@@UEAAHPEAUBitlockerInfo@@@Z
                       0x7540  111  ?SetMetaFilePos@IStorageDevice@@UEAAHQEA_K_K@Z */
  return 0;
}




undefined8 FUN_180007550(undefined *param_1,undefined8 param_2)

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




void FUN_180007580(undefined8 param_1,IManager *param_2,IManagerItem *param_3,undefined *param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  char *pcVar7;
  longlong *plVar8;
  LPCSTR lpRootPathName;
  __int64 _Var9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 *puVar16;
  char cVar17;
  size_t sVar18;
  undefined1 auStackY_348 [32];
  int local_308 [2];
  CHardDriveIOSetting local_300 [8];
  __int64 local_2f8 [2];
  CHardDriveIO local_2e8 [96];
  undefined1 local_288;
  undefined7 uStack_287;
  undefined8 local_278;
  ulonglong uStack_270;
  undefined8 local_268 [16];
  CHAR local_1e8 [416];
  ulonglong local_48;
  size_t sVar19;
  
  local_2f8[1] = 0xfffffffffffffffe;
  local_48 = DAT_180014018 ^ (ulonglong)auStackY_348;
  plVar5 = (longlong *)(**(code **)(*(longlong *)param_2 + 0x68))(param_2);
  uVar12 = 0;
  if ((plVar5 != (longlong *)0x0) &&
     (pvVar6 = (void *)(**(code **)(*plVar5 + 0x98))(plVar5,param_3), pvVar6 != (void *)0x0)) {
    sVar18 = 0xffffffffffffffff;
    do {
      sVar19 = sVar18;
      sVar18 = sVar19 + 1;
    } while (*(char *)((longlong)pvVar6 + sVar18) != '\0');
    local_278 = 0;
    uStack_270 = 0xf;
    local_288 = 0;
    FUN_180008680((longlong *)&local_288,pvVar6,sVar19);
    if (DAT_180014700 == (undefined1 *)0x0) {
      DAT_180014700 = &DAT_180014600;
      pcVar7 = (char *)__std_type_info_name(0x180014238,&DAT_180015160);
      puVar14 = DAT_180014700;
      if (DAT_180014700 != (undefined1 *)0x0) {
        *DAT_180014700 = 0;
        if (*pcVar7 == 'c') {
          lVar15 = 6;
        }
        else {
          if (*pcVar7 != 's') goto LAB_1800076e5;
          lVar15 = 7;
        }
        pcVar7 = pcVar7 + lVar15;
        cVar17 = *pcVar7;
        uVar13 = uVar12;
        if (cVar17 != '\0') {
          do {
            uVar11 = (uint)uVar13;
            if (cVar17 == ':') {
              if (0xff < uVar11) goto LAB_1800076e5;
              puVar14[uVar13] = 0x2e;
              pcVar7 = pcVar7 + 1;
            }
            else {
              if (0xff < uVar11) goto LAB_1800076e5;
              puVar14[uVar13] = cVar17;
            }
            uVar13 = (ulonglong)(uVar11 + 1);
            pcVar7 = pcVar7 + 1;
            cVar17 = *pcVar7;
          } while (cVar17 != '\0');
          if (0xff < uVar11 + 1) goto LAB_1800076e5;
        }
        puVar14[uVar13] = 0;
      }
    }
LAB_1800076e5:
    plVar8 = (longlong *)(*(code *)**(undefined8 **)param_3)(param_3);
    if (plVar8 == (longlong *)0x0) {
      if (0xf < uStack_270) {
        pvVar1 = (void *)CONCAT71(uStack_287,local_288);
        pvVar6 = pvVar1;
        if ((0xfff < uStack_270 + 1) &&
           (pvVar6 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)*(void **)((longlong)pvVar1 + -8)))
           )) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
LAB_1800078d2:
        free(pvVar6);
      }
    }
    else {
      memset(local_1e8,0,0x104);
      lpRootPathName = (LPCSTR)(**(code **)(*plVar5 + 0x98))(plVar5);
      BVar2 = GetVolumeInformationA
                        (lpRootPathName,(LPSTR)0x0,0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                         local_1e8,0x104);
      if (BVar2 == 0) {
LAB_1800077f9:
        iVar3 = (**(code **)(*plVar8 + 0x30))(plVar8);
        if (0 < iVar3) {
          if (iVar3 < 4) {
            puVar14 = &DAT_18000d76c;
          }
          else {
            if (iVar3 != 4) goto LAB_180007899;
            puVar14 = &DAT_18000d764;
          }
          puVar16 = &local_288;
          if (0xf < uStack_270) {
            puVar16 = (undefined1 *)CONCAT71(uStack_287,local_288);
          }
          FUN_180009090((ulonglong)puVar14,(longlong)puVar16,param_4,param_5);
          if (0xf < uStack_270) {
            pvVar1 = (void *)CONCAT71(uStack_287,local_288);
            pvVar6 = pvVar1;
            if ((0xfff < uStack_270 + 1) &&
               (pvVar6 = *(void **)((longlong)pvVar1 + -8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar6);
          }
          local_278 = 0;
          uStack_270 = 0xf;
          local_288 = 0;
          goto LAB_180007b32;
        }
LAB_180007899:
        if (0xf < uStack_270) {
          pvVar1 = (void *)CONCAT71(uStack_287,local_288);
          pvVar6 = pvVar1;
          if ((0xfff < uStack_270 + 1) &&
             (pvVar6 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          goto LAB_1800078d2;
        }
      }
      else {
        do {
          uVar13 = uVar12 + 1;
          if (local_1e8[uVar12] != (&DAT_18000d760)[uVar12]) goto LAB_1800077f9;
          uVar12 = uVar13;
        } while (uVar13 != 4);
        if (0xf < uStack_270) {
          pvVar1 = (void *)CONCAT71(uStack_287,local_288);
          pvVar6 = pvVar1;
          if ((0xfff < uStack_270 + 1) &&
             (pvVar6 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)
                    ((longlong)pvVar1 + (-8 - (longlong)*(void **)((longlong)pvVar1 + -8))))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          goto LAB_1800078d2;
        }
      }
    }
    local_278 = 0;
    uStack_270 = 0xf;
    local_288 = 0;
  }
  local_308[0] = -1;
  local_2f8[0] = -1;
  if (DAT_180014810 == (undefined1 *)0x0) {
    DAT_180014810 = &DAT_180014710;
    local_308[1] = 0x100;
    pcVar7 = (char *)__std_type_info_name(0x180014268,&DAT_180015160);
    FUN_180008030(pcVar7,DAT_180014810,(uint *)(local_308 + 1));
  }
  plVar5 = (longlong *)(*(code *)**(undefined8 **)param_3)(param_3,DAT_180014810);
  if (DAT_180014700 == (undefined1 *)0x0) {
    DAT_180014700 = &DAT_180014600;
    local_308[1] = 0x100;
    pcVar7 = (char *)__std_type_info_name(0x180014238,&DAT_180015160);
    FUN_180008030(pcVar7,DAT_180014700,(uint *)(local_308 + 1));
  }
  plVar8 = (longlong *)(*(code *)**(undefined8 **)param_3)(param_3,DAT_180014700);
  if ((plVar5 == (longlong *)0x0) || (plVar8 == (longlong *)0x0)) goto LAB_180007b32;
  iVar3 = (**(code **)(*plVar8 + 0x30))(plVar8);
  CHardDriveIOSetting::CHardDriveIOSetting(local_300,param_2,(IBlockDevice *)0x0);
  CHardDriveIO::LoadSetting(local_300);
  iVar4 = CNTFSLib::ConvertPartitionDevice2DiskDevice(param_2,param_3,local_308,local_2f8);
  if (iVar4 != 0) {
    if (iVar3 == 4) {
      FUN_180003f00((undefined8 *)local_1e8);
      CHardDriveIO::CHardDriveIO(local_2e8);
      iVar3 = CHardDriveIO::OpenDisk(local_2e8,local_308[0]);
      if (iVar3 != 0) {
        lVar15 = (**(code **)(*plVar5 + 0x30))(plVar5);
        _Var9 = (**(code **)(*plVar5 + 0x28))(plVar5);
        FUN_1800045a0((longlong)local_1e8,(CNtfsFileRecordAttribute *)local_2e8,_Var9,lVar15,param_4
                      ,param_5);
      }
      CHardDriveIO::~CHardDriveIO(local_2e8);
      FUN_180004030((undefined8 *)local_1e8);
    }
    else if (iVar3 - 1U < 3) {
      iVar4 = iVar3 + -1;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else if (iVar3 == 2) {
        iVar4 = 1;
      }
      else if (iVar3 != 3) goto LAB_180007b22;
      FUN_180001010(local_268);
      CHardDriveIO::CHardDriveIO(local_2e8);
      iVar3 = CHardDriveIO::OpenDisk(local_2e8,local_308[0]);
      if (iVar3 != 0) {
        lVar15 = (**(code **)(*plVar5 + 0x30))(plVar5);
        lVar10 = (**(code **)(*plVar5 + 0x28))(plVar5);
        FUN_1800015b0((longlong)local_268,(longlong *)local_2e8,lVar10,lVar15,iVar4,param_4,param_5)
        ;
      }
      CHardDriveIO::~CHardDriveIO(local_2e8);
      FUN_180001110(local_268);
    }
  }
LAB_180007b22:
  CHardDriveIOSetting::~CHardDriveIOSetting(local_300);
LAB_180007b32:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_348);
  return;
}




void FUN_180007b60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_1800084b0(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180007bb0(longlong param_1,void *param_2,undefined4 *param_3)

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
  local_48 = DAT_180014018 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (*(char *)((longlong)param_2 + sVar12) != '\0');
  local_78 = param_1;
  FUN_180008680(local_68,param_2,sVar12);
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
      if (uVar5 <= uVar3) goto LAB_180007c90;
LAB_180007d1f:
      puVar8 = (undefined8 *)puVar10[2];
    }
    else {
      if (iVar7 < 0) goto LAB_180007d1f;
LAB_180007c90:
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
      if (uVar5 < uVar3) goto LAB_180007ce4;
      if (uVar5 >= uVar3 && uVar5 != uVar3) goto LAB_180007ce7;
    }
    if (-1 < iVar7) goto LAB_180007ce7;
  }
LAB_180007ce4:
  puVar11 = puVar2;
LAB_180007ce7:
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




/* public: virtual int __cdecl IStorageDevice::GetBitlockerStatus(void) __ptr64 */

int __thiscall IStorageDevice::GetBitlockerStatus(IStorageDevice *this)

{
                    /* 0x7da0  52  ?GetBitlockerStatus@IStorageDevice@@UEAAHXZ */
  return -1;
}




undefined8 FUN_180007db0(void)

{
  return DAT_180014590;
}




char * FUN_180007dd0(void)

{
  return "FileSystemCheck";
}




char * FUN_180007de0(void)

{
  return "CFileSystemCheckModule";
}




undefined * FUN_180007df0(void)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 in_R9;
  uint local_res8 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (DAT_180014598 == (undefined *)0x0) {
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4);
    if ((*piVar4 < DAT_1800145a8) && (_Init_thread_header(&DAT_1800145a8), DAT_1800145a8 == -1)) {
      DAT_1800145a0 = (undefined8 *)FUN_1800080d0("Thread");
      _Init_thread_footer(&DAT_1800145a8);
    }
    if (DAT_1800145a0 == (undefined8 *)0x0) {
      if ((*piVar4 < DAT_1800145d0) && (_Init_thread_header(&DAT_1800145d0), DAT_1800145d0 == -1)) {
        FUN_180006d30((undefined8 *)&DAT_1800145b0);
        atexit(FUN_18000be80);
        _Init_thread_footer(&DAT_1800145d0);
        DAT_180014598 = &DAT_1800145b0;
      }
      else {
        DAT_180014598 = &DAT_1800145b0;
      }
    }
    else {
      if (DAT_180014b40 == (undefined1 *)0x0) {
        DAT_180014b40 = &DAT_180014a40;
        local_res8[0] = 0x100;
        pcVar2 = (char *)__std_type_info_name(0x1800142e0,&DAT_180015160);
        FUN_180008030(pcVar2,DAT_180014b40,local_res8);
      }
      plVar3 = (longlong *)(**(code **)*DAT_1800145a0)(DAT_1800145a0,DAT_180014b40);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
        iVar1 = (**(code **)(*plVar3 + 0x28))
                          (plVar3,0xffffffff,*plVar3,in_R9,uVar5,plVar3,0xffffffff);
        if (DAT_180014598 == (undefined *)0x0) {
          if ((*piVar4 < DAT_1800145f8) &&
             (_Init_thread_header(&DAT_1800145f8), DAT_1800145f8 == -1)) {
            FUN_180006d30((undefined8 *)&DAT_1800145d8);
            atexit(FUN_18000bec0);
            _Init_thread_footer(&DAT_1800145f8);
          }
          DAT_180014598 = &DAT_1800145d8;
          if (-1 < iVar1) {
            (**(code **)(*plVar3 + 0x30))(plVar3);
          }
        }
        (**(code **)(*plVar3 + 0x30))(plVar3);
      }
    }
  }
  return DAT_180014598;
}




ulonglong FUN_180008030(char *param_1,undefined1 *param_2,uint *param_3)

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




void FUN_1800080d0(char *param_1)

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
  
  local_18 = DAT_180014018 ^ (ulonglong)auStack_148;
  if (param_1 == (char *)0x0) {
LAB_1800081c5:
    __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
    return;
  }
  pcVar4 = param_1;
  if (*param_1 != '\0') {
    lVar5 = 0;
    do {
      if (0xff < lVar5) goto LAB_1800081c5;
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
          FUN_180007550(pFVar3,hModule);
        }
      }
      goto LAB_1800081c5;
    }
  }
  __report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




undefined8 FUN_1800081f0(undefined8 param_1,char *param_2)

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
    if (DAT_180014920 == (char *)0x0) {
      local_res10[0] = 0x100;
      DAT_180014920 = &DAT_180014820;
      pcVar2 = (char *)__std_type_info_name(0x180014290,&DAT_180015160);
      FUN_180008030(pcVar2,DAT_180014920,local_res10);
    }
    cVar1 = *pcVar3;
    cVar4 = *DAT_180014920;
    pcVar2 = DAT_180014920;
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
      if (DAT_180014a30 == (char *)0x0) {
        local_res10[0] = 0x100;
        DAT_180014a30 = &DAT_180014930;
        pcVar2 = (char *)__std_type_info_name(0x1800142c0,&DAT_180015160);
        FUN_180008030(pcVar2,DAT_180014a30,local_res10);
      }
      cVar1 = *pcVar3;
      cVar4 = *DAT_180014a30;
      pcVar2 = DAT_180014a30;
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




int FUN_180008360(void *param_1)

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




void FUN_180008390(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x58);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_1800083d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180008410(undefined8 param_1,longlong *param_2,longlong *param_3)

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




void FUN_180008460(undefined8 param_1,void *param_2)

{
  FUN_1800085b0((longlong *)((longlong)param_2 + 0x40));
  FUN_180006ed0((longlong *)((longlong)param_2 + 0x20));
  free(param_2);
  return;
}




void FUN_1800084b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800084b0(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_1800085b0(param_2 + 8);
    FUN_180006ed0(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180008540(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_180008550(longlong *param_1,longlong *param_2)

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




void FUN_1800085b0(longlong *param_1)

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




void FUN_180008660(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




longlong * FUN_180008680(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_180008660();
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
      if (pvVar3 == (void *)0x0) goto LAB_1800087c3;
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
LAB_1800087c3:
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




void FUN_1800087d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1800084b0(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




uint FUN_180008820(undefined8 *param_1,undefined8 *param_2)

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




void FUN_180008890(undefined8 param_1,void *param_2,longlong param_3)

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
  DAT_180014590 = param_1;
                    /* 0x8920  113  GetModule */
  FUN_180007df0();
  return;
}




void FUN_180008930(char *param_1)

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
  
  local_18 = DAT_180014018 ^ (ulonglong)auStack_148;
  puVar3 = (undefined8 *)FUN_1800080d0(param_1);
  if (puVar3 != (undefined8 *)0x0) {
    local_128 = 0x49;
    pcVar5 = param_1;
    if (*param_1 != '\0') {
      lVar4 = 0;
      do {
        if (0xff < lVar4) goto LAB_1800089c0;
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
LAB_1800089c0:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
  return;
}




BOOL FUN_1800089e0(LPSECURITY_ATTRIBUTES param_1,PHANDLE param_2,PHANDLE param_3,PHANDLE param_4,
                  PHANDLE param_5,PHANDLE param_6,PHANDLE param_7)

{
  BOOL BVar1;
  HANDLE pvVar2;
  HANDLE pvVar3;
  
  BVar1 = CreatePipe(param_2,param_3,param_1,0);
  if (BVar1 == 0) {
    return 0;
  }
  pvVar2 = GetCurrentProcess();
  pvVar3 = GetCurrentProcess();
  BVar1 = DuplicateHandle(pvVar3,*param_3,pvVar2,param_3,0,0,3);
  if (BVar1 == 0) {
    CloseHandle(*param_2);
    *param_2 = (HANDLE)0x0;
    CloseHandle(*param_3);
    *param_3 = (HANDLE)0x0;
  }
  else {
    BVar1 = CreatePipe(param_4,param_5,param_1,0);
    if (BVar1 == 0) {
      CloseHandle(*param_2);
      *param_2 = (HANDLE)0x0;
      CloseHandle(*param_3);
      *param_3 = (HANDLE)0x0;
    }
    else {
      BVar1 = CreatePipe(param_6,param_7,param_1,0);
      if (BVar1 == 0) {
        CloseHandle(*param_2);
        *param_2 = (HANDLE)0x0;
        CloseHandle(*param_3);
        *param_3 = (HANDLE)0x0;
        CloseHandle(*param_4);
        *param_4 = (HANDLE)0x0;
        CloseHandle(*param_5);
        *param_5 = (HANDLE)0x0;
      }
      else {
        pvVar2 = GetCurrentProcess();
        pvVar3 = GetCurrentProcess();
        BVar1 = DuplicateHandle(pvVar3,*param_4,pvVar2,param_4,0,0,3);
        if (BVar1 != 0) {
          pvVar2 = GetCurrentProcess();
          pvVar3 = GetCurrentProcess();
          BVar1 = DuplicateHandle(pvVar3,*param_6,pvVar2,param_6,0,0,3);
          if (BVar1 != 0) {
            return 1;
          }
        }
        CloseHandle(*param_2);
        *param_2 = (HANDLE)0x0;
        CloseHandle(*param_3);
        *param_3 = (HANDLE)0x0;
        CloseHandle(*param_4);
        *param_4 = (HANDLE)0x0;
        CloseHandle(*param_5);
        *param_5 = (HANDLE)0x0;
        CloseHandle(*param_6);
        *param_6 = (HANDLE)0x0;
        CloseHandle(*param_7);
        *param_7 = (HANDLE)0x0;
      }
    }
  }
  return 0;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180008c10(char *param_1,ulonglong param_2,char *param_3,undefined *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_4a8 [32];
  int local_488;
  uint local_478;
  uint local_474 [3];
  undefined1 *local_468;
  undefined4 local_460;
  undefined1 local_458 [1024];
  ulonglong local_58;
  
  local_58 = DAT_180014018 ^ (ulonglong)auStack_4a8;
  pcVar1 = param_1 + (param_2 & 0xffffffff);
  *pcVar1 = '\0';
  pcVar3 = param_1;
  if (param_1 != pcVar1) {
    do {
      if ((*param_1 == '\n') || (*param_1 == '\r')) {
        if (pcVar3 != param_1) {
          strncat(param_3,pcVar3,(longlong)param_1 - (longlong)pcVar3);
          local_474[0] = 0;
          local_478 = 0;
          pcVar3 = strstr(param_3,"Stage:");
          if ((pcVar3 != (char *)0x0) &&
             (iVar2 = sscanf(pcVar3,"Stage: %d%%; Total: %d%%",local_474,&local_478), iVar2 != 0)) {
            local_474[0] = local_474[0] % 100;
            local_478 = local_478 % 100;
            if (param_4 != (undefined *)0x0) {
              local_474[1] = 4;
              local_468 = (undefined1 *)CONCAT44(local_468._4_4_,local_474[0]);
              (*(code *)param_4)(local_474 + 1);
              if (param_4 != (undefined *)0x0) {
                local_468 = (undefined1 *)CONCAT44(local_468._4_4_,local_478);
                local_474[1] = 1;
                (*(code *)param_4)(local_474 + 1);
              }
            }
          }
          if ((*param_1 == '\n') || ((*param_1 == '\r' && (param_1[1] == '\n')))) {
            FUN_180008fb0(param_4,param_5,(longlong)param_3);
          }
          else if (param_4 != (undefined *)0x0) {
            local_474[1] = 8;
            local_460 = 1;
            plVar4 = (longlong *)FUN_180008930("Common");
            memset(local_458,0,0x400);
            if (plVar4 != (longlong *)0x0) {
              uVar5 = 0xffffffffffffffff;
              do {
                uVar5 = uVar5 + 1;
              } while (param_3[uVar5] != '\0');
              local_488 = (int)uVar5 * 2 + 2;
              iVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,param_3,uVar5 & 0xffffffff,local_458);
              if (-1 < iVar2) {
                local_468 = local_458;
                (*(code *)param_4)(local_474 + 1,param_5);
              }
            }
          }
          *param_3 = '\0';
        }
        pcVar3 = param_1 + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != pcVar1);
    if (pcVar3 != param_1) {
      strncpy(param_3,pcVar3,(longlong)param_1 - (longlong)pcVar3);
      param_1[(longlong)param_3 - (longlong)pcVar3] = '\0';
      goto LAB_180008e3f;
    }
  }
  *param_3 = '\0';
LAB_180008e3f:
  __security_check_cookie(local_58 ^ (ulonglong)auStack_4a8);
  return;
}




void FUN_180008e60(HANDLE param_1,char *param_2,undefined *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStackY_278 [32];
  undefined4 local_248 [2];
  uint local_240;
  undefined4 local_23c;
  DWORD local_230 [2];
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_180014018 ^ (ulonglong)auStackY_278;
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    if (param_3 == (undefined *)0x0) goto LAB_180008f89;
    local_240 = (uint)(byte)param_2[2];
    local_248[0] = 1;
    (*(code *)param_3)(local_248,param_4);
    local_248[0] = 3;
    local_240 = 0;
    local_23c = 100;
  }
  else if (cVar1 == '\x01') {
    if (param_3 == (undefined *)0x0) goto LAB_180008f89;
    local_240 = (uint)(byte)param_2[2];
    local_248[0] = 4;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        if (param_1 != (HANDLE)0x0) {
          if (param_2[2] == '\x01') {
            WriteFile(param_1,&DAT_18000d8cc,3,local_230,(LPOVERLAPPED)0x0);
          }
          else {
            WriteFile(param_1,&DAT_18000d8d0,3,local_230,(LPOVERLAPPED)0x0);
          }
        }
      }
      else if (cVar1 == '\x04') {
        FUN_180003ca0(local_228,"DEBUG : Msg ID (0x%08x)",*(undefined8 *)(param_2 + 2),param_4);
        FUN_180008fb0(param_3,param_4,(longlong)local_228);
      }
      goto LAB_180008f89;
    }
    if (param_3 == (undefined *)0x0) goto LAB_180008f89;
    local_248[0] = 4;
    local_240 = 100;
  }
  (*(code *)param_3)(local_248,param_4);
LAB_180008f89:
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_278);
  return;
}




void FUN_180008fb0(undefined *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_478 [32];
  int local_458;
  undefined4 local_448 [2];
  undefined1 *local_440;
  undefined4 local_438;
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_180014018 ^ (ulonglong)auStack_478;
  if (param_1 != (undefined *)0x0) {
    local_448[0] = 7;
    local_438 = 1;
    plVar2 = (longlong *)FUN_180008930("Common");
    memset(local_428,0,0x400);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = 0xffffffffffffffff;
      do {
        uVar3 = uVar3 + 1;
      } while (*(char *)(param_3 + uVar3) != '\0');
      local_458 = (int)uVar3 * 2 + 2;
      iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,param_3,uVar3 & 0xffffffff,local_428);
      if (-1 < iVar1) {
        local_440 = local_428;
        (*(code *)param_1)(local_448,param_2);
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_478);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180009090(ulonglong param_1,longlong param_2,undefined *param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  BOOL BVar4;
  int iVar5;
  DWORD DVar6;
  HANDLE hEvent;
  HANDLE pvVar7;
  HANDLE pvVar8;
  HANDLE hSourceProcessHandle;
  HMODULE hModule;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *pcVar12;
  longlong lVar13;
  int iVar14;
  HANDLE pvVar15;
  undefined1 auStackY_1268 [32];
  HANDLE local_1218;
  HANDLE local_1210;
  ulonglong local_1208;
  HANDLE local_1200;
  HANDLE local_11f8;
  HANDLE local_11f0;
  HANDLE local_11e8;
  HANDLE local_11e0;
  int local_11d8;
  DWORD local_11d4;
  HANDLE local_11d0;
  _PROCESS_INFORMATION local_11c8;
  int local_11b0;
  int local_11ac;
  _SECURITY_ATTRIBUTES local_11a8;
  undefined4 local_1190;
  undefined4 local_1188;
  int local_1184;
  undefined4 local_1178;
  undefined4 local_1170;
  int local_116c;
  undefined4 local_1160;
  undefined4 local_1158;
  undefined4 local_1154;
  undefined4 local_1148;
  undefined4 local_1140;
  undefined4 local_113c;
  undefined4 local_1130 [6];
  _STARTUPINFOA local_1118;
  CHAR local_10a8;
  char local_10a7 [270];
  char cStack_f99;
  CHAR local_f98 [1024];
  char local_b98 [272];
  char local_a88 [272];
  char local_978 [272];
  char local_868;
  byte local_867;
  char local_458 [1040];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1800090a6;
  local_48 = DAT_180014018 ^ (ulonglong)auStackY_1268;
  pvVar15 = (HANDLE)0x0;
  local_1200 = (HANDLE)0x0;
  local_11f8 = (HANDLE)0x0;
  local_1218 = (HANDLE)0x0;
  local_11f0 = (HANDLE)0x0;
  local_1210 = (HANDLE)0x0;
  local_11e8 = (HANDLE)0x0;
  local_11d0 = (HANDLE)0x0;
  local_11c8.dwProcessId = 0;
  local_11c8.dwThreadId = 0;
  local_11c8.hProcess = (HANDLE)0x0;
  local_11c8.hThread = (HANDLE)0x0;
  local_11e0 = (HANDLE)0x0;
  local_11a8.bInheritHandle = 1;
  local_11a8._20_4_ = 0;
  local_11a8.lpSecurityDescriptor = (LPVOID)0x0;
  local_11a8.nLength = 0x18;
  local_11a8._4_4_ = 0;
  local_1208 = param_1;
  BVar4 = FUN_1800089e0(&local_11a8,&local_1200,&local_11f8,&local_1218,&local_11f0,&local_1210,
                        &local_11e8);
  if (BVar4 != 0) {
    memset(&local_1118,0,0x68);
    local_1118.cb = 0x68;
    local_1118.dwFlags = 0x100;
    local_1118.hStdInput = local_1200;
    local_1118.hStdOutput = local_11f0;
    local_1118.hStdError = local_11f0;
    hEvent = CreateEventA(&local_11a8,0,0,(LPCSTR)0x0);
    local_11d0 = hEvent;
    if (hEvent == (HANDLE)0x0) {
      CloseHandle(local_1200);
      local_1200 = (HANDLE)0x0;
      CloseHandle(local_11f8);
      local_11f8 = (HANDLE)0x0;
      CloseHandle(local_1218);
      local_1218 = (HANDLE)0x0;
      CloseHandle(local_11f0);
      local_11f0 = (HANDLE)0x0;
      CloseHandle(local_1210);
      local_1210 = (HANDLE)0x0;
      CloseHandle(local_11e8);
      local_11e8 = (HANDLE)0x0;
    }
    else {
      pvVar7 = GetCurrentProcess();
      pvVar8 = GetCurrentProcess();
      hSourceProcessHandle = GetCurrentProcess();
      BVar4 = DuplicateHandle(hSourceProcessHandle,pvVar8,pvVar7,&local_11e0,0,1,3);
      if (BVar4 == 0) {
        CloseHandle(local_1200);
        local_1200 = (HANDLE)0x0;
        CloseHandle(local_11f8);
        local_11f8 = (HANDLE)0x0;
        CloseHandle(local_1218);
        local_1218 = (HANDLE)0x0;
        CloseHandle(local_11f0);
        local_11f0 = (HANDLE)0x0;
        CloseHandle(local_1210);
        local_1210 = (HANDLE)0x0;
        CloseHandle(local_11e8);
        local_11e8 = (HANDLE)0x0;
        CloseHandle(hEvent);
        local_11d0 = (HANDLE)0x0;
      }
      else {
        _ltoa((long)hEvent,local_b98,10);
        _ltoa((long)local_11e8,local_a88,10);
        _ltoa((long)local_11e0,local_978,10);
        local_11d8 = 0;
        hModule = GetModuleHandleA("kernel32");
        DAT_180014b48 = GetProcAddress(hModule,"IsWow64Process");
        if (DAT_180014b48 != (FARPROC)0x0) {
          pvVar7 = GetCurrentProcess();
          (*DAT_180014b48)(pvVar7);
        }
        if (local_11d8 == 0) {
          builtin_memcpy(local_f98,"WinChkdsk.exe",0xe);
        }
        else {
          memset(&local_10a8,0,0x104);
          GetModuleFileNameA((HMODULE)0x0,&local_10a8,0x104);
          uVar10 = 0xffffffffffffffff;
          do {
            uVar9 = uVar10 + 1;
            pcVar12 = local_10a7 + uVar10;
            uVar10 = uVar9;
          } while (*pcVar12 != '\0');
          while( true ) {
            local_11b0 = (int)uVar9;
            uVar10 = (ulonglong)local_11b0;
            pvVar7 = pvVar15;
            if ((&local_10a8)[uVar10] == '\\') break;
            if (0x103 < uVar10) {
              __report_rangecheckfailure();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (&local_10a8)[uVar10] = '\0';
            uVar9 = (ulonglong)(local_11b0 - 1);
          }
          do {
            pcVar12 = &local_10a8 + (longlong)pvVar7;
            local_f98[(longlong)pvVar7] = *pcVar12;
            pvVar7 = (HANDLE)((longlong)pvVar7 + 1);
          } while (*pcVar12 != '\0');
          pcVar12 = &cStack_f99;
          do {
            pcVar11 = pcVar12;
            pcVar12 = pcVar11 + 1;
          } while (*pcVar12 != '\0');
          builtin_strncpy(pcVar11 + 1,"x64\\WinChkdsk.exe",0x12);
        }
        uVar10 = local_1208;
        pcVar12 = &cStack_f99;
        do {
          pcVar12 = pcVar12 + 1;
        } while (*pcVar12 != '\0');
        pcVar12[0] = ' ';
        pcVar12[1] = '\0';
        pcVar12 = &cStack_f99;
        do {
          pcVar12 = pcVar12 + 1;
        } while (*pcVar12 != '\0');
        lVar13 = 0;
        do {
          cVar1 = *(char *)(param_2 + lVar13);
          pcVar12[lVar13] = cVar1;
          lVar13 = lVar13 + 1;
        } while (cVar1 != '\0');
        pcVar12 = &cStack_f99;
        do {
          pcVar12 = pcVar12 + 1;
        } while (*pcVar12 != '\0');
        pcVar12[0] = ' ';
        pcVar12[1] = '\0';
        pcVar12 = &cStack_f99;
        do {
          pcVar12 = pcVar12 + 1;
        } while (*pcVar12 != '\0');
        lVar13 = 0;
        do {
          cVar1 = *(char *)(local_1208 + lVar13);
          pcVar12[lVar13] = cVar1;
          lVar13 = lVar13 + 1;
        } while (cVar1 != '\0');
        pcVar12 = &cStack_f99;
        do {
          pcVar12 = pcVar12 + 1;
        } while (*pcVar12 != '\0');
        pcVar12[0] = ' ';
        pcVar12[1] = '\0';
        pcVar12 = &cStack_f99;
        do {
          pcVar12 = pcVar12 + 1;
        } while (*pcVar12 != '\0');
        lVar13 = 0;
        do {
          cVar1 = local_b98[lVar13];
          pcVar12[lVar13] = cVar1;
          lVar13 = lVar13 + 1;
        } while (cVar1 != '\0');
        pcVar12 = &cStack_f99;
        do {
          pcVar12 = pcVar12 + 1;
        } while (*pcVar12 != '\0');
        pcVar12[0] = ' ';
        pcVar12[1] = '\0';
        pcVar12 = &cStack_f99;
        do {
          pcVar12 = pcVar12 + 1;
        } while (*pcVar12 != '\0');
        lVar13 = 0;
        do {
          cVar1 = local_a88[lVar13];
          pcVar12[lVar13] = cVar1;
          lVar13 = lVar13 + 1;
        } while (cVar1 != '\0');
        pcVar12 = &cStack_f99;
        do {
          pcVar12 = pcVar12 + 1;
        } while (*pcVar12 != '\0');
        pcVar12[0] = ' ';
        pcVar12[1] = '\0';
        pcVar12 = &cStack_f99;
        do {
          pcVar12 = pcVar12 + 1;
        } while (*pcVar12 != '\0');
        lVar13 = 0;
        do {
          cVar1 = local_978[lVar13];
          pcVar12[lVar13] = cVar1;
          lVar13 = lVar13 + 1;
        } while (cVar1 != '\0');
        BVar4 = CreateProcessA((LPCSTR)0x0,local_f98,(LPSECURITY_ATTRIBUTES)0x0,
                               (LPSECURITY_ATTRIBUTES)0x0,1,0x8000200,(LPVOID)0x0,(LPCSTR)0x0,
                               &local_1118,&local_11c8);
        if (BVar4 != 0) {
          CloseHandle(local_1200);
          local_1200 = (HANDLE)0x0;
          CloseHandle(local_11f0);
          local_11f0 = (HANDLE)0x0;
          CloseHandle(local_11e8);
          local_11e8 = (HANDLE)0x0;
          CloseHandle(local_11e0);
          local_11e0 = (HANDLE)0x0;
          memset(&local_868,0,0x401);
          memset(local_458,0,0x401);
          pvVar7 = pvVar15;
          do {
            pvVar8 = pvVar7;
            if (*(char *)(uVar10 + (longlong)pvVar8) != *(char *)((longlong)pvVar8 + 0x18000d764)) {
              iVar14 = 100;
              local_11ac = iVar14;
              if (param_3 == (undefined *)0x0) goto LAB_180009880;
              local_1160 = 0;
              local_1158 = 0;
              local_1154 = 100;
              (*(code *)param_3)();
              if (param_3 == (undefined *)0x0) goto LAB_180009880;
              local_1148 = 3;
              local_1140 = 0;
              local_113c = 100;
              goto LAB_180009872;
            }
            pvVar7 = (HANDLE)((longlong)pvVar8 + 1);
          } while ((HANDLE)((longlong)pvVar8 + 1) != (HANDLE)0x5);
          iVar14 = (int)pvVar8 + 0x60;
          local_11ac = iVar14;
          if (param_3 != (undefined *)0x0) {
            local_1190 = 0;
            local_1188 = 0;
            local_1184 = iVar14;
            (*(code *)param_3)();
            if (param_3 != (undefined *)0x0) {
              local_1178 = 3;
              local_1170 = 0;
              local_116c = iVar14;
LAB_180009872:
              (*(code *)param_3)();
              local_11ac = iVar14;
            }
          }
LAB_180009880:
          Sleep(0);
          if (param_3 != (undefined *)0x0) {
            local_1130[0] = 6;
            iVar5 = (*(code *)param_3)(local_1130);
            if ((iVar5 == 0) && (hEvent != (HANDLE)0x0)) {
              BVar4 = SetEvent(hEvent);
              if (BVar4 == 0) {
                TerminateProcess(local_11c8.hProcess,0xffffffff);
              }
              CloseHandle(hEvent);
              local_11d0 = (HANDLE)0x0;
              hEvent = pvVar15;
            }
          }
          DVar6 = WaitForSingleObject(local_11c8.hProcess,0);
          if ((DVar6 == 0) && (iVar14 = iVar14 + -1, local_11ac = iVar14, iVar14 < 0))
          goto LAB_180009a22;
          local_1208 = local_1208 & 0xffffffff00000000;
          BVar4 = PeekNamedPipe(local_1218,&local_868,0x400,(LPDWORD)&local_1208,(LPDWORD)0x0,
                                (LPDWORD)0x0);
          if (BVar4 == 0) goto LAB_180009a22;
          if ((uint)local_1208 != 0) {
            BVar4 = ReadFile(local_1218,&local_868,0x400,(LPDWORD)&local_1208,(LPOVERLAPPED)0x0);
            if (BVar4 == 0) goto LAB_180009a22;
            if ((uint)local_1208 == 0) goto LAB_180009a22;
            FUN_180008c10(&local_868,local_1208 & 0xffffffff,local_458,param_3,param_4);
          }
          local_1208 = local_1208 & 0xffffffff00000000;
          BVar4 = PeekNamedPipe(local_1210,&local_868,0x400,(LPDWORD)&local_1208,(LPDWORD)0x0,
                                (LPDWORD)0x0);
          bVar3 = local_867;
          if (BVar4 == 0) goto LAB_180009a22;
          if ((((1 < (uint)local_1208) && (local_867 <= (uint)local_1208)) &&
              (BVar4 = ReadFile(local_1210,&local_868,(uint)local_867,(LPDWORD)&local_1208,
                                (LPOVERLAPPED)0x0), BVar4 != 0)) && (bVar3 == (uint)local_1208)) {
            FUN_180008e60(local_11f8,&local_868,param_3,param_4);
          }
          goto LAB_180009880;
        }
        CloseHandle(local_1200);
        local_1200 = (HANDLE)0x0;
        CloseHandle(local_11f8);
        local_11f8 = (HANDLE)0x0;
        CloseHandle(local_1218);
        local_1218 = (HANDLE)0x0;
        CloseHandle(local_11f0);
        local_11f0 = (HANDLE)0x0;
        CloseHandle(local_1210);
        local_1210 = (HANDLE)0x0;
        CloseHandle(local_11e8);
        local_11e8 = (HANDLE)0x0;
        CloseHandle(hEvent);
        local_11d0 = (HANDLE)0x0;
        CloseHandle(local_11e0);
        local_11e0 = (HANDLE)0x0;
      }
    }
  }
LAB_180009b8c:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_1268);
  return;
LAB_180009a22:
  DVar6 = WaitForSingleObject(local_11c8.hProcess,5000);
  if (DVar6 == 0x102) {
    TerminateProcess(local_11c8.hProcess,0xffffffff);
  }
  local_11d4 = 0;
  GetExitCodeProcess(local_11c8.hProcess,&local_11d4);
  CloseHandle(local_11c8.hProcess);
  local_11c8.hProcess = (HANDLE)0x0;
  CloseHandle(local_11c8.hThread);
  local_11c8.hThread = (HANDLE)0x0;
  CloseHandle(local_11f8);
  local_11f8 = (HANDLE)0x0;
  CloseHandle(local_1218);
  local_1218 = (HANDLE)0x0;
  CloseHandle(local_1210);
  local_1210 = (HANDLE)0x0;
  goto LAB_180009b8c;
}




undefined * FUN_180009bc0(void)

{
  return &DAT_180014b50;
}




/* Library Function - Single Match
    sscanf
   
   Library: Visual Studio 2019 Release */

int __cdecl sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_180009bc0();
  iVar1 = __stdio_common_vsscanf(*puVar2,_Src,0xffffffffffffffff,_Format,0,&local_res18);
  return iVar1;
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
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180009e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
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
  *(undefined8 *)(puVar3 + -8) = 0x180009e96;
  capture_previous_context((PCONTEXT)&DAT_180014c00);
  _DAT_180014b70 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180014c98 = puVar3 + 0x40;
  _DAT_180014c80 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180014b60 = 0xc0000409;
  _DAT_180014b64 = 1;
  _DAT_180014b78 = 1;
  DAT_180014b80 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180014018;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180014010;
  *(undefined8 *)(puVar3 + -8) = 0x180009f38;
  DAT_180014cf8 = _DAT_180014b70;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000d938);
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
  *(undefined8 *)(puVar3 + -8) = 0x180009f7e;
  capture_current_context((PCONTEXT)&DAT_180014c00);
  _DAT_180014b70 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_180014c98 = puVar3 + 0x30;
  _DAT_180014b60 = 0xc0000409;
  _DAT_180014b64 = 1;
  _DAT_180014b78 = 1;
  DAT_180014b80 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180009fea;
  DAT_180014cf8 = _DAT_180014b70;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000d938);
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
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180014018) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_18000a274(undefined8 *param_1,ulonglong param_2)

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
    FUN_18000af94();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_18000af74();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
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
LAB_18000a30a:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_1800150d8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_1800150d8;
        pvVar1 = DAT_1800150d8;
      }
      DAT_1800150d8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18000a30a;
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
    uVar3 = FUN_18000b144();
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
  
  uVar1 = FUN_18000a494(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_18000b4d0();
  if (cVar1 != '\0') {
    cVar1 = FUN_18000b4d0();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_18000b4d0();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_18000b4d0();
  FUN_18000b4d0();
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
    _execute_onexit_table(&DAT_1800150e8);
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
  FUN_18000b4d0();
  FUN_18000b4d0();
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
    DAT_1800150e0 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_18000b4d0();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18000b4d0();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18000b4d0();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000a494(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_1800150e1 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180014018 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180014018;
      _DAT_1800150e8 = in_RAX;
      uRam00000001800150f0 = in_RAX;
      _DAT_1800150f8 = in_RAX;
      _DAT_180015100 = in_RAX;
      uRam0000000180015108 = in_RAX;
      _DAT_180015110 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_1800150e8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180015100), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_1800150e1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018000a5fa) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000220; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000310;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_18000a5e3;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18000a5e3:
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
    DAT_1800150d8 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_1800150e0 == '\0') || (param_2 == '\0')) {
    FUN_18000b4d0();
    FUN_18000b4d0();
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
  
  bVar2 = (byte)DAT_180014018 & 0x3f;
  if (((DAT_180014018 ^ _DAT_1800150e8) >> bVar2 | (DAT_180014018 ^ _DAT_1800150e8) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1800150e8,_Func);
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

undefined8 FUN_18000a6c0(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_180015118,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_18000a812;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_180015148 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_180015148 != (HANDLE)0x0) goto LAB_18000a7b0;
  }
  else {
    DAT_180015148 = (HANDLE)0x0;
    (*pFVar3)(&DAT_180015140);
    bVar7 = 0x40 - ((byte)DAT_180014018 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_180015150 = DAT_180014018 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_180015158 = DAT_180014018 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_18000a7b0:
    uVar6 = FUN_18000a494(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_18000a820);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_18000a812:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_18000a820(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180015118);
  if (DAT_180015148 != (HANDLE)0x0) {
    CloseHandle(DAT_180015148);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180015118);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180015118);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180015118);
  uVar1 = (ulonglong)_tls_index;
  DAT_180014028 = DAT_180014028 + 1;
  *param_1 = DAT_180014028;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_180014028;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180015118);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180015118);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18000a92c:
                    /* WARNING: Could not recover jumptable at 0x00018000a938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180015118);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_180014028;
      goto LAB_18000a92c;
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
  
  if (DAT_180015148 != (HANDLE)0x0) {
    SetEvent(DAT_180015148);
                    /* WARNING: Could not recover jumptable at 0x00018000a989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_180015148);
    return;
  }
  bVar1 = (byte)DAT_180014018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018000b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180014018 ^ _DAT_180015158) >> bVar1 |
            (DAT_180014018 ^ _DAT_180015158) << 0x40 - bVar1))(&DAT_180015140);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_180015148 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180015118);
    WaitForSingleObjectEx(DAT_180015148,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00018000aa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180015118);
    return;
  }
  bVar1 = (byte)DAT_180014018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018000b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180014018 ^ _DAT_180015150) >> bVar1 |
            (DAT_180014018 ^ _DAT_180015150) << 0x40 - bVar1))
            (&DAT_180015140,&DAT_180015118,param_1);
  return;
}




void FUN_18000aa08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000aa0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180015160);
  return;
}




void FUN_18000aa18(void)

{
  __std_type_info_destroy_list(&DAT_180015160);
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
    if (DAT_180015174 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_180015174 = DAT_180015174 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_1800150d0 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c(pIVar12);
      FUN_18000aa18();
      FID_conflict__RTC_Initialize();
      DAT_1800150d0 = 0;
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
    if (DAT_1800150d0 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_1800150d0 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_18000aa08();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_18000c470,&DAT_18000c480);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_18000c460,&DAT_18000c468);
        DAT_1800150d0 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_18000b398();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180015174 = DAT_180015174 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x00018000ad6c) */
/* WARNING: Removing unreachable block (ram,0x00018000acfb) */
/* WARNING: Removing unreachable block (ram,0x00018000adaf) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_180015174 < 1)) {
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




undefined8 * FUN_18000ae24(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000ae64(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000ae84(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_18000aec4(undefined8 *param_1)

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




undefined8 * FUN_18000af30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000af74(void)

{
  undefined8 local_28 [5];
  
  FUN_18000ae64(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1800108c0);
}




void FUN_18000af94(void)

{
  undefined8 local_28 [5];
  
  FUN_18000aec4(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180010948);
}




char * FUN_18000afb4(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x00018000b096) */
/* WARNING: Removing unreachable block (ram,0x00018000b014) */
/* WARNING: Removing unreachable block (ram,0x00018000afef) */
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
  
  DAT_180014034 = 2;
  _DAT_180014030 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180014038 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180015178 = DAT_180015178 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_180015178 = DAT_180015178 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180014030 = 2;
    DAT_180014034 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_180014034 = 0xe;
      _DAT_180014030 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180014030 = 5;
        DAT_180014034 = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_18000b144(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180014040 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000b158(void)

{
  _DAT_18001517c = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x18000b193;
  FUN_18000b158();
  *(undefined8 *)(puVar4 + -8) = 0x18000b1a4;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18000b1ae;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x18000b1c8;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18000b209;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18000b23b;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18000b25d;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18000b27e;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18000b289;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18000b299;
    FUN_18000b158();
  }
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
  
  if (DAT_180014018 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180014018 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180014018 == 0x2b992ddfa232) {
      DAT_180014018 = 0x2b992ddfa233;
    }
  }
  DAT_180014010 = ~DAT_180014018;
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
  
  puVar1 = (ulonglong *)FUN_180003c90();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180009bc0();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_18000b398(void)

{
  return &DAT_180015180;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18000eb58; puVar1 < &DAT_18000eb58; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_18000eb68; puVar1 < &DAT_18000eb68; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_18000b4d0(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00018000b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_18000b500(undefined8 param_1,longlong param_2)

{
  MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
  ~CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
            ((CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_18000b510(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker(*(IStorageDevice **)(param_2 + 0x68));
  return;
}




void Unwind_18000b540(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker(*(IStorageDevice **)(param_2 + 0x68));
  return;
}




undefined * Catch_18000b570(void)

{
  return &DAT_18000182e;
}




undefined * Catch_18000b58b(void)

{
  return &DAT_180001a70;
}




undefined * Catch_18000b5a6(void)

{
  return &DAT_180001dce;
}




undefined * Catch_18000b5c1(void)

{
  return &DAT_180001ff0;
}




undefined * Catch_18000b5dc(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0xd0) + 8);
  if (pcVar1 != (code *)0x0) {
    *(undefined4 *)(param_2 + 0x38) = 5;
    *(undefined8 *)(param_2 + 0x40) = 0x100e;
    (*pcVar1)(param_2 + 0x38,*(undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x10));
  }
  return &DAT_180002659;
}




void Unwind_18000b630(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x138));
  return;
}




void Unwind_18000b640(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_18000b650(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_18000b660(undefined8 param_1,longlong param_2)

{
  FUN_180001120((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_18000b670(undefined8 param_1,longlong param_2)

{
  MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
  ~CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
            ((CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *)
             (param_2 + 0x50));
  return;
}




void Unwind_18000b680(undefined8 param_1,longlong param_2)

{
  MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
  ~CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
            ((CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *)
             (param_2 + 0x40));
  return;
}




void Unwind_18000b690(undefined8 param_1,longlong param_2)

{
  TBitmap::~TBitmap((TBitmap *)(param_2 + 0x40));
  return;
}




void Unwind_18000b6a0(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker(*(IStorageDevice **)(param_2 + 0x38));
  return;
}




void Unwind_18000b6d0(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker(*(IStorageDevice **)(param_2 + 0x38));
  return;
}




void Unwind_18000b700(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker(*(IStorageDevice **)(param_2 + 0x38));
  return;
}




undefined * Catch_18000b730(void)

{
  return &DAT_18000304e;
}




undefined * Catch_18000b750(void)

{
  return &DAT_1800039a0;
}




void Unwind_18000b770(undefined8 param_1,longlong param_2)

{
  FUN_180001120((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_18000b780(undefined8 param_1,longlong param_2)

{
  MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
  ~CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
            ((CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_> *)
             (param_2 + 0x38));
  return;
}




void Unwind_18000b790(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker(*(IStorageDevice **)(param_2 + 0x70));
  return;
}




void Catch_18000b7c0(undefined8 param_1,longlong param_2)

{
  FUN_180005d70(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000b7f0(undefined8 param_1,longlong param_2)

{
  CNtfsMFT::~CNtfsMFT((CNtfsMFT *)(*(longlong *)(param_2 + 0x40) + 0x70));
  return;
}




void Unwind_18000b800(undefined8 param_1,longlong param_2)

{
  TBitmap::~TBitmap((TBitmap *)(*(longlong *)(param_2 + 0x40) + 0x168));
  return;
}




void Unwind_18000b820(undefined8 param_1,longlong param_2)

{
  TBitmap::~TBitmap((TBitmap *)(*(longlong *)(param_2 + 0x40) + 0x180));
  return;
}




void Unwind_18000b840(undefined8 param_1,longlong param_2)

{
  MyTemplate::CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>::
  ~CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
            (*(CSimpleArray<unsigned_int,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_int>_>
               **)(param_2 + 0x40));
  return;
}




void Unwind_18000b850(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker(*(IStorageDevice **)(param_2 + 0x68));
  return;
}




undefined *
Catch_18000b880(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  FUN_180002680("The volume have some errors,please use Chkdsk to check, and use Chkdsk /F to fix!",
                param_2,param_3,param_4);
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0xa8) + 8);
  if (pcVar1 != (code *)0x0) {
    *(undefined4 *)(param_2 + 0x48) = 5;
    *(undefined8 *)(param_2 + 0x50) = 0x100e;
    (*pcVar1)(param_2 + 0x48,*(undefined8 *)(*(longlong *)(param_2 + 0xa8) + 0x10));
  }
  return &DAT_180004d56;
}




void Unwind_18000b8e0(undefined8 param_1,longlong param_2)

{
  FUN_180003fc0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_18000b8f0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x70));
  return;
}




void Unwind_18000b900(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0xb0));
  return;
}




void Unwind_18000b910(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x58));
  return;
}




void Unwind_18000b920(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x48));
  return;
}




void Unwind_18000b930(undefined8 param_1,longlong param_2)

{
  TBitmap::~TBitmap((TBitmap *)(param_2 + 0x78));
  return;
}




void Unwind_18000b940(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker(*(IStorageDevice **)(param_2 + 0x38));
  return;
}




void Unwind_18000b970(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x60));
  return;
}




void Unwind_18000b980(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x38));
  return;
}




void Unwind_18000b990(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)(param_2 + 0x28));
  return;
}




void Unwind_18000b9a0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x50));
  return;
}




void Unwind_18000b9b0(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x28));
  return;
}




void Unwind_18000b9c0(undefined8 param_1,longlong param_2)

{
  TBitmap::~TBitmap((TBitmap *)(param_2 + 0x28));
  return;
}




undefined * Catch_18000b9d0(void)

{
  return &DAT_180006188;
}




void Catch_18000b9f0(undefined8 param_1,longlong param_2)

{
  FUN_180008540(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000ba20(undefined8 param_1,longlong param_2)

{
  FUN_180006f70(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_18000ba30(undefined8 param_1,longlong param_2)

{
  FUN_180006ed0(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_18000ba40(undefined8 param_1,longlong param_2)

{
  FUN_180006fa0((longlong *)(*(longlong *)(param_2 + 0x30) + 0x20));
  return;
}




void Catch_18000ba50(undefined8 param_1,longlong param_2)

{
  FUN_180008410(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x30));
  deallocate(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
             *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000baa0(undefined8 param_1,longlong param_2)

{
  FUN_180006e20(*(longlong **)(param_2 + 0x80));
  return;
}




void Catch_18000bab0(undefined8 param_1,longlong param_2)

{
  FUN_180008460(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000bae0(undefined8 param_1,longlong param_2)

{
  FUN_180008460(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0xa0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000bb10(undefined8 param_1,longlong param_2)

{
  FUN_180006ed0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18000bb20(undefined8 param_1,longlong param_2)

{
  FUN_180006fa0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_18000bb30(undefined8 param_1,longlong param_2)

{
  FUN_180006e80((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18000bb40(undefined8 param_1,longlong param_2)

{
  FUN_180006e20(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_18000bb50(undefined8 param_1,longlong param_2)

{
  FUN_180006e20(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_18000bb60(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180006db0(*(longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000bb70(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180006f40((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10),param_2,param_3,param_4);
  return;
}




void Unwind_18000bb80(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180006e30(*(longlong **)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_18000bb90(undefined8 param_1,longlong param_2)

{
  FUN_180006e60(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_18000bba0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180006e30(*(longlong **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000bbb0(undefined8 param_1,longlong param_2)

{
  FUN_180006e60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18000bbc0(undefined8 param_1,longlong param_2)

{
  FUN_180006e20(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18000bbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180006db0(0x1800145b0,param_2,param_3,param_4);
  return;
}




void Unwind_18000bbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180006f40(&DAT_1800145c0,param_2,param_3,param_4);
  return;
}




void Unwind_18000bbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180006db0(0x1800145d8,param_2,param_3,param_4);
  return;
}




void Unwind_18000bc00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180006f40(&DAT_1800145e8,param_2,param_3,param_4);
  return;
}




void Unwind_18000bc10(undefined8 param_1,longlong param_2)

{
  FUN_180006ed0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_18000bc20(undefined8 param_1,longlong param_2)

{
  FUN_180006fa0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18000bc30(undefined8 param_1,longlong param_2)

{
  FUN_180006df0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18000bc40(undefined8 param_1,longlong param_2)

{
  FUN_180006e20((longlong *)(param_2 + 0x30));
  return;
}




undefined8 Catch_18000bc50(void)

{
  return 0x18000756c;
}




void Unwind_18000bc70(undefined8 param_1,longlong param_2)

{
  FUN_180006ed0((longlong *)(param_2 + 0xc0));
  return;
}




void Unwind_18000bc80(undefined8 param_1,longlong param_2)

{
  CHardDriveIOSetting::~CHardDriveIOSetting((CHardDriveIOSetting *)(param_2 + 0x48));
  return;
}




void Unwind_18000bc90(undefined8 param_1,longlong param_2)

{
  FUN_180004030((undefined8 *)(param_2 + 0x160));
  return;
}




void Unwind_18000bca0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::~CHardDriveIO((CHardDriveIO *)(param_2 + 0x60));
  return;
}




void Unwind_18000bcb0(undefined8 param_1,longlong param_2)

{
  FUN_180001110((undefined8 *)(param_2 + 0xe0));
  return;
}




void Unwind_18000bcc0(undefined8 param_1,longlong param_2)

{
  FUN_180006ed0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18000bcd0(void)

{
  _Init_thread_abort(&DAT_1800145a8);
  return;
}




void Unwind_18000bce0(void)

{
  _Init_thread_abort(&DAT_1800145d0);
  return;
}




void Unwind_18000bcf0(undefined8 param_1,longlong param_2)

{
  FUN_180006fc0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18000bd00(void)

{
  _Init_thread_abort(&DAT_1800145f8);
  return;
}




void Catch_18000bd10(undefined8 param_1,longlong param_2)

{
  FUN_180008890(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000bd40(undefined8 param_1,longlong param_2)

{
  FUN_180008890(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000bd70(undefined8 param_1,longlong param_2)

{
  FUN_180006ed0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_18000bd80(undefined8 param_1,longlong param_2)

{
  FUN_180006fa0((longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
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




void FUN_18000be15(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18000be2c(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18000be48(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_18000be80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800087d0((longlong *)&DAT_1800145c0,param_2,param_3,param_4);
  free(DAT_1800145c0);
  return;
}




void FUN_18000bec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800087d0((longlong *)&DAT_1800145e8,param_2,param_3,param_4);
  free(DAT_1800145e8);
  return;
}



