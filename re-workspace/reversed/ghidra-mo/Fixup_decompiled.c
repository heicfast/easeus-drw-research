
undefined8 * FUN_180001000(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  *param_1 = CBcd::vftable;
  param_1[0x22] = 0xffffffffffffffff;
  param_1[0x23] = 0xffffffffffffffff;
  param_1[0x24] = 0;
  memset(param_1 + 0x25,0,0x208);
  memset(param_1 + 1,0,0x104);
  memset(param_1 + 0x66,0,0x104);
  param_1[1] = 0x4443425c746f6f42;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x87] = 0xffffffffffffffff;
  return param_1;
}




undefined8 * FUN_1800010b0(undefined8 *param_1)

{
  char *pcVar1;
  
  *param_1 = CBcd::vftable;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  param_1[0x22] = 0xffffffffffffffff;
  param_1[0x23] = 0xffffffffffffffff;
  param_1[0x24] = 0;
  memset(param_1 + 0x25,0,0x208);
  memset(param_1 + 1,0,0x104);
  memset(param_1 + 0x66,0,0x104);
  param_1[1] = 0x4443425c746f6f42;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x87] = 0xffffffffffffffff;
  *param_1 = CEFIFirstBcd::vftable;
  pcVar1 = (char *)(param_1 + 1);
  pcVar1[0] = 'E';
  pcVar1[1] = 'F';
  pcVar1[2] = 'I';
  pcVar1[3] = '\\';
  pcVar1[4] = 'M';
  pcVar1[5] = 'I';
  pcVar1[6] = 'C';
  pcVar1[7] = 'R';
  pcVar1 = (char *)(param_1 + 2);
  pcVar1[0] = 'O';
  pcVar1[1] = 'S';
  pcVar1[2] = 'O';
  pcVar1[3] = 'F';
  pcVar1[4] = 'T';
  pcVar1[5] = '\\';
  pcVar1[6] = 'B';
  pcVar1[7] = 'O';
  *(undefined4 *)(param_1 + 3) = 0x425c544f;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x4443;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  return param_1;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x11a0  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x11a0  2  ??0IObject@@QEAA@AEBU0@@Z
                       0x11a0  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




void FUN_1800011b0(undefined8 *param_1)

{
  *param_1 = CBcd::vftable;
  return;
}




void FUN_1800011c0(undefined8 *param_1)

{
  *param_1 = CEFIFirstBcd::vftable;
  *param_1 = CBcd::vftable;
  return;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  undefined8 uVar1;
  
                    /* 0x11f0  4  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x1200  5  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x1200  6  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x1200  7  ??4CNTFSLib@@QEAAAEAV0@$$QEAV0@@Z
                       0x1200  8  ??4CNTFSLib@@QEAAAEAV0@AEBV0@@Z
                       0x1200  9  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x1200  10  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




undefined8 * FUN_180001210(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CBcd::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001240(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CEFIFirstBcd::vftable;
  *param_1 = CBcd::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1290  12  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




void FUN_1800012a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  local_28 = DAT_18000e058 ^ (ulonglong)auStack_448;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  memset(&local_418,0,1000);
  puVar2 = (undefined8 *)FUN_1800034a0();
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




void FUN_180001390(uint param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_18000e058 ^ (ulonglong)auStack_68;
  iVar1 = ZwOpenProcessToken(0xffffffffffffffff,0x2000000,&local_30);
  if (iVar1 != 0) {
    __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
    return;
  }
  uStack_34 = 0;
  local_24 = (ulonglong)param_1;
  local_40 = 0;
  local_28 = 1;
  local_1c = 2;
  local_48 = 0;
  local_38 = param_1;
  ZwAdjustPrivilegesToken(local_30,0,&local_28,0x10);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




void FUN_180001440(char *param_1)

{
  char cVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  HANDLE hDevice;
  char *pcVar5;
  undefined1 auStackY_2e8 [32];
  DWORD local_2a8 [3];
  CHAR aCStack_299 [641];
  ulonglong local_18;
  
  local_18 = DAT_18000e058 ^ (ulonglong)auStackY_2e8;
  memset(aCStack_299 + 1,0,0x280);
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    pcVar5[(longlong)(aCStack_299 + (1 - (longlong)param_1))] = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffffffffffff;
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 + 1;
  } while (param_1[uVar4 + 1] != '\0');
  if (0x27f < uVar4) {
    __report_rangecheckfailure();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  aCStack_299[uVar4 + 1] = '\0';
  hDevice = CreateFileA(aCStack_299 + 1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hDevice != (HANDLE)0xffffffffffffffff) {
    local_2a8[0] = 0;
    DeviceIoControl(hDevice,0x90083,(LPVOID)0x0,0,(LPVOID)0x0,0,local_2a8,(LPOVERLAPPED)0x0);
    FlushFileBuffers(hDevice);
    CloseHandle(hDevice);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2e8);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180001570(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  HANDLE hFile;
  undefined1 auStackY_1178 [32];
  DWORD local_1138 [4];
  CHAR local_1128 [272];
  undefined1 local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x180001580;
  local_18 = DAT_18000e058 ^ (ulonglong)auStackY_1178;
  FUN_1800034b0(local_1128,"\\\\.\\PHYSICALDRIVE%d",(ulonglong)param_2,param_4);
  hFile = CreateFileA(local_1128,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
    memset(local_1018,0,0x1000);
    local_1138[0] = 0;
    ReadFile(hFile,local_1018,0x1000,local_1138,(LPOVERLAPPED)0x0);
    CloseHandle(hFile);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_1178);
  return;
}




undefined4 FUN_180001670(undefined8 param_1,HANDLE param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined4 local_res18 [2];
  LONG local_res20 [2];
  DWORD local_18 [4];
  
  local_res20[0] = 0;
  DVar1 = SetFilePointer(param_2,0x10,local_res20,1);
  if (DVar1 != 0) {
    local_res18[0] = 0;
    local_18[0] = 0;
    BVar2 = ReadFile(param_2,local_res18,4,local_18,(LPOVERLAPPED)0x0);
    if (BVar2 != 0) {
      return local_res18[0];
    }
  }
  return 0xffffffff;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x16e0  13  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x0001800016e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




void FUN_1800016f0(undefined8 param_1,HANDLE param_2,char param_3)

{
  DWORD DVar1;
  LONG lDistanceToMove;
  undefined1 auStackY_58 [32];
  LONG local_28 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18000e058 ^ (ulonglong)auStackY_58;
  if ((longlong)param_2 - 1U < 0xfffffffffffffffe) {
    local_28[0] = 0;
    lDistanceToMove = 0x1c;
    if (param_3 != '\0') {
      lDistanceToMove = 0x50;
    }
    DVar1 = SetFilePointer(param_2,lDistanceToMove,local_28,1);
    if (DVar1 != 0) {
      local_20 = 0;
      local_28[1] = 0;
      ReadFile(param_2,&local_20,8,(LPDWORD)(local_28 + 1),(LPOVERLAPPED)0x0);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_58);
  return;
}




void FUN_1800017a0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_148 [31];
  char cStack_129;
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18000e058 ^ (ulonglong)auStack_148;
  *(longlong **)(param_1 + 0x120) = param_2;
  if (param_2 != (longlong *)0x0) {
    memset(local_128,0,0x104);
    GetSystemWindowsDirectoryA(local_128,0x104);
    pcVar3 = &cStack_129;
    do {
      pcVar5 = pcVar3;
      pcVar3 = pcVar5 + 1;
    } while (pcVar5[1] != '\0');
    builtin_strncpy(pcVar5 + 1,"\\BcdLog.txt",0xc);
    Log_Init(local_128,1,0);
    memset((void *)(param_1 + 0x22c),0,0x104);
    memset((void *)(param_1 + 0x330),0,0x104);
    uVar4 = 0;
    uVar9 = 0x104;
    memset((void *)(param_1 + 0x128),0,0x104);
    pcVar3 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
    if (pcVar3 == (char *)0x0) {
      FUN_1800012a0("Query system partition GUID failed!\n",uVar4,uVar9,param_4);
    }
    else {
      lVar10 = param_1 - (longlong)pcVar3;
      pcVar5 = pcVar3;
      do {
        cVar1 = *pcVar5;
        pcVar5[lVar10 + 0x330] = cVar1;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar3;
      } while (cVar1 != '\0');
      do {
        cVar1 = *pcVar6;
        pcVar6[lVar10 + 0x128] = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      lVar7 = (param_1 + 0x22c) - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        pcVar3[lVar7] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      lVar7 = param_1 + 0x22b;
      do {
        pcVar3 = (char *)(lVar7 + 1);
        lVar7 = lVar7 + 1;
      } while (*pcVar3 != '\0');
      lVar8 = 0;
      do {
        cVar1 = *(char *)(param_1 + 8 + lVar8);
        *(char *)(lVar7 + lVar8) = cVar1;
        lVar8 = lVar8 + 1;
      } while (cVar1 != '\0');
      DVar2 = GetFileAttributesA((LPCSTR)(param_1 + 0x22c));
      if (DVar2 != 0xffffffff) {
        SetFileAttributesA((LPCSTR)(param_1 + 0x22c),DVar2 & 0xfffffffe);
      }
      FUN_1800021f0(param_1,param_2,lVar10,param_4);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
  return;
}




void FUN_180001980(longlong param_1,uint param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  HANDLE hFile;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStackY_e8 [32];
  LONG local_a8;
  int local_a4;
  DWORD local_a0 [6];
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_18000e058 ^ (ulonglong)auStackY_e8;
  iVar3 = 0;
  do {
    uVar8 = 0;
    uVar7 = 3;
    hFile = CreateFileA((LPCSTR)(param_1 + 0x22c),0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                        (HANDLE)0x0);
    if (((longlong)hFile + 1U & 0xfffffffffffffffe) == 0) {
      GetLastError();
      RtlInitUnicodeString(local_58,L"\\Registry\\Machine\\BCD00000000");
      local_80 = local_58;
      local_a0[4] = 0x30;
      local_88 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_78 = 0x40;
      iVar2 = FUN_180001390(0x12);
      if (((iVar2 != 0) && (iVar2 = FUN_180001390(0x11), iVar2 != 0)) &&
         (iVar2 = ZwUnloadKey(local_a0 + 4), iVar2 != 0)) {
        RtlNtStatusToDosError(iVar2);
      }
    }
    iVar2 = iVar3 + 1;
    if (iVar3 == 2) goto LAB_180001c15;
    iVar3 = iVar2;
  } while ((hFile == (HANDLE)0xffffffffffffffff) || (hFile == (HANDLE)0x0));
  iVar3 = FUN_180001570(param_1,param_2,uVar7,uVar8);
  local_a0[0] = 0;
  do {
    local_60 = 0;
    BVar4 = ReadFile(hFile,&local_60,8,local_a0,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      ZwClose(hFile);
      goto LAB_180001c15;
    }
    if (local_60 == 0xffffffa0) {
      local_a8 = 0;
      DVar5 = SetFilePointer(hFile,0x1c,&local_a8,1);
      if (DVar5 != 0) {
        local_58[0] = 0;
        local_a0[1] = 0;
        BVar4 = ReadFile(hFile,local_58,8,local_a0 + 1,(LPOVERLAPPED)0x0);
        if ((BVar4 != 0) &&
           (lVar6 = (longlong)(local_58[0] + (ulonglong)((uint)(local_58[0] >> 0x3f) & 0x1ff)) >> 9,
           lVar6 != -1)) {
          local_a8 = 0;
          DVar5 = SetFilePointer(hFile,0x10,&local_a8,1);
          if (DVar5 != 0) {
            local_a4 = 0;
            local_a0[2] = 0;
            BVar4 = ReadFile(hFile,&local_a4,4,local_a0 + 2,(LPOVERLAPPED)0x0);
            if ((((BVar4 != 0) && (local_a4 != -1)) && (iVar3 == local_a4)) && (param_3 == lVar6)) {
              ZwClose(hFile);
              *(uint *)(param_1 + 0x10c) = param_2;
              *(longlong *)(param_1 + 0x110) = param_3;
              goto LAB_180001c15;
            }
          }
        }
      }
    }
    if (local_a0[0] == 0) {
      local_a0[3] = 0;
      SetFilePointer(hFile,0,(PLONG)(local_a0 + 3),0);
      cVar1 = FUN_180003350(param_1,hFile,param_3 << 9,iVar3);
      if (cVar1 != '\0') {
        *(uint *)(param_1 + 0x10c) = param_2;
        *(longlong *)(param_1 + 0x110) = param_3;
      }
      ZwClose(hFile);
LAB_180001c15:
      __security_check_cookie(local_48 ^ (ulonglong)auStackY_e8);
      return;
    }
  } while( true );
}




void FUN_180001c40(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  BOOL BVar5;
  DWORD DVar6;
  HANDLE hFile;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStackY_d8 [32];
  LONG local_98;
  int local_94;
  DWORD local_90 [6];
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_18000e058 ^ (ulonglong)auStackY_d8;
  lVar8 = param_1 - (longlong)param_2;
  do {
    cVar1 = *param_2;
    param_2[lVar8 + 0x330] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  iVar4 = 0;
  do {
    uVar10 = 0;
    uVar9 = 3;
    hFile = CreateFileA((LPCSTR)(param_1 + 0x22c),0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                        (HANDLE)0x0);
    if (((longlong)hFile + 1U & 0xfffffffffffffffe) == 0) {
      GetLastError();
      RtlInitUnicodeString(local_48,L"\\Registry\\Machine\\BCD00000000");
      local_70 = local_48;
      local_90[4] = 0x30;
      local_78 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_68 = 0x40;
      iVar2 = FUN_180001390(0x12);
      if (((iVar2 != 0) && (iVar2 = FUN_180001390(0x11), iVar2 != 0)) &&
         (iVar2 = ZwUnloadKey(local_90 + 4), iVar2 != 0)) {
        RtlNtStatusToDosError(iVar2);
      }
    }
    iVar2 = iVar4 + 1;
    if (iVar4 == 2) goto LAB_180001f12;
    iVar4 = iVar2;
  } while ((hFile == (HANDLE)0xffffffffffffffff) || (hFile == (HANDLE)0x0));
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x120) + 8))
                    (*(longlong **)(param_1 + 0x120),param_1 + 0x330);
  iVar4 = FUN_180001570(param_1,uVar3,uVar9,uVar10);
  lVar8 = (**(code **)**(undefined8 **)(param_1 + 0x120))
                    (*(undefined8 **)(param_1 + 0x120),param_1 + 0x330);
  local_90[0] = 0;
  do {
    local_50 = 0;
    BVar5 = ReadFile(hFile,&local_50,8,local_90,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
      CloseHandle(hFile);
      goto LAB_180001f12;
    }
    if (local_50 == 0xffffffa0) {
      local_98 = 0;
      DVar6 = SetFilePointer(hFile,0x1c,&local_98,1);
      if (DVar6 != 0) {
        local_48[0] = 0;
        local_90[1] = 0;
        BVar5 = ReadFile(hFile,local_48,8,local_90 + 1,(LPOVERLAPPED)0x0);
        if ((BVar5 != 0) &&
           (lVar7 = (longlong)(local_48[0] + (ulonglong)((uint)(local_48[0] >> 0x3f) & 0x1ff)) >> 9,
           lVar7 != -1)) {
          local_98 = 0;
          DVar6 = SetFilePointer(hFile,0x10,&local_98,1);
          if (DVar6 != 0) {
            local_94 = 0;
            local_90[2] = 0;
            BVar5 = ReadFile(hFile,&local_94,4,local_90 + 2,(LPOVERLAPPED)0x0);
            if ((((BVar5 != 0) && (local_94 != -1)) && (iVar4 == local_94)) && (lVar8 == lVar7)) {
              CloseHandle(hFile);
              *(uint *)(param_1 + 0x10c) = uVar3;
              *(longlong *)(param_1 + 0x110) = lVar8;
              goto LAB_180001f12;
            }
          }
        }
      }
    }
    if (local_90[0] == 0) {
      local_90[3] = 0;
      SetFilePointer(hFile,0,(PLONG)(local_90 + 3),0);
      cVar1 = FUN_180003350(param_1,hFile,lVar8 << 9,iVar4);
      if (cVar1 != '\0') {
        *(uint *)(param_1 + 0x10c) = uVar3;
        *(longlong *)(param_1 + 0x110) = lVar8;
      }
      CloseHandle(hFile);
LAB_180001f12:
      __security_check_cookie(local_38 ^ (ulonglong)auStackY_d8);
      return;
    }
  } while( true );
}




undefined8 FUN_180001f70(longlong param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hObject;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  hObject = CreateFileA((LPCSTR)(param_1 + 0x22c),0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                        (HANDLE)0x0);
  if ((longlong)hObject - 1U < 0xfffffffffffffffe) {
    BVar1 = CloseHandle(hObject);
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
  }
  DVar2 = GetLastError();
  return CONCAT71((int7)(CONCAT44(extraout_var_00,DVar2) >> 8),DVar2 == 0x20);
}




ulonglong FUN_180001fd0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180001fdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x30))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180001ff0(longlong param_1)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE pvVar4;
  undefined4 extraout_var;
  int iVar5;
  undefined1 local_48 [16];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined1 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar5 = 0;
  pvVar4 = CreateFileA((LPCSTR)(param_1 + 0x22c),0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                       (HANDLE)0x0);
  if ((longlong)pvVar4 - 1U < 0xfffffffffffffffe) {
    CloseHandle(pvVar4);
  }
  else {
    DVar2 = GetLastError();
    if (DVar2 != 0x20) {
      return CONCAT44(extraout_var,DVar2) & 0xffffffffffffff00;
    }
  }
  do {
    pvVar4 = CreateFileA((LPCSTR)(param_1 + 0x22c),0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                         (HANDLE)0x0);
    if (((longlong)pvVar4 + 1U & 0xfffffffffffffffe) != 0) {
      CloseHandle(pvVar4);
      return 0;
    }
    RtlInitUnicodeString(local_48,L"\\Registry\\Machine\\BCD00000000");
    local_28 = local_48;
    local_38[0] = 0x30;
    local_30 = 0;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = 0x40;
    iVar3 = FUN_180001390(0x12);
    if (((iVar3 != 0) && (iVar3 = FUN_180001390(0x11), iVar3 != 0)) &&
       (iVar3 = ZwUnloadKey(local_38), iVar3 != 0)) {
      RegUnLoadKeyA((HKEY)0xffffffff80000002,"BCD00000000");
    }
    bVar1 = iVar5 < 3;
    iVar5 = iVar5 + 1;
  } while (bVar1);
  return 1;
}




undefined8 FUN_180002180(longlong param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hObject;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  FUN_180002890();
  hObject = CreateFileA((LPCSTR)(param_1 + 0x22c),0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                        (HANDLE)0x0);
  if ((longlong)hObject - 1U < 0xfffffffffffffffe) {
    BVar1 = CloseHandle(hObject);
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
  }
  DVar2 = GetLastError();
  return CONCAT71((int7)(CONCAT44(extraout_var_00,DVar2) >> 8),DVar2 == 0x20);
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800021f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  DWORD DVar4;
  BOOL BVar5;
  longlong lVar6;
  HANDLE pvVar7;
  longlong lVar8;
  char *pcVar9;
  undefined1 auStackY_1288 [32];
  DWORD local_1248 [2];
  undefined8 local_1240;
  CHAR local_1238 [272];
  CHAR local_1128 [272];
  longlong local_1018 [63];
  char local_e1a;
  char local_e19;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x18000220a;
  local_18 = DAT_18000e058 ^ (ulonglong)auStackY_1288;
  pcVar9 = (char *)(param_1 + 0x330);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x120) + 8))
                    (*(longlong **)(param_1 + 0x120),pcVar9);
  lVar6 = (**(code **)**(undefined8 **)(param_1 + 0x120))(*(undefined8 **)(param_1 + 0x120),pcVar9);
  FUN_1800034b0(local_1128,"\\\\.\\PHYSICALDRIVE%d",(ulonglong)uVar3,param_4);
  lVar8 = 0;
  pvVar7 = CreateFileA(local_1128,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if ((longlong)pvVar7 - 1U < 0xfffffffffffffffe) {
    local_1240 = lVar6 << 9;
    local_1248[0] = 0;
    DVar4 = SetFilePointer(pvVar7,(LONG)local_1240,(PLONG)((longlong)&local_1240 + 4),0);
    if (DVar4 != 0) {
      memset(local_1018,0,0x1000);
      BVar5 = ReadFile(pvVar7,local_1018,0x1000,local_1248,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        CloseHandle(pvVar7);
      }
      else {
        CloseHandle(pvVar7);
        if (((local_1248[0] == 0x1000) && (local_e1a == 'U')) && (local_e19 == -0x56)) {
          do {
            if (*(longlong *)((longlong)local_1018 + lVar8) == 0x2052474d544f4f42) {
              memset(local_1238,0,0x104);
              lVar6 = -(longlong)pcVar9;
              do {
                cVar2 = *pcVar9;
                pcVar9[(longlong)(local_1238 + lVar6)] = cVar2;
                pcVar9 = pcVar9 + 1;
              } while (cVar2 != '\0');
              pcVar9 = (char *)((longlong)&local_1240 + 7);
              do {
                pcVar1 = pcVar9 + 1;
                pcVar9 = pcVar9 + 1;
              } while (*pcVar1 != '\0');
              *(char (*) [8])pcVar9 = (char  [8])0x72676d746f6f62;
              pvVar7 = CreateFileA(local_1238,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                                   (HANDLE)0x0);
              if ((longlong)pvVar7 - 1U < 0xfffffffffffffffe) {
                CloseHandle(pvVar7);
              }
              else {
                GetLastError();
              }
              break;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < 0x1f6);
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_1288);
  return;
}




bool FUN_180002420(longlong param_1)

{
  char cVar1;
  HANDLE pvVar2;
  
  if ((longlong)*(HANDLE *)(param_1 + 0x438) - 1U < 0xfffffffffffffffe) {
    CloseHandle(*(HANDLE *)(param_1 + 0x438));
    *(undefined8 *)(param_1 + 0x438) = 0xffffffffffffffff;
  }
  pvVar2 = CreateFileA((LPCSTR)(param_1 + 0x22c),0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                       (HANDLE)0x0);
  if ((longlong)pvVar2 - 1U < 0xfffffffffffffffe) {
    CloseHandle(pvVar2);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x10))
                      (*(longlong **)(param_1 + 0x120),param_1 + 0x330);
    if (cVar1 != '\0') {
      return true;
    }
    pvVar2 = CreateFileA((LPCSTR)(param_1 + 0x22c),0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                         (HANDLE)0x0);
    *(HANDLE *)(param_1 + 0x438) = pvVar2;
    return (longlong)pvVar2 - 1U < 0xfffffffffffffffe;
  }
  GetLastError();
  return false;
}




void FUN_180002520(longlong param_1,HANDLE param_2,int param_3,int param_4,longlong param_5,
                  longlong param_6,longlong param_7,char param_8)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined1 auStackY_58 [32];
  LONG local_28;
  DWORD local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_18000e058 ^ (ulonglong)auStackY_58;
  if ((((longlong)param_2 - 1U < 0xfffffffffffffffe) && (param_3 == param_4)) &&
     (param_6 == param_5)) {
    local_28 = -1;
    DVar1 = SetFilePointer(param_2,-0x1c,&local_28,1);
    if (DVar1 != 0) {
      local_20 = param_7 << 9;
      local_24 = 0;
      local_28 = 0;
      BVar2 = WriteFile(param_2,&local_20,8,&local_24,(LPOVERLAPPED)0x0);
      if ((BVar2 == 0) || (local_24 != 8)) {
        SetFilePointer(*(HANDLE *)(param_1 + 0x438),0x1c,&local_28,1);
      }
      else if (param_8 == '\0') {
        SetFilePointer(param_2,0x14,&local_28,1);
      }
      else {
        SetFilePointer(param_2,0x18,&local_28,1);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_58);
  return;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x2670  14  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180002673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




void FUN_180002680(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  int iVar6;
  HANDLE hFile;
  longlong lVar7;
  bool bVar8;
  undefined1 auStackY_98 [32];
  DWORD local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_18000e058 ^ (ulonglong)auStackY_98;
  iVar4 = FUN_180001570(param_1,*(uint *)(param_1 + 0x10c),param_3,param_4);
  hFile = CreateFileA((LPCSTR)(param_1 + 0x22c),0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
    bVar2 = false;
    bVar1 = false;
    local_50 = 0;
    local_58[0] = 0;
    do {
      BVar5 = ReadFile(hFile,&local_50,8,local_58,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
LAB_180002870:
        ZwClose(hFile);
        goto LAB_180002857;
      }
      if (param_2 == '\0') {
        bVar8 = local_50 == 0xffffffa0;
LAB_1800027a6:
        if (((bVar8) && (lVar7 = FUN_1800016f0(param_1,hFile,param_2), lVar7 != -1)) &&
           (iVar6 = FUN_180001670(param_1,hFile), iVar6 != -1)) {
          cVar3 = FUN_180002520(param_1,hFile,iVar4,iVar6,lVar7,*(longlong *)(param_1 + 0x118),
                                *(longlong *)(param_1 + 0x110),param_2);
          bVar1 = bVar2;
          if (cVar3 != '\0') {
            bVar2 = true;
            bVar1 = true;
          }
        }
      }
      else if (local_50 == 0x746e656d656c45) {
        BVar5 = ReadFile(hFile,&local_50,8,local_58,(LPOVERLAPPED)0x0);
        if (BVar5 == 0) goto LAB_180002870;
        if (local_58[0] != 0) {
          bVar8 = (int)local_50 == -0x108;
          goto LAB_1800027a6;
        }
        break;
      }
    } while (local_58[0] != 0);
    ZwClose(hFile);
    if (bVar1) {
      FUN_180001440((char *)(param_1 + 0x128));
    }
  }
LAB_180002857:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_98);
  return;
}




undefined8 FUN_180002890(void)

{
  ulonglong uVar1;
  undefined1 local_48 [16];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined1 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  RtlInitUnicodeString(local_48,L"\\Registry\\Machine\\BCD00000000");
  local_28 = local_48;
  local_38[0] = 0x30;
  local_30 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_20 = 0x40;
  uVar1 = FUN_180001390(0x12);
  if ((int)uVar1 != 0) {
    uVar1 = FUN_180001390(0x11);
    if ((int)uVar1 != 0) {
      uVar1 = ZwUnloadKey(local_38);
      if ((int)uVar1 == 0) {
        return CONCAT71((int7)(uVar1 >> 8),1);
      }
      uVar1 = RtlNtStatusToDosError(uVar1 & 0xffffffff);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}




void FUN_180002920(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  int iVar6;
  undefined8 uVar7;
  HANDLE hFile;
  longlong lVar8;
  char cVar9;
  bool bVar10;
  undefined1 auStackY_98 [32];
  DWORD local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_18000e058 ^ (ulonglong)auStackY_98;
  cVar9 = (char)param_3;
  lVar8 = (param_1 + 0x330) - (longlong)param_2;
  do {
    cVar3 = *param_2;
    param_2[lVar8] = cVar3;
    param_2 = param_2 + 1;
  } while (cVar3 != '\0');
  iVar4 = FUN_180001570(param_1,*(uint *)(param_1 + 0x10c),param_3,param_4);
  uVar7 = (**(code **)**(undefined8 **)(param_1 + 0x120))
                    (*(undefined8 **)(param_1 + 0x120),param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x118) = uVar7;
  if ((longlong)*(HANDLE *)(param_1 + 0x438) - 1U < 0xfffffffffffffffe) {
    CloseHandle(*(HANDLE *)(param_1 + 0x438));
    *(undefined8 *)(param_1 + 0x438) = 0xffffffffffffffff;
  }
  if (*(longlong *)(param_1 + 0x118) != *(longlong *)(param_1 + 0x110)) {
    hFile = CreateFileA((LPCSTR)(param_1 + 0x22c),0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                        (HANDLE)0x0);
    *(HANDLE *)(param_1 + 0x438) = hFile;
    if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
      local_50 = 0;
      local_58[0] = 0;
      BVar5 = ReadFile(hFile,&local_50,8,local_58,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
LAB_180002bc6:
        if ((longlong)*(HANDLE *)(param_1 + 0x438) - 1U < 0xfffffffffffffffe) {
          CloseHandle(*(HANDLE *)(param_1 + 0x438));
          *(undefined8 *)(param_1 + 0x438) = 0xffffffffffffffff;
        }
      }
      else {
        bVar2 = false;
        bVar1 = false;
        do {
          BVar5 = ReadFile(*(HANDLE *)(param_1 + 0x438),&local_50,8,local_58,(LPOVERLAPPED)0x0);
          if (BVar5 == 0) goto LAB_180002bc6;
          if (cVar9 == '\0') {
            bVar10 = local_50 == 0xffffffa0;
LAB_180002adf:
            if (((bVar10) &&
                (lVar8 = FUN_1800016f0(param_1,*(HANDLE *)(param_1 + 0x438),cVar9), lVar8 != -1)) &&
               (iVar6 = FUN_180001670(param_1,*(HANDLE *)(param_1 + 0x438)), iVar6 != -1)) {
              cVar3 = FUN_180002520(param_1,*(HANDLE *)(param_1 + 0x438),iVar4,iVar6,lVar8,
                                    *(longlong *)(param_1 + 0x110),*(longlong *)(param_1 + 0x118),
                                    cVar9);
              bVar1 = bVar2;
              if (cVar3 != '\0') {
                bVar2 = true;
                bVar1 = true;
              }
            }
          }
          else if (local_50 == 0x746e656d656c45) {
            BVar5 = ReadFile(*(HANDLE *)(param_1 + 0x438),&local_50,8,local_58,(LPOVERLAPPED)0x0);
            if (BVar5 == 0) goto LAB_180002bc6;
            if (local_58[0] != 0) {
              bVar10 = (int)local_50 == -0x108;
              goto LAB_180002adf;
            }
            break;
          }
        } while (local_58[0] != 0);
        if ((longlong)*(HANDLE *)(param_1 + 0x438) - 1U < 0xfffffffffffffffe) {
          CloseHandle(*(HANDLE *)(param_1 + 0x438));
          *(undefined8 *)(param_1 + 0x438) = 0xffffffffffffffff;
        }
        if (bVar1) {
          FUN_180001440((char *)(param_1 + 0x128));
        }
      }
    }
    else {
      GetLastError();
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_98);
  return;
}




void FUN_180002c00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  int iVar6;
  HANDLE pvVar7;
  longlong lVar8;
  char cVar9;
  bool bVar10;
  undefined1 auStackY_98 [32];
  DWORD local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_18000e058 ^ (ulonglong)auStackY_98;
  cVar9 = (char)param_3;
  iVar4 = FUN_180001570(param_1,*(uint *)(param_1 + 0x10c),param_3,param_4);
  pvVar7 = *(HANDLE *)(param_1 + 0x438);
  *(longlong *)(param_1 + 0x118) = param_2;
  if ((pvVar7 != (HANDLE)0xffffffffffffffff) && (pvVar7 != (HANDLE)0x0)) {
    CloseHandle(pvVar7);
    param_2 = *(longlong *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x438) = 0xffffffffffffffff;
  }
  if (param_2 != *(longlong *)(param_1 + 0x110)) {
    pvVar7 = CreateFileA((LPCSTR)(param_1 + 0x22c),0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                         (HANDLE)0x0);
    *(HANDLE *)(param_1 + 0x438) = pvVar7;
    if ((longlong)pvVar7 - 1U < 0xfffffffffffffffe) {
      local_50 = 0;
      local_58[0] = 0;
      BVar5 = ReadFile(pvVar7,&local_50,8,local_58,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
LAB_180002e79:
        if ((longlong)*(HANDLE *)(param_1 + 0x438) - 1U < 0xfffffffffffffffe) {
          CloseHandle(*(HANDLE *)(param_1 + 0x438));
          *(undefined8 *)(param_1 + 0x438) = 0xffffffffffffffff;
        }
      }
      else {
        bVar2 = false;
        bVar1 = false;
        do {
          BVar5 = ReadFile(*(HANDLE *)(param_1 + 0x438),&local_50,8,local_58,(LPOVERLAPPED)0x0);
          if (BVar5 == 0) goto LAB_180002e79;
          if (cVar9 == '\0') {
            bVar10 = local_50 == 0xffffffa0;
LAB_180002d8e:
            if (((bVar10) &&
                (lVar8 = FUN_1800016f0(param_1,*(HANDLE *)(param_1 + 0x438),cVar9), lVar8 != -1)) &&
               (iVar6 = FUN_180001670(param_1,*(HANDLE *)(param_1 + 0x438)), iVar6 != -1)) {
              cVar3 = FUN_180002520(param_1,*(HANDLE *)(param_1 + 0x438),iVar4,iVar6,lVar8,
                                    *(longlong *)(param_1 + 0x110),*(longlong *)(param_1 + 0x118),
                                    cVar9);
              bVar1 = bVar2;
              if (cVar3 != '\0') {
                bVar2 = true;
                bVar1 = true;
              }
            }
          }
          else if (local_50 == 0x746e656d656c45) {
            BVar5 = ReadFile(*(HANDLE *)(param_1 + 0x438),&local_50,8,local_58,(LPOVERLAPPED)0x0);
            if (BVar5 == 0) goto LAB_180002e79;
            if (local_58[0] != 0) {
              bVar10 = (int)local_50 == -0x108;
              goto LAB_180002d8e;
            }
            break;
          }
        } while (local_58[0] != 0);
        if ((longlong)*(HANDLE *)(param_1 + 0x438) - 1U < 0xfffffffffffffffe) {
          CloseHandle(*(HANDLE *)(param_1 + 0x438));
          *(undefined8 *)(param_1 + 0x438) = 0xffffffffffffffff;
        }
        if (bVar1) {
          FUN_180001440((char *)(param_1 + 0x128));
        }
      }
    }
    else {
      GetLastError();
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_98);
  return;
}




void FUN_180002eb0(undefined8 param_1,HANDLE param_2,longlong param_3,longlong param_4,int param_5)

{
  BOOL BVar1;
  int lDistanceToMove;
  undefined1 auStackY_98 [32];
  LONG local_68;
  DWORD local_64 [3];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_18000e058 ^ (ulonglong)auStackY_98;
  local_58 = param_4 << 9;
  local_64[0] = 0;
  local_68 = -1;
  local_64[1] = 0;
LAB_180002f10:
  do {
    local_50 = 0;
    BVar1 = ReadFile(param_2,&local_50,8,local_64,(LPOVERLAPPED)0x0);
    if ((BVar1 != 0) && (local_64[0] == 8)) {
      if ((local_50._4_4_ != param_5) && ((int)local_50 != param_5)) goto LAB_180002f10;
      local_68 = -1;
      lDistanceToMove = -0x1c;
      if (local_50._4_4_ != param_5) {
        lDistanceToMove = -0x20;
      }
      SetFilePointer(param_2,lDistanceToMove,&local_68,1);
      local_50 = 0;
      BVar1 = ReadFile(param_2,&local_50,8,local_64,(LPOVERLAPPED)0x0);
      if (((BVar1 != 0) && (local_64[0] == 8)) && (local_50 == param_3 << 9)) {
        local_68 = -1;
        SetFilePointer(param_2,-8,&local_68,1);
        WriteFile(param_2,&local_58,8,local_64 + 1,(LPOVERLAPPED)0x0);
      }
      local_68 = 0;
      SetFilePointer(param_2,-8 - lDistanceToMove,&local_68,1);
    }
    if (local_64[0] == 0) {
      __security_check_cookie(local_48 ^ (ulonglong)auStackY_98);
      return;
    }
  } while( true );
}




int FUN_180003040(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  HANDLE pvVar4;
  longlong lVar5;
  
  lVar5 = (param_1 + 0x330) - (longlong)param_2;
  do {
    cVar1 = *param_2;
    param_2[lVar5] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_180001570(param_1,*(uint *)(param_1 + 0x10c),param_3,param_4);
  uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x120))
                    (*(undefined8 **)(param_1 + 0x120),param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  if ((longlong)*(HANDLE *)(param_1 + 0x438) - 1U < 0xfffffffffffffffe) {
    CloseHandle(*(HANDLE *)(param_1 + 0x438));
    *(undefined8 *)(param_1 + 0x438) = 0xffffffffffffffff;
  }
  if (*(longlong *)(param_1 + 0x118) != *(longlong *)(param_1 + 0x110)) {
    pvVar4 = CreateFileA((LPCSTR)(param_1 + 0x22c),0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                         (HANDLE)0x0);
    *(HANDLE *)(param_1 + 0x438) = pvVar4;
    if ((longlong)pvVar4 - 1U < 0xfffffffffffffffe) {
      iVar2 = FUN_180002eb0(param_1,pvVar4,*(longlong *)(param_1 + 0x110),
                            *(longlong *)(param_1 + 0x118),iVar2);
      CloseHandle(*(HANDLE *)(param_1 + 0x438));
      *(undefined8 *)(param_1 + 0x438) = 0xffffffffffffffff;
      if (iVar2 != 0) {
        FUN_180001440((char *)(param_1 + 0x128));
      }
      return iVar2;
    }
  }
  return 0;
}




int FUN_180003180(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  HANDLE pvVar2;
  
  iVar1 = FUN_180001570(param_1,*(uint *)(param_1 + 0x10c),param_3,param_4);
  pvVar2 = *(HANDLE *)(param_1 + 0x438);
  *(longlong *)(param_1 + 0x118) = param_2;
  if ((pvVar2 != (HANDLE)0xffffffffffffffff) && (pvVar2 != (HANDLE)0x0)) {
    CloseHandle(pvVar2);
    param_2 = *(longlong *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x438) = 0xffffffffffffffff;
  }
  if (param_2 != *(longlong *)(param_1 + 0x110)) {
    pvVar2 = CreateFileA((LPCSTR)(param_1 + 0x22c),0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                         (HANDLE)0x0);
    *(HANDLE *)(param_1 + 0x438) = pvVar2;
    if ((longlong)pvVar2 - 1U < 0xfffffffffffffffe) {
      iVar1 = FUN_180002eb0(param_1,pvVar2,*(longlong *)(param_1 + 0x110),
                            *(longlong *)(param_1 + 0x118),iVar1);
      CloseHandle(*(HANDLE *)(param_1 + 0x438));
      *(undefined8 *)(param_1 + 0x438) = 0xffffffffffffffff;
      if (iVar1 != 0) {
        FUN_180001440((char *)(param_1 + 0x128));
      }
      return iVar1;
    }
  }
  return 0;
}




int FUN_180003290(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  HANDLE hObject;
  
  iVar1 = FUN_180001570(param_1,*(uint *)(param_1 + 0x10c),param_3,param_4);
  hObject = CreateFileA((LPCSTR)(param_1 + 0x22c),0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                        (HANDLE)0x0);
  if ((longlong)hObject - 1U < 0xfffffffffffffffe) {
    iVar1 = FUN_180002eb0(param_1,hObject,*(longlong *)(param_1 + 0x118),
                          *(longlong *)(param_1 + 0x110),iVar1);
    CloseHandle(hObject);
    if (iVar1 != 0) {
      FUN_180001440((char *)(param_1 + 0x128));
    }
    return iVar1;
  }
  return 0;
}




void FUN_180003350(undefined8 param_1,HANDLE param_2,longlong param_3,int param_4)

{
  BOOL BVar1;
  int lDistanceToMove;
  undefined1 auStackY_68 [32];
  DWORD local_38 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_18000e058 ^ (ulonglong)auStackY_68;
  local_38[1] = 0xffffffff;
  local_38[0] = 0;
LAB_1800033a0:
  do {
    local_30 = 0;
    BVar1 = ReadFile(param_2,&local_30,8,local_38,(LPOVERLAPPED)0x0);
    if ((BVar1 != 0) && (local_38[0] == 8)) {
      if ((local_30._4_4_ != param_4) && ((int)local_30 != param_4)) goto LAB_1800033a0;
      local_38[1] = 0xffffffff;
      lDistanceToMove = -0x20;
      if (local_30._4_4_ == param_4) {
        lDistanceToMove = -0x1c;
      }
      SetFilePointer(param_2,lDistanceToMove,(PLONG)(local_38 + 1),1);
      local_30 = 0;
      BVar1 = ReadFile(param_2,&local_30,8,local_38,(LPOVERLAPPED)0x0);
      if (((BVar1 != 0) && (local_38[0] == 8)) && (local_30 == param_3)) goto LAB_18000346c;
      local_38[1] = 0;
      SetFilePointer(param_2,-lDistanceToMove,(PLONG)(local_38 + 1),1);
    }
    if (local_38[0] == 0) {
LAB_18000346c:
      __security_check_cookie(local_28 ^ (ulonglong)auStackY_68);
      return;
    }
  } while( true );
}




undefined * FUN_1800034a0(void)

{
  return &DAT_18000e190;
}




int FUN_1800034b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_1800034a0();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




undefined8 * FUN_180003510(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *_Dst;
  void *_Memory;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  size_t _Size;
  undefined8 *puVar11;
  
  lVar1 = *param_1;
  lVar9 = param_1[1] - lVar1 >> 4;
  if (lVar9 == 0xfffffffffffffff) {
    FUN_1800045c0();
    pcVar2 = (code *)swi(3);
    puVar8 = (undefined8 *)(*pcVar2)();
    return puVar8;
  }
  uVar10 = lVar9 + 1;
  uVar6 = param_1[2] - lVar1 >> 4;
  uVar4 = uVar10;
  if ((uVar6 <= 0xfffffffffffffff - (uVar6 >> 1)) && (uVar4 = (uVar6 >> 1) + uVar6, uVar4 < uVar10))
  {
    uVar4 = uVar10;
  }
  uVar6 = uVar4 * 0x10;
  if (uVar4 < 0x1000000000000000) {
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puVar8 = (undefined8 *)operator_new(uVar6);
      }
      goto LAB_1800035fd;
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
  }
  uVar7 = uVar6 + 0x27;
  if (uVar7 <= uVar6) {
    uVar7 = 0xffffffffffffffff;
  }
  pvVar5 = operator_new(uVar7);
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  puVar8 = (undefined8 *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
  puVar8[-1] = pvVar5;
LAB_1800035fd:
  puVar11 = (undefined8 *)(((longlong)param_2 - lVar1 & 0xfffffffffffffff0U) + (longlong)puVar8);
  uVar3 = param_3[1];
  *puVar11 = *param_3;
  puVar11[1] = uVar3;
  pvVar5 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar5;
    _Dst = puVar8;
    param_2 = pvVar5;
  }
  else {
    memmove(puVar8,pvVar5,(longlong)param_2 - (longlong)pvVar5);
    _Dst = puVar11 + 2;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  pvVar5 = (void *)*param_1;
  if (pvVar5 != (void *)0x0) {
    _Memory = pvVar5;
    if ((0xfff < (param_1[2] - (longlong)pvVar5 & 0xfffffffffffffff0U)) &&
       (_Memory = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar10 * 2);
  param_1[2] = (longlong)(puVar8 + uVar4 * 2);
  return puVar11;
}




undefined8 * FUN_1800036c0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *pvVar10;
  longlong lVar11;
  void *_Dst;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar11 = ((longlong)param_2 - lVar3) / 6 + ((longlong)param_2 - lVar3 >> 0x3f);
  lVar5 = (param_1[1] - lVar3) / 0xc;
  if (lVar5 == 0x1555555555555555) {
    FUN_1800045c0();
    pcVar4 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar4)();
    return puVar7;
  }
  uVar1 = lVar5 + 1;
  uVar2 = (param_1[2] - lVar3) / 0xc;
  uVar8 = uVar1;
  if ((uVar2 <= 0x1555555555555555 - (uVar2 >> 1)) && (uVar8 = (uVar2 >> 1) + uVar2, uVar8 < uVar1))
  {
    uVar8 = uVar1;
  }
  uVar2 = uVar8 * 0xc;
  if (uVar8 < 0x1555555555555556) {
    uVar8 = uVar2;
    if (uVar2 < 0x1000) {
      if (uVar2 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = operator_new(uVar2);
      }
      goto LAB_1800037ef;
    }
  }
  else {
    uVar8 = 0xffffffffffffffff;
  }
  uVar9 = uVar8 + 0x27;
  if (uVar9 <= uVar8) {
    uVar9 = 0xffffffffffffffff;
  }
  pvVar6 = operator_new(uVar9);
  if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
  *(void **)((longlong)_Dst - 8) = pvVar6;
LAB_1800037ef:
  puVar7 = (undefined8 *)((longlong)_Dst + ((lVar11 >> 1) - (lVar11 >> 0x3f)) * 0xc);
  *puVar7 = *param_3;
  *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_3 + 1);
  pvVar6 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar6;
    pvVar10 = _Dst;
    param_2 = pvVar6;
  }
  else {
    memmove(_Dst,pvVar6,(longlong)param_2 - (longlong)pvVar6);
    pvVar10 = (void *)((longlong)puVar7 + 0xc);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar10,param_2,_Size);
  pvVar6 = (void *)*param_1;
  if (pvVar6 != (void *)0x0) {
    pvVar10 = pvVar6;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar6) / 0xc) * 0xc)) &&
       (pvVar10 = *(void **)((longlong)pvVar6 + -8),
       0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar10);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + uVar1 * 0xc);
  param_1[2] = (longlong)(uVar2 + (longlong)_Dst);
  return puVar7;
}




void FUN_1800038e0(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar1) / 0xc) * 0xc)) &&
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




undefined8
FUN_180003970(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  LPCSTR pCVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [56];
  
  FUN_180004900((longlong)local_40);
  uVar4 = 0;
  pCVar3 = (LPCSTR)(*(code *)**(undefined8 **)*param_1)();
  iVar2 = FUN_180005a10((longlong)local_40,pCVar3);
  if (iVar2 != 0) {
    puVar1 = (undefined8 *)param_1[2];
    local_50 = param_2;
    uStack_48 = param_3;
    uStack_44 = param_4;
    if ((undefined8 *)param_1[3] == puVar1) {
      FUN_180003510(param_1 + 1,puVar1,&local_50);
    }
    else {
      *puVar1 = param_2;
      puVar1[1] = CONCAT44(param_4,param_3);
      param_1[2] = param_1[2] + 0x10;
    }
    uVar4 = 1;
  }
  FUN_1800049c0((longlong)local_40);
  return uVar4;
}




longlong FUN_180003a20(longlong param_1)

{
  return param_1 + 0x20;
}




void FUN_180003a30(undefined8 *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  
  *param_1 = param_2;
  uVar5 = 0;
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  while (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)*plVar3;
    if (plVar4 != (longlong *)plVar3[1]) {
      do {
        lVar1 = *plVar4;
        uVar2 = FUN_180003d30(param_1,lVar1,(ulonglong)uVar5,param_4);
        param_4 = (ulonglong)uVar2;
        (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,uVar5,lVar1);
        plVar4 = plVar4 + 1;
      } while (plVar4 != (longlong *)plVar3[1]);
    }
    uVar5 = uVar5 + 1;
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,uVar5);
  }
  return;
}




void FUN_180003ae0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  LPCSTR pCVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_418 [32];
  int local_3f8;
  undefined8 local_3f4;
  undefined8 local_3ec;
  longlong *local_3e0;
  longlong local_3d8;
  uint uStack_3d0;
  int iStack_3cc;
  undefined8 local_3c8;
  undefined1 local_3c0 [48];
  undefined1 local_390 [56];
  char local_358 [272];
  wchar_t local_248 [264];
  ulonglong local_38;
  
  local_3c8 = 0xfffffffffffffffe;
  local_38 = DAT_18000e058 ^ (ulonglong)auStack_418;
  uVar10 = 0;
  FUN_180004900((longlong)local_390);
  pCVar6 = (LPCSTR)(*(code *)**(undefined8 **)*param_1)();
  FUN_180005a10((longlong)local_390,pCVar6);
  local_3e0 = (longlong *)(**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,0);
  while (local_3e0 != (longlong *)0x0) {
    plVar8 = (longlong *)*local_3e0;
    iVar9 = (int)uVar10;
    if (plVar8 != (longlong *)local_3e0[1]) {
      do {
        lVar1 = *plVar8;
        uVar3 = FUN_180003d30(param_1,lVar1,uVar10,param_4);
        if (1 < uVar3 + 1) {
          param_4 = *(ulonglong *)*param_1;
          uVar4 = (**(code **)(param_4 + 0x18))((ulonglong *)*param_1,uVar10,lVar1);
          FUN_180004900((longlong)local_3c0);
          FUN_180004680(local_248,L"\\Device\\Harddisk%d\\Partition0",uVar10,param_4);
          iVar5 = FUN_180003f70(param_1,local_248,(longlong)local_358);
          if (iVar5 == 0) {
            FUN_1800049c0((longlong)local_3c0);
            iVar5 = -1;
          }
          else {
            local_3f8 = 3;
            local_3f4 = 0xffffffffffffffff;
            local_3ec = 0xffffffffffffffff;
            uVar7 = FUN_180005570(local_3c0,local_358,&local_3f8);
            if ((int)uVar7 == 0) {
              FUN_1800049c0((longlong)local_3c0);
              iVar5 = -1;
            }
            else {
              iVar5 = (int)local_3ec;
              if (local_3f8 - 1U < 2) {
                iVar5 = local_3f4._4_4_;
              }
              FUN_1800049c0((longlong)local_3c0);
            }
          }
          if (uVar3 != uVar4) {
            iVar5 = FUN_180004e80((longlong)local_390,iVar5,uVar4);
            if (iVar5 == 0) {
              param_4 = (ulonglong)uVar3;
              (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,uVar10,lVar1);
            }
            else {
              plVar2 = (longlong *)param_1[2];
              local_3d8 = lVar1;
              uStack_3d0 = uVar3;
              iStack_3cc = iVar9;
              if ((longlong *)param_1[3] == plVar2) {
                FUN_180003510(param_1 + 1,plVar2,&local_3d8);
              }
              else {
                *plVar2 = lVar1;
                plVar2[1] = CONCAT44(iVar9,uVar3);
                param_1[2] = param_1[2] + 0x10;
              }
            }
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != (longlong *)local_3e0[1]);
    }
    uVar10 = (ulonglong)(iVar9 + 1);
    local_3e0 = (longlong *)(**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,uVar10);
  }
  FUN_1800049c0((longlong)local_390);
  __security_check_cookie(local_38 ^ (ulonglong)auStack_418);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180003d30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  BOOL BVar4;
  DWORD DVar5;
  HANDLE hDevice;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStackY_11f8 [32];
  DWORD local_11b8 [2];
  undefined8 local_11b0;
  undefined1 local_11a8 [20];
  uint local_1194;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined4 local_1168;
  undefined4 uStack_1164;
  undefined4 uStack_1160;
  undefined4 uStack_115c;
  undefined4 local_1158;
  undefined4 uStack_1154;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  CHAR local_1148 [272];
  undefined1 local_1038 [446];
  undefined8 local_e7a;
  undefined8 uStack_e72;
  undefined8 local_e6a;
  undefined8 uStack_e62;
  undefined4 local_e5a;
  undefined4 uStack_e56;
  undefined4 uStack_e52;
  undefined4 uStack_e4e;
  undefined4 local_e4a;
  undefined4 uStack_e46;
  undefined4 uStack_e42;
  undefined4 uStack_e3e;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x180003d52;
  local_38 = DAT_18000e058 ^ (ulonglong)auStackY_11f8;
  FUN_1800034b0(local_1148,"\\\\.\\PHYSICALDRIVE%d",param_3,param_4);
  uVar7 = 0;
  hDevice = CreateFileA(local_1148,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if ((longlong)hDevice - 1U < 0xfffffffffffffffe) {
    uVar10 = 0x200;
    BVar4 = DeviceIoControl(hDevice,0x70000,(LPVOID)0x0,0,local_11a8,0x18,local_11b8,
                            (LPOVERLAPPED)0x0);
    if ((BVar4 != 0) && (uVar10 = 0x200, local_1194 != 0)) {
      uVar10 = (ulonglong)local_1194;
    }
    uVar8 = 0;
    do {
      local_11b8[0] = 0;
      local_11b0 = uVar10 * uVar8;
      bVar3 = false;
      DVar5 = SetFilePointer(hDevice,(LONG)local_11b0,(PLONG)((longlong)&local_11b0 + 4),0);
      if (((DVar5 == 0xffffffff) ||
          (BVar4 = ReadFile(hDevice,local_1038,0x1000,local_11b8,(LPOVERLAPPED)0x0), BVar4 == 0)) ||
         (local_11b8[0] != 0x1000)) goto LAB_180003f37;
      local_1188 = local_e7a;
      iVar11 = 0;
      puVar6 = (uint *)&uStack_1180;
      uStack_1180 = uStack_e72;
      local_1178 = local_e6a;
      uStack_1170 = uStack_e62;
      local_1168 = local_e5a;
      uStack_1164 = uStack_e56;
      uStack_1160 = uStack_e52;
      uStack_115c = uStack_e4e;
      local_1158 = local_e4a;
      uStack_1154 = uStack_e46;
      uStack_1150 = uStack_e42;
      uStack_114c = uStack_e3e;
      uVar9 = uVar8;
      do {
        cVar1 = (char)puVar6[-1];
        if (cVar1 != '\0') {
          if (((cVar1 == '\x05') || (cVar1 == '\x0f')) || (cVar1 == -0x7b)) {
            if (!bVar3) {
              uVar2 = *puVar6;
              bVar3 = true;
              if (uVar7 == 0) {
                uVar7 = (ulonglong)uVar2;
                uVar9 = (ulonglong)uVar2;
              }
              else {
                uVar9 = uVar2 + uVar7;
              }
            }
          }
          else if (param_2 == *puVar6 + uVar8) {
            CloseHandle(hDevice);
            goto LAB_180003f37;
          }
        }
        iVar11 = iVar11 + 1;
        puVar6 = puVar6 + 4;
      } while (iVar11 < 4);
      uVar8 = uVar9;
    } while (bVar3);
    CloseHandle(hDevice);
  }
LAB_180003f37:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_11f8);
  return;
}




void FUN_180003f70(undefined8 param_1,wchar_t *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_d38 [32];
  undefined1 local_d18;
  undefined4 *local_d10;
  undefined4 *local_d08;
  undefined4 local_cf8;
  undefined4 local_cf4;
  undefined8 local_cf0;
  undefined4 local_ce8 [2];
  undefined8 local_ce0;
  undefined4 local_cd8 [2];
  wchar_t *local_cd0;
  undefined1 local_cc8 [16];
  undefined4 local_cb8 [2];
  undefined8 local_cb0;
  undefined1 *local_ca8;
  undefined4 local_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined4 local_c88 [2];
  undefined8 local_c80;
  undefined1 *local_c78;
  undefined4 local_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  char local_c58 [528];
  wchar_t local_a48 [264];
  undefined1 local_838 [8];
  wchar_t *local_830;
  ulonglong local_38;
  
  local_38 = DAT_18000e058 ^ (ulonglong)auStack_d38;
  uVar4 = 0;
  local_cf0 = 0;
  memset(local_c58,0,0x208);
  iVar6 = 0;
  RtlInitUnicodeString(local_cc8,L"\\ArcName");
  local_cb8[0] = 0x30;
  local_ca8 = local_cc8;
  local_cb0 = 0;
  local_ca0 = 0x10;
  local_c98 = 0;
  uStack_c90 = 0;
  iVar2 = ZwOpenDirectoryObject(&local_cf0,0xf000f,local_cb8);
  if (iVar2 == 0) {
    local_d08 = &local_cf8;
    local_d10 = &local_cf4;
    local_cf4 = 0;
    local_d18 = 1;
    local_cf8 = 0;
    iVar2 = ZwQueryDirectoryObject(local_cf0,local_838,0x400,1);
    uVar7 = uVar4;
    while ((-1 < iVar2 && (iVar6 = (int)uVar7, iVar6 < 2))) {
      local_c78 = local_838;
      local_c88[0] = 0x30;
      local_c70 = 0x10;
      local_c68 = 0;
      uStack_c60 = 0;
      local_ce0 = 0;
      local_c80 = local_cf0;
      iVar2 = ZwOpenSymbolicLinkObject(&local_ce0,1,local_c88);
      if (iVar2 == 0) {
        memset(local_a48,0,0x208);
        local_cd0 = local_a48;
        local_cd8[0] = 0x2080208;
        local_ce8[0] = 0;
        iVar2 = ZwQuerySymbolicLinkObject(local_ce0,local_cd8,local_ce8);
        if (iVar2 == 0) {
          lVar3 = -1;
          do {
            lVar3 = lVar3 + 1;
          } while (param_2[lVar3] != L'\0');
          iVar2 = wcsncmp(local_a48,param_2,(longlong)(int)lVar3);
          if (iVar2 == 0) {
            wcstombs(local_c58 + (longlong)iVar6 * 0x104,local_830,0x104);
            uVar7 = (ulonglong)(iVar6 + 1);
          }
        }
        ZwClose(local_ce0);
      }
      iVar6 = (int)uVar7;
      local_d08 = &local_cf8;
      local_d10 = &local_cf4;
      local_d18 = 0;
      iVar2 = ZwQueryDirectoryObject(local_cf0,local_838,0x400,1);
    }
    ZwClose(local_cf0);
    if (iVar6 == 1) {
      pcVar5 = local_c58;
      do {
        cVar1 = *pcVar5;
        pcVar5[param_3 - (longlong)local_c58] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else if (0 < iVar6) {
      pcVar5 = local_c58;
      uVar7 = uVar4;
      do {
        if ((*pcVar5 + 0xadU & 0xdf) == 0) {
          pcVar5 = local_c58 + (longlong)(int)uVar7 * 0x104;
          lVar3 = param_3 - (longlong)pcVar5;
          do {
            cVar1 = *pcVar5;
            pcVar5[lVar3] = cVar1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          break;
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 0x104;
      } while ((longlong)uVar4 < (longlong)iVar6);
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_d38);
  return;
}




void FUN_180004240(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_180004250(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_438 [32];
  undefined1 local_418;
  char local_417;
  undefined8 *local_410;
  undefined8 *local_408;
  undefined8 *puStack_400;
  undefined8 *local_3f8;
  uint local_3f0;
  uint uStack_3ec;
  uint local_3e8;
  uint local_3e0;
  uint uStack_3dc;
  uint local_3d8;
  undefined4 local_3d0;
  undefined8 local_3cc;
  undefined8 local_3c4;
  LPCSTR local_3b8;
  undefined1 local_3b0 [16];
  undefined8 local_3a0;
  undefined1 local_398 [48];
  char local_368 [272];
  wchar_t local_258 [264];
  ulonglong local_48;
  
  local_3a0 = 0xfffffffffffffffe;
  local_48 = DAT_18000e058 ^ (ulonglong)auStack_438;
  FUN_180004900((longlong)local_398);
  local_3b8 = (LPCSTR)(*(code *)**(undefined8 **)*param_1)();
  iVar4 = FUN_180005a10((longlong)local_398,local_3b8);
  if (iVar4 != 0) {
    local_408 = (undefined8 *)0x0;
    puStack_400 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
    local_410 = (undefined8 *)0x0;
    local_3f8 = (undefined8 *)0x0;
    local_418 = 1;
    local_417 = '\0';
    param_1[5] = param_1[4];
    pauVar7 = (undefined1 (*) [16])param_1[1];
    puVar9 = (undefined8 *)0x0;
    if (pauVar7 != (undefined1 (*) [16])param_1[2]) {
      do {
        auVar1 = *pauVar7;
        local_3b0 = auVar1;
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,auVar1._8_8_ >> 0x20);
        uVar11 = auVar1._12_4_;
        FUN_180004680(local_258,L"\\Device\\Harddisk%d\\Partition0",(ulonglong)uVar11,param_4);
        iVar4 = FUN_180003f70(param_1,local_258,(longlong)local_368);
        if (iVar4 != 0) {
          local_3d0 = 3;
          local_3cc = 0xffffffffffffffff;
          local_3c4 = 0xffffffffffffffff;
          uVar6 = FUN_180005570(local_398,local_368,&local_3d0);
          if ((int)uVar6 != 0) {
            uVar5 = (**(code **)(*(longlong *)*param_1 + 0x18))
                              ((longlong *)*param_1,uVar11,local_3b0._0_8_);
            uVar12 = auVar1._8_4_;
            puVar10 = local_410;
            if (uVar5 != uVar12) {
              local_417 = '\x01';
              local_3c4 = CONCAT44(uVar5,(undefined4)local_3c4);
              param_4 = (ulonglong)uVar12;
              (**(code **)(*(longlong *)*param_1 + 0x10))
                        ((longlong *)*param_1,uVar11,local_3b0._0_8_);
              iVar4 = FUN_1800050d0((longlong)local_398,(longlong)&local_3d0,uVar12);
              if (iVar4 == 0) {
                puVar10 = (undefined8 *)param_1[5];
                local_3f0 = uVar11;
                uStack_3ec = uVar5;
                local_3e8 = uVar12;
                if ((undefined8 *)param_1[6] == puVar10) {
                  FUN_1800036c0(param_1 + 4,puVar10,(undefined8 *)&local_3f0);
                }
                else {
                  *puVar10 = CONCAT44(uVar5,uVar11);
                  *(uint *)(puVar10 + 1) = uVar12;
                  param_1[5] = param_1[5] + 0xc;
                }
                local_418 = 0;
              }
              local_3e0 = uVar11;
              uStack_3dc = uVar5;
              local_3d8 = uVar12;
              if (local_410 == puVar9) {
                FUN_1800036c0((longlong *)&local_408,puVar9,(undefined8 *)&local_3e0);
                local_410 = local_3f8;
                puVar9 = puStack_400;
                puVar10 = local_3f8;
              }
              else {
                *puVar9 = CONCAT44(uVar5,uVar11);
                *(uint *)(puVar9 + 1) = uVar12;
                puStack_400 = (undefined8 *)((longlong)puVar9 + 0xc);
                puVar9 = puStack_400;
                puVar10 = local_410;
              }
            }
          }
        }
        pauVar7 = pauVar7 + 1;
      } while (pauVar7 != (undefined1 (*) [16])param_1[2]);
    }
    puVar3 = local_408;
    param_1[2] = param_1[1];
    if ((local_417 != '\0') && (iVar4 = FUN_180005e10((longlong)local_398,local_3b8), iVar4 == 0)) {
      param_1[5] = param_1[4];
      for (puVar8 = puVar3; puVar8 != puVar9; puVar8 = (undefined8 *)((longlong)puVar8 + 0xc)) {
        puVar2 = (undefined8 *)param_1[5];
        if ((undefined8 *)param_1[6] == puVar2) {
          FUN_1800036c0(param_1 + 4,puVar2,puVar8);
        }
        else {
          *puVar2 = *puVar8;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
          param_1[5] = param_1[5] + 0xc;
        }
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      puVar9 = puVar3;
      if ((0xfff < (ulonglong)((((longlong)puVar10 - (longlong)puVar3) / 0xc) * 0xc)) &&
         (puVar9 = (undefined8 *)puVar3[-1],
         0x1f < (ulonglong)((longlong)puVar3 + (-8 - (longlong)puVar9)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(puVar9);
      local_408 = (undefined8 *)0x0;
      puStack_400 = (undefined8 *)0x0;
      local_3f8 = (undefined8 *)0x0;
    }
  }
  FUN_1800049c0((longlong)local_398);
  __security_check_cookie(local_48 ^ (ulonglong)auStack_438);
  return;
}




void FUN_1800045c0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_1800045e0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 << 4)) &&
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
  if ((0xfff < (ulonglong)(param_3 * 0xc)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




int FUN_180004680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_1800034a0();
  iVar1 = __stdio_common_vswprintf(*puVar2,param_1,0x7fffffff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




undefined8 * FUN_1800046e0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *_Dst;
  longlong lVar11;
  undefined8 *puVar12;
  size_t _Size;
  void *_Memory;
  
  lVar3 = *param_1;
  lVar11 = ((longlong)param_2 - lVar3) / 6 + ((longlong)param_2 - lVar3 >> 0x3f);
  lVar5 = (param_1[1] - lVar3) / 0x18;
  if (lVar5 == 0xaaaaaaaaaaaaaaa) {
    FUN_1800045c0();
    pcVar4 = (code *)swi(3);
    puVar12 = (undefined8 *)(*pcVar4)();
    return puVar12;
  }
  uVar1 = lVar5 + 1;
  uVar7 = (param_1[2] - lVar3) / 0x18;
  uVar9 = uVar1;
  if ((uVar7 <= 0xaaaaaaaaaaaaaaa - (uVar7 >> 1)) && (uVar9 = (uVar7 >> 1) + uVar7, uVar9 < uVar1))
  {
    uVar9 = uVar1;
  }
  uVar7 = uVar9 * 0x18;
  if (uVar9 < 0xaaaaaaaaaaaaaab) {
    if (uVar7 < 0x1000) {
      if (uVar7 == 0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = (undefined8 *)operator_new(uVar7);
      }
      goto LAB_180004812;
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
  }
  uVar10 = uVar7 + 0x27;
  if (uVar10 <= uVar7) {
    uVar10 = 0xffffffffffffffff;
  }
  pvVar8 = operator_new(uVar10);
  if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  puVar12 = (undefined8 *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
  puVar12[-1] = pvVar8;
LAB_180004812:
  puVar2 = puVar12 + ((lVar11 >> 2) - (lVar11 >> 0x3f)) * 3;
  uVar6 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar6;
  puVar2[2] = param_3[2];
  pvVar8 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar8;
    _Dst = puVar12;
    param_2 = pvVar8;
  }
  else {
    memmove(puVar12,pvVar8,(longlong)param_2 - (longlong)pvVar8);
    _Dst = puVar2 + 3;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  pvVar8 = (void *)*param_1;
  if (pvVar8 != (void *)0x0) {
    _Memory = pvVar8;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar8) / 0x18) * 0x18)) &&
       (_Memory = *(void **)((longlong)pvVar8 + -8),
       0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)puVar12;
  param_1[1] = (longlong)(puVar12 + uVar1 * 3);
  param_1[2] = (longlong)(puVar12 + uVar9 * 3);
  return puVar2;
}




longlong FUN_180004900(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return param_1;
}




void FUN_180004930(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar1) / 0x18) * 0x18)) &&
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




void FUN_1800049c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != *(longlong *)(param_1 + 0x20)) {
    do {
      if (*(void **)(lVar1 + 0x10) != (void *)0x0) {
        free(*(void **)(lVar1 + 0x10));
      }
      lVar1 = lVar1 + 0x18;
    } while (lVar1 != *(longlong *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  FUN_180004930((longlong *)(param_1 + 0x18));
  return;
}




undefined8 FUN_180004a40(undefined8 param_1,char *param_2,undefined4 *param_3,longlong param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  size_t sVar12;
  char *pcVar13;
  uint local_res10 [2];
  
  *param_3 = 3;
  *(undefined8 *)(param_3 + 1) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 3) = 0xffffffffffffffff;
  cVar1 = *param_2;
  while ((cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))))) {
    pcVar11 = param_2 + 1;
    param_2 = param_2 + 1;
    cVar1 = *pcVar11;
  }
  lVar9 = -1;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (PTR_s_multi_18000e000[sVar12] != '\0');
  iVar6 = _strnicmp(param_2,PTR_s_multi_18000e000,sVar12);
  bVar4 = false;
  bVar3 = false;
  if (iVar6 == 0) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (PTR_s_multi_18000e000[lVar7] != '\0');
    *param_3 = 0;
  }
  else {
    sVar12 = 0xffffffffffffffff;
    do {
      sVar12 = sVar12 + 1;
    } while (PTR_DAT_18000e008[sVar12] != '\0');
    iVar6 = _strnicmp(param_2,PTR_DAT_18000e008,sVar12);
    puVar5 = PTR_DAT_18000e008;
    if (iVar6 == 0) {
      lVar7 = -1;
      *param_3 = 1;
      do {
        lVar7 = lVar7 + 1;
      } while (puVar5[lVar7] != '\0');
    }
    else {
      sVar12 = 0xffffffffffffffff;
      do {
        sVar12 = sVar12 + 1;
      } while (PTR_s_signature_18000e010[sVar12] != '\0');
      iVar6 = _strnicmp(param_2,PTR_s_signature_18000e010,sVar12);
      puVar5 = PTR_s_signature_18000e010;
      if (iVar6 != 0) {
        *param_3 = 3;
        return 0;
      }
      lVar7 = -1;
      *param_3 = 2;
      do {
        lVar7 = lVar7 + 1;
      } while (puVar5[lVar7] != '\0');
    }
  }
  pcVar11 = param_2 + lVar7;
  local_res10[0] = 0;
  iVar6 = FUN_180005900(param_1,pcVar11,param_3 + 1,(int *)local_res10);
  if (iVar6 != 0) {
    uVar10 = (ulonglong)local_res10[0];
    sVar12 = 0xffffffffffffffff;
    do {
      sVar12 = sVar12 + 1;
    } while (PTR_DAT_18000e018[sVar12] != '\0');
    iVar6 = _strnicmp(pcVar11 + uVar10,PTR_DAT_18000e018,sVar12);
    if (iVar6 == 0) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (PTR_DAT_18000e018[lVar7] != '\0');
      pcVar11 = pcVar11 + uVar10 + lVar7;
      param_3[2] = 0xffffffff;
      if (*pcVar11 == '(') {
        pcVar13 = pcVar11 + 1;
        param_3[2] = 0;
        uVar8 = 1;
        bVar2 = false;
        uVar10 = 1;
        cVar1 = *pcVar13;
        while (cVar1 != '\0') {
          uVar8 = uVar8 + 1;
          uVar10 = (ulonglong)uVar8;
          if (cVar1 == ')') break;
          if (9 < (byte)(cVar1 - 0x30U)) {
            return 0;
          }
          iVar6 = param_3[2];
          bVar2 = true;
          param_3[2] = iVar6 * 10;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          param_3[2] = iVar6 * 10 + -0x30 + (int)cVar1;
          cVar1 = *pcVar13;
        }
        if (bVar2) {
          sVar12 = 0xffffffffffffffff;
          do {
            sVar12 = sVar12 + 1;
          } while (PTR_DAT_18000e020[sVar12] != '\0');
          iVar6 = _strnicmp(pcVar11 + uVar10,PTR_DAT_18000e020,sVar12);
          if (iVar6 == 0) {
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (PTR_DAT_18000e020[lVar7] != '\0');
            pcVar11 = pcVar11 + uVar10 + lVar7;
            param_3[3] = 0xffffffff;
            if (*pcVar11 == '(') {
              pcVar13 = pcVar11 + 1;
              param_3[3] = 0;
              uVar8 = 1;
              bVar2 = false;
              uVar10 = 1;
              cVar1 = *pcVar13;
              while (cVar1 != '\0') {
                uVar8 = uVar8 + 1;
                uVar10 = (ulonglong)uVar8;
                if (cVar1 == ')') break;
                if (9 < (byte)(cVar1 - 0x30U)) {
                  return 0;
                }
                iVar6 = param_3[3];
                bVar2 = true;
                param_3[3] = iVar6 * 10;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                param_3[3] = iVar6 * 10 + -0x30 + (int)cVar1;
                cVar1 = *pcVar13;
              }
              if (bVar2) {
                sVar12 = 0xffffffffffffffff;
                do {
                  sVar12 = sVar12 + 1;
                } while (PTR_s_partition_18000e028[sVar12] != '\0');
                iVar6 = _strnicmp(pcVar11 + uVar10,PTR_s_partition_18000e028,sVar12);
                if (iVar6 == 0) {
                  do {
                    lVar9 = lVar9 + 1;
                  } while (PTR_s_partition_18000e028[lVar9] != '\0');
                  pcVar11 = pcVar11 + uVar10 + lVar9;
                  param_3[4] = 0xffffffff;
                  if (*pcVar11 == '(') {
                    pcVar13 = pcVar11 + 1;
                    param_3[4] = 0;
                    uVar8 = 1;
                    cVar1 = *pcVar13;
                    while ((cVar1 != '\0' && (uVar8 = uVar8 + 1, bVar3 = bVar4, cVar1 != ')'))) {
                      if (9 < (byte)(cVar1 - 0x30U)) {
                        return 0;
                      }
                      iVar6 = param_3[4];
                      bVar4 = true;
                      bVar3 = true;
                      param_3[4] = iVar6 * 10;
                      cVar1 = *pcVar13;
                      pcVar13 = pcVar13 + 1;
                      param_3[4] = iVar6 * 10 + -0x30 + (int)cVar1;
                      cVar1 = *pcVar13;
                    }
                    if (bVar3) {
                      pcVar11 = pcVar11 + uVar8;
                      lVar9 = param_4 - (longlong)pcVar11;
                      do {
                        cVar1 = *pcVar11;
                        pcVar11[lVar9] = cVar1;
                        pcVar11 = pcVar11 + 1;
                      } while (cVar1 != '\0');
                      return 1;
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
  return 0;
}




undefined8 FUN_180004e00(undefined8 param_1,char *param_2,uint param_3,undefined1 *param_4)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  char *pcVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar2 = 0;
  uVar3 = uVar6;
  pcVar4 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = (uint)uVar3;
      if (*pcVar4 == '=') break;
      if (*pcVar4 == '\0') {
        *param_4 = 0;
        return 0;
      }
      uVar2 = uVar2 + 1;
      uVar3 = (ulonglong)uVar2;
      pcVar4 = pcVar4 + 1;
    } while (uVar2 < param_3);
  }
  uVar2 = uVar2 + 1;
  if (uVar2 < param_3) {
    pbVar5 = (byte *)(param_2 + uVar2);
    do {
      bVar1 = *pbVar5;
      if ((bVar1 < 0xe) && ((0x2401U >> (bVar1 & 0x1f) & 1) != 0)) break;
      param_4[uVar6] = bVar1;
      uVar2 = uVar2 + 1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
      pbVar5 = pbVar5 + 1;
    } while (uVar2 < param_3);
  }
  param_4[uVar6] = 0;
  return 1;
}




void FUN_180004e80(longlong param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar13;
  undefined1 auStack_288 [32];
  int local_268 [8];
  byte local_248 [272];
  undefined1 local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_18000e058 ^ (ulonglong)auStack_288;
  lVar9 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(param_1 + 0x20) - lVar9;
  uVar10 = 0;
  lVar4 = lVar12 >> 0x3f;
  if (lVar12 / 0x18 + lVar4 != lVar4) {
    uVar11 = 0;
    do {
      if ((*(int *)(lVar9 + 4 + uVar11 * 0x18) == 3) && (*(int *)(lVar9 + 8 + uVar11 * 0x18) == 0))
      {
        pcVar3 = *(char **)(lVar9 + 0x10 + uVar11 * 0x18);
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (pcVar3[lVar9] != '\0');
        uVar8 = (uint)lVar9;
        if ((*(uint *)(param_1 + 4) < uVar10) &&
           (uVar10 <= *(uint *)(param_1 + 4) + *(int *)(param_1 + 8))) {
          uVar5 = 0;
          pcVar6 = pcVar3;
          if (uVar8 != 0) {
            do {
              if (*pcVar6 == '=') break;
              if (*pcVar6 == '\0') {
                local_248[0] = 0;
                goto LAB_18000500b;
              }
              uVar5 = uVar5 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar5 < uVar8);
          }
          uVar5 = uVar5 + 1;
          uVar11 = 0;
          if (uVar5 < uVar8) {
            pbVar13 = (byte *)(pcVar3 + uVar5);
            do {
              bVar1 = *pbVar13;
              if ((bVar1 < 0xe) && ((0x2401U >> (bVar1 & 0x1f) & 1) != 0)) break;
              local_248[uVar11] = bVar1;
              uVar5 = uVar5 + 1;
              uVar11 = (ulonglong)((int)uVar11 + 1);
              pbVar13 = pbVar13 + 1;
            } while (uVar5 < uVar8);
          }
        }
        else {
          if ((uVar10 <= *(uint *)(param_1 + 0xc)) ||
             (*(uint *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) < uVar10)) goto LAB_180005065;
          uVar5 = 0;
          pcVar6 = pcVar3;
          if (uVar8 != 0) {
            do {
              if ((*pcVar6 != ' ') && (*pcVar6 != '\t')) break;
              uVar5 = uVar5 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar5 < uVar8);
          }
          uVar11 = 0;
          if (uVar5 < uVar8) {
            pbVar13 = (byte *)(pcVar3 + uVar5);
            do {
              bVar1 = *pbVar13;
              if ((bVar1 == 0x3d) || (bVar1 == 0)) break;
              local_248[uVar11] = bVar1;
              uVar5 = uVar5 + 1;
              uVar11 = (ulonglong)((int)uVar11 + 1);
              pbVar13 = pbVar13 + 1;
            } while (uVar5 < uVar8);
          }
        }
        local_248[uVar11] = 0;
LAB_18000500b:
        local_268[0] = 3;
        local_268[1] = -1;
        local_268[2] = -1;
        local_268[3] = -1;
        local_268[4] = -1;
        uVar7 = FUN_180004a40(param_1,(char *)local_248,local_268,(longlong)local_138);
        if (((int)uVar7 != 0) && (local_268[4] == param_3)) {
          if (local_268[0] - 1U < 2) {
            iVar2 = local_268[2];
          }
          else {
            if (local_268[0] != 0) goto LAB_180005065;
            iVar2 = local_268[3];
          }
          if (iVar2 == param_2) break;
        }
      }
LAB_180005065:
      lVar9 = *(longlong *)(param_1 + 0x18);
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar11 < (ulonglong)((*(longlong *)(param_1 + 0x20) - lVar9) / 0x18));
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_288);
  return;
}




void FUN_1800050d0(longlong param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  byte *pbVar16;
  undefined *puVar17;
  byte *pbVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_828 [32];
  undefined *local_808;
  int local_800;
  undefined *local_7f8;
  int local_7f0;
  undefined *local_7e8;
  undefined4 local_7e0;
  byte *local_7d8;
  uint local_7c8;
  longlong local_7c0;
  int local_7b8;
  undefined8 local_7b4;
  undefined8 local_7ac;
  undefined4 local_7a0;
  longlong local_798;
  longlong local_790;
  longlong local_788;
  byte local_778 [272];
  byte local_668 [272];
  char local_558 [272];
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_18000e058 ^ (ulonglong)auStack_828;
  lVar19 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18);
  lVar19 = lVar19 / 6 + (lVar19 >> 0x3f);
  local_7c8 = 0;
  local_788 = (lVar19 >> 2) - (lVar19 >> 0x3f);
  local_7c0 = param_1;
  local_7a0 = param_3;
  local_790 = param_2;
  if ((int)local_788 != 0) {
    local_798 = 0;
    do {
      uVar7 = local_7c8;
      lVar19 = local_798 + *(longlong *)(param_1 + 0x18);
      if ((*(int *)(lVar19 + 4) == 3) && (*(int *)(lVar19 + 8) == 0)) {
        pcVar11 = *(char **)(lVar19 + 0x10);
        lVar15 = -1;
        do {
          lVar15 = lVar15 + 1;
        } while (pcVar11[lVar15] != '\0');
        bVar3 = false;
        uVar14 = (uint)lVar15;
        if ((*(uint *)(param_1 + 4) < local_7c8) &&
           (local_7c8 <= *(uint *)(param_1 + 4) + *(int *)(param_1 + 8))) {
          uVar10 = 0;
          bVar3 = true;
          pcVar12 = pcVar11;
          if (uVar14 != 0) {
            do {
              if (*pcVar12 == '=') break;
              if (*pcVar12 == '\0') {
                local_778[0] = 0;
                goto LAB_18000527a;
              }
              uVar10 = uVar10 + 1;
              pcVar12 = pcVar12 + 1;
            } while (uVar10 < uVar14);
          }
          uVar10 = uVar10 + 1;
          uVar20 = 0;
          if (uVar10 < uVar14) {
            pbVar16 = (byte *)(pcVar11 + uVar10);
            do {
              bVar1 = *pbVar16;
              if ((bVar1 < 0xe) && ((0x2401U >> ((int)(char)bVar1 & 0x1fU) & 1) != 0)) break;
              local_778[uVar20] = bVar1;
              uVar10 = uVar10 + 1;
              uVar20 = (ulonglong)((int)uVar20 + 1);
              pbVar16 = pbVar16 + 1;
            } while (uVar10 < uVar14);
          }
          local_778[uVar20] = 0;
        }
        else {
          if ((local_7c8 <= *(uint *)(param_1 + 0xc)) ||
             (*(uint *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) < local_7c8)) goto LAB_18000550d;
          uVar10 = 0;
          pcVar12 = pcVar11;
          if (uVar14 != 0) {
            do {
              if ((*pcVar12 != ' ') && (*pcVar12 != '\t')) break;
              uVar10 = uVar10 + 1;
              pcVar12 = pcVar12 + 1;
            } while (uVar10 < uVar14);
          }
          uVar20 = 0;
          if (uVar10 < uVar14) {
            pbVar16 = (byte *)(pcVar11 + uVar10);
            do {
              bVar1 = *pbVar16;
              if ((bVar1 == 0x3d) || (bVar1 == 0)) break;
              local_778[uVar20] = bVar1;
              uVar10 = uVar10 + 1;
              uVar20 = (ulonglong)((int)uVar20 + 1);
              pbVar16 = pbVar16 + 1;
            } while (uVar10 < uVar14);
          }
          local_778[uVar20] = 0;
        }
LAB_18000527a:
        local_7b8 = 3;
        local_7b4 = 0xffffffffffffffff;
        local_7ac = 0xffffffffffffffff;
        uVar8 = FUN_180004a40(param_1,(char *)local_778,&local_7b8,(longlong)local_668);
        iVar4 = local_7b8;
        param_1 = local_7c0;
        if (((int)uVar8 != 0) && (local_7ac._4_4_ == *(int *)(local_790 + 0x10))) {
          iVar5 = local_7b4._4_4_;
          iVar6 = (int)local_7ac;
          uVar7 = local_7c8;
          if (local_7b8 - 1U < 2) {
            if (local_7b4._4_4_ == *(int *)(local_790 + 8)) goto LAB_1800052f3;
          }
          else if ((local_7b8 != 0) || ((int)local_7ac == *(int *)(local_790 + 0xc))) {
LAB_1800052f3:
            memset(local_448,0,0x400);
            if (iVar4 == 0) {
              pcVar11 = PTR_s__s__d__s__d__s__d__s__d__s_18000e030;
              do {
                cVar2 = *pcVar11;
                pcVar11[(longlong)
                        (local_448 + -(longlong)PTR_s__s__d__s__d__s__d__s__d__s_18000e030)] = cVar2
                ;
                pcVar11 = pcVar11 + 1;
                puVar17 = PTR_s_multi_18000e000;
              } while (cVar2 != '\0');
            }
            else if (iVar4 == 1) {
              pcVar11 = PTR_s__s__d__s__d__s__d__s__d__s_18000e030;
              do {
                cVar2 = *pcVar11;
                pcVar11[(longlong)
                        (local_448 + -(longlong)PTR_s__s__d__s__d__s__d__s__d__s_18000e030)] = cVar2
                ;
                pcVar11 = pcVar11 + 1;
                puVar17 = PTR_DAT_18000e008;
              } while (cVar2 != '\0');
            }
            else {
              param_1 = local_7c0;
              uVar7 = local_7c8;
              if (iVar4 != 2) goto LAB_18000550d;
              pcVar11 = PTR_s__s__08x__s__d__s__d__s__d__s_18000e038;
              do {
                cVar2 = *pcVar11;
                pcVar11[(longlong)
                        (local_448 + -(longlong)PTR_s__s__08x__s__d__s__d__s__d__s_18000e038)] =
                     cVar2;
                pcVar11 = pcVar11 + 1;
                puVar17 = PTR_s_signature_18000e010;
              } while (cVar2 != '\0');
            }
            local_7d8 = local_668;
            local_7e0 = local_7a0;
            local_7e8 = PTR_s_partition_18000e028;
            local_7f0 = iVar6;
            local_7f8 = PTR_DAT_18000e020;
            local_800 = iVar5;
            local_808 = PTR_DAT_18000e018;
            FUN_1800034b0(local_778,local_448,puVar17,local_7b4 & 0xffffffff);
            pcVar11 = *(char **)(lVar19 + 0x10);
            if (bVar3) {
              uVar7 = 0;
              pcVar12 = pcVar11;
              if (uVar14 != 0) {
                do {
                  if ((*pcVar12 != ' ') && (*pcVar12 != '\t')) break;
                  uVar7 = uVar7 + 1;
                  pcVar12 = pcVar12 + 1;
                } while (uVar7 < uVar14);
              }
              uVar20 = 0;
              if (uVar7 < uVar14) {
                pbVar16 = (byte *)(pcVar11 + uVar7);
                do {
                  bVar1 = *pbVar16;
                  if ((bVar1 == 0x3d) || (bVar1 == 0)) break;
                  local_668[uVar20] = bVar1;
                  uVar7 = uVar7 + 1;
                  uVar20 = (ulonglong)((int)uVar20 + 1);
                  pbVar16 = pbVar16 + 1;
                } while (uVar7 < uVar14);
              }
              local_668[uVar20] = 0;
              pbVar18 = local_668;
              pbVar16 = local_778;
            }
            else {
              FUN_180004e00(local_7c0,pcVar11,uVar14,local_668);
              pbVar18 = local_778;
              pbVar16 = local_668;
            }
            FUN_1800034b0(local_558,"%s=%s",pbVar18,pbVar16);
            lVar15 = -1;
            do {
              lVar13 = lVar15;
              lVar15 = lVar13 + 1;
            } while (local_558[lVar13 + 1] != '\0');
            if (uVar14 < (uint)(lVar13 + 1)) {
              free(*(void **)(lVar19 + 0x10));
              pvVar9 = operator_new((ulonglong)((int)lVar13 + 2));
              *(void **)(lVar19 + 0x10) = pvVar9;
            }
            pcVar12 = *(char **)(lVar19 + 0x10);
            pcVar11 = local_558;
            do {
              cVar2 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar12 = cVar2;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            *(undefined4 *)(lVar19 + 8) = 1;
            param_1 = local_7c0;
            uVar7 = local_7c8;
          }
        }
      }
LAB_18000550d:
      local_7c8 = uVar7 + 1;
      local_798 = local_798 + 0x18;
    } while (local_7c8 < (uint)local_788);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_828);
  return;
}




undefined8 FUN_180005570(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  size_t sVar12;
  char *pcVar13;
  uint local_res10 [2];
  
  *param_3 = 3;
  *(undefined8 *)(param_3 + 1) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 3) = 0xffffffffffffffff;
  cVar1 = *param_2;
  while ((cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))))) {
    pcVar11 = param_2 + 1;
    param_2 = param_2 + 1;
    cVar1 = *pcVar11;
  }
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (PTR_s_multi_18000e000[sVar12] != '\0');
  iVar6 = _strnicmp(param_2,PTR_s_multi_18000e000,sVar12);
  bVar4 = false;
  bVar3 = false;
  if (iVar6 == 0) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (PTR_s_multi_18000e000[lVar7] != '\0');
    *param_3 = 0;
  }
  else {
    sVar12 = 0xffffffffffffffff;
    do {
      sVar12 = sVar12 + 1;
    } while (PTR_DAT_18000e008[sVar12] != '\0');
    iVar6 = _strnicmp(param_2,PTR_DAT_18000e008,sVar12);
    puVar5 = PTR_DAT_18000e008;
    if (iVar6 == 0) {
      lVar7 = -1;
      *param_3 = 1;
      do {
        lVar7 = lVar7 + 1;
      } while (puVar5[lVar7] != '\0');
    }
    else {
      sVar12 = 0xffffffffffffffff;
      do {
        sVar12 = sVar12 + 1;
      } while (PTR_s_signature_18000e010[sVar12] != '\0');
      iVar6 = _strnicmp(param_2,PTR_s_signature_18000e010,sVar12);
      puVar5 = PTR_s_signature_18000e010;
      if (iVar6 != 0) {
        *param_3 = 3;
        return 0;
      }
      lVar7 = -1;
      *param_3 = 2;
      do {
        lVar7 = lVar7 + 1;
      } while (puVar5[lVar7] != '\0');
    }
  }
  pcVar11 = param_2 + lVar7;
  local_res10[0] = 0;
  iVar6 = FUN_180005900(param_1,pcVar11,param_3 + 1,(int *)local_res10);
  if (iVar6 != 0) {
    uVar10 = (ulonglong)local_res10[0];
    sVar12 = 0xffffffffffffffff;
    do {
      sVar12 = sVar12 + 1;
    } while (PTR_DAT_18000e018[sVar12] != '\0');
    iVar6 = _strnicmp(pcVar11 + uVar10,PTR_DAT_18000e018,sVar12);
    if (iVar6 == 0) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (PTR_DAT_18000e018[lVar7] != '\0');
      pcVar11 = pcVar11 + uVar10 + lVar7;
      param_3[2] = 0xffffffff;
      if (*pcVar11 == '(') {
        pcVar13 = pcVar11 + 1;
        param_3[2] = 0;
        uVar8 = 1;
        bVar2 = false;
        uVar10 = 1;
        cVar1 = *pcVar13;
        while (cVar1 != '\0') {
          uVar8 = uVar8 + 1;
          uVar10 = (ulonglong)uVar8;
          if (cVar1 == ')') break;
          if (9 < (byte)(cVar1 - 0x30U)) {
            return 0;
          }
          iVar6 = param_3[2];
          bVar2 = true;
          param_3[2] = iVar6 * 10;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          param_3[2] = iVar6 * 10 + -0x30 + (int)cVar1;
          cVar1 = *pcVar13;
        }
        if (bVar2) {
          sVar12 = 0xffffffffffffffff;
          do {
            sVar12 = sVar12 + 1;
          } while (PTR_DAT_18000e020[sVar12] != '\0');
          iVar6 = _strnicmp(pcVar11 + uVar10,PTR_DAT_18000e020,sVar12);
          if (iVar6 == 0) {
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (PTR_DAT_18000e020[lVar7] != '\0');
            pcVar11 = pcVar11 + uVar10 + lVar7;
            param_3[3] = 0xffffffff;
            if (*pcVar11 == '(') {
              pcVar13 = pcVar11 + 1;
              param_3[3] = 0;
              uVar8 = 1;
              bVar2 = false;
              uVar10 = 1;
              cVar1 = *pcVar13;
              while (cVar1 != '\0') {
                uVar8 = uVar8 + 1;
                uVar10 = (ulonglong)uVar8;
                if (cVar1 == ')') break;
                if (9 < (byte)(cVar1 - 0x30U)) {
                  return 0;
                }
                iVar6 = param_3[3];
                bVar2 = true;
                param_3[3] = iVar6 * 10;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                param_3[3] = iVar6 * 10 + -0x30 + (int)cVar1;
                cVar1 = *pcVar13;
              }
              if (bVar2) {
                sVar12 = 0xffffffffffffffff;
                pcVar11 = pcVar11 + uVar10;
                do {
                  sVar12 = sVar12 + 1;
                } while (PTR_s_partition_18000e028[sVar12] != '\0');
                iVar6 = _strnicmp(pcVar11,PTR_s_partition_18000e028,sVar12);
                lVar7 = -1;
                if (iVar6 != 0) {
                  param_3[4] = 0;
                  return 1;
                }
                do {
                  lVar9 = lVar7;
                  lVar7 = lVar9 + 1;
                } while (PTR_s_partition_18000e028[lVar9 + 1] != '\0');
                param_3[4] = 0xffffffff;
                if (pcVar11[lVar9 + 1] == '(') {
                  param_3[4] = 0;
                  pcVar11 = pcVar11 + lVar9 + 2;
                  cVar1 = *pcVar11;
                  while ((cVar1 != '\0' && (bVar3 = bVar4, cVar1 != ')'))) {
                    if (9 < (byte)(cVar1 - 0x30U)) {
                      return 0;
                    }
                    iVar6 = param_3[4];
                    bVar4 = true;
                    bVar3 = true;
                    param_3[4] = iVar6 * 10;
                    cVar1 = *pcVar11;
                    pcVar11 = pcVar11 + 1;
                    param_3[4] = iVar6 * 10 + -0x30 + (int)cVar1;
                    cVar1 = *pcVar11;
                  }
                  if (bVar3) {
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}




void FUN_180005900(undefined8 param_1,char *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  int iVar9;
  int iVar10;
  undefined1 auStack_48 [32];
  char local_28 [16];
  ulonglong local_18;
  ulonglong uVar8;
  
  local_18 = DAT_18000e058 ^ (ulonglong)auStack_48;
  iVar10 = 0;
  iVar3 = 0;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  if (*param_2 == '(') {
    cVar4 = param_2[1];
    pcVar5 = param_2 + 1;
    iVar9 = iVar3;
    if (cVar4 != '\0') {
      pcVar6 = local_28;
      iVar9 = iVar10;
      do {
        if (cVar4 == ')') break;
        pcVar5 = pcVar5 + 1;
        *pcVar6 = cVar4;
        iVar9 = iVar9 + 1;
        pcVar6 = pcVar6 + 1;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
    if (0xf < (ulonglong)(longlong)iVar9) {
      __report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28[iVar9] = '\0';
    *param_4 = iVar9 + 2;
    uVar8 = 0xffffffffffffffff;
    do {
      uVar7 = uVar8 + 1;
      lVar2 = uVar8 + 1;
      uVar8 = uVar7;
    } while (local_28[lVar2] != '\0');
    if (uVar7 != 0) {
      pcVar5 = local_28;
      iVar3 = iVar10;
      do {
        cVar4 = *pcVar5;
        iVar3 = iVar3 * 0x10;
        if ((byte)(cVar4 - 0x30U) < 10) {
          iVar3 = iVar3 + -0x30;
LAB_1800059dc:
          iVar3 = iVar3 + cVar4;
        }
        else {
          if ((byte)(cVar4 + 0x9fU) < 0x1a) {
            iVar3 = iVar3 + -0x57;
            goto LAB_1800059dc;
          }
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            iVar3 = iVar3 + -0x37;
            goto LAB_1800059dc;
          }
        }
        iVar10 = iVar10 + 1;
        pcVar5 = pcVar5 + 1;
      } while ((ulonglong)(longlong)iVar10 < uVar7);
    }
    *param_3 = iVar3;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
  return;
}




void FUN_180005a10(longlong param_1,LPCSTR param_2)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined7 extraout_var;
  char *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  int local_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  char *local_370;
  undefined8 local_368;
  char local_358 [272];
  char local_248 [512];
  ulonglong local_48;
  
  local_368 = 0xfffffffffffffffe;
  local_48 = DAT_18000e058 ^ (ulonglong)auStack_3a8;
  FUN_180006040(&local_388,param_2,0);
  bVar3 = FUN_180006160(&local_388);
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
    FUN_1800060e0(&local_388);
  }
  else {
    iVar13 = 0;
    iVar12 = 0;
LAB_180005a90:
    iVar11 = iVar12;
    uVar4 = FUN_180006240(&local_388,local_248,0x200);
    if (uVar4 != 0) {
      iVar12 = iVar11 + 1;
      iStack_378 = 0;
      local_380 = iVar11;
      pcVar6 = (char *)operator_new((ulonglong)(uVar4 + 1));
      local_370 = pcVar6;
      memmove(pcVar6,local_248,(ulonglong)uVar4);
      pcVar6[uVar4] = '\0';
      uVar8 = 0;
      pcVar10 = pcVar6;
      do {
        cVar1 = *pcVar10;
        if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\n')) && (cVar1 != '\r')) {
          uVar7 = 0;
          pcVar10 = pcVar6;
          goto LAB_180005b50;
        }
        uVar8 = uVar8 + 1;
        pcVar10 = pcVar10 + 1;
      } while (uVar8 < uVar4);
LAB_180005b11:
      iVar5 = 0;
      goto LAB_180005b13;
    }
    FUN_180006110(&local_388);
    FUN_1800060e0(&local_388);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_3a8);
  return;
  while( true ) {
    uVar8 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar8;
    pcVar10 = pcVar10 + 1;
    if (uVar4 <= uVar8) break;
LAB_180005b50:
    if ((*pcVar10 != ' ') && (*pcVar10 != '\t')) {
      if (pcVar6[uVar7] == ';') goto LAB_180005b11;
      break;
    }
  }
  uVar7 = 0;
  pcVar10 = pcVar6;
  do {
    if ((*pcVar10 != ' ') && (*pcVar10 != '\t')) {
      if (pcVar6[uVar7] == '[') {
        iVar5 = 2;
        goto LAB_180005b13;
      }
      break;
    }
    uVar8 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar8;
    pcVar10 = pcVar10 + 1;
  } while (uVar8 < uVar4);
  uVar8 = 0;
  pcVar10 = pcVar6;
  do {
    if (*pcVar10 == '=') {
      iVar5 = 3;
      goto LAB_180005b13;
    }
    uVar8 = uVar8 + 1;
    pcVar10 = pcVar10 + 1;
  } while (uVar8 < uVar4);
  iVar5 = 4;
LAB_180005b13:
  piVar2 = *(int **)(param_1 + 0x20);
  iStack_37c = iVar5;
  if (*(int **)(param_1 + 0x28) == piVar2) {
    FUN_1800046e0((longlong *)(param_1 + 0x18),piVar2,(undefined8 *)&local_380);
  }
  else {
    *piVar2 = local_380;
    piVar2[1] = iVar5;
    piVar2[2] = iStack_378;
    piVar2[3] = iStack_374;
    *(char **)(piVar2 + 4) = local_370;
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 0x18;
  }
  if (iVar13 == 0) {
    if (iVar5 == 2) {
      uVar7 = 0;
      pcVar10 = pcVar6;
      if (uVar4 != 0) {
        do {
          if ((*pcVar10 != ' ') && (*pcVar10 != '\t')) {
            if (pcVar6[uVar7] != '[') goto LAB_180005d77;
            break;
          }
          uVar8 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar8;
          pcVar10 = pcVar10 + 1;
        } while (uVar8 < uVar4);
      }
      uVar8 = (int)uVar7 + 1;
      uVar7 = 0;
      if (uVar8 < uVar4) {
        pcVar6 = pcVar6 + uVar8;
        do {
          cVar1 = *pcVar6;
          if ((cVar1 == ']') || (cVar1 == '\0')) break;
          local_358[uVar7] = cVar1;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar8 = uVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (uVar8 < uVar4);
      }
      local_358[uVar7] = '\0';
LAB_180005d77:
      iVar5 = _stricmp(local_358,PTR_s_boot_loader_18000e040);
      if (iVar5 == 0) {
        *(int *)(param_1 + 4) = iVar11;
        *(undefined4 *)(param_1 + 8) = 0;
        iVar13 = 1;
      }
      iVar5 = _stricmp(local_358,PTR_s_operating_systems_18000e048);
      if (iVar5 == 0) {
        *(int *)(param_1 + 0xc) = iVar11;
        *(undefined4 *)(param_1 + 0x10) = 0;
        iVar13 = 2;
      }
    }
    goto LAB_180005a90;
  }
  if (iVar13 == 1) {
    if (iVar5 != 2) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      goto LAB_180005a90;
    }
    uVar7 = 0;
    pcVar10 = pcVar6;
    pcVar9 = PTR_s_operating_systems_18000e048;
    if (uVar4 != 0) {
      do {
        if ((*pcVar10 != ' ') && (*pcVar10 != '\t')) {
          if (pcVar6[uVar7] != '[') {
            local_358[0] = '\0';
            goto LAB_180005cda;
          }
          break;
        }
        uVar8 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar8;
        pcVar10 = pcVar10 + 1;
      } while (uVar8 < uVar4);
    }
    uVar8 = (int)uVar7 + 1;
    uVar7 = 0;
    if (uVar8 < uVar4) {
      pcVar6 = pcVar6 + uVar8;
      do {
        cVar1 = *pcVar6;
        if ((cVar1 == ']') || (cVar1 == '\0')) break;
        local_358[uVar7] = cVar1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar8 = uVar8 + 1;
        pcVar6 = pcVar6 + 1;
      } while (uVar8 < uVar4);
    }
    local_358[uVar7] = '\0';
  }
  else {
    if (iVar13 != 2) goto LAB_180005a90;
    if (iVar5 != 2) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      goto LAB_180005a90;
    }
    uVar7 = 0;
    pcVar10 = pcVar6;
    pcVar9 = PTR_s_boot_loader_18000e040;
    if (uVar4 != 0) {
      do {
        if ((*pcVar10 != ' ') && (*pcVar10 != '\t')) {
          if (pcVar6[uVar7] != '[') {
            local_358[0] = '\0';
            goto LAB_180005cda;
          }
          break;
        }
        uVar8 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar8;
        pcVar10 = pcVar10 + 1;
      } while (uVar8 < uVar4);
    }
    uVar8 = (int)uVar7 + 1;
    uVar7 = 0;
    if (uVar8 < uVar4) {
      pcVar6 = pcVar6 + uVar8;
      do {
        cVar1 = *pcVar6;
        if ((cVar1 == ']') || (cVar1 == '\0')) break;
        local_358[uVar7] = cVar1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar8 = uVar8 + 1;
        pcVar6 = pcVar6 + 1;
      } while (uVar8 < uVar4);
    }
    local_358[uVar7] = '\0';
  }
LAB_180005cda:
  iVar13 = 0;
  iVar5 = _stricmp(local_358,pcVar9);
  if (iVar5 == 0) {
    *(int *)(param_1 + 0xc) = iVar11;
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar13 = 2;
  }
  goto LAB_180005a90;
}




void FUN_180005e10(longlong param_1,LPCSTR param_2)

{
  bool bVar1;
  DWORD dwFileAttributes;
  BOOL BVar2;
  undefined7 extraout_var;
  HANDLE hDevice;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStackY_98 [32];
  longlong local_58;
  DWORD local_50 [2];
  undefined8 local_48;
  void *local_30;
  CHAR local_28 [5];
  undefined1 uStack_23;
  undefined1 local_22;
  undefined2 local_21;
  undefined1 local_1f;
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_18000e058 ^ (ulonglong)auStackY_98;
  dwFileAttributes = GetFileAttributesA(param_2);
  BVar2 = SetFileAttributesA(param_2,0x80);
  if (BVar2 != 0) {
    FUN_180006040(&local_58,param_2,3);
    bVar1 = FUN_180006160(&local_58);
    if ((int)CONCAT71(extraout_var,bVar1) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (lVar3 != *(longlong *)(param_1 + 0x20)) {
        do {
          local_30 = *(void **)(lVar3 + 0x10);
          lVar4 = -1;
          do {
            lVar4 = lVar4 + 1;
          } while (*(char *)((longlong)local_30 + lVar4) != '\0');
          FUN_180006330(&local_58,local_30,(uint)lVar4);
          lVar3 = lVar3 + 0x18;
        } while (lVar3 != *(longlong *)(param_1 + 0x20));
      }
      FUN_180006140(&local_58);
      FUN_180006110(&local_58);
      SetFileAttributesA(param_2,dwFileAttributes);
      builtin_memcpy(local_28,"\\\\.\\",4);
      local_22 = 0;
      local_21 = 0;
      local_1f = 0;
      stack0xffffffffffffffdc = CONCAT11(0x3a,*param_2);
      hDevice = CreateFileA(local_28,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (hDevice != (HANDLE)0xffffffffffffffff) {
        local_50[0] = 0;
        DeviceIoControl(hDevice,0x90083,(LPVOID)0x0,0,(LPVOID)0x0,0,local_50,(LPOVERLAPPED)0x0);
        FlushFileBuffers(hDevice);
        CloseHandle(hDevice);
      }
    }
    FUN_1800060e0(&local_58);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_98);
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
  if ((0xfff < (ulonglong)(param_3 * 0x18)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




undefined8 * FUN_180006040(undefined8 *param_1,LPCSTR param_2,int param_3)

{
  DWORD dwCreationDisposition;
  HANDLE pvVar1;
  DWORD dwDesiredAccess;
  
  *param_1 = 0xffffffffffffffff;
  if (param_3 == 0) {
    dwDesiredAccess = 0x80000000;
  }
  else if (param_3 == 1) {
    dwDesiredAccess = 0x40000000;
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        dwDesiredAccess = 0xc0000000;
        dwCreationDisposition = 2;
      }
      else {
        if (param_3 != 4) {
          return param_1;
        }
        dwDesiredAccess = 0xc0000000;
        dwCreationDisposition = 4;
      }
      goto LAB_18000609f;
    }
    dwDesiredAccess = 0xc0000000;
  }
  dwCreationDisposition = 3;
LAB_18000609f:
  pvVar1 = CreateFileA(param_2,dwDesiredAccess,3,(LPSECURITY_ATTRIBUTES)0x0,dwCreationDisposition,
                       0x80,(HANDLE)0x0);
  *param_1 = pvVar1;
  return param_1;
}




undefined8 * FUN_1800060d0(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  return param_1;
}




void FUN_1800060e0(undefined8 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0xffffffffffffffff;
  }
  return;
}




void FUN_180006110(undefined8 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0xffffffffffffffff;
  }
  return;
}




void FUN_180006140(undefined8 *param_1)

{
  if ((longlong)*param_1 - 1U < 0xfffffffffffffffe) {
                    /* WARNING: Could not recover jumptable at 0x00018000614d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FlushFileBuffers((HANDLE)*param_1);
    return;
  }
  return;
}




bool FUN_180006160(longlong *param_1)

{
  return *param_1 - 1U < 0xfffffffffffffffe;
}




bool FUN_180006170(undefined8 *param_1,LPCSTR param_2,int param_3)

{
  DWORD dwCreationDisposition;
  HANDLE pvVar1;
  DWORD dwDesiredAccess;
  
  if ((HANDLE)*param_1 != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0xffffffffffffffff;
  }
  if (param_3 == 0) {
    dwDesiredAccess = 0x80000000;
  }
  else if (param_3 == 1) {
    dwDesiredAccess = 0x40000000;
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        dwDesiredAccess = 0xc0000000;
        dwCreationDisposition = 2;
      }
      else {
        if (param_3 != 4) {
          return false;
        }
        dwDesiredAccess = 0xc0000000;
        dwCreationDisposition = 4;
      }
      goto LAB_1800061f8;
    }
    dwDesiredAccess = 0xc0000000;
  }
  dwCreationDisposition = 3;
LAB_1800061f8:
  pvVar1 = CreateFileA(param_2,dwDesiredAccess,3,(LPSECURITY_ATTRIBUTES)0x0,dwCreationDisposition,
                       0x80,(HANDLE)0x0);
  *param_1 = pvVar1;
  return pvVar1 != (HANDLE)0xffffffffffffffff;
}




uint FUN_180006240(undefined8 *param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  uint uVar3;
  char *lpBuffer;
  DWORD local_res18 [2];
  
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = 0;
  lpBuffer = param_2;
  if (param_3 != 0) {
    do {
      local_res18[0] = 0;
      BVar2 = ReadFile((HANDLE)*param_1,lpBuffer,1,local_res18,(LPOVERLAPPED)0x0);
      if ((BVar2 == 0) || (local_res18[0] == 0)) {
        if (lpBuffer == param_2) {
          return uVar3;
        }
LAB_1800062c3:
        if (param_3 <= uVar3) {
          return uVar3;
        }
        *lpBuffer = '\0';
        return uVar3;
      }
      cVar1 = *lpBuffer;
      uVar3 = uVar3 + 1;
      lpBuffer = lpBuffer + 1;
      if (cVar1 == '\n') goto LAB_1800062c3;
    } while (uVar3 < param_3);
  }
  return uVar3;
}




void FUN_1800062f0(undefined8 *param_1)

{
  if ((longlong)*param_1 - 1U < 0xfffffffffffffffe) {
                    /* WARNING: Could not recover jumptable at 0x000180006305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetFilePointer((HANDLE)*param_1,0,(PLONG)0x0,0);
    return;
  }
  return;
}




void FUN_180006310(undefined8 *param_1)

{
  if ((longlong)*param_1 - 1U < 0xfffffffffffffffe) {
                    /* WARNING: Could not recover jumptable at 0x000180006328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetFilePointer((HANDLE)*param_1,0,(PLONG)0x0,2);
    return;
  }
  return;
}




void FUN_180006330(undefined8 *param_1,void *param_2,uint param_3)

{
  HANDLE hFile;
  undefined1 auStackY_468 [32];
  DWORD local_438 [4];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_18000e058 ^ (ulonglong)auStackY_468;
  if (param_3 != 0) {
    local_438[0] = 0;
    if (((param_3 < 2) || (*(char *)((ulonglong)(param_3 - 1) + (longlong)param_2) != '\n')) ||
       (*(char *)((ulonglong)(param_3 - 2) + (longlong)param_2) != '\r')) {
      memcpy(local_428,param_2,(ulonglong)param_3);
      hFile = (HANDLE)*param_1;
      local_428[param_3] = 0xd;
      local_428[param_3 + 1] = 10;
      WriteFile(hFile,local_428,param_3 + 2,local_438,(LPOVERLAPPED)0x0);
    }
    else {
      WriteFile((HANDLE)*param_1,param_2,param_3,local_438,(LPOVERLAPPED)0x0);
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_468);
  return;
}




void FUN_180006410(longlong *param_1)

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




void FUN_180006480(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff0U)) &&
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




void FUN_1800064f0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[1];
    if (plVar1 != plVar2) {
      do {
        FUN_180006410(plVar1);
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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180006590(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18000e1d0) {
    _Init_thread_header(&DAT_18000e1d0);
    if (DAT_18000e1d0 == -1) {
      _DAT_18000e1a0 = 0;
      uRam000000018000e1a8 = 0;
      _DAT_18000e1b0 = 0;
      _DAT_18000e1b8 = 0;
      uRam000000018000e1c0 = 0;
      _DAT_18000e1c8 = 0;
      atexit(FUN_180009e60);
      _Init_thread_footer(&DAT_18000e1d0);
      return &DAT_18000e198;
    }
  }
  return &DAT_18000e198;
}




undefined * FUN_180006630(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18000ebb0) {
    _Init_thread_header(&DAT_18000ebb0);
    if (DAT_18000ebb0 == -1) {
      FUN_180007c50(0x18000ea80);
      atexit(FUN_180009e90);
      _Init_thread_footer(&DAT_18000ebb0);
      return &DAT_18000ea80;
    }
  }
  return &DAT_18000ea80;
}




byte Bcd_BcdProcPartition(uint param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  int *piVar4;
  
                    /* 0x66c0  15  Bcd_BcdProcPartition */
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if ((*piVar4 < DAT_18000e620) && (_Init_thread_header(&DAT_18000e620), DAT_18000e620 == -1)) {
    FUN_180001000((undefined8 *)&DAT_18000e1e0);
    atexit((_func_5014 *)&LAB_180009e40);
    _Init_thread_footer(&DAT_18000e620);
  }
  bVar1 = FUN_180001980(0x18000e1e0,param_1,param_2);
  uVar3 = FUN_180001fd0(0x18000e1e0);
  if ((char)uVar3 == '\0') {
    if ((*piVar4 < DAT_18000ea70) && (_Init_thread_header(&DAT_18000ea70), DAT_18000ea70 == -1)) {
      FUN_1800010b0((undefined8 *)&DAT_18000e630);
      atexit((_func_5014 *)&LAB_180009e50);
      _Init_thread_footer(&DAT_18000ea70);
    }
    bVar2 = FUN_180001980(0x18000e630,param_1,param_2);
    bVar1 = bVar2 | bVar1;
  }
  return bVar1;
}




byte Bcd_Init(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  int *piVar4;
  
                    /* 0x67f0  16  Bcd_Init */
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if (*piVar4 < DAT_18000e620) {
    _Init_thread_header(&DAT_18000e620);
    if (DAT_18000e620 == -1) {
      FUN_180001000((undefined8 *)&DAT_18000e1e0);
      atexit((_func_5014 *)&LAB_180009e40);
      _Init_thread_footer(&DAT_18000e620);
    }
  }
  bVar1 = FUN_1800017a0(0x18000e1e0,param_1,param_3,param_4);
  uVar3 = FUN_180001fd0(0x18000e1e0);
  if ((char)uVar3 == '\0') {
    if (*piVar4 < DAT_18000ea70) {
      _Init_thread_header(&DAT_18000ea70);
      if (DAT_18000ea70 == -1) {
        FUN_1800010b0((undefined8 *)&DAT_18000e630);
        atexit((_func_5014 *)&LAB_180009e50);
        _Init_thread_footer(&DAT_18000ea70);
      }
    }
    bVar2 = FUN_1800017a0(0x18000e630,param_1,param_3,param_4);
    return bVar2 | bVar1;
  }
  return bVar1;
}




byte Bcd_IsBcdPartition(char *param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  int *piVar4;
  
                    /* 0x6920  17  Bcd_IsBcdPartition */
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if (*piVar4 < DAT_18000e620) {
    _Init_thread_header(&DAT_18000e620);
    if (DAT_18000e620 == -1) {
      FUN_180001000((undefined8 *)&DAT_18000e1e0);
      atexit((_func_5014 *)&LAB_180009e40);
      _Init_thread_footer(&DAT_18000e620);
    }
  }
  bVar1 = FUN_180001c40(0x18000e1e0,param_1);
  uVar3 = FUN_180001fd0(0x18000e1e0);
  if ((char)uVar3 == '\0') {
    if (*piVar4 < DAT_18000ea70) {
      _Init_thread_header(&DAT_18000ea70);
      if (DAT_18000ea70 == -1) {
        FUN_1800010b0((undefined8 *)&DAT_18000e630);
        atexit((_func_5014 *)&LAB_180009e50);
        _Init_thread_footer(&DAT_18000ea70);
      }
    }
    bVar2 = FUN_180001c40(0x18000e630,param_1);
    return bVar2 | bVar1;
  }
  return bVar1;
}




byte Bcd_IsExistBcdFile(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
                    /* 0x6a50  18  Bcd_IsExistBcdFile */
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if (*piVar3 < DAT_18000e620) {
    _Init_thread_header(&DAT_18000e620);
    if (DAT_18000e620 == -1) {
      FUN_180001000((undefined8 *)&DAT_18000e1e0);
      atexit((_func_5014 *)&LAB_180009e40);
      _Init_thread_footer(&DAT_18000e620);
    }
  }
  uVar1 = FUN_180001f70(0x18000e1e0);
  if (*piVar3 < DAT_18000ea70) {
    _Init_thread_header(&DAT_18000ea70);
    if (DAT_18000ea70 == -1) {
      FUN_1800010b0((undefined8 *)&DAT_18000e630);
      atexit((_func_5014 *)&LAB_180009e50);
      _Init_thread_footer(&DAT_18000ea70);
    }
  }
  uVar2 = FUN_180001f70(0x18000e630);
  return (byte)uVar2 | (byte)uVar1;
}




ulonglong Bcd_IsUsingBcdFile(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  
                    /* 0x6b40  19  Bcd_IsUsingBcdFile */
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if (*piVar3 < DAT_18000e620) {
    _Init_thread_header(&DAT_18000e620);
    if (DAT_18000e620 == -1) {
      FUN_180001000((undefined8 *)&DAT_18000e1e0);
      atexit((_func_5014 *)&LAB_180009e40);
      _Init_thread_footer(&DAT_18000e620);
    }
  }
  uVar1 = FUN_180001ff0(0x18000e1e0);
  uVar2 = FUN_180001fd0(0x18000e1e0);
  if ((char)uVar2 == '\0') {
    if (*piVar3 < DAT_18000ea70) {
      _Init_thread_header(&DAT_18000ea70);
      if (DAT_18000ea70 == -1) {
        FUN_1800010b0((undefined8 *)&DAT_18000e630);
        atexit((_func_5014 *)&LAB_180009e50);
        _Init_thread_footer(&DAT_18000ea70);
      }
    }
    uVar2 = FUN_180001ff0(0x18000e630);
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 | (byte)uVar1);
  }
  return uVar1 & 0xff;
}




ulonglong Bcd_IsVistaBoot(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int *piVar4;
  
                    /* 0x6c50  20  Bcd_IsVistaBoot */
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if (*piVar4 < DAT_18000e620) {
    _Init_thread_header(&DAT_18000e620);
    if (DAT_18000e620 == -1) {
      FUN_180001000((undefined8 *)&DAT_18000e1e0);
      atexit((_func_5014 *)&LAB_180009e40);
      _Init_thread_footer(&DAT_18000e620);
    }
  }
  uVar1 = FUN_180002180(0x18000e1e0);
  uVar2 = FUN_180001fd0(0x18000e1e0);
  if ((char)uVar2 == '\0') {
    if (*piVar4 < DAT_18000ea70) {
      _Init_thread_header(&DAT_18000ea70);
      if (DAT_18000ea70 == -1) {
        FUN_1800010b0((undefined8 *)&DAT_18000e630);
        atexit((_func_5014 *)&LAB_180009e50);
        _Init_thread_footer(&DAT_18000ea70);
      }
    }
    uVar3 = FUN_180002180(0x18000e630);
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),(byte)uVar3 | (byte)uVar1);
  }
  return uVar1 & 0xff;
}




byte Bcd_IsVistaBootManager
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  int *piVar4;
  
                    /* 0x6d60  21  Bcd_IsVistaBootManager */
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if (*piVar4 < DAT_18000e620) {
    _Init_thread_header(&DAT_18000e620);
    if (DAT_18000e620 == -1) {
      FUN_180001000((undefined8 *)&DAT_18000e1e0);
      atexit((_func_5014 *)&LAB_180009e40);
      _Init_thread_footer(&DAT_18000e620);
    }
  }
  bVar1 = FUN_1800021f0(0x18000e1e0,param_1,param_3,param_4);
  uVar3 = FUN_180001fd0(0x18000e1e0);
  if ((char)uVar3 == '\0') {
    if (*piVar4 < DAT_18000ea70) {
      _Init_thread_header(&DAT_18000ea70);
      if (DAT_18000ea70 == -1) {
        FUN_1800010b0((undefined8 *)&DAT_18000e630);
        atexit((_func_5014 *)&LAB_180009e50);
        _Init_thread_footer(&DAT_18000ea70);
      }
    }
    bVar2 = FUN_1800021f0(0x18000e630,param_1,param_3,param_4);
    return bVar2 | bVar1;
  }
  return bVar1;
}




bool Bcd_LockBcdFile(void)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  int *piVar4;
  
                    /* 0x6e90  22  Bcd_LockBcdFile */
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if (*piVar4 < DAT_18000e620) {
    _Init_thread_header(&DAT_18000e620);
    if (DAT_18000e620 == -1) {
      FUN_180001000((undefined8 *)&DAT_18000e1e0);
      atexit((_func_5014 *)&LAB_180009e40);
      _Init_thread_footer(&DAT_18000e620);
    }
  }
  bVar1 = FUN_180002420(0x18000e1e0);
  uVar3 = FUN_180001fd0(0x18000e1e0);
  if ((char)uVar3 == '\0') {
    if (*piVar4 < DAT_18000ea70) {
      _Init_thread_header(&DAT_18000ea70);
      if (DAT_18000ea70 == -1) {
        FUN_1800010b0((undefined8 *)&DAT_18000e630);
        atexit((_func_5014 *)&LAB_180009e50);
        _Init_thread_footer(&DAT_18000ea70);
      }
    }
    bVar2 = FUN_180002420(0x18000e630);
    return bVar2 || bVar1;
  }
  return bVar1;
}




void Bcd_RestoreBcdFile(void)

{
  BOOL BVar1;
  ulonglong uVar2;
  byte bVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 in_R9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  _OSVERSIONINFOA local_b8;
  ulonglong local_18;
  
                    /* 0x6fa0  23  Bcd_RestoreBcdFile */
  local_c8 = 0xfffffffffffffffe;
  local_18 = DAT_18000e058 ^ (ulonglong)auStack_e8;
  uVar5 = 0x98;
  memset(&local_b8.dwMajorVersion,0,0x98);
  local_b8.dwOSVersionInfoSize = 0x9c;
  BVar1 = GetVersionExA(&local_b8);
  if (BVar1 != 0) {
    bVar3 = 0;
    if (local_b8.dwMajorVersion < 7) {
      if ((local_b8.dwMajorVersion == 6) && (bVar3 = 0, local_b8.dwMinorVersion != 0)) {
        bVar3 = 1;
      }
    }
    else {
      bVar3 = 1;
    }
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4);
    if ((*piVar4 < DAT_18000e620) && (_Init_thread_header(&DAT_18000e620), DAT_18000e620 == -1)) {
      FUN_180001000((undefined8 *)&DAT_18000e1e0);
      atexit((_func_5014 *)&LAB_180009e40);
      _Init_thread_footer(&DAT_18000e620);
    }
    uVar2 = 0;
    FUN_180002680(0x18000e1e0,'\0',uVar5,in_R9);
    if (bVar3 != 0) {
      uVar2 = (ulonglong)bVar3;
      FUN_180002680(0x18000e1e0,bVar3,uVar5,in_R9);
    }
    FUN_180003290(0x18000e1e0,uVar2,uVar5,in_R9);
    uVar2 = FUN_180001fd0(0x18000e1e0);
    if ((char)uVar2 == '\0') {
      if ((*piVar4 < DAT_18000ea70) && (_Init_thread_header(&DAT_18000ea70), DAT_18000ea70 == -1)) {
        FUN_1800010b0((undefined8 *)&DAT_18000e630);
        atexit((_func_5014 *)&LAB_180009e50);
        _Init_thread_footer(&DAT_18000ea70);
      }
      uVar2 = 0;
      FUN_180002680(0x18000e630,'\0',uVar5,in_R9);
      if (bVar3 != 0) {
        uVar2 = (ulonglong)bVar3;
        FUN_180002680(0x18000e630,bVar3,uVar5,in_R9);
      }
      FUN_180003290(0x18000e630,uVar2,uVar5,in_R9);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_e8);
  return;
}




void _guard_check_icall(void)

{
                    /* 0x71a0  24  Bcd_Uninit */
  return;
}




void Bcd_UnlockBcdFile(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  ulonglong uVar2;
  byte bVar3;
  int *piVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  _OSVERSIONINFOA local_c8;
  ulonglong local_28;
  
                    /* 0x71b0  25  Bcd_UnlockBcdFile */
  local_d8 = 0xfffffffffffffffe;
  local_28 = DAT_18000e058 ^ (ulonglong)auStack_f8;
  memset(&local_c8.dwMajorVersion,0,0x98);
  local_c8.dwOSVersionInfoSize = 0x9c;
  BVar1 = GetVersionExA(&local_c8);
  if (BVar1 != 0) {
    bVar3 = 0;
    if (local_c8.dwMajorVersion < 7) {
      if ((local_c8.dwMajorVersion == 6) && (bVar3 = 0, local_c8.dwMinorVersion != 0)) {
        bVar3 = 1;
      }
    }
    else {
      bVar3 = 1;
    }
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4);
    if ((*piVar4 < DAT_18000e620) && (_Init_thread_header(&DAT_18000e620), DAT_18000e620 == -1)) {
      FUN_180001000((undefined8 *)&DAT_18000e1e0);
      atexit((_func_5014 *)&LAB_180009e40);
      _Init_thread_footer(&DAT_18000e620);
    }
    uVar2 = 0;
    FUN_180002920(0x18000e1e0,param_1,0,param_4);
    if (bVar3 != 0) {
      uVar2 = (ulonglong)bVar3;
      FUN_180002920(0x18000e1e0,param_1,uVar2,param_4);
    }
    FUN_180003040(0x18000e1e0,param_1,uVar2,param_4);
    uVar2 = FUN_180001fd0(0x18000e1e0);
    if ((char)uVar2 == '\0') {
      if ((*piVar4 < DAT_18000ea70) && (_Init_thread_header(&DAT_18000ea70), DAT_18000ea70 == -1)) {
        FUN_1800010b0((undefined8 *)&DAT_18000e630);
        atexit((_func_5014 *)&LAB_180009e50);
        _Init_thread_footer(&DAT_18000ea70);
      }
      uVar2 = 0;
      FUN_180002920(0x18000e630,param_1,0,param_4);
      if (bVar3 != 0) {
        uVar2 = (ulonglong)bVar3;
        FUN_180002920(0x18000e630,param_1,uVar2,param_4);
      }
      FUN_180003040(0x18000e630,param_1,uVar2,param_4);
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_f8);
  return;
}




void Bcd_UnlockBcdFileEx(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  ulonglong uVar2;
  byte bVar3;
  int *piVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  _OSVERSIONINFOA local_c8;
  ulonglong local_28;
  
                    /* 0x73c0  26  Bcd_UnlockBcdFileEx */
  local_d8 = 0xfffffffffffffffe;
  local_28 = DAT_18000e058 ^ (ulonglong)auStack_f8;
  memset(&local_c8.dwMajorVersion,0,0x98);
  local_c8.dwOSVersionInfoSize = 0x9c;
  BVar1 = GetVersionExA(&local_c8);
  if (BVar1 != 0) {
    bVar3 = 0;
    if (local_c8.dwMajorVersion < 7) {
      if ((local_c8.dwMajorVersion == 6) && (bVar3 = 0, local_c8.dwMinorVersion != 0)) {
        bVar3 = 1;
      }
    }
    else {
      bVar3 = 1;
    }
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4);
    if ((*piVar4 < DAT_18000e620) && (_Init_thread_header(&DAT_18000e620), DAT_18000e620 == -1)) {
      FUN_180001000((undefined8 *)&DAT_18000e1e0);
      atexit((_func_5014 *)&LAB_180009e40);
      _Init_thread_footer(&DAT_18000e620);
    }
    uVar2 = 0;
    FUN_180002c00(0x18000e1e0,param_1,0,param_4);
    if (bVar3 != 0) {
      uVar2 = (ulonglong)bVar3;
      FUN_180002c00(0x18000e1e0,param_1,uVar2,param_4);
    }
    FUN_180003180(0x18000e1e0,param_1,uVar2,param_4);
    uVar2 = FUN_180001fd0(0x18000e1e0);
    if ((char)uVar2 == '\0') {
      if ((*piVar4 < DAT_18000ea70) && (_Init_thread_header(&DAT_18000ea70), DAT_18000ea70 == -1)) {
        FUN_1800010b0((undefined8 *)&DAT_18000e630);
        atexit((_func_5014 *)&LAB_180009e50);
        _Init_thread_footer(&DAT_18000ea70);
      }
      uVar2 = 0;
      FUN_180002c00(0x18000e630,param_1,0,param_4);
      if (bVar3 != 0) {
        uVar2 = (ulonglong)bVar3;
        FUN_180002c00(0x18000e630,param_1,uVar2,param_4);
      }
      FUN_180003180(0x18000e630,param_1,uVar2,param_4);
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_f8);
  return;
}




byte Bcd_UnlockBcdNewPos(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  int *piVar4;
  
                    /* 0x75d0  27  Bcd_UnlockBcdNewPos */
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if (*piVar4 < DAT_18000e620) {
    _Init_thread_header(&DAT_18000e620);
    if (DAT_18000e620 == -1) {
      FUN_180001000((undefined8 *)&DAT_18000e1e0);
      atexit((_func_5014 *)&LAB_180009e40);
      _Init_thread_footer(&DAT_18000e620);
    }
  }
  bVar1 = FUN_180002c00(0x18000e1e0,param_1,0,param_4);
  uVar3 = FUN_180001fd0(0x18000e1e0);
  if ((char)uVar3 == '\0') {
    if (*piVar4 < DAT_18000ea70) {
      _Init_thread_header(&DAT_18000ea70);
      if (DAT_18000ea70 == -1) {
        FUN_1800010b0((undefined8 *)&DAT_18000e630);
        atexit((_func_5014 *)&LAB_180009e50);
        _Init_thread_footer(&DAT_18000ea70);
      }
    }
    bVar2 = FUN_180002c00(0x18000e630,param_1,0,param_4);
    return bVar2 | bVar1;
  }
  return bVar1;
}




void BootIni_ForceUpdated(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
                    /* 0x7700  28  BootIni_ForceUpdated */
  puVar1 = (undefined8 *)FUN_180006590();
  FUN_180003970(puVar1,param_1,param_2,param_3);
  return;
}




void BootIni_GetErrorVector(void)

{
  undefined *puVar1;
  
                    /* 0x7740  29  BootIni_GetErrorVector */
  puVar1 = FUN_180006590();
  FUN_180003a20((longlong)puVar1);
  return;
}




void BootIni_Init(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  
                    /* 0x7760  30  BootIni_Init */
  puVar1 = (undefined8 *)FUN_180006590();
  FUN_180003a30(puVar1,param_1,param_3,param_4);
  return;
}




void BootIni_IsUpdated(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  
                    /* 0x7780  31  BootIni_IsUpdated */
  puVar1 = (undefined8 *)FUN_180006590();
  FUN_180003ae0(puVar1,param_2,param_3,param_4);
  return;
}




void BootIni_SetArcAccess(undefined8 param_1)

{
  undefined8 *puVar1;
  
                    /* 0x77a0  32  BootIni_SetArcAccess */
  puVar1 = (undefined8 *)FUN_180006590();
  FUN_180004240(puVar1,param_1);
  return;
}




void BootIni_UpdateFile(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  
                    /* 0x77c0  33  BootIni_UpdateFile */
  puVar1 = (undefined8 *)FUN_180006590();
  FUN_180004250(puVar1,param_2,param_3,param_4);
  return;
}




void Log_Init(char *param_1,undefined1 param_2,byte param_3)

{
  undefined *puVar1;
  
                    /* 0x77e0  34  Log_Init */
  puVar1 = FUN_180006630();
  FUN_180007e60(puVar1,param_1,param_2,(ulonglong)param_3);
  return;
}




void Log_Output(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined8 *local_240;
  undefined1 local_238 [528];
  ulonglong local_28;
  
                    /* 0x7820  35  Log_Output */
  local_28 = DAT_18000e058 ^ (ulonglong)auStack_268;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (ulonglong *)FUN_1800034a0();
  local_248 = 0;
  local_240 = &local_res10;
  __stdio_common_vsprintf(*puVar1 | 1,local_238,0xffffffffffffffff,param_1);
  puVar2 = FUN_180006630();
  FUN_180008040((longlong)puVar2,(longlong)local_238);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_268);
  return;
}




void Log_Uninit(void)

{
  undefined *puVar1;
  
                    /* 0x78b0  36  Log_Uninit */
  puVar1 = FUN_180006630();
  FUN_180007cf0((longlong)puVar1);
  return;
}




undefined8 * FUN_1800078d0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
    FUN_1800045c0();
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
      goto LAB_1800079cf;
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
LAB_1800079cf:
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
    FUN_180007af0((undefined8 *)*param_1,param_2,puVar13);
    puVar10 = (undefined8 *)param_1[1];
    puVar9 = param_2;
    puVar14 = puVar1 + 4;
  }
  FUN_180007af0(puVar9,puVar10,puVar14);
  plVar11 = (longlong *)*param_1;
  if (plVar11 != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[1];
    if (plVar11 != plVar12) {
      do {
        FUN_180006410(plVar11);
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




undefined8 * FUN_180007af0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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




undefined8 * FUN_180007b70(undefined8 *param_1,undefined8 *param_2)

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




longlong FUN_180007c50(longlong param_1)

{
  FUN_1800060d0((undefined8 *)(param_1 + 0x108));
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  memset((void *)(param_1 + 2),0,0x104);
  *(undefined1 *)(param_1 + 0x111) = 0;
  return param_1;
}




void FUN_180007cb0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 4) {
    FUN_180006410(plVar2);
  }
  return;
}




void FUN_180007cf0(longlong param_1)

{
  longlong *plVar1;
  void *pvVar2;
  bool bVar3;
  undefined7 extraout_var;
  void *_Memory;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_48 = 0xfffffffffffffffe;
  local_20 = DAT_18000e058 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 1) == '\0') && (*(char *)(param_1 + 0x110) != '\0')) {
    plVar1 = (longlong *)(param_1 + 0x108);
    FUN_180006170(plVar1,(LPCSTR)(param_1 + 2),1);
    bVar3 = FUN_180006160(plVar1);
    if ((int)CONCAT71(extraout_var,bVar3) == 0) {
      FUN_1800062f0(plVar1);
    }
    else {
      puVar5 = *(undefined8 **)(param_1 + 0x118);
      if (puVar5 != *(undefined8 **)(param_1 + 0x120)) {
        do {
          FUN_180007b70(local_40,puVar5);
          puVar4 = local_40;
          if (0xf < local_28) {
            puVar4 = (undefined8 *)CONCAT71(local_40[0]._1_7_,(undefined1)local_40[0]);
          }
          FUN_180006330(plVar1,puVar4,(uint)local_30);
          FUN_180006140(plVar1);
          *(undefined1 *)(param_1 + 0x111) = 1;
          if (0xf < local_28) {
            pvVar2 = (void *)CONCAT71(local_40[0]._1_7_,(undefined1)local_40[0]);
            _Memory = pvVar2;
            if ((0xfff < local_28 + 1) &&
               (_Memory = *(void **)((longlong)pvVar2 + -8),
               0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(_Memory);
          }
          local_30 = 0;
          local_28 = 0xf;
          local_40[0]._0_1_ = 0;
          puVar5 = puVar5 + 4;
        } while (puVar5 != *(undefined8 **)(param_1 + 0x120));
      }
      FUN_180006110(plVar1);
      if (*(char *)(param_1 + 0x111) == '\0') {
        DeleteFileA((LPCSTR)(param_1 + 2));
      }
    }
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStack_68);
  return;
}




void FUN_180007e60(undefined1 *param_1,char *param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  char *pcVar5;
  undefined1 uVar6;
  undefined7 uVar7;
  undefined1 auStack_2e8 [32];
  longlong local_2c8 [2];
  char local_2b8 [128];
  CHAR local_238 [272];
  CHAR local_128 [272];
  ulonglong local_18;
  
  uVar6 = (undefined1)param_4;
  uVar7 = (undefined7)((ulonglong)param_4 >> 8);
  local_2c8[1] = 0xfffffffffffffffe;
  local_18 = DAT_18000e058 ^ (ulonglong)auStack_2e8;
  *param_1 = uVar6;
  param_1[1] = param_3;
  param_1[0x110] = 1;
  memset(local_238,0,0x104);
  GetWindowsDirectoryA(local_238,0x104);
  if (param_2 == (char *)0x0) {
    FUN_1800034b0(local_2b8,"%s\\EpmLog.log",local_238,CONCAT71(uVar7,uVar6));
    pcVar5 = local_2b8;
    do {
      cVar2 = *pcVar5;
      pcVar5[(longlong)(param_1 + (2 - (longlong)local_2b8))] = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
  }
  else {
    pcVar5 = param_2;
    do {
      cVar2 = *pcVar5;
      pcVar5[(longlong)(param_1 + (2 - (longlong)param_2))] = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
  }
  memset(local_128,0,0x104);
  FUN_1800034b0(local_128,"%s\\EuCtrlLog.ini",local_238,CONCAT71(uVar7,uVar6));
  FUN_180006040(local_2c8,local_128,0);
  bVar3 = FUN_180006160(local_2c8);
  if ((int)CONCAT71(extraout_var,bVar3) != 0) {
    FUN_180006240(local_2c8,local_238,0x104);
    iVar4 = atoi(local_238);
    if (iVar4 == 0) {
      param_1[0x110] = 0;
      goto LAB_180008003;
    }
    if (iVar4 == 1) {
      *param_1 = 0;
    }
    else if (iVar4 == 2) {
      param_1[1] = 1;
    }
    else if (iVar4 == 3) {
      *param_1 = 1;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x108);
  FUN_180006170(plVar1,param_1 + 2,3);
  bVar3 = FUN_180006160(plVar1);
  if ((int)CONCAT71(extraout_var_00,bVar3) != 0) {
    FUN_180006110(plVar1);
  }
LAB_180008003:
  FUN_1800060e0(local_2c8);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2e8);
  return;
}




void FUN_180008040(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  bool bVar6;
  undefined7 extraout_var;
  char *pcVar7;
  void *_Memory;
  longlong lVar8;
  longlong lVar9;
  size_t sVar10;
  undefined1 auStack_3c8 [32];
  uint local_3a8;
  uint local_3a0;
  uint local_398;
  uint local_390;
  uint local_388;
  undefined8 local_378;
  _SYSTEMTIME local_370;
  undefined1 local_360;
  undefined7 uStack_35f;
  undefined8 uStack_358;
  undefined8 local_350;
  ulonglong uStack_348;
  char cStack_339;
  char local_338 [528];
  char local_128 [272];
  ulonglong local_18;
  size_t sVar11;
  
  local_378 = 0xfffffffffffffffe;
  local_18 = DAT_18000e058 ^ (ulonglong)auStack_3c8;
  if (*(char *)(param_1 + 0x110) != '\0') {
    GetLocalTime(&local_370);
    local_388 = (uint)local_370.wMilliseconds;
    local_390 = (uint)local_370.wSecond;
    local_398 = (uint)local_370.wMinute;
    local_3a0 = (uint)local_370.wHour;
    local_3a8 = (uint)local_370.wDay;
    FUN_1800034b0(local_128,"(%d-%02d-%02d %02d:%02d:%02d:%03d) ",(ulonglong)local_370.wYear,
                  (ulonglong)local_370.wMonth);
    memset(local_338,0,0x208);
    pcVar7 = &cStack_339;
    do {
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    lVar8 = 0;
    do {
      cVar2 = local_128[lVar8];
      pcVar7[lVar8] = cVar2;
      lVar8 = lVar8 + 1;
    } while (cVar2 != '\0');
    pcVar7 = &cStack_339;
    do {
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    lVar8 = 0;
    do {
      cVar2 = *(char *)(param_2 + lVar8);
      pcVar7[lVar8] = cVar2;
      lVar8 = lVar8 + 1;
    } while (cVar2 != '\0');
    if (*(char *)(param_1 + 1) == '\0') {
      local_350 = 0;
      uStack_348 = 0xf;
      local_360 = 0;
      sVar11 = 0xffffffffffffffff;
      do {
        sVar10 = sVar11 + 1;
        lVar8 = sVar11 + 1;
        sVar11 = sVar10;
      } while (local_338[lVar8] != '\0');
      FUN_180008340((longlong *)&local_360,local_338,sVar10);
      puVar3 = *(undefined8 **)(param_1 + 0x120);
      if (*(undefined8 **)(param_1 + 0x128) == puVar3) {
        FUN_1800078d0((longlong *)(param_1 + 0x118),puVar3,(undefined8 *)&local_360);
      }
      else {
        puVar3[2] = 0;
        puVar3[3] = 0;
        *puVar3 = CONCAT71(uStack_35f,local_360);
        puVar3[1] = uStack_358;
        puVar3[2] = local_350;
        puVar3[3] = uStack_348;
        local_350 = 0;
        uStack_348 = 0xf;
        local_360 = 0;
        *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + 0x20;
      }
      if (0xf < uStack_348) {
        pvVar4 = (void *)CONCAT71(uStack_35f,local_360);
        _Memory = pvVar4;
        if ((0xfff < uStack_348 + 1) &&
           (_Memory = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      local_350 = 0;
      uStack_348 = 0xf;
      local_360 = 0;
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x108);
      FUN_180006170(plVar1,(LPCSTR)(param_1 + 2),1);
      bVar6 = FUN_180006160(plVar1);
      if ((int)CONCAT71(extraout_var,bVar6) != 0) {
        FUN_180006310(plVar1);
        lVar8 = -1;
        do {
          lVar9 = lVar8 + 1;
          lVar5 = lVar8 + 1;
          lVar8 = lVar9;
        } while (local_338[lVar5] != '\0');
        FUN_180006330(plVar1,local_338,(uint)lVar9);
        FUN_180006140(plVar1);
        FUN_180006110(plVar1);
        *(undefined1 *)(param_1 + 0x111) = 1;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_3c8);
  return;
}




void FUN_1800082e0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if (param_2 != param_3) {
    do {
      FUN_180006410(param_2);
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  return;
}




void FUN_180008320(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




longlong * FUN_180008340(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_180008320();
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
      if (pvVar3 == (void *)0x0) goto LAB_180008483;
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
LAB_180008483:
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




void FUN_180008490(undefined8 param_1,void *param_2,longlong param_3)

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




/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180008519. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x18000854a;
  capture_previous_context((PCONTEXT)&DAT_18000ec60);
  _DAT_18000ebd0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18000ecf8 = puVar3 + 0x40;
  _DAT_18000ece0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18000ebc0 = 0xc0000409;
  _DAT_18000ebc4 = 1;
  _DAT_18000ebd8 = 1;
  DAT_18000ebe0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18000e058;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18000e050;
  *(undefined8 *)(puVar3 + -8) = 0x1800085ec;
  DAT_18000ed58 = _DAT_18000ebd0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000acb0);
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
  *(undefined8 *)(puVar3 + -8) = 0x180008632;
  capture_current_context((PCONTEXT)&DAT_18000ec60);
  _DAT_18000ebd0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18000ecf8 = puVar3 + 0x30;
  _DAT_18000ebc0 = 0xc0000409;
  _DAT_18000ebc4 = 1;
  _DAT_18000ebd8 = 1;
  DAT_18000ebe0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x18000869e;
  DAT_18000ed58 = _DAT_18000ebd0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000acb0);
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
  if ((_StackCookie == DAT_18000e058) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_1800088b4(undefined8 *param_1,ulonglong param_2)

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
    FUN_1800095b8();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_180009598();
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
LAB_1800089d2:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18000f138 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18000f138;
        pvVar1 = DAT_18000f138;
      }
      DAT_18000f138 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_1800089d2;
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
    uVar3 = FUN_180009768();
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
  
  uVar1 = FUN_180008b5c(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180009af8();
  if (cVar1 != '\0') {
    cVar1 = FUN_180009af8();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180009af8();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180009af8();
  FUN_180009af8();
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
    _execute_onexit_table(&DAT_18000f148);
    return;
  }
  uVar2 = FUN_180009afc();
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
  FUN_180009af8();
  FUN_180009af8();
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
    DAT_18000f140 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180009af8();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180009af8();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180009af8();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180008b5c(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18000f141 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18000e058 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18000e058;
      _DAT_18000f148 = in_RAX;
      uRam000000018000f150 = in_RAX;
      _DAT_18000f158 = in_RAX;
      _DAT_18000f160 = in_RAX;
      uRam000000018000f168 = in_RAX;
      _DAT_18000f170 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18000f148);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18000f160), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18000f141 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180008cc2) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_180008cab;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180008cab:
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
    DAT_18000f138 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18000f140 == '\0') || (param_2 == '\0')) {
    FUN_180009af8();
    FUN_180009af8();
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
  
  bVar2 = (byte)DAT_18000e058 & 0x3f;
  if (((DAT_18000e058 ^ _DAT_18000f148) >> bVar2 | (DAT_18000e058 ^ _DAT_18000f148) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18000f148,_Func);
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

undefined8 FUN_180008d88(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18000f178,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180008eda;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18000f1a8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18000f1a8 != (HANDLE)0x0) goto LAB_180008e78;
  }
  else {
    DAT_18000f1a8 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18000f1a0);
    bVar7 = 0x40 - ((byte)DAT_18000e058 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18000f1b0 = DAT_18000e058 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18000f1b8 = DAT_18000e058 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180008e78:
    uVar6 = FUN_180008b5c(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180008ee8);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180008eda:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180008ee8(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18000f178);
  if (DAT_18000f1a8 != (HANDLE)0x0) {
    CloseHandle(DAT_18000f1a8);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000f178);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000f178);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000f178);
  uVar1 = (ulonglong)_tls_index;
  DAT_18000e064 = DAT_18000e064 + 1;
  *param_1 = DAT_18000e064;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18000e064;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000f178);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000f178);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180008ff4:
                    /* WARNING: Could not recover jumptable at 0x000180009000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000f178);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18000e064;
      goto LAB_180008ff4;
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
  
  if (DAT_18000f1a8 != (HANDLE)0x0) {
    SetEvent(DAT_18000f1a8);
                    /* WARNING: Could not recover jumptable at 0x000180009051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18000f1a8);
    return;
  }
  bVar1 = (byte)DAT_18000e058 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180009b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000e058 ^ _DAT_18000f1b8) >> bVar1 |
            (DAT_18000e058 ^ _DAT_18000f1b8) << 0x40 - bVar1))(&DAT_18000f1a0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18000f1a8 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000f178);
    WaitForSingleObjectEx(DAT_18000f1a8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001800090c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000f178);
    return;
  }
  bVar1 = (byte)DAT_18000e058 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180009b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000e058 ^ _DAT_18000f1b0) >> bVar1 |
            (DAT_18000e058 ^ _DAT_18000f1b0) << 0x40 - bVar1))
            (&DAT_18000f1a0,&DAT_18000f178,param_1);
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
    if (DAT_18000f1c4 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18000f1c4 = DAT_18000f1c4 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18000f130 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_1800099b0();
      FID_conflict__RTC_Initialize();
      DAT_18000f130 = 0;
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
    if (DAT_18000f130 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18000f130 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_1800099a0();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_18000a330,&DAT_18000a340);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_18000a320,&DAT_18000a328);
        DAT_18000f130 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_1800099e0();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18000f1c4 = DAT_18000f1c4 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180009390) */
/* WARNING: Removing unreachable block (ram,0x00018000931f) */
/* WARNING: Removing unreachable block (ram,0x0001800093d3) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18000f1c4 < 1)) {
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




undefined8 * FUN_180009448(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180009488(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800094a8(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_1800094e8(undefined8 *param_1)

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




undefined8 * FUN_180009554(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180009598(void)

{
  undefined8 local_28 [5];
  
  FUN_180009488(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000c9f8);
}




void FUN_1800095b8(void)

{
  undefined8 local_28 [5];
  
  FUN_1800094e8(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000ca80);
}




char * FUN_1800095d8(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x0001800096ba) */
/* WARNING: Removing unreachable block (ram,0x000180009638) */
/* WARNING: Removing unreachable block (ram,0x000180009613) */
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
  
  DAT_18000e06c = 2;
  _DAT_18000e068 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18000e070 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18000f1c8 = DAT_18000f1c8 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18000f1c8 = DAT_18000f1c8 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18000e068 = 2;
    DAT_18000e06c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000e06c = 0xe;
      _DAT_18000e068 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18000e068 = 5;
        DAT_18000e06c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_180009768(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18000e080 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000977c(void)

{
  _DAT_18000f1cc = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x1800097b7;
  FUN_18000977c();
  *(undefined8 *)(puVar4 + -8) = 0x1800097c8;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1800097d2;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x1800097ec;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18000982d;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18000985f;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180009881;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800098a2;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1800098ad;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1800098bd;
    FUN_18000977c();
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
  
  if (DAT_18000e058 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18000e058 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18000e058 == 0x2b992ddfa232) {
      DAT_18000e058 = 0x2b992ddfa233;
    }
  }
  DAT_18000e050 = ~DAT_18000e058;
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




void FUN_1800099a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001800099a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18000f1d0);
  return;
}




void FUN_1800099b0(void)

{
  __std_type_info_destroy_list(&DAT_18000f1d0);
  return;
}




undefined * FUN_1800099bc(void)

{
  return &DAT_18000f1e0;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1800034a0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_1800099bc();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_1800099e0(void)

{
  return &DAT_18000f1e8;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18000b6d0; puVar1 < &DAT_18000b6d0; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_18000b6e0; puVar1 < &DAT_18000b6e0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180009af8(void)

{
  return 1;
}




undefined8 FUN_180009afc(void)

{
  return 0;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180009b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180009b20(undefined8 param_1,longlong param_2)

{
  FUN_1800011b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180009b30(undefined8 param_1,longlong param_2)

{
  FUN_1800011b0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Catch_180009b40(undefined8 param_1,longlong param_2)

{
  FUN_1800045e0(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x78),
                *(longlong *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180009b70(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x78),
             *(longlong *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180009ba0(undefined8 param_1,longlong param_2)

{
  FUN_1800049c0(param_2 + 0x38);
  return;
}




void Unwind_180009bb0(undefined8 param_1,longlong param_2)

{
  FUN_1800049c0(param_2 + 0x88);
  return;
}




void Unwind_180009bc0(undefined8 param_1,longlong param_2)

{
  FUN_1800049c0(param_2 + 0x58);
  return;
}




void Unwind_180009bd0(undefined8 param_1,longlong param_2)

{
  FUN_1800049c0(param_2 + 0xa0);
  return;
}




void Unwind_180009be0(undefined8 param_1,longlong param_2)

{
  FUN_1800038e0((longlong *)(param_2 + 0x30));
  return;
}




void Catch_180009bf0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x78),
             *(longlong *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180009c20(undefined8 param_1,longlong param_2)

{
  FUN_180004930((longlong *)(*(longlong *)(param_2 + 0x20) + 0x18));
  return;
}




void Unwind_180009c30(undefined8 param_1,longlong param_2)

{
  FUN_180004930((longlong *)(*(longlong *)(param_2 + 0x50) + 0x18));
  return;
}




void Unwind_180009c40(undefined8 param_1,longlong param_2)

{
  FUN_1800060e0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_180009c50(undefined8 param_1,longlong param_2)

{
  FUN_1800060e0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180009c70(void)

{
  FUN_1800038e0((longlong *)&DAT_18000e1b8);
  return;
}




void Unwind_180009c80(void)

{
  FUN_1800060e0((undefined8 *)&DAT_18000eb88);
  return;
}




void Unwind_180009cc0(void)

{
  _Init_thread_abort(&DAT_18000e1d0);
  return;
}




void Unwind_180009cd0(void)

{
  _Init_thread_abort(&DAT_18000ebb0);
  return;
}




void Unwind_180009ce0(void)

{
  _Init_thread_abort(&DAT_18000e620);
  return;
}




void Unwind_180009cf0(void)

{
  _Init_thread_abort(&DAT_18000ea70);
  return;
}




void Catch_180009d00(undefined8 param_1,longlong param_2)

{
  FUN_1800082e0(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x28));
  FUN_180008490(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
                *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180009d50(undefined8 param_1,longlong param_2)

{
  FUN_180007cb0((undefined8 *)(param_2 + 8));
  return;
}




void Unwind_180009d60(undefined8 param_1,longlong param_2)

{
  FUN_1800060e0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x108));
  return;
}




void Unwind_180009d80(undefined8 param_1,longlong param_2)

{
  FUN_1800064f0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x118));
  return;
}




void Unwind_180009da0(undefined8 param_1,longlong param_2)

{
  FUN_180006410((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180009db0(undefined8 param_1,longlong param_2)

{
  FUN_180006410((longlong *)(param_2 + 0x68));
  return;
}




void FUN_180009dd4(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180009deb(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_180009e07(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180009e60(void)

{
  FUN_1800038e0((longlong *)&DAT_18000e1b8);
  FUN_180006480((longlong *)&DAT_18000e1a0);
  return;
}




void FUN_180009e90(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = DAT_18000eba0;
  if (DAT_18000eb98 != (longlong *)0x0) {
    plVar1 = DAT_18000eb98;
    if (DAT_18000eb98 != DAT_18000eba0) {
      do {
        FUN_180006410(plVar1);
        plVar1 = plVar1 + 4;
      } while (plVar1 != plVar2);
    }
    plVar2 = DAT_18000eb98;
    if ((0xfff < (DAT_18000eba8 - (longlong)DAT_18000eb98 & 0xffffffffffffffe0U)) &&
       (plVar2 = (longlong *)DAT_18000eb98[-1],
       0x1f < (ulonglong)((longlong)DAT_18000eb98 + (-8 - (longlong)plVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar2);
    DAT_18000eb98 = (longlong *)0x0;
    DAT_18000eba0 = (longlong *)0x0;
    DAT_18000eba8 = 0;
  }
  FUN_1800060e0((undefined8 *)&DAT_18000eb88);
  return;
}



