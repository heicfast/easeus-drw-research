
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001040(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_10022fc0 = param_1;
  }
  return 1;
}




void __cdecl FUN_100011e0(HWND param_1,HWND param_2)

{
  uint uVar1;
  HWND hWnd;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  tagRECT tStack_30;
  tagRECT tStack_20;
  tagRECT tStack_10;
  
  uVar1 = GetWindowLongA(param_1,-0x10);
  if (param_2 == (HWND)0x0) {
    if ((uVar1 & 0x40000000) == 0) {
      param_2 = GetWindow(param_1,4);
    }
    else {
      param_2 = GetParent(param_1);
    }
  }
  GetWindowRect(param_1,&tStack_10);
  if ((uVar1 & 0x40000000) == 0) {
    if ((param_2 != (HWND)0x0) &&
       ((uVar1 = GetWindowLongA(param_2,-0x10), (uVar1 & 0x10000000) == 0 ||
        ((uVar1 & 0x20000000) != 0)))) {
      param_2 = (HWND)0x0;
    }
    SystemParametersInfoA(0x30,0,&tStack_20,0);
    if (param_2 == (HWND)0x0) {
      tStack_30.left = tStack_20.left;
      tStack_30.top = tStack_20.top;
      tStack_30.right = tStack_20.right;
      tStack_30.bottom = tStack_20.bottom;
    }
    else {
      GetWindowRect(param_2,&tStack_30);
    }
  }
  else {
    hWnd = GetParent(param_1);
    GetClientRect(hWnd,&tStack_20);
    GetClientRect(param_2,&tStack_30);
    MapWindowPoints(param_2,hWnd,(LPPOINT)&tStack_30,2);
  }
  iVar5 = tStack_10.right - tStack_10.left;
  iVar3 = tStack_10.bottom - tStack_10.top;
  iVar2 = (tStack_30.right + tStack_30.left) / 2 - iVar5 / 2;
  iVar4 = (tStack_30.top + tStack_30.bottom) / 2 - iVar3 / 2;
  if ((tStack_20.left <= iVar2) && (tStack_20.left = iVar2, tStack_20.right < iVar2 + iVar5)) {
    tStack_20.left = tStack_20.right - iVar5;
  }
  if ((tStack_20.top <= iVar4) && (tStack_20.top = iVar4, tStack_20.bottom < iVar4 + iVar3)) {
    tStack_20.top = tStack_20.bottom - iVar3;
  }
  SetWindowPos(param_1,(HWND)0x0,tStack_20.left,tStack_20.top,-1,-1,0x15);
  return;
}




undefined4 IsAccessiblePath(void)

{
                    /* 0x1420  1  IsAccessiblePath */
  return 1;
}




/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2008 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)(this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)(this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_10022658) && ((p_Var2->_ownlocale & DAT_10022574) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_10022478) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_10022574) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)(this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)(this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
    }
  }
  else {
    *(pthreadlocinfo *)this = param_1->locinfo;
    *(pthreadmbcinfo *)(this + 4) = param_1->mbcinfo;
  }
  return this;
}




/* Library Function - Single Match
    __mbsstr_l
   
   Library: Visual Studio 2008 Release */

uchar * __cdecl __mbsstr_l(uchar *_Str,uchar *_Substr,_locale_t _Locale)

{
  byte bVar1;
  int *piVar2;
  size_t sVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  _LocaleUpdate local_1c [4];
  int local_18;
  int local_14;
  char local_10;
  int local_c;
  
  _LocaleUpdate::_LocaleUpdate(local_1c,_Locale);
  if (*(int *)(local_18 + 8) == 0) {
    _Str = (uchar *)FUN_100041a0((uint *)_Str,(char *)_Substr);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Substr == (uchar *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    _Str = (uchar *)0x0;
  }
  else if (*_Substr == '\0') {
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str == (uchar *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    _Str = (uchar *)0x0;
  }
  else {
    sVar3 = _strlen((char *)_Substr);
    local_c = (int)_Str - sVar3;
    sVar3 = _strlen((char *)_Str);
    if (*_Str != '\0') {
      iVar5 = (int)_Str - (int)_Substr;
      do {
        if ((byte *)(sVar3 + local_c) < _Str) break;
        puVar4 = _Substr;
        bVar1 = *_Str;
        while (bVar1 != 0) {
          if (*puVar4 == '\0') goto LAB_10001639;
          if (puVar4[iVar5] != *puVar4) break;
          puVar4 = puVar4 + 1;
          bVar1 = puVar4[iVar5];
        }
        if (*puVar4 == '\0') {
LAB_10001639:
          if (local_10 == '\0') {
            return _Str;
          }
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
          return _Str;
        }
        pbVar7 = _Str + 1;
        iVar6 = iVar5 + 1;
        if ((*(byte *)(*_Str + 0x1d + local_18) & 4) != 0) {
          if (*pbVar7 == 0) break;
          pbVar7 = _Str + 2;
          iVar6 = iVar5 + 2;
        }
        iVar5 = iVar6;
        _Str = pbVar7;
      } while (*pbVar7 != 0);
    }
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    _Str = (uchar *)0x0;
  }
  return _Str;
}




/* Library Function - Single Match
    __mbsstr
   
   Library: Visual Studio 2008 Release */

uchar * __cdecl __mbsstr(uchar *_Str,uchar *_Substr)

{
  uchar *puVar1;
  
  puVar1 = __mbsstr_l(_Str,_Substr,(_locale_t)0x0);
  return puVar1;
}




/* Library Function - Single Match
    __mbstok_l
   
   Library: Visual Studio 2008 Release */

uchar * __cdecl __mbstok_l(uchar *_Str,uchar *_Delim,_locale_t _Locale)

{
  _ptiddata p_Var1;
  uchar *puVar2;
  
  p_Var1 = __getptd();
  puVar2 = __mbstok_s_l(_Str,_Delim,&p_Var1->_mtoken,_Locale);
  return puVar2;
}




/* Library Function - Single Match
    __mbstok
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

uchar * __cdecl __mbstok(uchar *_Str,uchar *_Delim)

{
  uchar *puVar1;
  
  puVar1 = __mbstok_l(_Str,_Delim,(_locale_t)0x0);
  return puVar1;
}




/* Library Function - Single Match
    __mbsnbicmp_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __mbsnbicmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  size_t sVar1;
  uchar *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  _LocaleUpdate local_1c [4];
  int local_18;
  int local_14;
  char local_10;
  ushort local_c;
  ushort local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_1c,_Locale);
  if (_MaxCount == 0) {
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0;
  }
  else if (*(int *)(local_18 + 8) == 0) {
    iVar3 = __strnicmp((char *)_Str1,(char *)_Str2,_MaxCount);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str1 == (uchar *)0x0) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else {
    if (_Str2 != (uchar *)0x0) {
      do {
        uVar5 = (uint)*_Str1;
        sVar1 = _MaxCount - 1;
        puVar2 = _Str1 + 1;
        if ((*(byte *)(uVar5 + 0x1d + local_18) & 4) == 0) {
          if ((*(byte *)(uVar5 + local_18 + 0x1d) & 0x10) != 0) {
            uVar5 = (uint)*(byte *)(uVar5 + local_18 + 0x11d);
          }
          local_c = (ushort)uVar5;
          _Str1 = puVar2;
LAB_10001808:
          uVar5 = (uint)*_Str2;
          pbVar6 = _Str2 + 1;
          if ((*(byte *)(uVar5 + 0x1d + local_18) & 4) == 0) {
            if ((*(byte *)(uVar5 + local_18 + 0x1d) & 0x10) != 0) {
              uVar5 = (uint)*(byte *)(uVar5 + local_18 + 0x11d);
            }
            goto LAB_10001882;
          }
          if (sVar1 == 0) {
LAB_10001822:
            _MaxCount = sVar1;
            local_8 = 0;
          }
          else {
            sVar1 = _MaxCount - 2;
            if (*pbVar6 == 0) goto LAB_10001822;
            local_8 = CONCAT11(*_Str2,*pbVar6);
            pbVar6 = _Str2 + 2;
            _MaxCount = sVar1;
            if ((local_8 < *(ushort *)(local_18 + 0x10)) || (*(ushort *)(local_18 + 0x12) < local_8)
               ) {
              if ((*(ushort *)(local_18 + 0x16) <= local_8) &&
                 (local_8 <= *(ushort *)(local_18 + 0x18))) {
                local_8 = local_8 + *(short *)(local_18 + 0x1a);
              }
            }
            else {
              local_8 = local_8 + *(short *)(local_18 + 0x14);
            }
          }
        }
        else {
          if (sVar1 != 0) {
            if (*puVar2 == '\0') {
              local_c = 0;
              _Str1 = puVar2;
            }
            else {
              local_c = CONCAT11(*_Str1,*puVar2);
              _Str1 = _Str1 + 2;
              if ((local_c < *(ushort *)(local_18 + 0x10)) ||
                 (*(ushort *)(local_18 + 0x12) < local_c)) {
                if ((*(ushort *)(local_18 + 0x16) <= local_c) &&
                   (local_c <= *(ushort *)(local_18 + 0x18))) {
                  local_c = local_c + *(short *)(local_18 + 0x1a);
                }
              }
              else {
                local_c = local_c + *(short *)(local_18 + 0x14);
              }
            }
            goto LAB_10001808;
          }
          uVar5 = (uint)*_Str2;
          if ((*(byte *)(uVar5 + 0x1d + local_18) & 4) != 0) {
LAB_1000189c:
            if (local_10 != '\0') {
              *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
            }
            return 0;
          }
          local_c = 0;
          pbVar6 = _Str2;
          _Str1 = puVar2;
LAB_10001882:
          local_8 = (ushort)uVar5;
          _MaxCount = sVar1;
        }
        if (local_8 != local_c) {
          iVar3 = (-(uint)(local_8 < local_c) & 2) - 1;
          if (local_10 == '\0') {
            return iVar3;
          }
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
          return iVar3;
        }
        if ((local_c == 0) || (_Str2 = pbVar6, _MaxCount == 0)) goto LAB_1000189c;
      } while( true );
    }
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  return iVar3;
}




/* Library Function - Single Match
    __mbsnbicmp
   
   Library: Visual Studio 2008 Release */

int __cdecl __mbsnbicmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}




void FUN_100018dd(void *param_1)

{
  _free(param_1);
  return;
}




/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Library: Visual Studio 2008 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_1002200c,1);
  *(undefined ***)this = vftable;
  return this;
}




exception * __thiscall FUN_1000190e(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_alloc::vftable;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_100018dd(this);
  }
  return (exception *)this;
}




exception * __thiscall FUN_10001935(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2008 Release */

void * __cdecl operator_new(uint param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  undefined1 local_10 [12];
  
  do {
    pvVar3 = _malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = __callnewh(param_1);
  } while (iVar2 != 0);
  if ((_DAT_100230e0 & 1) == 0) {
    _DAT_100230e0 = _DAT_100230e0 | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_100230d4);
    _atexit((_func_4879 *)&LAB_1001d75e);
  }
  FUN_10001935(local_10,(exception *)&DAT_100230d4);
  __CxxThrowException_8(local_10,&DAT_10020b50);
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




/* Library Function - Single Match
    _sprintf
   
   Library: Visual Studio 2008 Release */

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_Dest == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = __output_l(&local_24,_Format,(_locale_t)0x0,&stack0x0000000c);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}




/* Library Function - Single Match
    __sprintf_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __sprintf_l(char *_DstBuf,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = __vsprintf_l(_DstBuf,_Format,_Locale,&stack0x00000010);
  return iVar1;
}




/* Library Function - Single Match
    _sprintf_s
   
   Library: Visual Studio 2008 Release */

int __cdecl _sprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,...)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,&stack0x00000010);
  return iVar1;
}




/* Library Function - Single Match
    __sprintf_s_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __sprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_DstSize,_Format,_Locale,&stack0x00000014);
  return iVar1;
}




/* Library Function - Single Match
    __snprintf_s
   
   Library: Visual Studio 2008 Release */

int __cdecl __snprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,...)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_SizeInBytes,_MaxCount,_Format,(_locale_t)0x0,&stack0x00000014);
  return iVar1;
}




/* Library Function - Single Match
    __snprintf_s_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_DstSize,_MaxCount,_Format,_Locale,&stack0x00000018);
  return iVar1;
}




void __cdecl FUN_10001ad0(char *param_1,size_t param_2,char *param_3)

{
  __vsprintf_p_l(param_1,param_2,param_3,(_locale_t)0x0,&stack0x00000010);
  return;
}




void __cdecl FUN_10001aee(char *param_1,size_t param_2,char *param_3,_locale_t param_4)

{
  __vsprintf_p_l(param_1,param_2,param_3,param_4,&stack0x00000014);
  return;
}




void __cdecl FUN_10001b0d(wchar_t *param_1)

{
  FID_conflict___vscprintf_p(param_1,&stack0x00000008);
  return;
}




void __cdecl FUN_10001b22(wchar_t *param_1)

{
  FID_conflict___vscprintf_p(param_1,&stack0x00000008);
  return;
}




void __cdecl FUN_10001b37(wchar_t *param_1,_locale_t param_2)

{
  FID_conflict___vscprintf_p_l(param_1,param_2,&stack0x0000000c);
  return;
}




void __cdecl FUN_10001b50(wchar_t *param_1,_locale_t param_2)

{
  FID_conflict___vscprintf_p_l(param_1,param_2,&stack0x0000000c);
  return;
}




/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_10022048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}




/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2008 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  _ptiddata _Ptd;
  code *pcVar2;
  DWORD DVar3;
  undefined4 uVar4;
  _ptiddata p_Var5;
  
  if (param_2 == 1) {
    iVar1 = __heap_init();
    if (iVar1 != 0) {
      iVar1 = __mtinit();
      if (iVar1 != 0) {
        __RTC_Initialize();
        DAT_10024d40 = GetCommandLineA();
        DAT_100230e8 = ___crtGetEnvironmentStringsA();
        iVar1 = __ioinit();
        if (-1 < iVar1) {
          iVar1 = __setargv();
          if (((-1 < iVar1) && (iVar1 = __setenvp(), -1 < iVar1)) &&
             (iVar1 = __cinit(0), iVar1 == 0)) {
            DAT_100230e4 = DAT_100230e4 + 1;
            return 1;
          }
          __ioterm();
        }
        __mtterm();
      }
      __heap_term();
    }
  }
  else if (param_2 == 0) {
    if (0 < DAT_100230e4) {
      DAT_100230e4 = DAT_100230e4 + -1;
      if (DAT_100234a4 == 0) {
        __cexit();
      }
      if (param_3 == 0) {
        __ioterm();
        __mtterm();
        __heap_term();
      }
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return 1;
      }
      __freeptd((_ptiddata)0x0);
      return 1;
    }
    ___set_flsgetvalue();
    _Ptd = (_ptiddata)__calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      uVar4 = DAT_10022668;
      p_Var5 = _Ptd;
      pcVar2 = (code *)__decode_pointer(DAT_10023140);
      iVar1 = (*pcVar2)(uVar4,p_Var5);
      if (iVar1 != 0) {
        __initptd(_Ptd,(pthreadlocinfo)0x0);
        DVar3 = GetCurrentThreadId();
        _Ptd->_thandle = 0xffffffff;
        _Ptd->_tid = DVar3;
        return 1;
      }
      _free(_Ptd);
    }
  }
  return 0;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x10001d3f) */
/* WARNING: Removing unreachable block (ram,0x10001cec) */
/* WARNING: Removing unreachable block (ram,0x10001d6c) */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  
  if (((param_2 == 0) && (DAT_100230e4 == 0)) ||
     (((param_2 == 1 || (param_2 == 2)) &&
      (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0)))) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_10001040(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      FUN_10001040(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0)) {
      local_20 = 0;
    }
  }
  return local_20;
}




void entry(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}




/* Library Function - Single Match
    int __cdecl CPtoLCID(int)
   
   Library: Visual Studio 2008 Release */

int __cdecl CPtoLCID(int param_1)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX != 0x3b6) {
    return 0;
  }
  return 0x404;
}




/* Library Function - Single Match
    void __cdecl setSBCS(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2008 Release */

void __cdecl setSBCS(threadmbcinfostruct *param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  _memset((void *)(in_EAX + 0x1c),0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  iVar2 = 0x101;
  do {
    *puVar1 = puVar1[(int)&DAT_10022050 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10022050 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}




/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2008 Release */

void __cdecl setSBUpLow(threadmbcinfostruct *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  BYTE *pBVar7;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [256];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_10001fd2:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_10001fd2;
        }
        *pcVar2 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    local_108[0] = ' ';
    if (local_51c.LeadByte[0] != 0) {
      pBVar7 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar7) {
          _memset(local_108 + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_51c.LeadByte[0] != 0);
    }
    ___crtGetStringTypeA
              ((_locale_t)0x0,1,local_108,0x100,local_508,*(int *)(unaff_ESI + 4),
               *(BOOL *)(unaff_ESI + 0xc));
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x100,local_108,0x100,local_208,
                       0x100,*(int *)(unaff_ESI + 4),0);
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x200,local_108,0x100,local_308,
                       0x100,*(int *)(unaff_ESI + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          CVar5 = local_308[uVar4];
          goto LAB_10001f70;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_10001f70:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2008 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10022574) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10022478) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10022050)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10022478;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10022478;
      InterlockedIncrement((LONG *)PTR_DAT_10022478);
    }
    FUN_10002087();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}




void FUN_10002087(void)

{
  FUN_100079a6(0xd);
  return;
}




/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2008 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_100230f8 = 0;
  if (unaff_ESI == -2) {
    DAT_100230f8 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_100230f8 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_100230f8 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_100230f8 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}




/* Library Function - Single Match
    __setmbcp_nolock
   
   Library: Visual Studio 2008 Release */

void __cdecl __setmbcp_nolock(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  int extraout_ECX;
  undefined2 *puVar9;
  int iVar10;
  undefined4 extraout_EDX;
  BYTE *pBVar11;
  threadmbcinfostruct *unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_1000214a:
    if (*(uint *)((int)&DAT_10022480 + uVar5) != uVar4) goto code_r0x10002156;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_10022490 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | (&DAT_1002247c)[local_24];
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    iVar10 = CPtoLCID((int)unaff_EDI);
    *(int *)(param_2 + 0xc) = iVar10;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar9 = (undefined2 *)(&DAT_10022484 + extraout_ECX);
    iVar10 = 6;
    do {
      *puVar7 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    goto LAB_1000227b;
  }
LAB_10002137:
  setSBCS(unaff_EDI);
LAB_100022e2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x10002156:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x10002163;
  goto LAB_1000214a;
code_r0x10002163:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_100022e2;
  BVar6 = GetCPInfo(uVar4,&local_1c);
  if (BVar6 != 0) {
    _memset((void *)(param_2 + 0x1c),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (local_1c.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      if (local_1c.LeadByte[0] != '\0') {
        pBVar11 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar11;
          if (bVar3 == 0) break;
          for (uVar4 = (uint)pBVar11[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
            pbVar8 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar8 = *pbVar8 | 4;
          }
          pBVar1 = pBVar11 + 1;
          pBVar11 = pBVar11 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar8 = (byte *)(param_2 + 0x1e);
      iVar10 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      iVar10 = CPtoLCID((int)unaff_EDI);
      *(int *)(param_2 + 0xc) = iVar10;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_1000227b:
    setSBUpLow(unaff_EDI);
    goto LAB_100022e2;
  }
  if (DAT_100230f8 == 0) goto LAB_100022e2;
  goto LAB_10002137;
}




/* Library Function - Single Match
    __getmbcp
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __getmbcp(void)

{
  int iVar1;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,(localeinfo_struct *)0x0);
  if (*(int *)(local_10 + 8) == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_10 + 4);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2008 Release */

int __cdecl __setmbcp(int _CodePage)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadmbcinfo ptVar3;
  LONG LVar4;
  int *piVar5;
  int iVar6;
  pthreadmbcinfo ptVar7;
  pthreadmbcinfo ptVar8;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar3 = p_Var1->ptmbcinfo;
  iVar2 = getSystemCP(in_stack_ffffffc8);
  if (iVar2 == ptVar3->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar3 = (pthreadmbcinfo)__malloc_crt(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = __setmbcp_nolock(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10022050)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement((LONG *)ptVar3);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10022574 & 1) == 0)) {
          __lock(0xd);
          _DAT_10023108 = ptVar3->mbcodepage;
          _DAT_1002310c = ptVar3->ismbcodepage;
          _DAT_10023110 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_100230fc)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_10022270)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10022378)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10022478);
          if ((LVar4 == 0) && (PTR_DAT_10022478 != &DAT_10022050)) {
            _free(PTR_DAT_10022478);
          }
          PTR_DAT_10022478 = (undefined *)ptVar3;
          InterlockedIncrement((LONG *)ptVar3);
          FUN_10002490();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10022050) {
          _free(ptVar3);
        }
        piVar5 = __errno();
        *piVar5 = 0x16;
      }
    }
  }
  return local_24;
}




void FUN_10002490(void)

{
  FUN_100079a6(0xd);
  return;
}




/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2008 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_10024d2c == 0) {
    __setmbcp(-3);
    DAT_10024d2c = 1;
  }
  return 0;
}




/* Library Function - Single Match
    __invoke_watson_if_error
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2019 Release */

void __cdecl
__invoke_watson_if_error
          (errno_t _ExpressionError,wchar_t *_Expression,wchar_t *_Function,wchar_t *_File,
          uint _Line,uintptr_t _Reserved)

{
  if (_ExpressionError != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
  }
  return;
}




/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2008 Release */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  void *_Memory;
  undefined4 *puVar3;
  
  _Memory = param_1;
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10022ab8)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(int *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 **)((int)param_1 + 0xbc));
    }
    _free(*(void **)((int)param_1 + 0xb0));
    _free(*(void **)((int)param_1 + 0xbc));
  }
  if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
    _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    _free((void *)(*(int *)((int)param_1 + 0xcc) + -0x80));
    _free((void *)(*(int *)((int)param_1 + 0xd0) + -0x80));
    _free(*(void **)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
  if ((ppuVar2 != &PTR_DAT_100229f8) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x50);
  param_1 = (void *)0x6;
  do {
    if ((((undefined *)puVar3[-2] != &DAT_10022578) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar3[-1] != 0) && (piVar1 = (int *)puVar3[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar3 = puVar3 + 4;
    param_1 = (void *)((int)param_1 + -1);
  } while (param_1 != (void *)0x0);
  _free(_Memory);
  return;
}




/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2008 Release */

void __cdecl ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  LONG *pLVar2;
  
  pLVar1 = param_1;
  InterlockedIncrement(param_1);
  if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2c]);
  }
  if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2e]);
  }
  if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2d]);
  }
  if ((LONG *)param_1[0x30] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x30]);
  }
  pLVar2 = param_1 + 0x14;
  param_1 = (LONG *)0x6;
  do {
    if (((undefined *)pLVar2[-2] != &DAT_10022578) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar2);
    }
    if ((pLVar2[-1] != 0) && ((LONG *)pLVar2[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar2[1]);
    }
    pLVar2 = pLVar2 + 4;
    param_1 = (LONG *)((int)param_1 + -1);
  } while (param_1 != (LONG *)0x0);
  InterlockedIncrement((LONG *)(pLVar1[0x35] + 0xb4));
  return;
}




/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2008 Release */

LONG * __cdecl ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  LONG *pLVar2;
  
  pLVar1 = param_1;
  if (param_1 != (LONG *)0x0) {
    InterlockedDecrement(param_1);
    if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2c]);
    }
    if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2e]);
    }
    if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2d]);
    }
    if ((LONG *)param_1[0x30] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x30]);
    }
    pLVar2 = param_1 + 0x14;
    param_1 = (LONG *)0x6;
    do {
      if (((undefined *)pLVar2[-2] != &DAT_10022578) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar2);
      }
      if ((pLVar2[-1] != 0) && ((LONG *)pLVar2[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar2[1]);
      }
      pLVar2 = pLVar2 + 4;
      param_1 = (LONG *)((int)param_1 + -1);
    } while (param_1 != (LONG *)0x0);
    InterlockedDecrement((LONG *)(pLVar1[0x35] + 0xb4));
  }
  return pLVar1;
}




/* Library Function - Single Match
    __copytlocinfo_nolock
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __fastcall __copytlocinfo_nolock(LONG *param_1)

{
  LONG *in_EAX;
  int iVar1;
  LONG *pLVar2;
  
  if (((param_1 != (LONG *)0x0) && (in_EAX != (LONG *)0x0)) && (in_EAX != param_1)) {
    pLVar2 = in_EAX;
    for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar2 = *param_1;
      param_1 = param_1 + 1;
      pLVar2 = pLVar2 + 1;
    }
    *in_EAX = 0;
    ___addlocaleref(in_EAX);
  }
  return;
}




/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2008 Release */

LONG * __updatetlocinfoEx_nolock(void)

{
  LONG *pLVar1;
  undefined4 *in_EAX;
  LONG *unaff_EDI;
  
  if ((unaff_EDI != (LONG *)0x0) && (in_EAX != (undefined4 *)0x0)) {
    pLVar1 = (LONG *)*in_EAX;
    if (pLVar1 != unaff_EDI) {
      *in_EAX = unaff_EDI;
      ___addlocaleref(unaff_EDI);
      if (pLVar1 != (LONG *)0x0) {
        ___removelocaleref(pLVar1);
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_10022580)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2008 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10022574) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_10002856();
  }
  else {
    p_Var1 = __getptd();
    p_Var1 = (_ptiddata)p_Var1->ptlocinfo;
  }
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x20);
  }
  return (pthreadlocinfo)p_Var1;
}




void FUN_10002856(void)

{
  FUN_100079a6(0xc);
  return;
}




/* Library Function - Single Match
    __configthreadlocale
   
   Library: Visual Studio 2008 Release */

int __cdecl __configthreadlocale(int _Flag)

{
  uint uVar1;
  _ptiddata p_Var2;
  int *piVar3;
  uint uVar4;
  
  p_Var2 = __getptd();
  uVar1 = p_Var2->_ownlocale;
  if (_Flag == -1) {
    DAT_10022574 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        piVar3 = __errno();
        *piVar3 = 0x16;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    p_Var2->_ownlocale = uVar4;
  }
  return ((uVar1 & 2) == 0) + 1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __free_locale
   
   Library: Visual Studio 2008 Release */

void __cdecl __free_locale(_locale_t _Locale)

{
  pthreadlocinfo ptVar1;
  LONG LVar2;
  
  if (_Locale != (_locale_t)0x0) {
    __lock(0xd);
    if (_Locale->mbcinfo != (pthreadmbcinfo)0x0) {
      LVar2 = InterlockedDecrement(&_Locale->mbcinfo->refcount);
      if ((LVar2 == 0) && (_Locale->mbcinfo != (pthreadmbcinfo)&DAT_10022050)) {
        _free(_Locale->mbcinfo);
      }
    }
    FUN_100029cc();
    if (_Locale->locinfo != (pthreadlocinfo)0x0) {
      __lock(0xc);
      ___removelocaleref(&_Locale->locinfo->refcount);
      ptVar1 = _Locale->locinfo;
      if (((ptVar1 != (pthreadlocinfo)0x0) && (ptVar1->refcount == 0)) &&
         (ptVar1 != (pthreadlocinfo)&DAT_10022580)) {
        ___freetlocinfo(ptVar1);
      }
      FUN_100029d8();
    }
    _Locale->locinfo = (pthreadlocinfo)0xbaadf00d;
    _Locale->mbcinfo = (pthreadmbcinfo)0xbaadf00d;
    _free(_Locale);
  }
  return;
}




void FUN_100029cc(void)

{
  FUN_100079a6(0xd);
  return;
}




void FUN_100029d8(void)

{
  FUN_100079a6(0xc);
  return;
}




void __cdecl FUN_100029e1(_locale_t param_1)

{
  __free_locale(param_1);
  return;
}




/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2008 Release */

void __cdecl __strcats(char *param_1,rsize_t param_2,int param_3)

{
  errno_t eVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < param_3) {
    piVar2 = &param_3;
    iVar3 = param_3;
    do {
      piVar2 = piVar2 + 1;
      eVar1 = _strcat_s(param_1,param_2,(char *)*piVar2);
      if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}




/* Library Function - Single Match
    ___lc_strtolc
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl ___lc_strtolc(char *param_1,char *param_2)

{
  char cVar1;
  errno_t eVar2;
  uint _MaxCount;
  char *_Dst;
  char *_Str;
  rsize_t _SizeInBytes;
  
  _Str = param_2;
  _memset(param_1,0,0x90);
  if (*param_2 != '\0') {
    if ((*param_2 != '.') || (param_2[1] == '\0')) {
      param_2 = (char *)0x0;
      _MaxCount = _strcspn(_Str,"_.,");
      while( true ) {
        if (_MaxCount == 0) {
          return 0xffffffff;
        }
        cVar1 = _Str[_MaxCount];
        if (param_2 == (char *)0x0) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '.') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1;
        }
        else if (param_2 == (char *)0x1) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '_') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1 + 0x40;
        }
        else {
          if (param_2 != (char *)0x2) {
            return 0xffffffff;
          }
          if (0xf < _MaxCount) {
            return 0xffffffff;
          }
          if ((cVar1 != '\0') && (cVar1 != ',')) {
            return 0xffffffff;
          }
          _SizeInBytes = 0x10;
          _Dst = param_1 + 0x80;
        }
        eVar2 = _strncpy_s(_Dst,_SizeInBytes,_Str,_MaxCount);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (cVar1 == ',') break;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + 1;
        _Str = _Str + _MaxCount + 1;
        _MaxCount = _strcspn(_Str,"_.,");
      }
      return 0;
    }
    eVar2 = _strncpy_s(param_1 + 0x80,0x10,param_2 + 1,0xf);
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    param_1[0x8f] = '\0';
  }
  return 0;
}




/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2008 Release */

void __cdecl ___lc_lctostr(char *param_1,rsize_t param_2,char *param_3)

{
  errno_t eVar1;
  
  eVar1 = _strcpy_s(param_1,param_2,param_3);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_3[0x40] != '\0') {
    __strcats(param_1,param_2,2);
  }
  if (param_3[0x80] != '\0') {
    __strcats(param_1,param_2,2);
  }
  return;
}




/* Library Function - Single Match
    __setlocale_get_all
   
   Library: Visual Studio 2008 Release */

char * __setlocale_get_all(void)

{
  bool bVar1;
  char *_Memory;
  errno_t eVar2;
  int iVar3;
  LONG LVar4;
  char *_Dst;
  int unaff_ESI;
  undefined4 *local_10;
  int local_c;
  undefined **local_8;
  
  bVar1 = true;
  _Memory = (char *)__malloc_crt(0x355);
  _Dst = _Memory;
  if (_Memory != (char *)0x0) {
    _Dst = _Memory + 4;
    *_Dst = '\0';
    _Memory[0] = '\x01';
    _Memory[1] = '\0';
    _Memory[2] = '\0';
    _Memory[3] = '\0';
    local_c = 1;
    iVar3 = unaff_ESI + 0x10;
    local_10 = (undefined4 *)(unaff_ESI + 0x58);
    __strcats(_Dst,0x351,3);
    local_8 = &PTR_s_LC_COLLATE_1001e2e4;
    do {
      eVar2 = _strcat_s(_Dst,0x351,";");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar3 = _strcmp((char *)*local_10,*(char **)(iVar3 + 0x58));
      if (iVar3 != 0) {
        bVar1 = false;
      }
      local_c = local_c + 1;
      local_8 = local_8 + 3;
      iVar3 = local_c * 0x10 + unaff_ESI;
      local_10 = (undefined4 *)(iVar3 + 0x48);
      __strcats(_Dst,0x351,3);
    } while ((int)local_8 < 0x1001e314);
    if (bVar1) {
      _free(_Memory);
      if ((*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) &&
         (LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50)), LVar4 == 0)) {
        _free(*(void **)(unaff_ESI + 0x50));
      }
      if ((*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) &&
         (LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54)), LVar4 == 0)) {
        _free(*(void **)(unaff_ESI + 0x54));
      }
      _Dst = *(char **)(unaff_ESI + 0x68);
      *(undefined4 *)(unaff_ESI + 0x54) = 0;
      *(undefined4 *)(unaff_ESI + 0x4c) = 0;
      *(undefined4 *)(unaff_ESI + 0x50) = 0;
      *(undefined4 *)(unaff_ESI + 0x48) = 0;
    }
    else {
      if ((*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) &&
         (LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50)), LVar4 == 0)) {
        _free(*(void **)(unaff_ESI + 0x50));
      }
      if ((*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) &&
         (LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54)), LVar4 == 0)) {
        _free(*(void **)(unaff_ESI + 0x54));
      }
      *(undefined4 *)(unaff_ESI + 0x54) = 0;
      *(undefined4 *)(unaff_ESI + 0x4c) = 0;
      *(char **)(unaff_ESI + 0x50) = _Memory;
      *(char **)(unaff_ESI + 0x48) = _Dst;
    }
  }
  return _Dst;
}




/* Library Function - Single Match
    __expandlocale
   
   Library: Visual Studio 2008 Release */

void __cdecl
__expandlocale(char *param_1,char *param_2,rsize_t param_3,undefined2 *param_4,undefined4 *param_5)

{
  wchar_t *_Src;
  wchar_t *_Str1;
  wchar_t *_LpCodePage;
  _ptiddata p_Var1;
  char *_Str1_00;
  errno_t eVar2;
  size_t sVar3;
  int iVar4;
  BOOL BVar5;
  char local_98 [144];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  p_Var1 = __getptd();
  _Src = (p_Var1->_setloc_data)._cachein + 6;
  _Str1 = (p_Var1->_setloc_data)._cachein + 8;
  _LpCodePage = (p_Var1->_setloc_data)._cachein + 2;
  _Str1_00 = (char *)((int)(p_Var1->_setloc_data)._cachein + 0x93);
  if (((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (param_3 != 0)) {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      eVar2 = _strcpy_s(param_2,param_3,"C");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_4 != (undefined2 *)0x0) {
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
    }
    else {
      sVar3 = _strlen(param_1);
      if ((0x82 < sVar3) ||
         ((iVar4 = _strcmp(_Str1_00,param_1), iVar4 != 0 &&
          (iVar4 = _strcmp((char *)_Str1,param_1), iVar4 != 0)))) {
        iVar4 = ___lc_strtolc(local_98,param_1);
        if ((iVar4 != 0) ||
           (BVar5 = ___get_qualified_locale
                              ((LPLC_STRINGS)local_98,(UINT *)_LpCodePage,(LPLC_STRINGS)local_98),
           BVar5 == 0)) goto LAB_10003018;
        *(uint *)_Src = (uint)(ushort)(p_Var1->_setloc_data)._cachein[4];
        ___lc_lctostr(_Str1_00,0x83,local_98);
        if ((*param_1 == '\0') || (0x82 < sVar3)) {
          sVar3 = 0;
          param_1 = "";
        }
        eVar2 = _strncpy_s((char *)_Str1,0x83,param_1,sVar3 + 1);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (param_4 != (undefined2 *)0x0) {
        _memcpy(param_4,_LpCodePage,6);
      }
      if (param_5 != (undefined4 *)0x0) {
        _memcpy(param_5,_Src,4);
      }
      eVar2 = _strcpy_s(param_2,param_3,_Str1_00);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
LAB_10003018:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    __setlocale_set_cat
   
   Library: Visual Studio 2008 Release */

void __thiscall __setlocale_set_cat(void *this,int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  _ptiddata p_Var3;
  int iVar4;
  int iVar5;
  errno_t eVar6;
  wchar_t *pwVar7;
  BOOL BVar8;
  uint uVar9;
  LONG LVar10;
  int unaff_ESI;
  wchar_t *pwVar11;
  undefined1 local_1c8 [8];
  int local_1c0;
  undefined4 local_1b8;
  ushort local_1b4 [4];
  uint local_1ac;
  undefined *local_1a8;
  void *local_1a0;
  undefined4 local_19c;
  uint *local_198;
  undefined4 *local_194;
  size_t local_190;
  WORD local_18c [128];
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  p_Var3 = __getptd();
  pwVar11 = (p_Var3->_setloc_data)._cacheout + 9;
  iVar4 = __expandlocale((char *)this,local_8c,0x83,local_1b4,&local_19c);
  if (iVar4 != 0) {
    iVar4 = param_1 * 0x10 + unaff_ESI;
    iVar5 = _strcmp(local_8c,*(char **)(iVar4 + 0x48));
    if (iVar5 != 0) {
      local_190 = _strlen(local_8c);
      local_190 = local_190 + 5;
      local_194 = (undefined4 *)__malloc_crt(local_190);
      if (local_194 != (undefined4 *)0x0) {
        local_1a8 = *(undefined **)(iVar4 + 0x48);
        local_198 = (uint *)(unaff_ESI + 0xc + param_1 * 4);
        local_1ac = *local_198;
        local_1a0 = (void *)((param_1 + 6) * 6 + unaff_ESI);
        _memcpy(local_1c8,local_1a0,6);
        local_1b8 = *(undefined4 *)(unaff_ESI + 4);
        eVar6 = _strcpy_s((char *)(local_194 + 1),local_190 - 4,local_8c);
        if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined4 **)(iVar4 + 0x48) = local_194 + 1;
        *local_198 = (uint)local_1b4[0];
        _memcpy(local_1a0,local_1b4,6);
        if (param_1 == 2) {
          local_190 = 0;
          *(undefined4 *)(unaff_ESI + 4) = local_19c;
          pwVar7 = pwVar11;
          iVar5 = *(int *)((p_Var3->_setloc_data)._cacheout + 0x19);
          local_1a0 = *(void **)((p_Var3->_setloc_data)._cacheout + 0x1b);
          do {
            if (*(int *)(unaff_ESI + 4) == *(int *)pwVar7) {
              if (local_190 != 0) {
                pwVar7 = pwVar11 + local_190 * 4;
                *(int *)pwVar11 = *(int *)pwVar7;
                *(int *)((p_Var3->_setloc_data)._cacheout + 0xb) = *(int *)(pwVar7 + 2);
                *(int *)pwVar7 = iVar5;
                *(void **)(pwVar7 + 2) = local_1a0;
              }
              break;
            }
            local_1c0 = *(int *)pwVar7;
            local_190 = local_190 + 1;
            *(int *)pwVar7 = iVar5;
            pvVar2 = *(void **)(pwVar7 + 2);
            *(void **)(pwVar7 + 2) = local_1a0;
            pwVar7 = pwVar7 + 4;
            iVar5 = local_1c0;
            local_1a0 = pvVar2;
          } while ((int)local_190 < 5);
          if (local_190 == 5) {
            BVar8 = ___crtGetStringTypeA
                              ((_locale_t)0x0,1,
                               "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                               ,0x7f,local_18c,*(int *)(unaff_ESI + 4),*(BOOL *)(unaff_ESI + 0x14));
            if (BVar8 == 0) {
              (p_Var3->_setloc_data)._cacheout[0xb] = L'\0';
              (p_Var3->_setloc_data)._cacheout[0xc] = L'\0';
            }
            else {
              uVar9 = 0;
              do {
                local_18c[uVar9] = local_18c[uVar9] & 0x1ff;
                uVar9 = uVar9 + 1;
              } while (uVar9 < 0x7f);
              iVar5 = _memcmp(local_18c,PTR_DAT_10022570,0xfe);
              *(uint *)((p_Var3->_setloc_data)._cacheout + 0xb) = (uint)(iVar5 == 0);
            }
            *(int *)pwVar11 = *(int *)(unaff_ESI + 4);
          }
          *(undefined4 *)(unaff_ESI + 0xa8) =
               *(undefined4 *)((p_Var3->_setloc_data)._cacheout + 0xb);
        }
        if (param_1 == 1) {
          *(undefined4 *)(unaff_ESI + 8) = local_19c;
        }
        iVar5 = (**(code **)(&DAT_1001e2e0 + param_1 * 0xc))();
        if (iVar5 == 0) {
          if (local_1a8 != &DAT_10022578) {
            puVar1 = (undefined4 *)((param_1 + 5) * 0x10 + unaff_ESI);
            LVar10 = InterlockedDecrement((LONG *)*puVar1);
            if (LVar10 == 0) {
              _free((void *)*puVar1);
              _free(*(void **)(iVar4 + 0x54));
              *(undefined4 *)(iVar4 + 0x4c) = 0;
            }
          }
          *local_194 = 1;
          *(undefined4 **)((param_1 + 5) * 0x10 + unaff_ESI) = local_194;
        }
        else {
          *(undefined **)(iVar4 + 0x48) = local_1a8;
          _free(local_194);
          *local_198 = local_1ac;
          *(undefined4 *)(unaff_ESI + 4) = local_1b8;
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    __setlocale_nolock
   
   Library: Visual Studio 2008 Release */

void __fastcall __setlocale_nolock(char *param_1,int param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  errno_t eVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  int local_98;
  int local_90;
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  iVar7 = 0;
  if (param_3 != 0) {
    if (param_1 != (char *)0x0) {
      __setlocale_set_cat(param_1,param_3);
    }
    goto LAB_10003535;
  }
  bVar1 = true;
  local_90 = 0;
  if (param_1 != (char *)0x0) {
    if (((*param_1 == 'L') && (param_1[1] == 'C')) && (param_1[2] == '_')) {
      do {
        pcVar2 = _strpbrk(param_1,"=;");
        if (((pcVar2 == (char *)0x0) || (sVar3 = (int)pcVar2 - (int)param_1, sVar3 == 0)) ||
           (*pcVar2 == ';')) goto LAB_10003535;
        local_98 = 1;
        ppuVar8 = &PTR_s_LC_COLLATE_1001e2e4;
        do {
          iVar7 = _strncmp(*ppuVar8,param_1,sVar3);
          if ((iVar7 == 0) && (sVar4 = _strlen(*ppuVar8), sVar3 == sVar4)) break;
          local_98 = local_98 + 1;
          ppuVar8 = ppuVar8 + 3;
        } while ((int)ppuVar8 < 0x1001e315);
        pcVar2 = pcVar2 + 1;
        sVar3 = _strcspn(pcVar2,";");
        if ((sVar3 == 0) && (*pcVar2 != ';')) goto LAB_10003535;
        if (local_98 < 6) {
          eVar5 = _strncpy_s(local_8c,0x83,pcVar2,sVar3);
          if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          local_8c[sVar3] = '\0';
          iVar7 = __setlocale_set_cat(local_8c,local_98);
          if (iVar7 != 0) {
            local_90 = local_90 + 1;
          }
        }
      } while ((pcVar2[sVar3] != '\0') && (param_1 = pcVar2 + sVar3 + 1, *param_1 != '\0'));
    }
    else {
      iVar6 = __expandlocale(param_1,local_8c,0x83,(undefined2 *)0x0,(undefined4 *)0x0);
      if (iVar6 == 0) goto LAB_10003535;
      puVar9 = (undefined4 *)(param_2 + 0x48);
      do {
        if (iVar7 != 0) {
          iVar6 = _strcmp(local_8c,(char *)*puVar9);
          if ((iVar6 == 0) || (iVar6 = __setlocale_set_cat(local_8c,iVar7), iVar6 != 0)) {
            local_90 = local_90 + 1;
          }
          else {
            bVar1 = false;
          }
        }
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 4;
      } while (iVar7 < 6);
      if (bVar1) goto LAB_10003530;
    }
    if (local_90 == 0) goto LAB_10003535;
  }
LAB_10003530:
  __setlocale_get_all();
LAB_10003535:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    __create_locale
   
   Library: Visual Studio 2008 Release */

_locale_t __cdecl __create_locale(int _Category,char *_Locale)

{
  _locale_t _Memory;
  int *piVar1;
  pthreadlocinfo ptVar2;
  pthreadmbcinfo ptVar3;
  int iVar4;
  
  if (((uint)_Category < 6) && (_Locale != (char *)0x0)) {
    _Memory = (_locale_t)__calloc_crt(8,1);
    if (_Memory != (_locale_t)0x0) {
      ptVar2 = (pthreadlocinfo)__calloc_crt(0xd8,1);
      _Memory->locinfo = ptVar2;
      if (ptVar2 == (pthreadlocinfo)0x0) {
        _free(_Memory);
      }
      else {
        ptVar3 = (pthreadmbcinfo)__calloc_crt(0x220,1);
        _Memory->mbcinfo = ptVar3;
        if (ptVar3 != (pthreadmbcinfo)0x0) {
          __copytlocinfo_nolock((LONG *)&DAT_10022580);
          iVar4 = __setlocale_nolock(_Locale,(int)_Memory->locinfo,_Category);
          if (iVar4 == 0) {
            ___removelocaleref(&_Memory->locinfo->refcount);
            ___freetlocinfo(_Memory->locinfo);
            _free(_Memory);
          }
          else {
            iVar4 = __setmbcp_nolock(_Memory->locinfo->lc_codepage,(int)_Memory->mbcinfo);
            if (iVar4 == 0) {
              _Memory->mbcinfo->refcount = 1;
              _Memory->mbcinfo->refcount = 1;
              return _Memory;
            }
            _free(_Memory->mbcinfo);
            ___removelocaleref(&_Memory->locinfo->refcount);
            ___freetlocinfo(_Memory->locinfo);
            _free(_Memory);
          }
          return (_locale_t)0x0;
        }
        _free(_Memory->locinfo);
        _free(_Memory);
      }
    }
    piVar1 = __errno();
    *piVar1 = 0xc;
  }
  return (_locale_t)0x0;
}




void __cdecl FUN_10003639(int param_1,char *param_2)

{
  __create_locale(param_1,param_2);
  return;
}




/* Library Function - Single Match
    __crt_wait_module_handle
   
   Library: Visual Studio 2008 Release */

void __cdecl __crt_wait_module_handle(LPCWSTR param_1)

{
  HMODULE pHVar1;
  
  pHVar1 = GetModuleHandleW(param_1);
  if (pHVar1 == (HMODULE)0x0) {
    __crt_waiting_on_module_handle(param_1);
    return;
  }
  return;
}




/* Library Function - Single Match
    __encode_pointer
   
   Library: Visual Studio 2008 Release */

int __cdecl __encode_pointer(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1002266c);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10022668 != -1)) {
    iVar3 = DAT_10022668;
    pcVar2 = (code *)TlsGetValue(DAT_1002266c);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_1000382e;
    }
  }
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL"), hModule == (HMODULE)0x0))
  {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_1000382e:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    __encoded_null
   
   Library: Visual Studio 2008 Release */

void __encoded_null(void)

{
  __encode_pointer(0);
  return;
}




/* Library Function - Single Match
    __decode_pointer
   
   Library: Visual Studio 2008 Release */

int __cdecl __decode_pointer(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1002266c);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10022668 != -1)) {
    iVar3 = DAT_10022668;
    pcVar2 = (code *)TlsGetValue(DAT_1002266c);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_100038a9;
    }
  }
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL"), hModule == (HMODULE)0x0))
  {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_100038a9:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}




void FUN_100038c4(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)TlsGetValue(DAT_1002266c);
  (*pcVar1)(param_1);
  return;
}




/* Library Function - Single Match
    ___set_flsgetvalue
   
   Library: Visual Studio 2008 Release */

LPVOID ___set_flsgetvalue(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_1002266c);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)__decode_pointer(DAT_1002313c);
    TlsSetValue(DAT_1002266c,lpTlsValue);
  }
  return lpTlsValue;
}




/* Library Function - Single Match
    ___fls_setvalue@8
   
   Library: Visual Studio 2008 Release */

void ___fls_setvalue_8(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)__decode_pointer(DAT_10023140);
  (*pcVar1)(param_1,param_2);
  return;
}




/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2008 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_10022668 != -1) {
    iVar2 = DAT_10022668;
    pcVar1 = (code *)__decode_pointer(DAT_10023144);
    (*pcVar1)(iVar2);
    DAT_10022668 = -1;
  }
  if (DAT_1002266c != 0xffffffff) {
    TlsFree(DAT_1002266c);
    DAT_1002266c = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 2008 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL");
  }
  _Ptd->_pxcptacttab = &DAT_1001e538;
  _Ptd->_holdrand = 1;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"EncodePointer");
    *(FARPROC *)((_Ptd->_setloc_data)._cacheout + 0x1d) = pFVar1;
    pFVar1 = GetProcAddress(hModule,"DecodePointer");
    *(FARPROC *)((_Ptd->_setloc_data)._cacheout + 0x1f) = pFVar1;
  }
  _Ptd->_ownlocale = 1;
  *(undefined1 *)((_Ptd->_setloc_data)._cachein + 8) = 0x43;
  *(undefined1 *)((int)(_Ptd->_setloc_data)._cachein + 0x93) = 0x43;
  _Ptd->ptmbcinfo = (pthreadmbcinfo)&DAT_10022050;
  __lock(0xd);
  InterlockedIncrement(&_Ptd->ptmbcinfo->refcount);
  FUN_10003a47();
  __lock(0xc);
  _Ptd->ptlocinfo = _Locale;
  if (_Locale == (pthreadlocinfo)0x0) {
    _Ptd->ptlocinfo = (pthreadlocinfo)PTR_DAT_10022658;
  }
  ___addlocaleref(&_Ptd->ptlocinfo->refcount);
  FUN_10003a50();
  return;
}




void FUN_10003a47(void)

{
  FUN_100079a6(0xd);
  return;
}




void FUN_10003a50(void)

{
  FUN_100079a6(0xc);
  return;
}




/* Library Function - Single Match
    __getptd_noexit
   
   Library: Visual Studio 2008 Release */

_ptiddata __cdecl __getptd_noexit(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  _ptiddata _Ptd;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  _ptiddata p_Var5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_10022668;
  pcVar1 = (code *)___set_flsgetvalue();
  _Ptd = (_ptiddata)(*pcVar1)(uVar4);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = (_ptiddata)__calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      uVar4 = DAT_10022668;
      p_Var5 = _Ptd;
      pcVar1 = (code *)__decode_pointer(DAT_10023140);
      iVar2 = (*pcVar1)(uVar4,p_Var5);
      if (iVar2 == 0) {
        _free(_Ptd);
        _Ptd = (_ptiddata)0x0;
      }
      else {
        __initptd(_Ptd,(pthreadlocinfo)0x0);
        DVar3 = GetCurrentThreadId();
        _Ptd->_thandle = 0xffffffff;
        _Ptd->_tid = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Ptd;
}




/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2008 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2008 Release */

void __freefls_4(void *param_1)

{
  LONG *pLVar1;
  LONG LVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x24));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x34));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x3c));
    }
    if (*(void **)((int)param_1 + 0x40) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x40));
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x48));
    }
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_1001e538) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_10022050)) {
        _free(pLVar1);
      }
    }
    FUN_10003c06();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_10022658) && (pLVar1 != (LONG *)&DAT_10022580)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_10003c12();
    _free(param_1);
  }
  return;
}




void FUN_10003c06(void)

{
  FUN_100079a6(0xd);
  return;
}




void FUN_10003c12(void)

{
  FUN_100079a6(0xc);
  return;
}




/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2008 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_10022668 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_1002266c), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_10022668;
      pcVar2 = (code *)TlsGetValue(DAT_1002266c);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_10022668;
    pcVar2 = (code *)__decode_pointer(DAT_10023140);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_1002266c != 0xffffffff) {
    TlsSetValue(DAT_1002266c,(LPVOID)0x0);
  }
  return;
}




/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  code *pcVar5;
  _ptiddata p_Var6;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL");
  }
  if (hModule != (HMODULE)0x0) {
    DAT_10023138 = GetProcAddress(hModule,"FlsAlloc");
    DAT_1002313c = GetProcAddress(hModule,"FlsGetValue");
    DAT_10023140 = GetProcAddress(hModule,"FlsSetValue");
    DAT_10023144 = GetProcAddress(hModule,"FlsFree");
    if ((((DAT_10023138 == (FARPROC)0x0) || (DAT_1002313c == (FARPROC)0x0)) ||
        (DAT_10023140 == (FARPROC)0x0)) || (DAT_10023144 == (FARPROC)0x0)) {
      DAT_1002313c = TlsGetValue_exref;
      DAT_10023138 = (FARPROC)&LAB_100038bb;
      DAT_10023140 = TlsSetValue_exref;
      DAT_10023144 = TlsFree_exref;
    }
    DAT_1002266c = TlsAlloc();
    if (DAT_1002266c == 0xffffffff) {
      return 0;
    }
    BVar1 = TlsSetValue(DAT_1002266c,DAT_1002313c);
    if (BVar1 == 0) {
      return 0;
    }
    __init_pointers();
    DAT_10023138 = (FARPROC)__encode_pointer((int)DAT_10023138);
    DAT_1002313c = (FARPROC)__encode_pointer((int)DAT_1002313c);
    DAT_10023140 = (FARPROC)__encode_pointer((int)DAT_10023140);
    DAT_10023144 = (FARPROC)__encode_pointer((int)DAT_10023144);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar5 = __freefls_4;
      pcVar3 = (code *)__decode_pointer((int)DAT_10023138);
      DAT_10022668 = (*pcVar3)(pcVar5);
      if ((DAT_10022668 != -1) && (_Ptd = (_ptiddata)__calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0))
      {
        iVar2 = DAT_10022668;
        p_Var6 = _Ptd;
        pcVar3 = (code *)__decode_pointer((int)DAT_10023140);
        iVar2 = (*pcVar3)(iVar2,p_Var6);
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          DVar4 = GetCurrentThreadId();
          _Ptd->_thandle = 0xffffffff;
          _Ptd->_tid = DVar4;
          return 1;
        }
      }
    }
  }
  __mtterm();
  return 0;
}




/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  uVar1 = (uint)_Str & 3;
  puVar2 = (uint *)_Str;
  while (uVar1 != 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    if ((char)uVar1 == '\0') goto LAB_10003e93;
    uVar1 = (uint)puVar2 & 3;
  }
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
LAB_10003e93:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
}




void __cdecl FUN_10003ebb(undefined4 param_1)

{
  DAT_10023148 = param_1;
  return;
}




/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2008 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  uint uVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  uVar1 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  local_32c.ExceptionCode = 0;
  _memset(&local_32c.ExceptionFlags,0,0x4c);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_2d4 = 0x10001;
  local_32c.ExceptionCode = 0xc0000417;
  local_32c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_1000d6d0();
  }
  uExitCode = 0xc0000417;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    void (__cdecl*__cdecl __set_inconsistency(void (__cdecl*)(void)))(void)
    __set_invalid_parameter_handler
    __set_purecall_handler
   
   Library: Visual Studio 2008 Release */

_purecall_handler __cdecl FID_conflict___set_inconsistency(_purecall_handler _Handler)

{
  _purecall_handler p_Var1;
  
  p_Var1 = (_purecall_handler)__decode_pointer(DAT_10023148);
  DAT_10023148 = __encode_pointer((int)_Handler);
  return p_Var1;
}




void __cdecl
FUN_10004026(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}




/* Library Function - Single Match
    __invalid_parameter
   
   Library: Visual Studio 2008 Release */

void __cdecl
__invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,
                   uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__decode_pointer(DAT_10023148);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10004047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1000d6d0();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}




void __cdecl
FUN_10004067(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  __invalid_parameter(param_1,param_2,param_3,param_4,param_5);
  return;
}




/* Library Function - Single Match
    __get_errno_from_oserr
   
   Library: Visual Studio 2008 Release */

int __cdecl __get_errno_from_oserr(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_10022670)[uVar1 * 2]) {
      return (&DAT_10022674)[uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}




/* Library Function - Single Match
    __errno
   
   Library: Visual Studio 2008 Release */

int * __cdecl __errno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (int *)&DAT_100227d8;
  }
  return &p_Var1->_terrno;
}




/* Library Function - Single Match
    ___doserrno
   
   Library: Visual Studio 2008 Release */

ulong * __cdecl ___doserrno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (ulong *)&DAT_100227dc;
  }
  return &p_Var1->_tdoserrno;
}




/* Library Function - Single Match
    __dosmaperr
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = ___doserrno();
  *puVar1 = param_1;
  iVar2 = __get_errno_from_oserr(param_1);
  piVar3 = __errno();
  *piVar3 = iVar2;
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    __set_doserrno
    __set_errno
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl FID_conflict___set_doserrno(ulong _Value)

{
  _ptiddata p_Var1;
  ulong *puVar2;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return 0xc;
  }
  puVar2 = (ulong *)__errno();
  *puVar2 = _Value;
  return 0;
}




undefined4 __cdecl FUN_1000411e(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0x16;
  }
  else {
    piVar1 = __errno();
    *param_1 = *piVar1;
    uVar2 = 0;
  }
  return uVar2;
}




/* Library Function - Multiple Matches With Different Base Names
    __set_doserrno
    __set_errno
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl FID_conflict___set_doserrno(ulong _Value)

{
  _ptiddata p_Var1;
  ulong *puVar2;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return 0xc;
  }
  puVar2 = ___doserrno();
  *puVar2 = _Value;
  return 0;
}




undefined4 __cdecl FUN_1000416e(ulong *param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (ulong *)0x0) {
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0x16;
  }
  else {
    puVar1 = ___doserrno();
    *param_1 = *puVar1;
    uVar2 = 0;
  }
  return uVar2;
}




uint * __cdecl FUN_100041a0(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    uVar4 = (uint)param_1 & 3;
    while (uVar4 != 0) {
      if ((char)*param_1 == cVar3) {
        return param_1;
      }
      if ((char)*param_1 == '\0') {
        return (uint *)0x0;
      }
      uVar4 = (uint)((int)param_1 + 1) & 3;
      param_1 = (uint *)((int)param_1 + 1);
    }
    while( true ) {
      while( true ) {
        uVar4 = *param_1;
        uVar9 = uVar4 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar7 = uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (uint *)0x0;
          }
          if ((uVar4 + 0x7efefeff & 0x80000000) == 0) {
            return (uint *)0x0;
          }
        }
      }
      uVar4 = *param_1;
      if ((char)uVar4 == cVar3) {
        return param_1;
      }
      if ((char)uVar4 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar4 >> 8);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar4 >> 0x10);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar4 >> 0x18);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
    }
    return (uint *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (uint *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (uint *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar5 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar5 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar5 + 3);
      pcVar8 = pcVar8 + 2;
      puVar5 = (uint *)((int)puVar5 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}




/* Library Function - Single Match
    __mbstok_s_l
   
   Library: Visual Studio 2008 Release */

uchar * __cdecl __mbstok_s_l(uchar *_Str,uchar *_Delim,uchar **_Context,_locale_t _Locale)

{
  byte bVar1;
  int *piVar2;
  uchar *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte *local_c;
  int local_8;
  byte *pbVar7;
  
  if ((_Context == (uchar **)0x0) || (_Delim == (uchar *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return (uchar *)0x0;
  }
  if ((_Str == (uchar *)0x0) && (*_Context == (uchar *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return (uchar *)0x0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((local_1c.mbcinfo)->ismbcodepage == 0) {
    puVar3 = (uchar *)_strtok_s((char *)_Str,(char *)_Delim,(char **)_Context);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return puVar3;
    }
    return puVar3;
  }
  if (_Str == (uchar *)0x0) {
    _Str = *_Context;
  }
  for (; local_c = _Str, *_Str != 0; _Str = _Str + 1) {
    bVar1 = *_Delim;
    pbVar5 = _Delim;
    while (bVar1 != 0) {
      iVar4 = __ismbblead_l((uint)*pbVar5,&local_1c);
      if (iVar4 == 0) {
        pbVar6 = pbVar5;
        if (*pbVar5 == *_Str) break;
      }
      else {
        pbVar6 = pbVar5 + 1;
        if (*pbVar6 == 0) {
          pbVar5 = pbVar5 + 1;
          piVar2 = __errno();
          *piVar2 = 0x2a;
          break;
        }
        if ((*pbVar5 == *_Str) && (*pbVar6 == _Str[1])) break;
      }
      pbVar5 = pbVar6 + 1;
      bVar1 = *pbVar5;
    }
    if (*pbVar5 == 0) break;
    iVar4 = __ismbblead_l((uint)*_Str,&local_1c);
    if ((iVar4 != 0) && (_Str = _Str + 1, *_Str == 0)) {
      piVar2 = __errno();
      *piVar2 = 0x2a;
      local_c = _Str;
      break;
    }
  }
  do {
    pbVar5 = _Str;
    if (*_Str == 0) {
LAB_100043c7:
      *_Context = pbVar5;
      if (local_c != pbVar5) {
        if (local_10 != '\0') {
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
          return local_c;
        }
        return local_c;
      }
      if (local_10 == '\0') {
        return (uchar *)0x0;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return (uchar *)0x0;
    }
    local_8 = 0;
    bVar1 = *_Delim;
    pbVar6 = _Delim;
    while (bVar1 != 0) {
      iVar4 = __ismbblead_l((uint)*pbVar6,&local_1c);
      if (iVar4 == 0) {
        pbVar7 = pbVar6;
        if (*pbVar6 == *_Str) break;
      }
      else {
        pbVar7 = pbVar6 + 1;
        if (*pbVar7 == 0) {
          pbVar6 = pbVar6 + 1;
          break;
        }
        if ((*pbVar6 == *_Str) && (*pbVar7 == _Str[1])) {
          local_8 = 1;
          break;
        }
      }
      pbVar6 = pbVar7 + 1;
      bVar1 = *pbVar6;
    }
    if (*pbVar6 != 0) {
      *_Str = 0;
      pbVar5 = _Str + 1;
      if (local_8 != 0) {
        _Str[1] = 0;
        pbVar5 = _Str + 2;
      }
      goto LAB_100043c7;
    }
    iVar4 = __ismbblead_l((uint)*_Str,&local_1c);
    pbVar6 = _Str;
    if ((iVar4 != 0) && (pbVar6 = _Str + 1, *pbVar6 == 0)) {
      *_Str = 0;
      goto LAB_100043c7;
    }
    _Str = pbVar6 + 1;
  } while( true );
}




/* Library Function - Single Match
    __mbstok_s
   
   Library: Visual Studio 2008 Release */

uchar * __cdecl __mbstok_s(uchar *_Str,uchar *_Delim,uchar **_Context)

{
  uchar *puVar1;
  
  puVar1 = __mbstok_s_l(_Str,_Delim,_Context,(_locale_t)0x0);
  return puVar1;
}




/* Library Function - Single Match
    __strnicmp_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar2 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
    if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
      piVar1 = __errno();
      *piVar1 = 0x16;
      __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
    else if (_MaxCount < 0x80000000) {
      if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
        iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      }
      else {
        do {
          iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
          _Str1 = _Str1 + 1;
          iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
          _Str2 = (char *)((byte *)_Str2 + 1);
          _MaxCount = _MaxCount - 1;
          if ((_MaxCount == 0) || (iVar2 == 0)) break;
        } while (iVar2 == iVar3);
        iVar2 = iVar2 - iVar3;
      }
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else {
      piVar1 = __errno();
      *piVar1 = 0x16;
      __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
  }
  return iVar2;
}




/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2008 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_10023114 == 0) {
    if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
      iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar2;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2008 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  
  if (_Memory != (void *)0x0) {
    if (DAT_10024c08 == 3) {
      __lock(4);
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_100045b5();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_100235bc,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = __errno();
      DVar4 = GetLastError();
      iVar5 = __get_errno_from_oserr(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}




void FUN_100045b5(void)

{
  FUN_100079a6(4);
  return;
}




/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2008 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  *(undefined ***)this = vftable;
  if (*param_1 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = (char *)_malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}




/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &,int)
   
   Library: Visual Studio 2008 Release */

void __thiscall std::exception::exception(exception *this,char **param_1,int param_2)

{
  char *pcVar1;
  
  *(undefined ***)this = vftable;
  pcVar1 = *param_1;
  *(undefined4 *)(this + 8) = 0;
  *(char **)(this + 4) = pcVar1;
  return;
}




/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2008 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  *(undefined ***)this = vftable;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    *(char **)(this + 4) = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = (char *)_malloc(sVar2 + 1);
    *(char **)(this + 4) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}




/* Library Function - Single Match
    public: class std::exception & __thiscall std::exception::operator=(class std::exception const
   &)
   
   Library: Visual Studio 2008 Release */

exception * __thiscall std::exception::operator=(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  if (this != param_1) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(this + 8) = iVar1;
    pcVar3 = *(char **)(param_1 + 4);
    if (iVar1 == 0) {
      *(char **)(this + 4) = pcVar3;
    }
    else if (pcVar3 == (char *)0x0) {
      *(undefined4 *)(this + 4) = 0;
    }
    else {
      sVar2 = _strlen(pcVar3);
      pcVar3 = (char *)_malloc(sVar2 + 1);
      *(char **)(this + 4) = pcVar3;
      if (pcVar3 != (char *)0x0) {
        _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
      }
    }
  }
  return this;
}




/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = std::exception::vftable;
  if (*(int *)(this + 8) != 0) {
    _free(*(void **)(this + 4));
  }
  return;
}




char * __fastcall FUN_1000473c(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}




exception * __fastcall FUN_10004749(exception *param_1)

{
  std::exception::exception(param_1,(char **)&stack0x00000004);
  *(undefined ***)param_1 = std::bad_cast::vftable;
  return param_1;
}




exception * __thiscall FUN_10004767(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_cast::vftable;
  return (exception *)this;
}




/* Library Function - Single Match
    public: __thiscall std::bad_typeid::bad_typeid(char const *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

bad_typeid * __thiscall std::bad_typeid::bad_typeid(bad_typeid *this,char *param_1)

{
  exception::exception((exception *)this,&param_1);
  *(undefined ***)this = vftable;
  return this;
}




exception * __thiscall FUN_100047ad(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_typeid::vftable;
  return (exception *)this;
}




/* Library Function - Single Match
    public: __thiscall std::__non_rtti_object::__non_rtti_object(char const *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

__non_rtti_object * __thiscall
std::__non_rtti_object::__non_rtti_object(__non_rtti_object *this,char *param_1)

{
  bad_typeid::bad_typeid((bad_typeid *)this,param_1);
  *(undefined ***)this = vftable;
  return this;
}




undefined4 * __thiscall FUN_100047f2(void *this,exception *param_1)

{
  FUN_100047ad(this,param_1);
  *(undefined ***)this = std::__non_rtti_object::vftable;
  return (undefined4 *)this;
}




exception * __thiscall FUN_1000481a(void *this,byte param_1)

{
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_100018dd(this);
  }
  return (exception *)this;
}




exception * __thiscall FUN_1000483b(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_cast::vftable;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_100018dd(this);
  }
  return (exception *)this;
}




exception * __thiscall FUN_10004862(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_typeid::vftable;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_100018dd(this);
  }
  return (exception *)this;
}




exception * __thiscall FUN_10004889(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_typeid::vftable;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_100018dd(this);
  }
  return (exception *)this;
}




/* Library Function - Single Match
    public: char const * __thiscall type_info::name(struct __type_info_node *)const 
   
   Library: Visual Studio 2008 Release */

char * __thiscall type_info::name(type_info *this,__type_info_node *param_1)

{
  char *pcVar1;
  
  pcVar1 = _Name_base(this,param_1);
  return pcVar1;
}




/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = vftable;
  _Type_info_dtor(this);
  return;
}




/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_100018dd(this);
  }
  return this;
}




/* Library Function - Single Match
    public: char const * __thiscall type_info::_name_internal_method(struct __type_info_node *)const
   
   
   Library: Visual Studio 2008 Release */

char * __thiscall type_info::_name_internal_method(type_info *this,__type_info_node *param_1)

{
  char *pcVar1;
  
  pcVar1 = _Name_base_internal(this,param_1);
  return pcVar1;
}




/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}




/* Library Function - Single Match
    public: bool __thiscall type_info::operator!=(class type_info const &)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

bool __thiscall type_info::operator!=(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return iVar1 != 0;
}




/* Library Function - Single Match
    public: int __thiscall type_info::before(class type_info const &)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall type_info::before(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (uint)(0 < iVar1);
}




/* Library Function - Single Match
    __onexit_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __onexit_nolock(int param_1)

{
  int *_Memory;
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  int iVar5;
  
  _Memory = (int *)__decode_pointer(DAT_10024d28);
  piVar1 = (int *)__decode_pointer(DAT_10024d24);
  if ((piVar1 < _Memory) || (iVar5 = (int)piVar1 - (int)_Memory, iVar5 + 4U < 4)) {
    return 0;
  }
  sVar2 = __msize(_Memory);
  if (sVar2 < iVar5 + 4U) {
    sVar3 = 0x800;
    if (sVar2 < 0x800) {
      sVar3 = sVar2;
    }
    if ((sVar3 + sVar2 < sVar2) ||
       (pvVar4 = __realloc_crt(_Memory,sVar3 + sVar2), pvVar4 == (void *)0x0)) {
      if (sVar2 + 0x10 < sVar2) {
        return 0;
      }
      pvVar4 = __realloc_crt(_Memory,sVar2 + 0x10);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
    }
    piVar1 = (int *)((int)pvVar4 + (iVar5 >> 2) * 4);
    DAT_10024d28 = __encode_pointer((int)pvVar4);
  }
  iVar5 = __encode_pointer(param_1);
  *piVar1 = iVar5;
  DAT_10024d24 = __encode_pointer((int)(piVar1 + 1));
  return param_1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2008 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_100062b5();
  p_Var1 = (_onexit_t)__onexit_nolock((int)_Func);
  FUN_10004aad();
  return p_Var1;
}




void FUN_10004aad(void)

{
  FUN_100062be();
  return;
}




/* Library Function - Single Match
    _atexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2008 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_10024bf0) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_10004b10();
  }
  return local_20;
}




void FUN_10004b10(void)

{
  FUN_100079a6(4);
  return;
}




/* Library Function - Single Match
    __heap_alloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl __heap_alloc(size_t _Size)

{
  LPVOID pvVar1;
  int *piVar2;
  
  if (DAT_100235bc == (HANDLE)0x0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  if (DAT_10024c08 != 1) {
    if ((DAT_10024c08 == 3) && (piVar2 = _V6_HeapAlloc((uint *)_Size), piVar2 != (int *)0x0)) {
      return piVar2;
    }
    if (_Size == 0) {
      _Size = 1;
    }
    pvVar1 = HeapAlloc(DAT_100235bc,0,_Size + 0xf & 0xfffffff0);
    return pvVar1;
  }
  if (_Size == 0) {
    _Size = 1;
  }
  pvVar1 = HeapAlloc(DAT_100235bc,0,_Size);
  return pvVar1;
}




/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _malloc(size_t _Size)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  uint dwBytes;
  
  if (_Size < 0xffffffe1) {
    do {
      if (DAT_100235bc == (HANDLE)0x0) {
        __FF_MSGBANNER();
        __NMSG_WRITE(0x1e);
        ___crtExitProcess(0xff);
      }
      if (DAT_10024c08 == 1) {
        dwBytes = _Size;
        if (_Size == 0) {
          dwBytes = 1;
        }
LAB_10004c02:
        piVar1 = (int *)HeapAlloc(DAT_100235bc,0,dwBytes);
      }
      else if ((DAT_10024c08 != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0))
      {
        sVar3 = _Size;
        if (_Size == 0) {
          sVar3 = 1;
        }
        dwBytes = sVar3 + 0xf & 0xfffffff0;
        goto LAB_10004c02;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (DAT_10023a3c == 0) {
        piVar1 = __errno();
        *piVar1 = 0xc;
        break;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
    piVar1 = __errno();
    *piVar1 = 0xc;
  }
  else {
    __callnewh(_Size);
    piVar1 = __errno();
    *piVar1 = 0xc;
  }
  return (void *)0x0;
}




void __cdecl FUN_10004c5d(undefined4 param_1)

{
  DAT_1002314c = param_1;
  return;
}




/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2008 Release */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  __lock(4);
  p_Var1 = (_func_int_uint *)__decode_pointer(DAT_1002314c);
  DAT_1002314c = __encode_pointer((int)param_1);
  FUN_100079a6(4);
  return p_Var1;
}




/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2008 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)__decode_pointer(DAT_1002314c);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}




/* Library Function - Single Match
    __CxxThrowException@8
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __CxxThrowException_8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  byte *local_8;
  
  pDVar2 = &DAT_1001e470;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}




/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined *puVar5;
  int unaff_EDI;
  uint uVar6;
  longlong lVar7;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar6 = _File_00->_flag;
  if ((uVar6 & 0x82) == 0) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_10004d52:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    piVar2 = __errno();
    *piVar2 = 0x22;
    goto LAB_10004d52;
  }
  if ((uVar6 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar6 & 0x10) == 0) {
      _File_00->_flag = uVar6 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar6 & 0xfffffffe;
  }
  uVar6 = _File_00->_flag;
  _File_00->_flag = uVar6 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar6 & 0x10c) == 0) &&
     (((ppuVar3 = FUN_1000fda1(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_1000fda1(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
      (iVar4 = __isatty((int)_File), iVar4 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108U) == 0) {
    uVar6 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar6 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar6 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar5 = &DAT_10022870;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x40 + (&DAT_10024c20)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_10004e7a;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_10004e7a:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}




/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2008 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}




/* Library Function - Single Match
    _write_multi_char
   
   Library: Visual Studio 2008 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}




/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2008 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  int *piVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        piVar1 = __errno();
        if (*piVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}




undefined4 __cdecl FUN_10004f36(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}




undefined8 __cdecl FUN_10004f48(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}




undefined4 __cdecl FUN_10004f5d(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}




/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __output_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __output_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  errno_t eVar7;
  int iVar8;
  undefined *puVar9;
  int extraout_ECX;
  uint uVar10;
  byte *pbVar11;
  size_t sVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  int local_270;
  int local_26c [2];
  size_t local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  FILE *local_250;
  int local_24c;
  wchar_t *local_248;
  int local_244;
  byte *local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined1 local_230;
  char local_22f;
  int local_22c;
  wchar_t *local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  local_250 = _File;
  local_228 = (wchar_t *)_ArgList;
  local_24c = 0;
  local_214 = 0;
  local_238 = 0;
  local_21c = 0;
  local_234 = 0;
  local_244 = 0;
  local_23c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,_Locale);
  if (_File != (FILE *)0x0) {
    if ((_File->_flag & 0x40) == 0) {
      uVar4 = __fileno(_File);
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar9 = &DAT_10022870;
      }
      else {
        puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_10024c20)[(int)uVar4 >> 5]);
      }
      if ((puVar9[0x24] & 0x7f) == 0) {
        if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
          puVar9 = &DAT_10022870;
        }
        else {
          puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_10024c20)[(int)uVar4 >> 5]);
        }
        if ((puVar9[0x24] & 0x80) == 0) goto LAB_10005074;
      }
    }
    else {
LAB_10005074:
      if (_Format != (char *)0x0) {
        local_215 = *_Format;
        local_22c = 0;
        local_224 = 0;
        local_248 = (wchar_t *)0x0;
        iVar8 = 0;
        while ((local_215 != 0 &&
               (pbVar11 = (byte *)_Format + 1, local_240 = pbVar11, -1 < local_22c))) {
          if ((byte)(local_215 - 0x20) < 0x59) {
            uVar4 = (int)(char)(&DAT_1001e488)[(char)local_215] & 0xf;
          }
          else {
            uVar4 = 0;
          }
          local_270 = (int)(char)(&DAT_1001e4a8)[uVar4 * 8 + iVar8] >> 4;
          switch(local_270) {
          case 0:
switchD_100050ed_caseD_0:
            local_23c = 0;
            iVar8 = __isleadbyte_l((uint)local_215,&local_260);
            if (iVar8 != 0) {
              write_char();
              local_240 = (byte *)_Format + 2;
              if (*pbVar11 == 0) goto LAB_10004fdb;
            }
            write_char();
            break;
          case 1:
            local_21c = -1;
            local_274 = 0;
            local_244 = 0;
            local_238 = 0;
            local_234 = 0;
            local_214 = 0;
            local_23c = 0;
            break;
          case 2:
            if (local_215 == 0x20) {
              local_214 = local_214 | 2;
            }
            else if (local_215 == 0x23) {
              local_214 = local_214 | 0x80;
            }
            else if (local_215 == 0x2b) {
              local_214 = local_214 | 1;
            }
            else if (local_215 == 0x2d) {
              local_214 = local_214 | 4;
            }
            else if (local_215 == 0x30) {
              local_214 = local_214 | 8;
            }
            break;
          case 3:
            if (local_215 == 0x2a) {
              local_228 = (wchar_t *)((int)_ArgList + 4);
              local_238 = *(int *)_ArgList;
              if (local_238 < 0) {
                local_214 = local_214 | 4;
                local_238 = -local_238;
              }
            }
            else {
              local_238 = local_238 * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 4:
            local_21c = 0;
            break;
          case 5:
            if (local_215 == 0x2a) {
              local_228 = (wchar_t *)((int)_ArgList + 4);
              local_21c = *(int *)_ArgList;
              if (local_21c < 0) {
                local_21c = -1;
              }
            }
            else {
              local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 6:
            if (local_215 == 0x49) {
              bVar1 = *pbVar11;
              if ((bVar1 == 0x36) && (((byte *)_Format)[2] == 0x34)) {
                local_214 = local_214 | 0x8000;
                local_240 = (byte *)_Format + 3;
              }
              else if ((bVar1 == 0x33) && (((byte *)_Format)[2] == 0x32)) {
                local_214 = local_214 & 0xffff7fff;
                local_240 = (byte *)_Format + 3;
              }
              else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                       ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                local_270 = 0;
                goto switchD_100050ed_caseD_0;
              }
            }
            else if (local_215 == 0x68) {
              local_214 = local_214 | 0x20;
            }
            else if (local_215 == 0x6c) {
              if (*pbVar11 == 0x6c) {
                local_214 = local_214 | 0x1000;
                local_240 = (byte *)_Format + 2;
              }
              else {
                local_214 = local_214 | 0x10;
              }
            }
            else if (local_215 == 0x77) {
              local_214 = local_214 | 0x800;
            }
            break;
          case 7:
            if ((char)local_215 < 'e') {
              if (local_215 == 100) {
LAB_100055d8:
                local_214 = local_214 | 0x40;
LAB_100055df:
                local_224 = 10;
LAB_100055e9:
                if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
                  local_228 = (wchar_t *)((int)_ArgList + 4);
                  if ((local_214 & 0x20) == 0) {
                    uVar4 = *(uint *)_ArgList;
                    if ((local_214 & 0x40) == 0) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = (int)uVar4 >> 0x1f;
                    }
                  }
                  else {
                    if ((local_214 & 0x40) == 0) {
                      uVar4 = (uint)(ushort)*(wchar_t *)_ArgList;
                    }
                    else {
                      uVar4 = (uint)*(wchar_t *)_ArgList;
                    }
                    uVar10 = (int)uVar4 >> 0x1f;
                  }
                }
                else {
                  uVar4 = *(uint *)_ArgList;
                  uVar10 = *(uint *)((int)_ArgList + 4);
                  local_228 = (wchar_t *)((int)_ArgList + 8);
                }
                if ((((local_214 & 0x40) != 0) && ((int)uVar10 < 1)) && ((int)uVar10 < 0)) {
                  bVar14 = uVar4 != 0;
                  uVar4 = -uVar4;
                  uVar10 = -(uVar10 + bVar14);
                  local_214 = local_214 | 0x100;
                }
                uVar15 = CONCAT44(uVar10,uVar4);
                if ((local_214 & 0x9000) == 0) {
                  uVar10 = 0;
                }
                if (local_21c < 0) {
                  local_21c = 1;
                }
                else {
                  local_214 = local_214 & 0xfffffff7;
                  if (0x200 < local_21c) {
                    local_21c = 0x200;
                  }
                }
                if (uVar4 == 0 && uVar10 == 0) {
                  local_234 = 0;
                }
                pwVar13 = &local_11;
                while( true ) {
                  uVar4 = uVar10;
                  iVar8 = local_21c + -1;
                  if ((local_21c < 1) && ((uint)uVar15 == 0 && uVar4 == 0)) break;
                  local_21c = iVar8;
                  uVar15 = __aulldvrm((uint)uVar15,uVar4,local_224,(int)local_224 >> 0x1f);
                  iVar8 = extraout_ECX + 0x30;
                  if (0x39 < iVar8) {
                    iVar8 = iVar8 + local_24c;
                  }
                  *(char *)pwVar13 = (char)iVar8;
                  pwVar13 = (wchar_t *)((int)pwVar13 + -1);
                  uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
                  local_264 = uVar4;
                }
                local_224 = (int)&local_11 + -(int)pwVar13;
                local_220 = (wchar_t *)((int)pwVar13 + 1);
                local_21c = iVar8;
                if (((local_214 & 0x200) != 0) && ((local_224 == 0 || (*(char *)local_220 != '0'))))
                {
                  *(char *)pwVar13 = '0';
                  local_224 = (int)&local_11 + -(int)pwVar13 + 1;
                  local_220 = pwVar13;
                }
              }
              else if ((char)local_215 < 'T') {
                if (local_215 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_10005404;
                }
                if (local_215 == 0x41) {
LAB_10005383:
                  local_215 = local_215 + 0x20;
                  local_274 = 1;
LAB_10005396:
                  local_214 = local_214 | 0x40;
                  local_264 = 0x200;
                  pwVar13 = local_210;
                  sVar12 = local_264;
                  pwVar17 = local_210;
                  if (local_21c < 0) {
                    local_21c = 6;
                  }
                  else if (local_21c == 0) {
                    if (local_215 == 0x67) {
                      local_21c = 1;
                    }
                  }
                  else {
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                    if (0xa3 < local_21c) {
                      sVar12 = local_21c + 0x15d;
                      local_220 = local_210;
                      local_248 = (wchar_t *)__malloc_crt(sVar12);
                      pwVar13 = local_248;
                      pwVar17 = local_248;
                      if (local_248 == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar13 = local_210;
                        sVar12 = local_264;
                        pwVar17 = local_220;
                      }
                    }
                  }
                  local_220 = pwVar17;
                  local_264 = sVar12;
                  local_27c = *(undefined4 *)_ArgList;
                  local_228 = (wchar_t *)((int)_ArgList + 8);
                  local_278 = *(undefined4 *)((int)_ArgList + 4);
                  plVar19 = &local_260;
                  iVar5 = (int)(char)local_215;
                  puVar16 = &local_27c;
                  pwVar17 = pwVar13;
                  sVar12 = local_264;
                  iVar8 = local_21c;
                  uVar18 = local_274;
                  pcVar6 = (code *)__decode_pointer((int)PTR_LAB_10022e58);
                  (*pcVar6)(puVar16,pwVar17,sVar12,iVar5,iVar8,uVar18,plVar19);
                  uVar4 = local_214 & 0x80;
                  if ((uVar4 != 0) && (local_21c == 0)) {
                    plVar19 = &local_260;
                    pwVar17 = pwVar13;
                    pcVar6 = (code *)__decode_pointer((int)PTR_LAB_10022e64);
                    (*pcVar6)(pwVar17,plVar19);
                  }
                  if ((local_215 == 0x67) && (uVar4 == 0)) {
                    plVar19 = &local_260;
                    pwVar17 = pwVar13;
                    pcVar6 = (code *)__decode_pointer((int)PTR_LAB_10022e60);
                    (*pcVar6)(pwVar17,plVar19);
                  }
                  if ((char)*pwVar13 == '-') {
                    local_214 = local_214 | 0x100;
                    local_220 = (wchar_t *)((int)pwVar13 + 1);
                    pwVar13 = local_220;
                  }
LAB_10005536:
                  local_224 = _strlen((char *)pwVar13);
                }
                else if (local_215 == 0x43) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
LAB_10005477:
                  local_228 = (wchar_t *)((int)_ArgList + 4);
                  if ((local_214 & 0x810) == 0) {
                    local_210[0]._0_1_ = (char)*(wchar_t *)_ArgList;
                    local_224 = 1;
                  }
                  else {
                    eVar7 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,*(wchar_t *)_ArgList
                                     );
                    if (eVar7 != 0) {
                      local_244 = 1;
                    }
                  }
                  local_220 = local_210;
                }
                else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_10005383;
              }
              else {
                if (local_215 == 0x58) goto LAB_1000573d;
                if (local_215 == 0x5a) {
                  psVar2 = *(short **)_ArgList;
                  local_228 = (wchar_t *)((int)_ArgList + 4);
                  pwVar13 = (wchar_t *)PTR_s__null__10022860;
                  local_220 = (wchar_t *)PTR_s__null__10022860;
                  if ((psVar2 == (short *)0x0) ||
                     (pwVar17 = *(wchar_t **)(psVar2 + 2), pwVar17 == (wchar_t *)0x0))
                  goto LAB_10005536;
                  local_224 = (size_t)*psVar2;
                  local_220 = pwVar17;
                  if ((local_214 & 0x800) == 0) {
                    local_23c = 0;
                  }
                  else {
                    local_224 = (int)local_224 / 2;
                    local_23c = 1;
                  }
                }
                else {
                  if (local_215 == 0x61) goto LAB_10005396;
                  if (local_215 == 99) goto LAB_10005477;
                }
              }
LAB_10005915:
              if (local_244 == 0) {
                if ((local_214 & 0x40) != 0) {
                  if ((local_214 & 0x100) == 0) {
                    if ((local_214 & 1) == 0) {
                      if ((local_214 & 2) == 0) goto LAB_1000595e;
                      local_230 = 0x20;
                    }
                    else {
                      local_230 = 0x2b;
                    }
                  }
                  else {
                    local_230 = 0x2d;
                  }
                  local_234 = 1;
                }
LAB_1000595e:
                iVar8 = (local_238 - local_224) - local_234;
                if ((local_214 & 0xc) == 0) {
                  write_multi_char(0x20,iVar8);
                }
                write_string(local_234);
                if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
                  write_multi_char(0x30,iVar8);
                }
                if ((local_23c == 0) || ((int)local_224 < 1)) {
                  write_string(local_224);
                }
                else {
                  local_264 = local_224;
                  pwVar13 = local_220;
                  do {
                    _WCh = *pwVar13;
                    local_264 = local_264 - 1;
                    pwVar13 = pwVar13 + 1;
                    eVar7 = _wctomb_s(local_26c,(char *)((int)&local_11 + 1),6,_WCh);
                    if ((eVar7 != 0) || (local_26c[0] == 0)) {
                      local_22c = -1;
                      break;
                    }
                    write_string(local_26c[0]);
                  } while (local_264 != 0);
                }
                if ((-1 < local_22c) && ((local_214 & 4) != 0)) {
                  write_multi_char(0x20,iVar8);
                }
              }
            }
            else {
              if ('p' < (char)local_215) {
                if (local_215 == 0x73) {
LAB_10005404:
                  iVar8 = local_21c;
                  if (local_21c == -1) {
                    iVar8 = 0x7fffffff;
                  }
                  local_228 = (wchar_t *)((int)_ArgList + 4);
                  local_220 = *(wchar_t **)_ArgList;
                  if ((local_214 & 0x810) == 0) {
                    pwVar13 = local_220;
                    if (local_220 == (wchar_t *)0x0) {
                      pwVar13 = (wchar_t *)PTR_s__null__10022860;
                      local_220 = (wchar_t *)PTR_s__null__10022860;
                    }
                    for (; (iVar8 != 0 && (iVar8 = iVar8 + -1, (char)*pwVar13 != '\0'));
                        pwVar13 = (wchar_t *)((int)pwVar13 + 1)) {
                    }
                    local_224 = (int)pwVar13 - (int)local_220;
                  }
                  else {
                    if (local_220 == (wchar_t *)0x0) {
                      local_220 = (wchar_t *)PTR_u__null__10022864;
                    }
                    local_23c = 1;
                    for (pwVar13 = local_220;
                        (iVar8 != 0 && (iVar8 = iVar8 + -1, *pwVar13 != L'\0'));
                        pwVar13 = pwVar13 + 1) {
                    }
                    local_224 = (int)pwVar13 - (int)local_220 >> 1;
                  }
                  goto LAB_10005915;
                }
                if (local_215 == 0x75) goto LAB_100055df;
                if (local_215 != 0x78) goto LAB_10005915;
                local_24c = 0x27;
LAB_10005769:
                local_224 = 0x10;
                if ((local_214 & 0x80) != 0) {
                  local_22f = (char)local_24c + 'Q';
                  local_230 = 0x30;
                  local_234 = 2;
                }
                goto LAB_100055e9;
              }
              if (local_215 == 0x70) {
                local_21c = 8;
LAB_1000573d:
                local_24c = 7;
                goto LAB_10005769;
              }
              if ((char)local_215 < 'e') goto LAB_10005915;
              if ((char)local_215 < 'h') goto LAB_10005396;
              if (local_215 == 0x69) goto LAB_100055d8;
              if (local_215 != 0x6e) {
                if (local_215 != 0x6f) goto LAB_10005915;
                local_224 = 8;
                if ((local_214 & 0x80) != 0) {
                  local_214 = local_214 | 0x200;
                }
                goto LAB_100055e9;
              }
              piVar3 = *(int **)_ArgList;
              local_228 = (wchar_t *)((int)_ArgList + 4);
              iVar8 = __get_printf_count_output();
              if (iVar8 == 0) goto LAB_10004fdb;
              if ((local_214 & 0x20) == 0) {
                *piVar3 = local_22c;
              }
              else {
                *(undefined2 *)piVar3 = (undefined2)local_22c;
              }
              local_244 = 1;
            }
            if (local_248 != (wchar_t *)0x0) {
              _free(local_248);
              local_248 = (wchar_t *)0x0;
            }
          }
          local_215 = *local_240;
          iVar8 = local_270;
          _Format = (char *)local_240;
          _ArgList = (va_list)local_228;
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_10005ad8;
      }
    }
  }
LAB_10004fdb:
  piVar3 = __errno();
  *piVar3 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_10005ad8:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}




/* Library Function - Single Match
    __vsprintf_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_DstBuf == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = _DstBuf;
    local_24._ptr = _DstBuf;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = __output_l(&local_24,_Format,param_3,_ArgList);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}




/* Library Function - Single Match
    _vsprintf
   
   Library: Visual Studio 2008 Release */

int __cdecl _vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsprintf_l(_Dest,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    __vscprintf_helper
    __vscwprintf_helper
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl
FID_conflict___vscprintf_helper
          (undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0xffffffff;
  }
  else {
    local_20 = 0x7fffffff;
    local_18 = 0x42;
    local_1c = 0;
    local_24 = 0;
    uVar2 = (*(code *)param_1)(&local_24,param_2,param_3,param_4);
  }
  return uVar2;
}




/* Library Function - Multiple Matches With Different Base Names
    __vscprintf
    __vscprintf_p
    __vscwprintf
    __vscwprintf_p
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___vscprintf_p(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict___vscprintf_helper(__output_l,(int)_Format,0,_ArgList);
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    __vscprintf_l
    __vscprintf_p_l
    __vscwprintf_l
    __vscwprintf_p_l
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___vscprintf_p_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict___vscprintf_helper(__output_l,(int)_Format,_Locale,_ArgList);
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    __vscprintf
    __vscprintf_p
    __vscwprintf
    __vscwprintf_p
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___vscprintf_p(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict___vscprintf_helper(__output_p_l,(int)_Format,0,_ArgList);
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    __vscprintf_l
    __vscprintf_p_l
    __vscwprintf_l
    __vscwprintf_p_l
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___vscprintf_p_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict___vscprintf_helper(__output_p_l,(int)_Format,_Locale,_ArgList);
  return iVar1;
}




/* Library Function - Single Match
    __vsnprintf_helper
   
   Library: Visual Studio 2008 Release */

int __cdecl
__vsnprintf_helper(undefined *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FILE local_24;
  
  if (param_4 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else if ((param_3 == 0) || (param_2 != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_24._cnt = param_3;
    }
    local_24._flag = 0x42;
    local_24._base = param_2;
    local_24._ptr = param_2;
    iVar2 = (*(code *)param_1)(&local_24,param_4,param_5,param_6);
    if (param_2 != (char *)0x0) {
      if (-1 < iVar2) {
        local_24._cnt = local_24._cnt - 1;
        if (-1 < local_24._cnt) {
          *local_24._ptr = '\0';
          return iVar2;
        }
        iVar3 = __flsbuf(0,&local_24);
        if (iVar3 != -1) {
          return iVar2;
        }
      }
      param_2[param_3 - 1] = '\0';
      iVar2 = (-1 < local_24._cnt) - 2;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}




/* Library Function - Multiple Matches With Different Base Names
    __vsnprintf_c
    __vsprintf_p
   
   Library: Visual Studio 2008 Release */

int __cdecl
FID_conflict___vsnprintf_c(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(__output_l,_DstBuf,_MaxCount,(int)_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    __vsnprintf_c_l
    __vsprintf_p_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__vsnprintf_c_l(char *_DstBuf,size_t _MaxCount,char *param_3,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(__output_l,_DstBuf,_MaxCount,(int)param_3,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* Library Function - Single Match
    __vsprintf_s_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int *piVar1;
  int iVar2;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if ((_DstBuf == (char *)0x0) || (_DstSize == 0)) {
      piVar1 = __errno();
      *piVar1 = 0x16;
    }
    else {
      iVar2 = __vsnprintf_helper(__output_s_l,_DstBuf,_DstSize,(int)_Format,_Locale,_ArgList);
      if (iVar2 < 0) {
        *_DstBuf = '\0';
      }
      if (iVar2 != -2) {
        return iVar2;
      }
      piVar1 = __errno();
      *piVar1 = 0x22;
    }
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}




/* Library Function - Single Match
    _vsprintf_s
   
   Library: Visual Studio 2008 Release */

int __cdecl _vsprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}




/* Library Function - Single Match
    __vsnprintf_s_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,
               va_list _ArgList)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (_Format == (char *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (char *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_10005e79:
      if (_DstSize != 0) {
        piVar2 = __errno();
        if (_MaxCount < _DstSize) {
          iVar1 = *piVar2;
          iVar3 = __vsnprintf_helper(__output_s_l,_DstBuf,_MaxCount + 1,(int)_Format,_Locale,
                                     _ArgList);
          if (iVar3 == -2) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
LAB_10005f09:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          iVar1 = *piVar2;
          iVar3 = __vsnprintf_helper(__output_s_l,_DstBuf,_DstSize,(int)_Format,_Locale,_ArgList);
          _DstBuf[_DstSize - 1] = '\0';
          if (iVar3 != -2) goto LAB_10005f09;
          if (_MaxCount == 0xffffffff) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
        }
        *_DstBuf = '\0';
        if (iVar3 != -2) {
          return -1;
        }
        piVar2 = __errno();
        *piVar2 = 0x22;
        goto LAB_10005f1f;
      }
    }
  }
  else if (_DstBuf != (char *)0x0) goto LAB_10005e79;
  piVar2 = __errno();
  *piVar2 = 0x16;
LAB_10005f1f:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}




/* Library Function - Single Match
    __vsnprintf_s
   
   Library: Visual Studio 2008 Release */

int __cdecl
__vsnprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_SizeInBytes,_MaxCount,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    __vsnprintf_c
    __vsprintf_p
   
   Library: Visual Studio 2008 Release */

int __cdecl
FID_conflict___vsnprintf_c(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(__output_p_l,_DstBuf,_MaxCount,(int)_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* Library Function - Single Match
    __vsprintf_p_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__vsprintf_p_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(__output_p_l,_DstBuf,_MaxCount,(int)_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_10023268 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1002326c = &stack0x00000004;
  _DAT_100231a8 = 0x10001;
  _DAT_10023150 = 0xc0000409;
  _DAT_10023154 = 1;
  local_32c = DAT_10022048;
  local_328 = DAT_1002204c;
  _DAT_1002315c = unaff_retaddr;
  _DAT_10023234 = in_GS;
  _DAT_10023238 = in_FS;
  _DAT_1002323c = in_ES;
  _DAT_10023240 = in_DS;
  _DAT_10023244 = unaff_EDI;
  _DAT_10023248 = unaff_ESI;
  _DAT_1002324c = unaff_EBX;
  _DAT_10023250 = in_EDX;
  _DAT_10023254 = in_ECX;
  _DAT_10023258 = in_EAX;
  _DAT_1002325c = unaff_EBP;
  DAT_10023260 = unaff_retaddr;
  _DAT_10023264 = in_CS;
  _DAT_10023270 = in_SS;
  DAT_100231a0 = IsDebuggerPresent();
  FUN_1000d6d0();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1001e504);
  if (DAT_100231a0 == 0) {
    FUN_1000d6d0();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}




/* Library Function - Single Match
    _wait_a_bit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

uint __cdecl wait_a_bit(DWORD param_1)

{
  uint uVar1;
  
  Sleep(param_1);
  uVar1 = param_1 + 1000;
  if (DAT_10023474 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}




undefined4 __cdecl FUN_100060d3(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10023474;
  DAT_10023474 = param_1;
  return uVar1;
}




/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2008 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_10023474 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10023474 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}




/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2008 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    piVar1 = __calloc_impl(_Count,_Size,(undefined4 *)0x0);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_10023474 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10023474 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}




/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2008 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = _realloc(_Ptr,_NewSize);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (void *)0x0;
    }
    if (DAT_10023474 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10023474 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}




/* Library Function - Single Match
    __recalloc_crt
   
   Library: Visual Studio 2008 Release */

void * __cdecl __recalloc_crt(void *_Ptr,size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = __recalloc(_Ptr,_Count,_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_Size == 0) {
      return (void *)0x0;
    }
    if (DAT_10023474 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10023474 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}




/* Library Function - Single Match
    __crt_waiting_on_module_handle
   
   Library: Visual Studio 2008 Release */

void __cdecl __crt_waiting_on_module_handle(LPCWSTR param_1)

{
  HMODULE pHVar1;
  DWORD dwMilliseconds;
  
  dwMilliseconds = 1000;
  do {
    Sleep(dwMilliseconds);
    pHVar1 = GetModuleHandleW(param_1);
    dwMilliseconds = dwMilliseconds + 1000;
    if (60000 < dwMilliseconds) {
      return;
    }
  } while (pHVar1 == (HMODULE)0x0);
  return;
}




/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2008 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  __NMSG_WRITE(param_1);
  pcVar1 = (code *)__decode_pointer((int)PTR___exit_10022868);
  (*pcVar1)(0xff);
  return;
}




/* Library Function - Single Match
    ___crtCorExitProcess
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___crtCorExitProcess(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}




/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2008 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  ___crtCorExitProcess(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}




void FUN_100062b5(void)

{
  __lock(8);
  return;
}




void FUN_100062be(void)

{
  FUN_100079a6(8);
  return;
}




/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2008 Release */

void __cdecl __initterm(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}




/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2008 Release */

void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}




undefined4 __cdecl FUN_10006308(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (DAT_1002349c == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_1002349c;
    uVar2 = 0;
  }
  return uVar2;
}




undefined4 __cdecl FUN_10006344(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (DAT_10023498 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_10023498;
    uVar2 = 0;
  }
  return uVar2;
}




/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if (DAT_10024d30 != (code *)0x0) {
    BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10024d30);
    if (BVar1 != 0) {
      (*DAT_10024d30)(param_1);
    }
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_1001e190,(undefined4 *)&DAT_1001e1a4);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_10006d0a);
    __initterm((undefined4 *)&DAT_1001e18c);
    if (DAT_10024d34 != (code *)0x0) {
      BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10024d34);
      if (BVar1 != 0) {
        (*DAT_10024d34)(0,2,0);
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x10006522) */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2008 Release */

void __cdecl doexit(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *local_2c;
  int *local_24;
  int *local_20;
  
  __lock(8);
  if (DAT_100234a8 != 1) {
    DAT_100234a4 = 1;
    DAT_100234a0 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar1 = (int *)__decode_pointer(DAT_10024d28);
      if (piVar1 != (int *)0x0) {
        piVar2 = (int *)__decode_pointer(DAT_10024d24);
        local_2c = piVar1;
        local_24 = piVar2;
        local_20 = piVar1;
        while (piVar2 = piVar2 + -1, piVar1 <= piVar2) {
          iVar3 = __encoded_null();
          if (*piVar2 != iVar3) {
            if (piVar2 < piVar1) break;
            pcVar4 = (code *)__decode_pointer(*piVar2);
            iVar3 = __encoded_null();
            *piVar2 = iVar3;
            (*pcVar4)();
            piVar5 = (int *)__decode_pointer(DAT_10024d28);
            piVar6 = (int *)__decode_pointer(DAT_10024d24);
            if ((local_20 != piVar5) || (piVar1 = local_2c, local_24 != piVar6)) {
              piVar2 = piVar6;
              piVar1 = piVar5;
              local_2c = piVar5;
              local_24 = piVar6;
              local_20 = piVar5;
            }
          }
        }
      }
      __initterm((undefined4 *)&DAT_1001e1b4);
    }
    __initterm((undefined4 *)&DAT_1001e1bc);
  }
  FUN_1000651c();
  if (param_3 == 0) {
    DAT_100234a8 = 1;
    FUN_100079a6(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}




void FUN_1000651c(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_100079a6(8);
  }
  return;
}




/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2008 Release */

void __cdecl _exit(int _Code)

{
  doexit(_Code,0,0);
  return;
}




/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2008 Release */

void __cdecl __exit(int param_1)

{
  doexit(param_1,1,0);
  return;
}




/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2008 Release */

void __cdecl __cexit(void)

{
  doexit(0,0,1);
  return;
}




/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2008 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_10004c5d(uVar1);
  FUN_10013503(uVar1);
  FUN_10003ebb(uVar1);
  FUN_100134f4(uVar1);
  FUN_1001325e(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_10006dde();
  __initp_eh_hooks();
  PTR___exit_10022868 = (undefined *)__encode_pointer(0x10006547);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __ioinit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  UINT *pUVar6;
  int iVar7;
  int *piVar8;
  UINT UVar9;
  UINT UVar10;
  _STARTUPINFOA local_68;
  uint local_24;
  byte *local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x100065d5;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = (undefined4 *)__calloc_crt(0x20,0x40);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10006814:
    iVar7 = -1;
  }
  else {
    DAT_10024c0c = 0x20;
    DAT_10024c20 = puVar2;
    for (; puVar2 < DAT_10024c20 + 0x200; puVar2 = puVar2 + 0x10) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 10;
      *(undefined1 *)((int)puVar2 + 0x26) = 10;
      puVar2[0xe] = 0;
      *(undefined1 *)(puVar2 + 0xd) = 0;
    }
    if ((local_68.cbReserved2 != 0) && ((UINT *)local_68.lpReserved2 != (UINT *)0x0)) {
      UVar9 = *(UINT *)local_68.lpReserved2;
      pUVar6 = (UINT *)((int)local_68.lpReserved2 + 4);
      local_20 = (byte *)((int)pUVar6 + UVar9);
      if (0x7ff < (int)UVar9) {
        UVar9 = 0x800;
      }
      local_24 = 1;
      while ((UVar10 = UVar9, (int)DAT_10024c0c < (int)UVar9 &&
             (puVar2 = (undefined4 *)__calloc_crt(0x20,0x40), UVar10 = DAT_10024c0c,
             puVar2 != (undefined4 *)0x0))) {
        (&DAT_10024c20)[local_24] = puVar2;
        DAT_10024c0c = DAT_10024c0c + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x200; puVar2 = puVar2 + 0x10) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar2[0xe] = 0;
          *(undefined1 *)(puVar2 + 0xd) = 0;
          puVar1 = (&DAT_10024c20)[local_24];
        }
        local_24 = local_24 + 1;
      }
      local_24 = 0;
      if (0 < (int)UVar10) {
        do {
          pvVar5 = *(HANDLE *)local_20;
          if ((((pvVar5 != (HANDLE)0xffffffff) && (pvVar5 != (HANDLE)0xfffffffe)) &&
              ((*pUVar6 & 1) != 0)) &&
             (((*pUVar6 & 8) != 0 || (DVar3 = GetFileType(pvVar5), DVar3 != 0)))) {
            puVar2 = (undefined4 *)
                     ((local_24 & 0x1f) * 0x40 + (int)(&DAT_10024c20)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            BVar4 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(puVar2 + 3),4000);
            if (BVar4 == 0) goto LAB_10006814;
            puVar2[2] = puVar2[2] + 1;
          }
          local_24 = local_24 + 1;
          pUVar6 = (UINT *)((int)pUVar6 + 1);
          local_20 = local_20 + 4;
        } while ((int)local_24 < (int)UVar10);
      }
    }
    iVar7 = 0;
    do {
      piVar8 = DAT_10024c20 + iVar7 * 0x10;
      if ((*piVar8 == -1) || (*piVar8 == -2)) {
        *(undefined1 *)(piVar8 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar7 != 1);
        }
        pvVar5 = GetStdHandle(DVar3);
        if (((pvVar5 == (HANDLE)0xffffffff) || (pvVar5 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(pvVar5), DVar3 == 0)) {
          *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          *piVar8 = -2;
        }
        else {
          *piVar8 = (int)pvVar5;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 8;
          }
          BVar4 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(piVar8 + 3),4000);
          if (BVar4 == 0) goto LAB_10006814;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_10024c0c);
    iVar7 = 0;
  }
  return iVar7;
}




/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2008 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_10024c20;
  do {
    uVar3 = *puVar2;
    uVar1 = uVar3;
    if (uVar3 != 0) {
      for (; uVar3 < uVar1 + 0x800; uVar3 = uVar3 + 0x40) {
        if (*(int *)(uVar3 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0xc));
        }
        uVar1 = *puVar2;
      }
      _free((void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x10024d20);
  return;
}




/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2008 Release */

int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_10024d2c == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_100230e8;
  if (DAT_100230e8 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = (undefined4 *)__calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_100230e8;
    DAT_10023488 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_100230e8);
          DAT_100230e8 = (char *)0x0;
          *puVar1 = 0;
          DAT_10024d20 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = (char *)__calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_10023488);
            DAT_10023488 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _strcpy_s(_Dst,sVar2,pcVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2;
      } while( true );
    }
  }
  return -1;
}




void __cdecl FUN_10006949(undefined4 param_1)

{
  DAT_10023498 = param_1;
  return;
}




/* Library Function - Single Match
    _parse_cmdline
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *in_EDX;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  pbVar5 = param_2;
  do {
    if (*in_EDX == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_EDX + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_EDX;
        param_2 = pbVar5 + 1;
      }
      bVar6 = *in_EDX;
      pbVar7 = in_EDX + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_2 != (byte *)0x0) {
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        pbVar7 = in_EDX + 2;
      }
      pbVar5 = param_2;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_100069ec;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_100069ec:
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = pbVar5;
      param_1 = param_1 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        param_2 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_2 = param_2 + 1;
          }
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_2;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_2 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2008 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  uint uVar1;
  undefined4 *puVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_10024d2c == 0) {
    ___initmbctable();
  }
  DAT_100235b4 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_100234b0,0x104);
  DAT_10023498 = &DAT_100234b0;
  if ((DAT_10024d40 == (char *)0x0) || (local_8 = DAT_10024d40, *DAT_10024d40 == '\0')) {
    local_8 = &DAT_100234b0;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) &&
       (puVar2 = (undefined4 *)__malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_1002347c = local_c - 1;
      _DAT_10023480 = puVar2;
      return 0;
    }
  }
  return -1;
}




/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2008 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  WCHAR *pWVar5;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH _Src;
  char *pcVar7;
  void *_Dst;
  LPWCH lpWideCharStr;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_100235b8 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_100235b8 = 1;
      goto LAB_10006c02;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_100235b8 = 2;
    }
  }
  if (DAT_100235b8 != 1) {
    if ((DAT_100235b8 != 2) && (DAT_100235b8 != 0)) {
      return (LPVOID)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPVOID)0x0;
    }
    cVar1 = *_Src;
    pcVar7 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    _Dst = __malloc_crt((size_t)(pcVar7 + (1 - (int)_Src)));
    if (_Dst == (void *)0x0) {
      FreeEnvironmentStringsA(_Src);
      return (LPVOID)0x0;
    }
    _memcpy(_Dst,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    FreeEnvironmentStringsA(_Src);
    return _Dst;
  }
LAB_10006c02:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPVOID)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar5 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar4 = pWVar5;
      pWVar5 = pWVar4 + 1;
    } while (*pWVar5 != L'\0');
    pWVar5 = pWVar4 + 2;
    WVar2 = *pWVar5;
  }
  iVar6 = ((int)pWVar5 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = (LPSTR)0x0;
  if (((_Size != 0) && (lpMultiByteStr = (LPSTR)__malloc_crt(_Size), lpMultiByteStr != (LPSTR)0x0))
     && (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                     (LPBOOL)0x0), local_8 = lpMultiByteStr, iVar6 == 0)) {
    _free(lpMultiByteStr);
    local_8 = (LPSTR)0x0;
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}




/* WARNING: Removing unreachable block (ram,0x10006cf8) */
/* WARNING: Removing unreachable block (ram,0x10006cfe) */
/* WARNING: Removing unreachable block (ram,0x10006d00) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2008 Release */

void __RTC_Initialize(void)

{
  return;
}




/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2008 Release */

int __cdecl __heap_init(void)

{
  int in_stack_00000004;
  
  DAT_100235bc = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_100235bc == (HANDLE)0x0) {
    return 0;
  }
  DAT_10024c08 = 1;
  return 1;
}




/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2008 Release */

void __cdecl __heap_term(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_10024c08 == 3) {
    iVar1 = 0;
    if (0 < DAT_10024be8) {
      puVar2 = (undefined4 *)((int)DAT_10024bec + 0x10);
      do {
        VirtualFree((LPVOID)puVar2[-1],0,0x8000);
        HeapFree(DAT_100235bc,0,(LPVOID)*puVar2);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10024be8);
    }
    HeapFree(DAT_100235bc,0,DAT_10024bec);
  }
  HeapDestroy(DAT_100235bc);
  DAT_100235bc = (HANDLE)0x0;
  return;
}




void FUN_10006dde(void)

{
  return;
}




/* Library Function - Single Match
    _xcptlookup
   
   Library: Visual Studio 2008 Release */

int * __cdecl xcptlookup(int *param_1)

{
  int *piVar1;
  int in_EDX;
  
  piVar1 = param_1;
  do {
    if (*piVar1 == in_EDX) break;
    piVar1 = piVar1 + 3;
  } while (piVar1 < param_1 + DAT_100228c0 * 3);
  if ((param_1 + DAT_100228c0 * 3 <= piVar1) || (*piVar1 != in_EDX)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}




/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2008 Release */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  ulong *puVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  _ptiddata p_Var5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  
  p_Var5 = __getptd_noexit();
  if (p_Var5 != (_ptiddata)0x0) {
    puVar1 = (ulong *)p_Var5->_pxcptacttab;
    puVar6 = puVar1;
    do {
      if (*puVar6 == _ExceptionNum) break;
      puVar6 = puVar6 + 3;
    } while (puVar6 < puVar1 + DAT_100228c0 * 3);
    if ((puVar1 + DAT_100228c0 * 3 <= puVar6) || (*puVar6 != _ExceptionNum)) {
      puVar6 = (ulong *)0x0;
    }
    if ((puVar6 == (ulong *)0x0) || (pcVar2 = (code *)puVar6[2], pcVar2 == (code *)0x0)) {
      p_Var5 = (_ptiddata)0x0;
    }
    else if (pcVar2 == (code *)0x5) {
      puVar6[2] = 0;
      p_Var5 = (_ptiddata)0x1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        pvVar3 = p_Var5->_tpxcptinfoptrs;
        p_Var5->_tpxcptinfoptrs = _ExceptionPtr;
        if (puVar6[1] == 8) {
          if (DAT_100228b4 < DAT_100228b8 + DAT_100228b4) {
            iVar7 = DAT_100228b4 * 0xc;
            iVar8 = DAT_100228b4;
            do {
              *(undefined4 *)(iVar7 + 8 + (int)p_Var5->_pxcptacttab) = 0;
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0xc;
            } while (iVar8 < DAT_100228b8 + DAT_100228b4);
          }
          uVar4 = *puVar6;
          iVar8 = p_Var5->_tfpecode;
          if (uVar4 == 0xc000008e) {
            p_Var5->_tfpecode = 0x83;
          }
          else if (uVar4 == 0xc0000090) {
            p_Var5->_tfpecode = 0x81;
          }
          else if (uVar4 == 0xc0000091) {
            p_Var5->_tfpecode = 0x84;
          }
          else if (uVar4 == 0xc0000093) {
            p_Var5->_tfpecode = 0x85;
          }
          else if (uVar4 == 0xc000008d) {
            p_Var5->_tfpecode = 0x82;
          }
          else if (uVar4 == 0xc000008f) {
            p_Var5->_tfpecode = 0x86;
          }
          else if (uVar4 == 0xc0000092) {
            p_Var5->_tfpecode = 0x8a;
          }
          (*pcVar2)(8,p_Var5->_tfpecode);
          p_Var5->_tfpecode = iVar8;
        }
        else {
          puVar6[2] = 0;
          (*pcVar2)(puVar6[1]);
        }
        p_Var5->_tpxcptinfoptrs = pvVar3;
      }
      p_Var5 = (_ptiddata)0xffffffff;
    }
  }
  return (int)p_Var5;
}




/* Library Function - Single Match
    ___CppXcptFilter
   
   Library: Visual Studio 2008 Release */

int __cdecl ___CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
  if (_ExceptionNum == 0xe06d7363) {
    iVar1 = __XcptFilter(0xe06d7363,_ExceptionPtr);
    return iVar1;
  }
  return 0;
}




/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10022048 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}




/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  PVOID pvVar4;
  int *piVar5;
  int *local_1c;
  undefined4 local_18;
  uint *local_14;
  undefined4 local_10;
  PVOID local_c;
  char local_5;
  
  piVar5 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_10022048);
  local_5 = '\0';
  local_10 = 1;
  iVar1 = (int)param_2 + 0x10;
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  pvVar4 = param_2;
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    *(int ***)((int)param_2 + -4) = &local_1c;
    pvVar4 = *(PVOID *)((int)param_2 + 0xc);
    local_1c = param_1;
    local_18 = param_3;
    if (pvVar4 == (PVOID)0xfffffffe) {
      return local_10;
    }
    do {
      local_14 = (uint *)(piVar5 + (int)pvVar4 * 3 + 4);
      local_c = (PVOID)*local_14;
      if ((undefined *)piVar5[(int)pvVar4 * 3 + 5] != (undefined *)0x0) {
        iVar2 = _EH4_CallFilterFunc((undefined *)piVar5[(int)pvVar4 * 3 + 5]);
        local_5 = '\x01';
        if (iVar2 < 0) {
          local_10 = 0;
          goto LAB_100070c8;
        }
        if (0 < iVar2) {
          if (((*param_1 == -0x1f928c9d) && (DAT_10024c04 != (code *)0x0)) &&
             (BVar3 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10024c04), BVar3 != 0)) {
            (*DAT_10024c04)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(PVOID *)((int)param_2 + 0xc) != pvVar4) {
            _EH4_LocalUnwind((int)param_2,(uint)pvVar4,iVar1,&DAT_10022048);
          }
          *(PVOID *)((int)param_2 + 0xc) = local_c;
          if (*piVar5 != -2) {
            __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
          }
          __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
          _EH4_TransferToHandler((undefined *)local_14[2]);
          goto LAB_1000718c;
        }
      }
      pvVar4 = local_c;
    } while (local_c != (PVOID)0xfffffffe);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
LAB_1000718c:
    if (*(int *)((int)pvVar4 + 0xc) == -2) {
      return local_10;
    }
    _EH4_LocalUnwind((int)pvVar4,0xfffffffe,iVar1,&DAT_10022048);
  }
LAB_100070c8:
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  return local_10;
}




/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2008 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_10022048 == 0xbb40e64e) || ((DAT_10022048 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_10022048 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_10022048 == 0xbb40e64e) {
      DAT_10022048 = 0xbb40e64f;
    }
    else if ((DAT_10022048 & 0xffff0000) == 0) {
      DAT_10022048 = DAT_10022048 | DAT_10022048 << 0x10;
    }
    DAT_1002204c = ~DAT_10022048;
  }
  else {
    DAT_1002204c = ~DAT_10022048;
  }
  return;
}




/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_10023bc4 != 0)) {
    pauVar2 = __VEC_memzero((undefined1 (*) [16])_Dst,_Val,_Size);
    return pauVar2;
  }
  puVar5 = (uint *)_Dst;
  if (3 < _Size) {
    uVar3 = -(int)_Dst & 3;
    sVar4 = _Size;
    if (uVar3 != 0) {
      sVar4 = _Size - uVar3;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar4 & 3;
    uVar3 = sVar4 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}




undefined4 * __cdecl FUN_100072ca(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 2;
  }
  return param_1;
}




/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2008 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}




/* Library Function - Single Match
    int __cdecl strncnt(char const *,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl strncnt(char *param_1,int param_2)

{
  char *in_EAX;
  char *pcVar1;
  
  pcVar1 = param_1;
  for (; (pcVar1 != (char *)0x0 && (*in_EAX != '\0')); in_EAX = in_EAX + 1) {
    pcVar1 = pcVar1 + -1;
  }
  return (int)(param_1 + (-1 - (int)(pcVar1 + -1)));
}




/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint cchWideChar;
  LPCWSTR pWVar6;
  UINT UVar7;
  int *in_ECX;
  char *pcVar8;
  LPSTR lpMultiByteStr;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  if (DAT_100235c0 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_100235c0 = 2;
      }
    }
    else {
      DAT_100235c0 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_1000738f;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_1000738f:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_100235c0 == 2) || (DAT_100235c0 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_100076b1;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_100076b1;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1000768e;
          pcVar5 = &stack0xffffffe4;
        }
        else {
          pcVar5 = (char *)_malloc(local_c + 8);
          if (pcVar5 != (char *)0x0) {
            pcVar5[0] = -0x23;
            pcVar5[1] = -0x23;
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + 8;
          }
        }
        if (pcVar5 != (char *)0x0) {
          _memset(pcVar5,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pcVar5,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(UVar7,param_7,pcVar5,&local_c,(LPSTR)param_5,
                                            (int)param_6);
          }
          __freea(pcVar5);
        }
      }
    }
LAB_1000768e:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_100076b1;
  }
  if (DAT_100235c0 != 1) goto LAB_100076b1;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_100076b1;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      pWVar6 = (LPCWSTR)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_10007437:
        local_10 = pWVar6 + 4;
      }
    }
    else {
      pWVar6 = (LPCWSTR)_malloc(uVar1);
      local_10 = pWVar6;
      if (pWVar6 != (LPCWSTR)0x0) {
        pWVar6[0] = L'\xdddd';
        pWVar6[1] = L'\0';
        goto LAB_10007437;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_100076b1;
  iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)param_4,local_10,cchWideChar);
  if ((iVar3 != 0) &&
     (local_c = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)0x0,0), local_c != 0
     )) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        pWVar6 = (LPCWSTR)0x0;
      }
      else {
        uVar1 = local_c * 2 + 8;
        if (uVar1 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_10007547;
          pWVar6 = (LPCWSTR)&stack0xffffffe4;
        }
        else {
          pWVar6 = (LPCWSTR)_malloc(uVar1);
          if (pWVar6 != (LPCWSTR)0x0) {
            pWVar6[0] = L'\xdddd';
            pWVar6[1] = L'\0';
            pWVar6 = pWVar6 + 4;
          }
        }
      }
      if (pWVar6 != (LPCWSTR)0x0) {
        iVar3 = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,pWVar6,local_c);
        if (iVar3 != 0) {
          lpMultiByteStr = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            lpMultiByteStr = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,pWVar6,local_c,lpMultiByteStr,(int)pcVar5,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(pWVar6);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_10007547:
  __freea(local_10);
LAB_100076b1:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}




/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2008 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwMapFlag,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpDestStr,(char *)_CchDest,_Code_page,_BError,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}




/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  LPCWSTR pWVar3;
  int iVar4;
  ushort *puVar5;
  int *in_ECX;
  LPCWSTR lpWideCharStr;
  void *_Memory;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  local_c = in_ECX;
  if (DAT_100235c4 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_100235c4 = 2;
      }
      goto LAB_10007763;
    }
    DAT_100235c4 = 1;
  }
  else {
LAB_10007763:
    if ((DAT_100235c4 == 2) || (DAT_100235c4 == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      puVar5 = (ushort *)___ansicp(param_6);
      if ((puVar5 != (ushort *)0xffffffff) &&
         (((puVar5 == param_5 ||
           (_Memory = (void *)___convertcp((UINT)param_5,(UINT)puVar5,(char *)param_2,
                                           (uint *)&param_3,(LPSTR)0x0,0), param_2 = (ulong)_Memory,
           _Memory != (void *)0x0)) &&
          (GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4),
          _Memory != (void *)0x0)))) {
        _free(_Memory);
      }
      goto LAB_100078b0;
    }
    if (DAT_100235c4 != 1) goto LAB_100078b0;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_100078b0;
  lpWideCharStr = (LPCWSTR)0x0;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      pWVar3 = (LPCWSTR)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_100077f3:
        lpWideCharStr = pWVar3 + 4;
      }
    }
    else {
      pWVar3 = (LPCWSTR)_malloc(_Size);
      lpWideCharStr = pWVar3;
      if (pWVar3 != (LPCWSTR)0x0) {
        pWVar3[0] = L'\xdddd';
        pWVar3[1] = L'\0';
        goto LAB_100077f3;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar4 = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                                cchWideChar);
    if (iVar4 != 0) {
      local_c = (int *)GetStringTypeW((DWORD)param_1,lpWideCharStr,iVar4,(LPWORD)param_4);
    }
    __freea(lpWideCharStr);
  }
LAB_100078b0:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}




/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)_DWInfoType,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpCharType,(ushort *)_Code_page,_BError,in_stack_00000020,
                     in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}




/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinitlocks(void)

{
  BOOL BVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_100235c8;
  do {
    if ((&DAT_100228d4)[iVar2 * 2] == 1) {
      (&DAT_100228d0)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      BVar1 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(&DAT_100228d0)[iVar2 * 2],4000);
      if (BVar1 == 0) {
        (&DAT_100228d0)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}




/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_100228d0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x100229f0);
  puVar1 = &DAT_100228d0;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x100229f0);
  return;
}




void __cdecl FUN_100079a6(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100228d0)[param_1 * 2]);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  LPCRITICAL_SECTION _Memory;
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_100235bc == 0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_100228d0 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = (LPCRITICAL_SECTION)__malloc_crt(0x18);
    if (_Memory == (LPCRITICAL_SECTION)0x0) {
      piVar1 = __errno();
      *piVar1 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        BVar2 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (BVar2 == 0) {
          _free(_Memory);
          piVar1 = __errno();
          *piVar1 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_10007a8f();
      iVar3 = local_20;
    }
  }
  return iVar3;
}




void FUN_10007a8f(void)

{
  FUN_100079a6(10);
  return;
}




/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2008 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_100228d0)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_100228d0)[_File * 2]);
  return;
}




/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2008 Release */

uint __get_lc_time(void)

{
  LPCWSTR pWVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  void *unaff_ESI;
  localeinfo_struct local_14;
  LPCWSTR local_c;
  LPCWSTR local_8;
  
  local_8 = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x42);
  local_c = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x44);
  if (unaff_ESI == (void *)0x0) {
    return 0xffffffff;
  }
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  uVar2 = ___getlocaleinfo(&local_14,1,local_8,0x31,(void *)((int)unaff_ESI + 4));
  uVar3 = ___getlocaleinfo(&local_14,1,local_8,0x32,(void *)((int)unaff_ESI + 8));
  uVar4 = ___getlocaleinfo(&local_14,1,local_8,0x33,(void *)((int)unaff_ESI + 0xc));
  uVar5 = ___getlocaleinfo(&local_14,1,local_8,0x34,(void *)((int)unaff_ESI + 0x10));
  uVar6 = ___getlocaleinfo(&local_14,1,local_8,0x35,(void *)((int)unaff_ESI + 0x14));
  uVar7 = ___getlocaleinfo(&local_14,1,local_8,0x36,(void *)((int)unaff_ESI + 0x18));
  uVar8 = ___getlocaleinfo(&local_14,1,local_8,0x37,unaff_ESI);
  uVar9 = ___getlocaleinfo(&local_14,1,local_8,0x2a,(void *)((int)unaff_ESI + 0x20));
  uVar10 = ___getlocaleinfo(&local_14,1,local_8,0x2b,(void *)((int)unaff_ESI + 0x24));
  uVar11 = ___getlocaleinfo(&local_14,1,local_8,0x2c,(void *)((int)unaff_ESI + 0x28));
  uVar12 = ___getlocaleinfo(&local_14,1,local_8,0x2d,(void *)((int)unaff_ESI + 0x2c));
  uVar13 = ___getlocaleinfo(&local_14,1,local_8,0x2e,(void *)((int)unaff_ESI + 0x30));
  uVar14 = ___getlocaleinfo(&local_14,1,local_8,0x2f,(void *)((int)unaff_ESI + 0x34));
  uVar15 = ___getlocaleinfo(&local_14,1,local_8,0x30,(void *)((int)unaff_ESI + 0x1c));
  uVar16 = ___getlocaleinfo(&local_14,1,local_8,0x44,(void *)((int)unaff_ESI + 0x38));
  uVar17 = ___getlocaleinfo(&local_14,1,local_8,0x45,(void *)((int)unaff_ESI + 0x3c));
  uVar18 = ___getlocaleinfo(&local_14,1,local_8,0x46,(void *)((int)unaff_ESI + 0x40));
  uVar19 = ___getlocaleinfo(&local_14,1,local_8,0x47,(void *)((int)unaff_ESI + 0x44));
  uVar20 = ___getlocaleinfo(&local_14,1,local_8,0x48,(void *)((int)unaff_ESI + 0x48));
  uVar21 = ___getlocaleinfo(&local_14,1,local_8,0x49,(void *)((int)unaff_ESI + 0x4c));
  uVar22 = ___getlocaleinfo(&local_14,1,local_8,0x4a,(void *)((int)unaff_ESI + 0x50));
  uVar23 = ___getlocaleinfo(&local_14,1,local_8,0x4b,(void *)((int)unaff_ESI + 0x54));
  uVar24 = ___getlocaleinfo(&local_14,1,local_8,0x4c,(void *)((int)unaff_ESI + 0x58));
  uVar25 = ___getlocaleinfo(&local_14,1,local_8,0x4d,(void *)((int)unaff_ESI + 0x5c));
  uVar26 = ___getlocaleinfo(&local_14,1,local_8,0x4e,(void *)((int)unaff_ESI + 0x60));
  uVar27 = ___getlocaleinfo(&local_14,1,local_8,0x4f,(void *)((int)unaff_ESI + 100));
  uVar28 = ___getlocaleinfo(&local_14,1,local_8,0x38,(void *)((int)unaff_ESI + 0x68));
  uVar29 = ___getlocaleinfo(&local_14,1,local_8,0x39,(void *)((int)unaff_ESI + 0x6c));
  uVar30 = ___getlocaleinfo(&local_14,1,local_8,0x3a,(void *)((int)unaff_ESI + 0x70));
  uVar31 = ___getlocaleinfo(&local_14,1,local_8,0x3b,(void *)((int)unaff_ESI + 0x74));
  uVar32 = ___getlocaleinfo(&local_14,1,local_8,0x3c,(void *)((int)unaff_ESI + 0x78));
  uVar33 = ___getlocaleinfo(&local_14,1,local_8,0x3d,(void *)((int)unaff_ESI + 0x7c));
  uVar34 = ___getlocaleinfo(&local_14,1,local_8,0x3e,(void *)((int)unaff_ESI + 0x80));
  uVar35 = ___getlocaleinfo(&local_14,1,local_8,0x3f,(void *)((int)unaff_ESI + 0x84));
  uVar36 = ___getlocaleinfo(&local_14,1,local_8,0x40,(void *)((int)unaff_ESI + 0x88));
  uVar37 = ___getlocaleinfo(&local_14,1,local_8,0x41,(void *)((int)unaff_ESI + 0x8c));
  uVar38 = ___getlocaleinfo(&local_14,1,local_8,0x42,(void *)((int)unaff_ESI + 0x90));
  uVar39 = ___getlocaleinfo(&local_14,1,local_8,0x43,(void *)((int)unaff_ESI + 0x94));
  uVar40 = ___getlocaleinfo(&local_14,1,local_8,0x28,(void *)((int)unaff_ESI + 0x98));
  uVar41 = ___getlocaleinfo(&local_14,1,local_8,0x29,(void *)((int)unaff_ESI + 0x9c));
  uVar42 = ___getlocaleinfo(&local_14,1,local_c,0x1f,(void *)((int)unaff_ESI + 0xa0));
  uVar43 = ___getlocaleinfo(&local_14,1,local_c,0x20,(void *)((int)unaff_ESI + 0xa4));
  uVar44 = ___getlocaleinfo(&local_14,1,local_c,0x1003,(void *)((int)unaff_ESI + 0xa8));
  pWVar1 = local_c;
  uVar45 = ___getlocaleinfo(&local_14,0,local_c,0x1009,(void *)((int)unaff_ESI + 0xb0));
  *(LPCWSTR *)((int)unaff_ESI + 0xac) = pWVar1;
  return uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
         uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 |
         uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 | uVar32 |
         uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 | uVar42 |
         uVar43 | uVar44 | uVar45;
}




/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _free((void *)param_1[1]);
    _free((void *)param_1[2]);
    _free((void *)param_1[3]);
    _free((void *)param_1[4]);
    _free((void *)param_1[5]);
    _free((void *)param_1[6]);
    _free((void *)*param_1);
    _free((void *)param_1[8]);
    _free((void *)param_1[9]);
    _free((void *)param_1[10]);
    _free((void *)param_1[0xb]);
    _free((void *)param_1[0xc]);
    _free((void *)param_1[0xd]);
    _free((void *)param_1[7]);
    _free((void *)param_1[0xe]);
    _free((void *)param_1[0xf]);
    _free((void *)param_1[0x10]);
    _free((void *)param_1[0x11]);
    _free((void *)param_1[0x12]);
    _free((void *)param_1[0x13]);
    _free((void *)param_1[0x14]);
    _free((void *)param_1[0x15]);
    _free((void *)param_1[0x16]);
    _free((void *)param_1[0x17]);
    _free((void *)param_1[0x18]);
    _free((void *)param_1[0x19]);
    _free((void *)param_1[0x1a]);
    _free((void *)param_1[0x1b]);
    _free((void *)param_1[0x1c]);
    _free((void *)param_1[0x1d]);
    _free((void *)param_1[0x1e]);
    _free((void *)param_1[0x1f]);
    _free((void *)param_1[0x20]);
    _free((void *)param_1[0x21]);
    _free((void *)param_1[0x22]);
    _free((void *)param_1[0x23]);
    _free((void *)param_1[0x24]);
    _free((void *)param_1[0x25]);
    _free((void *)param_1[0x26]);
    _free((void *)param_1[0x27]);
    _free((void *)param_1[0x28]);
    _free((void *)param_1[0x29]);
    _free((void *)param_1[0x2a]);
  }
  return;
}




/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2008 Release */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  undefined **ppuVar1;
  undefined **_Memory;
  int iVar2;
  uint uVar3;
  int **ppiVar4;
  
  if (_LocInfo->lc_category[1].locale == (char *)0x0) {
    _Memory = &PTR_DAT_100229f8;
LAB_10008102:
    ppiVar4 = &_LocInfo[1].lc_category[0].wrefcount;
    ppuVar1 = (undefined **)*ppiVar4;
    if (ppuVar1 != &PTR_DAT_100229f8) {
      InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
    }
    *ppiVar4 = (int *)_Memory;
    iVar2 = 0;
  }
  else {
    _Memory = (undefined **)__calloc_crt(1,0xb8);
    if (_Memory != (undefined **)0x0) {
      uVar3 = __get_lc_time();
      if (uVar3 == 0) {
        _Memory[0x2d] = (undefined *)0x1;
        goto LAB_10008102;
      }
      ___free_lc_time(_Memory);
      _free(_Memory);
    }
    iVar2 = 1;
  }
  return iVar2;
}




/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10022ab8) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_10022abc) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10022ac0) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}




/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 2008 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  threadlocinfo *ptVar3;
  threadlocinfo *_Address;
  uint uVar4;
  char *pcVar5;
  LONG LVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  threadlocinfo *ptVar10;
  LPCWSTR _LocaleName;
  localeinfo_struct local_1c;
  uint *local_14;
  uint local_10;
  wchar_t *local_c;
  wchar_t *local_8;
  
  ptVar3 = _LocInfo;
  local_1c.locinfo = _LocInfo;
  local_1c.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].wrefcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].refcount == (int *)0x0)) {
    local_8 = (wchar_t *)0x0;
    local_c = (wchar_t *)0x0;
    _LocInfo = (threadlocinfo *)&PTR_DAT_10022ab8;
LAB_10008307:
    if (ptVar3->locale_name[5] != (wchar_t *)0x0) {
      InterlockedDecrement((LONG *)ptVar3->locale_name[5]);
    }
    if ((ptVar3->locale_name[4] != (wchar_t *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)ptVar3->locale_name[4]), LVar6 == 0)) {
      _free(ptVar3->locale_name[4]);
      _free((void *)ptVar3[1].lc_codepage);
    }
    ptVar3->locale_name[5] = local_8;
    ptVar3->locale_name[4] = local_c;
    ptVar3[1].lc_codepage = (uint)_LocInfo;
    iVar7 = 0;
  }
  else {
    _Address = (threadlocinfo *)__calloc_crt(1,0x30);
    if (_Address != (threadlocinfo *)0x0) {
      piVar8 = (int *)_LocInfo[1].lc_codepage;
      ptVar10 = _Address;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        ptVar10->refcount = *piVar8;
        piVar8 = piVar8 + 1;
        ptVar10 = (threadlocinfo *)&ptVar10->lc_codepage;
      }
      local_c = (wchar_t *)__malloc_crt(4);
      if (local_c != (wchar_t *)0x0) {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].wrefcount == (int *)0x0) {
          _Address->refcount = (int)PTR_DAT_10022ab8;
          _Address->lc_codepage = (uint)PTR_DAT_10022abc;
          local_8 = (wchar_t *)0x0;
          _Address->lc_collate_cp = (uint)PTR_DAT_10022ac0;
        }
        else {
          local_8 = (wchar_t *)__malloc_crt(4);
          if (local_8 == (wchar_t *)0x0) {
            iVar7 = 1;
LAB_1000822d:
            _free(_Address);
            _free(local_c);
            return iVar7;
          }
          local_8[0] = L'\0';
          local_8[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*(ushort *)((int)&_LocInfo->lc_category[2].wrefcount + 2);
          local_10 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xe,_Address);
          uVar4 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xf,&_Address->lc_codepage);
          local_10 = local_10 | uVar4;
          local_14 = &_Address->lc_collate_cp;
          iVar7 = ___getlocaleinfo(&local_1c,1,_LocaleName,0x10,local_14);
          if (iVar7 != 0 || local_10 != 0) {
            ___free_lconv_num((undefined4 *)_Address);
            iVar7 = -1;
            goto LAB_1000822d;
          }
          pcVar5 = (char *)*local_14;
          while (*pcVar5 != '\0') {
            cVar2 = *pcVar5;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              pcVar9 = pcVar5;
              if (cVar2 != ';') goto LAB_100082b7;
              do {
                pcVar1 = pcVar9 + 1;
                *pcVar9 = *pcVar1;
                pcVar9 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar5 = cVar2 + -0x30;
LAB_100082b7:
              pcVar5 = pcVar5 + 1;
            }
          }
        }
        local_c[0] = L'\x01';
        local_c[1] = L'\0';
        _LocInfo = _Address;
        if (local_8 != (wchar_t *)0x0) {
          local_8[0] = L'\x01';
          local_8[1] = L'\0';
        }
        goto LAB_10008307;
      }
      _free(_Address);
    }
    iVar7 = 1;
  }
  return iVar7;
}




/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_10022ac4) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10022ac8) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_10022acc) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10022ad0) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_10022ad4) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10022ad8) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_10022adc) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}




/* Library Function - Single Match
    ___init_monetary
   
   Library: Visual Studio 2008 Release */

int __cdecl ___init_monetary(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  uint *puVar18;
  LONG LVar19;
  int iVar20;
  undefined **_Memory;
  LPCWSTR _LocaleName;
  char *pcVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  localeinfo_struct local_14;
  wchar_t *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_14.locinfo = _LocInfo;
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].refcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].wrefcount == (int *)0x0)) {
    local_8 = (undefined4 *)0x0;
    local_c = (wchar_t *)0x0;
    _Memory = &PTR_DAT_10022ab8;
LAB_1000868f:
    if ((LONG *)_LocInfo[1].refcount != (LONG *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo[1].refcount);
    }
    if ((_LocInfo->locale_name[4] != (wchar_t *)0x0) &&
       (LVar19 = InterlockedDecrement((LONG *)_LocInfo->locale_name[4]), LVar19 == 0)) {
      _free((void *)_LocInfo[1].lc_codepage);
      _free(_LocInfo->locale_name[4]);
    }
    _LocInfo[1].refcount = (int)local_8;
    _LocInfo->locale_name[4] = local_c;
    _LocInfo[1].lc_codepage = (uint)_Memory;
    iVar20 = 0;
  }
  else {
    _Memory = (undefined **)__calloc_crt(1,0x30);
    if (_Memory != (undefined **)0x0) {
      local_c = (wchar_t *)__malloc_crt(4);
      if (local_c == (wchar_t *)0x0) {
        _free(_Memory);
      }
      else {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].refcount == (int *)0x0) {
          ppuVar22 = &PTR_DAT_10022ab8;
          ppuVar23 = _Memory;
          for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *ppuVar23 = *ppuVar22;
            ppuVar22 = ppuVar22 + 1;
            ppuVar23 = ppuVar23 + 1;
          }
LAB_1000865a:
          puVar18 = &_LocInfo[1].lc_codepage;
          *_Memory = *(undefined **)*puVar18;
          _Memory[1] = *(undefined **)(*puVar18 + 4);
          _Memory[2] = *(undefined **)(*puVar18 + 8);
          local_c[0] = L'\x01';
          local_c[1] = L'\0';
          if (local_8 != (undefined4 *)0x0) {
            *local_8 = 1;
          }
          goto LAB_1000868f;
        }
        local_8 = (undefined4 *)__malloc_crt(4);
        if (local_8 == (undefined4 *)0x0) {
          _free(_Memory);
          _free(local_c);
        }
        else {
          *local_8 = 0;
          _LocaleName = (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].refcount;
          iVar20 = ___getlocaleinfo(&local_14,1,_LocaleName,0x15,_Memory + 3);
          iVar3 = ___getlocaleinfo(&local_14,1,_LocaleName,0x14,_Memory + 4);
          iVar4 = ___getlocaleinfo(&local_14,1,_LocaleName,0x16,_Memory + 5);
          iVar5 = ___getlocaleinfo(&local_14,1,_LocaleName,0x17,_Memory + 6);
          iVar6 = ___getlocaleinfo(&local_14,1,_LocaleName,0x18,_Memory + 7);
          iVar7 = ___getlocaleinfo(&local_14,1,_LocaleName,0x50,_Memory + 8);
          iVar8 = ___getlocaleinfo(&local_14,1,_LocaleName,0x51,_Memory + 9);
          iVar9 = ___getlocaleinfo(&local_14,0,_LocaleName,0x1a,_Memory + 10);
          iVar10 = ___getlocaleinfo(&local_14,0,_LocaleName,0x19,(void *)((int)_Memory + 0x29));
          iVar11 = ___getlocaleinfo(&local_14,0,_LocaleName,0x54,(void *)((int)_Memory + 0x2a));
          iVar12 = ___getlocaleinfo(&local_14,0,_LocaleName,0x55,(void *)((int)_Memory + 0x2b));
          iVar13 = ___getlocaleinfo(&local_14,0,_LocaleName,0x56,_Memory + 0xb);
          iVar14 = ___getlocaleinfo(&local_14,0,_LocaleName,0x57,(void *)((int)_Memory + 0x2d));
          iVar15 = ___getlocaleinfo(&local_14,0,_LocaleName,0x52,(void *)((int)_Memory + 0x2e));
          iVar16 = ___getlocaleinfo(&local_14,0,_LocaleName,0x53,(void *)((int)_Memory + 0x2f));
          if (iVar16 == 0 &&
              (((((((((((((iVar20 == 0 && iVar3 == 0) && iVar4 == 0) && iVar5 == 0) && iVar6 == 0)
                      && iVar7 == 0) && iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar11 == 0)
                 && iVar12 == 0) && iVar13 == 0) && iVar14 == 0) && iVar15 == 0)) {
            pcVar17 = _Memory[7];
            while (*pcVar17 != '\0') {
              cVar2 = *pcVar17;
              if ((cVar2 < '0') || ('9' < cVar2)) {
                pcVar21 = pcVar17;
                if (cVar2 != ';') goto LAB_1000862f;
                do {
                  pcVar1 = pcVar21 + 1;
                  *pcVar21 = *pcVar1;
                  pcVar21 = pcVar1;
                } while (*pcVar1 != '\0');
              }
              else {
                *pcVar17 = cVar2 + -0x30;
LAB_1000862f:
                pcVar17 = pcVar17 + 1;
              }
            }
            goto LAB_1000865a;
          }
          ___free_lconv_mon((int)_Memory);
          _free(_Memory);
          _free(local_c);
          _free(local_8);
        }
      }
    }
    iVar20 = 1;
  }
  return iVar20;
}




/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 2008 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  BYTE *pBVar1;
  byte bVar2;
  LONG *lpAddend;
  void *_Dst;
  int iVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  LONG LVar6;
  BYTE *pBVar7;
  BYTE *pBVar8;
  uint uVar9;
  localeinfo_struct local_50;
  wchar_t *local_48;
  LPWORD local_44;
  byte *local_40;
  int *local_3c;
  BYTE *local_38;
  wchar_t *local_34;
  undefined4 *local_30;
  void *local_2c;
  LPCSTR local_28;
  void *local_24;
  BYTE *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  local_30 = (undefined4 *)0x0;
  local_20 = (BYTE *)0x0;
  local_24 = (void *)0x0;
  local_2c = (void *)0x0;
  local_28 = (LPCSTR)0x0;
  local_50.locinfo = _LocInfo;
  local_50.mbcinfo = (pthreadmbcinfo)0x0;
  if (_LocInfo->lc_category[0].wlocale == (wchar_t *)0x0) {
    lpAddend = (LONG *)_LocInfo[1].lc_collate_cp;
    if (lpAddend != (LONG *)0x0) {
      InterlockedDecrement(lpAddend);
    }
    _LocInfo[1].lc_collate_cp = 0;
    _LocInfo[1].lc_time_cp = 0;
    _LocInfo[1].lc_category[0].locale = " ";
    _LocInfo[1].lc_category[0].wlocale = (wchar_t *)&DAT_1001eb40;
    _LocInfo[1].lc_category[0].refcount = (int *)&DAT_1001ecc0;
    _LocInfo->locale_name[3] = (wchar_t *)0x1;
    goto LAB_10008a7f;
  }
  if ((_LocInfo->lc_codepage == 0) &&
     (iVar3 = ___getlocaleinfo(&local_50,0,
                               (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].locale,0x1004,
                               &_LocInfo->lc_codepage), iVar3 != 0)) {
LAB_10008a12:
    _free(local_30);
    _free(local_20);
    _free(local_24);
    _free(local_2c);
  }
  else {
    local_30 = (undefined4 *)__malloc_crt(4);
    local_20 = (BYTE *)__calloc_crt(0x180,2);
    local_24 = __calloc_crt(0x180,1);
    local_2c = __calloc_crt(0x180,1);
    local_28 = (LPCSTR)__calloc_crt(0x101,1);
    if ((local_30 == (undefined4 *)0x0) ||
       ((((local_20 == (BYTE *)0x0 || (local_28 == (LPCSTR)0x0)) || (local_24 == (void *)0x0)) ||
        (local_2c == (void *)0x0)))) goto LAB_10008a12;
    *local_30 = 0;
    iVar3 = 0;
    do {
      local_28[iVar3] = (CHAR)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    BVar4 = GetCPInfo(_LocInfo->lc_codepage,&local_1c);
    if ((BVar4 == 0) || (5 < local_1c.MaxCharSize)) goto LAB_10008a12;
    local_34 = (wchar_t *)(local_1c.MaxCharSize & 0xffff);
    if (((wchar_t *)0x1 < local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar5 = local_1c.LeadByte + 1;
      do {
        bVar2 = *pBVar5;
        if (bVar2 == 0) break;
        for (uVar9 = (uint)pBVar5[-1]; (int)uVar9 <= (int)(uint)bVar2; uVar9 = uVar9 + 1) {
          local_28[uVar9] = ' ';
          bVar2 = *pBVar5;
        }
        pBVar7 = pBVar5 + 1;
        pBVar5 = pBVar5 + 2;
      } while (*pBVar7 != 0);
    }
    local_44 = (LPWORD)(local_20 + 0x100);
    BVar4 = ___crtGetStringTypeA((_locale_t)0x0,1,local_28,0x100,local_44,_LocInfo->lc_codepage,0);
    if (((BVar4 == 0) ||
        (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x100,
                                    local_28 + 1,0xff,(LPSTR)((int)local_24 + 0x81),0xff,
                                    _LocInfo->lc_codepage,0), iVar3 == 0)) ||
       (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x200,
                                   local_28 + 1,0xff,(LPSTR)((int)local_2c + 0x81),0xff,
                                   _LocInfo->lc_codepage,0), pBVar5 = local_20, _Dst = local_24,
       iVar3 == 0)) goto LAB_10008a12;
    local_40 = local_20 + 0xfe;
    local_40[0] = 0;
    local_40[1] = 0;
    local_48 = (wchar_t *)((int)local_24 + 0x80);
    *(undefined1 *)((int)local_24 + 0x7f) = 0;
    *(undefined1 *)((int)local_2c + 0x7f) = 0;
    *(undefined1 *)local_48 = 0;
    local_3c = (int *)((int)local_2c + 0x80);
    *(undefined1 *)local_3c = 0;
    pBVar7 = local_20;
    if ((1 < (int)local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar7 = local_1c.LeadByte + 1;
      do {
        if (*pBVar7 == 0) break;
        local_24 = (void *)(uint)pBVar7[-1];
        if (local_24 <= (void *)(uint)*pBVar7) {
          local_38 = local_20 + (int)local_24 * 2 + 0x100;
          do {
            local_24 = (void *)((int)local_24 + 1);
            local_38[0] = '\0';
            local_38[1] = 0x80;
            local_38 = local_38 + 2;
          } while ((int)local_24 <= (int)(uint)*pBVar7);
        }
        pBVar8 = pBVar7 + 2;
        pBVar1 = pBVar7 + 1;
        pBVar7 = pBVar8;
      } while (*pBVar1 != 0);
    }
    local_20 = pBVar7;
    _memcpy(pBVar5,pBVar5 + 0x200,0xfe);
    _memcpy(_Dst,(void *)((int)_Dst + 0x100),0x7f);
    _memcpy(local_2c,(void *)((int)local_2c + 0x100),0x7f);
    if (((LONG *)_LocInfo[1].lc_collate_cp != (LONG *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)_LocInfo[1].lc_collate_cp), LVar6 == 0)) {
      _free((void *)(_LocInfo[1].lc_time_cp - 0xfe));
      _free(_LocInfo[1].lc_category[0].wlocale + -0x40);
      _free(_LocInfo[1].lc_category[0].refcount + -0x20);
      _free((void *)_LocInfo[1].lc_collate_cp);
    }
    *local_30 = 1;
    _LocInfo[1].lc_collate_cp = (uint)local_30;
    _LocInfo[1].lc_category[0].locale = (char *)local_44;
    _LocInfo[1].lc_time_cp = (uint)local_40;
    _LocInfo[1].lc_category[0].wlocale = local_48;
    _LocInfo[1].lc_category[0].refcount = local_3c;
    _LocInfo->locale_name[3] = local_34;
  }
  _free(local_28);
LAB_10008a7f:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}




/* Library Function - Single Match
    ____mb_cur_max_func
   
   Library: Visual Studio 2008 Release */

int __cdecl ____mb_cur_max_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_10022658) && ((p_Var1->_ownlocale & DAT_10022574) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return (int)ptVar2->locale_name[3];
}




/* Library Function - Single Match
    ____mb_cur_max_l_func
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl ____mb_cur_max_l_func(_locale_t param_1)

{
  int iVar1;
  
  if (param_1 == (_locale_t)0x0) {
    iVar1 = ____mb_cur_max_func();
    return iVar1;
  }
  return (int)param_1->locinfo->locale_name[3];
}




/* Library Function - Single Match
    ____lc_codepage_func
   
   Library: Visual Studio 2008 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_10022658) && ((p_Var1->_ownlocale & DAT_10022574) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}




/* Library Function - Single Match
    __Getdays_l
   
   Library: Visual Studio 2008 Release */

char * __cdecl __Getdays_l(localeinfo_struct *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  errno_t eVar4;
  int iVar5;
  int iVar6;
  int local_1c [2];
  int local_14;
  char local_10;
  char *local_c;
  uint local_8;
  
  iVar5 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_1c,param_1);
  iVar1 = *(int *)(local_1c[0] + 0xd4);
  local_8 = 0;
  do {
    iVar6 = local_8 * 4;
    local_c = (char *)_strlen(*(char **)(iVar6 + 0x1c + iVar1));
    sVar2 = _strlen(*(char **)(iVar6 + iVar1));
    local_8 = local_8 + 1;
    iVar5 = sVar2 + iVar5 + 2 + (int)local_c;
  } while (local_8 < 7);
  pcVar3 = (char *)__malloc_crt(iVar5 + 1);
  local_c = pcVar3;
  if (pcVar3 != (char *)0x0) {
    local_8 = 0;
    do {
      *pcVar3 = ':';
      pcVar3 = pcVar3 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_c + iVar5 + (1 - (int)pcVar3)),
                        *(char **)(iVar1 + local_8 * 4));
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3[sVar2] = ':';
      pcVar3 = pcVar3 + sVar2 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_c + iVar5 + (1 - (int)pcVar3)),
                        *(char **)(iVar1 + 0x1c + local_8 * 4));
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3 = pcVar3 + sVar2;
      local_8 = local_8 + 1;
    } while (local_8 < 7);
    *pcVar3 = '\0';
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return local_c;
}




/* Library Function - Single Match
    __Getmonths_l
   
   Library: Visual Studio 2008 Release */

char * __cdecl __Getmonths_l(localeinfo_struct *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  errno_t eVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_20 [2];
  int local_18;
  char local_14;
  size_t local_10;
  int local_c;
  char *local_8;
  
  iVar5 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_20,param_1);
  iVar1 = *(int *)(local_20[0] + 0xd4);
  puVar6 = (undefined4 *)(iVar1 + 0x38);
  local_c = 0xc;
  do {
    local_8 = (char *)puVar6;
    local_10 = _strlen((char *)puVar6[0xc]);
    sVar2 = _strlen((char *)*puVar6);
    puVar6 = (undefined4 *)((int)local_8 + 4);
    local_c = local_c + -1;
    iVar5 = sVar2 + iVar5 + 2 + local_10;
  } while (local_c != 0);
  local_8 = (char *)puVar6;
  pcVar3 = (char *)__malloc_crt(iVar5 + 1);
  local_8 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    puVar6 = (undefined4 *)(iVar1 + 0x68);
    local_c = 0xc;
    do {
      *pcVar3 = ':';
      pcVar3 = pcVar3 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_8 + iVar5 + (1 - (int)pcVar3)),(char *)puVar6[-0xc]);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3[sVar2] = ':';
      pcVar3 = pcVar3 + sVar2 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_8 + iVar5 + (1 - (int)pcVar3)),(char *)*puVar6);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3 = pcVar3 + sVar2;
      puVar6 = puVar6 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    *pcVar3 = '\0';
  }
  if (local_14 != '\0') {
    *(uint *)(local_18 + 0x70) = *(uint *)(local_18 + 0x70) & 0xfffffffd;
  }
  return local_8;
}




/* Library Function - Single Match
    __Gettnames_l
   
   Library: Visual Studio 2008 Release */

void * __cdecl __Gettnames_l(localeinfo_struct *param_1)

{
  void *_Src;
  undefined4 *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  void *_Dst;
  errno_t eVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_28 [2];
  int local_20;
  char local_1c;
  size_t local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  size_t local_c;
  undefined4 *local_8;
  
  iVar8 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_1);
  _Src = *(void **)(local_28[0] + 0xd4);
  local_8 = (undefined4 *)0x0;
  do {
    iVar7 = (int)local_8 * 4;
    local_18 = _strlen(*(char **)(iVar7 + 0x1c + (int)_Src));
    sVar2 = _strlen(*(char **)(iVar7 + (int)_Src));
    local_8 = (undefined4 *)((int)local_8 + 1);
    iVar8 = sVar2 + iVar8 + 2 + local_18;
  } while (local_8 < 7);
  local_14 = (undefined4 *)((int)_Src + 0x38);
  local_10 = (undefined4 *)0xc;
  do {
    puVar1 = local_14;
    local_18 = _strlen((char *)local_14[0xc]);
    sVar2 = _strlen((char *)*puVar1);
    local_14 = local_14 + 1;
    local_10 = (undefined4 *)((int)local_10 + -1);
    iVar8 = sVar2 + iVar8 + 2 + local_18;
  } while (local_10 != (undefined4 *)0x0);
  sVar2 = _strlen(*(char **)((int)_Src + 0x9c));
  sVar3 = _strlen(*(char **)((int)_Src + 0x98));
  sVar4 = _strlen(*(char **)((int)_Src + 0xa0));
  sVar5 = _strlen(*(char **)((int)_Src + 0xa4));
  local_c = _strlen(*(char **)((int)_Src + 0xa8));
  local_c = sVar3 + iVar8 + sVar2 + sVar4 + sVar5 + 0xbd + local_c;
  _Dst = __malloc_crt(local_c);
  if (_Dst != (void *)0x0) {
    pcVar9 = (char *)((int)_Dst + 0xb8);
    _memcpy(_Dst,_Src,0xb8);
    local_8 = (undefined4 *)0x0;
    local_10 = (undefined4 *)((int)_Src + 0x1c);
    local_14 = (undefined4 *)((int)_Dst - (int)_Src);
    do {
      *(char **)((int)_Dst + (int)local_8 * 4) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)local_10[-7]);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      pcVar9 = pcVar9 + sVar2 + 1;
      *(char **)((int)local_14 + (int)local_10) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)*local_10);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      local_8 = (undefined4 *)((int)local_8 + 1);
      local_10 = local_10 + 1;
      pcVar9 = pcVar9 + sVar2 + 1;
    } while (local_8 < 7);
    local_8 = (undefined4 *)((int)_Dst + 0x68);
    local_10 = (undefined4 *)((int)_Src + 0x38);
    local_18 = 0xc;
    do {
      *(char **)((int)local_10 + (int)local_14) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)*local_10);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      pcVar9 = pcVar9 + sVar2 + 1;
      *local_8 = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)local_10[0xc]);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_18 = local_18 + -1;
      pcVar9 = pcVar9 + sVar2 + 1;
    } while (local_18 != 0);
    *(char **)((int)_Dst + 0x98) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0x98));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0x9c) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0x9c));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa0) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa0));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa4) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa4));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa8) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa8));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return _Dst;
}




/* Library Function - Single Match
    void __cdecl _store_str(char *,char * *,unsigned int *)
   
   Library: Visual Studio 2008 Release */

void __cdecl _store_str(char *param_1,char **param_2,uint *param_3)

{
  int iVar1;
  int *in_EAX;
  int *in_ECX;
  char *in_EDX;
  
  iVar1 = *in_EAX;
  for (; (iVar1 != 0 && (*in_EDX != '\0')); in_EDX = in_EDX + 1) {
    *(char *)*in_ECX = *in_EDX;
    *in_ECX = *in_ECX + 1;
    *in_EAX = *in_EAX + -1;
    iVar1 = *in_EAX;
  }
  return;
}




/* Library Function - Single Match
    void __cdecl _store_num(int,int,char * *,unsigned int *,unsigned int)
   
   Library: Visual Studio 2008 Release */

void __cdecl _store_num(int param_1,int param_2,char **param_3,uint *param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  char *pcVar4;
  uint *in_ECX;
  uint in_EDX;
  char *pcVar5;
  int *unaff_EDI;
  int local_8;
  
  local_8 = 0;
  if (param_1 == 0) {
    if (in_EDX < *in_ECX) {
      iVar3 = in_EDX - 1;
      if (in_EDX != 0) {
        do {
          local_8 = local_8 + 1;
          *(char *)(iVar3 + *unaff_EDI) = (char)(in_EAX % 10) + '0';
          iVar3 = iVar3 + -1;
          in_EAX = in_EAX / 10;
        } while (iVar3 != -1);
      }
      *unaff_EDI = *unaff_EDI + local_8;
      *in_ECX = *in_ECX - local_8;
    }
    else {
      *in_ECX = 0;
    }
  }
  else {
    uVar2 = *in_ECX;
    pcVar5 = (char *)*unaff_EDI;
    do {
      if (uVar2 < 2) break;
      iVar3 = in_EAX / 10;
      *pcVar5 = (char)(in_EAX % 10) + '0';
      pcVar5 = pcVar5 + 1;
      *in_ECX = *in_ECX - 1;
      uVar2 = *in_ECX;
      in_EAX = iVar3;
    } while (0 < iVar3);
    pcVar4 = (char *)*unaff_EDI;
    *unaff_EDI = (int)pcVar5;
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar5 = *pcVar4;
      pcVar5 = pcVar5 + -1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < pcVar5);
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    int __cdecl _expandtime(struct localeinfo_struct *,char,struct tm const *,char * *,unsigned int
   *,struct __lc_time_data *,unsigned int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
_expandtime(localeinfo_struct *param_1,char param_2,tm *param_3,char **param_4,uint *param_5,
           __lc_time_data *param_6,uint param_7)

{
  int iVar1;
  char in_AL;
  int *piVar2;
  char **in_ECX;
  tm *in_EDX;
  uint *unaff_EBX;
  char **unaff_ESI;
  char *unaff_EDI;
  bool bVar3;
  bool bVar4;
  undefined3 in_stack_00000009;
  int iVar5;
  
  if (in_AL < 'Z') {
    if (in_AL == 'Y') {
      if ((-0x76d < in_EDX->tm_year) && (in_EDX->tm_year < 0x1fa4)) goto LAB_100093d8;
LAB_10009340:
      piVar2 = __errno();
      goto LAB_10009468;
    }
    if (in_AL < 'J') {
      if (in_AL == 'I') {
        if ((-1 < in_EDX->tm_hour) && (in_EDX->tm_hour < 0x18)) goto LAB_100093d8;
      }
      else {
        if (in_AL == '\x04') {
          return 1;
        }
        if (in_AL == '\r') {
          return 1;
        }
        if (in_AL == '%') {
          **in_ECX = '%';
          *in_ECX = *in_ECX + 1;
          *_param_2 = *_param_2 - 1;
          return 1;
        }
        if (in_AL == 'A') {
          iVar5 = in_EDX->tm_wday;
joined_r0x1000945c:
          if ((-1 < iVar5) && (iVar5 < 7)) goto LAB_10009563;
        }
        else if (in_AL == 'B') {
          iVar5 = in_EDX->tm_mon;
joined_r0x10009442:
          if ((-1 < iVar5) && (iVar5 < 0xc)) goto LAB_10009563;
        }
        else {
          if (in_AL != 'H') {
            return 0;
          }
          iVar1 = in_EDX->tm_hour;
          if (-1 < iVar1) {
            bVar4 = SBORROW4(iVar1,0x17);
            iVar5 = iVar1 + -0x17;
            bVar3 = iVar1 == 0x17;
            goto LAB_100091f1;
          }
        }
      }
    }
    else {
      if (in_AL == 'M') {
        iVar5 = in_EDX->tm_min;
      }
      else {
        if (in_AL != 'S') {
          if (in_AL == 'U') {
            iVar5 = in_EDX->tm_wday;
          }
          else {
            if (in_AL != 'W') {
              if (in_AL != 'X') {
                return 0;
              }
LAB_1000941f:
              iVar5 = 2;
LAB_10009423:
              iVar5 = _store_winword(param_1,iVar5,in_EDX,in_ECX,_param_2,(__lc_time_data *)param_3)
              ;
              if (iVar5 == 0) {
                return 0;
              }
              return 1;
            }
            iVar5 = in_EDX->tm_wday;
          }
          if ((-1 < iVar5) && (iVar5 < 7)) {
            iVar5 = in_EDX->tm_yday;
joined_r0x1000939f:
            if ((-1 < iVar5) && (iVar5 < 0x16e)) goto LAB_100093d8;
          }
          goto LAB_10009463;
        }
        iVar5 = in_EDX->tm_sec;
      }
      if (-1 < iVar5) {
        bVar4 = SBORROW4(iVar5,0x3b);
        iVar5 = iVar5 + -0x3b;
        bVar3 = iVar5 == 0;
LAB_100091f1:
        if (bVar3 || bVar4 != iVar5 < 0) {
LAB_100093d8:
          _store_num((int)param_4,(int)unaff_EDI,unaff_ESI,unaff_EBX,(uint)in_ECX);
          return 1;
        }
      }
    }
  }
  else if (in_AL < 'n') {
    if (in_AL != 'm') {
      if (in_AL == 'Z') {
LAB_100094ba:
        ___tzset();
        FUN_10013bfd();
LAB_10009563:
        _store_str(unaff_EDI,unaff_ESI,unaff_EBX);
        return 1;
      }
      if (in_AL == 'a') {
        iVar5 = in_EDX->tm_wday;
        goto joined_r0x1000945c;
      }
      if (in_AL == 'b') {
        iVar5 = in_EDX->tm_mon;
        goto joined_r0x10009442;
      }
      if (in_AL == 'c') {
        iVar5 = _store_winword(param_1,(uint)(param_4 != (char **)0x0),in_EDX,in_ECX,_param_2,
                               (__lc_time_data *)param_3);
        if (iVar5 == 0) {
          return 0;
        }
        if (*_param_2 == 0) {
          return 0;
        }
        **in_ECX = ' ';
        *in_ECX = *in_ECX + 1;
        *_param_2 = *_param_2 - 1;
        goto LAB_1000941f;
      }
      if (in_AL != 'd') {
        if (in_AL != 'j') {
          return 0;
        }
        iVar5 = in_EDX->tm_yday;
        goto joined_r0x1000939f;
      }
      if ((0 < in_EDX->tm_mday) && (in_EDX->tm_mday < 0x20)) goto LAB_100093d8;
      goto LAB_10009340;
    }
    if ((-1 < in_EDX->tm_mon) && (in_EDX->tm_mon < 0xc)) goto LAB_100093d8;
  }
  else if (in_AL == 'p') {
    if ((-1 < in_EDX->tm_hour) && (in_EDX->tm_hour < 0x18)) goto LAB_10009563;
  }
  else if (in_AL == 'w') {
    if ((-1 < in_EDX->tm_wday) && (in_EDX->tm_wday < 7)) goto LAB_100093d8;
  }
  else {
    if (in_AL == 'x') {
      if (param_4 == (char **)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 1;
      }
      goto LAB_10009423;
    }
    if (in_AL != 'y') {
      if (in_AL != 'z') {
        return 0;
      }
      goto LAB_100094ba;
    }
    if (-1 < in_EDX->tm_year) goto LAB_100093d8;
  }
LAB_10009463:
  piVar2 = __errno();
LAB_10009468:
  *piVar2 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}




/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _store_winword(struct localeinfo_struct *,int,struct tm const *,char * *,unsigned
   int *,struct __lc_time_data *)
   
   Library: Visual Studio 2008 Release */

int __cdecl
_store_winword(localeinfo_struct *param_1,int param_2,tm *param_3,char **param_4,uint *param_5,
              __lc_time_data *param_6)

{
  code cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_EBX;
  char **ppcVar5;
  __lc_time_data *unaff_ESI;
  uint *unaff_EDI;
  code *_Str1;
  code *pcVar6;
  char *pcVar7;
  char *pcVar8;
  short local_24;
  short local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  code *local_10;
  char **local_c;
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    _Str1 = (code *)param_6->ww_sdatefmt;
  }
  else if (param_2 == 1) {
    _Str1 = (code *)param_6->ww_ldatefmt;
  }
  else {
    _Str1 = (code *)param_6->ww_timefmt;
  }
  if (param_6->refcount != 1) {
    local_10 = GetDateFormatA_exref;
    if (param_2 == 2) {
      local_10 = GetTimeFormatA_exref;
    }
    local_24 = (short)param_3->tm_year + 0x76c;
    local_22 = (short)param_3->tm_mon + 1;
    local_1e = (undefined2)param_3->tm_mday;
    local_1c = (undefined2)param_3->tm_hour;
    local_1a = (undefined2)param_3->tm_min;
    local_18 = (undefined2)param_3->tm_sec;
    local_16 = 0;
    local_14 = (*local_10)(param_6->ww_caltype,0,&local_24,_Str1,0,0);
    if (local_14 != 0) {
      if ((int)(local_14 + 8U) < 0x401) {
        ppcVar5 = (char **)&stack0xffffffd0;
        if (&stack0x00000000 != (undefined1 *)0x30) {
          unaff_EDI = (uint *)0xcccc;
          ppcVar5 = (char **)&stack0xffffffd0;
LAB_10009657:
          ppcVar5 = ppcVar5 + 2;
        }
      }
      else {
        ppcVar5 = (char **)_malloc(local_14 + 8U);
        if (ppcVar5 != (char **)0x0) {
          *ppcVar5 = (char *)0xdddd;
          goto LAB_10009657;
        }
      }
      local_c = ppcVar5;
      if (ppcVar5 != (char **)0x0) {
        iVar2 = (*local_10)(param_6->ww_caltype,0,&local_24,_Str1,ppcVar5,local_14);
        while ((iVar2 = iVar2 + -1, 0 < iVar2 && (*param_5 != 0))) {
          local_14 = iVar2;
          **param_4 = *(char *)ppcVar5;
          *param_4 = *param_4 + 1;
          ppcVar5 = (char **)((int)ppcVar5 + 1);
          *param_5 = *param_5 - 1;
        }
        __freea(local_c);
LAB_100096a9:
        iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return iVar2;
      }
    }
  }
  cVar1 = *_Str1;
joined_r0x100096bf:
  if ((cVar1 == (code)0x0) || (*param_5 == 0)) goto LAB_100096a9;
  local_c = (char **)0x0;
  local_10 = _Str1;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    local_10 = local_10 + 1;
    uVar4 = uVar3 + 1;
  } while (*local_10 == cVar1);
  iVar2 = (int)(char)cVar1;
  if (iVar2 < 0x65) {
    if (iVar2 == 100) {
      if (uVar3 == 0) {
        local_c = (char **)0x1;
      }
      else {
joined_r0x10009842:
        if ((uVar3 != 1) && (uVar3 != 2)) {
joined_r0x10009848:
          if (uVar3 != 3) goto LAB_10009713;
        }
      }
      goto LAB_100099aa;
    }
    if (iVar2 != 0x27) {
      if (iVar2 == 0x41) {
LAB_1000979b:
        iVar2 = ___ascii_stricmp((char *)_Str1,"am/pm");
        if (iVar2 == 0) {
          local_10 = _Str1 + 5;
        }
        else {
          iVar2 = ___ascii_stricmp((char *)_Str1,"a/p");
          if (iVar2 == 0) {
            local_10 = _Str1 + 3;
          }
        }
      }
      else if (iVar2 == 0x48) {
        if (uVar3 != 0) goto joined_r0x1000999a;
        local_c = (char **)0x1;
      }
      else {
        if (iVar2 != 0x4d) {
          if (iVar2 != 0x61) goto LAB_10009713;
          goto LAB_1000979b;
        }
        if (uVar3 != 0) goto joined_r0x10009842;
        local_c = (char **)0x1;
      }
      goto LAB_100099aa;
    }
    _Str1 = _Str1 + uVar4;
    if ((uVar4 & 1) != 0) {
      cVar1 = *_Str1;
      if (cVar1 == (code)0x0) goto LAB_100096a9;
      do {
        if (*param_5 == 0) break;
        if (cVar1 == (code)0x27) {
          _Str1 = _Str1 + 1;
          break;
        }
        iVar2 = __isleadbyte_l((int)(char)cVar1,param_1);
        pcVar6 = _Str1;
        if ((iVar2 != 0) && (1 < *param_5)) {
          pcVar6 = _Str1 + 1;
          if (*pcVar6 == (code)0x0) goto LAB_100096a9;
          **param_4 = (char)*_Str1;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
        }
        **param_4 = (char)*pcVar6;
        *param_4 = *param_4 + 1;
        _Str1 = pcVar6 + 1;
        *param_5 = *param_5 - 1;
        cVar1 = *_Str1;
      } while (cVar1 != (code)0x0);
    }
  }
  else {
    if (iVar2 == 0x68) {
      if (uVar3 == 0) {
        local_c = (char **)0x1;
      }
      else {
joined_r0x1000999a:
        if (uVar4 != 2) {
LAB_10009713:
          iVar2 = __isleadbyte_l(iVar2,param_1);
          pcVar6 = _Str1;
          if ((iVar2 != 0) && (1 < *param_5)) {
            pcVar6 = _Str1 + 1;
            if (*pcVar6 == (code)0x0) goto LAB_100096a9;
            **param_4 = (char)*_Str1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          **param_4 = (char)*pcVar6;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = pcVar6 + 1;
          goto LAB_1000974a;
        }
      }
    }
    else if (iVar2 == 0x6d) {
      if (uVar3 != 0) goto joined_r0x1000999a;
      local_c = (char **)0x1;
    }
    else if (iVar2 == 0x73) {
      if (uVar3 != 0) goto joined_r0x1000999a;
      local_c = (char **)0x1;
    }
    else {
      if (iVar2 == 0x74) {
        if (param_3->tm_hour < 0xc) {
          pcVar8 = param_6->ampm[0];
        }
        else {
          pcVar8 = param_6->ampm[1];
        }
        if ((uVar4 == 1) && (*param_5 != 0)) {
          iVar2 = __isleadbyte_l((int)*pcVar8,param_1);
          pcVar7 = pcVar8;
          if ((iVar2 != 0) && (1 < *param_5)) {
            pcVar7 = pcVar8 + 1;
            if (*pcVar7 == '\0') goto LAB_100096a9;
            **param_4 = *pcVar8;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          **param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = local_10;
          goto LAB_1000974a;
        }
        while ((_Str1 = local_10, *pcVar8 != '\0' && (*param_5 != 0))) {
          iVar2 = __isleadbyte_l((int)*pcVar8,param_1);
          pcVar7 = pcVar8;
          if ((iVar2 != 0) && (1 < *param_5)) {
            pcVar7 = pcVar8 + 1;
            if (*pcVar7 == '\0') goto LAB_100096a9;
            **param_4 = *pcVar8;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          **param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          pcVar8 = pcVar7 + 1;
          *param_5 = *param_5 - 1;
        }
        goto LAB_1000974a;
      }
      if (iVar2 != 0x79) goto LAB_10009713;
      if (uVar3 != 1) goto joined_r0x10009848;
    }
LAB_100099aa:
    iVar2 = _expandtime(param_1,(char)param_5,(tm *)param_6,local_c,unaff_EDI,unaff_ESI,unaff_EBX);
    _Str1 = local_10;
    if (iVar2 == 0) goto LAB_100096a9;
  }
LAB_1000974a:
  cVar1 = *_Str1;
  goto joined_r0x100096bf;
}




/* Library Function - Single Match
    __Strftime_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__Strftime_l(char *param_1,uint param_2,char *param_3,int param_4,tm *param_5,
            localeinfo_struct *param_6)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint unaff_EBX;
  uint *unaff_ESI;
  char *pcVar4;
  __lc_time_data *unaff_EDI;
  localeinfo_struct local_24;
  int local_1c;
  char local_18;
  char *local_14;
  tm *local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_14 = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_24,param_6);
  if (param_1 == (char *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_2 == 0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  *param_1 = '\0';
  if (param_3 != (char *)0x0) {
    if (param_5 == (tm *)0x0) {
      param_5 = (tm *)local_24.locinfo[1].lc_category[0].wrefcount;
    }
    local_8 = param_2;
    local_10 = param_5;
    if (param_2 != 0) {
      do {
        cVar1 = *param_3;
        if (cVar1 == '\0') break;
        if (cVar1 == '%') {
          if (param_4 == 0) goto LAB_10009b4d;
          pcVar4 = param_3 + 1;
          cVar1 = *pcVar4;
          if (cVar1 == '#') {
            pcVar4 = param_3 + 2;
          }
          iVar3 = _expandtime(&local_24,(char)&local_8,local_10,(char **)(uint)(cVar1 == '#'),
                              unaff_ESI,unaff_EDI,unaff_EBX);
          if (iVar3 == 0) {
            if (local_8 != 0) {
              local_c = 1;
            }
            goto LAB_10009b23;
          }
        }
        else {
          iVar3 = __isleadbyte_l((int)cVar1,&local_24);
          pcVar4 = param_3;
          if ((iVar3 != 0) && (1 < local_8)) {
            pcVar4 = param_3 + 1;
            if (*pcVar4 == '\0') {
              local_c = 1;
              goto LAB_10009b23;
            }
            *param_1 = *param_3;
            param_1 = param_1 + 1;
            local_8 = local_8 - 1;
          }
          *param_1 = *pcVar4;
          param_1 = param_1 + 1;
          local_8 = local_8 - 1;
        }
        param_3 = pcVar4 + 1;
      } while (local_8 != 0);
      if (local_8 != 0) {
        *param_1 = '\0';
        if (local_18 == '\0') {
          return param_2 - local_8;
        }
        *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
        return param_2 - local_8;
      }
    }
LAB_10009b23:
    *local_14 = '\0';
    if ((local_c == 0) && (local_8 == 0)) {
      piVar2 = __errno();
      *piVar2 = 0x22;
      goto LAB_10009b65;
    }
  }
LAB_10009b4d:
  piVar2 = __errno();
  *piVar2 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_10009b65:
  if (local_18 != '\0') {
    *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
  }
  return 0;
}




/* Library Function - Single Match
    __strftime_l
   
   Library: Visual Studio 2008 Release */

size_t __cdecl __strftime_l(char *_Buf,size_t _Max_size,char *_Format,tm *_Tm,_locale_t _Locale)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(_Buf,_Max_size,_Format,(int)_Tm,(tm *)0x0,_Locale);
  return sVar1;
}




/* Library Function - Single Match
    _strftime
   
   Library: Visual Studio 2008 Release */

size_t __cdecl _strftime(char *_Buf,size_t _SizeInBytes,char *_Format,tm *_Tm)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(_Buf,_SizeInBytes,_Format,(int)_Tm,(tm *)0x0,(localeinfo_struct *)0x0);
  return sVar1;
}




/* Library Function - Single Match
    __Strftime
   
   Library: Visual Studio 2008 Release */

size_t __cdecl __Strftime(char *param_1,size_t _Maxsize,char *param_3,tm *param_4,void *param_5)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(param_1,_Maxsize,param_3,(int)param_4,(tm *)param_5,(localeinfo_struct *)0x0)
  ;
  return sVar1;
}




/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        do {
          cVar1 = *_Src;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          _Src = _Src + 1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes != 0) {
          return 0;
        }
        *_Dst = '\0';
        piVar2 = __errno();
        eVar4 = 0x22;
        *piVar2 = 0x22;
        goto LAB_10009c1f;
      }
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_10009c1f:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}




/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio 2008 Release */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = (char *)((byte *)_Control + 1);
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = (char *)((byte *)_Str + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}




/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  rsize_t rVar4;
  errno_t eVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
    }
    else {
LAB_10009cec:
      if (_SizeInBytes != 0) {
        if (_MaxCount == 0) {
          *_Dst = '\0';
          return 0;
        }
        if (_Src != (char *)0x0) {
          pcVar3 = _Dst;
          rVar4 = _SizeInBytes;
          if (_MaxCount == 0xffffffff) {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if (cVar1 == '\0') break;
              rVar4 = rVar4 - 1;
            } while (rVar4 != 0);
          }
          else {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if ((cVar1 == '\0') || (rVar4 = rVar4 - 1, rVar4 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pcVar3 = '\0';
            }
          }
          if (rVar4 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInBytes - 1] = '\0';
            return 0x50;
          }
          *_Dst = '\0';
          piVar2 = __errno();
          eVar5 = 0x22;
          *piVar2 = 0x22;
          goto LAB_10009cfd;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_10009cec;
  piVar2 = __errno();
  eVar5 = 0x16;
  *piVar2 = 0x16;
LAB_10009cfd:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}




/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        cVar1 = *_Src;
        *pcVar3 = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
        pcVar3 = pcVar3 + 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      piVar2 = __errno();
      eVar4 = 0x22;
      *piVar2 = 0x22;
      goto LAB_10009d9d;
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_10009d9d:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}




/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio 2008 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_10009e34;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10009e00;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10009e34;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < ((byte *)_Str2)[1];
    if (bVar4 != ((byte *)_Str2)[1]) goto LAB_10009e34;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = (char *)((byte *)_Str2 + 2);
  }
LAB_10009e00:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < ((byte *)_Str2)[1];
    if (bVar4 != ((byte *)_Str2)[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < ((byte *)_Str2)[2];
    if (bVar4 != ((byte *)_Str2)[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < ((byte *)_Str2)[3];
    if (bVar3 != ((byte *)_Str2)[3]) break;
    _Str2 = (char *)((byte *)_Str2 + 4);
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_10009e34:
  return (uint)bVar5 * -2 + 1;
}




/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_1000a063_caseD_2;
        case 3:
          goto switchD_1000a063_caseD_3;
        }
        goto switchD_1000a063_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1000a063_caseD_0;
      case 1:
        goto switchD_1000a063_caseD_1;
      case 2:
        goto switchD_1000a063_caseD_2;
      case 3:
        goto switchD_1000a063_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1000a063_caseD_2;
            case 3:
              goto switchD_1000a063_caseD_3;
            }
            goto switchD_1000a063_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1000a063_caseD_2;
            case 3:
              goto switchD_1000a063_caseD_3;
            }
            goto switchD_1000a063_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1000a063_caseD_2;
            case 3:
              goto switchD_1000a063_caseD_3;
            }
            goto switchD_1000a063_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_1000a063_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_1000a063_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_1000a063_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_1000a063_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10023bc4 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy((undefined4 *)_Dst,(undefined4 *)_Src,_Size);
    return puVar1;
  }
  puVar1 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_10009edc_caseD_2;
      case 3:
        goto switchD_10009edc_caseD_3;
      }
      goto switchD_10009edc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_10009edc_caseD_0;
    case 1:
      goto switchD_10009edc_caseD_1;
    case 2:
      goto switchD_10009edc_caseD_2;
    case 3:
      goto switchD_10009edc_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10009edc_caseD_2;
          case 3:
            goto switchD_10009edc_caseD_3;
          }
          goto switchD_10009edc_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10009edc_caseD_2;
          case 3:
            goto switchD_10009edc_caseD_3;
          }
          goto switchD_10009edc_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10009edc_caseD_2;
          case 3:
            goto switchD_10009edc_caseD_3;
          }
          goto switchD_10009edc_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_10009edc_caseD_1:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    return _Dst;
  case 2:
switchD_10009edc_caseD_2:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_10009edc_caseD_3:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_10009edc_caseD_0:
  return _Dst;
}




/* Library Function - Single Match
    _TranslateName
   
   Library: Visual Studio 2008 Release */

bool __cdecl _TranslateName(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      if (iVar2 == 0) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = __stricmp((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}




/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2008 Release */

void __fastcall _ProcessCodePage(CHAR *param_1)

{
  int iVar1;
  int unaff_EDI;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  if (((param_1 == (CHAR *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp(param_1,"ACP"), iVar1 == 0)) {
    iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),0x1004,local_10,8);
    if (iVar1 == 0) goto LAB_1000a2ba;
    iVar1 = _strcmp(local_10,"0");
    if (iVar1 == 0) {
      GetACP();
      goto LAB_1000a2ba;
    }
LAB_1000a2b0:
    param_1 = local_10;
  }
  else {
    iVar1 = _strcmp(param_1,"OCP");
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),0xb,local_10,8);
      if (iVar1 == 0) goto LAB_1000a2ba;
      goto LAB_1000a2b0;
    }
  }
  _atol(param_1);
LAB_1000a2ba:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_1001f6c0 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}




/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2008 Release */

int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *param_2, cVar1 != '\0') {
    param_2 = param_2 + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 + -7;
    }
    iVar2 = iVar2 * 0x10 + -0x30 + (int)cVar1;
  }
  return iVar2;
}




/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2008 Release */

int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}




/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2008 Release */

void _CountryEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 extraout_ECX;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
  }
  else {
    iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
    if ((iVar3 == 0) && (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 4;
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
      (p_Var2->_setloc_data)._cachecp = Locale;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2008 Release */

void __thiscall _TestDefaultLanguage(void *this,uint param_1,int param_2)

{
  char *_Str;
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  iVar1 = GetLocaleInfoA(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (((iVar1 != 0) && (uVar2 = _LcidFromHexString(extraout_ECX,local_80), param_1 != uVar2)) &&
     (param_2 != 0)) {
                    /* WARNING: Load size is inaccurate */
    _Str = *this;
    _GetPrimaryLen(extraout_ECX_00,_Str);
    _strlen(_Str);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2008 Release */

void _LangCountryEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  size_t sVar4;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  _setloc_struct *this;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
LAB_1000a4d1:
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_1000a63f;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar3 == 0) goto LAB_1000a4d1;
    iVar3 = __stricmp((char *)this->pchLanguage,local_80);
    if (iVar3 == 0) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var2->_setloc_data)._cachecp = Locale;
LAB_1000a581:
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
    }
    else if (((p_Var2->_setloc_data).iLocState & 2) == 0) {
      sVar4 = (p_Var2->_setloc_data).iPrimaryLen;
      if ((sVar4 == 0) || (iVar3 = __strnicmp((char *)this->pchLanguage,local_80,sVar4), iVar3 != 0)
         ) {
        if ((((p_Var2->_setloc_data).iLocState & 1U) == 0) &&
           (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
          (p_Var2->_setloc_data).iLocState = extraout_EDX | 1;
          goto LAB_1000a581;
        }
      }
      else {
        piVar1 = &(p_Var2->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 2;
        *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
        sVar4 = _strlen((char *)this->pchLanguage);
        if (sVar4 == (p_Var2->_setloc_data).iPrimaryLen) {
          (p_Var2->_setloc_data)._cachecp = Locale;
        }
      }
    }
  }
  if (((p_Var2->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_1000a63f;
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) goto LAB_1000a4d1;
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var2->_setloc_data).iPrimaryLen != 0) &&
         (sVar4 = _strlen((char *)this->pchLanguage), sVar4 == (p_Var2->_setloc_data).iPrimaryLen))
      {
        iVar3 = 1;
        goto LAB_1000a617;
      }
      goto LAB_1000a625;
    }
    (p_Var2->_setloc_data).iLocState = (p_Var2->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_1000a63f;
    iVar3 = 0;
LAB_1000a617:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_1000a63f;
LAB_1000a625:
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var2->_setloc_data)._cachecp == 0) {
    (p_Var2->_setloc_data)._cachecp = Locale;
  }
LAB_1000a63f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2008 Release */

void _LanguageEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 extraout_ECX;
  _setloc_struct *this;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_1000a701;
  }
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      iVar3 = 1;
      goto LAB_1000a6de;
    }
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_1000a701;
    iVar3 = 0;
LAB_1000a6de:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_1000a701;
  }
  piVar1 = &(p_Var2->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var2->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
LAB_1000a701:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2008 Release */

void _GetLcidFromLangCountry(void)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  char *_Str;
  
  _Str = (char *)*unaff_ESI;
  sVar2 = _strlen(_Str);
  unaff_ESI[4] = (uint)(sVar2 == 3);
  sVar2 = _strlen((char *)unaff_ESI[1]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = (uint)(sVar2 == 3);
  if (unaff_ESI[4] == 0) {
    iVar3 = _GetPrimaryLen(_Str,(char *)*unaff_ESI);
  }
  else {
    iVar3 = 2;
  }
  unaff_ESI[3] = iVar3;
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  uVar1 = unaff_ESI[2];
  if ((((uVar1 & 0x100) == 0) || ((uVar1 & 0x200) == 0)) || ((uVar1 & 7) == 0)) {
    unaff_ESI[2] = 0;
  }
  return;
}




/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Library: Visual Studio 2008 Release */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  char *_Str;
  
  _Str = (char *)*unaff_ESI;
  sVar1 = _strlen(_Str);
  unaff_ESI[4] = (uint)(sVar1 == 3);
  if ((sVar1 == 3) == 0) {
    iVar2 = _GetPrimaryLen(_Str,(char *)*unaff_ESI);
  }
  else {
    iVar2 = 2;
  }
  unaff_ESI[3] = iVar2;
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((*(byte *)(unaff_ESI + 2) & 4) == 0) {
    unaff_ESI[2] = 0;
  }
  return;
}




/* Library Function - Single Match
    ___get_qualified_locale
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr)

{
  int *piVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  _ptiddata p_Var5;
  undefined3 extraout_var;
  size_t sVar6;
  LCID LVar7;
  uint _Value;
  BOOL BVar8;
  errno_t eVar9;
  int iVar10;
  _setloc_struct *p_Var11;
  
  p_Var5 = __getptd();
  p_Var11 = &p_Var5->_setloc_data;
  if (_LpInStr == (LPLC_STRINGS)0x0) {
    piVar1 = &(p_Var5->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x104;
LAB_1000a8c5:
    LVar7 = GetUserDefaultLCID();
    (p_Var5->_setloc_data)._cachecp = LVar7;
    *(LCID *)(p_Var5->_setloc_data)._cachein = LVar7;
  }
  else {
    pwVar3 = _LpInStr->szLanguage + 0x20;
    ppwVar2 = &(p_Var5->_setloc_data).pchCountry;
    p_Var11->pchLanguage = _LpInStr->szLanguage;
    *ppwVar2 = pwVar3;
    if ((pwVar3 != (wchar_t *)0x0) && ((char)*pwVar3 != '\0')) {
      _TranslateName(0x1001f608,0x16,ppwVar2);
    }
    (p_Var5->_setloc_data).iLocState = 0;
    if ((p_Var11->pchLanguage == (wchar_t *)0x0) || ((char)*p_Var11->pchLanguage == '\0')) {
      pwVar3 = *ppwVar2;
      if ((pwVar3 == (wchar_t *)0x0) || ((char)*pwVar3 == '\0')) {
        (p_Var5->_setloc_data).iLocState = 0x104;
        goto LAB_1000a8c5;
      }
      sVar6 = _strlen((char *)pwVar3);
      (p_Var5->_setloc_data).bAbbrevCountry = (uint)(sVar6 == 3);
      EnumSystemLocalesA(_CountryEnumProc_4,1);
      if (((p_Var5->_setloc_data).iLocState & 4) == 0) {
        (p_Var5->_setloc_data).iLocState = 0;
      }
    }
    else {
      if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
        _GetLcidFromLanguage();
      }
      else {
        _GetLcidFromLangCountry();
      }
      if ((p_Var5->_setloc_data).iLocState != 0) goto LAB_1000a8db;
      bVar4 = _TranslateName(0x1001f400,0x40,&p_Var11->pchLanguage);
      if (CONCAT31(extraout_var,bVar4) != 0) {
        if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
    }
  }
  if ((p_Var5->_setloc_data).iLocState == 0) {
    return 0;
  }
LAB_1000a8db:
  _Value = _ProcessCodePage((CHAR *)(-(uint)(_LpInStr != (LPLC_STRINGS)0x0) &
                                    (uint)_LpInStr->szCountry));
  if ((((_Value == 0) || (_Value == 65000)) || (_Value == 0xfde9)) ||
     ((BVar8 = IsValidCodePage(_Value & 0xffff), BVar8 == 0 ||
      (BVar8 = IsValidLocale((p_Var5->_setloc_data)._cachecp,1), BVar8 == 0)))) {
    return 0;
  }
  if (_LpCodePage != (UINT *)0x0) {
    *(short *)_LpCodePage = (short)(p_Var5->_setloc_data)._cachecp;
    *(wchar_t *)((int)_LpCodePage + 2) = (p_Var5->_setloc_data)._cachein[0];
    *(short *)(_LpCodePage + 1) = (short)_Value;
  }
  if (_LpOutStr != (LPLC_STRINGS)0x0) {
    if ((short)*_LpCodePage == 0x814) {
      eVar9 = _strcpy_s((char *)_LpOutStr,0x40,"Norwegian-Nynorsk");
      if (eVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    else {
      iVar10 = GetLocaleInfoA((p_Var5->_setloc_data)._cachecp,0x1001,(LPSTR)_LpOutStr,0x40);
      if (iVar10 == 0) {
        return 0;
      }
    }
    iVar10 = GetLocaleInfoA(*(LCID *)(p_Var5->_setloc_data)._cachein,0x1002,
                            (LPSTR)(_LpOutStr->szLanguage + 0x20),0x40);
    if (iVar10 == 0) {
      return 0;
    }
    __itoa_s(_Value,(char *)_LpOutStr->szCountry,0x10,10);
  }
  return 1;
}




/* Library Function - Single Match
    _memcmp
   
   Library: Visual Studio 2008 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (_Size == 0) {
    return 0;
  }
  if (_Size == 1) {
                    /* WARNING: Load size is inaccurate */
    uVar2 = (uint)*_Buf1;
                    /* WARNING: Load size is inaccurate */
    uVar3 = (uint)*_Buf2;
LAB_1000d4a0:
    if (uVar2 == uVar3) {
      return 0;
    }
    return (uint)(0 < (int)(uVar2 - uVar3)) * 2 + -1;
  }
  if (_Size == 2) {
                    /* WARNING: Load size is inaccurate */
    uVar2 = (uint)*_Buf1;
                    /* WARNING: Load size is inaccurate */
    uVar3 = (uint)*_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    goto LAB_1000d4a0;
  }
  if (_Size == 3) {
                    /* WARNING: Load size is inaccurate */
    uVar2 = (uint)*_Buf1;
                    /* WARNING: Load size is inaccurate */
    uVar3 = (uint)*_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    goto LAB_1000d4a0;
  }
  if (_Size == 4) {
                    /* WARNING: Load size is inaccurate */
    uVar2 = (uint)*_Buf1;
                    /* WARNING: Load size is inaccurate */
    uVar3 = (uint)*_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 3);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 3);
    goto LAB_1000d4a0;
  }
  for (; 0x1f < _Size; _Size = _Size - 0x20) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    if (*_Buf1 == *_Buf2) {
      iVar1 = 0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      uVar3 = (uint)*_Buf1;
                    /* WARNING: Load size is inaccurate */
      uVar2 = (uint)*_Buf2;
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 1);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 1);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 2);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 2);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 3) - (uint)*(byte *)((int)_Buf2 + 3);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 4) == *(int *)((int)_Buf2 + 4)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 4);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 4);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 5);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 5);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 6);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 6);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 7) - (uint)*(byte *)((int)_Buf2 + 7);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 8) == *(int *)((int)_Buf2 + 8)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 8);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 8);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 9);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 9);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 10);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0xb) - (uint)*(byte *)((int)_Buf2 + 0xb);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0xc) == *(int *)((int)_Buf2 + 0xc)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xc);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xc);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xd);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xd);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xe);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xe);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0xf) - (uint)*(byte *)((int)_Buf2 + 0xf);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x10) == *(int *)((int)_Buf2 + 0x10)) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x10);
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x11);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x11);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x12);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x12);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0x13) - (uint)*(byte *)((int)_Buf2 + 0x13);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x14) == *(int *)((int)_Buf2 + 0x14)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x14);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x14);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x15);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x15);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x16);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x16);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0x17) - (uint)*(byte *)((int)_Buf2 + 0x17);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x18) == *(int *)((int)_Buf2 + 0x18)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x18);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x18);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x19);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x19);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1a);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1a);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0x1b) - (uint)*(byte *)((int)_Buf2 + 0x1b);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x1c) == *(int *)((int)_Buf2 + 0x1c)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1c);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1c);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1d);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1d);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1e);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1e);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0x1f) - (uint)*(byte *)((int)_Buf2 + 0x1f);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    _Buf1 = (void *)((int)_Buf1 + 0x20);
    _Buf2 = (void *)((int)_Buf2 + 0x20);
  }
  switch(_Size) {
  default:
    goto switchD_1000c40e_caseD_0;
  case 1:
    goto switchD_1000c40e_caseD_1;
  case 2:
    goto switchD_1000c40e_caseD_2;
  case 3:
    goto switchD_1000c40e_caseD_3;
  case 4:
    goto switchD_1000c40e_caseD_4;
  case 5:
    goto switchD_1000c40e_caseD_5;
  case 6:
    goto switchD_1000c40e_caseD_6;
  case 7:
    goto switchD_1000c40e_caseD_7;
  case 8:
    goto switchD_1000c40e_caseD_8;
  case 9:
    goto switchD_1000c40e_caseD_9;
  case 10:
    goto switchD_1000c40e_caseD_a;
  case 0xb:
    goto switchD_1000c40e_caseD_b;
  case 0xc:
    goto switchD_1000c40e_caseD_c;
  case 0xd:
    goto switchD_1000c40e_caseD_d;
  case 0xe:
    goto switchD_1000c40e_caseD_e;
  case 0xf:
    goto switchD_1000c40e_caseD_f;
  case 0x10:
    goto switchD_1000c40e_caseD_10;
  case 0x11:
    goto switchD_1000c40e_caseD_11;
  case 0x12:
    goto switchD_1000c40e_caseD_12;
  case 0x13:
    goto switchD_1000c40e_caseD_13;
  case 0x14:
    goto switchD_1000c40e_caseD_14;
  case 0x15:
    goto switchD_1000c40e_caseD_15;
  case 0x16:
    goto switchD_1000c40e_caseD_16;
  case 0x17:
    goto switchD_1000c40e_caseD_17;
  case 0x18:
    goto switchD_1000c40e_caseD_18;
  case 0x1a:
    goto switchD_1000c40e_caseD_1a;
  case 0x1b:
    goto switchD_1000c40e_caseD_1b;
  case 0x1c:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1c)) == *(uint *)((int)_Buf2 + (_Size - 0x1c))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1c)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_18:
    if (*(uint *)((int)_Buf1 + (_Size - 0x18)) == *(uint *)((int)_Buf2 + (_Size - 0x18))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x18)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_14:
    if (*(uint *)((int)_Buf1 + (_Size - 0x14)) == *(uint *)((int)_Buf2 + (_Size - 0x14))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x14)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_10:
    if (*(uint *)((int)_Buf1 + (_Size - 0x10)) == *(uint *)((int)_Buf2 + (_Size - 0x10))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x10)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_c:
    if (*(int *)((int)_Buf1 + (_Size - 0xc)) == *(int *)((int)_Buf2 + (_Size - 0xc))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 9)) - (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_8:
    if (*(uint *)((int)_Buf1 + (_Size - 8)) == *(uint *)((int)_Buf2 + (_Size - 8))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 8)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 5)) - (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 == 0) {
switchD_1000c40e_caseD_4:
      if (*(uint *)((int)_Buf1 + (_Size - 4)) == *(uint *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = 0;
      }
      else {
        uVar3 = *(uint *)((int)_Buf1 + (_Size - 4)) & 0xff;
        uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
        if ((uVar3 == uVar2) ||
           (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
          uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
          uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
          if ((uVar3 == uVar2) ||
             (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
            uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
            uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
            if (((uVar3 == uVar2) ||
                (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0))
               && (iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                           (uint)*(byte *)((int)_Buf2 + (_Size - 1)), iVar1 != 0)) {
              iVar1 = (uint)(0 < iVar1) * 2 + -1;
            }
          }
        }
      }
      if (iVar1 == 0) {
switchD_1000c40e_caseD_0:
        iVar1 = 0;
      }
    }
    return iVar1;
  case 0x1d:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1d)) == *(uint *)((int)_Buf2 + (_Size - 0x1d))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1d)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  case 0x19:
    if (*(uint *)((int)_Buf1 + (_Size - 0x19)) == *(uint *)((int)_Buf2 + (_Size - 0x19))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x19)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_15:
    if (*(uint *)((int)_Buf1 + (_Size - 0x15)) == *(uint *)((int)_Buf2 + (_Size - 0x15))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x15)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_11:
    if (*(uint *)((int)_Buf1 + (_Size - 0x11)) == *(uint *)((int)_Buf2 + (_Size - 0x11))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x11)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_d:
    if (*(uint *)((int)_Buf1 + (_Size - 0xd)) == *(uint *)((int)_Buf2 + (_Size - 0xd))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xd)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 10)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_9:
    if (*(int *)((int)_Buf1 + (_Size - 9)) == *(int *)((int)_Buf2 + (_Size - 9))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 6)) - (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_5:
    if (*(uint *)((int)_Buf1 + (_Size - 5)) == *(uint *)((int)_Buf2 + (_Size - 5))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 5)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 2)) - (uint)*(byte *)((int)_Buf2 + (_Size - 2));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_1:
    if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) == (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
      return 0;
    }
    return (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                           (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
  case 0x1e:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1e)) == *(uint *)((int)_Buf2 + (_Size - 0x1e))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1e)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_1a:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1a)) == *(uint *)((int)_Buf2 + (_Size - 0x1a))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1a)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_16:
    if (*(uint *)((int)_Buf1 + (_Size - 0x16)) == *(uint *)((int)_Buf2 + (_Size - 0x16))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x16)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_12:
    if (*(uint *)((int)_Buf1 + (_Size - 0x12)) == *(uint *)((int)_Buf2 + (_Size - 0x12))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x12)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_e:
    if (*(uint *)((int)_Buf1 + (_Size - 0xe)) == *(uint *)((int)_Buf2 + (_Size - 0xe))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xe)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_a:
    if (*(int *)((int)_Buf1 + (_Size - 10)) == *(int *)((int)_Buf2 + (_Size - 10))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 7)) - (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_6:
    if (*(uint *)((int)_Buf1 + (_Size - 6)) == *(uint *)((int)_Buf2 + (_Size - 6))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 6)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 3)) - (uint)*(byte *)((int)_Buf2 + (_Size - 3));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_2:
    if (*(short *)((int)_Buf1 + (_Size - 2)) != *(short *)((int)_Buf2 + (_Size - 2))) {
LAB_1000cff4:
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      goto switchD_1000c40e_caseD_1;
    }
    goto switchD_1000c40e_caseD_0;
  case 0x1f:
    if (*(int *)((int)_Buf1 + (_Size - 0x1f)) == *(int *)((int)_Buf2 + (_Size - 0x1f))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1f));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1f));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1e));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_1b:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1b)) == *(uint *)((int)_Buf2 + (_Size - 0x1b))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1b)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_17:
    if (*(uint *)((int)_Buf1 + (_Size - 0x17)) == *(uint *)((int)_Buf2 + (_Size - 0x17))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x17)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_13:
    if (*(uint *)((int)_Buf1 + (_Size - 0x13)) == *(uint *)((int)_Buf2 + (_Size - 0x13))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x13)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_f:
    if (*(int *)((int)_Buf1 + (_Size - 0xf)) == *(int *)((int)_Buf2 + (_Size - 0xf))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_b:
    if (*(uint *)((int)_Buf1 + (_Size - 0xb)) == *(uint *)((int)_Buf2 + (_Size - 0xb))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xb)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 8)) - (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_7:
    if (*(uint *)((int)_Buf1 + (_Size - 7)) == *(uint *)((int)_Buf2 + (_Size - 7))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 7)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 4)) - (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000c40e_caseD_3:
    uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
    uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
    if ((uVar3 != uVar2) &&
       (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    goto LAB_1000cff4;
  }
}




/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2008 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (_MaxCount != 0) {
    if ((3 < _MaxCount) && (pbVar1 = (byte *)_Str1, pbVar3 = (byte *)_Str2, _MaxCount != 4)) {
      do {
        _Str1 = (char *)(pbVar1 + 4);
        _Str2 = (char *)(pbVar3 + 4);
        if ((*pbVar1 == 0) || (*pbVar1 != *pbVar3)) {
          uVar2 = (uint)*pbVar1;
          uVar4 = (uint)*pbVar3;
          goto LAB_1000d683;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_1000d683;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_1000d683;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_1000d683;
        }
        local_8 = local_8 + 4;
        pbVar1 = (byte *)_Str1;
        pbVar3 = (byte *)_Str2;
      } while (local_8 < _MaxCount - 4);
    }
    for (; local_8 < _MaxCount; local_8 = local_8 + 1) {
      if ((*_Str1 == 0) || (*_Str1 != *_Str2)) {
        uVar2 = (uint)(byte)*_Str1;
        uVar4 = (uint)(byte)*_Str2;
LAB_1000d683:
        return uVar2 - uVar4;
      }
      _Str1 = (char *)((byte *)_Str1 + 1);
      _Str2 = (char *)((byte *)_Str2 + 1);
    }
  }
  return 0;
}




/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio 2008 Release */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = (char *)((byte *)_Control + 1);
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)(uint)bVar1;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d6d0(void)

{
  _DAT_10024c00 = 0;
  return;
}




uint * __cdecl FUN_1000d6f0(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = (uint)param_1 & 3;
  while (uVar1 != 0) {
    if ((char)*param_1 == param_2) {
      return param_1;
    }
    if ((char)*param_1 == '\0') {
      return (uint *)0x0;
    }
    uVar1 = (uint)((int)param_1 + 1) & 3;
    param_1 = (uint *)((int)param_1 + 1);
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}




/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    if (uVar1 == 0) goto LAB_1000d7f2;
  }
  uVar1 = 1;
LAB_1000d7f2:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    __ismbbkalnum_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkalnum_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,1);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbkalnum
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkalnum(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,1);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbkprint_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkprint_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,3);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbkprint
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkprint(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,3);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbkpunct_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkpunct_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,2);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbkpunct
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkpunct(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,2);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbalnum_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbalnum_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0x107,1);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbalnum
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbalnum(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x107,1);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbalpha_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbalpha_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0x103,1);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbalpha
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbalpha(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x103,1);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbgraph_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbgraph_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0x117,3);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbgraph
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbgraph(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x117,3);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbprint_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbprint_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0x157,3);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbprint
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbprint(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x157,3);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbpunct_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbpunct_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0x10,2);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbpunct
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbpunct(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x10,2);
  return iVar1;
}




/* Library Function - Single Match
    __ismbblead_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __ismbblead_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,4);
  return iVar1;
}




/* Library Function - Single Match
    __ismbblead
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbtrail_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbtrail_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,8);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbtrail
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbtrail(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,8);
  return iVar1;
}




/* Library Function - Single Match
    __ismbbkana_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkana_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if ((local_10 == 0) || (*(int *)(local_10 + 4) != 0x3a4)) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = x_ismbbtype_l(_Locale,_C,0,3);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}




/* Library Function - Single Match
    __ismbbkana
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkana(uint _C)

{
  int iVar1;
  
  iVar1 = __ismbbkana_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    _strtok_s
   
   Library: Visual Studio 2008 Release */

char * __cdecl _strtok_s(char *_Str,char *_Delim,char **_Context)

{
  byte bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  if (((_Context == (char **)0x0) || (_Delim == (char *)0x0)) ||
     ((_Str == (char *)0x0 && (*_Context == (char *)0x0)))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    pbVar5 = local_28;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5 = pbVar5 + 4;
    }
    do {
      bVar1 = *_Delim;
      local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
      _Delim = (char *)((byte *)_Delim + 1);
    } while (bVar1 != 0);
    if (_Str == (char *)0x0) {
      _Str = *_Context;
    }
    for (; (bVar1 = *_Str, (local_28[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0 && (bVar1 != 0));
        _Str = (char *)((byte *)_Str + 1)) {
    }
    for (; *_Str != 0; _Str = (char *)((byte *)_Str + 1)) {
      if ((local_28[(byte)*_Str >> 3] & (byte)(1 << (*_Str & 7U))) != 0) {
        *_Str = 0;
        _Str = (char *)((byte *)_Str + 1);
        break;
      }
    }
    *_Context = _Str;
  }
  pcVar3 = (char *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pcVar3;
}




int __cdecl FUN_1000db59(int param_1)

{
  return param_1 + 0x20;
}




/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2) & 1;
    }
    else {
      uVar2 = __isctype_l(_C,1,&local_1c);
    }
    if (uVar2 == 0) {
LAB_1000dbc7:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].wlocale + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      piVar4 = __errno();
      *piVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x100,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_1000dbc7;
    uVar2 = (uint)local_c;
    if (iVar3 != 1) {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}




/* Library Function - Single Match
    _tolower
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_10023114 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}




/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio 2008 Release */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = (char *)((byte *)_Str1 + 1);
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar5 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_1000dd01;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    _MaxCount = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar5 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_1000dd01:
      _MaxCount = 0xffffffff;
      if (!bVar5) {
        _MaxCount = 1;
      }
    }
  }
  return _MaxCount;
}




/* Library Function - Single Match
    __set_amblksiz
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl __set_amblksiz(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    piVar1 = __errno();
  }
  else {
    if (DAT_100235bc != 0) {
      DAT_100228b0 = param_1;
      return 0;
    }
    piVar1 = __errno();
  }
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}




undefined4 __cdecl FUN_1000dd7d(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_1 == (undefined4 *)0x0) || (DAT_100235bc == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_100228b0;
    uVar2 = 0;
  }
  return uVar2;
}




/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2008 Release */

undefined4 ___sbh_heap_init(undefined4 param_1)

{
  DAT_10024bec = HeapAlloc(DAT_100235bc,0,0x140);
  if (DAT_10024bec == (LPVOID)0x0) {
    return 0;
  }
  DAT_1002371c = 0;
  DAT_10024be8 = 0;
  DAT_10024bf4 = DAT_10024bec;
  DAT_10024bf0 = param_1;
  DAT_10024bf8 = 0x10;
  return 1;
}




/* Library Function - Single Match
    ___sbh_find_block
   
   Library: Visual Studio 2008 Release */

uint __cdecl ___sbh_find_block(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10024bec;
  while( true ) {
    if (DAT_10024be8 * 0x14 + DAT_10024bec <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}




/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2008 Release */

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_1002371c != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10024bfc * 0x8000 + DAT_1002371c[3]),0x8000,0x4000);
        DAT_1002371c[2] = DAT_1002371c[2] | 0x80000000U >> ((byte)DAT_10024bfc & 0x1f);
        *(undefined4 *)(DAT_1002371c[4] + 0xc4 + DAT_10024bfc * 4) = 0;
        *(char *)(DAT_1002371c[4] + 0x43) = *(char *)(DAT_1002371c[4] + 0x43) + -1;
        if (*(char *)(DAT_1002371c[4] + 0x43) == '\0') {
          DAT_1002371c[1] = DAT_1002371c[1] & 0xfffffffe;
        }
        if (DAT_1002371c[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1002371c[3],0,0x8000);
          HeapFree(DAT_100235bc,0,(LPVOID)DAT_1002371c[4]);
          _memmove(DAT_1002371c,DAT_1002371c + 5,
                   (DAT_10024be8 * 0x14 - (int)DAT_1002371c) + -0x14 + DAT_10024bec);
          DAT_10024be8 = DAT_10024be8 + -1;
          if (DAT_1002371c < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10024bf4 = DAT_10024bec;
        }
      }
      DAT_1002371c = param_1;
      DAT_10024bfc = uVar14;
    }
  }
  return;
}




/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2008 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10024be8 == DAT_10024bf8) {
    pvVar1 = HeapReAlloc(DAT_100235bc,0,DAT_10024bec,(DAT_10024bf8 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10024bf8 = DAT_10024bf8 + 0x10;
    DAT_10024bec = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_10024be8 * 0x14 + (int)DAT_10024bec);
  pvVar1 = HeapAlloc(DAT_100235bc,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_10024be8 = DAT_10024be8 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_100235bc,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}




/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2008 Release */

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 * 2) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar7 = ((uint)((int)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}




/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar7 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar7;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  iVar9 = *(int *)(param_2 + -4) + -1;
  puVar8 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar8;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar8[1] == puVar8[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar8[2] + 4) = puVar8[1];
    *(uint *)(puVar8[1] + 8) = puVar8[2];
    iVar9 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar9) {
      uVar13 = (iVar9 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar6 = *(char *)(uVar13 + 4 + uVar7);
        *(char *)(uVar13 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar9;
      *(int *)(iVar9 + -4 + (int)piVar4) = iVar9;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar4 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar4[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (puVar8[1] == puVar8[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar8[2] + 4) = puVar8[1];
      *(uint *)(puVar8[1] + 8) = puVar8[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar9 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar9;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar6 = *(char *)(uVar11 + 4 + uVar7);
      *(char *)(uVar11 + 4 + uVar7) = cVar6 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar6 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar6 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}




/* Library Function - Single Match
    ___sbh_heap_check
   
   Library: Visual Studio 2008 Release */

undefined4 ___sbh_heap_check(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  int local_13c [64];
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  if (DAT_10024bec == (uint *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_38 = DAT_10024bec;
    local_20 = 0;
    if (0 < DAT_10024be8) {
      do {
        uVar3 = local_38[4];
        if (uVar3 == 0) {
          return 0xfffffffe;
        }
        local_c = (uint *)local_38[3];
        local_28 = (uint *)(uVar3 + 0x144);
        puVar2 = (uint *)(uVar3 + 0xc4);
        local_24 = local_38[2];
        local_14 = 0;
        local_18 = 0;
        local_10 = 0;
        local_3c = puVar2;
        puVar7 = local_38;
        do {
          uVar3 = local_24;
          iVar8 = 0;
          local_2c = 0;
          local_1c = 0;
          local_8 = 0;
          piVar10 = local_13c;
          local_3c = puVar2;
          for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar10 = 0;
            piVar10 = piVar10 + 1;
          }
          if (-1 < (int)uVar3) {
            if (local_c == (uint *)0x0) {
              return 0xfffffffc;
            }
            puVar2 = local_c + 0x3ff;
            do {
              puVar7 = puVar2 + -0x3fc;
              if ((puVar2[-0x3fd] != 0xffffffff) || (*puVar2 != 0xffffffff)) {
                return 0xfffffffb;
              }
              do {
                uVar3 = *puVar7;
                if ((uVar3 & 1) == 0) {
                  iVar4 = ((int)uVar3 >> 4) + -1;
                  if (0x3f < iVar4) {
                    iVar4 = 0x3f;
                  }
                  local_13c[iVar4] = local_13c[iVar4] + 1;
                  uVar5 = uVar3;
                }
                else {
                  if (0x400 < (int)(uVar3 - 1)) {
                    return 0xfffffffa;
                  }
                  local_8 = local_8 + 1;
                  uVar5 = uVar3 - 1;
                }
                if ((((int)uVar5 < 0x10) || ((uVar5 & 0xf) != 0)) || (0xff0 < (int)uVar5)) {
                  return 0xfffffff9;
                }
                puVar7 = (uint *)(uVar5 + (int)puVar7);
                if (puVar7[-1] != uVar3) {
                  return 0xfffffff8;
                }
              } while (puVar7 < puVar2);
              if (puVar7 != puVar2) {
                return 0xfffffff8;
              }
              puVar2 = puVar2 + 0x400;
              iVar8 = iVar8 + 1;
            } while (iVar8 < 8);
            if (*local_28 != local_8) {
              return 0xfffffff7;
            }
            iVar4 = 0;
            puVar11 = local_28;
            do {
              local_8 = 0;
              local_34 = puVar11 + 2;
              puVar2 = (uint *)puVar11[1];
              local_30 = puVar11;
              puVar9 = local_34;
              if (puVar2 != puVar11) {
                do {
                  if (local_8 == local_13c[iVar4]) break;
                  if ((puVar2 < local_c) || (local_c + 0x2000 <= puVar2)) {
                    return 0xfffffff6;
                  }
                  puVar6 = (uint *)(((uint)puVar2 & 0xfffff000) + 0xc);
                  puVar7 = (uint *)(((uint)puVar2 & 0xfffff000) + 0xffc);
                  if (puVar6 == puVar7) {
                    return 0xfffffff5;
                  }
                  do {
                    if (puVar6 == puVar2) break;
                    puVar6 = (uint *)((int)puVar6 + (*puVar6 & 0xfffffffe));
                    puVar9 = local_34;
                  } while (puVar6 != puVar7);
                  if (puVar6 == puVar7) {
                    return 0xfffffff5;
                  }
                  iVar8 = ((int)*puVar2 >> 4) + -1;
                  if (0x3f < iVar8) {
                    iVar8 = 0x3f;
                  }
                  if (iVar8 != iVar4) {
                    return 0xfffffff4;
                  }
                  if ((uint *)puVar2[2] != local_30) {
                    return 0xfffffff3;
                  }
                  local_8 = local_8 + 1;
                  local_30 = puVar2;
                  puVar2 = (uint *)puVar2[1];
                } while (puVar2 != puVar11);
                if (local_8 != 0) {
                  if (iVar4 < 0x20) {
                    uVar3 = 0x80000000 >> ((byte)iVar4 & 0x1f);
                    local_2c = local_2c | uVar3;
                    local_14 = local_14 | uVar3;
                  }
                  else {
                    uVar3 = 0x80000000 >> ((byte)iVar4 - 0x20 & 0x1f);
                    local_1c = local_1c | uVar3;
                    local_18 = local_18 | uVar3;
                  }
                }
              }
              if (((uint *)local_30[1] != puVar11) || (local_8 != local_13c[iVar4])) {
                return 0xfffffff2;
              }
              if ((uint *)*puVar9 != local_30) {
                return 0xfffffff1;
              }
              iVar4 = iVar4 + 1;
              puVar7 = local_38;
              puVar2 = local_3c;
              puVar11 = puVar9;
            } while (iVar4 < 0x40);
          }
          if ((local_2c != puVar2[-0x20]) || (local_1c != *puVar2)) {
            return 0xfffffff0;
          }
          local_c = local_c + 0x2000;
          local_28 = local_28 + 0x81;
          local_24 = local_24 << 1;
          local_10 = local_10 + 1;
          puVar2 = puVar2 + 1;
          local_3c = puVar2;
        } while (local_10 < 0x20);
        if ((local_14 != *puVar7) || (local_18 != puVar7[1])) {
          return 0xffffffef;
        }
        local_20 = local_20 + 1;
        local_38 = puVar7 + 5;
      } while (local_20 < DAT_10024be8);
    }
    uVar1 = 0;
  }
  return uVar1;
}




/* Library Function - Single Match
    __set_sbh_threshold
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl __set_sbh_threshold(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_100235bc != 0) {
    if (DAT_10024c08 != 3) {
      if (param_1 == 0) {
        return 1;
      }
      if (DAT_10024c08 == 1) {
        if ((param_1 < 0x3f9) && (iVar2 = ___sbh_heap_init(param_1), iVar2 != 0)) {
          DAT_10024bf0 = param_1;
          DAT_10024c08 = 3;
          return 1;
        }
        piVar1 = __errno();
        *piVar1 = 0x16;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      else {
        piVar1 = __errno();
        *piVar1 = 0x16;
      }
      return 0;
    }
    if (param_1 < 0x3f9) {
      DAT_10024bf0 = param_1;
      return 1;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}




/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2008 Release */

int * __cdecl ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint local_c;
  int local_8;
  
  puVar9 = DAT_10024bec + DAT_10024be8 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_10024bf4;
  if (iVar8 < 0x20) {
    uVar15 = 0xffffffff >> (bVar6 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar15 = 0;
    local_c = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (; (param_1 < puVar9 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
      param_1 = param_1 + 5) {
  }
  puVar13 = DAT_10024bec;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_10024bf4 && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_10024bf4) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_10024bec;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_10024bf4 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_10024bf4) &&
           (param_1 = ___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar8 = ___sbh_alloc_new_group((int)param_1);
      *(int *)param_1[4] = iVar8;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & uVar15) == 0)) {
    local_8 = 0;
    puVar9 = (uint *)(piVar5 + 0x11);
    uVar11 = piVar5[0x31];
    while ((uVar11 & local_c) == 0 && (*puVar9 & uVar15) == 0) {
      local_8 = local_8 + 1;
      puVar13 = puVar9 + 0x21;
      puVar9 = puVar9 + 1;
      uVar11 = *puVar13;
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar8 = 0;
  uVar15 = piVar5[local_8 + 0x11] & uVar15;
  if (uVar15 == 0) {
    uVar15 = piVar5[local_8 + 0x31] & local_c;
    iVar8 = 0x20;
  }
  for (; -1 < (int)uVar15; uVar15 = uVar15 * 2) {
    iVar8 = iVar8 + 1;
  }
  piVar12 = (int *)piVar3[iVar8 * 2 + 1];
  iVar10 = *piVar12 - uVar7;
  iVar16 = (iVar10 >> 4) + -1;
  if (0x3f < iVar16) {
    iVar16 = 0x3f;
  }
  DAT_10024bf4 = param_1;
  if (iVar16 != iVar8) {
    if (piVar12[1] == piVar12[2]) {
      if (iVar8 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 & 0x1f));
        piVar5[local_8 + 0x11] = uVar15 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar15;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar15;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar15;
        }
      }
    }
    *(int *)(piVar12[2] + 4) = piVar12[1];
    *(int *)(piVar12[1] + 8) = piVar12[2];
    if (iVar10 == 0) goto LAB_1000eced;
    piVar1 = piVar3 + iVar16 * 2;
    iVar8 = piVar1[1];
    piVar12[2] = (int)piVar1;
    piVar12[1] = iVar8;
    piVar1[1] = (int)piVar12;
    *(int **)(piVar12[1] + 8) = piVar12;
    if (piVar12[1] == piVar12[2]) {
      cVar4 = *(char *)(iVar16 + 4 + (int)piVar5);
      *(char *)(iVar16 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar6 = (byte)iVar16;
      if (iVar16 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar10 != 0) {
    *piVar12 = iVar10;
    *(int *)(iVar10 + -4 + (int)piVar12) = iVar10;
  }
LAB_1000eced:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_1002371c)) && (local_8 == DAT_10024bfc)) {
    DAT_1002371c = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl type_info::_Type_info_dtor(class type_info *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl type_info::_Type_info_dtor(type_info *param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  __lock(0xe);
  _Memory = DAT_10023724;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_10023720;
    do {
      piVar2 = piVar1;
      if (DAT_10023724 == (int *)0x0) goto LAB_1000ed74;
      piVar1 = DAT_10023724;
    } while (*DAT_10023724 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_10023724[1];
    _free(_Memory);
LAB_1000ed74:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_1000ed97();
  return;
}




void FUN_1000ed97(void)

{
  FUN_100079a6(0xe);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static char const * __cdecl type_info::_Name_base(class type_info const *,struct
   __type_info_node *)
   
   Library: Visual Studio 2008 Release */

char * __cdecl type_info::_Name_base(type_info *param_1,__type_info_node *param_2)

{
  char *_Str;
  size_t sVar1;
  undefined4 *_Memory;
  char *_Dst;
  errno_t eVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    _Str = ___unDName((char *)0x0,(char *)(param_1 + 9),0,0x10004b93,_free,0x2800);
    if (_Str == (char *)0x0) {
      return (char *)0x0;
    }
    sVar1 = _strlen(_Str);
    while (sVar1 != 0) {
      if (_Str[sVar1 - 1] != ' ') break;
      _Str[sVar1 - 1] = '\0';
      sVar1 = sVar1 - 1;
    }
    __lock(0xe);
    if ((*(int *)(param_1 + 4) == 0) &&
       (_Memory = (undefined4 *)_malloc(8), _Memory != (undefined4 *)0x0)) {
      _Dst = (char *)_malloc(sVar1 + 1);
      *(char **)(param_1 + 4) = _Dst;
      if (_Dst == (char *)0x0) {
        _free(_Memory);
      }
      else {
        eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Str);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *_Memory = *(undefined4 *)(param_1 + 4);
        _Memory[1] = *(undefined4 *)(param_2 + 4);
        *(undefined4 **)(param_2 + 4) = _Memory;
      }
    }
    _free(_Str);
    FUN_1000ee8c();
  }
  return *(char **)(param_1 + 4);
}




void FUN_1000ee8c(void)

{
  FUN_100079a6(0xe);
  return;
}




/* Library Function - Single Match
    ___unDNameHelper
   
   Library: Visual Studio 2008 Release */

void __cdecl ___unDNameHelper(char *param_1,char *param_2,int param_3,ushort param_4)

{
  if (param_4 == 0) {
    param_4 = 0x2800;
  }
  ___unDName(param_1,param_2,param_3,0x10004b93,_free,param_4);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static char const * __cdecl type_info::_Name_base_internal(class type_info const
   *,struct __type_info_node *)
   
   Library: Visual Studio 2008 Release */

char * __cdecl type_info::_Name_base_internal(type_info *param_1,__type_info_node *param_2)

{
  char *_Str;
  size_t sVar1;
  undefined4 *_Memory;
  char *_Dst;
  errno_t eVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10020e20;
  uStack_c = 0x1000ef44;
  if (*(int *)(param_1 + 4) == 0) {
    __lock(0xe);
    local_8 = (undefined *)0x0;
    if (*(int *)(param_1 + 4) == 0) {
      _Str = (char *)___unDNameHelper((char *)0x0,(char *)(param_1 + 9),0,0x2800);
      if (_Str == (char *)0x0) {
        __local_unwind4(&DAT_10022048,(int)local_14,0xfffffffe);
        return (char *)0x0;
      }
      sVar1 = _strlen(_Str);
      while ((sVar1 != 0 && (_Str[sVar1 - 1] == ' '))) {
        _Str[sVar1 - 1] = '\0';
        sVar1 = sVar1 - 1;
      }
      _Memory = (undefined4 *)_malloc(8);
      if (_Memory != (undefined4 *)0x0) {
        _Dst = (char *)_malloc(sVar1 + 1);
        if (_Dst == (char *)0x0) {
          _free(_Memory);
        }
        else {
          eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Str);
          if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(param_1 + 4) = _Dst;
          *_Memory = _Dst;
          _Memory[1] = *(undefined4 *)(param_2 + 4);
          *(undefined4 **)(param_2 + 4) = _Memory;
        }
      }
      _free(_Str);
    }
    local_8 = (undefined *)0xfffffffe;
    FUN_1000f03e();
  }
  return *(char **)(param_1 + 4);
}




void FUN_1000f03e(void)

{
  FUN_100079a6(0xe);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2008 Release */

size_t __cdecl __msize(void *_Memory)

{
  int *piVar1;
  size_t sVar2;
  uint uVar3;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_10024c08 == 3) {
      __lock(4);
      uVar3 = ___sbh_find_block((int)_Memory);
      if (uVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_1000f134();
      if (uVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_100235bc,0,_Memory);
  }
  return sVar2;
}




void FUN_1000f134(void)

{
  FUN_100079a6(4);
  return;
}




/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2008 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  HANDLE hFile;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0;
  do {
    if (param_1 == (&DAT_10022b08)[local_8 * 2]) break;
    local_8 = local_8 + 1;
  } while (local_8 < 0x17);
  uVar1 = local_8;
  if (local_8 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 != 1) && ((iVar2 = __set_error_mode(3), iVar2 != 0 || (DAT_100230f4 != 1)))) {
      if (param_1 == 0xfc) {
        return;
      }
      eVar3 = _strcpy_s(&DAT_10023728,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_10023845 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_10023741,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_10023741,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_10023741);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_10023741);
        eVar3 = _strncpy_s((char *)(sVar5 + 0x10023706),
                           (int)&DAT_10023a3c - (int)(sVar5 + 0x10023706),"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_10023728,0x314,"\n\n");
      if (eVar3 == 0) {
        eVar3 = _strcat_s(&DAT_10023728,0x314,
                          (&PTR_s_R6002___floating_point_support_n_10022b0c)[local_8 * 2]);
        if (eVar3 == 0) {
          ___crtMessageBoxA(&DAT_10023728,"Microsoft Visual C++ Runtime Library",0x12010);
          return;
        }
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    hFile = GetStdHandle(0xfffffff4);
    if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_c;
      sVar5 = _strlen((&PTR_s_R6002___floating_point_support_n_10022b0c)[uVar1 * 2]);
      WriteFile(hFile,(&PTR_s_R6002___floating_point_support_n_10022b0c)[uVar1 * 2],sVar5,
                lpNumberOfBytesWritten,lpOverlapped);
    }
  }
  return;
}




/* Library Function - Single Match
    __GET_RTERRMSG
   
   Library: Visual Studio 2008 Release */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_10022b08)[uVar1 * 2]) {
      return (wchar_t *)(&PTR_s_R6002___floating_point_support_n_10022b0c)[uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x17);
  return (wchar_t *)0x0;
}




/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2008 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_100230f4 != 1) {
      return;
    }
  }
  __NMSG_WRITE(0xfc);
  __NMSG_WRITE(0xff);
  return;
}




/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2008 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_1000f378:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        __dosmaperr(DVar4);
        goto LAB_1000f378;
      }
    }
    pbVar1 = (byte *)((&DAT_10024c20)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2008 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10024c0c)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_10024c20)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        puVar1 = ___doserrno();
        *puVar1 = 0;
        piVar2 = __errno();
        *piVar2 = 9;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_10024c20)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_1000f4db();
      }
      goto LAB_1000f4d5;
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_1000f4d5:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}




void FUN_1000f4db(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  WCHAR WVar1;
  wchar_t wVar2;
  ulong *puVar3;
  int *piVar4;
  int iVar5;
  _ptiddata p_Var6;
  BOOL BVar7;
  DWORD nNumberOfBytesToWrite;
  int iVar8;
  uint uVar9;
  char cVar10;
  WCHAR *pWVar11;
  char *pcVar12;
  int unaff_EDI;
  WCHAR *pWVar13;
  ushort uVar14;
  UINT local_1ae8;
  uint local_1ae4;
  char local_1add;
  int *local_1adc;
  char *local_1ad8;
  int local_1ad4;
  WCHAR *local_1ad0;
  char *local_1acc;
  WCHAR *local_1ac8;
  DWORD local_1ac4;
  WCHAR *local_1ac0;
  WCHAR local_1abc [852];
  CHAR local_1414 [3416];
  WCHAR local_6bc [854];
  undefined2 local_10;
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  local_1ad0 = (WCHAR *)_Buf;
  local_1acc = (char *)0x0;
  local_1ad4 = 0;
  if (_MaxCharCount == 0) goto LAB_1000fc0b;
  if (_Buf == (void *)0x0) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_1000fc0b;
  }
  piVar4 = &DAT_10024c20 + (_FileHandle >> 5);
  iVar8 = (_FileHandle & 0x1fU) * 0x40;
  cVar10 = (char)(*(char *)(*piVar4 + iVar8 + 0x24) * '\x02') >> 1;
  local_1add = cVar10;
  local_1adc = piVar4;
  if (((cVar10 == '\x02') || (cVar10 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_1000fc0b;
  }
  if ((*(byte *)(*piVar4 + iVar8 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar5 = __isatty(_FileHandle);
  if ((iVar5 == 0) || ((*(byte *)(iVar8 + 4 + *piVar4) & 0x80) == 0)) {
LAB_1000f87c:
    if ((*(byte *)((undefined4 *)(*piVar4 + iVar8) + 1) & 0x80) == 0) {
      BVar7 = WriteFile(*(HANDLE *)(*piVar4 + iVar8),local_1ad0,_MaxCharCount,(LPDWORD)&local_1ad8,
                        (LPOVERLAPPED)0x0);
      if (BVar7 == 0) {
LAB_1000fb7c:
        local_1ac4 = GetLastError();
      }
      else {
        local_1ac4 = 0;
        local_1acc = local_1ad8;
      }
LAB_1000fb88:
      if (local_1acc != (char *)0x0) goto LAB_1000fc0b;
      goto LAB_1000fb91;
    }
    local_1ac4 = 0;
    if (cVar10 == '\0') {
      local_1ac8 = local_1ad0;
      if (_MaxCharCount == 0) goto LAB_1000fbcd;
      do {
        local_1ac0 = (WCHAR *)0x0;
        uVar9 = (int)local_1ac8 - (int)local_1ad0;
        pWVar11 = local_1abc;
        do {
          if (_MaxCharCount <= uVar9) break;
          pWVar13 = (WCHAR *)((int)local_1ac8 + 1);
          WVar1 = *local_1ac8;
          uVar9 = uVar9 + 1;
          if ((char)WVar1 == '\n') {
            local_1ad4 = local_1ad4 + 1;
            *(char *)pWVar11 = '\r';
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          }
          *(char *)pWVar11 = (char)WVar1;
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          local_1ac8 = pWVar13;
        } while (local_1ac0 < (WCHAR *)0x13ff);
        BVar7 = WriteFile(*(HANDLE *)(iVar8 + *piVar4),local_1abc,(int)pWVar11 - (int)local_1abc,
                          (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
        if (BVar7 == 0) goto LAB_1000fb7c;
        local_1acc = local_1acc + (int)local_1ad8;
      } while (((int)pWVar11 - (int)local_1abc <= (int)local_1ad8) &&
              (piVar4 = local_1adc, (uint)((int)local_1ac8 - (int)local_1ad0) < _MaxCharCount));
      goto LAB_1000fb88;
    }
    local_1ac0 = local_1ad0;
    if (cVar10 == '\x02') {
      if (_MaxCharCount != 0) {
        do {
          local_1ac8 = (WCHAR *)0x0;
          uVar9 = (int)local_1ac0 - (int)local_1ad0;
          pWVar11 = local_1abc;
          do {
            if (_MaxCharCount <= uVar9) break;
            pWVar13 = local_1ac0 + 1;
            WVar1 = *local_1ac0;
            uVar9 = uVar9 + 2;
            if (WVar1 == L'\n') {
              local_1ad4 = local_1ad4 + 2;
              *pWVar11 = L'\r';
              pWVar11 = pWVar11 + 1;
              local_1ac8 = local_1ac8 + 1;
            }
            local_1ac8 = local_1ac8 + 1;
            *pWVar11 = WVar1;
            pWVar11 = pWVar11 + 1;
            local_1ac0 = pWVar13;
          } while (local_1ac8 < (WCHAR *)0x13fe);
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *piVar4),local_1abc,(int)pWVar11 - (int)local_1abc,
                            (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_1000fb7c;
          local_1acc = local_1acc + (int)local_1ad8;
        } while (((int)pWVar11 - (int)local_1abc <= (int)local_1ad8) &&
                (piVar4 = local_1adc, (uint)((int)local_1ac0 - (int)local_1ad0) < _MaxCharCount));
        goto LAB_1000fb88;
      }
    }
    else if (_MaxCharCount != 0) {
      do {
        local_1ac8 = (WCHAR *)0x0;
        uVar9 = (int)local_1ac0 - (int)local_1ad0;
        pWVar11 = local_6bc;
        do {
          if (_MaxCharCount <= uVar9) break;
          WVar1 = *local_1ac0;
          local_1ac0 = local_1ac0 + 1;
          uVar9 = uVar9 + 2;
          if (WVar1 == L'\n') {
            *pWVar11 = L'\r';
            pWVar11 = pWVar11 + 1;
            local_1ac8 = local_1ac8 + 1;
          }
          local_1ac8 = local_1ac8 + 1;
          *pWVar11 = WVar1;
          pWVar11 = pWVar11 + 1;
        } while (local_1ac8 < (WCHAR *)0x6a8);
        pcVar12 = (char *)0x0;
        iVar5 = WideCharToMultiByte(0xfde9,0,local_6bc,((int)pWVar11 - (int)local_6bc) / 2,
                                    local_1414,0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) goto LAB_1000fb7c;
        do {
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),local_1414 + (int)pcVar12,
                            iVar5 - (int)pcVar12,(LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) {
            local_1ac4 = GetLastError();
            break;
          }
          pcVar12 = pcVar12 + (int)local_1ad8;
        } while ((int)pcVar12 < iVar5);
      } while ((iVar5 <= (int)pcVar12) &&
              (local_1acc = (char *)((int)local_1ac0 - (int)local_1ad0), local_1acc < _MaxCharCount)
              );
      goto LAB_1000fb88;
    }
  }
  else {
    p_Var6 = __getptd();
    local_1ae4 = (uint)(p_Var6->ptlocinfo->lc_category[0].wlocale == (wchar_t *)0x0);
    BVar7 = GetConsoleMode(*(HANDLE *)(iVar8 + *piVar4),&local_1ae8);
    if ((BVar7 == 0) || ((local_1ae4 != 0 && (cVar10 == '\0')))) goto LAB_1000f87c;
    local_1ae8 = GetConsoleCP();
    local_1ac8 = (WCHAR *)0x0;
    if (_MaxCharCount != 0) {
      local_1ac0 = (WCHAR *)0x0;
      pWVar11 = local_1ad0;
      do {
        piVar4 = local_1adc;
        if (local_1add == '\0') {
          cVar10 = (char)*pWVar11;
          local_1ae4 = (uint)(cVar10 == '\n');
          iVar5 = *local_1adc + iVar8;
          if (*(int *)(iVar5 + 0x38) == 0) {
            iVar5 = _isleadbyte(CONCAT22(cVar10 >> 7,(short)cVar10));
            if (iVar5 == 0) {
              uVar14 = 1;
              pWVar13 = pWVar11;
              goto LAB_1000f6e3;
            }
            if ((char *)((int)local_1ad0 + (_MaxCharCount - (int)pWVar11)) < (char *)0x2) {
              local_1acc = local_1acc + 1;
              *(char *)(iVar8 + 0x34 + *piVar4) = (char)*pWVar11;
              *(undefined4 *)(iVar8 + 0x38 + *piVar4) = 1;
              break;
            }
            iVar5 = _mbtowc((wchar_t *)&local_1ac4,(char *)pWVar11,2);
            if (iVar5 == -1) break;
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          }
          else {
            local_10._0_1_ = *(CHAR *)(iVar5 + 0x34);
            *(undefined4 *)(iVar5 + 0x38) = 0;
            uVar14 = 2;
            pWVar13 = &local_10;
            local_10._1_1_ = cVar10;
LAB_1000f6e3:
            iVar5 = _mbtowc((wchar_t *)&local_1ac4,(char *)pWVar13,(uint)uVar14);
            if (iVar5 == -1) break;
          }
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          nNumberOfBytesToWrite =
               WideCharToMultiByte(local_1ae8,0,(LPCWSTR)&local_1ac4,1,(LPSTR)&local_10,5,
                                   (LPCSTR)0x0,(LPBOOL)0x0);
          if (nNumberOfBytesToWrite == 0) break;
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),&local_10,nNumberOfBytesToWrite,
                            (LPDWORD)&local_1ac8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_1000fb7c;
          local_1acc = (char *)((int)local_1ac0 + local_1ad4);
          if ((int)local_1ac8 < (int)nNumberOfBytesToWrite) break;
          if (local_1ae4 != 0) {
            local_10._0_1_ = '\r';
            BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),&local_10,1,(LPDWORD)&local_1ac8,
                              (LPOVERLAPPED)0x0);
            if (BVar7 == 0) goto LAB_1000fb7c;
            if ((int)local_1ac8 < 1) break;
            local_1ad4 = local_1ad4 + 1;
            local_1acc = local_1acc + 1;
          }
        }
        else {
          if ((local_1add == '\x01') || (local_1add == '\x02')) {
            local_1ac4 = (DWORD)(ushort)*pWVar11;
            local_1ae4 = (uint)(*pWVar11 == L'\n');
            pWVar11 = pWVar11 + 1;
            local_1ac0 = local_1ac0 + 1;
          }
          if ((local_1add == '\x01') || (local_1add == '\x02')) {
            wVar2 = __putwch_nolock((wchar_t)local_1ac4);
            if (wVar2 != (wchar_t)local_1ac4) goto LAB_1000fb7c;
            local_1acc = local_1acc + 2;
            if (local_1ae4 != 0) {
              local_1ac4 = 0xd;
              wVar2 = __putwch_nolock(L'\r');
              if (wVar2 != (wchar_t)local_1ac4) goto LAB_1000fb7c;
              local_1acc = local_1acc + 1;
              local_1ad4 = local_1ad4 + 1;
            }
          }
        }
      } while (local_1ac0 < _MaxCharCount);
      goto LAB_1000fb88;
    }
LAB_1000fb91:
    piVar4 = local_1adc;
    if (local_1ac4 != 0) {
      if (local_1ac4 == 5) {
        piVar4 = __errno();
        *piVar4 = 9;
        puVar3 = ___doserrno();
        *puVar3 = 5;
      }
      else {
        __dosmaperr(local_1ac4);
      }
      goto LAB_1000fc0b;
    }
  }
LAB_1000fbcd:
  if (((*(byte *)(iVar8 + 4 + *piVar4) & 0x40) == 0) || ((char)*local_1ad0 != '\x1a')) {
    piVar4 = __errno();
    *piVar4 = 0x1c;
    puVar3 = ___doserrno();
    *puVar3 = 0;
  }
LAB_1000fc0b:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2008 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10024c0c)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_10024c20)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_10024c20)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_1000fcea();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}




void FUN_1000fcea(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2008 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_10023a40 = _DAT_10023a40 + 1;
  pcVar1 = (char *)__malloc_crt(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}




/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2008 Release */

int __cdecl __isatty(int _FileHandle)

{
  int *piVar1;
  uint uVar2;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
    return 0;
  }
  if ((_FileHandle < 0) || (DAT_10024c0c <= (uint)_FileHandle)) {
    piVar1 = __errno();
    *piVar1 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0;
  }
  else {
    uVar2 = (int)*(char *)((&DAT_10024c20)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) &
            0x40;
  }
  return uVar2;
}




undefined ** FUN_1000fda1(void)

{
  return &PTR_DAT_10022bc0;
}




/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2008 Release */

void __cdecl __lock_file(FILE *_File)

{
  if ((_File < &PTR_DAT_10022bc0) || ((FILE *)&DAT_10022e20 < _File)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  }
  else {
    __lock(((int)(_File + -0x80115e) >> 5) + 0x10);
    _File->_flag = _File->_flag | 0x8000;
  }
  return;
}




/* Library Function - Single Match
    __lock_file2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x10);
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}




/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0x10022bbf < _File) && (_File < (FILE *)0x10022e21)) {
    _File->_flag = _File->_flag & 0xffff7fff;
    FUN_100079a6(((int)(_File + -0x80115e) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}




/* Library Function - Single Match
    __unlock_file2
   
   Library: Visual Studio 2008 Release */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) & 0xffff7fff;
    FUN_100079a6(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}




/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2008 Release */

int __cdecl __fileno(FILE *_File)

{
  int *piVar1;
  int iVar2;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    iVar2 = _File->_file;
  }
  return iVar2;
}




/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2008 Release */

void __initp_misc_cfltcvt_tab(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)((int)&PTR_LAB_10022e40 + uVar3);
    iVar2 = __encode_pointer(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}




void __cdecl FUN_10010058(wchar_t *param_1,_locale_t param_2)

{
  FID_conflict___vwprintf_s_l(param_1,param_2,&stack0x0000000c);
  return;
}




void __cdecl FUN_10010071(wchar_t *param_1,_locale_t param_2)

{
  FID_conflict___vwprintf_s_l(param_1,param_2,&stack0x0000000c);
  return;
}




void __cdecl FUN_1001008a(wchar_t *param_1)

{
  FID_conflict___vwprintf_s_l(param_1,(_locale_t)0x0,&stack0x00000008);
  return;
}




void __cdecl FUN_100100a2(wchar_t *param_1,_locale_t param_2)

{
  FID_conflict___vwprintf_s_l(param_1,param_2,&stack0x0000000c);
  return;
}




void __cdecl FUN_100100bb(wchar_t *param_1)

{
  FID_conflict___vwprintf_s_l(param_1,(_locale_t)0x0,&stack0x00000008);
  return;
}




/* Library Function - Single Match
    __set_printf_count_output
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __set_printf_count_output(int _Value)

{
  bool bVar1;
  
  bVar1 = DAT_10023a44 == (DAT_10022048 | 1);
  DAT_10023a44 = -(uint)(_Value != 0) & (DAT_10022048 | 1);
  return (uint)bVar1;
}




/* Library Function - Single Match
    __get_printf_count_output
   
   Library: Visual Studio 2008 Release */

int __cdecl __get_printf_count_output(void)

{
  return (uint)(DAT_10023a44 == (DAT_10022048 | 1));
}




/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  char *lpMultiByteStr;
  size_t _Size;
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _Size = _SizeInBytes;
  lpMultiByteStr = _MbCh;
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
LAB_10010137:
    iVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_100101ce;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_10010209:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_10010137;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        _memset(lpMultiByteStr,0,_Size);
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar1 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&_WCh,1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&_MbCh);
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        if (DVar3 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            _memset(lpMultiByteStr,0,_Size);
          }
LAB_100101ce:
          piVar2 = __errno();
          *piVar2 = 0x22;
          __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          if (local_8 == '\0') {
            return 0x22;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return 0x22;
        }
      }
      else if (_MbCh == (char *)0x0) {
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = iVar1;
        }
        goto LAB_10010209;
      }
    }
    piVar2 = __errno();
    *piVar2 = 0x2a;
    piVar2 = __errno();
    iVar1 = *piVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar1;
}




/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}




/* Library Function - Single Match
    __wctomb_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale)

{
  errno_t eVar1;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  int local_8;
  
  local_8 = -1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  eVar1 = __wctomb_s_l(&local_8,_MbCh,(size_t)(local_18.locinfo)->locale_name[3],_WCh,&local_18);
  if (eVar1 != 0) {
    local_8 = -1;
  }
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
  }
  return local_8;
}




/* Library Function - Single Match
    _wctomb
   
   Library: Visual Studio 2008 Release */

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  size_t _SizeInBytes;
  errno_t eVar1;
  _locale_t _Locale;
  int local_8;
  
  local_8 = -1;
  _Locale = (_locale_t)0x0;
  _SizeInBytes = ____mb_cur_max_func();
  eVar1 = __wctomb_s_l(&local_8,_MbCh,_SizeInBytes,_WCh,_Locale);
  if (eVar1 == 0) {
    return local_8;
  }
  return -1;
}




/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}




/* Library Function - Single Match
    _isleadbyte
   
   Library: Visual Studio 2008 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __iswalpha_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswalpha_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x103,_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _iswalpha
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswalpha(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x103);
  return iVar1;
}




/* Library Function - Single Match
    __iswupper_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswupper_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,1,_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _iswupper
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswupper(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,1);
  return iVar1;
}




/* Library Function - Single Match
    __iswlower_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswlower_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,2,_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _iswlower
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswlower(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,2);
  return iVar1;
}




/* Library Function - Single Match
    __iswdigit_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswdigit_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,4,_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _iswdigit
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswdigit(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,4);
  return iVar1;
}




/* Library Function - Single Match
    __iswxdigit_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswxdigit_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x80,_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _iswxdigit
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswxdigit(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x80);
  return iVar1;
}




/* Library Function - Single Match
    __iswspace_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswspace_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,8,_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _iswspace
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswspace(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,8);
  return iVar1;
}




/* Library Function - Single Match
    __iswpunct_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswpunct_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x10,_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _iswpunct
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswpunct(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x10);
  return iVar1;
}




/* Library Function - Single Match
    __iswalnum_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswalnum_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x107,_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _iswalnum
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswalnum(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x107);
  return iVar1;
}




/* Library Function - Single Match
    __iswprint_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswprint_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x157,_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _iswprint
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswprint(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x157);
  return iVar1;
}




/* Library Function - Single Match
    __iswgraph_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswgraph_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x117,_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _iswgraph
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswgraph(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x117);
  return iVar1;
}




/* Library Function - Single Match
    __iswcntrl_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswcntrl_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x20,_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _iswcntrl
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswcntrl(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x20);
  return iVar1;
}




bool __cdecl FUN_10010556(ushort param_1)

{
  return param_1 < 0x80;
}




/* Library Function - Single Match
    __iswcsym_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswcsym_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x107,_Locale);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}




/* Library Function - Single Match
    ___iswcsym
   
   Library: Visual Studio 2008 Release */

int __cdecl ___iswcsym(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x107);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}




/* Library Function - Single Match
    __iswcsymf_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswcsymf_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x103,_Locale);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}




/* Library Function - Single Match
    ___iswcsymf
   
   Library: Visual Studio 2008 Release */

int __cdecl ___iswcsymf(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x103);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}




/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2008 Release */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}




/* Library Function - Single Match
    __validate_param_reuseA
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

bool __cdecl __validate_param_reuseA(int *param_1,int param_2,char param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)param_1[2];
  if ((cVar1 == 'p') || (param_3 == 'p')) {
    return cVar1 == param_3;
  }
  if ((cVar1 == 's') || (cVar1 == 'S')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if ((param_3 == 's') || (param_3 == 'S')) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar3 != 0) {
    if (iVar3 != iVar2) {
      return false;
    }
    if (((param_1[3] & 0x810U) != 0) != ((param_4 & 0x810) != 0)) {
      return false;
    }
    return true;
  }
  if (iVar2 != 0) {
    return false;
  }
  if (cVar1 == 'd') {
LAB_10010749:
    iVar3 = 1;
  }
  else {
    if ((((((cVar1 != 'i') && (cVar1 != 'o')) && (cVar1 != 'u')) &&
         (((cVar1 != 'x' && (cVar1 != 'X')) &&
          ((param_3 != 'd' && ((param_3 != 'i' && (param_3 != 'o')))))))) && (param_3 != 'u')) &&
       ((param_3 != 'x' && (param_3 != 'X')))) goto LAB_1001078b;
    if ((cVar1 == 'd') ||
       ((((cVar1 == 'i' || (cVar1 == 'o')) || (cVar1 == 'u')) || ((cVar1 == 'x' || (cVar1 == 'X'))))
       )) goto LAB_10010749;
    iVar3 = 0;
  }
  if (((param_3 == 'd') || (param_3 == 'i')) ||
     ((param_3 == 'o' || (((param_3 == 'u' || (param_3 == 'x')) || (param_3 == 'X')))))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (((iVar3 != iVar2) || (((param_1[3] ^ param_4) & 0x10000) != 0)) ||
     (((param_1[3] ^ param_4) & 0x20) != 0)) {
    return false;
  }
LAB_1001078b:
  return *param_1 == param_2;
}




/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2008 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}




/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}




/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2008 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  int *piVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        piVar1 = __errno();
        if (*piVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}




undefined8 __cdecl FUN_10010876(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}




/* WARNING: Removing unreachable block (ram,0x10011a93) */
/* WARNING: Removing unreachable block (ram,0x10011a9b) */
/* WARNING: Removing unreachable block (ram,0x10011aa5) */
/* WARNING: Removing unreachable block (ram,0x10011ab1) */
/* WARNING: Removing unreachable block (ram,0x10011ab7) */
/* WARNING: Removing unreachable block (ram,0x10011aba) */
/* WARNING: Removing unreachable block (ram,0x10011abd) */
/* WARNING: Removing unreachable block (ram,0x10011ac0) */
/* WARNING: Removing unreachable block (ram,0x10011ac3) */
/* WARNING: Removing unreachable block (ram,0x10011ad5) */
/* WARNING: Removing unreachable block (ram,0x10011ac6) */
/* WARNING: Removing unreachable block (ram,0x10011ace) */
/* WARNING: Removing unreachable block (ram,0x10011ada) */
/* Library Function - Single Match
    __output_p_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __output_p_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  char *_Str;
  undefined1 local_8d4 [1600];
  char *local_294;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  FILE *local_274;
  undefined4 local_26c;
  uint local_268;
  undefined4 local_264;
  char *local_260;
  undefined4 local_25c;
  int local_258;
  undefined4 local_254;
  char *local_248;
  undefined4 local_244;
  _LocaleUpdate local_240 [8];
  int local_238;
  char local_234;
  char local_230;
  int local_22c;
  int local_228;
  undefined4 local_224;
  int local_21c;
  va_list local_218;
  undefined4 local_214;
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  local_274 = _File;
  local_218 = _ArgList;
  local_278 = 0;
  local_214 = 0;
  local_25c = 0;
  local_27c = 0;
  local_264 = 0;
  _LocaleUpdate::_LocaleUpdate(local_240,_Locale);
  local_228 = -1;
  local_260 = (char *)0x0;
  if (_File != (FILE *)0x0) {
    if ((_File->_flag & 0x40) == 0) {
      uVar2 = __fileno(_File);
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar5 = &DAT_10022870;
      }
      else {
        puVar5 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_10024c20)[(int)uVar2 >> 5]);
      }
      if ((puVar5[0x24] & 0x7f) == 0) {
        if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
          puVar5 = &DAT_10022870;
        }
        else {
          puVar5 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_10024c20)[(int)uVar2 >> 5]);
        }
        if ((puVar5[0x24] & 0x80) == 0) goto LAB_1001098e;
      }
    }
    else {
LAB_1001098e:
      if (_Format != (char *)0x0) {
        local_244 = 0;
        local_294 = _Format;
        local_22c = 0;
        do {
          if ((local_22c == 1) && (local_228 == 0)) break;
          local_258 = -1;
          local_21c = -1;
          local_228 = -1;
          local_26c = 0;
          local_230 = *_Format;
          local_268 = 0;
          local_280 = 0;
          local_254 = 0;
          local_224 = 0;
          _Str = local_294;
          if (local_230 != '\0') {
            do {
              _Str = _Str + 1;
              local_248 = _Str;
              if ((byte)(local_230 - 0x20U) < 0x59) {
                uVar2 = (byte)"Runtime Error!\n\nProgram: "[local_230] & 0xf;
              }
              else {
                uVar2 = 0;
              }
              local_268 = (uint)((byte)(&DAT_1001fcb8)[local_268 + uVar2 * 9] >> 4);
              if (local_268 == 1) {
                if (*_Str != '%') {
                  lVar3 = _strtol(_Str,&local_260,10);
                  if ((lVar3 < 1) || (*local_260 != '$')) {
                    local_228 = 0;
                  }
                  else {
                    if (local_22c == 0) {
                      _memset(local_8d4,0,0x640);
                    }
                    local_228 = 1;
                    lVar3 = _strtol(_Str,&local_260,10);
                    local_21c = lVar3 + -1;
                    local_248 = local_260 + 1;
                    if (local_22c == 0) {
                      if (((local_21c < 0) || (*local_260 != '$')) || (99 < local_21c))
                      goto LAB_100108f7;
                      if (local_258 < local_21c) {
                        local_258 = local_21c;
                      }
                    }
                  }
                }
LAB_10010b31:
                    /* WARNING: Could not recover jumptable at 0x10010b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                iVar4 = (**(code **)(&DAT_10011b2b + local_268 * 4))();
                return iVar4;
              }
              if (local_268 == 8) goto LAB_100108f7;
              if (local_268 < 8) goto LAB_10010b31;
              local_230 = *_Str;
            } while (local_230 != '\0');
            if ((local_268 != 0) && (local_268 != 7)) goto LAB_100108f7;
          }
          local_22c = local_22c + 1;
        } while (local_22c < 2);
        if (local_234 != '\0') {
          *(uint *)(local_238 + 0x70) = *(uint *)(local_238 + 0x70) & 0xfffffffd;
        }
        goto LAB_10011b1b;
      }
    }
  }
LAB_100108f7:
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_234 != '\0') {
    *(uint *)(local_238 + 0x70) = *(uint *)(local_238 + 0x70) & 0xfffffffd;
  }
LAB_10011b1b:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}




/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2008 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}




/* Library Function - Single Match
    _write_multi_char
   
   Library: Visual Studio 2008 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}




/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2008 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  int *piVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        piVar1 = __errno();
        if (*piVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}




/* Library Function - Single Match
    __output_s_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __output_s_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  errno_t eVar7;
  int iVar8;
  undefined *puVar9;
  int extraout_ECX;
  uint uVar10;
  byte *pbVar11;
  wchar_t *pwVar12;
  size_t sVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  undefined4 local_270;
  size_t local_268;
  FILE *local_264;
  int local_260;
  int local_25c;
  wchar_t *local_258;
  localeinfo_struct local_254;
  int local_24c;
  char local_248;
  uint local_244;
  byte *local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined1 local_230;
  char local_22f;
  int local_22c;
  wchar_t *local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  local_264 = _File;
  local_228 = (wchar_t *)_ArgList;
  local_260 = 0;
  local_214 = 0;
  local_238 = 0;
  local_21c = 0;
  local_234 = 0;
  local_25c = 0;
  local_23c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_254,_Locale);
  if (_File == (FILE *)0x0) {
LAB_10011c5c:
    piVar3 = __errno();
    *piVar3 = 0x16;
  }
  else {
    if ((_File->_flag & 0x40) == 0) {
      uVar4 = __fileno(_File);
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar9 = &DAT_10022870;
      }
      else {
        puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_10024c20)[(int)uVar4 >> 5]);
      }
      if ((puVar9[0x24] & 0x7f) == 0) {
        if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
          puVar9 = &DAT_10022870;
        }
        else {
          puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_10024c20)[(int)uVar4 >> 5]);
        }
        if ((puVar9[0x24] & 0x80) == 0) goto LAB_10011cf5;
      }
      goto LAB_10011c5c;
    }
LAB_10011cf5:
    if (_Format == (char *)0x0) goto LAB_10011c5c;
    local_215 = *_Format;
    local_22c = 0;
    local_224 = 0;
    local_244 = 0;
    local_258 = (wchar_t *)0x0;
    if (local_215 == 0) {
LAB_10012777:
      if (local_248 != '\0') {
        *(uint *)(local_24c + 0x70) = *(uint *)(local_24c + 0x70) & 0xfffffffd;
      }
      goto LAB_10012790;
    }
    do {
      pbVar11 = (byte *)_Format + 1;
      uVar4 = 0;
      local_240 = pbVar11;
      if (local_22c < 0) break;
      if ((byte)(local_215 - 0x20) < 0x59) {
        uVar4 = (byte)"Runtime Error!\n\nProgram: "[(char)local_215] & 0xf;
      }
      local_244 = (uint)((byte)(&DAT_1001fcb8)[local_244 + uVar4 * 9] >> 4);
      if (local_244 == 8) goto LAB_10011c5c;
      switch(local_244) {
      case 0:
switchD_10011d83_caseD_0:
        local_23c = 0;
        iVar8 = __isleadbyte_l((uint)local_215,&local_254);
        if (iVar8 != 0) {
          write_char();
          local_240 = (byte *)_Format + 2;
          if (*pbVar11 == 0) goto LAB_10011c5c;
        }
        write_char();
        break;
      case 1:
        local_21c = -1;
        local_270 = 0;
        local_25c = 0;
        local_238 = 0;
        local_234 = 0;
        local_214 = 0;
        local_23c = 0;
        break;
      case 2:
        if (local_215 == 0x20) {
          local_214 = local_214 | 2;
        }
        else if (local_215 == 0x23) {
          local_214 = local_214 | 0x80;
        }
        else if (local_215 == 0x2b) {
          local_214 = local_214 | 1;
        }
        else if (local_215 == 0x2d) {
          local_214 = local_214 | 4;
        }
        else if (local_215 == 0x30) {
          local_214 = local_214 | 8;
        }
        break;
      case 3:
        if (local_215 == 0x2a) {
          local_228 = (wchar_t *)((int)_ArgList + 4);
          local_238 = *(int *)_ArgList;
          if (local_238 < 0) {
            local_214 = local_214 | 4;
            local_238 = -local_238;
          }
        }
        else {
          local_238 = local_238 * 10 + -0x30 + (int)(char)local_215;
        }
        break;
      case 4:
        local_21c = 0;
        break;
      case 5:
        if (local_215 == 0x2a) {
          local_228 = (wchar_t *)((int)_ArgList + 4);
          local_21c = *(int *)_ArgList;
          if (local_21c < 0) {
            local_21c = -1;
          }
        }
        else {
          local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
        }
        break;
      case 6:
        if (local_215 == 0x49) {
          bVar1 = *pbVar11;
          if ((bVar1 == 0x36) && (((byte *)_Format)[2] == 0x34)) {
            local_214 = local_214 | 0x8000;
            local_240 = (byte *)_Format + 3;
          }
          else if ((bVar1 == 0x33) && (((byte *)_Format)[2] == 0x32)) {
            local_214 = local_214 & 0xffff7fff;
            local_240 = (byte *)_Format + 3;
          }
          else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                   ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
            local_244 = 0;
            goto switchD_10011d83_caseD_0;
          }
        }
        else if (local_215 == 0x68) {
          local_214 = local_214 | 0x20;
        }
        else if (local_215 == 0x6c) {
          if (*pbVar11 == 0x6c) {
            local_214 = local_214 | 0x1000;
            local_240 = (byte *)_Format + 2;
          }
          else {
            local_214 = local_214 | 0x10;
          }
        }
        else if (local_215 == 0x77) {
          local_214 = local_214 | 0x800;
        }
        break;
      case 7:
        if ((char)local_215 < 'e') {
          if (local_215 == 100) {
LAB_1001226f:
            local_214 = local_214 | 0x40;
LAB_10012276:
            local_224 = 10;
LAB_10012280:
            if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
              local_228 = (wchar_t *)((int)_ArgList + 4);
              if ((local_214 & 0x20) == 0) {
                uVar4 = *(uint *)_ArgList;
                if ((local_214 & 0x40) == 0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (int)uVar4 >> 0x1f;
                }
              }
              else {
                if ((local_214 & 0x40) == 0) {
                  uVar4 = (uint)(ushort)*(wchar_t *)_ArgList;
                }
                else {
                  uVar4 = (uint)*(wchar_t *)_ArgList;
                }
                uVar10 = (int)uVar4 >> 0x1f;
              }
            }
            else {
              local_228 = (wchar_t *)((int)_ArgList + 8);
              uVar4 = *(uint *)_ArgList;
              uVar10 = *(uint *)((int)_ArgList + 4);
            }
            if ((((local_214 & 0x40) != 0) && ((int)uVar10 < 1)) && ((int)uVar10 < 0)) {
              bVar14 = uVar4 != 0;
              uVar4 = -uVar4;
              uVar10 = -(uVar10 + bVar14);
              local_214 = local_214 | 0x100;
            }
            uVar15 = CONCAT44(uVar10,uVar4);
            if ((local_214 & 0x9000) == 0) {
              uVar10 = 0;
            }
            if (local_21c < 0) {
              local_21c = 1;
            }
            else {
              local_214 = local_214 & 0xfffffff7;
              if (0x200 < local_21c) {
                local_21c = 0x200;
              }
            }
            if (uVar4 == 0 && uVar10 == 0) {
              local_234 = 0;
            }
            pwVar12 = &local_11;
            while( true ) {
              uVar4 = uVar10;
              iVar8 = local_21c + -1;
              if ((local_21c < 1) && ((uint)uVar15 == 0 && uVar4 == 0)) break;
              local_21c = iVar8;
              uVar15 = __aulldvrm((uint)uVar15,uVar4,local_224,(int)local_224 >> 0x1f);
              iVar8 = extraout_ECX + 0x30;
              if (0x39 < iVar8) {
                iVar8 = iVar8 + local_260;
              }
              *(char *)pwVar12 = (char)iVar8;
              pwVar12 = (wchar_t *)((int)pwVar12 + -1);
              uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
              local_268 = uVar4;
            }
            local_224 = (int)&local_11 + -(int)pwVar12;
            local_220 = (wchar_t *)((int)pwVar12 + 1);
            local_21c = iVar8;
            if (((local_214 & 0x200) != 0) && ((local_224 == 0 || (*(char *)local_220 != '0')))) {
              *(char *)pwVar12 = '0';
              local_224 = (int)&local_11 + -(int)pwVar12 + 1;
              local_220 = pwVar12;
            }
          }
          else if ((char)local_215 < 'T') {
            if (local_215 == 0x53) {
              if ((local_214 & 0x830) == 0) {
                local_214 = local_214 | 0x800;
              }
              goto LAB_1001209e;
            }
            if (local_215 == 0x41) {
LAB_1001201c:
              local_215 = local_215 + 0x20;
              local_270 = 1;
LAB_1001202f:
              local_214 = local_214 | 0x40;
              local_268 = 0x200;
              pwVar12 = local_210;
              sVar13 = local_268;
              pwVar17 = local_210;
              if (local_21c < 0) {
                local_21c = 6;
              }
              else if (local_21c == 0) {
                if (local_215 == 0x67) {
                  local_21c = 1;
                }
              }
              else {
                if (0x200 < local_21c) {
                  local_21c = 0x200;
                }
                if (0xa3 < local_21c) {
                  sVar13 = local_21c + 0x15d;
                  local_220 = local_210;
                  local_258 = (wchar_t *)__malloc_crt(sVar13);
                  pwVar12 = local_258;
                  pwVar17 = local_258;
                  if (local_258 == (wchar_t *)0x0) {
                    local_21c = 0xa3;
                    pwVar12 = local_210;
                    sVar13 = local_268;
                    pwVar17 = local_220;
                  }
                }
              }
              local_220 = pwVar17;
              local_268 = sVar13;
              local_228 = (wchar_t *)((int)_ArgList + 8);
              local_27c = *(undefined4 *)_ArgList;
              local_278 = *(undefined4 *)((int)_ArgList + 4);
              plVar19 = &local_254;
              iVar5 = (int)(char)local_215;
              puVar16 = &local_27c;
              pwVar17 = pwVar12;
              sVar13 = local_268;
              iVar8 = local_21c;
              uVar18 = local_270;
              pcVar6 = (code *)__decode_pointer((int)PTR_LAB_10022e58);
              (*pcVar6)(puVar16,pwVar17,sVar13,iVar5,iVar8,uVar18,plVar19);
              uVar4 = local_214 & 0x80;
              if ((uVar4 != 0) && (local_21c == 0)) {
                plVar19 = &local_254;
                pwVar17 = pwVar12;
                pcVar6 = (code *)__decode_pointer((int)PTR_LAB_10022e64);
                (*pcVar6)(pwVar17,plVar19);
              }
              if ((local_215 == 0x67) && (uVar4 == 0)) {
                plVar19 = &local_254;
                pwVar17 = pwVar12;
                pcVar6 = (code *)__decode_pointer((int)PTR_LAB_10022e60);
                (*pcVar6)(pwVar17,plVar19);
              }
              if ((char)*pwVar12 == '-') {
                local_214 = local_214 | 0x100;
                pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                local_220 = pwVar12;
              }
LAB_100121d1:
              local_224 = _strlen((char *)pwVar12);
            }
            else if (local_215 == 0x43) {
              if ((local_214 & 0x830) == 0) {
                local_214 = local_214 | 0x800;
              }
LAB_10012111:
              local_228 = (wchar_t *)((int)_ArgList + 4);
              if ((local_214 & 0x810) == 0) {
                local_210[0]._0_1_ = (char)*(wchar_t *)_ArgList;
                local_224 = 1;
              }
              else {
                eVar7 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,*(wchar_t *)_ArgList);
                if (eVar7 != 0) {
                  local_25c = 1;
                }
              }
              local_220 = local_210;
            }
            else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_1001201c;
          }
          else {
            if (local_215 == 0x58) goto LAB_100123d2;
            if (local_215 == 0x5a) {
              psVar2 = *(short **)_ArgList;
              local_228 = (wchar_t *)((int)_ArgList + 4);
              if ((psVar2 == (short *)0x0) ||
                 (local_220 = *(wchar_t **)(psVar2 + 2), local_220 == (wchar_t *)0x0)) {
                local_220 = (wchar_t *)PTR_s__null__10022860;
                pwVar12 = (wchar_t *)PTR_s__null__10022860;
                goto LAB_100121d1;
              }
              local_224 = (size_t)*psVar2;
              if ((local_214 & 0x800) == 0) {
                local_23c = 0;
              }
              else {
                local_224 = (int)local_224 / 2;
                local_23c = 1;
              }
            }
            else {
              if (local_215 == 0x61) goto LAB_1001202f;
              if (local_215 == 99) goto LAB_10012111;
            }
          }
LAB_100125ab:
          if (local_25c == 0) {
            if ((local_214 & 0x40) != 0) {
              if ((local_214 & 0x100) == 0) {
                if ((local_214 & 1) == 0) {
                  if ((local_214 & 2) == 0) goto LAB_100125f4;
                  local_230 = 0x20;
                }
                else {
                  local_230 = 0x2b;
                }
              }
              else {
                local_230 = 0x2d;
              }
              local_234 = 1;
            }
LAB_100125f4:
            iVar8 = (local_238 - local_224) - local_234;
            if ((local_214 & 0xc) == 0) {
              write_multi_char(0x20,iVar8);
            }
            write_string(local_234);
            if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
              write_multi_char(0x30,iVar8);
            }
            if ((local_23c == 0) || ((int)local_224 < 1)) {
              write_string(local_224);
            }
            else {
              local_268 = local_224;
              pwVar12 = local_220;
              do {
                _WCh = *pwVar12;
                local_268 = local_268 - 1;
                pwVar12 = pwVar12 + 1;
                eVar7 = _wctomb_s(&local_274,(char *)((int)&local_11 + 1),6,_WCh);
                if ((eVar7 != 0) || (local_274 == 0)) {
                  local_22c = -1;
                  break;
                }
                write_string(local_274);
              } while (local_268 != 0);
            }
            if ((-1 < local_22c) && ((local_214 & 4) != 0)) {
              write_multi_char(0x20,iVar8);
            }
          }
        }
        else {
          if ('p' < (char)local_215) {
            if (local_215 == 0x73) {
LAB_1001209e:
              iVar8 = local_21c;
              if (local_21c == -1) {
                iVar8 = 0x7fffffff;
              }
              local_228 = (wchar_t *)((int)_ArgList + 4);
              local_220 = *(wchar_t **)_ArgList;
              if ((local_214 & 0x810) == 0) {
                pwVar12 = local_220;
                if (local_220 == (wchar_t *)0x0) {
                  local_220 = (wchar_t *)PTR_s__null__10022860;
                  pwVar12 = (wchar_t *)PTR_s__null__10022860;
                }
                for (; (iVar8 != 0 && (iVar8 = iVar8 + -1, (char)*pwVar12 != '\0'));
                    pwVar12 = (wchar_t *)((int)pwVar12 + 1)) {
                }
                local_224 = (int)pwVar12 - (int)local_220;
              }
              else {
                if (local_220 == (wchar_t *)0x0) {
                  local_220 = (wchar_t *)PTR_u__null__10022864;
                }
                local_23c = 1;
                for (pwVar12 = local_220; (iVar8 != 0 && (iVar8 = iVar8 + -1, *pwVar12 != L'\0'));
                    pwVar12 = pwVar12 + 1) {
                }
                local_224 = (int)pwVar12 - (int)local_220 >> 1;
              }
              goto LAB_100125ab;
            }
            if (local_215 == 0x75) goto LAB_10012276;
            if (local_215 != 0x78) goto LAB_100125ab;
            local_260 = 0x27;
LAB_100123fe:
            local_224 = 0x10;
            if ((local_214 & 0x80) != 0) {
              local_22f = (char)local_260 + 'Q';
              local_230 = 0x30;
              local_234 = 2;
            }
            goto LAB_10012280;
          }
          if (local_215 == 0x70) {
            local_21c = 8;
LAB_100123d2:
            local_260 = 7;
            goto LAB_100123fe;
          }
          if ((char)local_215 < 'e') goto LAB_100125ab;
          if ((char)local_215 < 'h') goto LAB_1001202f;
          if (local_215 == 0x69) goto LAB_1001226f;
          if (local_215 != 0x6e) {
            if (local_215 != 0x6f) goto LAB_100125ab;
            local_224 = 8;
            if ((local_214 & 0x80) != 0) {
              local_214 = local_214 | 0x200;
            }
            goto LAB_10012280;
          }
          piVar3 = *(int **)_ArgList;
          local_228 = (wchar_t *)((int)_ArgList + 4);
          iVar8 = __get_printf_count_output();
          if (iVar8 == 0) goto LAB_10011c5c;
          if ((local_214 & 0x20) == 0) {
            *piVar3 = local_22c;
          }
          else {
            *(undefined2 *)piVar3 = (undefined2)local_22c;
          }
          local_25c = 1;
        }
        if (local_258 != (wchar_t *)0x0) {
          _free(local_258);
          local_258 = (wchar_t *)0x0;
        }
      }
      local_215 = *local_240;
      _Format = (char *)local_240;
      _ArgList = (va_list)local_228;
    } while (local_215 != 0);
    if ((local_244 == 0) || (local_244 == 7)) goto LAB_10012777;
    piVar3 = __errno();
    *piVar3 = 0x16;
  }
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_248 != '\0') {
    *(uint *)(local_24c + 0x70) = *(uint *)(local_24c + 0x70) & 0xfffffffd;
  }
LAB_10012790:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2008 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    _Size = (uint *)(param_1 * param_2);
    dwBytes = _Size;
    if (_Size == (uint *)0x0) {
      dwBytes = (uint *)0x1;
    }
    do {
      piVar1 = (int *)0x0;
      if (dwBytes < (uint *)0xffffffe1) {
        if ((DAT_10024c08 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_10024bf0)) {
          __lock(4);
          piVar1 = ___sbh_alloc_block(_Size);
          FUN_100128bd();
          if (piVar1 != (int *)0x0) {
            _memset(piVar1,0,(size_t)_Size);
            goto LAB_10012872;
          }
        }
        else {
LAB_10012872:
          if (piVar1 != (int *)0x0) {
            return piVar1;
          }
        }
        piVar1 = (int *)HeapAlloc(DAT_100235bc,8,(SIZE_T)dwBytes);
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (DAT_10023a3c == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        *param_3 = 0xc;
        return (int *)0x0;
      }
      iVar2 = __callnewh((size_t)dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}




void FUN_100128bd(void)

{
  FUN_100079a6(4);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_10024c08 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_10012ab8;
      __lock(4);
      local_24 = (uint *)___sbh_find_block((int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_10024bf0) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)___sbh_find_block((int)_Memory);
              ___sbh_free_block(local_24,(int)_Memory);
            }
          }
          else {
            local_20 = (int *)_Memory;
          }
        }
        if (local_20 == (int *)0x0) {
          if ((uint *)_NewSize == (uint *)0x0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = (int *)HeapAlloc(DAT_100235bc,0,_NewSize);
          if (local_20 != (int *)0x0) {
            puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
            if (_NewSize <= puVar3) {
              puVar3 = (uint *)_NewSize;
            }
            _memcpy(local_20,_Memory,(size_t)puVar3);
            ___sbh_free_block(local_24,(int)_Memory);
          }
        }
      }
      FUN_10012a23();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = (int *)HeapReAlloc(DAT_100235bc,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_10023a3c == 0) {
        piVar4 = __errno();
        if (local_24 != (uint *)0x0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_10012ae5;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
    if (local_24 != (uint *)0x0) goto LAB_10012ac4;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_10012ab8;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_100235bc,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_10023a3c == 0) {
        piVar4 = __errno();
LAB_10012ae5:
        DVar5 = GetLastError();
        iVar2 = __get_errno_from_oserr(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
  }
  DVar5 = GetLastError();
  iVar2 = __get_errno_from_oserr(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_10012ab8:
  __callnewh(_NewSize);
  piVar4 = __errno();
LAB_10012ac4:
  *piVar4 = 0xc;
  return (void *)0x0;
}




void FUN_10012a23(void)

{
  FUN_100079a6(4);
  return;
}




/* Library Function - Single Match
    __recalloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl __recalloc(void *_Memory,size_t _Count,size_t _Size)

{
  int *piVar1;
  void *pvVar2;
  uint _NewSize;
  size_t sVar3;
  
  sVar3 = 0;
  if ((_Count == 0) || (_Size <= 0xffffffe0 / _Count)) {
    _NewSize = _Count * _Size;
    if (_Memory != (void *)0x0) {
      sVar3 = __msize(_Memory);
    }
    pvVar2 = _realloc(_Memory,_NewSize);
    if ((pvVar2 != (void *)0x0) && (sVar3 < _NewSize)) {
      _memset((void *)(sVar3 + (int)pvVar2),0,_NewSize - sVar3);
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}




/* Library Function - Single Match
    __ValidateImageBase
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}




/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2008 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}




/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_10022048 ^ 0x10020f20;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_10000000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_10000000,(DWORD_PTR)(pTarget + -0x10000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __initp_eh_hooks
   
   Library: Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  _DAT_10023a48 = __encode_pointer(0x10012ccd);
  return;
}




/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2008 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_10023a4c = param_1;
  DAT_10023a50 = param_1;
  DAT_10023a54 = param_1;
  DAT_10023a58 = param_1;
  return;
}




/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2008 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_100228c0 * 0xc + param_1);
  if ((DAT_100228c0 * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}




/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2008 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)__decode_pointer(DAT_10023a54);
  return p_Var1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2008 Release */

int __cdecl _raise(int _SigNum)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  _ptiddata p_Var7;
  int local_34;
  void *local_30;
  int local_28;
  int local_20;
  
  p_Var7 = (_ptiddata)0x0;
  local_20 = 0;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar6 = &DAT_10023a4c;
        iVar4 = DAT_10023a4c;
        goto LAB_10013163;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_10013141;
        if (_SigNum != 8) goto LAB_10013125;
      }
    }
    p_Var7 = __getptd_noexit();
    if (p_Var7 == (_ptiddata)0x0) {
      return -1;
    }
    uVar1 = siglookup((uint)p_Var7->_pxcptacttab);
    puVar6 = (undefined4 *)(uVar1 + 8);
    pcVar3 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_10023a58;
      iVar4 = DAT_10023a58;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_10023a50;
      iVar4 = DAT_10023a50;
    }
    else {
      if (_SigNum != 0x16) {
LAB_10013125:
        piVar2 = __errno();
        *piVar2 = 0x16;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_10013141:
      puVar6 = &DAT_10023a54;
      iVar4 = DAT_10023a54;
    }
LAB_10013163:
    local_20 = 1;
    pcVar3 = (code *)__decode_pointer(iVar4);
  }
  iVar4 = 0;
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
    iVar4 = __exit(3);
  }
  if (local_20 != iVar4) {
    __lock(iVar4);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = p_Var7->_tpxcptinfoptrs;
    p_Var7->_tpxcptinfoptrs = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = p_Var7->_tfpecode;
      p_Var7->_tfpecode = 0x8c;
      goto LAB_100131c7;
    }
  }
  else {
LAB_100131c7:
    if (_SigNum == 8) {
      for (local_28 = DAT_100228b4; local_28 < DAT_100228b8 + DAT_100228b4; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + (int)p_Var7->_pxcptacttab) = 0;
      }
      goto LAB_10013201;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_10013201:
  FUN_10013222();
  if (_SigNum == 8) {
    (*pcVar3)(8,p_Var7->_tfpecode);
  }
  else {
    (*pcVar3)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var7->_tpxcptinfoptrs = local_30;
  if (_SigNum == 8) {
    p_Var7->_tfpecode = local_34;
  }
  return 0;
}




void FUN_10013222(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_100079a6(0);
  }
  return;
}




void __cdecl FUN_1001325e(undefined4 param_1)

{
  DAT_10023a60 = param_1;
  return;
}




/* Library Function - Single Match
    _rand_s
   
   Library: Visual Studio 2008 Release */

int __cdecl rand_s(undefined4 *param_1)

{
  FARPROC pFVar1;
  int *piVar2;
  HMODULE hModule;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  LONG LVar6;
  
  pFVar1 = (FARPROC)__decode_pointer(DAT_10023a60);
  if (param_1 == (undefined4 *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = 0;
  if (pFVar1 == (FARPROC)0x0) {
    hModule = LoadLibraryA("ADVAPI32.DLL");
    if (hModule == (HMODULE)0x0) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return 0x16;
    }
    pFVar1 = GetProcAddress(hModule,"SystemFunction036");
    if (pFVar1 == (FARPROC)0x0) {
      piVar2 = __errno();
      DVar3 = GetLastError();
      iVar4 = __get_errno_from_oserr(DVar3);
      *piVar2 = iVar4;
      __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      DVar3 = GetLastError();
      iVar4 = __get_errno_from_oserr(DVar3);
      return iVar4;
    }
    iVar4 = __encode_pointer((int)pFVar1);
    iVar5 = __encoded_null();
    LVar6 = InterlockedExchange(&DAT_10023a60,iVar4);
    if (LVar6 != iVar5) {
      FreeLibrary(hModule);
    }
  }
  iVar4 = (*pFVar1)(param_1,4);
  if (iVar4 == 0) {
    piVar2 = __errno();
    *piVar2 = 0xc;
    piVar2 = __errno();
    iVar4 = *piVar2;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}




/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 2008 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  LPSTR _LpLCData;
  char *_Dst;
  int iVar5;
  errno_t eVar6;
  byte *pbVar7;
  CHAR local_88 [128];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  if (_Lc_type != 1) {
    if (_Lc_type == 0) {
      pbVar7 = &DAT_10023a64;
      iVar5 = ___crtGetLocaleInfoW(_Locale,(LCID)_LocaleName,_FieldType,(LPWSTR)&DAT_10023a64,4);
      if (iVar5 != 0) {
        *(undefined1 *)_Address = 0;
        do {
          bVar1 = *pbVar7;
          iVar5 = _isdigit((uint)bVar1);
          if (iVar5 == 0) break;
                    /* WARNING: Load size is inaccurate */
          pbVar7 = pbVar7 + 2;
          *(byte *)_Address = *_Address * '\n' + bVar1 + -0x30;
        } while ((int)pbVar7 < 0x10023a6c);
      }
    }
    goto LAB_10013467;
  }
  _LpLCData = local_88;
  bVar2 = false;
  sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) ||
        (sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,(LPSTR)0x0,0), sVar3 == 0)) ||
       (_LpLCData = (LPSTR)__calloc_crt(sVar3,1), _LpLCData == (LPSTR)0x0)) goto LAB_10013467;
    bVar2 = true;
    sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,sVar3);
    if (sVar3 != 0) goto LAB_1001343f;
  }
  else {
LAB_1001343f:
    _Dst = (char *)__calloc_crt(sVar3,1);
    *(char **)_Address = _Dst;
    if (_Dst != (char *)0x0) {
      eVar6 = _strncpy_s(_Dst,sVar3,_LpLCData,sVar3 - 1);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (bVar2) {
        _free(_LpLCData);
      }
      goto LAB_10013467;
    }
    if (!bVar2) goto LAB_10013467;
  }
  _free(_LpLCData);
LAB_10013467:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}




void __cdecl FUN_100134f4(undefined4 param_1)

{
  DAT_10023a6c = param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10013503(undefined4 param_1)

{
  _DAT_10023a70 = param_1;
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl ___crtInitCritSecAndSpinCount(LPCRITICAL_SECTION param_1,DWORD param_2)

{
  BOOL BVar1;
  
  BVar1 = InitializeCriticalSectionAndSpinCount(param_1,param_2);
  return BVar1;
}




/* Library Function - Single Match
    __local_unwind4
   
   Library: Visual Studio 2008 Release */

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_10013604;
  pvStack_28 = ExceptionList;
  local_20 = DAT_10022048 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_1001be44();
    }
  }
  ExceptionList = pvStack_28;
  return;
}




void FUN_1001364a(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}




/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}




/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x10013694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}




/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100136ab,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}




/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}




/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 7;
  do {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    param_1[5] = (undefined1  [16])0x0;
    param_1[6] = (undefined1  [16])0x0;
    param_1[7] = (undefined1  [16])0x0;
    param_1 = param_1 + 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}




/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 (*) [16] __cdecl
__VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = (undefined1 *)((int)param_1 + (param_3 - uVar2));
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    pauVar5 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      (*pauVar5)[0] = 0;
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
    }
    __VEC_memzero((undefined1 (*) [16])((int)param_1 + iVar3),0,param_3 - iVar3);
  }
  return param_1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_100137ad(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x1001383a) */
/* WARNING: Removing unreachable block (ram,0x10013827) */
/* Library Function - Single Match
    __get_sse2_info
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0;
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar4 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x200) != 0) * 0x200 |
       (uint)((uVar1 & 0x100) != 0) * 0x100 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
       (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    cpuid_basic_info(0);
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_100137ad(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}




/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2008 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2008 Release */

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  LPCWSTR pWVar4;
  int iVar5;
  LPSTR lpMultiByteStr;
  uint uVar6;
  bool bVar7;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_10013a57;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = uVar6 == 0;
    if (bVar7) goto LAB_10013a57;
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPCWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      pWVar4 = (LPCWSTR)&stack0xffffffbc;
      local_20 = (LPCWSTR)&stack0xffffffbc;
      if (&stack0x00000000 != (undefined1 *)0x44) {
LAB_10013997:
        local_20 = pWVar4 + 4;
      }
    }
    else {
      pWVar4 = (LPCWSTR)_malloc(_Size);
      local_20 = pWVar4;
      if (pWVar4 != (LPCWSTR)0x0) {
        pWVar4[0] = L'\xdddd';
        pWVar4[1] = L'\0';
        goto LAB_10013997;
      }
    }
  }
  if (local_20 != (LPCWSTR)0x0) {
    _memset(local_20,0,uVar6 * 2);
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0), uVar6 != 0)) &&
           (lpMultiByteStr = (LPSTR)__calloc_crt(1,uVar6), lpMultiByteStr != (LPSTR)0x0)) {
          uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,lpMultiByteStr,uVar6,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (uVar6 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = uVar6;
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    __freea(local_20);
  }
LAB_10013a57:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2008 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}




/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}




/* Library Function - Single Match
    __get_daylight
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __get_daylight(int *_Daylight)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_Daylight == (int *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    eVar2 = 0x16;
  }
  else {
    *_Daylight = DAT_10022e74;
    eVar2 = 0;
  }
  return eVar2;
}




/* Library Function - Single Match
    __get_dstbias
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __get_dstbias(long *_Daylight_savings_bias)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_Daylight_savings_bias == (long *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    eVar2 = 0x16;
  }
  else {
    *_Daylight_savings_bias = DAT_10022e78;
    eVar2 = 0;
  }
  return eVar2;
}




/* Library Function - Multiple Matches With Different Base Names
    __get_daylight
    __get_dstbias
    __get_timezone
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __get_timezone(long *_Timezone)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    eVar2 = 0x16;
  }
  else {
    *_Timezone = DAT_10022e70;
    eVar2 = 0;
  }
  return eVar2;
}




/* Library Function - Single Match
    __get_tzname
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __get_tzname(size_t *_ReturnValue,char *_Buffer,size_t _SizeInBytes,int _Index)

{
  int *piVar1;
  size_t sVar2;
  errno_t eVar3;
  
  if (_Buffer == (char *)0x0) {
    if (_SizeInBytes != 0) goto LAB_10013b96;
  }
  else if (_SizeInBytes == 0) {
LAB_10013b96:
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (_Buffer != (char *)0x0) {
    *_Buffer = '\0';
  }
  if ((_ReturnValue == (size_t *)0x0) || ((_Index != 0 && (_Index != 1)))) {
    piVar1 = __errno();
    eVar3 = 0x16;
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    sVar2 = _strlen((&PTR_DAT_10022f00)[_Index]);
    *_ReturnValue = sVar2 + 1;
    if (_Buffer == (char *)0x0) {
      eVar3 = 0;
    }
    else if (_SizeInBytes < sVar2 + 1) {
      eVar3 = 0x22;
    }
    else {
      eVar3 = _strcpy_s(_Buffer,_SizeInBytes,(&PTR_DAT_10022f00)[_Index]);
    }
  }
  return eVar3;
}




undefined4 * FUN_10013beb(void)

{
  return &DAT_10022e74;
}




undefined4 * FUN_10013bf1(void)

{
  return &DAT_10022e78;
}




undefined4 * FUN_10013bf7(void)

{
  return &DAT_10022e70;
}




undefined ** FUN_10013bfd(void)

{
  return &PTR_DAT_10022f00;
}




/* Library Function - Multiple Matches With Different Base Names
    __set_daylight
    __set_dstbias
    __set_timezone
   
   Library: Visual Studio 2008 Release */

void __cdecl FID_conflict___set_dstbias(long _Value)

{
  long *plVar1;
  
  plVar1 = FUN_10013beb();
  *plVar1 = _Value;
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    __set_daylight
    __set_dstbias
    __set_timezone
   
   Library: Visual Studio 2008 Release */

void __cdecl FID_conflict___set_dstbias(long _Value)

{
  long *plVar1;
  
  plVar1 = FUN_10013bf1();
  *plVar1 = _Value;
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    __set_daylight
    __set_dstbias
    __set_timezone
   
   Library: Visual Studio 2008 Release */

void __cdecl FID_conflict___set_dstbias(long _Value)

{
  long *plVar1;
  
  plVar1 = FUN_10013bf7();
  *plVar1 = _Value;
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __tzset_nolock
   
   Library: Visual Studio 2008 Release */

void __tzset_nolock(void)

{
  char cVar1;
  char cVar2;
  undefined **ppuVar3;
  errno_t eVar4;
  UINT CodePage;
  char *_Str1;
  int iVar5;
  size_t sVar6;
  DWORD DVar7;
  long lVar8;
  int *piVar9;
  char *pcVar10;
  int local_34;
  int local_30;
  long local_2c;
  int local_28;
  undefined **local_24;
  long local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10021020;
  uStack_c = 0x10013c42;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = (undefined **)0x0;
  __lock(7);
  local_8 = (undefined *)0x0;
  local_24 = FUN_10013bfd();
  eVar4 = __get_timezone(local_20);
  if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar4 = __get_daylight(&local_28);
  if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar4 = __get_dstbias(&local_2c);
  if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  CodePage = ____lc_codepage_func();
  DAT_10023b24 = 0;
  DAT_10022f14 = 0xffffffff;
  DAT_10022f08 = 0xffffffff;
  _Str1 = __getenv_helper_nolock("TZ");
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_10023b28 != (char *)0x0) {
      _free(DAT_10023b28);
      DAT_10023b28 = (char *)0x0;
    }
    DVar7 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10023a78);
    if (DVar7 != 0xffffffff) {
      DAT_10023b24 = 1;
      local_20[0] = DAT_10023a78 * 0x3c;
      if (DAT_10023abe != 0) {
        local_20[0] = local_20[0] + DAT_10023acc * 0x3c;
      }
      if ((DAT_10023b12 == 0) || (DAT_10023b20 == 0)) {
        local_28 = 0;
        local_2c = 0;
      }
      else {
        local_28 = 1;
        local_2c = (DAT_10023b20 - DAT_10023acc) * 0x3c;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_10023a7c,-1,*local_24,0x3f,(LPCSTR)0x0,
                                  &local_34);
      if ((iVar5 == 0) || (local_34 != 0)) {
        **local_24 = 0;
      }
      else {
        (*local_24)[0x3f] = 0;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_10023ad0,-1,local_24[1],0x3f,(LPCSTR)0x0,
                                  &local_34);
      if ((iVar5 == 0) || (local_34 != 0)) {
        *local_24[1] = 0;
      }
      else {
        local_24[1][0x3f] = 0;
      }
    }
  }
  else {
    if (DAT_10023b28 != (char *)0x0) {
      iVar5 = _strcmp(_Str1,DAT_10023b28);
      if (iVar5 == 0) goto LAB_10013e52;
      if (DAT_10023b28 != (char *)0x0) {
        _free(DAT_10023b28);
      }
    }
    sVar6 = _strlen(_Str1);
    DAT_10023b28 = (char *)__malloc_crt(sVar6 + 1);
    if (DAT_10023b28 != (char *)0x0) {
      pcVar10 = _Str1;
      sVar6 = _strlen(_Str1);
      eVar4 = _strcpy_s(DAT_10023b28,sVar6 + 1,pcVar10);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_10013e59;
    }
  }
LAB_10013e52:
  local_30 = 1;
LAB_10013e59:
  FID_conflict___set_dstbias(local_20[0]);
  FID_conflict___set_dstbias(local_28);
  FID_conflict___set_dstbias(local_2c);
  local_8 = (undefined *)0xfffffffe;
  FUN_10013ee2();
  ppuVar3 = local_24;
  if (local_30 == 0) {
    eVar4 = _strncpy_s(*local_24,0x40,_Str1,3);
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    pcVar10 = _Str1 + 3;
    cVar2 = *pcVar10;
    if (cVar2 == '-') {
      pcVar10 = _Str1 + 4;
    }
    lVar8 = _atol(pcVar10);
    local_20[0] = lVar8 * 0xe10;
    for (; (cVar1 = *pcVar10, cVar1 == '+' || (('/' < cVar1 && (cVar1 < ':'))));
        pcVar10 = pcVar10 + 1) {
    }
    if (*pcVar10 == ':') {
      pcVar10 = pcVar10 + 1;
      lVar8 = _atol(pcVar10);
      local_20[0] = local_20[0] + lVar8 * 0x3c;
      for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
      }
      if (*pcVar10 == ':') {
        pcVar10 = pcVar10 + 1;
        lVar8 = _atol(pcVar10);
        local_20[0] = local_20[0] + lVar8;
        for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
        }
      }
    }
    if (cVar2 == '-') {
      local_20[0] = -local_20[0];
    }
    local_28 = (int)*pcVar10;
    if (local_28 == 0) {
      *ppuVar3[1] = 0;
    }
    else {
      eVar4 = _strncpy_s(ppuVar3[1],0x40,pcVar10,3);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    lVar8 = local_20[0];
    piVar9 = FUN_10013bf7();
    iVar5 = local_28;
    *piVar9 = lVar8;
    piVar9 = FUN_10013beb();
    *piVar9 = iVar5;
  }
  return;
}




void FUN_10013ee2(void)

{
  FUN_100079a6(7);
  return;
}




/* Library Function - Single Match
    _cvtdate
   
   Library: Visual Studio 2008 Release */

int __cdecl
cvtdate(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    uVar1 = param_3 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      iVar4 = (&DAT_10022f40)[in_EAX];
    }
    else {
      iVar4 = *(int *)(&DAT_10022f74 + in_EAX * 4);
    }
    iVar6 = iVar4 + 1;
    iVar5 = (int)(param_3 * 0x16d + -0x63db +
                 ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2) + iVar6 +
                 ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100)) % 7;
    iVar2 = (param_4 * 7 - iVar5) + param_5;
    if (iVar5 <= param_5) {
      iVar6 = iVar4 + -6;
    }
    iVar6 = iVar6 + iVar2;
    if (param_4 == 5) {
      if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        iVar2 = *(int *)(&DAT_10022f44 + in_EAX * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_10022f78 + in_EAX * 4);
      }
      if (iVar2 < iVar6) {
        iVar6 = iVar6 + -7;
      }
    }
  }
  else {
    uVar1 = param_3 & 0x80000003;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar7) && (iVar2 = (int)param_3 / 100, (int)param_3 % 100 != 0)) ||
       (iVar2 = (int)(param_3 + 0x76c) / 400, (int)(param_3 + 0x76c) % 400 == 0)) {
      iVar6 = (&DAT_10022f40)[in_EAX];
    }
    else {
      iVar6 = *(int *)(&DAT_10022f74 + in_EAX * 4);
    }
    iVar6 = iVar6 + param_6;
  }
  iVar4 = ((in_ECX * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_10022f08 = param_3;
    DAT_10022f0c = iVar6;
    DAT_10022f10 = iVar4;
  }
  else {
    DAT_10022f18 = iVar6;
    DAT_10022f1c = iVar4;
    eVar3 = __get_dstbias(&local_8);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar2 = local_8 * 1000;
    DAT_10022f1c = DAT_10022f1c + iVar2;
    if (DAT_10022f1c < 0) {
      DAT_10022f1c = DAT_10022f1c + 86400000;
      DAT_10022f18 = DAT_10022f18 + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < DAT_10022f1c) {
        DAT_10022f1c = DAT_10022f1c + -86400000;
        DAT_10022f18 = DAT_10022f18 + 1;
      }
    }
    DAT_10022f14 = param_3;
  }
  return iVar2;
}




/* Library Function - Single Match
    __isindst_nolock
   
   Library: Visual Studio 2008 Release */

bool __isindst_nolock(void)

{
  bool bVar1;
  errno_t eVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *unaff_EDI;
  uint uVar7;
  uint uVar8;
  int local_c;
  int local_8;
  
  local_8 = 0;
  eVar2 = __get_daylight(&local_8);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
    return false;
  }
  uVar7 = unaff_EDI[5];
  if ((uVar7 != DAT_10022f08) || (uVar7 != DAT_10022f14)) {
    if (DAT_10023b24 == 0) {
      iVar6 = 2;
      local_c = 1;
      if ((int)uVar7 < 0x6b) {
        iVar6 = 1;
        local_c = 5;
      }
      cvtdate(1,1,uVar7,iVar6,0,0,0,0,0);
      cvtdate(0,1,unaff_EDI[5],local_c,0,0,0,0,0);
    }
    else {
      if (DAT_10023b10 != 0) {
        uVar8 = (uint)DAT_10023b16;
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = (uint)DAT_10023b14;
        uVar8 = 0;
        uVar4 = (uint)DAT_10023b16;
      }
      cvtdate(1,(uint)(DAT_10023b10 == 0),uVar7,uVar4,uVar3,uVar8,(uint)DAT_10023b1a,
              (uint)DAT_10023b1c,(uint)DAT_10023b1e);
      if (DAT_10023abc != 0) {
        uVar8 = (uint)DAT_10023ac2;
        uVar3 = 0;
        uVar4 = 0;
        uVar7 = unaff_EDI[5];
      }
      else {
        uVar3 = (uint)DAT_10023ac0;
        uVar8 = 0;
        uVar4 = (uint)DAT_10023ac2;
        uVar7 = unaff_EDI[5];
      }
      cvtdate(0,(uint)(DAT_10023abc == 0),uVar7,uVar4,uVar3,uVar8,(uint)DAT_10023ac6,
              (uint)DAT_10023ac8,(uint)DAT_10023aca);
    }
  }
  iVar6 = unaff_EDI[7];
  if (DAT_10022f0c < DAT_10022f18) {
    if ((iVar6 < DAT_10022f0c) || (DAT_10022f18 < iVar6)) {
      return false;
    }
    if ((DAT_10022f0c < iVar6) && (iVar6 < DAT_10022f18)) {
      return true;
    }
  }
  else {
    if (iVar6 < DAT_10022f18) {
      return true;
    }
    if (DAT_10022f0c < iVar6) {
      return true;
    }
    if ((DAT_10022f18 < iVar6) && (iVar6 < DAT_10022f0c)) {
      return false;
    }
  }
  iVar5 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar6 == DAT_10022f0c) {
    bVar1 = DAT_10022f10 <= iVar5;
  }
  else {
    bVar1 = iVar5 < DAT_10022f1c;
  }
  return bVar1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 2008 Release */

void __cdecl ___tzset(void)

{
  if (DAT_10023b2c == 0) {
    __lock(6);
    if (DAT_10023b2c == 0) {
      __tzset_nolock();
      DAT_10023b2c = DAT_10023b2c + 1;
    }
    FUN_10014391();
  }
  return;
}




void FUN_10014391(void)

{
  FUN_100079a6(6);
  return;
}




/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2008 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = (char *)((byte *)_Str1 + 1);
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = (char *)((byte *)_Str2 + 1);
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}




/* Library Function - Single Match
    __stricmp_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
    }
    else {
      do {
        iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
        _Str1 = _Str1 + 1;
        iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
        _Str2 = (char *)((byte *)_Str2 + 1);
        if (iVar2 == 0) break;
      } while (iVar2 == iVar3);
      iVar2 = iVar2 - iVar3;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar2;
}




/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2008 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_10023114 == 0) {
    if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __stricmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar2;
}




void __cdecl FUN_10014573(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  
  uVar16 = param_3 >> 7;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    uVar12 = param_2[0xc];
    uVar13 = param_2[0xd];
    uVar14 = param_2[0xe];
    uVar15 = param_2[0xf];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[8] = uVar8;
    param_1[9] = uVar9;
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar14;
    param_1[0xf] = uVar15;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    uVar5 = param_2[0x15];
    uVar6 = param_2[0x16];
    uVar7 = param_2[0x17];
    uVar8 = param_2[0x18];
    uVar9 = param_2[0x19];
    uVar10 = param_2[0x1a];
    uVar11 = param_2[0x1b];
    uVar12 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    uVar14 = param_2[0x1e];
    uVar15 = param_2[0x1f];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar6;
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
    param_1[0x19] = uVar9;
    param_1[0x1a] = uVar10;
    param_1[0x1b] = uVar11;
    param_1[0x1c] = uVar12;
    param_1[0x1d] = uVar13;
    param_1[0x1e] = uVar14;
    param_1[0x1f] = uVar15;
    param_2 = param_2 + 0x20;
    param_1 = param_1 + 0x20;
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
  return;
}




/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = (int)param_2 >> 0x1f;
  iVar1 = (((uint)param_2 ^ uVar3) - uVar3 & 0xf ^ uVar3) - uVar3;
  uVar3 = (int)param_1 >> 0x1f;
  uVar6 = ((uint)param_1 ^ uVar3) - uVar3 & 0xf ^ uVar3;
  if (iVar1 == 0 && uVar6 == uVar3) {
    uVar3 = param_3 & 0x7f;
    if (param_3 != uVar3) {
      FUN_10014573(param_1,param_2,param_3 - uVar3);
    }
    if (uVar3 != 0) {
      puVar4 = (undefined1 *)((int)param_2 + (param_3 - uVar3));
      puVar7 = (undefined1 *)((int)param_1 + (param_3 - uVar3));
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else if (iVar1 == uVar6 - uVar3) {
    iVar1 = 0x10 - iVar1;
    puVar5 = param_2;
    puVar8 = param_1;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    __VEC_memcpy((undefined4 *)((int)param_1 + iVar1),(undefined4 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}




/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2008 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}




void __cdecl FUN_100146f3(char *param_1,_locale_t param_2)

{
  __strtol_l(param_1,(char **)0x0,10,param_2);
  return;
}




void __cdecl FUN_1001470c(char *param_1)

{
  _atol(param_1);
  return;
}




void __cdecl FUN_10014717(char *param_1,_locale_t param_2)

{
  FUN_100146f3(param_1,param_2);
  return;
}




longlong __cdecl FUN_10014722(char *param_1)

{
  longlong lVar1;
  
  lVar1 = __strtoi64(param_1,(char **)0x0,10);
  return lVar1;
}




longlong __cdecl FUN_10014738(char *param_1,_locale_t param_2)

{
  longlong lVar1;
  
  lVar1 = __strtoi64_l(param_1,(char **)0x0,10,param_2);
  return lVar1;
}




/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2008 Release
   __stdcall xtoa_s,20 */

int xtoa_s(uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  int *piVar3;
  char *in_ECX;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  uint local_8;
  
  if (in_ECX == (char *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (param_1 == 0) {
LAB_10014785:
    piVar3 = __errno();
    iVar7 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_10014785;
      pcVar6 = in_ECX;
      if (param_3 != 0) {
        *in_ECX = '-';
        pcVar6 = in_ECX + 1;
        in_EAX = -in_EAX;
      }
      local_8 = (uint)(param_3 != 0);
      pcVar2 = pcVar6;
      do {
        pcVar4 = pcVar2;
        uVar1 = (ulonglong)in_EAX;
        in_EAX = in_EAX / param_2;
        cVar5 = (char)(uVar1 % (ulonglong)param_2);
        if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
          cVar5 = cVar5 + '0';
        }
        else {
          cVar5 = cVar5 + 'W';
        }
        *pcVar4 = cVar5;
        local_8 = local_8 + 1;
      } while ((in_EAX != 0) && (pcVar2 = pcVar4 + 1, local_8 < param_1));
      if (local_8 < param_1) {
        pcVar4[1] = '\0';
        do {
          cVar5 = *pcVar4;
          *pcVar4 = *pcVar6;
          pcVar4 = pcVar4 + -1;
          *pcVar6 = cVar5;
          pcVar6 = pcVar6 + 1;
        } while (pcVar6 < pcVar4);
        return 0;
      }
      *in_ECX = '\0';
    }
    piVar3 = __errno();
    iVar7 = 0x22;
  }
  *piVar3 = iVar7;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return iVar7;
}




/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar1 = 1;
    _Radix = 10;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = xtoa_s(_Size,_Radix,iVar1);
  return iVar1;
}




/* Library Function - Single Match
    __ltoa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  
  iVar1 = 0;
  if ((_Radix == 10) && (_Val < 0)) {
    iVar1 = 1;
  }
  iVar1 = xtoa_s(_Size,_Radix,iVar1);
  return iVar1;
}




/* Library Function - Single Match
    __ultoa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __ultoa_s(ulong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  
  iVar1 = xtoa_s(_Size,_Radix,0);
  return iVar1;
}




/* Library Function - Single Match
    @x64toa_s@24
   
   Library: Visual Studio 2008 Release
   __fastcall x64toa_s,24 */

int __fastcall
x64toa_s(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
        char *param_7)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  uint extraout_ECX;
  char *pcVar4;
  char *unaff_EDI;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  uint local_8;
  
  if ((unaff_EDI == (char *)0x0) || (param_5 == 0)) {
LAB_100148a9:
    piVar2 = __errno();
    iVar8 = 0x16;
  }
  else {
    *unaff_EDI = '\0';
    if ((param_7 != (char *)0x0) + 1 < param_5) {
      if (param_6 - 2 < 0x23) {
        bVar6 = param_7 != (char *)0x0;
        param_7 = unaff_EDI;
        if (bVar6) {
          bVar5 = param_3 != 0;
          param_3 = -param_3;
          *unaff_EDI = '-';
          param_7 = unaff_EDI + 1;
          param_4 = -(param_4 + bVar5);
        }
        local_8 = (uint)bVar6;
        uVar7 = (ulonglong)param_3;
        pcVar1 = param_7;
        do {
          pcVar4 = pcVar1;
          uVar7 = __aulldvrm((uint)uVar7,param_4,param_6,0);
          param_4 = (uint)(uVar7 >> 0x20);
          if (extraout_ECX < 10) {
            cVar3 = (char)extraout_ECX + '0';
          }
          else {
            cVar3 = (char)extraout_ECX + 'W';
          }
          *pcVar4 = cVar3;
          local_8 = local_8 + 1;
        } while ((uVar7 != 0) && (pcVar1 = pcVar4 + 1, local_8 < param_5));
        if (local_8 < param_5) {
          pcVar4[1] = '\0';
          do {
            cVar3 = *pcVar4;
            *pcVar4 = *param_7;
            pcVar4 = pcVar4 + -1;
            *param_7 = cVar3;
            param_7 = param_7 + 1;
          } while (param_7 < pcVar4);
          return 0;
        }
        *unaff_EDI = '\0';
        piVar2 = __errno();
        iVar8 = 0x22;
        *piVar2 = 0x22;
        goto LAB_100148b3;
      }
      goto LAB_100148a9;
    }
    piVar2 = __errno();
    iVar8 = 0x22;
  }
  *piVar2 = iVar8;
LAB_100148b3:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return iVar8;
}




/* Library Function - Single Match
    __i64toa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __i64toa_s(longlong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  char *pcVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  pcVar1 = (char *)0x0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    pcVar1 = (char *)0x1;
  }
  iVar2 = x64toa_s(in_ECX,in_EDX,(uint)_Val,_Val._4_4_,_Size,_Radix,pcVar1);
  return iVar2;
}




/* Library Function - Single Match
    __ui64toa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __ui64toa_s(ulonglong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  iVar1 = x64toa_s(in_ECX,in_EDX,(uint)_Val,_Val._4_4_,_Size,_Radix,(char *)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  BOOL BVar2;
  CHAR CVar3;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined1 local_a;
  ushort local_8 [2];
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_C + 1U < 0x101) {
    local_8[0] = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2);
  }
  else {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c);
    CVar3 = (CHAR)_C;
    if (iVar1 == 0) {
      local_b = '\0';
      iVar1 = 1;
      local_c = CVar3;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_c = (CHAR)_C;
      local_a = 0;
      iVar1 = 2;
      local_b = CVar3;
    }
    BVar2 = ___crtGetStringTypeA
                      (&local_1c,1,&local_c,iVar1,local_8,(local_1c.locinfo)->lc_codepage,
                       (BOOL)(local_1c.locinfo)->lc_category[0].wlocale);
    if (BVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (uint)local_8[0] & _Type;
}




/* Library Function - Single Match
    __isctype
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isctype(int _C,int _Type)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return (uint)*(ushort *)(PTR_DAT_10022648 + _C * 2) & _Type;
  }
  iVar1 = __isctype_l(_C,_Type,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    _memcpy
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_10014cb3_caseD_2;
        case 3:
          goto switchD_10014cb3_caseD_3;
        }
        goto switchD_10014cb3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10014cb3_caseD_0;
      case 1:
        goto switchD_10014cb3_caseD_1;
      case 2:
        goto switchD_10014cb3_caseD_2;
      case 3:
        goto switchD_10014cb3_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10014cb3_caseD_2;
            case 3:
              goto switchD_10014cb3_caseD_3;
            }
            goto switchD_10014cb3_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10014cb3_caseD_2;
            case 3:
              goto switchD_10014cb3_caseD_3;
            }
            goto switchD_10014cb3_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10014cb3_caseD_2;
            case 3:
              goto switchD_10014cb3_caseD_3;
            }
            goto switchD_10014cb3_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_10014cb3_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10014cb3_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10014cb3_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10014cb3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10023bc4 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy((undefined4 *)_Dst,(undefined4 *)_Src,_Size);
    return puVar1;
  }
  puVar1 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_10014b2c_caseD_2;
      case 3:
        goto switchD_10014b2c_caseD_3;
      }
      goto switchD_10014b2c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_10014b2c_caseD_0;
    case 1:
      goto switchD_10014b2c_caseD_1;
    case 2:
      goto switchD_10014b2c_caseD_2;
    case 3:
      goto switchD_10014b2c_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10014b2c_caseD_2;
          case 3:
            goto switchD_10014b2c_caseD_3;
          }
          goto switchD_10014b2c_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10014b2c_caseD_2;
          case 3:
            goto switchD_10014b2c_caseD_3;
          }
          goto switchD_10014b2c_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10014b2c_caseD_2;
          case 3:
            goto switchD_10014b2c_caseD_3;
          }
          goto switchD_10014b2c_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_10014b2c_caseD_1:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    return _Dst;
  case 2:
switchD_10014b2c_caseD_2:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_10014b2c_caseD_3:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_10014b2c_caseD_0:
  return _Dst;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall HeapManager::Constructor(void * (__cdecl*)(unsigned int),void
   (__cdecl*)(void *))
    public: void __thiscall _HeapManager::Constructor(void * (__cdecl*)(unsigned int),void
   (__cdecl*)(void *))
   
   Library: Visual Studio */

void __thiscall Constructor(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall HeapManager::Destructor(void)
    public: void __thiscall _HeapManager::Destructor(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __fastcall Destructor(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    while (*(int *)(param_1 + 0xc) = *(int *)(param_1 + 8), *(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(param_1 + 8) = **(undefined4 **)(param_1 + 0xc);
      (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return;
}




/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getNumberOfDimensions(void)
   
   Library: Visual Studio 2008 Release */

int __cdecl UnDecorator::getNumberOfDimensions(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *DAT_10023b50;
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      DAT_10023b50 = DAT_10023b50 + 1;
      return cVar2 + -0x2f;
    }
    iVar1 = 0;
LAB_10014ece:
    if (cVar2 == '@') {
      cVar2 = *DAT_10023b50;
      DAT_10023b50 = DAT_10023b50 + 1;
      if (cVar2 != '@') {
LAB_10014ee1:
        iVar1 = -1;
      }
      return iVar1;
    }
    if (cVar2 != '\0') {
      if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_10014ee1;
      DAT_10023b50 = DAT_10023b50 + 1;
      iVar1 = iVar1 * 0x10 + -0x41 + (int)cVar2;
      cVar2 = *DAT_10023b50;
      goto LAB_10014ece;
    }
  }
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x1001530d) */
/* WARNING: Removing unreachable block (ram,0x100152cd) */
/* WARNING: Removing unreachable block (ram,0x100152e5) */
/* WARNING: Removing unreachable block (ram,0x1001528d) */
/* WARNING: Removing unreachable block (ram,0x10015325) */
/* WARNING: Removing unreachable block (ram,0x100152a5) */
/* WARNING: Removing unreachable block (ram,0x10015179) */
/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getTypeEncoding(void)
   
   Library: Visual Studio 2008 Release */

int __cdecl UnDecorator::getTypeEncoding(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  do {
    uVar5 = 0;
    if (*DAT_10023b50 == '_') {
      DAT_10023b50 = DAT_10023b50 + 1;
      uVar5 = 0x4000;
    }
    cVar1 = *DAT_10023b50;
    if (('@' < cVar1) && (cVar1 < '[')) {
      uVar2 = (int)*DAT_10023b50 - 0x41;
      DAT_10023b50 = DAT_10023b50 + 1;
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar5 | 0x8000;
      }
      else {
        uVar5 = uVar5 | 0xa000;
      }
      if (0x17 < (int)uVar2) {
        return uVar5;
      }
      if ((uVar5 & 0x8000) == 0) {
        uVar5 = uVar5 & 0xffff9fff;
      }
      else {
        uVar5 = uVar5 | 0x800;
      }
      uVar4 = uVar2 & 0x18;
      if (uVar4 == 0) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 | 0x800;
        }
        else {
          uVar5 = uVar5 | 0x40;
        }
      }
      else if (uVar4 == 8) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar5 = uVar5 | 0x80;
        }
      }
      else {
        if (uVar4 != 0x10) {
          return 0xffff;
        }
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xffffe7ff;
        }
      }
      uVar2 = uVar2 & 6;
      if (uVar2 != 0) {
        if (uVar2 == 2) {
          if ((uVar5 & 0x8000) == 0) {
            return uVar5 & 0xffff9fff;
          }
          return uVar5 | 0x200;
        }
        if (uVar2 != 4) {
          if (uVar2 != 6) {
            return 0xffff;
          }
          return uVar5 | 0x400;
        }
        return uVar5 | 0x100;
      }
      return uVar5;
    }
    if (cVar1 != '$') {
      cVar1 = *DAT_10023b50;
      if (('/' < cVar1) && (cVar1 < '9')) {
        DAT_10023b50 = DAT_10023b50 + 1;
        switch(cVar1) {
        case '0':
          return 0x800;
        case '1':
          return 0x1000;
        case '2':
          return 0;
        case '3':
          return 0x4000;
        case '4':
          return 0x2000;
        case '5':
          return 0x6000;
        case '6':
          return 0x6800;
        case '7':
          return 0x7000;
        case '8':
          return 0x7800;
        default:
          return 0xffff;
        }
      }
      if (cVar1 != '9') {
        return (cVar1 != '\0') + 0xfffe;
      }
      DAT_10023b50 = DAT_10023b50 + 1;
      return 0xfffd;
    }
    bVar6 = false;
    pcVar3 = DAT_10023b50 + 1;
    cVar1 = *pcVar3;
    if ('B' < cVar1) {
      if (cVar1 == 'C') {
        uVar5 = 0x7c00;
        goto LAB_10015243;
      }
      if (cVar1 == 'D') {
        uVar5 = uVar5 | 0x9100;
        goto LAB_10015243;
      }
      if (cVar1 == 'E') {
        uVar5 = uVar5 | 0x9200;
        goto LAB_10015243;
      }
      if (cVar1 != 'R') {
        DAT_10023b50 = pcVar3;
        return 0xffff;
      }
      pcVar3 = DAT_10023b50 + 2;
      cVar1 = *pcVar3;
      bVar6 = true;
      if ((cVar1 < '0') || ('5' < cVar1)) {
        DAT_10023b50 = pcVar3;
        return (cVar1 == '\0') + 0xfffe;
      }
LAB_10015159:
      if (bVar6) {
        uVar5 = uVar5 | 0x8e00;
      }
      else {
        uVar5 = uVar5 | 0x8d00;
      }
      if (((int)*pcVar3 - 0x30U & 1) != 0) {
        uVar5 = uVar5 | 0x2000;
      }
      uVar2 = (int)*pcVar3 - 0x30U & 6;
      if (uVar2 == 0) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 | 0x800;
        }
        else {
          uVar5 = uVar5 | 0x40;
        }
      }
      else if (uVar2 == 2) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar5 = uVar5 | 0x80;
        }
      }
      else {
        if (uVar2 != 4) {
          DAT_10023b50 = pcVar3;
          return 0xffff;
        }
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xffffe7ff;
        }
      }
      goto LAB_10015243;
    }
    if (cVar1 == 'B') {
      uVar5 = uVar5 | 0x9800;
      goto LAB_10015243;
    }
    if (cVar1 == '\0') {
      uVar5 = 0xfffe;
      pcVar3 = DAT_10023b50;
      goto LAB_10015243;
    }
    if (cVar1 != '$') {
      if (cVar1 < '0') {
        DAT_10023b50 = pcVar3;
        return 0xffff;
      }
      if ('5' < cVar1) {
        if (cVar1 != 'A') {
          DAT_10023b50 = pcVar3;
          return 0xffff;
        }
        uVar5 = uVar5 | 0x9000;
        goto LAB_10015243;
      }
      goto LAB_10015159;
    }
    if (DAT_10023b50[2] == 'P') {
      pcVar3 = DAT_10023b50 + 2;
    }
    DAT_10023b50 = pcVar3 + 1;
    cVar1 = *DAT_10023b50;
    if (cVar1 < 'K') {
      if (cVar1 == 'J') {
LAB_100150d2:
        cVar1 = pcVar3[2];
        if (('/' < cVar1) && (cVar1 < ':')) {
          DAT_10023b50 = pcVar3 + cVar1 + -0x2d;
          uVar5 = getTypeEncoding();
          return uVar5 | 0x10000;
        }
        uVar5 = 0xffff;
        pcVar3 = pcVar3 + 2;
LAB_10015243:
        DAT_10023b50 = pcVar3 + 1;
        return uVar5;
      }
      if (cVar1 == '\0') {
        return 0xfffe;
      }
      if (cVar1 != 'F') {
        bVar6 = cVar1 == 'H';
LAB_10014f8c:
        if (!bVar6) {
          return 0xffff;
        }
      }
    }
    else {
      if (cVar1 < 'L') {
        return 0xffff;
      }
      if ('M' < cVar1) {
        if ('O' < cVar1) {
          bVar6 = cVar1 == 'Q';
          goto LAB_10014f8c;
        }
        goto LAB_100150d2;
      }
    }
    DAT_10023b50 = pcVar3 + 2;
  } while( true );
}




/* Library Function - Single Match
    public: static char const * __cdecl UnDecorator::UScore(enum Tokens)
   
   Library: Visual Studio 2008 Release */

char * __cdecl UnDecorator::UScore(Tokens param_1)

{
  char *pcVar1;
  
  pcVar1 = (&PTR_s___based__10020318)[param_1];
  if ((~DAT_10023b60 & 1) == 0) {
    pcVar1 = pcVar1 + 2;
  }
  return pcVar1;
}




/* Library Function - Single Match
    public: void * __thiscall HeapManager::getMemory(unsigned int,int)
   
   Library: Visual Studio 2008 Release */

void * __thiscall HeapManager::getMemory(HeapManager *this,uint param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_1 + 7 & 0xfffffff8;
  if (param_2 != 0) {
    pvVar1 = (void *)(**(code **)this)(uVar3);
    return pvVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if (*(uint *)(this + 0x10) < uVar3) {
    if (uVar3 < 0x1001) {
      puVar2 = (undefined4 *)getMemory((HeapManager *)&DAT_10023b30,0x1004,1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if (*(undefined4 **)(this + 0xc) == (undefined4 *)0x0) {
          *(undefined4 **)(this + 8) = puVar2;
        }
        else {
          **(undefined4 **)(this + 0xc) = puVar2;
        }
        *(undefined4 **)(this + 0xc) = puVar2;
        *(uint *)(this + 0x10) = 0x1000 - uVar3;
        goto LAB_1001553a;
      }
    }
    pvVar1 = (void *)0x0;
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) - uVar3;
LAB_1001553a:
    pvVar1 = (void *)(*(int *)(this + 0xc) + 4 + *(int *)(this + 0x10));
  }
  return pvVar1;
}




void __thiscall FUN_1001555c(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return;
}




/* Library Function - Single Match
    public: char * __thiscall DName::getString(char *,char *)const 
   
   Library: Visual Studio 2008 Release */

char * __thiscall DName::getString(DName *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  if (*(int **)this == (int *)0x0) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x10015658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(**(code **)(**(int **)this + 8))();
  return pcVar1;
}




/* Library Function - Single Match
    public: class DName & __thiscall DName::operator|=(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator|=(DName *this,DName *param_1)

{
  if ((this[4] != (DName)0x3) && ('\x01' < (char)param_1[4])) {
    this[4] = param_1[4];
  }
  return this;
}




void __thiscall FUN_1001567a(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return;
}




void __thiscall FUN_100156aa(void *this,undefined1 param_1)

{
  *(undefined ***)this = &PTR_LAB_100204a4;
  *(undefined1 *)((int)this + 4) = param_1;
  return;
}




undefined1 * __thiscall FUN_100156c9(void *this,undefined1 *param_1,undefined1 *param_2)

{
  if (param_1 < param_2) {
    *param_1 = *(undefined1 *)((int)this + 4);
    param_1 = param_1 + 1;
  }
  return param_1;
}




/* Library Function - Single Match
    public: __thiscall pDNameNode::pDNameNode(class DName *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall pDNameNode::pDNameNode(pDNameNode *this,DName *param_1)

{
  *(undefined ***)this = &PTR_LAB_100204b0;
  if ((param_1 != (DName *)0x0) && ((param_1[4] == (DName)0x2 || (param_1[4] == (DName)0x3)))) {
    param_1 = (DName *)0x0;
  }
  *(DName **)(this + 4) = param_1;
  return;
}




/* Library Function - Single Match
    public: virtual char * __thiscall pDNameNode::getString(char *,char *)const 
   
   Library: Visual Studio 2008 Release */

char * __thiscall pDNameNode::getString(pDNameNode *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  if (*(DName **)(this + 4) != (DName *)0x0) {
    pcVar1 = DName::getString(*(DName **)(this + 4),param_1,param_2);
    return pcVar1;
  }
  return param_1;
}




/* Library Function - Single Match
    private: __thiscall DNameStatusNode::DNameStatusNode(enum DNameStatus)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall DNameStatusNode::DNameStatusNode(DNameStatusNode *this,DNameStatus param_1)

{
  *(DNameStatus *)(this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_100204bc;
  *(uint *)(this + 8) = (-(uint)(param_1 != 1) & 0xfffffffc) + 4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: static class DNameStatusNode * __cdecl DNameStatusNode::make(enum DNameStatus)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

DNameStatusNode * __cdecl DNameStatusNode::make(DNameStatus param_1)

{
  if ((_DAT_10023b9c & 1) == 0) {
    _DAT_10023b9c = _DAT_10023b9c | 1;
    _DAT_10023b6c = &PTR_LAB_100204bc;
    _DAT_10023b70 = 0;
    _DAT_10023b74 = 0;
    _DAT_10023b78 = &PTR_LAB_100204bc;
    _DAT_10023b7c = 1;
    _DAT_10023b80 = 4;
    _DAT_10023b84 = &PTR_LAB_100204bc;
    _DAT_10023b88 = 2;
    _DAT_10023b8c = 0;
    _DAT_10023b90 = &PTR_LAB_100204bc;
    _DAT_10023b94 = 3;
    _DAT_10023b98 = 0;
  }
  if (param_1 < 4) {
    return (DNameStatusNode *)(&DAT_10023b6c + param_1 * 0xc);
  }
  return (DNameStatusNode *)&DAT_10023b90;
}




/* Library Function - Single Match
    public: __thiscall pairNode::pairNode(class DNameNode *,class DNameNode *)
   
   Library: Visual Studio 2008 Release */

void __thiscall pairNode::pairNode(pairNode *this,DNameNode *param_1,DNameNode *param_2)

{
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(DNameNode **)(this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_100204c8;
  *(DNameNode **)(this + 8) = param_2;
  return;
}




/* Library Function - Single Match
    public: virtual char * __thiscall pairNode::getString(char *,char *)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

char * __thiscall pairNode::getString(pairNode *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(int **)(this + 4) + 8))(param_1,param_2);
  if (pcVar1 < param_2) {
    pcVar1 = (char *)(**(code **)(**(int **)(this + 8) + 8))(pcVar1,param_2);
  }
  return pcVar1;
}




/* Library Function - Single Match
    unsigned int __cdecl und_strncmp(char const *,char const *,unsigned int)
   
   Library: Visual Studio 2008 Release */

uint __cdecl und_strncmp(char *param_1,char *param_2,uint param_3)

{
  byte *in_ECX;
  byte *in_EDX;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  while( true ) {
    param_1 = param_1 + -1;
    if (((param_1 == (char *)0x0) || (*in_ECX == 0)) || (*in_ECX != *in_EDX)) break;
    in_ECX = in_ECX + 1;
    in_EDX = in_EDX + 1;
  }
  return (uint)*in_ECX - (uint)*in_EDX;
}




/* Library Function - Single Match
    public: __thiscall UnDecorator::UnDecorator(char *,char const *,int,char *
   (__cdecl*)(long),unsigned long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall
UnDecorator::UnDecorator
          (UnDecorator *this,char *param_1,char *param_2,int param_3,_func_char_ptr_long *param_4,
          ulong param_5)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  DAT_10023b54 = param_2;
  DAT_10023b50 = param_2;
  if (param_1 == (char *)0x0) {
    DAT_10023b58 = (char *)0x0;
    DAT_10023b5c = 0;
  }
  else {
    DAT_10023b5c = param_3;
    DAT_10023b58 = param_1;
  }
  DAT_10023b48 = this + 0x2c;
  DAT_10023b60 = param_5;
  DAT_10023b44 = this;
  DAT_10023b64 = param_4;
  DAT_10023b68 = 0;
  return;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getDataIndirectType(void)

{
  DName *in_stack_00000004;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffff0000;
  local_10 = local_10 & 0xffff0000;
  local_c = 0;
  local_14 = 0;
  getDataIndirectType(in_stack_00000004,(char)&local_14,(DName *)0x0,(int)&local_c);
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThisType(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getThisType(void)

{
  DName *in_stack_00000004;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffff0000;
  local_10 = local_10 & 0xffff0000;
  local_c = 0;
  local_14 = 0;
  getDataIndirectType(in_stack_00000004,(char)&local_14,(DName *)0x0,(int)&local_c);
  return in_stack_00000004;
}




/* Library Function - Single Match
    void * __cdecl operator new(unsigned int,class HeapManager &,int)
   
   Library: Visual Studio 2008 Release */

void * __cdecl operator_new(uint param_1,HeapManager *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = HeapManager::getMemory((HeapManager *)&DAT_10023b30,param_1,param_3);
  return pvVar1;
}




/* Library Function - Single Match
    char * __cdecl getStringHelper(char *,char *,char *,int)
   
   Library: Visual Studio 2008 Release */

char * __cdecl getStringHelper(char *param_1,char *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  
  if ((int)param_2 - (int)param_1 < param_4) {
    param_4 = (int)param_2 - (int)param_1;
  }
  if (param_4 != 0) {
    pcVar1 = param_1;
    iVar2 = param_4;
    do {
      *pcVar1 = pcVar1[(int)param_3 - (int)param_1];
      pcVar1 = pcVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1 + param_4;
}




/* Library Function - Single Match
    public: __thiscall DName::DName(class DName *)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::DName(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  if (param_1 == (DName *)0x0) {
    *(undefined4 *)this = 0;
    this[4] = (DName)0x0;
  }
  else {
    this_00 = (pDNameNode *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,8,0);
    if (this_00 == (pDNameNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pDNameNode::pDNameNode(this_00,param_1);
    }
    *(int *)this = iVar1;
    this[4] = (DName)((iVar1 != 0) - 1U & 3);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  return this;
}




/* Library Function - Single Match
    public: __thiscall DName::DName(enum DNameStatus)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

DName * __thiscall DName::DName(DName *this,DNameStatus param_1)

{
  DNameStatus DVar1;
  DNameStatusNode *pDVar2;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  DVar1 = param_1;
  if ((param_1 != 2) && (param_1 != 3)) {
    DVar1 = 0;
  }
  *(undefined4 *)this = 0;
  this[4] = SUB41(DVar1,0);
  if (param_1 == 1) {
    pDVar2 = DNameStatusNode::make(1);
    *(DNameStatusNode **)this = pDVar2;
    if (pDVar2 == (DNameStatusNode *)0x0) {
      this[4] = (DName)0x3;
    }
  }
  return this;
}




/* Library Function - Single Match
    public: char * __thiscall DName::getString(char *,int)const 
   
   Library: Visual Studio 2008 Release */

char * __thiscall DName::getString(DName *this,char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (*(undefined4 **)this == (undefined4 *)0x0) {
    if (param_1 != (char *)0x0) {
      *param_1 = '\0';
    }
  }
  else {
    if (param_1 == (char *)0x0) {
      iVar1 = (**(code **)**(undefined4 **)this)();
      param_2 = iVar1 + 1;
      param_1 = (char *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,param_2,0);
      if (param_1 == (char *)0x0) {
        return (char *)0x0;
      }
    }
    pcVar2 = getString(this,param_1,param_1 + (param_2 - 1));
    *pcVar2 = '\0';
  }
  return param_1;
}




/* Library Function - Single Match
    private: void __thiscall DName::append(class DNameNode *)
   
   Library: Visual Studio 2008 Release */

void __thiscall DName::append(DName *this,DNameNode *param_1)

{
  pairNode *this_00;
  int iVar1;
  
  if (param_1 != (DNameNode *)0x0) {
    this_00 = (pairNode *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,0x10,0);
    if (this_00 == (pairNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pairNode::pairNode(this_00,*(DNameNode **)this,param_1);
    }
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      return;
    }
  }
  this[4] = (DName)0x3;
  return;
}




/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(class DName *)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator=(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  *(undefined4 *)this = 0;
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  if (param_1 != (DName *)0x0) {
    this_00 = (pDNameNode *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,8,0);
    if (this_00 == (pDNameNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pDNameNode::pDNameNode(this_00,param_1);
    }
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      return this;
    }
  }
  this[4] = (DName)0x3;
  return this;
}




/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(enum DNameStatus)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator=(DName *this,DNameStatus param_1)

{
  DNameStatusNode *pDVar1;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  this[4] = SUB41(param_1,0);
  if (param_1 == 1) {
    pDVar1 = DNameStatusNode::make(1);
    *(DNameStatusNode **)this = pDVar1;
    if (pDVar1 == (DNameStatusNode *)0x0) {
      this[4] = (DName)0x3;
    }
  }
  else {
    *(undefined4 *)this = 0;
  }
  return this;
}




/* Library Function - Single Match
    public: class Replicator & __thiscall Replicator::operator+=(class DName const &)
   
   Library: Visual Studio 2008 Release */

Replicator * __thiscall Replicator::operator+=(Replicator *this,DName *param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)this != 9) && (*(int *)param_1 != 0)) {
    puVar1 = (undefined4 *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,8,0);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = *(undefined4 *)param_1;
      puVar1[1] = *(undefined4 *)(param_1 + 4);
    }
    if (puVar1 != (undefined4 *)0x0) {
      *(int *)this = *(int *)this + 1;
      *(undefined4 **)(this + *(int *)this * 4 + 4) = puVar1;
    }
  }
  return this;
}




/* Library Function - Single Match
    public: class DName __thiscall Replicator::operator[](int)const 
   
   Library: Visual Studio 2008 Release */

int __thiscall Replicator::operator[](Replicator *this,int param_1)

{
  undefined4 *puVar1;
  uint in_stack_00000008;
  DNameStatus DVar2;
  
  if (in_stack_00000008 < 10) {
    if ((*(int *)this != -1) && ((int)in_stack_00000008 <= *(int *)this)) {
      puVar1 = *(undefined4 **)(this + in_stack_00000008 * 4 + 4);
      *(undefined4 *)param_1 = *puVar1;
      *(undefined4 *)(param_1 + 4) = puVar1[1];
      return param_1;
    }
    DVar2 = 2;
  }
  else {
    DVar2 = 3;
  }
  DName::DName((DName *)param_1,DVar2);
  return param_1;
}




/* Library Function - Single Match
    public: __thiscall pcharNode::pcharNode(char const *,int)
   
   Library: Visual Studio 2008 Release */

pcharNode * __thiscall pcharNode::pcharNode(pcharNode *this,char *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_LAB_100204d4;
  if ((param_2 == 0) || (param_1 == (char *)0x0)) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    puVar1 = (undefined1 *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,param_2,0);
    *(undefined1 **)(this + 4) = puVar1;
    *(int *)(this + 8) = param_2;
    if ((puVar1 != (undefined1 *)0x0) && (param_2 != 0)) {
      iVar2 = (int)param_1 - (int)puVar1;
      do {
        *puVar1 = puVar1[iVar2];
        puVar1 = puVar1 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return this;
}




/* Library Function - Single Match
    public: virtual char * __thiscall pcharNode::getString(char *,char *)const 
   
   Library: Visual Studio 2008 Release */

char * __thiscall pcharNode::getString(pcharNode *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = getStringHelper(param_1,param_2,*(char **)(this + 4),*(int *)(this + 8));
  return pcVar1;
}




/* Library Function - Single Match
    public: virtual char * __thiscall DNameStatusNode::getString(char *,char *)const 
   
   Library: Visual Studio 2008 Release */

char * __thiscall DNameStatusNode::getString(DNameStatusNode *this,char *param_1,char *param_2)

{
  if (*(int *)(this + 4) == 1) {
    param_1 = getStringHelper(param_1,param_2," ?? ",4);
  }
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getReturnType(class DName *)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getReturnType(DName *param_1)

{
  DName *in_stack_00000008;
  
  if (*DAT_10023b50 == '@') {
    DAT_10023b50 = DAT_10023b50 + 1;
    DName::DName(param_1,in_stack_00000008);
  }
  else {
    getDataType(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getStorageConvention(void)
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl UnDecorator::getStorageConvention(void)

{
  undefined4 in_stack_00000004;
  
  getDataIndirectType();
  return in_stack_00000004;
}




/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(enum DNameStatus)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator+=(DName *this,DNameStatus param_1)

{
  DNameStatusNode *pDVar1;
  
  if ((char)this[4] < '\x02') {
    if (((*(int *)this == 0) || (param_1 == 2)) || (param_1 == 3)) {
      operator=(this,param_1);
    }
    else if (param_1 != 0) {
      pDVar1 = DNameStatusNode::make(param_1);
      append(this,(DNameNode *)pDVar1);
    }
  }
  return this;
}




/* Library Function - Single Match
    private: void __thiscall DName::doPchar(char const *,int)
   
   Library: Visual Studio 2008 Release */

void __thiscall DName::doPchar(DName *this,char *param_1,int param_2)

{
  char cVar1;
  pcharNode *this_00;
  undefined4 *puVar2;
  
  if (*(int *)this != 0) {
    operator=(this,3);
    return;
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    this[4] = (DName)0x2;
    return;
  }
  if (param_2 == 0) goto LAB_10015df7;
  if (param_2 == 1) {
    puVar2 = (undefined4 *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,8,0);
    if (puVar2 == (undefined4 *)0x0) goto LAB_10015def;
    cVar1 = *param_1;
    *puVar2 = &PTR_LAB_100204a4;
    *(char *)(puVar2 + 1) = cVar1;
  }
  else {
    this_00 = (pcharNode *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,0xc,0);
    if (this_00 == (pcharNode *)0x0) {
LAB_10015def:
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)pcharNode::pcharNode(this_00,param_1,param_2);
    }
  }
  *(undefined4 **)this = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    return;
  }
LAB_10015df7:
  this[4] = (DName)0x3;
  return;
}




/* Library Function - Single Match
    public: __thiscall DName::DName(char)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::DName(DName *this,char param_1)

{
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  if (param_1 != '\0') {
    doPchar(this,&param_1,1);
  }
  return this;
}




/* Library Function - Single Match
    public: __thiscall DName::DName(char const *)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::DName(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      cVar1 = param_1[iVar2];
    }
    doPchar(this,param_1,iVar2);
  }
  return this;
}




/* Library Function - Single Match
    public: __thiscall DName::DName(char const * &,char)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::DName(DName *this,char **param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = 0;
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  pcVar3 = *param_1;
  if (pcVar3 == (char *)0x0) {
LAB_10015f20:
    this[4] = (DName)0x2;
    return this;
  }
  if (*pcVar3 != '\0') {
    do {
      bVar1 = **param_1;
      if (bVar1 == param_2) break;
      if (((((((bVar1 != 0x5f) && (bVar1 != 0x24)) && (bVar1 != 0x3c)) &&
            (((bVar1 != 0x3e && (bVar1 != 0x2d)) && (((char)bVar1 < 'a' || ('z' < (char)bVar1))))))
           && (((char)bVar1 < 'A' || ('Z' < (char)bVar1)))) &&
          (((char)bVar1 < '0' || ('9' < (char)bVar1)))) &&
         (((bVar1 < 0x80 || (bVar1 == 0xff)) && ((DAT_10023b60 & 0x10000) == 0))))
      goto LAB_10015f20;
      iVar5 = iVar5 + 1;
      pbVar4 = (byte *)(*param_1 + 1);
      *param_1 = (char *)pbVar4;
    } while (*pbVar4 != 0);
    doPchar(this,pcVar3,iVar5);
    cVar2 = **param_1;
    if (cVar2 != '\0') {
      *param_1 = *param_1 + 1;
      if (cVar2 == param_2) {
        return this;
      }
      *(undefined4 *)this = 0;
      this[4] = (DName)0x3;
      return this;
    }
    if (this[4] != (DName)0x0) {
      return this;
    }
  }
  this[4] = (DName)0x1;
  return this;
}




/* Library Function - Single Match
    public: __thiscall DName::DName(unsigned __int64)
   
   Library: Visual Studio 2008 Release */

void __thiscall DName::DName(DName *this,__uint64 param_1)

{
  char extraout_CL;
  char *pcVar1;
  __uint64 _Var2;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  pcVar1 = local_d + 1;
  *(undefined4 *)this = 0;
  local_d[1] = 0;
  _Var2 = param_1;
  do {
    param_1._4_4_ = (uint)(_Var2 >> 0x20);
    param_1._0_4_ = (uint)_Var2;
    pcVar1 = pcVar1 + -1;
    _Var2 = __aulldvrm((uint)param_1,param_1._4_4_,10,0);
    *pcVar1 = extraout_CL + '0';
  } while (_Var2 != 0);
  doPchar(this,pcVar1,(int)(local_d + (1 - (int)pcVar1)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    public: __thiscall DName::DName(__int64)
   
   Library: Visual Studio 2008 Release */

void __thiscall DName::DName(DName *this,__int64 param_1)

{
  bool bVar1;
  char extraout_CL;
  char *pcVar2;
  char *pcVar3;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  pcVar3 = local_d + 2;
  *(undefined4 *)this = 0;
  local_d[2] = 0;
  bVar1 = false;
  if ((param_1 < 0x100000000) && (param_1 < 0)) {
    bVar1 = true;
    param_1 = CONCAT44(-(param_1._4_4_ + (uint)((uint)param_1 != 0)),-(uint)param_1);
  }
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + -1;
    param_1 = __aulldvrm((uint)param_1,(uint)((ulonglong)param_1 >> 0x20),10,0);
    *pcVar3 = extraout_CL + '0';
  } while (param_1 != 0);
  if (bVar1) {
    pcVar3 = pcVar2 + -2;
    *pcVar3 = '-';
  }
  doPchar(this,pcVar3,(int)(local_d + (2 - (int)pcVar3)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(enum DNameStatus)const 
   
   Library: Visual Studio 2008 Release */

DNameStatus __thiscall DName::operator+(DName *this,DNameStatus param_1)

{
  DNameStatus in_stack_00000008;
  
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=((DName *)param_1,in_stack_00000008);
  return param_1;
}




/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator+=(DName *this,DName *param_1)

{
  if ((char)this[4] < '\x02') {
    if (*(DNameNode **)param_1 == (DNameNode *)0x0) {
      operator+=(this,(int)(char)param_1[4]);
    }
    else if (*(int *)this == 0) {
      FUN_1001567a(this,(undefined4 *)param_1);
    }
    else {
      append(this,*(DNameNode **)param_1);
    }
  }
  return this;
}




/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(class DName *)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator+=(DName *this,DName *param_1)

{
  DName DVar1;
  pDNameNode *this_00;
  DNameNode *pDVar2;
  
  if (((char)this[4] < '\x02') && (param_1 != (DName *)0x0)) {
    if (*(int *)this == 0) {
      operator=(this,param_1);
    }
    else {
      DVar1 = param_1[4];
      if ((DVar1 == (DName)0x0) || (DVar1 == (DName)0x1)) {
        this_00 = (pDNameNode *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,8,0);
        if (this_00 == (pDNameNode *)0x0) {
          pDVar2 = (DNameNode *)0x0;
        }
        else {
          pDVar2 = (DNameNode *)pDNameNode::pDNameNode(this_00,param_1);
        }
        append(this,pDVar2);
      }
      else {
        operator+=(this,(int)(char)DVar1);
      }
    }
  }
  return this;
}




/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator=(DName *this,char param_1)

{
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  if (param_1 != '\0') {
    doPchar(this,&param_1,1);
  }
  return this;
}




/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char const *)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator=(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  doPchar(this,param_1,iVar2);
  return this;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getCallingConvention(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getCallingConvention(void)

{
  uint uVar1;
  char *pcVar2;
  DName *in_stack_00000004;
  Tokens TVar3;
  DNameStatus DVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_10023b50 == '\0') {
    DVar4 = 1;
  }
  else {
    uVar1 = (int)*DAT_10023b50 - 0x41;
    DAT_10023b50 = DAT_10023b50 + 1;
    if (uVar1 < 0xd) {
      local_c = 0;
      local_8 = 0;
      if ((~(DAT_10023b60 >> 1) & 1) != 0) {
        uVar1 = uVar1 & 0xfffffffe;
        if (uVar1 == 0) {
          TVar3 = 1;
        }
        else if (uVar1 == 2) {
          TVar3 = 2;
        }
        else if (uVar1 == 4) {
          TVar3 = 4;
        }
        else if (uVar1 == 6) {
          TVar3 = 3;
        }
        else if (uVar1 == 8) {
          TVar3 = 5;
        }
        else {
          if (uVar1 != 0xc) goto LAB_100161ec;
          TVar3 = 6;
        }
        pcVar2 = UScore(TVar3);
        DName::operator=((DName *)&local_c,pcVar2);
      }
LAB_100161ec:
      *(undefined4 *)in_stack_00000004 = local_c;
      *(undefined4 *)(in_stack_00000004 + 4) = local_8;
      return in_stack_00000004;
    }
    DVar4 = 2;
  }
  DName::DName(in_stack_00000004,DVar4);
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVCallThunkType(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getVCallThunkType(void)

{
  DName *in_stack_00000004;
  DNameStatus DVar1;
  
  if (*DAT_10023b50 == '\0') {
    DVar1 = 1;
  }
  else {
    if (*DAT_10023b50 == 'A') {
      DAT_10023b50 = DAT_10023b50 + 1;
      DName::DName(in_stack_00000004,"{flat}");
      return in_stack_00000004;
    }
    DVar1 = 2;
  }
  DName::DName(in_stack_00000004,DVar1);
  return in_stack_00000004;
}




/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(class DName const &)const 
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator+(DName *this,DName *param_1)

{
  DName *in_stack_00000008;
  
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=(param_1,in_stack_00000008);
  return param_1;
}




/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(class DName *)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

DName * __thiscall DName::operator+(DName *this,DName *param_1)

{
  DName *in_stack_00000008;
  
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=(param_1,in_stack_00000008);
  return param_1;
}




/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator+=(DName *this,char param_1)

{
  DNameNode *pDVar1;
  
  if (((char)this[4] < '\x02') && (param_1 != '\0')) {
    if (*(int *)this == 0) {
      operator=(this,param_1);
    }
    else {
      pDVar1 = (DNameNode *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,8,0);
      if (pDVar1 == (DNameNode *)0x0) {
        pDVar1 = (DNameNode *)0x0;
      }
      else {
        *(undefined ***)pDVar1 = &PTR_LAB_100204a4;
        pDVar1[4] = (DNameNode)param_1;
      }
      append(this,pDVar1);
    }
  }
  return this;
}




/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char const *)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator+=(DName *this,char *param_1)

{
  char cVar1;
  pcharNode *this_00;
  DNameNode *pDVar2;
  int iVar3;
  
  if ((((char)this[4] < '\x02') && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    if (*(int *)this == 0) {
      operator=(this,param_1);
    }
    else {
      this_00 = (pcharNode *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,0xc,0);
      if (this_00 == (pcharNode *)0x0) {
        pDVar2 = (DNameNode *)0x0;
      }
      else {
        iVar3 = 0;
        cVar1 = *param_1;
        while (cVar1 != '\0') {
          iVar3 = iVar3 + 1;
          cVar1 = param_1[iVar3];
        }
        pDVar2 = (DNameNode *)pcharNode::pcharNode(this_00,param_1,iVar3);
      }
      append(this,pDVar2);
    }
  }
  return this;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentList(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getArgumentList(void)

{
  DName DVar1;
  char *pcVar2;
  DName *pDVar3;
  DName *in_stack_00000004;
  undefined1 local_20 [8];
  DName local_18 [8];
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  local_8 = 1;
  *(undefined4 *)in_stack_00000004 = 0;
  DVar1 = in_stack_00000004[4];
  while( true ) {
    if (DVar1 != (DName)0x0) {
      return in_stack_00000004;
    }
    if (*DAT_10023b50 == '@') {
      return in_stack_00000004;
    }
    if (*DAT_10023b50 == 'Z') {
      return in_stack_00000004;
    }
    if (local_8 == 0) {
      DName::operator+=(in_stack_00000004,',');
    }
    else {
      local_8 = 0;
    }
    pcVar2 = DAT_10023b50;
    if (*DAT_10023b50 == '\0') break;
    if ((int)*DAT_10023b50 - 0x30U < 10) {
      DAT_10023b50 = DAT_10023b50 + 1;
      pDVar3 = (DName *)Replicator::operator[](DAT_10023b44,(int)local_20);
      DName::operator+=(in_stack_00000004,pDVar3);
    }
    else {
      local_c = local_c & 0xffff0000;
      local_10 = 0;
      getPrimaryDataType(local_18);
      if ((1 < (int)DAT_10023b50 - (int)pcVar2) && (*(int *)DAT_10023b44 != 9)) {
        Replicator::operator+=(DAT_10023b44,local_18);
      }
      DName::operator+=(in_stack_00000004,local_18);
      if (DAT_10023b50 == pcVar2) {
        DName::operator=(in_stack_00000004,2);
      }
    }
    DVar1 = in_stack_00000004[4];
  }
  DName::operator+=(in_stack_00000004,1);
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVdispMapType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getVdispMapType(DName *param_1)

{
  DName *pDVar1;
  undefined4 *in_stack_00000008;
  
  *(undefined4 *)param_1 = *in_stack_00000008;
  *(undefined4 *)(param_1 + 4) = in_stack_00000008[1];
  DName::operator+=(param_1,"{for ");
  pDVar1 = (DName *)getScope();
  DName::operator+=(param_1,pDVar1);
  DName::operator+=(param_1,'}');
  if (*DAT_10023b50 == '@') {
    DAT_10023b50 = DAT_10023b50 + 1;
  }
  return param_1;
}




/* Library Function - Single Match
    class DName __cdecl operator+(char,class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl operator+(char param_1,DName *param_2)

{
  DName *this;
  undefined3 in_stack_00000005;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = _param_1;
  this = (DName *)DName::DName(local_c,(char)param_2);
  DName::operator+(this,pDVar1);
  return _param_1;
}




/* Library Function - Single Match
    class DName __cdecl operator+(enum DNameStatus,class DName const &)
   
   Library: Visual Studio 2008 Release */

DNameStatus __cdecl operator+(DNameStatus param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(DNameStatus)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}




/* Library Function - Single Match
    class DName __cdecl operator+(char const *,class DName const &)
   
   Library: Visual Studio 2008 Release */

char * __cdecl operator+(char *param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(char *)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}




/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char)const 
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator+(DName *this,char param_1)

{
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  
  *(undefined4 *)_param_1 = *(undefined4 *)this;
  *(undefined4 *)(_param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=(_param_1,in_stack_00000008);
  return _param_1;
}




/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char const *)const 
   
   Library: Visual Studio 2008 Release */

char * __thiscall DName::operator+(DName *this,char *param_1)

{
  char *in_stack_00000008;
  
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=((DName *)param_1,in_stack_00000008);
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDimension(bool)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getDimension(bool param_1)

{
  __uint64 _Var1;
  char *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DNameStatus DVar6;
  DName local_20 [8];
  char local_18 [8];
  DName local_10 [4];
  int local_c;
  DName *local_8;
  
  local_8 = (DName *)0x0;
  if (*DAT_10023b50 == 'Q') {
    DAT_10023b50 = DAT_10023b50 + 1;
    local_8 = (DName *)0x100204f8;
  }
  cVar3 = *DAT_10023b50;
  if (cVar3 == '\0') {
    DName::DName(_param_1,1);
    return _param_1;
  }
  if (('/' < cVar3) && (cVar3 < ':')) {
    cVar3 = *DAT_10023b50;
    DAT_10023b50 = DAT_10023b50 + 1;
    if (local_8 == (DName *)0x0) {
      puVar4 = (undefined4 *)DName::DName(local_20,(longlong)(cVar3 + -0x2f));
    }
    else {
      DName::DName(local_10,(longlong)(cVar3 + -0x2f));
      puVar4 = (undefined4 *)operator+(local_18,local_8);
    }
    *(undefined4 *)_param_1 = *puVar4;
    *(undefined4 *)(_param_1 + 4) = puVar4[1];
    return _param_1;
  }
  _Var1 = 0;
  while( true ) {
    pcVar2 = DAT_10023b50;
    if (cVar3 == '@') break;
    if (cVar3 == '\0') {
      DVar6 = 1;
      goto LAB_10016634;
    }
    if ((cVar3 < 'A') || ('P' < cVar3)) goto LAB_10016632;
    local_c = cVar3 + -0x41 >> 0x1f;
    lVar5 = __allmul((uint)_Var1,(int)(_Var1 >> 0x20),0x10,0);
    _Var1 = lVar5 + CONCAT44(local_c,cVar3 + -0x41);
    DAT_10023b50 = pcVar2 + 1;
    cVar3 = *DAT_10023b50;
  }
  cVar3 = *DAT_10023b50;
  DAT_10023b50 = DAT_10023b50 + 1;
  if (cVar3 != '@') {
LAB_10016632:
    DVar6 = 2;
LAB_10016634:
    DName::DName(_param_1,DVar6);
    return _param_1;
  }
  if (in_stack_00000008 == '\0') {
    if (local_8 == (DName *)0x0) {
      puVar4 = (undefined4 *)DName::DName(local_10,_Var1);
      goto LAB_1001668e;
    }
    DName::DName(local_20,_Var1);
  }
  else {
    if (local_8 == (DName *)0x0) {
      puVar4 = (undefined4 *)DName::DName(local_10,_Var1);
      goto LAB_1001668e;
    }
    DName::DName(local_20,_Var1);
  }
  puVar4 = (undefined4 *)operator+(local_18,local_8);
LAB_1001668e:
  *(undefined4 *)_param_1 = *puVar4;
  *(undefined4 *)(_param_1 + 4) = puVar4[1];
  return _param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getEnumType(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getEnumType(void)

{
  char cVar1;
  undefined4 *puVar2;
  DName *in_stack_00000004;
  char *pcVar3;
  DNameStatus DVar4;
  char local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xffff0000;
  if (*DAT_10023b50 == '\0') {
    DVar4 = 1;
LAB_10016749:
    DName::DName(in_stack_00000004,DVar4);
    return in_stack_00000004;
  }
  switch(*DAT_10023b50) {
  case '0':
  case '1':
    pcVar3 = "char ";
    break;
  case '2':
  case '3':
    pcVar3 = "short ";
    break;
  case '4':
    goto switchD_100166cf_caseD_34;
  case '5':
    pcVar3 = "int ";
    break;
  case '6':
  case '7':
    pcVar3 = "long ";
    break;
  default:
    DVar4 = 2;
    goto LAB_10016749;
  }
  DName::operator=((DName *)&local_c,pcVar3);
switchD_100166cf_caseD_34:
  cVar1 = *DAT_10023b50;
  DAT_10023b50 = DAT_10023b50 + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) || (cVar1 == '7')) {
    puVar2 = (undefined4 *)operator+(local_14,(DName *)"unsigned ");
    local_c = *puVar2;
    local_8 = puVar2[1];
  }
  *(undefined4 *)in_stack_00000004 = local_c;
  *(uint *)(in_stack_00000004 + 4) = local_8;
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentTypes(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getArgumentTypes(void)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  DName *in_stack_00000004;
  char local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_10023b50 == 'X') {
    pcVar3 = "void";
  }
  else {
    if (*DAT_10023b50 != 'Z') {
      getArgumentList();
      if (((char)local_8 == '\0') && (cVar1 = *DAT_10023b50, cVar1 != '\0')) {
        if (cVar1 != '@') {
          if (cVar1 != 'Z') {
            DName::DName(in_stack_00000004,2);
            return in_stack_00000004;
          }
          DAT_10023b50 = DAT_10023b50 + 1;
          puVar2 = (undefined4 *)DName::operator+((DName *)&local_c,local_14);
          *(undefined4 *)in_stack_00000004 = *puVar2;
          *(undefined4 *)(in_stack_00000004 + 4) = puVar2[1];
          return in_stack_00000004;
        }
        DAT_10023b50 = DAT_10023b50 + 1;
      }
      *(undefined4 *)in_stack_00000004 = local_c;
      *(undefined4 *)(in_stack_00000004 + 4) = local_8;
      return in_stack_00000004;
    }
    pcVar3 = "...";
    if ((~(DAT_10023b60 >> 0x12) & 1) == 0) {
      pcVar3 = "<ellipsis>";
    }
  }
  DAT_10023b50 = DAT_10023b50 + 1;
  DName::DName(in_stack_00000004,pcVar3);
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThrowTypes(void)
   
   Library: Visual Studio 2008 Release */

undefined4 * __cdecl UnDecorator::getThrowTypes(void)

{
  DName *pDVar1;
  undefined4 *in_stack_00000004;
  char *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  char local_14 [8];
  DName local_c [4];
  uint local_8;
  
  if (*DAT_10023b50 == '\0') {
    pcVar2 = local_14;
    puVar4 = in_stack_00000004;
    pDVar1 = (DName *)DName::DName(local_c," throw(");
    cVar3 = (char)puVar4;
    pDVar1 = (DName *)DName::operator+(pDVar1,(DNameStatus)pcVar2);
  }
  else {
    if (*DAT_10023b50 == 'Z') {
      DAT_10023b50 = DAT_10023b50 + 1;
      *in_stack_00000004 = 0;
      in_stack_00000004[1] = local_8 & 0xffff0000;
      return in_stack_00000004;
    }
    puVar4 = in_stack_00000004;
    getArgumentTypes();
    cVar3 = (char)puVar4;
    pDVar1 = (DName *)operator+(local_14,(DName *)" throw(");
  }
  DName::operator+(pDVar1,cVar3);
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExtendedDataIndirectType(char &,bool &,int)
   
   Library: Visual Studio 2008 Release */

char * __cdecl UnDecorator::getExtendedDataIndirectType(char *param_1,bool *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int in_stack_00000010;
  DNameStatus DVar5;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  DName local_1c [8];
  DName local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffff0000;
  pcVar4 = (char *)((int)DAT_10023b50 + 1);
  iVar2 = (int)*pcVar4;
  local_c = 0;
  if (iVar2 == 0x41) {
    DAT_10023b50 = pcVar4;
    if (in_stack_00000010 == 0) {
      *param_2 = (bool)(((*param_2 != true) - 1U & 199) + 0x5e);
    }
LAB_10016a35:
    DAT_10023b50 = DAT_10023b50 + 1;
    param_1[4] = '\0';
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
  }
  else {
    if (iVar2 == 0x42) {
      if (in_stack_00000010 == 0) {
        DAT_10023b50 = pcVar4;
        *(undefined1 *)param_3 = 1;
        DName::operator=((DName *)&local_c,'>');
        goto LAB_10016a35;
      }
LAB_100169fc:
      DVar5 = 2;
    }
    else {
      if (iVar2 == 0x43) {
        DAT_10023b50 = pcVar4;
        *param_2 = true;
        goto LAB_10016a35;
      }
      if ((*pcVar4 != '\0') && (*(char *)((int)DAT_10023b50 + 2) != '\0')) {
        if (in_stack_00000010 == 0) {
          uVar1 = (iVar2 + -0x30) * 0x10 + -0x30 + (int)*(char *)((int)DAT_10023b50 + 2);
          DAT_10023b50 = (char *)((int)DAT_10023b50 + 3);
          if (1 < uVar1) {
            DName::operator=((DName *)&local_c,',');
            DName::DName(local_14,(ulonglong)uVar1);
            puVar3 = (undefined4 *)DName::operator+((DName *)&local_c,local_1c);
            local_c = *puVar3;
            local_8 = puVar3[1];
          }
          puVar3 = (undefined4 *)DName::operator+((DName *)&local_c,(char)local_24);
          local_c = *puVar3;
          local_8 = puVar3[1];
          if (*DAT_10023b50 == '$') {
            DAT_10023b50 = DAT_10023b50 + 1;
          }
          else {
            puVar3 = (undefined4 *)DName::operator+((DName *)&local_c,(char)local_2c);
            local_c = *puVar3;
            local_8 = puVar3[1];
          }
          if (*DAT_10023b50 == '\0') {
            DName::operator+=((DName *)&local_c,1);
          }
          else {
            DAT_10023b50 = DAT_10023b50 + 1;
          }
          *(undefined4 *)param_1 = local_c;
          *(uint *)(param_1 + 4) = local_8 | 0x4000;
          return param_1;
        }
        goto LAB_100169fc;
      }
      DVar5 = 1;
    }
    DAT_10023b50 = pcVar4;
    DName::DName((DName *)param_1,DVar5);
  }
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArrayType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getArrayType(DName *param_1)

{
  int iVar1;
  DName *pDVar2;
  undefined4 *puVar3;
  DName *pDVar4;
  bool bVar5;
  DName *in_stack_00000008;
  char cVar6;
  DName local_34 [8];
  undefined4 local_2c [2];
  DName local_24 [8];
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  DName local_c [4];
  int local_8;
  
  if (*DAT_10023b50 == '\0') {
    if (*(int *)in_stack_00000008 != 0) {
      cVar6 = (char)local_34;
      puVar3 = local_2c;
      pDVar4 = local_24;
      pDVar2 = (DName *)operator+((char)&local_1c,(DName *)0x28);
      pDVar4 = (DName *)DName::operator+(pDVar2,(char *)pDVar4);
      goto LAB_10016ba9;
    }
    cVar6 = (char)local_34;
    puVar3 = local_2c;
    pDVar4 = local_24;
  }
  else {
    local_8 = getNumberOfDimensions();
    if (local_8 < 0) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      local_10 = local_10 & 0xffff0000;
      local_14 = 0;
      if ((*(uint *)(in_stack_00000008 + 4) & 0x800) != 0) {
        DName::operator+=((DName *)&local_14,"[]");
      }
      while ((((char)local_10 < '\x02' &&
              (iVar1 = local_8 + -1, bVar5 = local_8 != 0, local_8 = iVar1, bVar5)) &&
             (*DAT_10023b50 != '\0'))) {
        cVar6 = (char)local_24;
        getDimension(SUB41(local_2c,0));
        pDVar4 = (DName *)operator+((char)local_34,(DName *)0x5b);
        pDVar4 = (DName *)DName::operator+(pDVar4,cVar6);
        DName::operator+=((DName *)&local_14,pDVar4);
      }
      if (*(int *)in_stack_00000008 != 0) {
        pDVar4 = local_34;
        if ((*(uint *)(in_stack_00000008 + 4) & 0x800) == 0) {
          cVar6 = (char)local_2c;
          pDVar2 = (DName *)operator+((char)local_24,(DName *)0x28);
          in_stack_00000008 = (DName *)DName::operator+(pDVar2,cVar6);
        }
        puVar3 = (undefined4 *)DName::operator+(in_stack_00000008,pDVar4);
        local_14 = *puVar3;
        local_10 = puVar3[1];
      }
      getPrimaryDataType((DName *)&local_1c);
      *(undefined4 *)param_1 = local_1c;
      *(uint *)(param_1 + 4) = local_18 | 0x800;
      return param_1;
    }
    cVar6 = (char)&local_1c;
    puVar3 = &local_14;
    pDVar4 = local_c;
  }
  pDVar4 = (DName *)DName::DName(pDVar4,'[');
LAB_10016ba9:
  pDVar4 = (DName *)DName::operator+(pDVar4,(DNameStatus)puVar3);
  DName::operator+(pDVar4,cVar6);
  getBasicDataType(param_1);
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getLexicalFrame(void)
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl UnDecorator::getLexicalFrame(void)

{
  DName *this;
  undefined4 in_stack_00000004;
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = in_stack_00000004;
  getDimension(true);
  cVar1 = (char)uVar2;
  this = (DName *)operator+(-0x14,(DName *)0x60);
  DName::operator+(this,cVar1);
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDisplacement(void)
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl UnDecorator::getDisplacement(void)

{
  undefined4 in_stack_00000004;
  
  getDimension(SUB41(in_stack_00000004,0));
  return in_stack_00000004;
}




/* Library Function - Multiple Matches With Different Base Names
    private: static class DName __cdecl UnDecorator::getCallIndex(void)
    private: static class DName __cdecl UnDecorator::getGuardNumber(void)
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl FID_conflict_getGuardNumber(undefined4 param_1)

{
  UnDecorator::getDimension(SUB41(param_1,0));
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    private: static class DName __cdecl UnDecorator::getCallIndex(void)
    private: static class DName __cdecl UnDecorator::getGuardNumber(void)
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl FID_conflict_getGuardNumber(undefined4 param_1)

{
  UnDecorator::getDimension(SUB41(param_1,0));
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVfTableType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getVfTableType(DName *param_1)

{
  char cVar1;
  DName *this;
  undefined4 *puVar2;
  DName *pDVar3;
  undefined4 *in_stack_00000008;
  char *pcVar4;
  undefined1 local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  *(undefined4 *)param_1 = *in_stack_00000008;
  cVar1 = (char)in_stack_00000008[1];
  *(undefined4 *)(param_1 + 4) = in_stack_00000008[1];
  if (cVar1 < '\x02') {
    if (*DAT_10023b50 == '\0') {
      if (cVar1 < '\x02') {
        puVar2 = (undefined4 *)operator+((DNameStatus)local_1c,(DName *)0x1);
        FUN_1001567a(param_1,puVar2);
      }
    }
    else {
      getDataIndirectType();
      pDVar3 = local_14;
      this = (DName *)DName::operator+(local_c,(char)local_1c);
      puVar2 = (undefined4 *)DName::operator+(this,pDVar3);
      FUN_1001567a(param_1,puVar2);
      if ((char)param_1[4] < '\x02') {
        if (*DAT_10023b50 != '@') {
          pcVar4 = "{for ";
          do {
            DName::operator+=(param_1,pcVar4);
            do {
              if ((('\x01' < (char)param_1[4]) || (*DAT_10023b50 == '\0')) || (*DAT_10023b50 == '@')
                 ) {
                if ((char)param_1[4] < '\x02') {
                  if (*DAT_10023b50 == '\0') {
                    DName::operator+=(param_1,1);
                  }
                  DName::operator+=(param_1,'}');
                }
LAB_10016d42:
                if (*DAT_10023b50 != '@') {
                  return param_1;
                }
                goto LAB_10016d4c;
              }
              cVar1 = (char)local_1c;
              getScope();
              pDVar3 = (DName *)operator+((char)local_c,(DName *)0x60);
              pDVar3 = (DName *)DName::operator+(pDVar3,cVar1);
              DName::operator+=(param_1,pDVar3);
              if (*DAT_10023b50 == '@') {
                DAT_10023b50 = DAT_10023b50 + 1;
              }
              if ('\x01' < (char)param_1[4]) goto LAB_10016d42;
            } while (*DAT_10023b50 == '@');
            pcVar4 = "s ";
          } while( true );
        }
LAB_10016d4c:
        DAT_10023b50 = DAT_10023b50 + 1;
      }
    }
  }
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getStringEncoding(char *,int)
   
   Library: Visual Studio 2008 Release */

char * __cdecl UnDecorator::getStringEncoding(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  DNameStatus DVar3;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  DName::DName((DName *)&local_c,(char *)param_2);
  pcVar1 = DAT_10023b50;
  cVar2 = *DAT_10023b50;
  DAT_10023b50 = DAT_10023b50 + 1;
  if ((cVar2 == '@') && (cVar2 = *DAT_10023b50, DAT_10023b50 = pcVar1 + 2, cVar2 == '_')) {
    DAT_10023b50 = pcVar1 + 3;
    getDimension(SUB41(local_14,0));
    getDimension(SUB41(local_14,0));
    cVar2 = *DAT_10023b50;
    if (cVar2 != '\0') {
      do {
        if (cVar2 == '@') break;
        DAT_10023b50 = DAT_10023b50 + 1;
        cVar2 = *DAT_10023b50;
      } while (cVar2 != '\0');
      if (*DAT_10023b50 != '\0') {
        DAT_10023b50 = DAT_10023b50 + 1;
        *(undefined4 *)param_1 = local_c;
        *(undefined4 *)(param_1 + 4) = local_8;
        return param_1;
      }
    }
    DAT_10023b50 = DAT_10023b50 + -1;
    DVar3 = 1;
  }
  else {
    DVar3 = 2;
  }
  DName::DName((DName *)param_1,DVar3);
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSignedDimension(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getSignedDimension(void)

{
  DName *in_stack_00000004;
  
  if (*DAT_10023b50 == '\0') {
    DName::DName(in_stack_00000004,1);
  }
  else if (*DAT_10023b50 == '?') {
    DAT_10023b50 = DAT_10023b50 + 1;
    getDimension(true);
    operator+(SUB41(in_stack_00000004,0),(DName *)0x2d);
  }
  else {
    getDimension(SUB41(in_stack_00000004,0));
  }
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateConstant(void)
   
   Library: Visual Studio 2008 Release */

void __cdecl UnDecorator::getTemplateConstant(void)

{
  char *pcVar1;
  DName *pDVar2;
  long lVar3;
  DName *in_stack_00000004;
  char cVar4;
  char *pcVar5;
  DNameStatus DVar6;
  DName local_d4 [8];
  char local_cc [16];
  DName local_bc [16];
  undefined1 local_ac [32];
  char local_8c [8];
  DName local_84 [4];
  char local_80;
  char local_7c;
  char local_7b;
  char local_7a;
  char local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar1 = DAT_10023b50;
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  cVar4 = *DAT_10023b50;
  DAT_10023b50 = DAT_10023b50 + 1;
  if (cVar4 < 'E') {
    if (cVar4 == 'D') {
LAB_10016ffb:
      getSignedDimension();
      if ((DAT_10023b60 & 0x4000) != 0) {
        DName::getString(local_84,local_18,0x10);
        lVar3 = _atol(local_18);
        pcVar1 = (char *)(*DAT_10023b64)(lVar3);
        if (pcVar1 != (char *)0x0) {
LAB_10016f67:
          DName::DName(in_stack_00000004,pcVar1);
          goto LAB_10017126;
        }
      }
      if (cVar4 == 'D') {
        pcVar5 = "`template-parameter";
        pcVar1 = local_8c;
      }
      else {
        pcVar5 = "`non-type-template-parameter";
        pcVar1 = local_cc;
      }
      pDVar2 = (DName *)operator+(pcVar1,(DName *)pcVar5);
      DName::operator+(pDVar2,(char *)in_stack_00000004);
      goto LAB_10017126;
    }
    if (cVar4 != '\0') {
      if (cVar4 == '0') {
        getSignedDimension();
        goto LAB_10017126;
      }
      if (cVar4 == '1') {
        if (*DAT_10023b50 == '@') {
          DAT_10023b50 = pcVar1 + 2;
          pcVar1 = "NULL";
          goto LAB_10016f67;
        }
        getDecoratedName();
        pDVar2 = (DName *)DName::DName(local_bc,"&");
LAB_10016f46:
        DName::operator+(pDVar2,in_stack_00000004);
        goto LAB_10017126;
      }
      if (cVar4 == '2') {
        getSignedDimension();
        getSignedDimension();
        pcVar1 = DAT_10023b50;
        if (('\x01' < local_80) || ('\x01' < (char)local_c)) goto LAB_10016fa5;
        pcVar1 = DName::getString(local_84,&local_7b,100);
        if (pcVar1 != (char *)0x0) {
          local_7c = local_7b;
          if (local_7b == '-') {
            local_7b = local_7a;
            local_7a = '.';
          }
          else {
            local_7b = '.';
          }
          cVar4 = (char)local_ac;
          pDVar2 = (DName *)DName::DName(local_d4,&local_7c);
          pDVar2 = (DName *)DName::operator+(pDVar2,cVar4);
          goto LAB_10016f46;
        }
      }
      goto LAB_10016efa;
    }
LAB_10016fa5:
    DAT_10023b50 = pcVar1;
    DVar6 = 1;
  }
  else {
    if (cVar4 == 'E') {
      getDecoratedName();
      goto LAB_10017126;
    }
    if ('E' < cVar4) {
      if (cVar4 < 'K') {
        DName::DName(local_84,'{');
        if (('G' < cVar4) && (cVar4 < 'K')) {
          pDVar2 = (DName *)getDecoratedName();
          DName::operator+=(local_84,pDVar2);
          DName::operator+=(local_84,',');
        }
        if (cVar4 == 'F') {
LAB_100170dc:
          pDVar2 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar2);
          DName::operator+=(local_84,',');
LAB_100170fc:
          pDVar2 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar2);
        }
        else {
          if (cVar4 == 'G') {
LAB_100170bc:
            pDVar2 = (DName *)getSignedDimension();
            DName::operator+=(local_84,pDVar2);
            DName::operator+=(local_84,',');
            goto LAB_100170dc;
          }
          if (cVar4 == 'H') goto LAB_100170fc;
          if (cVar4 == 'I') goto LAB_100170dc;
          if (cVar4 == 'J') goto LAB_100170bc;
        }
        DName::operator+(local_84,(char)in_stack_00000004);
        goto LAB_10017126;
      }
      if (cVar4 == 'Q') goto LAB_10016ffb;
      if (cVar4 == 'R') {
        getZName(SUB41(&local_10,0),false);
        getSignedDimension();
        *(undefined4 *)in_stack_00000004 = local_10;
        *(undefined4 *)(in_stack_00000004 + 4) = local_c;
        goto LAB_10017126;
      }
    }
LAB_10016efa:
    DVar6 = 2;
  }
  DName::DName(in_stack_00000004,DVar6);
LAB_10017126:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefDataType(class DName const &,int)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getPtrRefDataType(DName *param_1,int param_2)

{
  undefined4 *puVar1;
  int in_stack_0000000c;
  char *pcVar2;
  char local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_10023b50 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if ((in_stack_0000000c != 0) && (*DAT_10023b50 == 'X')) {
    DAT_10023b50 = DAT_10023b50 + 1;
    if (*(int *)param_2 != 0) {
      operator+((char *)param_1,(DName *)"void ");
      return param_1;
    }
    DName::DName(param_1,"void");
    return param_1;
  }
  if (*DAT_10023b50 == 'Y') {
    DAT_10023b50 = DAT_10023b50 + 1;
    getArrayType(param_1);
    return param_1;
  }
  getBasicDataType((DName *)&local_c);
  if ((*(uint *)(param_2 + 4) & 0x4000) == 0) {
    if ((*(uint *)(param_2 + 4) & 0x2000) == 0) goto LAB_100171f3;
    pcVar2 = "cli::pin_ptr<";
  }
  else {
    pcVar2 = "cli::array<";
  }
  puVar1 = (undefined4 *)operator+(local_14,(DName *)pcVar2);
  local_c = *puVar1;
  local_8 = puVar1[1];
LAB_100171f3:
  *(undefined4 *)param_1 = local_c;
  *(undefined4 *)(param_1 + 4) = local_8;
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVbTableType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getVbTableType(DName *param_1)

{
  getVfTableType(param_1);
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateArgumentList(void)
   
   Library: Visual Studio 2008 Release */

void __cdecl UnDecorator::getTemplateArgumentList(void)

{
  DName DVar1;
  char cVar2;
  DName *pDVar3;
  undefined4 *puVar4;
  long lVar5;
  char *pcVar6;
  DName *in_stack_00000004;
  char *pcVar7;
  undefined1 local_70 [8];
  char local_68 [8];
  DName local_60 [8];
  char local_58 [8];
  char local_50 [8];
  char local_48 [16];
  char *local_38;
  undefined4 local_34;
  uint local_30;
  DName local_2c [8];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  *(undefined4 *)in_stack_00000004 = 0;
  DAT_10023b69 = 1;
  local_24 = 1;
  DVar1 = in_stack_00000004[4];
  do {
    if (((DVar1 != (DName)0x0) || (*DAT_10023b50 == '\0')) || (*DAT_10023b50 == '@')) {
      DAT_10023b69 = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_24 == 0) {
      DName::operator+=(in_stack_00000004,',');
    }
    else {
      local_24 = 0;
    }
    cVar2 = *DAT_10023b50;
    if ((int)cVar2 - 0x30U < 10) {
      DAT_10023b50 = DAT_10023b50 + 1;
      pDVar3 = (DName *)Replicator::operator[](DAT_10023b4c,(int)local_70);
    }
    else {
      local_1c = local_1c & 0xffff0000;
      local_38 = DAT_10023b50;
      local_20 = 0;
      if (cVar2 == 'X') {
        DAT_10023b50 = DAT_10023b50 + 1;
        pcVar7 = "void";
LAB_100172df:
        DName::operator=((DName *)&local_20,pcVar7);
      }
      else {
        if ((cVar2 == '$') && (DAT_10023b50[1] != '$')) {
          DAT_10023b50 = DAT_10023b50 + 1;
          puVar4 = (undefined4 *)getTemplateConstant();
        }
        else if (cVar2 == '?') {
          getSignedDimension();
          if ((DAT_10023b60 & 0x4000) == 0) {
            pcVar7 = local_48;
            pcVar6 = local_50;
          }
          else {
            DName::getString(local_2c,local_18,0x10);
            lVar5 = _atol(local_18);
            pcVar7 = (char *)(*DAT_10023b64)(lVar5);
            if (pcVar7 != (char *)0x0) goto LAB_100172df;
            pcVar7 = local_68;
            pcVar6 = local_58;
          }
          pDVar3 = (DName *)operator+(pcVar6,(DName *)"`template-parameter");
          puVar4 = (undefined4 *)DName::operator+(pDVar3,pcVar7);
        }
        else {
          local_30 = local_30 & 0xffff0000;
          local_34 = 0;
          puVar4 = (undefined4 *)getPrimaryDataType(local_60);
        }
        local_20 = *puVar4;
        local_1c = puVar4[1];
      }
      if ((1 < (int)DAT_10023b50 - (int)local_38) && (*(int *)DAT_10023b4c != 9)) {
        Replicator::operator+=(DAT_10023b4c,(DName *)&local_20);
      }
      pDVar3 = (DName *)&local_20;
    }
    DName::operator+=(in_stack_00000004,pDVar3);
    DVar1 = in_stack_00000004[4];
  } while( true );
}




/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getOperatorName(bool,bool *)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getOperatorName(bool param_1,bool *param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  DName *pDVar5;
  uint uVar6;
  int iVar7;
  DName *this;
  DName *pDVar8;
  undefined3 in_stack_00000005;
  undefined1 *in_stack_0000000c;
  char *pcVar9;
  DNameStatus DVar10;
  undefined1 local_a4 [24];
  undefined1 local_8c [8];
  undefined1 local_84 [16];
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  DName local_64 [16];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [16];
  undefined1 local_2c [8];
  char local_24 [8];
  int *local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  cVar2 = *DAT_10023b50;
  local_8 = local_8 & 0xffff0000;
  local_18 = local_18 & 0xffff0000;
  bVar1 = false;
  pcVar3 = DAT_10023b50 + 1;
  local_c = 0;
  local_1c = (int *)0x0;
  if (cVar2 < 'B') {
    if (cVar2 == 'A') {
LAB_1001795d:
      cVar2 = *DAT_10023b50;
      DAT_10023b50 = pcVar3;
      DName::operator=((DName *)&local_c,*(char **)("operator" + cVar2 * 4 + 4));
      if (bVar1) {
        pcVar3 = DAT_10023b50;
        if (local_c != 0) {
          local_8 = local_8 | 0x200;
        }
      }
      else {
LAB_10017461:
        pcVar3 = DAT_10023b50;
        if (local_c != 0) {
          piVar4 = (int *)operator+(local_24,(DName *)"operator");
          local_c = *piVar4;
          local_8 = piVar4[1];
          pcVar3 = DAT_10023b50;
        }
      }
LAB_10017489:
      DAT_10023b50 = pcVar3;
      *(int *)_param_1 = local_c;
LAB_10017491:
      *(uint *)(_param_1 + 4) = local_8;
      return _param_1;
    }
    if (cVar2 == '\0') goto LAB_10017576;
    if ('/' < cVar2) {
      if (cVar2 < '2') {
        local_1c = (int *)0x0;
        if ((char)param_2 != '\0') {
          DAT_10023b50 = pcVar3;
          getTemplateArgumentList();
          pDVar5 = (DName *)operator+((char)local_a4,(DName *)0x3c);
          DName::operator+=((DName *)&local_1c,pDVar5);
          if ((local_1c != (int *)0x0) && (cVar2 = (**(code **)(*local_1c + 4))(), cVar2 == '>')) {
            DName::operator+=((DName *)&local_1c,' ');
          }
          DName::operator+=((DName *)&local_1c,'>');
          if (in_stack_0000000c != (undefined1 *)0x0) {
            *in_stack_0000000c = 1;
          }
          if (*DAT_10023b50 == '\0') {
            *(int **)_param_1 = local_1c;
            local_8 = local_18;
            goto LAB_10017491;
          }
          pcVar3 = DAT_10023b50 + 1;
        }
        DAT_10023b50 = pcVar3;
        piVar4 = (int *)getZName(SUB41(local_3c,0),false);
        local_c = *piVar4;
        local_8 = piVar4[1];
        DAT_10023b50 = pcVar3;
        if ((local_c != 0) && (pcVar3[-1] == '1')) {
          piVar4 = (int *)operator+((char)local_8c,(DName *)0x7e);
          local_c = *piVar4;
          local_8 = piVar4[1];
        }
        pcVar3 = DAT_10023b50;
        if (local_1c != (int *)0x0) {
          DName::operator+=((DName *)&local_c,(DName *)&local_1c);
          pcVar3 = DAT_10023b50;
        }
        goto LAB_10017489;
      }
      if (cVar2 < ':') {
        pcVar9 = *(char **)(&DAT_10020290 + *DAT_10023b50 * 4);
        DAT_10023b50 = pcVar3;
        goto LAB_10017459;
      }
    }
  }
  else {
    if (cVar2 == 'B') {
      bVar1 = true;
      goto LAB_1001795d;
    }
    if (cVar2 < 'C') goto LAB_1001785c;
    if (cVar2 < '[') goto LAB_1001795d;
    if (cVar2 == '_') {
      cVar2 = *pcVar3;
      pcVar3 = DAT_10023b50 + 2;
      if (cVar2 < 'P') {
        if ('C' < cVar2) {
LAB_1001793a:
          pcVar9 = *(char **)("__cdecl" + DAT_10023b50[1] * 4 + 4);
          DAT_10023b50 = pcVar3;
LAB_100175f7:
          DName::DName(_param_1,pcVar9);
          return _param_1;
        }
        if (cVar2 < ':') {
          if (cVar2 == '9') {
            pcVar9 = DAT_10023b50 + 1;
            DAT_10023b50 = pcVar3;
            DName::DName((DName *)&local_14,(&PTR_s___pascal_10020320)[*pcVar9]);
            local_8 = local_10 | 0x8000;
LAB_1001762d:
            *(undefined4 *)_param_1 = local_14;
            goto LAB_10017491;
          }
          if (cVar2 == '\0') {
LAB_10017576:
            pcVar3 = pcVar3 + -1;
LAB_1001757c:
            DAT_10023b50 = pcVar3;
            DVar10 = 1;
            goto LAB_1001757e;
          }
          if ('/' < cVar2) {
            if (cVar2 < '7') {
              pcVar9 = (&PTR_s___pascal_10020320)[DAT_10023b50[1]];
              DAT_10023b50 = pcVar3;
              goto LAB_10017459;
            }
            if (cVar2 < '9') {
              pcVar9 = (&PTR_s___pascal_10020320)[DAT_10023b50[1]];
              DAT_10023b50 = pcVar3;
              goto LAB_100175f7;
            }
          }
        }
        else if (cVar2 == '?') {
          cVar2 = *pcVar3;
          pcVar3 = DAT_10023b50 + 3;
          if (cVar2 == '\0') goto LAB_10017576;
          if (cVar2 == '0') {
            pcVar9 = "`anonymous namespace\'";
            DAT_10023b50 = pcVar3;
LAB_10017661:
            getStringEncoding((char *)&local_14,(int)pcVar9);
            local_8 = local_10 | 0x1000;
            goto LAB_1001762d;
          }
        }
        else if ('@' < cVar2) {
          if (cVar2 < 'C') goto LAB_1001793a;
          if (cVar2 == 'C') {
            pcVar9 = "`string\'";
            DAT_10023b50 = pcVar3;
            goto LAB_10017661;
          }
        }
      }
      else if (cVar2 < 'U') {
        if ('R' < cVar2) goto LAB_1001793a;
        pDVar5 = _param_1;
        if (cVar2 == 'P') {
          pcVar9 = DAT_10023b50 + 1;
          DAT_10023b50 = pcVar3;
          DName::operator=((DName *)&local_c,*(char **)("__cdecl" + *pcVar9 * 4 + 4));
          piVar4 = (int *)getOperatorName(SUB41(local_84,0),(bool *)0x0);
          local_1c = (int *)*piVar4;
          local_18 = piVar4[1];
          if ((local_1c == (int *)0x0) || (pcVar3 = DAT_10023b50, (local_18 & 0x400) == 0)) {
LAB_10017863:
            pDVar8 = (DName *)&local_c;
LAB_1001786d:
            DName::operator+(pDVar8,pDVar5);
            return _param_1;
          }
        }
        else {
          if (cVar2 == 'Q') goto LAB_10017489;
          if (cVar2 == 'R') {
            pcVar9 = DAT_10023b50 + 1;
            DAT_10023b50 = pcVar3;
            DName::operator=((DName *)&local_c,*(char **)("__cdecl" + *pcVar9 * 4 + 4));
            if (*DAT_10023b50 == '\0') {
              DName::operator+((DName *)&local_c,(DNameStatus)_param_1);
              return _param_1;
            }
            uVar6 = (int)*DAT_10023b50 - 0x30;
            pcVar3 = DAT_10023b50;
            if ((-1 < (int)uVar6) && (uVar6 < 5)) {
              DName::operator=((DName *)&local_1c,(&PTR_s_Type_Descriptor__10020344)[uVar6]);
              pcVar3 = DAT_10023b50;
              iVar7 = (int)*DAT_10023b50;
              DAT_10023b50 = DAT_10023b50 + 1;
              if (iVar7 == 0x30) {
                getDataType((DName *)&local_14);
                pDVar8 = local_64;
                this = (DName *)DName::operator+((DName *)&local_14,(char)local_74);
                pDVar8 = (DName *)DName::operator+(this,pDVar8);
                goto LAB_1001786d;
              }
              if (iVar7 == 0x31) {
                DName::operator+((DName *)&local_c,(DName *)&local_14);
                cVar2 = (char)local_4c;
                pDVar5 = (DName *)getSignedDimension();
                pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
                DName::operator+=((DName *)&local_14,pDVar5);
                cVar2 = (char)local_2c;
                pDVar5 = (DName *)getSignedDimension();
                pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
                DName::operator+=((DName *)&local_14,pDVar5);
                cVar2 = (char)local_6c;
                pDVar5 = (DName *)getSignedDimension();
                pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
                DName::operator+=((DName *)&local_14,pDVar5);
                cVar2 = (char)local_44;
                pDVar5 = (DName *)getDimension(SUB41(local_54,0));
                pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
                DName::operator+=((DName *)&local_14,pDVar5);
                DName::operator+((DName *)&local_14,param_1);
                return _param_1;
              }
              if (iVar7 - 0x32U < 3) goto LAB_10017863;
              goto LAB_1001757c;
            }
          }
        }
      }
      else if ('T' < cVar2) {
        if (cVar2 < 'W') {
          pcVar9 = *(char **)("__cdecl" + DAT_10023b50[1] * 4 + 4);
          DAT_10023b50 = pcVar3;
LAB_10017459:
          DName::operator=((DName *)&local_c,pcVar9);
          goto LAB_10017461;
        }
        if ('W' < cVar2) {
          if (cVar2 < 'Z') goto LAB_1001793a;
          if (cVar2 == '_') {
            cVar2 = *pcVar3;
            pcVar3 = DAT_10023b50 + 3;
            if ('@' < cVar2) {
              if ('D' < cVar2) {
                if (cVar2 < 'G') {
                  pcVar9 = DAT_10023b50 + 2;
                  DAT_10023b50 = pcVar3;
                  DName::DName((DName *)&local_14,(&PTR_DAT_10020368)[*pcVar9]);
                  if (*DAT_10023b50 == '?') {
                    pDVar5 = (DName *)getDecoratedName();
                    DName::operator+=((DName *)&local_14,pDVar5);
                    if (*DAT_10023b50 == '@') {
                      DAT_10023b50 = DAT_10023b50 + 1;
                    }
                  }
                  else {
                    pDVar5 = (DName *)getSymbolName();
                    DName::operator+=((DName *)&local_14,pDVar5);
                  }
                  DName::operator+=((DName *)&local_14,"\'\'");
                  *(undefined4 *)_param_1 = local_14;
                  local_8 = local_10;
                  goto LAB_10017491;
                }
                if ('J' < cVar2) goto LAB_1001785c;
              }
              pcVar9 = (&PTR_DAT_10020368)[DAT_10023b50[2]];
              DAT_10023b50 = pcVar3;
              goto LAB_100175f7;
            }
          }
        }
      }
    }
  }
LAB_1001785c:
  DAT_10023b50 = pcVar3;
  DVar10 = 2;
LAB_1001757e:
  DName::DName(_param_1,DVar10);
  return _param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateName(bool)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getTemplateName(bool param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  DName *pDVar6;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  undefined4 local_a4 [11];
  undefined4 local_78 [11];
  undefined4 local_4c [11];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  int *local_10;
  int local_c;
  char local_5;
  
  uVar3 = DAT_10023b4c;
  uVar2 = DAT_10023b48;
  uVar1 = DAT_10023b44;
  if ((*DAT_10023b50 == '?') && (DAT_10023b50[1] == '$')) {
    local_78[0] = 0xffffffff;
    local_4c[0] = 0xffffffff;
    local_a4[0] = 0xffffffff;
    DAT_10023b44 = local_78;
    DAT_10023b48 = local_4c;
    DAT_10023b4c = local_a4;
    local_5 = '\0';
    if (DAT_10023b50[2] == '?') {
      DAT_10023b50 = DAT_10023b50 + 3;
      piVar5 = (int *)getOperatorName(SUB41(local_18,0),(bool *)0x1);
    }
    else {
      DAT_10023b50 = DAT_10023b50 + 2;
      piVar5 = (int *)getZName(SUB41(local_18,0),true);
    }
    local_10 = (int *)*piVar5;
    local_c = piVar5[1];
    if (local_10 == (int *)0x0) {
      DAT_10023b68 = 1;
    }
    if (local_5 == '\0') {
      getTemplateArgumentList();
      pDVar6 = (DName *)operator+((char)local_20,(DName *)0x3c);
      DName::operator+=((DName *)&local_10,pDVar6);
      if (local_10 != (int *)0x0) {
        cVar4 = (**(code **)(*local_10 + 4))();
        if (cVar4 == '>') {
          DName::operator+=((DName *)&local_10,' ');
        }
      }
      DName::operator+=((DName *)&local_10,'>');
      if ((in_stack_00000008 != '\0') && (*DAT_10023b50 != '\0')) {
        DAT_10023b50 = DAT_10023b50 + 1;
      }
    }
    DAT_10023b44 = (undefined4 *)uVar1;
    DAT_10023b48 = (undefined4 *)uVar2;
    DAT_10023b4c = (undefined4 *)uVar3;
    *(int **)_param_1 = local_10;
    *(int *)(_param_1 + 4) = local_c;
    return _param_1;
  }
  DName::DName(_param_1,2);
  return _param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getZName(bool,bool)
   
   Library: Visual Studio 2008 Release */

void __cdecl UnDecorator::getZName(bool param_1,bool param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  DName *pDVar6;
  DName *pDVar7;
  uint unaff_ESI;
  char *unaff_EDI;
  char *pcVar8;
  undefined3 in_stack_00000005;
  char in_stack_0000000c;
  DName local_3c [8];
  undefined4 *local_34;
  DName local_30 [4];
  uint local_2c;
  DName local_28 [8];
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  cVar1 = *DAT_10023b50;
  local_34 = _param_1;
  if ((int)cVar1 - 0x30U < 10) {
    DAT_10023b50 = DAT_10023b50 + 1;
    Replicator::operator[](DAT_10023b48,(int)_param_1);
    goto LAB_10017cbc;
  }
  local_20 = 0;
  local_1c = local_1c & 0xffff0000;
  if (cVar1 == '?') {
    puVar2 = (undefined4 *)getTemplateName(SUB41(local_28,0));
    local_20 = *puVar2;
    local_1c = puVar2[1];
    pcVar8 = DAT_10023b50 + 1;
    if (*DAT_10023b50 != '@') {
      DName::operator=((DName *)&local_20,(*DAT_10023b50 != '\0') + 1);
      pcVar8 = DAT_10023b50;
    }
  }
  else {
    pcVar8 = "template-parameter-";
    uVar3 = und_strncmp((char *)0x13,unaff_EDI,unaff_ESI);
    if (uVar3 == 0) {
      DAT_10023b50 = DAT_10023b50 + 0x13;
    }
    else {
      pcVar8 = "generic-type-";
      uVar3 = und_strncmp((char *)0xd,unaff_EDI,unaff_ESI);
      if (uVar3 != 0) {
        if ((in_stack_0000000c == '\0') || (cVar1 != '@')) {
          puVar2 = (undefined4 *)DName::DName(local_30,&DAT_10023b50,'@');
          local_20 = *puVar2;
          local_1c = puVar2[1];
          pcVar8 = DAT_10023b50;
        }
        else {
          local_1c = local_2c & 0xffff0000;
          DAT_10023b50 = DAT_10023b50 + 1;
          local_20 = 0;
          pcVar8 = DAT_10023b50;
        }
        goto LAB_10017c94;
      }
      DAT_10023b50 = DAT_10023b50 + 0xd;
    }
    getSignedDimension();
    if ((DAT_10023b60 & 0x4000) == 0) {
      DName::operator=((DName *)&local_20,"`");
      pDVar7 = local_30;
      pDVar6 = local_3c;
    }
    else {
      DName::getString(local_28,local_18,0x10);
      lVar4 = _atol(local_18);
      pcVar5 = (char *)(*DAT_10023b64)(lVar4);
      if (pcVar5 != (char *)0x0) {
        DName::operator=((DName *)&local_20,pcVar5);
        pcVar8 = DAT_10023b50;
        goto LAB_10017c94;
      }
      DName::operator=((DName *)&local_20,"`");
      pDVar7 = local_3c;
      pDVar6 = local_30;
    }
    pDVar6 = (DName *)operator+((char *)pDVar6,(DName *)pcVar8);
    pDVar7 = (DName *)DName::operator+(pDVar6,(char *)pDVar7);
    DName::operator+=((DName *)&local_20,pDVar7);
    pcVar8 = DAT_10023b50;
  }
LAB_10017c94:
  DAT_10023b50 = pcVar8;
  if ((param_2) && (*(int *)DAT_10023b48 != 9)) {
    Replicator::operator+=(DAT_10023b48,(DName *)&local_20);
  }
  *local_34 = local_20;
  local_34[1] = local_1c;
LAB_10017cbc:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScopedName(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getScopedName(void)

{
  undefined4 *puVar1;
  DName *pDVar2;
  DName *in_stack_00000004;
  char *pcVar3;
  DName *pDVar4;
  DNameStatus DVar5;
  DName local_1c [8];
  char local_14 [8];
  DName local_c [8];
  
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  *(undefined4 *)in_stack_00000004 = 0;
  puVar1 = (undefined4 *)getZName(SUB41(local_c,0),true);
  FUN_1001567a(in_stack_00000004,puVar1);
  if ((in_stack_00000004[4] == (DName)0x0) && (*DAT_10023b50 != '\0')) {
    if (*DAT_10023b50 == '@') goto LAB_10017d4b;
    pDVar4 = local_c;
    pcVar3 = local_14;
    pDVar2 = (DName *)getScope();
    pDVar2 = (DName *)DName::operator+(pDVar2,pcVar3);
    puVar1 = (undefined4 *)DName::operator+(pDVar2,pDVar4);
    FUN_1001567a(in_stack_00000004,puVar1);
  }
  if (*DAT_10023b50 != '@') {
    if (*DAT_10023b50 == '\0') {
      if (*(int *)in_stack_00000004 != 0) {
        pDVar4 = local_1c;
        pcVar3 = local_14;
        pDVar2 = (DName *)DName::DName(local_c,1);
        pDVar2 = (DName *)DName::operator+(pDVar2,pcVar3);
        puVar1 = (undefined4 *)DName::operator+(pDVar2,pDVar4);
        FUN_1001567a(in_stack_00000004,puVar1);
        return in_stack_00000004;
      }
      DVar5 = 1;
    }
    else {
      DVar5 = 2;
    }
    DName::operator=(in_stack_00000004,DVar5);
    return in_stack_00000004;
  }
LAB_10017d4b:
  DAT_10023b50 = DAT_10023b50 + 1;
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getECSUName(void)
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl UnDecorator::getECSUName(void)

{
  undefined4 in_stack_00000004;
  
  getScopedName();
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getECSUDataType(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getECSUDataType(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  DName *in_stack_00000004;
  char *pcVar5;
  char local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar5 = DAT_10023b50;
  uVar4 = 1;
  uVar3 = ~(DAT_10023b60 >> 0xf) & 1;
  if ((uVar3 == 0) || ((DAT_10023b60 & 0x1000) != 0)) {
    uVar4 = 0;
  }
  cVar1 = *DAT_10023b50;
  local_c = 0;
  local_8 = local_8 & 0xffff0000;
  DAT_10023b50 = DAT_10023b50 + 1;
  if (cVar1 == '\0') {
    DAT_10023b50 = pcVar5;
    DName::DName(in_stack_00000004,"unknown ecsu\'");
    return in_stack_00000004;
  }
  if (cVar1 == 'T') {
    pcVar5 = "union ";
  }
  else if (cVar1 == 'U') {
    pcVar5 = "struct ";
  }
  else if (cVar1 == 'V') {
    pcVar5 = "class ";
  }
  else {
    if (cVar1 == 'W') {
      getEnumType();
      puVar2 = (undefined4 *)operator+(local_1c,(DName *)"enum ");
      local_c = *puVar2;
      local_8 = puVar2[1];
      goto LAB_10017e5e;
    }
    if (cVar1 == 'X') {
      pcVar5 = "coclass ";
    }
    else {
      uVar3 = uVar4;
      if (cVar1 != 'Y') goto LAB_10017e5e;
      pcVar5 = "cointerface ";
    }
  }
  DName::operator=((DName *)&local_c,pcVar5);
  uVar3 = uVar4;
LAB_10017e5e:
  local_14 = 0;
  local_10 = local_10 & 0xffff0000;
  if (uVar3 != 0) {
    local_14 = local_c;
    local_10 = local_8;
  }
  getScopedName();
  DName::operator+=((DName *)&local_14,(DName *)&local_c);
  *(undefined4 *)in_stack_00000004 = local_14;
  *(uint *)(in_stack_00000004 + 4) = local_10;
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSymbolName(void)
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl UnDecorator::getSymbolName(void)

{
  undefined4 in_stack_00000004;
  bool bVar1;
  
  bVar1 = SUB41(in_stack_00000004,0);
  if (*DAT_10023b50 == '?') {
    if (DAT_10023b50[1] == '$') {
      getTemplateName(bVar1);
    }
    else {
      DAT_10023b50 = DAT_10023b50 + 1;
      getOperatorName(bVar1,(bool *)0x0);
    }
  }
  else {
    getZName(bVar1,true);
  }
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getBasedType(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getBasedType(void)

{
  char cVar1;
  char *pcVar2;
  DName *pDVar3;
  DName *in_stack_00000004;
  undefined4 local_c;
  undefined4 local_8;
  
  pcVar2 = UScore(0);
  DName::DName((DName *)&local_c,pcVar2);
  if (*DAT_10023b50 == '\0') {
    DName::operator+=((DName *)&local_c,1);
  }
  else {
    cVar1 = *DAT_10023b50;
    DAT_10023b50 = DAT_10023b50 + 1;
    if (cVar1 == '0') {
      DName::operator+=((DName *)&local_c,"void");
    }
    else if (cVar1 == '2') {
      pDVar3 = (DName *)getScopedName();
      DName::operator+=((DName *)&local_c,pDVar3);
    }
    else if (cVar1 == '5') {
      DName::DName(in_stack_00000004,2);
      return in_stack_00000004;
    }
  }
  DName::operator+=((DName *)&local_c,") ");
  *(undefined4 *)in_stack_00000004 = local_c;
  *(undefined4 *)(in_stack_00000004 + 4) = local_8;
  return in_stack_00000004;
}




/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::composeDeclaration(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::composeDeclaration(DName *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  DName *pDVar4;
  DName *pDVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  DName *pDVar9;
  bool bVar10;
  DName *in_stack_00000008;
  char cVar11;
  char cVar12;
  char cVar13;
  char *pcVar14;
  DName local_70 [8];
  DName local_68 [8];
  DName local_60 [8];
  DName local_58 [8];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  DName local_20 [4];
  int local_1c;
  undefined4 local_18;
  uint local_14;
  undefined1 local_10 [4];
  uint local_c;
  uint local_8;
  
  local_24 = local_24 & 0xffff0000;
  local_28 = 0;
  uVar1 = getTypeEncoding();
  if ((*(int *)in_stack_00000008 == 0) ||
     (local_1c = 1, (*(uint *)(in_stack_00000008 + 4) & 0x200) == 0)) {
    local_1c = 0;
  }
  if (uVar1 == 0xffff) {
    DName::DName(param_1,2);
    return param_1;
  }
  if (uVar1 == 0xfffe) {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if (uVar1 == 0xfffd) {
    *(undefined4 *)param_1 = *(undefined4 *)in_stack_00000008;
    local_24 = *(uint *)(in_stack_00000008 + 4);
    goto LAB_10018b2a;
  }
  local_8 = uVar1 & 0x8000;
  if (local_8 == 0) {
LAB_100185cd:
    DName::operator+=((DName *)&local_28,in_stack_00000008);
    if (local_8 == 0) {
      if (((uVar1 & 0x7c00) == 0x6800) || ((uVar1 & 0x7c00) == 0x7000)) {
        getVfTableType(param_1);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x6000) {
        pDVar4 = param_1;
        FID_conflict_getGuardNumber(local_70);
        pDVar5 = local_68;
        pDVar9 = (DName *)DName::operator+((DName *)&local_28,(char)local_60);
        pDVar5 = (DName *)DName::operator+(pDVar9,pDVar5);
        DName::operator+(pDVar5,(char *)pDVar4);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x7c00) {
        getVdispMapType(param_1);
        return param_1;
      }
      uVar2 = uVar1 & 0x6000;
    }
    else {
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) || ((uVar1 & 0x1b00) != 0x1000 || local_8 == 0)) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1100 && local_8 != 0)) {
        pcVar14 = "`template static data member constructor helper\'";
        goto LAB_10018774;
      }
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1200 && local_8 != 0)) {
        pcVar14 = "`template static data member destructor helper\'";
        goto LAB_10018774;
      }
      if (local_8 == 0) {
        if ((uVar1 & 0x7c00) == 0x7800) goto LAB_100183e2;
        goto LAB_10018793;
      }
LAB_10018799:
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    else {
      pcVar14 = "`local static destructor helper\'";
LAB_10018774:
      DName::operator+=((DName *)&local_28,pcVar14);
LAB_10018793:
      if (local_8 != 0) goto LAB_10018799;
      uVar2 = uVar1 & 0x6000;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) ||
       (((uVar1 & 0x1b00) != 0x1100 || local_8 == 0 && ((uVar1 & 0x1b00) != 0x1200 || local_8 == 0))
       )) {
      piVar3 = (int *)getExternalDataType(local_70);
    }
    else {
      piVar3 = (int *)operator+((char *)local_70,(DName *)&DAT_10020758);
    }
LAB_100181fb:
    local_28 = *piVar3;
    local_24 = piVar3[1];
  }
  else {
    local_14 = uVar1 & 0x1800;
    local_c = (uint)(local_14 == 0x800);
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1000)) goto LAB_100185cd;
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && (((uVar1 & 0x1b00) == 0x1100 || ((uVar1 & 0x1b00) == 0x1200))))
    goto LAB_100185cd;
    if ((uVar1 & 0x4000) != 0) {
      if (((~(DAT_10023b60 >> 1) & 1) == 0) || ((~(DAT_10023b60 >> 3) & 1) == 0)) {
        pDVar5 = (DName *)getBasedType();
        DName::operator|=((DName *)&local_28,pDVar5);
      }
      else {
        getBasedType();
        piVar3 = (int *)operator+((char)&local_48,(DName *)0x20);
        local_28 = *piVar3;
        local_24 = piVar3[1];
      }
    }
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 == 0) || (local_14 != 0x1800)) {
      local_44 = local_44 & 0xffff0000;
      local_3c = local_3c & 0xffff0000;
      local_14 = local_14 & 0xffff0000;
      local_4c = local_4c & 0xffff0000;
      local_2c = local_2c & 0xffff0000;
      local_48 = 0;
      local_40 = 0;
      local_18 = 0;
      local_50 = 0;
      local_30 = 0;
      if (local_c == 0) {
        uVar2 = uVar1 & 0x1000;
      }
      else {
        uVar2 = uVar1 & 0x400;
      }
      if (uVar2 != 0) {
        if (local_c != 0) {
          if ((uVar1 & 0x700) == 0x600) {
            puVar6 = (undefined4 *)getDisplacement();
            local_48 = *puVar6;
            local_44 = puVar6[1];
            puVar6 = (undefined4 *)getDisplacement();
            local_40 = *puVar6;
            local_3c = puVar6[1];
            puVar6 = (undefined4 *)getDisplacement();
          }
          else {
            if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_100182b1;
            puVar6 = (undefined4 *)getDisplacement();
          }
          local_18 = *puVar6;
          local_14 = puVar6[1];
        }
LAB_100182b1:
        puVar6 = (undefined4 *)getDisplacement();
        local_50 = *puVar6;
        local_4c = puVar6[1];
      }
      if ((local_c != 0) && ((local_c == 0 || ((uVar1 & 0x700) != 0x200)))) {
        if (((byte)DAT_10023b60 & 0x60) == 0x60) {
          pDVar5 = (DName *)getThisType();
          DName::operator|=((DName *)&local_30,pDVar5);
        }
        else {
          puVar6 = (undefined4 *)getThisType();
          local_30 = *puVar6;
          local_2c = puVar6[1];
        }
      }
      if (((~(DAT_10023b60 >> 1) & 1) == 0) || ((~(DAT_10023b60 >> 4) & 1) == 0)) {
        pDVar5 = (DName *)getCallingConvention();
        DName::operator|=((DName *)&local_28,pDVar5);
      }
      else {
        pDVar5 = (DName *)&local_38;
        pDVar4 = (DName *)getCallingConvention();
        piVar3 = (int *)DName::operator+(pDVar4,pDVar5);
        local_28 = *piVar3;
        local_24 = piVar3[1];
      }
      if (*(int *)in_stack_00000008 != 0) {
        if ((local_28 == 0) || ((DAT_10023b60 & 0x1000) != 0)) {
          local_28 = *(int *)in_stack_00000008;
          local_24 = *(uint *)(in_stack_00000008 + 4);
        }
        else {
          pDVar5 = (DName *)operator+((char)local_58,(DName *)0x20);
          DName::operator+=((DName *)&local_28,pDVar5);
        }
      }
      local_34 = local_34 & 0xffff0000;
      piVar3 = (int *)0x0;
      local_38 = 0;
      if (local_1c == 0) {
        piVar7 = (int *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,8,0);
        piVar3 = (int *)0x0;
        if (piVar7 != (int *)0x0) {
          *piVar7 = 0;
          *(undefined1 *)(piVar7 + 1) = 0;
          piVar7[1] = piVar7[1] & 0xffff00ff;
          piVar3 = piVar7;
        }
        piVar7 = (int *)getReturnType(local_58);
        local_38 = *piVar7;
        local_34 = piVar7[1];
LAB_1001842b:
        uVar2 = local_c;
        if (local_c == 0) {
          uVar8 = uVar1 & 0x1000;
        }
        else {
          uVar8 = uVar1 & 0x400;
        }
        if (uVar8 != 0) {
          if (local_c == 0) {
LAB_100184f2:
            DName::operator+=((DName *)&local_28,"`adjustor{");
          }
          else {
            if ((uVar1 & 0x700) == 0x600) {
              cVar13 = (char)local_58;
              pDVar5 = local_20;
              cVar12 = (char)local_10;
              pDVar4 = local_60;
              cVar11 = (char)local_68;
              pDVar9 = (DName *)operator+((char *)local_70,(DName *)"`vtordispex{");
              pDVar9 = (DName *)DName::operator+(pDVar9,cVar11);
              pDVar4 = (DName *)DName::operator+(pDVar9,pDVar4);
              pDVar4 = (DName *)DName::operator+(pDVar4,cVar12);
              pDVar5 = (DName *)DName::operator+(pDVar4,pDVar5);
            }
            else {
              if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_100184f2;
              cVar13 = (char)local_70;
              pDVar5 = (DName *)operator+((char *)local_68,(DName *)"`vtordisp{");
            }
            pDVar5 = (DName *)DName::operator+(pDVar5,cVar13);
            DName::operator+=((DName *)&local_28,pDVar5);
          }
          pDVar5 = (DName *)DName::operator+((DName *)&local_50,(char *)local_70);
          DName::operator+=((DName *)&local_28,pDVar5);
        }
        cVar13 = (char)local_70;
        getArgumentTypes();
        pDVar5 = (DName *)operator+((char)local_60,(DName *)0x28);
        pDVar5 = (DName *)DName::operator+(pDVar5,cVar13);
        DName::operator+=((DName *)&local_28,pDVar5);
        if ((uVar2 != 0) && ((uVar1 & 0x700) != 0x200)) {
          DName::operator+=((DName *)&local_28,(DName *)&local_30);
        }
        if ((~(DAT_10023b60 >> 8) & 1) == 0) {
          pDVar5 = (DName *)getThrowTypes();
          DName::operator|=((DName *)&local_28,pDVar5);
        }
        else {
          pDVar5 = (DName *)getThrowTypes();
          DName::operator+=((DName *)&local_28,pDVar5);
        }
        if (((~(DAT_10023b60 >> 2) & 1) != 0) && (piVar3 != (int *)0x0)) {
          *piVar3 = local_28;
          piVar3[1] = local_24;
          local_28 = local_38;
          local_24 = local_34;
        }
        goto LAB_1001882a;
      }
      getReturnType(local_58);
      pDVar5 = (DName *)operator+((char *)local_20,(DName *)&DAT_10020758);
      DName::operator+=((DName *)&local_28,pDVar5);
      if ((DAT_10023b60 & 0x1000) == 0) goto LAB_1001842b;
LAB_100183e2:
      *(int *)param_1 = local_28;
      goto LAB_10018b2a;
    }
    FID_conflict_getGuardNumber(&local_50);
    pDVar5 = (DName *)&local_48;
    pDVar4 = (DName *)DName::operator+(in_stack_00000008,(char)&local_40);
    pDVar5 = (DName *)DName::operator+(pDVar4,pDVar5);
    DName::operator+=((DName *)&local_28,pDVar5);
    getVCallThunkType();
    if ((DAT_10023b60 & 0x1000) == 0) {
      pcVar14 = (char *)&local_48;
      pDVar5 = (DName *)operator+((char)&local_40,(DName *)0x2c);
      pDVar5 = (DName *)DName::operator+(pDVar5,pcVar14);
      DName::operator+=((DName *)&local_28,pDVar5);
    }
    DName::operator+=((DName *)&local_28,"}\'");
    getCallingConvention();
    if ((((~(DAT_10023b60 >> 1) & 1) != 0) && ((~(DAT_10023b60 >> 4) & 1) != 0)) &&
       ((DAT_10023b60 & 0x1000) == 0)) {
      pDVar5 = (DName *)&local_48;
      cVar13 = (char)&local_40;
      pDVar4 = (DName *)operator+((char)&local_38,(DName *)0x20);
      pDVar4 = (DName *)DName::operator+(pDVar4,cVar13);
      piVar3 = (int *)DName::operator+(pDVar4,pDVar5);
      goto LAB_100181fb;
    }
  }
LAB_1001882a:
  if (local_8 == 0) {
    uVar2 = uVar1 & 0x6000;
  }
  else {
    uVar2 = (uVar1 & 0x1800) - 0x800;
  }
  if (uVar2 == 0) {
    if ((~(DAT_10023b60 >> 9) & 1) != 0) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if ((uVar2 == 0) && (local_8 == 0 || (uVar1 & 0x700) == 0x200)) {
        piVar3 = (int *)operator+((char *)local_70,(DName *)"static ");
        local_28 = *piVar3;
        local_24 = piVar3[1];
      }
      if (local_8 == 0) {
LAB_100188e1:
        uVar2 = uVar1 & 0x6000;
LAB_100188e8:
        if (uVar2 == 0) {
          uVar2 = uVar1 & 0x400;
        }
        else {
          uVar2 = uVar1 & 0x1000;
        }
        if (uVar2 == 0) goto LAB_1001899f;
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x500)) {
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x6000;
          }
          else {
            uVar2 = (uVar1 & 0x1800) - 0x800;
          }
          if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x600)) {
            if (local_8 == 0) {
              uVar2 = uVar1 & 0x6000;
            }
            else {
              uVar2 = (uVar1 & 0x1800) - 0x800;
            }
            if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x400)) goto LAB_1001899f;
          }
        }
      }
      else if ((uVar1 & 0x700) != 0x100) {
        if (local_8 == 0) goto LAB_100188e1;
        uVar2 = (uVar1 & 0x1800) - 0x800;
        goto LAB_100188e8;
      }
      piVar3 = (int *)operator+((char *)local_70,(DName *)"virtual ");
      local_28 = *piVar3;
      local_24 = piVar3[1];
    }
LAB_1001899f:
    if ((~(DAT_10023b60 >> 7) & 1) != 0) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        if (local_8 == 0) {
          bVar10 = (uVar1 & 0x1800) == 0x800;
        }
        else {
          bVar10 = ((byte)uVar1 & 0xc0) == 0x40;
        }
        if (!bVar10) goto LAB_100189fd;
        pcVar14 = "private: ";
LAB_10018a8c:
        piVar3 = (int *)operator+((char *)local_70,(DName *)pcVar14);
        local_28 = *piVar3;
        local_24 = piVar3[1];
      }
      else {
LAB_100189fd:
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            bVar10 = (uVar1 & 0x1800) == 0x1000;
          }
          else {
            bVar10 = ((byte)uVar1 & 0xc0) == 0x80;
          }
          if (bVar10) {
            pcVar14 = "protected: ";
            goto LAB_10018a8c;
          }
        }
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x1800;
          }
          else {
            uVar2 = uVar1 & 0xc0;
          }
          if (uVar2 == 0) {
            pcVar14 = "public: ";
            goto LAB_10018a8c;
          }
        }
      }
    }
  }
  if (local_8 == 0) {
    uVar2 = uVar1 & 0x6000;
  }
  else {
    uVar2 = (uVar1 & 0x1800) - 0x800;
  }
  if (uVar2 == 0) {
    uVar2 = uVar1 & 0x400;
  }
  else {
    uVar2 = uVar1 & 0x1000;
  }
  if ((uVar2 != 0) && ((DAT_10023b60 & 0x1000) == 0)) {
    piVar3 = (int *)operator+((char *)local_70,(DName *)"[thunk]:");
    local_28 = *piVar3;
    local_24 = piVar3[1];
  }
  if ((uVar1 & 0x10000) != 0) {
    piVar3 = (int *)operator+((char *)local_70,(DName *)"extern \"C\" ");
    local_28 = *piVar3;
    local_24 = piVar3[1];
  }
  *(int *)param_1 = local_28;
LAB_10018b2a:
  *(uint *)(param_1 + 4) = local_24;
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDecoratedName(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getDecoratedName(void)

{
  char *pcVar1;
  int *piVar2;
  DName *pDVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  DName *in_stack_00000004;
  DName *pDVar7;
  DNameStatus DVar8;
  DName local_28 [8];
  DName local_20 [8];
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if ((DAT_10023b60 & 0x2000) != 0) {
    DAT_10023b60 = DAT_10023b60 & 0xffffdfff;
    getDataType((DName *)&local_18);
    DAT_10023b60 = DAT_10023b60 | 0x2000;
LAB_10018b67:
    *(int *)in_stack_00000004 = local_18;
    *(uint *)(in_stack_00000004 + 4) = local_14;
    return in_stack_00000004;
  }
  if (*DAT_10023b50 == '?') {
    pcVar1 = DAT_10023b50 + 1;
    if ((*pcVar1 == '?') && (DAT_10023b50[2] == '?')) {
      DAT_10023b50 = pcVar1;
      getDecoratedName();
      for (; *DAT_10023b50 != '\0'; DAT_10023b50 = DAT_10023b50 + 1) {
      }
      goto LAB_10018b67;
    }
    DAT_10023b50 = pcVar1;
    getSymbolName();
    uVar4 = local_c;
    iVar5 = local_10;
    if ((local_10 == 0) || ((local_c & 0x200) == 0)) {
      local_8 = 0;
    }
    else {
      local_8 = 1;
    }
    uVar6 = local_c >> 0xf;
    if ('\x01' < (char)local_c) goto LAB_10018bea;
    if (((*DAT_10023b50 != '\0') && (*DAT_10023b50 != '@')) && (getScope(), local_18 != 0)) {
      if (DAT_10023b68 == '\0') {
        pDVar7 = local_28;
        pDVar3 = local_20;
      }
      else {
        DAT_10023b68 = '\0';
        piVar2 = (int *)DName::operator+((DName *)&local_10,local_20);
        iVar5 = *piVar2;
        uVar4 = piVar2[1];
        local_10 = iVar5;
        local_c = uVar4;
        if (*DAT_10023b50 == '@') goto LAB_10018ca4;
        piVar2 = (int *)getScope();
        local_18 = *piVar2;
        local_14 = piVar2[1];
        pDVar7 = local_20;
        pDVar3 = local_28;
      }
      pDVar3 = (DName *)DName::operator+((DName *)&local_18,(char *)pDVar3);
      piVar2 = (int *)DName::operator+(pDVar3,pDVar7);
      uVar4 = piVar2[1];
      iVar5 = *piVar2;
      local_10 = iVar5;
      local_c = uVar4;
    }
LAB_10018ca4:
    if ((local_8 != 0) && (iVar5 != 0)) {
      uVar4 = uVar4 | 0x200;
      local_c = uVar4;
    }
    if ((uVar6 & 1) != 0) {
      uVar4 = uVar4 | 0x8000;
      local_c = uVar4;
    }
    if ((iVar5 == 0) || ((uVar4 & 0x1000) != 0)) goto LAB_10018bea;
    if (*DAT_10023b50 != '\0') {
      if (*DAT_10023b50 != '@') goto LAB_10018ce9;
      DAT_10023b50 = DAT_10023b50 + 1;
    }
    if ((((DAT_10023b60 & 0x1000) == 0) || (local_8 != 0)) || ((uVar4 & 0x8000) != 0)) {
      composeDeclaration(in_stack_00000004);
      return in_stack_00000004;
    }
    local_18 = 0;
    local_14 = local_14 & 0xffff0000;
    composeDeclaration(local_28);
LAB_10018bea:
    *(int *)in_stack_00000004 = iVar5;
    *(uint *)(in_stack_00000004 + 4) = uVar4;
    return in_stack_00000004;
  }
  if (*DAT_10023b50 == '\0') {
    DVar8 = 1;
    goto LAB_10018d3a;
  }
LAB_10018ce9:
  DVar8 = 2;
LAB_10018d3a:
  DName::DName(in_stack_00000004,DVar8);
  return in_stack_00000004;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScope(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getScope(void)

{
  bool bVar1;
  undefined1 uVar2;
  DName *this;
  DName *pDVar3;
  undefined4 *puVar4;
  char *pcVar5;
  DName *in_stack_00000004;
  char cVar6;
  DName *pDVar7;
  DNameStatus DVar8;
  char local_94 [8];
  DName local_8c [8];
  DName local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  DName local_6c [8];
  DName local_64 [8];
  char local_5c [8];
  DName local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  DName local_24 [8];
  DName local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  *(undefined4 *)in_stack_00000004 = 0;
  bVar1 = false;
LAB_10018f5e:
  do {
    while( true ) {
      if (((in_stack_00000004[4] != (DName)0x0) || (*DAT_10023b50 == '\0')) ||
         (*DAT_10023b50 == '@')) {
        if (*DAT_10023b50 == '\0') {
          if (*(int *)in_stack_00000004 != 0) {
            pDVar7 = local_1c;
            pDVar3 = local_24;
            this = (DName *)DName::DName(local_14,1);
            pDVar3 = (DName *)DName::operator+(this,(char *)pDVar3);
            puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
            FUN_1001567a(in_stack_00000004,puVar4);
            return in_stack_00000004;
          }
          DVar8 = 1;
        }
        else {
          if (*DAT_10023b50 == '@') {
            return in_stack_00000004;
          }
          DVar8 = 2;
        }
        DName::operator=(in_stack_00000004,DVar8);
        return in_stack_00000004;
      }
      if ((DAT_10023b68 != '\0') && (DAT_10023b69 == '\0')) {
        return in_stack_00000004;
      }
      if (*(int *)in_stack_00000004 != 0) {
        puVar4 = (undefined4 *)operator+(local_94,(DName *)&DAT_10020604);
        FUN_1001567a(in_stack_00000004,puVar4);
        if (bVar1) {
          puVar4 = (undefined4 *)operator+((char)local_7c,(DName *)0x5b);
          FUN_1001567a(in_stack_00000004,puVar4);
          bVar1 = false;
        }
      }
      if (*DAT_10023b50 == '?') break;
      pDVar7 = local_24;
      uVar2 = SUB41(local_1c,0);
LAB_10018f43:
      pDVar3 = (DName *)getZName((bool)uVar2,true);
LAB_10018f4f:
      puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
      FUN_1001567a(in_stack_00000004,puVar4);
    }
    pcVar5 = DAT_10023b50 + 1;
    cVar6 = *pcVar5;
    if (cVar6 == '$') {
      pDVar7 = local_6c;
      uVar2 = SUB41(local_14,0);
      goto LAB_10018f43;
    }
    if (cVar6 != '%') {
      if (cVar6 == '?') {
        if ((DAT_10023b50[2] != '_') || (DAT_10023b50[3] != '?')) {
          pDVar7 = local_64;
          cVar6 = (char)local_34;
          DAT_10023b50 = pcVar5;
          getDecoratedName();
          pDVar3 = (DName *)operator+((char)local_4c,(DName *)0x60);
          pDVar3 = (DName *)DName::operator+(pDVar3,cVar6);
          goto LAB_10018f4f;
        }
        pDVar7 = local_54;
        DAT_10023b50 = DAT_10023b50 + 2;
        pDVar3 = (DName *)getOperatorName(SUB41(local_2c,0),(bool *)0x0);
        puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
        FUN_1001567a(in_stack_00000004,puVar4);
        if (*DAT_10023b50 == '@') {
          DAT_10023b50 = DAT_10023b50 + 1;
        }
      }
      else {
        if (cVar6 == 'A') goto LAB_10018eeb;
        if (cVar6 != 'I') {
          pDVar7 = local_8c;
          DAT_10023b50 = pcVar5;
          pDVar3 = (DName *)getLexicalFrame();
          goto LAB_10018f4f;
        }
        pDVar7 = local_84;
        cVar6 = (char)local_44;
        DAT_10023b50 = DAT_10023b50 + 2;
        pDVar3 = (DName *)getZName(SUB41(local_74,0),true);
        pDVar3 = (DName *)DName::operator+(pDVar3,cVar6);
        puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
        FUN_1001567a(in_stack_00000004,puVar4);
        bVar1 = true;
      }
      goto LAB_10018f5e;
    }
LAB_10018eeb:
    DAT_10023b50 = pcVar5;
    DName::DName(local_c,&DAT_10023b50,'@');
    puVar4 = (undefined4 *)operator+(local_5c,(DName *)"`anonymous namespace\'");
    FUN_1001567a(in_stack_00000004,puVar4);
    if (*(int *)DAT_10023b48 != 9) {
      Replicator::operator+=(DAT_10023b48,local_c);
    }
  } while( true );
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getFunctionIndirectType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getFunctionIndirectType(DName *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  DName *pDVar4;
  int *piVar5;
  DName *pDVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int *in_stack_00000008;
  char cVar10;
  DNameStatus DVar11;
  DName local_34 [8];
  undefined1 local_2c [8];
  DName local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  cVar10 = *DAT_10023b50;
  if (cVar10 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if (((cVar10 < '6') || ('9' < cVar10)) && (cVar10 != '_')) {
    DName::DName(param_1,2);
    return param_1;
  }
  uVar7 = (int)cVar10 - 0x36;
  pcVar2 = DAT_10023b50 + 1;
  if (uVar7 == 0x29) {
    cVar10 = *pcVar2;
    if (cVar10 == '\0') {
      DAT_10023b50 = pcVar2;
      operator+((DNameStatus)param_1,(DName *)0x1);
      return param_1;
    }
    uVar7 = (int)cVar10 - 0x3d;
    DAT_10023b50 = DAT_10023b50 + 2;
    if ((int)uVar7 < 4) goto LAB_10019046;
    bVar9 = SBORROW4(uVar7,7);
    iVar1 = cVar10 + -0x44;
    bVar8 = uVar7 == 7;
LAB_10019044:
    if (!bVar8 && bVar9 == iVar1 < 0) goto LAB_10019046;
  }
  else {
    DAT_10023b50 = pcVar2;
    if (-1 < (int)uVar7) {
      bVar9 = SBORROW4(uVar7,3);
      iVar1 = cVar10 + -0x39;
      bVar8 = uVar7 == 3;
      goto LAB_10019044;
    }
LAB_10019046:
    uVar7 = 0xffffffff;
  }
  if (uVar7 == 0xffffffff) {
    DName::DName(param_1,2);
    return param_1;
  }
  local_14 = 0;
  local_10 = local_10 & 0xffff0000;
  local_c = *in_stack_00000008;
  local_8 = in_stack_00000008[1];
  if ((uVar7 & 2) != 0) {
    puVar3 = (undefined4 *)operator+((char *)local_24,(DName *)&DAT_10020604);
    local_c = *puVar3;
    local_8 = puVar3[1];
    if (*DAT_10023b50 == '\0') {
      piVar5 = (int *)operator+((DNameStatus)local_34,(DName *)0x1);
    }
    else {
      pDVar6 = local_24;
      getScope();
      pDVar4 = (DName *)operator+((char)local_34,(DName *)0x20);
      piVar5 = (int *)DName::operator+(pDVar4,pDVar6);
    }
    local_c = *piVar5;
    local_8 = piVar5[1];
    if (*DAT_10023b50 == '\0') {
      operator+((DNameStatus)param_1,(DName *)0x1);
      return param_1;
    }
    if (*DAT_10023b50 != '@') {
      DVar11 = 2;
      goto LAB_100192fe;
    }
    DAT_10023b50 = DAT_10023b50 + 1;
    if (((byte)DAT_10023b60 & 0x60) == 0x60) {
      pDVar6 = (DName *)getThisType();
      DName::operator|=((DName *)&local_14,pDVar6);
    }
    else {
      puVar3 = (undefined4 *)getThisType();
      local_14 = *puVar3;
      local_10 = puVar3[1];
    }
  }
  if ((uVar7 & 4) != 0) {
    if ((~(DAT_10023b60 >> 1) & 1) == 0) {
      pDVar6 = (DName *)getBasedType();
      DName::operator|=((DName *)&local_c,pDVar6);
    }
    else {
      pDVar6 = local_34;
      getBasedType();
      pDVar4 = (DName *)operator+((char)local_24,(DName *)0x20);
      piVar5 = (int *)DName::operator+(pDVar4,pDVar6);
      local_c = *piVar5;
      local_8 = piVar5[1];
    }
  }
  if ((~(DAT_10023b60 >> 1) & 1) == 0) {
    pDVar6 = (DName *)getCallingConvention();
    DName::operator|=((DName *)&local_c,pDVar6);
  }
  else {
    pDVar6 = local_34;
    pDVar4 = (DName *)getCallingConvention();
    piVar5 = (int *)DName::operator+(pDVar4,pDVar6);
    local_c = *piVar5;
    local_8 = piVar5[1];
  }
  if (*in_stack_00000008 != 0) {
    cVar10 = (char)local_34;
    pDVar6 = (DName *)operator+((char)local_2c,(DName *)0x28);
    piVar5 = (int *)DName::operator+(pDVar6,cVar10);
    local_c = *piVar5;
    local_8 = piVar5[1];
  }
  piVar5 = (int *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,8,0);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *(undefined1 *)(piVar5 + 1) = 0;
    piVar5[1] = piVar5[1] & 0xffff00ff;
    *piVar5 = 0;
  }
  getReturnType((DName *)&local_1c);
  cVar10 = (char)local_34;
  getArgumentTypes();
  pDVar6 = (DName *)operator+((char)local_24,(DName *)0x28);
  pDVar6 = (DName *)DName::operator+(pDVar6,cVar10);
  DName::operator+=((DName *)&local_c,pDVar6);
  if ((((byte)DAT_10023b60 & 0x60) != 0x60) && ((uVar7 & 2) != 0)) {
    DName::operator+=((DName *)&local_c,(DName *)&local_14);
  }
  if ((~(DAT_10023b60 >> 8) & 1) == 0) {
    pDVar6 = (DName *)getThrowTypes();
    DName::operator|=((DName *)&local_c,pDVar6);
  }
  else {
    pDVar6 = (DName *)getThrowTypes();
    DName::operator+=((DName *)&local_c,pDVar6);
  }
  if (piVar5 != (int *)0x0) {
    *piVar5 = local_c;
    piVar5[1] = local_8;
    *(undefined4 *)param_1 = local_1c;
    *(undefined4 *)(param_1 + 4) = local_18;
    return param_1;
  }
  DVar11 = 3;
LAB_100192fe:
  DName::DName(param_1,DVar11);
  return param_1;
}




/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(class DName const
   &,char,class DName const &,int)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl
UnDecorator::getDataIndirectType(DName *param_1,char param_2,DName *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  DName *pDVar3;
  int *piVar4;
  DName *pDVar5;
  uint uVar6;
  undefined3 in_stack_00000009;
  int in_stack_00000014;
  DNameStatus DVar7;
  DName local_58 [8];
  char local_50 [8];
  undefined1 local_48 [8];
  char local_40 [8];
  undefined1 local_38 [8];
  char local_30 [8];
  undefined4 local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  char local_5;
  
  local_24 = local_24 & 0xffff0000;
  local_28 = 0;
  local_5 = '\0';
  if (*DAT_10023b50 == '\0') {
    if (in_stack_00000014 == 0) {
      if (*_param_2 == 0) {
        if (*(int *)param_4 == 0) goto LAB_100197c3;
      }
      else if (((_param_2[1] & 0x100U) == 0) && (*(int *)param_4 != 0)) {
        cVar1 = (char)local_58;
        pDVar3 = param_1;
        pDVar5 = (DName *)operator+((DNameStatus)local_50,(DName *)0x1);
        pDVar5 = (DName *)DName::operator+(pDVar5,cVar1);
        DName::operator+(pDVar5,pDVar3);
        return param_1;
      }
      operator+((DNameStatus)param_1,(DName *)0x1);
      return param_1;
    }
LAB_100197c3:
    DVar7 = 1;
LAB_100197c5:
    DName::DName(param_1,DVar7);
    return param_1;
  }
  if ((*DAT_10023b50 != '$') ||
     (getExtendedDataIndirectType((char *)&local_20,(bool *)&param_3,(int)&local_5), local_20 == 0))
  {
    local_14 = local_14 & 0xffff0000;
    local_18 = 0;
    uVar6 = (int)*DAT_10023b50 - (((*DAT_10023b50 < 'A') - 1 & 0x2b) + 0x16);
    local_1c = local_1c & 0xffff0000;
    local_20 = 0;
    do {
      if (uVar6 == 4) {
        if (((~(DAT_10023b60 >> 1) & 1) != 0) && ((~(DAT_10023b60 >> 0x11) & 1) != 0)) {
          pcVar2 = UScore(7);
          pDVar3 = (DName *)&local_18;
          if (local_18 == 0) goto LAB_10019476;
          pcVar2 = local_50;
          cVar1 = (char)local_58;
LAB_100193dc:
          pDVar3 = (DName *)DName::operator+((DName *)&local_18,cVar1);
          piVar4 = (int *)DName::operator+(pDVar3,pcVar2);
          local_18 = *piVar4;
          local_14 = piVar4[1];
        }
      }
      else if (uVar6 == 5) {
        if ((~(DAT_10023b60 >> 1) & 1) != 0) {
          pcVar2 = UScore(9);
          pDVar3 = (DName *)&local_20;
          if (local_20 == 0) goto LAB_10019476;
          pcVar2 = local_40;
          pDVar3 = (DName *)DName::operator+(pDVar3,(char)local_48);
          piVar4 = (int *)DName::operator+(pDVar3,pcVar2);
          local_20 = *piVar4;
          local_1c = piVar4[1];
        }
      }
      else {
        if (uVar6 != 8) {
          if (*DAT_10023b50 != '\0') {
            DAT_10023b50 = DAT_10023b50 + 1;
          }
          if (0x1f < uVar6) {
LAB_10019579:
            DVar7 = 2;
            goto LAB_100197c5;
          }
          DName::DName((DName *)&local_10,(char)param_3);
          piVar4 = (int *)DName::operator+((DName *)&local_28,local_58);
          local_10 = *piVar4;
          local_c = piVar4[1];
          if (local_18 != 0) {
            pDVar3 = local_58;
            pDVar5 = (DName *)DName::operator+((DName *)&local_10,(char)local_50);
            piVar4 = (int *)DName::operator+(pDVar5,pDVar3);
            local_10 = *piVar4;
            local_c = piVar4[1];
          }
          if (local_20 != 0) {
            pDVar3 = local_58;
            pDVar5 = (DName *)DName::operator+((DName *)&local_20,(char)local_50);
            piVar4 = (int *)DName::operator+(pDVar5,pDVar3);
            local_10 = *piVar4;
            local_c = piVar4[1];
          }
          if ((uVar6 & 0x10) != 0) {
            if (in_stack_00000014 != 0) goto LAB_10019579;
            if ((char)param_3 == '\0') {
              if (*DAT_10023b50 != '\0') {
                pDVar3 = (DName *)getScope();
                DName::operator|=((DName *)&local_10,pDVar3);
                goto LAB_10019600;
              }
            }
            else {
              piVar4 = (int *)operator+((char *)local_58,(DName *)&DAT_10020604);
              local_10 = *piVar4;
              local_c = piVar4[1];
              pDVar3 = local_58;
              if (*DAT_10023b50 == '\0') {
                piVar4 = (int *)operator+((DNameStatus)pDVar3,(DName *)0x1);
              }
              else {
                pDVar5 = (DName *)getScope();
                piVar4 = (int *)DName::operator+(pDVar5,pDVar3);
              }
              local_10 = *piVar4;
              local_c = piVar4[1];
LAB_10019600:
              cVar1 = *DAT_10023b50;
              if (cVar1 != '\0') {
                DAT_10023b50 = DAT_10023b50 + 1;
                if (cVar1 != '@') goto LAB_10019579;
                goto LAB_10019625;
              }
            }
            DName::operator+=((DName *)&local_10,1);
          }
LAB_10019625:
          if ((~(DAT_10023b60 >> 1) & 1) == 0) {
            if (((byte)uVar6 & 0xc) == 0xc) {
              pDVar3 = (DName *)getBasedType();
              DName::operator|=((DName *)&local_10,pDVar3);
            }
          }
          else if (((byte)uVar6 & 0xc) == 0xc) {
            if (in_stack_00000014 != 0) goto LAB_10019579;
            pDVar3 = local_58;
            pDVar5 = (DName *)getBasedType();
            piVar4 = (int *)DName::operator+(pDVar5,pDVar3);
            local_10 = *piVar4;
            local_c = piVar4[1];
          }
          if ((uVar6 & 2) != 0) {
            piVar4 = (int *)operator+((char *)local_58,(DName *)"volatile ");
            local_10 = *piVar4;
            local_c = piVar4[1];
          }
          if ((uVar6 & 1) != 0) {
            piVar4 = (int *)operator+((char *)local_58,(DName *)"const ");
            local_10 = *piVar4;
            local_c = piVar4[1];
          }
          if (in_stack_00000014 == 0) {
            if (*_param_2 == 0) {
              if (*(int *)param_4 != 0) {
LAB_10019732:
                pDVar3 = (DName *)operator+((char)local_58,(DName *)0x20);
                goto LAB_10019740;
              }
            }
            else {
              uVar6 = _param_2[1];
              if (((uVar6 & 0x100) == 0) && (*(int *)param_4 != 0)) {
                pDVar3 = local_58;
                cVar1 = (char)local_50;
                pDVar5 = (DName *)operator+((char)local_48,(DName *)0x20);
                pDVar5 = (DName *)DName::operator+(pDVar5,cVar1);
                pDVar3 = (DName *)DName::operator+(pDVar5,pDVar3);
LAB_10019740:
                DName::operator+=((DName *)&local_10,pDVar3);
              }
              else {
                if ((uVar6 & 0x800) == 0) goto LAB_10019732;
                local_10 = *_param_2;
                local_c = uVar6;
              }
            }
          }
          local_1c = local_c | 0x100;
          if (local_5 != '\0') {
            local_1c = local_c | 0x2100;
          }
          *(int *)param_1 = local_10;
          goto LAB_10019363;
        }
        if ((~(DAT_10023b60 >> 1) & 1) != 0) {
          pcVar2 = UScore(8);
          pDVar3 = (DName *)&local_18;
          if (local_18 != 0) {
            pcVar2 = local_30;
            cVar1 = (char)local_38;
            goto LAB_100193dc;
          }
LAB_10019476:
          DName::operator=(pDVar3,pcVar2);
        }
      }
      DAT_10023b50 = DAT_10023b50 + 1;
      if ((*DAT_10023b50 == '$') &&
         (getExtendedDataIndirectType((char *)&local_10,(bool *)&param_3,(int)&local_5),
         local_10 != 0)) goto LAB_100194c9;
      uVar6 = (int)*DAT_10023b50 - (((*DAT_10023b50 < 'A') - 1 & 0x2b) + 0x16);
    } while( true );
  }
  *(int *)param_1 = local_20;
  goto LAB_10019363;
LAB_100194c9:
  *(int *)param_1 = local_10;
  local_1c = local_c;
LAB_10019363:
  *(uint *)(param_1 + 4) = local_1c;
  return param_1;
}




/* Library Function - Single Match
    public: __thiscall UnDecorator::operator char *(void)
   
   Library: Visual Studio 2008 Release */

char * __thiscall UnDecorator::operator_char_(UnDecorator *this)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char local_1c [16];
  undefined4 *local_c;
  uint local_8;
  
  uVar1 = local_8 & 0xffff0000;
  puVar7 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  uVar3 = local_8 & 0xffff0000;
  local_8 = uVar1;
  if (DAT_10023b54 == (char *)0x0) goto LAB_1001985c;
  if (*DAT_10023b54 == '?') {
    if (DAT_10023b54[1] != '@') {
      if (DAT_10023b54[1] == '$') {
        puVar4 = (undefined4 *)getTemplateName(SUB41(local_1c,0));
        puVar7 = (undefined4 *)*puVar4;
        uVar3 = puVar4[1];
        if ((char)uVar3 != '\x02') goto LAB_1001985c;
        DAT_10023b50 = DAT_10023b54;
      }
      goto LAB_1001984d;
    }
    DAT_10023b50 = DAT_10023b50 + 2;
    getDecoratedName();
    puVar4 = (undefined4 *)operator+(local_1c,(DName *)&DAT_10020778);
  }
  else {
LAB_1001984d:
    puVar4 = (undefined4 *)getDecoratedName();
  }
  puVar7 = (undefined4 *)*puVar4;
  uVar3 = puVar4[1];
LAB_1001985c:
  if ((char)uVar3 == '\x03') {
    return (char *)0x0;
  }
  if (((char)uVar3 == '\x02') || (((DAT_10023b60 & 0x1000) == 0 && (*DAT_10023b50 != '\0')))) {
    DName::operator=((DName *)&local_c,DAT_10023b54);
    puVar7 = local_c;
    uVar3 = local_8;
  }
  local_8 = uVar3;
  local_c = puVar7;
  if (DAT_10023b58 == (char *)0x0) {
    iVar5 = 0;
    if (local_c != (undefined4 *)0x0) {
      iVar5 = (**(code **)*local_c)();
    }
    DAT_10023b5c = iVar5 + 1;
    DAT_10023b58 = (char *)(*DAT_10023b30)(iVar5 + 8U & 0xfffffff8);
    if (DAT_10023b58 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  DName::getString((DName *)&local_c,DAT_10023b58,DAT_10023b5c);
  pcVar6 = DAT_10023b58;
  pcVar8 = DAT_10023b58;
  while (cVar2 = *pcVar6, cVar2 != '\0') {
    if (cVar2 == ' ') {
      *pcVar8 = ' ';
      pcVar8 = pcVar8 + 1;
      do {
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 == ' ');
    }
    else {
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  *pcVar8 = '\0';
  return DAT_10023b58;
}




/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefType(class DName const &,class DName
   const &,char)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getPtrRefType(DName *param_1,DName *param_2,char param_3)

{
  char cVar1;
  undefined3 in_stack_0000000d;
  DName *in_stack_00000010;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = *DAT_10023b50;
  if (cVar1 == '\0') {
    DName::DName((DName *)&local_c,1);
    DName::operator+=((DName *)&local_c,(char)in_stack_00000010);
    if (*(int *)param_2 != 0) {
      DName::operator+=((DName *)&local_c,param_2);
    }
    if (*(int *)_param_3 != 0) {
      if (*(int *)param_2 != 0) {
        DName::operator+=((DName *)&local_c,' ');
      }
      DName::operator+=((DName *)&local_c,_param_3);
    }
    *(undefined4 *)param_1 = local_c;
    *(undefined4 *)(param_1 + 4) = local_8;
  }
  else if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    getDataIndirectType((DName *)&local_c,param_3,in_stack_00000010,(int)param_2);
    getPtrRefDataType(param_1,(int)&local_c);
  }
  else {
    DName::DName((DName *)&local_c,(char)in_stack_00000010);
    if ((*(int *)param_2 != 0) &&
       ((*(int *)_param_3 == 0 || ((*(uint *)(_param_3 + 4) & 0x100) == 0)))) {
      DName::operator+=((DName *)&local_c,param_2);
    }
    if (*(int *)_param_3 != 0) {
      DName::operator+=((DName *)&local_c,_param_3);
    }
    getFunctionIndirectType(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPointerType(class DName const &,class DName
   const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getPointerType(DName *param_1,DName *param_2)

{
  char in_stack_0000000c;
  
  getPtrRefType(param_1,param_2,in_stack_0000000c);
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPointerTypeArray(class DName const &,class
   DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getPointerTypeArray(DName *param_1,DName *param_2)

{
  char in_stack_0000000c;
  
  getPtrRefType(param_1,param_2,in_stack_0000000c);
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getReferenceType(class DName const &,class
   DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getReferenceType(DName *param_1,DName *param_2)

{
  char in_stack_0000000c;
  
  getPtrRefType(param_1,param_2,in_stack_0000000c);
  return param_1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___unDName
   
   Library: Visual Studio 2008 Release */

char * __cdecl
___unDName(char *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,ushort param_6)

{
  int iVar1;
  UnDecorator local_78 [88];
  char *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_100210a0;
  uStack_c = 0x10019a62;
  if ((param_4 != 0) && (iVar1 = __mtinitlocknum(5), iVar1 != 0)) {
    __lock(5);
    local_8 = (undefined *)0x0;
    DAT_10023b30 = param_4;
    _DAT_10023b34 = param_5;
    _DAT_10023b40 = 0;
    _DAT_10023b38 = 0;
    _DAT_10023b3c = 0;
    UnDecorator::UnDecorator
              (local_78,param_1,param_2,param_3,(_func_char_ptr_long *)0x0,(uint)param_6);
    local_20 = UnDecorator::operator_char_(local_78);
    Destructor(0x10023b30);
    local_8 = (undefined *)0xfffffffe;
    FUN_10019ae7();
    return local_20;
  }
  return (char *)0x0;
}




void FUN_10019ae7(void)

{
  FUN_100079a6(5);
  return;
}




/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getBasicDataType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getBasicDataType(DName *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  DName *pDVar4;
  uint uVar5;
  uint uVar6;
  int *in_stack_00000008;
  char *pcVar7;
  int local_28 [2];
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
  pbVar2 = DAT_10023b50;
  bVar1 = *DAT_10023b50;
  if (bVar1 == 0) {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  DAT_10023b50 = DAT_10023b50 + 1;
  local_10 = 0;
  uVar6 = (uint)bVar1;
  local_c = local_c & 0xffff0000;
  uVar5 = 0xffffffff;
  local_5 = 0;
  if (uVar6 < 0x4f) {
    if (uVar6 != 0x4e) {
      switch(uVar6) {
      case 0x43:
      case 0x44:
      case 0x45:
        pcVar7 = "char";
        break;
      case 0x46:
      case 0x47:
        pcVar7 = "short";
        break;
      case 0x48:
      case 0x49:
        pcVar7 = "int";
        break;
      case 0x4a:
      case 0x4b:
        pcVar7 = "long";
        break;
      default:
        goto switchD_10019be0_caseD_4c;
      case 0x4d:
        pcVar7 = "float";
      }
      goto LAB_10019dd8;
    }
LAB_10019dfe:
    DName::operator+=((DName *)&local_10,"double");
LAB_10019e0b:
    if (uVar5 != 0xffffffff) {
LAB_10019d60:
      local_18 = *in_stack_00000008;
      local_c = local_c & 0xffff0000;
      local_14 = in_stack_00000008[1];
      local_10 = 0;
      if (uVar5 != 0xfffffffe) {
        if (*in_stack_00000008 == 0) {
          if ((uVar5 & 1) == 0) {
            if ((uVar5 & 2) != 0) {
              DName::operator=((DName *)&local_10,"volatile");
            }
          }
          else {
            DName::operator=((DName *)&local_10,"const");
            if ((uVar5 & 2) != 0) {
              DName::operator+=((DName *)&local_10," volatile");
            }
          }
        }
        getPointerType(param_1,(DName *)&local_10);
        return param_1;
      }
      local_14 = local_14 | 0x800;
      getPtrRefType((DName *)&local_20,(DName *)&local_10,(char)&local_18);
      if ((local_1c & 0x800) == 0) {
        DName::operator+=((DName *)&local_20,"[]");
      }
      *(int *)param_1 = local_20;
      local_c = local_1c;
      goto LAB_10019eb3;
    }
  }
  else {
    if (uVar6 == 0x4f) {
      DName::operator=((DName *)&local_10,"long ");
      goto LAB_10019dfe;
    }
    if (0x4f < uVar6) {
      if (uVar6 < 0x54) {
        uVar5 = uVar6 & 3;
        goto LAB_10019e0b;
      }
      if (uVar6 == 0x58) {
        pcVar7 = "void";
        goto LAB_10019dd8;
      }
      if (uVar6 != 0x5f) goto switchD_10019be0_caseD_4c;
      local_5 = *DAT_10023b50;
      DAT_10023b50 = pbVar2 + 2;
      uVar5 = (uint)local_5;
      if (uVar5 < 0x4c) {
        if (uVar5 < 0x4a) {
          if (uVar5 < 0x46) {
            if (uVar5 < 0x44) {
              if (uVar5 != 0) {
                if (uVar5 == 0x24) {
                  getBasicDataType((DName *)&local_20);
                  operator+((char *)param_1,(DName *)"__w64 ");
                  return param_1;
                }
                goto LAB_10019dcc;
              }
              DAT_10023b50 = pbVar2 + 1;
              DName::operator=((DName *)&local_10,1);
              goto LAB_10019e14;
            }
            pcVar7 = "__int8";
          }
          else if (uVar5 < 0x46) {
LAB_10019dcc:
            pcVar7 = "UNKNOWN";
          }
          else if (uVar5 < 0x48) {
            pcVar7 = "__int16";
          }
          else {
            if (0x49 < uVar5) goto LAB_10019dcc;
            pcVar7 = "__int32";
          }
        }
        else {
          pcVar7 = "__int64";
        }
        goto LAB_10019dd8;
      }
      if (uVar5 < 0x4c) goto LAB_10019dcc;
      if (uVar5 < 0x4e) {
        pcVar7 = "__int128";
LAB_10019dd8:
        DName::operator=((DName *)&local_10,pcVar7);
        goto LAB_10019e14;
      }
      if (uVar5 == 0x4e) {
        pcVar7 = "bool";
        goto LAB_10019dd8;
      }
      if (uVar5 != 0x4f) {
        if (uVar5 != 0x57) {
          if (1 < uVar5 - 0x58) goto LAB_10019dcc;
          goto LAB_10019d29;
        }
        pcVar7 = "wchar_t";
        goto LAB_10019dd8;
      }
      uVar5 = 0xfffffffe;
      goto LAB_10019d60;
    }
switchD_10019be0_caseD_4c:
LAB_10019d29:
    DAT_10023b50 = DAT_10023b50 + -1;
    piVar3 = (int *)getECSUDataType();
    local_c = piVar3[1];
    local_10 = *piVar3;
    if (local_10 == 0) {
      *(undefined4 *)param_1 = 0;
      *(uint *)(param_1 + 4) = local_c;
      return param_1;
    }
  }
LAB_10019e14:
  if (uVar6 == 0x43) {
    pcVar7 = "signed ";
    piVar3 = &local_18;
LAB_10019e74:
    piVar3 = (int *)operator+((char *)piVar3,(DName *)pcVar7);
    local_10 = *piVar3;
    local_c = piVar3[1];
  }
  else {
    if ((((uVar6 == 0x45) || (uVar6 == 0x47)) || (uVar6 == 0x49)) || (uVar6 == 0x4b)) {
      pcVar7 = "unsigned ";
      piVar3 = &local_20;
      goto LAB_10019e74;
    }
    if ((uVar6 == 0x5f) &&
       (((local_5 == 0x45 || (local_5 == 0x47)) ||
        ((local_5 == 0x49 || ((local_5 == 0x4b || (local_5 == 0x4d)))))))) {
      pcVar7 = "unsigned ";
      piVar3 = local_28;
      goto LAB_10019e74;
    }
  }
  if (*in_stack_00000008 != 0) {
    pDVar4 = (DName *)operator+((char)local_28,(DName *)0x20);
    DName::operator+=((DName *)&local_10,pDVar4);
  }
  *(int *)param_1 = local_10;
LAB_10019eb3:
  *(uint *)(param_1 + 4) = local_c;
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPrimaryDataType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getPrimaryDataType(DName *param_1)

{
  char cVar1;
  char *pcVar2;
  int *in_stack_00000008;
  DName local_1c [8];
  int local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  cVar1 = *DAT_10023b50;
  local_8 = local_8 & 0xffff0000;
  local_c = 0;
  pcVar2 = DAT_10023b50;
  if (cVar1 != '\0') {
    if (cVar1 != '$') {
      if (cVar1 != 'A') {
        if (cVar1 != 'B') {
          getBasicDataType(param_1);
          return param_1;
        }
        DName::operator=((DName *)&local_c,"volatile");
        if (*in_stack_00000008 != 0) {
          DName::operator+=((DName *)&local_c,' ');
        }
      }
      local_14 = *in_stack_00000008;
      DAT_10023b50 = DAT_10023b50 + 1;
      local_10 = in_stack_00000008[1] | 0x100;
      getReferenceType(param_1,(DName *)&local_c);
      return param_1;
    }
    if (DAT_10023b50[1] == '$') {
      pcVar2 = DAT_10023b50 + 2;
      cVar1 = *pcVar2;
      if (cVar1 != '\0') {
        if (cVar1 == 'A') {
          DAT_10023b50 = DAT_10023b50 + 3;
          getFunctionIndirectType(param_1);
          return param_1;
        }
        if (cVar1 == 'B') {
          DAT_10023b50 = DAT_10023b50 + 3;
          getPtrRefDataType(param_1,(int)in_stack_00000008);
          return param_1;
        }
        if (cVar1 == 'C') {
          DAT_10023b50 = DAT_10023b50 + 3;
          local_c = 0;
          getDataIndirectType(local_1c,(char)in_stack_00000008,(DName *)0x0,(int)&local_c);
          getBasicDataType(param_1);
          return param_1;
        }
        goto LAB_10019fdf;
      }
    }
    else if (DAT_10023b50[1] != '\0') {
LAB_10019fdf:
      DAT_10023b50 = pcVar2;
      DName::DName(param_1,2);
      return param_1;
    }
  }
  DAT_10023b50 = pcVar2;
  operator+((DNameStatus)param_1,(DName *)0x1);
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataType(class DName *)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getDataType(DName *param_1)

{
  char cVar1;
  int *piVar2;
  DName *in_stack_00000008;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  DName::DName((DName *)&local_c,in_stack_00000008);
  cVar1 = *DAT_10023b50;
  if (cVar1 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x1);
  }
  else if (cVar1 == '?') {
    DAT_10023b50 = DAT_10023b50 + 1;
    local_10 = local_10 & 0xffff0000;
    local_14 = 0;
    piVar2 = (int *)getDataIndirectType(local_1c,(char)&local_c,(DName *)0x0,(int)&local_14);
    local_c = *piVar2;
    local_8 = piVar2[1];
    getPrimaryDataType(param_1);
  }
  else if (cVar1 == 'X') {
    DAT_10023b50 = DAT_10023b50 + 1;
    if (local_c == 0) {
      DName::DName(param_1,"void");
    }
    else {
      operator+((char *)param_1,(DName *)"void ");
    }
  }
  else {
    getPrimaryDataType(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExternalDataType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getExternalDataType(DName *param_1)

{
  undefined4 *this;
  DName *this_00;
  undefined4 *puVar1;
  DName *pDVar2;
  undefined1 local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  this = (undefined4 *)HeapManager::getMemory((HeapManager *)&DAT_10023b30,8,0);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    *this = 0;
    *(undefined1 *)(this + 1) = 0;
    this[1] = this[1] & 0xffff00ff;
  }
  getDataType(param_1);
  getDataIndirectType();
  pDVar2 = local_14;
  this_00 = (DName *)DName::operator+(local_c,(char)local_1c);
  puVar1 = (undefined4 *)DName::operator+(this_00,pDVar2);
  FUN_1001567a(this,puVar1);
  return param_1;
}




/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 2008 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined1 local_18 [8];
  byte local_10;
  undefined1 local_c [4];
  int local_8;
  
  iVar1 = __encoded_null();
  local_8 = 0;
  if (DAT_10023ba0 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar2 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar2 == (FARPROC)0x0) {
      return 0;
    }
    DAT_10023ba0 = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_10023ba4 = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_10023ba8 = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetUserObjectInformationA");
    DAT_10023bb0 = __encode_pointer((int)pFVar2);
    if (DAT_10023bb0 != 0) {
      pFVar2 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_10023bac = __encode_pointer((int)pFVar2);
    }
  }
  if ((DAT_10023bac != iVar1) && (DAT_10023bb0 != iVar1)) {
    pcVar3 = (code *)__decode_pointer(DAT_10023bac);
    pcVar4 = (code *)__decode_pointer(DAT_10023bb0);
    if (((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) &&
       (((iVar5 = (*pcVar3)(), iVar5 == 0 ||
         (iVar5 = (*pcVar4)(iVar5,1,local_18,0xc,local_c), iVar5 == 0)) || ((local_10 & 1) == 0))))
    {
      _UType = _UType | 0x200000;
      goto LAB_1001a2e9;
    }
  }
  if ((((DAT_10023ba4 != iVar1) &&
       (pcVar3 = (code *)__decode_pointer(DAT_10023ba4), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_10023ba8 != iVar1 &&
      (pcVar3 = (code *)__decode_pointer(DAT_10023ba8), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_1001a2e9:
  pcVar3 = (code *)__decode_pointer(DAT_10023ba0);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*pcVar3)(local_8,_LpText,_LpCaption,_UType);
  return iVar1;
}




/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2008 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar2 = DAT_100230f0;
      DAT_100230f0 = _Mode;
      return iVar2;
    }
    if (_Mode == 3) {
      return DAT_100230f0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}




void __cdecl FUN_1001a35b(undefined4 param_1)

{
  DAT_100230f4 = param_1;
  return;
}




/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2008 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_10024c0c)) {
    iVar3 = (param_1 & 0x1fU) * 0x40;
    if (*(int *)(iVar3 + (&DAT_10024c20)[param_1 >> 5]) == -1) {
      if (DAT_100230f4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1001a3cd;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_1001a3cd:
      *(intptr_t *)(iVar3 + (&DAT_10024c20)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 9;
  puVar2 = ___doserrno();
  *puVar2 = 0;
  return -1;
}




/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2008 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_10024c0c)) {
    iVar3 = (param_1 & 0x1fU) * 0x40;
    piVar1 = (int *)((&DAT_10024c20)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_100230f4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1001a453;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1001a453:
      *(undefined4 *)(iVar3 + (&DAT_10024c20)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 9;
  puVar2 = ___doserrno();
  *puVar2 = 0;
  return -1;
}




/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2008 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  intptr_t *piVar3;
  intptr_t iVar4;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    return -1;
  }
  if (((_FileHandle < 0) || (DAT_10024c0c <= (uint)_FileHandle)) ||
     (piVar3 = (intptr_t *)((_FileHandle & 0x1fU) * 0x40 + (&DAT_10024c20)[_FileHandle >> 5]),
     (*(byte *)(piVar3 + 1) & 1) == 0)) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar4 = -1;
  }
  else {
    iVar4 = *piVar3;
  }
  return iVar4;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___lock_fhandle
   
   Library: Visual Studio 2008 Release */

int __cdecl ___lock_fhandle(int _Filehandle)

{
  BOOL BVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = (_Filehandle & 0x1fU) * 0x40 + (&DAT_10024c20)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      BVar1 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(iVar2 + 0xc),4000);
      local_20 = (uint)(BVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_1001a585();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_10024c20)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  }
  return local_20;
}




void FUN_1001a585(void)

{
  FUN_100079a6(10);
  return;
}




/* Library Function - Single Match
    __unlock_fhandle
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10024c20)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  return;
}




/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2008 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  wint_t wVar1;
  BOOL BVar2;
  DWORD DVar3;
  UINT CodePage;
  wchar_t *lpWideCharStr;
  int cchWideChar;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  DWORD local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  if (DAT_10022f20 != 0) {
    if (DAT_10022fb4 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_10022fb4 == (HANDLE)0xffffffff) goto LAB_1001a911;
    BVar2 = WriteConsoleW(DAT_10022fb4,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_10022f20 = 1;
      goto LAB_1001a911;
    }
    if ((DAT_10022f20 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_1001a911;
    DAT_10022f20 = 0;
  }
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 5;
  lpMultiByteStr = local_10;
  cchWideChar = 1;
  lpWideCharStr = &_WCh;
  DVar3 = 0;
  CodePage = GetConsoleOutputCP();
  DVar3 = WideCharToMultiByte(CodePage,DVar3,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  if (DAT_10022fb4 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_10022fb4,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_1001a911:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}




/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  int *piVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
      if ((local_14.locinfo)->lc_category[0].wlocale != (wchar_t *)0x0) {
        iVar2 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_14);
        if (iVar2 == 0) {
          iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != (wchar_t *)0x0));
          if (iVar2 != 0) goto LAB_1001aa5e;
        }
        else {
          pwVar1 = (local_14.locinfo)->locale_name[3];
          if ((((1 < (int)pwVar1) && ((int)pwVar1 <= (int)_SrcSizeInBytes)) &&
              (iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,(int)pwVar1,
                                           _DstCh,(uint)(_DstCh != (wchar_t *)0x0)), iVar2 != 0)) ||
             (((local_14.locinfo)->locale_name[3] <= _SrcSizeInBytes && (_SrcCh[1] != '\0')))) {
            pwVar1 = (local_14.locinfo)->locale_name[3];
            if (local_8 == '\0') {
              return (int)pwVar1;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return (int)pwVar1;
          }
        }
        piVar3 = __errno();
        *piVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_1001aa5e:
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 1;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}




/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2008 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio 2008 Release */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}




/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2008 Release */

int __cdecl __flush(FILE *_File)

{
  int _FileHandle;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *_Buf;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _Buf = _File->_base;
    uVar3 = (int)_File->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(_File);
      uVar1 = __write(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}




/* Library Function - Single Match
    __fflush_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __fflush_nolock(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    iVar1 = __flush(_File);
    if (iVar1 == 0) {
      if ((_File->_flag & 0x4000U) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = __fileno(_File);
        iVar1 = __commit(iVar1);
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl flsall(int param_1)

{
  int *piVar1;
  void *_File;
  FILE *_File_00;
  int iVar2;
  int _Index;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (_Index = 0; _Index < DAT_10024be0; _Index = _Index + 1) {
    piVar1 = (int *)(DAT_10023bc8 + _Index * 4);
    if ((*piVar1 != 0) && (_File = (void *)*piVar1, (*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      _File_00 = *(FILE **)(DAT_10023bc8 + _Index * 4);
      if ((_File_00->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_nolock(_File_00);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((_File_00->_flag & 2U) != 0)) {
          iVar2 = __fflush_nolock(_File_00);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_1001ad5c();
    }
  }
  FUN_1001ad8b();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}




void FUN_1001ad5c(void)

{
  int unaff_ESI;
  
  __unlock_file2(unaff_ESI,*(void **)(DAT_10023bc8 + unaff_ESI * 4));
  return;
}




void FUN_1001ad8b(void)

{
  FUN_100079a6(1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  void *pvVar5;
  
  iVar3 = __fileno(_File);
  iVar3 = __isatty(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  ppuVar4 = FUN_1000fda1();
  if (_File == (FILE *)(ppuVar4 + 8)) {
    iVar3 = 0;
  }
  else {
    ppuVar4 = FUN_1000fda1();
    if (_File != (FILE *)(ppuVar4 + 0x10)) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_10023a40 = _DAT_10023a40 + 1;
  if ((_File->_flag & 0x10cU) != 0) {
    return 0;
  }
  piVar1 = &DAT_10023bb4 + iVar3;
  if (*piVar1 == 0) {
    pvVar5 = __malloc_crt(0x1000);
    *piVar1 = (int)pvVar5;
    if (pvVar5 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_1001ae82;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_1001ae82:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}




/* Library Function - Single Match
    __ftbuf
   
   Library: Visual Studio 2008 Release */

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  if ((_Flag != 0) && ((_File->_flag & 0x1000U) != 0)) {
    __flush(_File);
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _vprintf_helper
    _vwprintf_helper
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl
FID_conflict__vprintf_helper(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined4 uVar3;
  int _Flag;
  FILE *_File;
  
  ppuVar1 = FUN_1000fda1();
  _File = (FILE *)(ppuVar1 + 8);
  if (param_2 == 0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar3 = 0xffffffff;
  }
  else {
    __lock_file(_File);
    _Flag = __stbuf(_File);
    uVar3 = (*(code *)param_1)(_File,param_2,param_3,param_4);
    __ftbuf(_Flag,_File);
    FUN_1001af51();
  }
  return uVar3;
}




void FUN_1001af51(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    __vprintf_l
    __vprintf_p_l
    __vprintf_s_l
    __vwprintf_l
     6 names - too many to list
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___vwprintf_s_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(__output_l,(int)_Format,_Locale,_ArgList);
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p_l
    __vprintf_s_l
    __vwprintf_p_l
    __vwprintf_s_l
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___vwprintf_s_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(__output_s_l,(int)_Format,_Locale,_ArgList);
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p_l
    __vprintf_s_l
    __vwprintf_p_l
    __vwprintf_s_l
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___vwprintf_s_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(__output_p_l,(int)_Format,_Locale,_ArgList);
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p
    __vwprintf_p
    _vprintf
    _vprintf_s
     6 names - too many to list
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict__vprintf_s(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(__output_l,(int)_Format,0,_ArgList);
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p
    __vwprintf_p
    _vprintf
    _vprintf_s
     6 names - too many to list
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict__vprintf_s(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(__output_s_l,(int)_Format,0,_ArgList);
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p
    __vwprintf_p
    _vprintf
    _vprintf_s
     6 names - too many to list
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict__vprintf_s(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(__output_p_l,(int)_Format,0,_ArgList);
  return iVar1;
}




/* Library Function - Single Match
    __iswctype_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale)

{
  BOOL BVar1;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  WORD local_8 [2];
  
  if (_C == 0xffff) {
    local_8[0] = 0;
  }
  else if (_C < 0x100) {
    local_8[0] = *(ushort *)(PTR_DAT_100229f4 + (uint)_C * 2) & _Type;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
    BVar1 = ___crtGetStringTypeW(&local_18,1,(LPCWSTR)&_C,1,local_8);
    if (BVar1 == 0) {
      local_8[0] = 0;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return (uint)(local_8[0] & _Type);
}




/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  int iVar1;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  WORD local_8 [2];
  
  if (_C == 0xffff) {
    return 0;
  }
  if (_C < 0x100) {
    return (uint)(*(ushort *)(PTR_DAT_100229f4 + (uint)_C * 2) & _Type);
  }
  if (DAT_10023114 == 0) {
    ___crtGetStringTypeW((localeinfo_struct *)&PTR_DAT_10022660,1,(LPCWSTR)&_C,1,local_8);
  }
  iVar1 = __iswctype_l((wint_t)__C,(wctype_t)__Type,(_locale_t)0x0);
  return iVar1;
}




void __cdecl FUN_1001b104(wint_t param_1,wctype_t param_2)

{
  _iswctype(param_1,param_2);
  return;
}




/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2008 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  bVar8 = *param_2;
  local_8 = 0;
  ptVar5 = local_18.locinfo;
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if ((int)ptVar5->locale_name[3] < 2) {
      uVar4 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2) & 8;
    }
    else {
      uVar4 = __isctype_l((uint)bVar8,8,&local_18);
      ptVar5 = local_18.locinfo;
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_1001b1c8:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_1001b1c8;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char **)0x0) {
      *param_3 = param_2;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_1001b22e;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_1001b22e;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_1001b22e;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_1001b22e:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_1001b28b:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            pbVar9 = (byte *)param_2;
          }
          local_8 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          piVar3 = __errno();
          *piVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            local_8 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          local_8 = -local_8;
        }
        if (local_c == '\0') {
          return local_8;
        }
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        return local_8;
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_1001b28b;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_1001b28b;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}




/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2008 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10023114 == 0) {
    ppuVar2 = &PTR_DAT_10022660;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}




/* Library Function - Single Match
    __strtol_l
   
   Library: Visual Studio 2008 Release */

long __cdecl __strtol_l(char *_Str,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  ulong uVar1;
  
  uVar1 = strtoxl(_Locale,_Str,_EndPtr,_Radix,0);
  return uVar1;
}




/* Library Function - Single Match
    _strtoul
   
   Library: Visual Studio 2008 Release */

ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10023114 == 0) {
    ppuVar2 = &PTR_DAT_10022660;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}




/* Library Function - Single Match
    __strtoul_l
   
   Library: Visual Studio 2008 Release */

ulong __cdecl __strtoul_l(char *_Str,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  ulong uVar1;
  
  uVar1 = strtoxl(_Locale,_Str,_EndPtr,_Radix,1);
  return uVar1;
}




/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2008 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  _PHNDLR p_Var2;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_10022f30 & 1) != 0) {
    __NMSG_WRITE(10);
  }
  p_Var2 = ___get_sigabrt();
  if (p_Var2 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_10022f30 & 2) != 0) {
    local_2d4 = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void __cdecl FUN_1001b4e6(uint param_1,uint param_2)

{
  DAT_10022f30 = ~param_2 & DAT_10022f30 | param_1 & param_2;
  return;
}




/* Library Function - Single Match
    __isalpha_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isalpha_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x103;
  }
  else {
    uVar1 = __isctype_l(_C,0x103,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _isalpha
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isalpha(int _C)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return *(ushort *)(PTR_DAT_10022648 + _C * 2) & 0x103;
  }
  iVar1 = __isalpha_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __isupper_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isupper_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 1;
  }
  else {
    uVar1 = __isctype_l(_C,1,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _isupper
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isupper(int _C)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return *(ushort *)(PTR_DAT_10022648 + _C * 2) & 1;
  }
  iVar1 = __isupper_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __islower_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __islower_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 2;
  }
  else {
    uVar1 = __isctype_l(_C,2,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _islower
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _islower(int _C)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return *(ushort *)(PTR_DAT_10022648 + _C * 2) & 2;
  }
  iVar1 = __islower_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __isdigit_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 4;
  }
  else {
    uVar1 = __isctype_l(_C,4,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2008 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return *(ushort *)(PTR_DAT_10022648 + _C * 2) & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __isxdigit_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isxdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x80;
  }
  else {
    uVar1 = __isctype_l(_C,0x80,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _isxdigit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isxdigit(int _C)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return *(ushort *)(PTR_DAT_10022648 + _C * 2) & 0x80;
  }
  iVar1 = __isxdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __isspace_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isspace_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 8;
  }
  else {
    uVar1 = __isctype_l(_C,8,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _isspace
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isspace(int _C)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return *(ushort *)(PTR_DAT_10022648 + _C * 2) & 8;
  }
  iVar1 = __isspace_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __ispunct_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ispunct_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x10;
  }
  else {
    uVar1 = __isctype_l(_C,0x10,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _ispunct
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _ispunct(int _C)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return *(ushort *)(PTR_DAT_10022648 + _C * 2) & 0x10;
  }
  iVar1 = __ispunct_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __isalnum_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isalnum_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x107;
  }
  else {
    uVar1 = __isctype_l(_C,0x107,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _isalnum
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isalnum(int _C)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return *(ushort *)(PTR_DAT_10022648 + _C * 2) & 0x107;
  }
  iVar1 = __isalnum_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __isprint_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isprint_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x157;
  }
  else {
    uVar1 = __isctype_l(_C,0x157,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _isprint
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isprint(int _C)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return *(ushort *)(PTR_DAT_10022648 + _C * 2) & 0x157;
  }
  iVar1 = __isprint_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __isgraph_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isgraph_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x117;
  }
  else {
    uVar1 = __isctype_l(_C,0x117,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _isgraph
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isgraph(int _C)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return *(ushort *)(PTR_DAT_10022648 + _C * 2) & 0x117;
  }
  iVar1 = __isgraph_l(_C,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    __iscntrl_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __iscntrl_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x20;
  }
  else {
    uVar1 = __isctype_l(_C,0x20,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _iscntrl
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _iscntrl(int _C)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    return *(ushort *)(PTR_DAT_10022648 + _C * 2) & 0x20;
  }
  iVar1 = __iscntrl_l(_C,(_locale_t)0x0);
  return iVar1;
}




bool __cdecl FUN_1001ba9f(uint param_1)

{
  return param_1 < 0x80;
}




uint __cdecl FUN_1001bab1(uint param_1)

{
  return param_1 & 0x7f;
}




/* Library Function - Multiple Matches With Different Base Names
    __iscsym_l
    __iscsymf_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 FID_conflict___iscsym_l(int param_1,_locale_t param_2)

{
  int iVar1;
  
  iVar1 = __isalpha_l(param_1,param_2);
  if ((iVar1 == 0) && (param_1 != 0x5f)) {
    return 0;
  }
  return 1;
}




/* Library Function - Single Match
    ___iscsymf
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl ___iscsymf(int _C)

{
  int iVar1;
  
  iVar1 = _isalpha(_C);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}




/* Library Function - Multiple Matches With Different Base Names
    __iscsym_l
    __iscsymf_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 FID_conflict___iscsym_l(int param_1,_locale_t param_2)

{
  int iVar1;
  
  iVar1 = __isalnum_l(param_1,param_2);
  if ((iVar1 == 0) && (param_1 != 0x5f)) {
    return 0;
  }
  return 1;
}




/* Library Function - Single Match
    ___iscsym
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl ___iscsym(int _C)

{
  int iVar1;
  
  iVar1 = _isalnum(_C & 0xff);
  if ((iVar1 == 0) && ((char)_C != '_')) {
    return 0;
  }
  return 1;
}




void __cdecl FUN_1001bb44(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
  GetLocaleInfoW(param_1,param_2,param_3,param_4);
  return;
}




/* Library Function - Single Match
    ___crtGetLocaleInfoW
   
   Library: Visual Studio 2008 Release */

void __cdecl
___crtGetLocaleInfoW
          (localeinfo_struct *param_1,LCID param_2,LCTYPE param_3,LPWSTR param_4,int param_5)

{
  _LocaleUpdate local_14 [8];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,param_1);
  GetLocaleInfoW(param_2,param_3,param_4,param_5);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}




/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   *,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtGetLocaleInfoA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          int param_6)

{
  uint _Size;
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint cchData;
  LPWSTR lpLCData;
  
  uVar1 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  if (DAT_10023bbc == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_10023bbc = 2;
      }
      goto LAB_1001bbe5;
    }
    DAT_10023bbc = 1;
  }
  else {
LAB_1001bbe5:
    if ((DAT_10023bbc == 2) || (DAT_10023bbc == 0)) {
      GetLocaleInfoA(param_2,param_3,param_4,param_5);
      goto LAB_1001bcbe;
    }
    if (DAT_10023bbc != 1) goto LAB_1001bcbe;
  }
  if (param_6 == 0) {
    param_6 = param_1->locinfo->lc_codepage;
  }
  cchData = GetLocaleInfoW(param_2,param_3,(LPWSTR)0x0,0);
  if (cchData != 0) {
    if (((int)cchData < 1) || (0xffffffe0 / cchData < 2)) {
      lpLCData = (LPWSTR)0x0;
    }
    else {
      _Size = cchData * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_1001bcbe;
        lpLCData = (LPWSTR)&stack0xfffffff0;
      }
      else {
        lpLCData = (LPWSTR)_malloc(_Size);
        if (lpLCData != (LPWSTR)0x0) {
          lpLCData[0] = L'\xdddd';
          lpLCData[1] = L'\0';
          lpLCData = lpLCData + 4;
        }
      }
    }
    if (lpLCData != (LPWSTR)0x0) {
      iVar2 = GetLocaleInfoW(param_2,param_3,lpLCData,cchData);
      if (iVar2 != 0) {
        if (param_5 == 0) {
          param_5 = 0;
          param_4 = (LPSTR)0x0;
        }
        WideCharToMultiByte(param_6,0,lpLCData,-1,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      __freea(lpLCData);
    }
  }
LAB_1001bcbe:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}




/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 2008 Release */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  int in_stack_00000018;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Plocinfo);
  iVar1 = __crtGetLocaleInfoA_stat
                    (&local_14,(ulong)_LocaleName,_LCType,_LpLCData,_CchData,in_stack_00000018);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}




/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1001bd28,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}




/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_1001bd30;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_1001be44();
    }
  }
  ExceptionList = local_20;
  return;
}




/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10022f3c = param_1;
  DAT_10022f38 = in_EAX;
  DAT_10022f40 = unaff_EBP;
  return;
}




void FUN_1001be44(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}




/* Library Function - Single Match
    __getenv_helper_nolock
   
   Library: Visual Studio 2008 Release */

char * __cdecl __getenv_helper_nolock(char *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_10024d20 != 0) &&
      ((DAT_10023488 != (int *)0x0 ||
       (((DAT_10023490 != 0 && (iVar1 = ___wtomb_environ(), iVar1 == 0)) &&
        (DAT_10023488 != (int *)0x0)))))) && (piVar3 = DAT_10023488, param_1 != (char *)0x0)) {
    _MaxCount = _strlen(param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,(uchar *)param_1,_MaxCount), iVar1 == 0)) {
        return (char *)(*piVar3 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}




/* Library Function - Single Match
    __getenv_s_helper
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl __getenv_s_helper(char *param_1,uint param_2,char *param_3)

{
  uint *in_EAX;
  int *piVar1;
  char *_Str;
  size_t sVar2;
  errno_t eVar3;
  
  if (in_EAX != (uint *)0x0) {
    *in_EAX = 0;
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) goto LAB_1001bf0d;
    }
    else if (param_2 != 0) {
LAB_1001bf0d:
      if (param_1 != (char *)0x0) {
        *param_1 = '\0';
      }
      _Str = __getenv_helper_nolock(param_3);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        *in_EAX = sVar2 + 1;
        if (param_2 != 0) {
          if (param_2 < sVar2 + 1) {
            return 0x22;
          }
          eVar3 = _strcpy_s(param_1,param_2,_Str);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}




/* Library Function - Single Match
    __dupenv_s_helper
   
   Library: Visual Studio 2008 Release */

int __cdecl __dupenv_s_helper(size_t *param_1,char *param_2)

{
  int *piVar1;
  char *_Str;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  undefined4 *unaff_EBX;
  
  if (unaff_EBX != (undefined4 *)0x0) {
    *unaff_EBX = 0;
    if (param_1 != (size_t *)0x0) {
      *param_1 = 0;
    }
    if (param_2 != (char *)0x0) {
      _Str = __getenv_helper_nolock(param_2);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        sVar2 = sVar2 + 1;
        _Dst = (char *)_calloc(sVar2,1);
        *unaff_EBX = _Dst;
        if (_Dst == (char *)0x0) {
          piVar1 = __errno();
          *piVar1 = 0xc;
          piVar1 = __errno();
          return *piVar1;
        }
        eVar3 = _strcpy_s(_Dst,sVar2,_Str);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (param_1 != (size_t *)0x0) {
          *param_1 = sVar2;
        }
      }
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl strtoxq(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2008 Release */

__uint64 __cdecl
strtoxq(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint extraout_ECX;
  pthreadlocinfo ptVar6;
  byte *pbVar7;
  byte *pbVar8;
  localeinfo_struct local_3c;
  int local_34;
  char local_30;
  uint local_28;
  uint local_24;
  int local_20;
  undefined8 local_1c;
  undefined8 local_14;
  byte *local_c;
  byte local_5;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_3c,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_30 != '\0') {
      *(uint *)(local_34 + 0x70) = *(uint *)(local_34 + 0x70) & 0xfffffffd;
    }
    local_14._0_4_ = 0;
    local_14._4_4_ = 0;
    goto LAB_1001c4db;
  }
  local_14 = 0;
  ptVar6 = local_3c.locinfo;
  pbVar8 = (byte *)param_2;
  do {
    pbVar7 = pbVar8;
    local_5 = *pbVar7;
    pbVar8 = pbVar7 + 1;
    if ((int)ptVar6->locale_name[3] < 2) {
      uVar4 = *(ushort *)(ptVar6[1].lc_category[0].locale + (uint)local_5 * 2) & 8;
    }
    else {
      uVar4 = __isctype_l((uint)local_5,8,&local_3c);
      ptVar6 = local_3c.locinfo;
    }
  } while (uVar4 != 0);
  if (local_5 == 0x2d) {
    param_5 = param_5 | 2;
LAB_1001c308:
    local_5 = *pbVar8;
    pbVar8 = pbVar7 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_1001c308;
  local_c = pbVar8;
  if (param_4 == 0) {
    if (local_5 != 0x30) {
      param_4 = 10;
      goto LAB_1001c35d;
    }
    if ((*pbVar8 != 0x78) && (*pbVar8 != 0x58)) {
      param_4 = 8;
      goto LAB_1001c35d;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (local_5 == 0x30)) && ((*pbVar8 == 0x78 || (*pbVar8 == 0x58)))) {
    local_5 = pbVar8[1];
    local_c = pbVar8 + 2;
  }
LAB_1001c35d:
  local_28 = param_4 >> 0x1f;
  local_1c = __aulldvrm(0xffffffff,0xffffffff,param_4,local_28);
  local_20 = 0;
  pcVar2 = ptVar6[1].lc_category[0].locale;
  local_24 = extraout_ECX;
  do {
    uVar1 = *(ushort *)(pcVar2 + (uint)local_5 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) break;
      iVar5 = (int)(char)local_5;
      if ((byte)(local_5 + 0x9f) < 0x1a) {
        iVar5 = iVar5 + -0x20;
      }
      uVar4 = iVar5 - 0x37;
    }
    else {
      uVar4 = (int)(char)local_5 - 0x30;
    }
    if ((uint)param_4 <= uVar4) break;
    if (((local_14._4_4_ < local_1c._4_4_) ||
        ((local_14._4_4_ <= local_1c._4_4_ && ((uint)local_14 < (uint)local_1c)))) ||
       (((uint)local_14 == (uint)local_1c &&
        ((local_14._4_4_ == local_1c._4_4_ && ((local_20 != 0 || (uVar4 <= local_24)))))))) {
      local_14 = __allmul(param_4,local_28,(uint)local_14,local_14._4_4_);
      local_14 = local_14 + (ulonglong)uVar4;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) break;
    }
    local_5 = *local_c;
    local_c = local_c + 1;
  } while( true );
  local_c = local_c + -1;
  if ((param_5 & 8U) == 0) {
    if (param_3 != (char **)0x0) {
      local_c = (byte *)param_2;
    }
    local_14 = 0;
  }
  else if (((param_5 & 4U) != 0) ||
          (((param_5 & 1U) == 0 &&
           ((((param_5 & 2U) != 0 &&
             ((0x80000000 < local_14._4_4_ ||
              ((0x7fffffff < local_14._4_4_ && ((uint)local_14 != 0)))))) ||
            (((param_5 & 2U) == 0 &&
             ((0x7ffffffe < local_14._4_4_ && (0x7fffffff < local_14._4_4_)))))))))) {
    piVar3 = __errno();
    *piVar3 = 0x22;
    if ((param_5 & 1U) == 0) {
      if ((param_5 & 2U) == 0) {
        local_14 = 0x7fffffffffffffff;
      }
      else {
        local_14 = -0x8000000000000000;
      }
    }
    else {
      local_14 = -1;
    }
  }
  if (param_3 != (char **)0x0) {
    *param_3 = (char *)local_c;
  }
  if ((param_5 & 2U) != 0) {
    local_14 = CONCAT44(-(local_14._4_4_ + ((uint)local_14 != 0)),-(uint)local_14);
  }
  if (local_30 != '\0') {
    *(uint *)(local_34 + 0x70) = *(uint *)(local_34 + 0x70) & 0xfffffffd;
  }
LAB_1001c4db:
  return CONCAT44(local_14._4_4_,(uint)local_14);
}




/* Library Function - Single Match
    __strtoi64
   
   Library: Visual Studio 2008 Release */

longlong __cdecl __strtoi64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_10023114 == 0) {
    ppuVar2 = &PTR_DAT_10022660;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,0);
  return _Var1;
}




/* Library Function - Single Match
    __strtoi64_l
   
   Library: Visual Studio 2008 Release */

longlong __cdecl __strtoi64_l(char *_String,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  __uint64 _Var1;
  
  _Var1 = strtoxq(_Locale,_String,_EndPtr,_Radix,0);
  return _Var1;
}




/* Library Function - Single Match
    __strtoui64
   
   Library: Visual Studio 2008 Release */

ulonglong __cdecl __strtoui64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_10023114 == 0) {
    ppuVar2 = &PTR_DAT_10022660;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,1);
  return _Var1;
}




/* Library Function - Single Match
    __strtoui64_l
   
   Library: Visual Studio 2008 Release */

ulonglong __cdecl __strtoui64_l(char *_String,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  __uint64 _Var1;
  
  _Var1 = strtoxq(_Locale,_String,_EndPtr,_Radix,1);
  return _Var1;
}




/* Library Function - Multiple Matches With Different Base Names
    void (__cdecl*__cdecl __set_inconsistency(void (__cdecl*)(void)))(void)
    __set_invalid_parameter_handler
    __set_purecall_handler
   
   Library: Visual Studio 2008 Release */

_purecall_handler __cdecl FID_conflict___set_inconsistency(_purecall_handler _Handler)

{
  _purecall_handler p_Var1;
  
  p_Var1 = (_purecall_handler)__decode_pointer(DAT_10023a6c);
  DAT_10023a6c = __encode_pointer((int)_Handler);
  return p_Var1;
}




/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio 2008 Release */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}




/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2008 Release */

void __cdecl ___initconout(void)

{
  DAT_10022fb4 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}




int __cdecl FUN_1001c66f(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}




/* Library Function - Single Match
    __fclose_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __fclose_nolock(FILE *_File)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar3 = -1;
  }
  else {
    if ((_File->_flag & 0x83) != 0) {
      iVar3 = __flush(_File);
      __freebuf(_File);
      iVar2 = __fileno(_File);
      iVar2 = __close(iVar2);
      if (iVar2 < 0) {
        iVar3 = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        _free(_File->_tmpfname);
        _File->_tmpfname = (char *)0x0;
      }
    }
    _File->_flag = 0;
  }
  return iVar3;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2008 Release */

int __cdecl __commit(int _FileHandle)

{
  int *piVar1;
  HANDLE hFile;
  BOOL BVar2;
  ulong *puVar3;
  int iVar4;
  DWORD local_20;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10024c0c)) {
      iVar4 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)(iVar4 + 4 + (&DAT_10024c20)[_FileHandle >> 5]) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)(iVar4 + 4 + (&DAT_10024c20)[_FileHandle >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(_FileHandle);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_1001c83e;
          puVar3 = ___doserrno();
          *puVar3 = local_20;
        }
        piVar1 = __errno();
        *piVar1 = 9;
        local_20 = 0xffffffff;
LAB_1001c83e:
        FUN_1001c853();
        return local_20;
      }
    }
    piVar1 = __errno();
    *piVar1 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}




void FUN_1001c853(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}




/* Library Function - Single Match
    int __cdecl __crtGetStringTypeW_stat(struct localeinfo_struct *,unsigned long,wchar_t const
   *,int,unsigned short *,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtGetStringTypeW_stat
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  BOOL BVar1;
  
  if ((int)param_3 < -1) {
    return 0;
  }
  BVar1 = GetStringTypeW((DWORD)param_1,(LPCWSTR)param_2,(int)param_3,(LPWORD)param_4);
  return BVar1;
}




/* Library Function - Single Match
    ___crtGetStringTypeW
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl
___crtGetStringTypeW
          (localeinfo_struct *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWORD param_5)

{
  BOOL BVar1;
  _LocaleUpdate local_14 [8];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,param_1);
  if (param_4 < -1) {
    BVar1 = 0;
  }
  else {
    BVar1 = GetStringTypeW(param_2,param_3,param_4,param_5);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return BVar1;
}




/* Library Function - Single Match
    __mbsnbicoll_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if ((local_14.mbcinfo)->ismbcodepage == 0) {
      iVar2 = __strnicoll_l((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,*(LPCWSTR *)(local_14.mbcinfo)->mbulinfo,0x1001,(LPCSTR)_Str1,
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,(local_14.mbcinfo)->mbcodepage);
      if (iVar2 == 0) goto LAB_1001c989;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1001c989:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}




/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2008 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    ___wtomb_environ
   
   Library: Visual Studio 2008 Release */

int __cdecl ___wtomb_environ(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Count;
  int iVar1;
  undefined4 *puVar2;
  char *local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPCWSTR)*DAT_10023490;
  puVar2 = DAT_10023490;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Count = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Count == 0) || (local_8 = (char *)__calloc_crt(_Count,1), local_8 == (LPSTR)0x0)) break;
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*puVar2,-1,local_8,_Count,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      _free(local_8);
      return -1;
    }
    iVar1 = ___crtsetenv(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) {
      _free(local_8);
      local_8 = (LPSTR)0x0;
    }
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return -1;
}




/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int *piVar1;
  int *piVar2;
  int local_8;
  
  local_8 = 0;
  piVar1 = __calloc_impl(_Count,_Size,&local_8);
  if ((piVar1 == (int *)0x0) && (local_8 != 0)) {
    piVar2 = __errno();
    if (piVar2 != (int *)0x0) {
      piVar2 = __errno();
      *piVar2 = local_8;
    }
  }
  return piVar1;
}




/* Library Function - Single Match
    _strnlen
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

size_t __cdecl _strnlen(char *_Str,size_t _MaxCount)

{
  uint uVar1;
  
  uVar1 = 0;
  if (_MaxCount != 0) {
    do {
      if (*_Str == '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      _Str = _Str + 1;
    } while (uVar1 < _MaxCount);
  }
  return uVar1;
}




/* Library Function - Single Match
    __close_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __close_nolock(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_10024c20 + 0x84) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_10024c20 + 0x44) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_1001cb20;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1001cb22;
    }
  }
LAB_1001cb20:
  DVar4 = 0;
LAB_1001cb22:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_10024c20)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    __dosmaperr(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2008 Release */

int __cdecl __close(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10024c0c)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_10024c20)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_10024c20)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          local_20 = -1;
        }
        else {
          local_20 = __close_nolock(_FileHandle);
        }
        FUN_1001cc19();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}




void FUN_1001cc19(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}




/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2008 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    _free(_File->_base);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}




/* Library Function - Single Match
    int __cdecl strncnt(char const *,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl strncnt(char *param_1,int param_2)

{
  char *in_EAX;
  char *pcVar1;
  
  pcVar1 = param_1;
  for (; (pcVar1 != (char *)0x0 && (*in_EAX != '\0')); in_EAX = in_EAX + 1) {
    pcVar1 = pcVar1 + -1;
  }
  return (int)(param_1 + (-1 - (int)(pcVar1 + -1)));
}




/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint _Size;
  char *lpMultiByteStr;
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  PCNZWCH pWVar5;
  uint uVar6;
  LPWSTR lpWideCharStr;
  char *pcVar7;
  int *in_ECX;
  byte *in_EDX;
  byte *_Memory;
  int unaff_EDI;
  PCNZCH _Memory_00;
  byte *local_28;
  PCNZWCH local_24;
  char *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  lpMultiByteStr = param_4;
  local_8 = DAT_10022048 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  if (DAT_10023bc0 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_10023bc0 = 2;
      }
    }
    else {
      DAT_10023bc0 = 1;
    }
  }
  if ((int)param_3 < 1) {
    if ((int)param_3 < -1) goto LAB_1001cfd0;
  }
  else {
    param_3 = strncnt((char *)param_3,unaff_EDI);
  }
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_1001cfd0;
  }
  else {
    param_5 = strncnt((char *)param_5,unaff_EDI);
  }
  if ((DAT_10023bc0 == 2) || (DAT_10023bc0 == 0)) {
    _Memory_00 = (PCNZCH)0x0;
    _Memory = (byte *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_6 == (char *)0x0) {
      param_6 = *(char **)(*in_ECX + 4);
    }
    pcVar7 = (char *)___ansicp((LCID)param_1);
    if (pcVar7 == (char *)0xffffffff) goto LAB_1001cfd0;
    local_28 = in_EDX;
    if (pcVar7 != param_6) {
      _Memory = (byte *)___convertcp((UINT)param_6,(UINT)pcVar7,(char *)in_EDX,&param_3,(LPSTR)0x0,0
                                    );
      if (_Memory == (byte *)0x0) goto LAB_1001cfd0;
      _Memory_00 = (PCNZCH)___convertcp((UINT)param_6,(UINT)pcVar7,lpMultiByteStr,(uint *)&param_5,
                                        (LPSTR)0x0,0);
      local_28 = _Memory;
      local_20 = _Memory_00;
      if (_Memory_00 == (PCNZCH)0x0) {
        _free(_Memory);
        goto LAB_1001cfd0;
      }
    }
    CompareStringA((LCID)param_1,param_2,(PCNZCH)local_28,param_3,local_20,param_5);
    if (_Memory != (byte *)0x0) {
      _free(_Memory);
      _free(_Memory_00);
    }
    goto LAB_1001cfd0;
  }
  if (DAT_10023bc0 != 1) goto LAB_1001cfd0;
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_3 == 0) || (param_5 == 0)) {
    if ((param_3 == param_5) ||
       (((1 < param_5 || (1 < (int)param_3)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_1001cfd0;
    if (0 < (int)param_3) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_1001cfd0;
    }
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               (((byte)*lpMultiByteStr < *pBVar4 || (pBVar4[1] < (byte)*lpMultiByteStr))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_1001cfd0;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1001cfd0;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      pWVar5 = (PCNZWCH)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_1001ce49:
        local_24 = pWVar5 + 4;
      }
    }
    else {
      pWVar5 = (PCNZWCH)_malloc(uVar6);
      local_24 = pWVar5;
      if (pWVar5 != (PCNZWCH)0x0) {
        pWVar5[0] = L'\xdddd';
        pWVar5[1] = L'\0';
        goto LAB_1001ce49;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) goto LAB_1001cfd0;
  iVar1 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_3,local_24,cchWideChar);
  if ((iVar1 != 0) &&
     (uVar6 = MultiByteToWideChar((UINT)param_6,9,lpMultiByteStr,param_5,(LPWSTR)0x0,0), uVar6 != 0)
     ) {
    if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar6 * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x3c) goto LAB_1001cf0a;
        lpWideCharStr = (LPWSTR)&stack0xffffffcc;
      }
      else {
        lpWideCharStr = (LPWSTR)_malloc(_Size);
        if (lpWideCharStr != (LPWSTR)0x0) {
          lpWideCharStr[0] = L'\xdddd';
          lpWideCharStr[1] = L'\0';
          lpWideCharStr = lpWideCharStr + 4;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar1 = MultiByteToWideChar((UINT)param_6,1,lpMultiByteStr,param_5,lpWideCharStr,uVar6);
      if (iVar1 != 0) {
        CompareStringW((LCID)param_1,param_2,local_24,cchWideChar,lpWideCharStr,uVar6);
      }
      __freea(lpWideCharStr);
    }
  }
LAB_1001cf0a:
  __freea(local_24);
LAB_1001cfd0:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}




/* Library Function - Single Match
    ___crtCompareStringA
   
   Library: Visual Studio 2008 Release */

int __cdecl
___crtCompareStringA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
          int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  int iVar1;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtCompareStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwCmpFlags,_CchCount1,_LpString2,_CchCount2,
                     (char *)_Code_page,in_stack_ffffffec,in_stack_fffffff0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}




/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  LPCWSTR _LocaleName;
  int *piVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    _LocaleName = (LPCWSTR)(local_14.locinfo)->lc_category[0].locale;
    if (_LocaleName == (LPCWSTR)0x0) {
      iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,&local_14);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,_LocaleName,0x1001,_Str1,_MaxCount,_Str2,_MaxCount,
                         (local_14.locinfo)->lc_collate_cp);
      if (iVar2 == 0) {
        piVar1 = __errno();
        *piVar1 = 0x16;
        goto LAB_1001d0fb;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1001d0fb:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}




/* Library Function - Single Match
    __strnicoll
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_10023114 == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}




/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2008 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_10023488;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_10023488 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_10023488 >> 2;
}




/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2008 Release */

undefined4 * __cdecl copy_environ(void)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)0x0;
  if (in_EAX != (int *)0x0) {
    iVar1 = *in_EAX;
    piVar4 = in_EAX;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      iVar1 = *piVar4;
    }
    puVar2 = (undefined4 *)__calloc_crt((int)puVar2 + 1,4);
    puVar5 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    for (; (char *)*in_EAX != (char *)0x0; in_EAX = in_EAX + 1) {
      pcVar3 = __strdup((char *)*in_EAX);
      *puVar5 = pcVar3;
      puVar5 = puVar5 + 1;
    }
    *puVar5 = 0;
  }
  return puVar2;
}




/* Library Function - Single Match
    ___crtsetenv
   
   Library: Visual Studio 2008 Release */

int __cdecl ___crtsetenv(char **_POption,int _Primary)

{
  uint _Size;
  uchar *_Str;
  int *piVar1;
  uchar *puVar2;
  int iVar3;
  uint _Count;
  size_t sVar4;
  char *_Dst;
  errno_t eVar5;
  BOOL BVar6;
  int *piVar7;
  bool bVar8;
  size_t _Size_00;
  uchar *_Src;
  int local_10;
  
  local_10 = 0;
  if (_POption == (char **)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  _Str = (uchar *)*_POption;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_1001d283:
    piVar1 = __errno();
    *piVar1 = 0x16;
    return -1;
  }
  bVar8 = puVar2[1] == '\0';
  if (DAT_10023488 == DAT_1002348c) {
    DAT_10023488 = copy_environ();
  }
  if (DAT_10023488 == (int *)0x0) {
    if ((_Primary == 0) || (DAT_10023490 == (undefined4 *)0x0)) {
      if (bVar8) {
        return 0;
      }
      DAT_10023488 = (int *)__malloc_crt(4);
      if (DAT_10023488 == (int *)0x0) {
        return -1;
      }
      *DAT_10023488 = 0;
      if (DAT_10023490 == (undefined4 *)0x0) {
        DAT_10023490 = (undefined4 *)__malloc_crt(4);
        if (DAT_10023490 == (undefined4 *)0x0) {
          return -1;
        }
        *DAT_10023490 = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_1001d283;
    }
  }
  piVar1 = DAT_10023488;
  if (DAT_10023488 == (int *)0x0) {
    return -1;
  }
  _Count = findenv(_Str);
  if (((int)_Count < 0) || (*piVar1 == 0)) {
    if (bVar8) {
      _free(_Str);
      *_POption = (char *)0x0;
      return 0;
    }
    if ((int)_Count < 0) {
      _Count = -_Count;
    }
    _Size = _Count + 2;
    if ((int)_Size < (int)_Count) {
      return -1;
    }
    if (0x3ffffffe < _Size) {
      return -1;
    }
    piVar1 = (int *)__recalloc_crt(DAT_10023488,4,_Size);
    if (piVar1 == (int *)0x0) {
      return -1;
    }
    piVar1[_Count] = (int)_Str;
    (piVar1 + _Count)[1] = 0;
    *_POption = (char *)0x0;
  }
  else {
    piVar7 = piVar1 + _Count;
    _free((void *)*piVar7);
    if (!bVar8) {
      *piVar7 = (int)_Str;
      *_POption = (char *)0x0;
      goto LAB_1001d391;
    }
    while (*piVar7 != 0) {
      *piVar7 = piVar7[1];
      _Count = _Count + 1;
      piVar7 = piVar1 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar1 = (int *)__recalloc_crt(DAT_10023488,_Count,4), piVar1 == (int *)0x0))
    goto LAB_1001d391;
  }
  DAT_10023488 = piVar1;
LAB_1001d391:
  if (_Primary != 0) {
    _Size_00 = 1;
    sVar4 = _strlen((char *)_Str);
    _Dst = (char *)__calloc_crt(sVar4 + 2,_Size_00);
    if (_Dst != (char *)0x0) {
      _Src = _Str;
      sVar4 = _strlen((char *)_Str);
      eVar5 = _strcpy_s(_Dst,sVar4 + 2,(char *)_Src);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar2[(int)_Dst - (int)_Str] = '\0';
      BVar6 = SetEnvironmentVariableA
                        (_Dst,(LPCSTR)(~-(uint)bVar8 & (uint)(puVar2 + ((int)_Dst - (int)_Str) + 1))
                        );
      if (BVar6 == 0) {
        local_10 = -1;
        piVar1 = __errno();
        *piVar1 = 0x2a;
      }
      _free(_Dst);
    }
  }
  if (bVar8) {
    _free(_Str);
    *_POption = (char *)0x0;
    return local_10;
  }
  return local_10;
}




/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2008 Release */

char * __cdecl __strdup(char *_Src)

{
  char *_Dst;
  size_t sVar1;
  errno_t eVar2;
  
  if (_Src == (char *)0x0) {
    _Dst = (char *)0x0;
  }
  else {
    sVar1 = _strlen(_Src);
    _Dst = (char *)_malloc(sVar1 + 1);
    if (_Dst == (char *)0x0) {
      _Dst = (char *)0x0;
    }
    else {
      eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Src);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  return _Dst;
}




/* Library Function - Single Match
    __mbschr_l
   
   Library: Visual Studio 2008 Release */

uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint *puVar4;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (_Str == (uchar *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    _Str = (uchar *)0x0;
  }
  else {
    if (*(int *)(local_10 + 8) == 0) {
      _Str = (uchar *)FUN_1000d6f0((uint *)_Str,(char)_Ch);
    }
    else {
      while( true ) {
        bVar2 = (byte)*(uint *)_Str;
        if (bVar2 == 0) break;
        if ((*(byte *)(bVar2 + 0x1d + local_10) & 4) == 0) {
          puVar4 = (uint *)_Str;
          if (_Ch == bVar2) break;
        }
        else {
          bVar1 = *(byte *)((int)_Str + 1);
          if (bVar1 == 0) goto LAB_1001d53d;
          puVar4 = (uint *)((int)_Str + 1);
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_1001d52f;
        }
        _Str = (uchar *)((int)puVar4 + 1);
      }
      if (_Ch != (ushort)bVar2) {
LAB_1001d53d:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_1001d52f:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}




/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2008 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbschr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}



