
/* Library Function - Single Match
    public: bool __cdecl ATL::CFileTimeSpan::operator==(class ATL::CFileTimeSpan)const __ptr64
   
   Library: Visual Studio 2008 Debug */

bool __thiscall ATL::CFileTimeSpan::operator==(CFileTimeSpan *this,longlong *param_2)

{
  return *(longlong *)this == *param_2;
}




/* Library Function - Single Match
    public: bool __cdecl std::_Iterator_base::_Has_container(void)const __ptr64
   
   Library: Visual Studio 2008 Debug */

bool __thiscall std::_Iterator_base::_Has_container(_Iterator_base *this)

{
  return *(longlong *)this != 0;
}




exception *
FUN_140001070(exception *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::runtime_error::vftable;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1400010d0(exception *param_1)

{
  *(undefined ***)param_1 = std::runtime_error::vftable;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x18));
  std::exception::~exception(param_1);
  return;
}




void FUN_140001110(longlong param_1)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x18));
  return;
}




exception * FUN_140001130(exception *param_1,uint param_2)

{
  FUN_1400010d0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




exception * FUN_140001170(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::runtime_error::vftable;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x18));
  return param_1;
}




int FUN_1400011d0(byte param_1)

{
  int iVar1;
  exception local_78 [64];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [40];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if ((param_1 < 0x41) || (0x5a < param_1)) {
    if ((param_1 < 0x61) || (0x7a < param_1)) {
      if ((param_1 < 0x30) || (0x39 < param_1)) {
        if ((param_1 == 0x2b) || (param_1 == 0x2d)) {
          iVar1 = 0x3e;
        }
        else {
          if ((param_1 != 0x2f) && (param_1 != 0x5f)) {
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (local_38,"Input is not valid base64-encoded data.");
            FUN_140001070(local_78,local_38);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_78,(ThrowInfo *)&DAT_140015438);
          }
          iVar1 = 0x3f;
        }
      }
      else {
        iVar1 = param_1 + 4;
      }
    }
    else {
      iVar1 = param_1 - 0x47;
    }
  }
  else {
    iVar1 = param_1 - 0x41;
  }
  return iVar1;
}




void FUN_140001310(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,longlong param_2,ulonglong param_3,byte param_4)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  char local_70;
  __uint64 local_68;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [40];
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  char local_20;
  ulonglong local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_18 = DAT_140018038 ^ (ulonglong)auStack_98;
  local_2c = 0;
  local_68 = (param_3 + 2) / 3 << 2;
  if (param_4 == 0) {
    local_20 = '=';
  }
  else {
    local_20 = '.';
  }
  local_70 = local_20;
  local_78 = (&PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_140018078)[param_4];
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::reserve
            (local_58,local_68);
  for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 3) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
              (local_58,local_78[(int)(*(byte *)(param_2 + (ulonglong)local_30) & 0xfc) >> 2]);
    if (local_30 + 1 < param_3) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
                (local_58,local_78[(int)((*(byte *)(param_2 + (ulonglong)local_30) & 3) * 0x10 +
                                        ((int)(*(byte *)(param_2 + (ulonglong)(local_30 + 1)) & 0xf0
                                              ) >> 4))]);
      if (local_30 + 2 < param_3) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
                  (local_58,local_78[(int)(((int)(*(byte *)(param_2 + (ulonglong)(local_30 + 2)) &
                                                 0xc0) >> 6) +
                                          (*(byte *)(param_2 + (ulonglong)(local_30 + 1)) & 0xf) * 4
                                          )]);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
                  (local_58,local_78[(int)(*(byte *)(param_2 + (ulonglong)(local_30 + 2)) & 0x3f)]);
      }
      else {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
                  (local_58,local_78[(int)((*(byte *)(param_2 + (ulonglong)(local_30 + 1)) & 0xf) <<
                                          2)]);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
                  (local_58,local_70);
      }
    }
    else {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
                (local_58,local_78[(int)((*(byte *)(param_2 + (ulonglong)local_30) & 3) << 4)]);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
                (local_58,local_70);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
                (local_58,local_70);
    }
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_58);
  local_2c = local_2c | 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_98);
  return;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_140001600(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
             char param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_20;
  undefined4 local_18;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_10;
  
  local_18 = 0;
  local_20 = local_48;
  local_10 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_20,param_2);
  FUN_140001670(param_1,local_10,param_3);
  return param_1;
}




void FUN_140001670(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,
                  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_2,char param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  _Iterator_base *p_Var5;
  byte *pbVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 *puVar9;
  _Iterator_base *p_Var10;
  undefined1 auStack_1b8 [40];
  __uint64 local_190;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_188 [40];
  __uint64 local_160;
  ulonglong local_158;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_150 [40];
  ulonglong local_128;
  uint local_120;
  undefined1 local_118 [32];
  _Iterator_base local_f8 [16];
  char local_e8 [40];
  _Iterator_base local_c0 [16];
  undefined1 local_b0 [24];
  _Iterator_base local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  uint local_58;
  _Iterator_base local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  ulonglong local_28;
  
  local_30 = 0xfffffffffffffffe;
  local_28 = DAT_140018038 ^ (ulonglong)auStack_1b8;
  local_58 = 0;
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    (param_2);
  if (bVar1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
    local_58 = local_58 | 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_2);
  }
  else if (param_3 == '\0') {
    local_160 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                length(param_2);
    local_158 = 0;
    local_190 = (local_160 / 4) * 3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_188);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::reserve
              (local_188,local_190);
    for (; local_158 < local_160; local_158 = local_158 + 4) {
      pbVar6 = (byte *)std::
                       basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       ::operator[](param_2,local_158 + 1);
      uVar2 = FUN_1400011d0(*pbVar6);
      local_128 = (ulonglong)uVar2;
      pbVar6 = (byte *)std::
                       basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       ::operator[](param_2,local_158);
      iVar3 = FUN_1400011d0(*pbVar6);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
                (local_188,(char)(iVar3 << 2) + (char)((local_128 & 0x30) >> 4));
      if (local_158 + 2 < local_160) {
        pcVar7 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 operator[](param_2,local_158 + 2);
        if (*pcVar7 != '=') {
          pcVar7 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   ::operator[](param_2,local_158 + 2);
          if (*pcVar7 != '.') {
            pbVar6 = (byte *)std::
                             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             ::operator[](param_2,local_158 + 2);
            local_120 = FUN_1400011d0(*pbVar6);
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            push_back(local_188,(char)((local_128 & 0xf) << 4) + (char)((local_120 & 0x3c) >> 2));
            if (local_158 + 3 < local_160) {
              pcVar7 = std::
                       basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       ::operator[](param_2,local_158 + 3);
              if (*pcVar7 != '=') {
                pcVar7 = std::
                         basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         ::operator[](param_2,local_158 + 3);
                if (*pcVar7 != '.') {
                  uVar2 = local_120 & 3;
                  pbVar6 = (byte *)std::
                                   basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   ::operator[](param_2,local_158 + 3);
                  iVar3 = FUN_1400011d0(*pbVar6);
                  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ::push_back(local_188,(char)(uVar2 << 6) + (char)iVar3);
                }
              }
            }
          }
        }
      }
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_188);
    local_58 = local_58 | 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_188);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_2);
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_150,param_2);
    local_e8[0] = '\n';
    puVar4 = (undefined1 *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::end
                       (local_150);
    puVar9 = local_40;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar4 = local_40;
    puVar9 = local_118;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar4 = (undefined1 *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::end
                       (local_150);
    puVar9 = local_88;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    p_Var5 = (_Iterator_base *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             begin(local_150);
    p_Var10 = local_98;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *p_Var10 = *p_Var5;
      p_Var5 = p_Var5 + 1;
      p_Var10 = p_Var10 + 1;
    }
    p_Var5 = FUN_140001b20(local_c0,local_98,local_88,local_e8);
    p_Var10 = local_50;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *p_Var10 = *p_Var5;
      p_Var5 = p_Var5 + 1;
      p_Var10 = p_Var10 + 1;
    }
    p_Var5 = local_50;
    p_Var10 = local_f8;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *p_Var10 = *p_Var5;
      p_Var5 = p_Var5 + 1;
      p_Var10 = p_Var10 + 1;
    }
    puVar4 = local_118;
    puVar9 = local_68;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    p_Var5 = local_f8;
    p_Var10 = (_Iterator_base *)local_78;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *p_Var10 = *p_Var5;
      p_Var5 = p_Var5 + 1;
      p_Var10 = p_Var10 + 1;
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
              (local_150,local_b0,local_78,local_68);
    FUN_140001600(param_1,local_150,'\0');
    local_58 = local_58 | 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_150);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_2);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_1b8);
  return;
}




_Iterator_base *
FUN_140001b20(_Iterator_base *param_1,_Iterator_base *param_2,undefined1 *param_3,char *param_4)

{
  _Iterator_base *p_Var1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  _Iterator_base *p_Var6;
  _Iterator_base local_b8 [16];
  undefined1 local_a8 [16];
  _Iterator_base local_98 [16];
  undefined1 local_88 [16];
  _Iterator_base local_78 [16];
  undefined1 local_68 [16];
  _Iterator_base local_58 [16];
  _Iterator_base local_48 [16];
  _Iterator_base local_38 [16];
  _Iterator_base local_28 [24];
  
  puVar4 = param_3;
  puVar5 = local_88;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  p_Var1 = param_2;
  p_Var6 = local_98;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *p_Var6 = *p_Var1;
    p_Var1 = p_Var1 + 1;
    p_Var6 = p_Var6 + 1;
  }
  p_Var1 = (_Iterator_base *)FUN_140001de0(local_a8,local_98,(longlong)local_88,param_4);
  p_Var6 = local_28;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *p_Var6 = *p_Var1;
    p_Var1 = p_Var1 + 1;
    p_Var6 = p_Var6 + 1;
  }
  p_Var1 = local_28;
  p_Var6 = param_2;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *p_Var6 = *p_Var1;
    p_Var1 = p_Var1 + 1;
    p_Var6 = p_Var6 + 1;
  }
  uVar2 = FUN_140001cc0(param_2,(longlong)param_3);
  if ((uVar2 & 0xff) == 0) {
    p_Var1 = param_2;
    p_Var6 = local_48;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *p_Var6 = *p_Var1;
      p_Var1 = p_Var1 + 1;
      p_Var6 = p_Var6 + 1;
    }
    p_Var1 = local_48;
    p_Var6 = local_b8;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *p_Var6 = *p_Var1;
      p_Var1 = p_Var1 + 1;
      p_Var6 = p_Var6 + 1;
    }
    p_Var1 = local_58;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *p_Var1 = *param_2;
      param_2 = param_2 + 1;
      p_Var1 = p_Var1 + 1;
    }
    puVar4 = local_68;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *param_3;
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
    }
    p_Var1 = FUN_140001d40(local_b8);
    p_Var6 = local_78;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *p_Var6 = *p_Var1;
      p_Var1 = p_Var1 + 1;
      p_Var6 = p_Var6 + 1;
    }
    FUN_140001e70(param_1,(longlong)local_78,(longlong)local_68,local_58,param_4);
  }
  else {
    p_Var1 = local_38;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *p_Var1 = *param_2;
      param_2 = param_2 + 1;
      p_Var1 = p_Var1 + 1;
    }
    p_Var1 = local_38;
    p_Var6 = param_1;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *p_Var6 = *p_Var1;
      p_Var1 = p_Var1 + 1;
      p_Var6 = p_Var6 + 1;
    }
  }
  return param_1;
}




undefined8 FUN_140001cc0(_Iterator_base *param_1,longlong param_2)

{
  bool bVar1;
  
  if ((*(longlong *)param_1 != -4) &&
     ((bVar1 = std::_Iterator_base::_Has_container(param_1), !bVar1 ||
      (bVar1 = ATL::CFileTimeSpan::operator==((CFileTimeSpan *)param_1,param_2), !bVar1)))) {
    _invalid_parameter_noinfo();
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 8) >> 8),
                  *(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8));
}




_Iterator_base * FUN_140001d40(_Iterator_base *param_1)

{
  FUN_140001d60(param_1);
  return param_1;
}




_Iterator_base * FUN_140001d60(_Iterator_base *param_1)

{
  bool bVar1;
  char *pcVar2;
  
  if (*(longlong *)param_1 != -4) {
    bVar1 = std::_Iterator_base::_Has_container(param_1);
    if (!bVar1) {
      _invalid_parameter_noinfo();
    }
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             _Myptr(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)param_1);
    if (pcVar2 + *(longlong *)(*(longlong *)param_1 + 0x18) <= *(char **)(param_1 + 8)) {
      _invalid_parameter_noinfo();
    }
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  return param_1;
}




undefined1 * FUN_140001de0(undefined1 *param_1,undefined1 *param_2,longlong param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *local_38;
  undefined1 local_30 [32];
  
  pcVar1 = (char *)FUN_140001f00(param_3);
  pcVar2 = (char *)FUN_140001f00((longlong)param_2);
  local_38 = FUN_140001f20(pcVar2,pcVar1,param_4);
  FUN_140001f70((longlong)param_2,&local_38);
  puVar4 = local_30;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_30;
  puVar5 = param_1;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_1;
}




_Iterator_base *
FUN_140001e70(_Iterator_base *param_1,longlong param_2,longlong param_3,_Iterator_base *param_4,
             char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  _Iterator_base *p_Var5;
  undefined1 local_38 [16];
  _Iterator_base local_28 [24];
  
  puVar4 = local_38;
  for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  p_Var5 = local_28;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *p_Var5 = *param_4;
    param_4 = param_4 + 1;
    p_Var5 = p_Var5 + 1;
  }
  pcVar1 = (char *)FUN_140001f00(param_3);
  pcVar2 = (char *)FUN_140001f00(param_2);
  FUN_140001fa0(param_1,pcVar2,pcVar1,local_28,param_5);
  return param_1;
}




void FUN_140001f00(longlong param_1)

{
  FUN_140002160(param_1);
  return;
}




char * FUN_140001f20(char *param_1,char *param_2,char *param_3)

{
  char *local_res8;
  
  for (local_res8 = param_1; (local_res8 != param_2 && (*local_res8 != *param_3));
      local_res8 = local_res8 + 1) {
  }
  return local_res8;
}




void FUN_140001f70(longlong param_1,undefined8 *param_2)

{
  FUN_140002050(param_1,*param_2);
  return;
}




_Iterator_base *
FUN_140001fa0(_Iterator_base *param_1,char *param_2,char *param_3,_Iterator_base *param_4,
             char *param_5)

{
  _Iterator_base *p_Var1;
  char *pcVar2;
  longlong lVar3;
  _Iterator_base *p_Var4;
  char *local_res10;
  _Iterator_base local_38 [16];
  _Iterator_base local_28 [24];
  
  for (local_res10 = param_2; local_res10 != param_3; local_res10 = local_res10 + 1) {
    if (*local_res10 != *param_5) {
      p_Var1 = FUN_140002090(param_4,local_38);
      pcVar2 = (char *)FUN_140002070(p_Var1);
      *pcVar2 = *local_res10;
    }
  }
  p_Var1 = local_28;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *p_Var1 = *param_4;
    param_4 = param_4 + 1;
    p_Var1 = p_Var1 + 1;
  }
  p_Var1 = local_28;
  p_Var4 = param_1;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *p_Var4 = *p_Var1;
    p_Var1 = p_Var1 + 1;
    p_Var4 = p_Var4 + 1;
  }
  return param_1;
}




void FUN_140002050(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_140002070(_Iterator_base *param_1)

{
  FUN_1400020f0(param_1);
  return;
}




_Iterator_base * FUN_140002090(_Iterator_base *param_1,_Iterator_base *param_2)

{
  longlong lVar1;
  _Iterator_base *p_Var2;
  _Iterator_base *p_Var3;
  _Iterator_base local_38 [16];
  _Iterator_base local_28 [24];
  
  p_Var2 = param_1;
  p_Var3 = local_28;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *p_Var3 = *p_Var2;
    p_Var2 = p_Var2 + 1;
    p_Var3 = p_Var3 + 1;
  }
  p_Var2 = local_28;
  p_Var3 = local_38;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *p_Var3 = *p_Var2;
    p_Var2 = p_Var2 + 1;
    p_Var3 = p_Var3 + 1;
  }
  FUN_140001d40(param_1);
  p_Var2 = local_38;
  p_Var3 = param_2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *p_Var3 = *p_Var2;
    p_Var2 = p_Var2 + 1;
    p_Var3 = p_Var3 + 1;
  }
  return param_2;
}




undefined8 FUN_1400020f0(_Iterator_base *param_1)

{
  bool bVar1;
  char *pcVar2;
  
  if (*(longlong *)param_1 != -4) {
    bVar1 = std::_Iterator_base::_Has_container(param_1);
    if (!bVar1) {
      _invalid_parameter_noinfo();
    }
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             _Myptr(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)param_1);
    if (pcVar2 + *(longlong *)(*(longlong *)param_1 + 0x18) <= *(char **)(param_1 + 8)) {
      _invalid_parameter_noinfo();
    }
  }
  return *(undefined8 *)(param_1 + 8);
}




void FUN_140002160(longlong param_1)

{
  FUN_140002180(param_1);
  return;
}




undefined8 FUN_140002180(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_140002190(wchar_t *param_1,wchar_t param_2)

{
  wcsrchr(param_1,param_2);
  return;
}




undefined1 FUN_1400021c0(LPWSTR param_1)

{
  DWORD DVar1;
  longlong lVar2;
  undefined1 local_18;
  
  local_18 = 0;
  DVar1 = GetModuleFileNameW((HMODULE)&IMAGE_DOS_HEADER_140000000,param_1,0x104);
  if (DVar1 != 0) {
    param_1[0x103] = L'\0';
    lVar2 = FUN_140002190(param_1,L'\\');
    if (lVar2 != 0) {
      *(undefined2 *)(lVar2 + 2) = 0;
      local_18 = 1;
    }
  }
  return local_18;
}




undefined1 FUN_140002240(LPCWSTR param_1,longlong *param_2)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  undefined1 local_18;
  undefined1 local_14;
  
  local_18 = 0;
  if ((param_1 != (LPCWSTR)0x0) && (*param_2 == 0)) {
    pHVar1 = LoadLibraryW(param_1);
    *param_2 = (longlong)pHVar1;
    if (*param_2 != 0) {
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunOpenSession");
      param_2[1] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunCloseSession");
      param_2[2] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunAddParamToSessionA");
      param_2[3] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunAddParamToSessionW");
      param_2[4] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunSendInfo");
      param_2[5] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunEnableUserInfoCollect");
      param_2[6] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunInstallConfigFilePath");
      param_2[7] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunInstallInitUid");
      param_2[8] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunUninstallStart");
      param_2[9] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunUninstallEnd");
      param_2[10] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunIsEnableUserInfoCollect");
      param_2[0xb] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunEndCache");
      param_2[0xc] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunGetUserUid");
      param_2[0xd] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunStopProcess");
      param_2[0xe] = (longlong)pFVar2;
      if (((((param_2[1] == 0) || (param_2[2] == 0)) || (param_2[3] == 0)) ||
          ((((param_2[4] == 0 || (param_2[5] == 0)) ||
            ((param_2[6] == 0 || ((param_2[7] == 0 || (param_2[8] == 0)))))) || (param_2[9] == 0))))
         || ((((param_2[10] == 0 || (param_2[0xb] == 0)) || (param_2[0xc] == 0)) ||
             ((param_2[0xd] == 0 || (param_2[0xe] == 0)))))) {
        local_14 = 0;
      }
      else {
        local_14 = 1;
      }
      local_18 = local_14;
    }
  }
  return local_18;
}




void FUN_140002550(longlong *param_1)

{
  wchar_t wVar1;
  WCHAR WVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  wchar_t *pwVar8;
  WCHAR *pWVar9;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  WCHAR local_228;
  undefined1 local_226 [526];
  ulonglong local_18;
  
  local_18 = DAT_140018038 ^ (ulonglong)auStack_258;
  local_238 = 0;
  local_228 = L'\0';
  puVar7 = local_226;
  for (lVar4 = 0x206; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  cVar3 = FUN_1400021c0(&local_228);
  if (cVar3 != '\0') {
    uVar5 = 0xffffffffffffffff;
    pwVar8 = L"AliyunWrap.DLL";
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      wVar1 = *pwVar8;
      pwVar8 = pwVar8 + 1;
    } while (wVar1 != L'\0');
    uVar6 = 0xffffffffffffffff;
    pWVar9 = &local_228;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      WVar2 = *pWVar9;
      pWVar9 = pWVar9 + 1;
    } while (WVar2 != L'\0');
    if (~uVar5 + (~uVar6 - 2) < 0x104) {
      wcscat_s(&local_228,0x104,L"AliyunWrap.DLL");
      local_238 = FUN_140002240(&local_228,param_1);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




LPCRITICAL_SECTION FUN_140002640(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}




void FUN_140002660(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}




void FUN_140002680(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}




void FUN_1400026a0(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}




longlong * FUN_1400026c0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  FUN_140002640((LPCRITICAL_SECTION)(param_1 + 0xf));
  plVar2 = param_1;
  for (lVar1 = 0x78; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
  }
  FUN_140002ac0(local_18,(longlong)(param_1 + 0xf));
  FUN_140002550(param_1);
  FUN_140002b00(local_18);
  return param_1;
}




void FUN_140002720(longlong param_1)

{
  FUN_140002660((LPCRITICAL_SECTION)(param_1 + 0x78));
  return;
}




int FUN_140002740(int param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  longlong *plVar6;
  longlong lVar7;
  byte *pbVar8;
  int local_88;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_80 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [40];
  undefined8 local_30;
  int local_28;
  char *local_20;
  int local_18;
  
  local_30 = 0xfffffffffffffffe;
  if (param_1 < 2) {
    local_88 = 1;
  }
  else {
    pbVar8 = *(byte **)(param_2 + 8);
    lVar7 = (longlong)"sendDmpFile" - (longlong)pbVar8;
    do {
      bVar1 = *pbVar8;
      if (bVar1 != pbVar8[lVar7]) {
        uVar2 = (uint)(bVar1 < pbVar8[lVar7]);
        iVar4 = (1 - uVar2) - (uint)(uVar2 != 0);
        goto LAB_1400027a7;
      }
      pbVar8 = pbVar8 + 1;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_1400027a7:
    if (iVar4 == 0) {
      if (param_1 < 3) {
        local_88 = 2;
        pbVar5 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                 FUN_140002d10((longlong *)cout_exref,
                               "sendDmpFile extern param missing, please input the dmpfile path");
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,endl_exref);
      }
      else {
        plVar6 = FUN_140002d10((longlong *)cout_exref,"will send file ");
        pbVar5 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                 FUN_140002d10(plVar6,*(char **)(param_2 + 0x10));
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,endl_exref);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (local_80,*(char **)(param_2 + 0x10));
        iVar4 = FUN_140005100(local_80);
        if (iVar4 == 0) {
          local_28 = 0;
        }
        else {
          local_28 = 3;
        }
        iVar4 = local_28;
        local_88 = local_28;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
        if (iVar4 == 0) {
          local_20 = "send file success";
        }
        else {
          local_20 = "send fail";
        }
        pbVar5 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                 FUN_140002d10((longlong *)cout_exref,local_20);
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,endl_exref);
        pbVar5 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                 FUN_140002d10((longlong *)cout_exref,"ret = ");
        pbVar5 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,iVar4);
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,endl_exref);
      }
    }
    else {
      pbVar8 = *(byte **)(param_2 + 8);
      lVar7 = (longlong)"decodeBase64File" - (longlong)pbVar8;
      do {
        bVar1 = *pbVar8;
        if (bVar1 != pbVar8[lVar7]) {
          uVar2 = (uint)(bVar1 < pbVar8[lVar7]);
          iVar4 = (1 - uVar2) - (uint)(uVar2 != 0);
          goto LAB_140002923;
        }
        pbVar8 = pbVar8 + 1;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_140002923:
      if (iVar4 == 0) {
        if (param_1 < 3) {
          local_88 = 4;
          pbVar5 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                   FUN_140002d10((longlong *)cout_exref,
                                 "decodeBase64File extern param missing, please input the base64file path"
                                );
          std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,endl_exref);
        }
        else {
          plVar6 = FUN_140002d10((longlong *)cout_exref,"will decode file ");
          pbVar5 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                   FUN_140002d10(plVar6,*(char **)(param_2 + 0x10));
          std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,endl_exref);
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_58,*(char **)(param_2 + 0x10));
          cVar3 = FUN_140004ec0(local_58);
          if (cVar3 == '\0') {
            local_18 = 5;
          }
          else {
            local_18 = 0;
          }
          iVar4 = local_18;
          local_88 = local_18;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58);
          if (iVar4 == 0) {
            pbVar5 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                     FUN_140002d10((longlong *)cout_exref,"decode file to temp.7z");
            std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,endl_exref);
          }
          else {
            pbVar5 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                     FUN_140002d10((longlong *)cout_exref,"decode file fail ");
            std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,endl_exref);
          }
        }
      }
      else {
        pbVar5 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                 FUN_140002d10((longlong *)cout_exref,"arg is error ");
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,endl_exref);
        local_88 = 100;
      }
    }
  }
  return local_88;
}




int FUN_140002a90(int param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_140002740(param_1,param_2);
  return iVar1;
}




longlong * FUN_140002ac0(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  if (*param_1 != 0) {
    FUN_140002680((LPCRITICAL_SECTION)*param_1);
  }
  return param_1;
}




void FUN_140002b00(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_1400026a0((LPCRITICAL_SECTION)*param_1);
  }
  return;
}




longlong * FUN_140002b30(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  
  FUN_140002c40(param_1,(longlong)param_2);
  bVar1 = std::ios_base::good((ios_base *)((longlong)param_2 + (longlong)*(int *)(*param_2 + 4)));
  if (bVar1) {
    pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        ((longlong)param_2 + (longlong)*(int *)(*param_2 + 4)));
    if (pbVar2 != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0) {
      pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                         ((basic_ios<char,struct_std::char_traits<char>_> *)
                          ((longlong)param_2 + (longlong)*(int *)(*param_2 + 4)));
      std::basic_ostream<char,struct_std::char_traits<char>_>::flush(pbVar2);
    }
  }
  bVar1 = std::ios_base::good((ios_base *)((longlong)param_2 + (longlong)*(int *)(*param_2 + 4)));
  *(bool *)(param_1 + 1) = bVar1;
  return param_1;
}




void FUN_140002bf0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,struct_std::char_traits<char>_> *)*param_1);
  }
  FUN_140002cb0(param_1);
  return;
}




undefined1 FUN_140002c30(longlong param_1)

{
  return *(undefined1 *)(param_1 + 8);
}




longlong * FUN_140002c40(longlong *param_1,longlong param_2)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
  *param_1 = param_2;
  pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      ((longlong)*(int *)(*(longlong *)*param_1 + 4) + *param_1));
  if (pbVar1 != (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
    pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        ((longlong)*(int *)(*(longlong *)*param_1 + 4) + *param_1));
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Lock(pbVar1);
  }
  return param_1;
}




void FUN_140002cb0(longlong *param_1)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
  pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      ((longlong)*(int *)(*(longlong *)*param_1 + 4) + *param_1));
  if (pbVar1 != (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
    pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        ((longlong)*(int *)(*(longlong *)*param_1 + 4) + *param_1));
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Unlock(pbVar1);
  }
  return;
}




longlong * FUN_140002d10(longlong *param_1,char *param_2)

{
  char cVar1;
  __uint64 _Var2;
  __int64 _Var3;
  int local_a8;
  longlong local_98;
  longlong local_90 [2];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  char local_54;
  basic_streambuf<char,struct_std::char_traits<char>_> *local_50;
  int local_48;
  int local_44;
  undefined1 local_40;
  basic_streambuf<char,struct_std::char_traits<char>_> *local_38;
  __uint64 local_30;
  char local_28;
  basic_streambuf<char,struct_std::char_traits<char>_> *local_20;
  int local_18;
  int local_14;
  undefined1 local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_a8 = 0;
  _Var2 = std::char_traits<char>::length(param_2);
  _Var3 = std::ios_base::width((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
  if ((_Var3 < 1) ||
     (_Var3 = std::ios_base::width
                        ((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4))),
     _Var3 <= (longlong)_Var2)) {
    local_60 = 0;
  }
  else {
    _Var3 = std::ios_base::width((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)))
    ;
    local_60 = _Var3 - _Var2;
  }
  local_98 = local_60;
  FUN_140002b30(local_90,param_1);
  cVar1 = FUN_140002c30((longlong)local_90);
  if (cVar1 == '\0') {
    local_a8 = 4;
  }
  else {
    local_58 = std::ios_base::flags
                         ((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
    if ((local_58 & 0x1c0) != 0x40) {
      for (; 0 < local_98; local_98 = local_98 + -1) {
        local_54 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                             ((basic_ios<char,struct_std::char_traits<char>_> *)
                              ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
        local_50 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                             ((basic_ios<char,struct_std::char_traits<char>_> *)
                              ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
        local_80 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                             (local_50,local_54);
        local_48 = local_80;
        local_7c = std::char_traits<char>::eof();
        local_44 = local_7c;
        local_40 = std::char_traits<char>::eq_int_type(&local_7c,&local_80);
        if ((bool)local_40) {
          local_a8 = 4;
          break;
        }
      }
    }
    if (local_a8 == 0) {
      local_38 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,struct_std::char_traits<char>_> *)
                            ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
      local_30 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn
                           (local_38,param_2,_Var2);
      if (local_30 != _Var2) {
        local_a8 = 4;
      }
    }
    if (local_a8 == 0) {
      for (; 0 < local_98; local_98 = local_98 + -1) {
        local_28 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                             ((basic_ios<char,struct_std::char_traits<char>_> *)
                              ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
        local_20 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                             ((basic_ios<char,struct_std::char_traits<char>_> *)
                              ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
        local_78 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                             (local_20,local_28);
        local_18 = local_78;
        local_74 = std::char_traits<char>::eof();
        local_14 = local_74;
        local_10 = std::char_traits<char>::eq_int_type(&local_74,&local_78);
        if ((bool)local_10) {
          local_a8 = 4;
          break;
        }
      }
    }
    std::ios_base::width((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)),0);
  }
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)),local_a8,false);
  local_70 = param_1;
  FUN_140002bf0(local_90);
  return local_70;
}




void FUN_1400030e0(char *param_1,int param_2)

{
  strrchr(param_1,param_2);
  return;
}




undefined1 FUN_140003110(LPCWSTR param_1,longlong *param_2)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  undefined1 local_18;
  undefined1 local_14;
  
  local_18 = 0;
  if ((param_1 != (LPCWSTR)0x0) && (*param_2 == 0)) {
    pHVar1 = LoadLibraryW(param_1);
    *param_2 = (longlong)pHVar1;
    if (*param_2 != 0) {
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunOpenSession");
      param_2[1] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunCloseSession");
      param_2[2] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunAddParamToSessionA");
      param_2[3] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunAddParamToSessionW");
      param_2[4] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunSendInfo");
      param_2[5] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunEnableUserInfoCollect");
      param_2[6] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunInstallConfigFilePath");
      param_2[7] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunInstallInitUid");
      param_2[8] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunUninstallStart");
      param_2[9] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunUninstallEnd");
      param_2[10] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunIsEnableUserInfoCollect");
      param_2[0xb] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunEndCache");
      param_2[0xc] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunGetUserUid");
      param_2[0xd] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunStopProcess");
      param_2[0xe] = (longlong)pFVar2;
      if (((((param_2[1] == 0) || (param_2[2] == 0)) || (param_2[3] == 0)) ||
          ((((param_2[4] == 0 || (param_2[5] == 0)) ||
            ((param_2[6] == 0 || ((param_2[7] == 0 || (param_2[8] == 0)))))) || (param_2[9] == 0))))
         || ((((param_2[10] == 0 || (param_2[0xb] == 0)) || (param_2[0xc] == 0)) ||
             ((param_2[0xd] == 0 || (param_2[0xe] == 0)))))) {
        local_14 = 0;
      }
      else {
        local_14 = 1;
      }
      local_18 = local_14;
    }
  }
  return local_18;
}




undefined1 FUN_140003420(longlong *param_1,LPCWSTR param_2)

{
  undefined1 local_18;
  longlong local_10 [2];
  
  local_18 = 0;
  if (param_2 != (LPCWSTR)0x0) {
    FUN_140002ac0(local_10,(longlong)(param_1 + 0xf));
    local_18 = FUN_140003110(param_2,param_1);
    FUN_140002b00(local_10);
  }
  return local_18;
}




undefined8 FUN_140003480(undefined8 param_1)

{
  return param_1;
}




longlong FUN_140003490(longlong param_1)

{
  return param_1 + 0x78;
}




undefined1 FUN_1400034a0(longlong param_1)

{
  longlong local_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0;
  FUN_140002ac0(&local_28,param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_20 = (**(code **)(param_1 + 0x60))();
  }
  local_1f = local_20;
  FUN_140002b00(&local_28);
  return local_1f;
}




void FUN_140003510(LPCWSTR param_1)

{
  FUN_140003420((longlong *)&DAT_140018850,param_1);
  return;
}




void FUN_140003530(void)

{
  FUN_1400034a0(0x140018850);
  return;
}




void FUN_140003550(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,
                  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *param_2,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                           *param_3,REGSAM param_4)

{
  LSTATUS LVar1;
  wchar_t *lpValueName;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStackY_2a8 [32];
  HKEY local_278 [2];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_268 [40];
  wchar_t *local_240;
  DWORD local_238 [4];
  wchar_t local_228;
  undefined1 local_226 [510];
  DWORD local_28;
  uint local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_20 = 0xfffffffffffffffe;
  local_18 = DAT_140018038 ^ (ulonglong)auStackY_2a8;
  local_24 = 0;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            (local_268,L"");
  local_240 = std::
              basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              ::c_str(param_2);
  LVar1 = RegOpenKeyExW((HKEY)0xffffffff80000002,local_240,0,param_4,local_278);
  if (LVar1 == 0) {
    local_228 = L'\0';
    puVar3 = local_226;
    for (lVar2 = 0x1fe; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_28 = 1;
    local_238[0] = 0x200;
    lpValueName = std::
                  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  ::c_str(param_3);
    LVar1 = RegQueryValueExW(local_278[0],lpValueName,(LPDWORD)0x0,&local_28,(LPBYTE)&local_228,
                             local_238);
    if (LVar1 == 0) {
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      operator=(local_268,&local_228);
    }
  }
  RegCloseKey(local_278[0]);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            (param_1,local_268);
  local_24 = local_24 | 1;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_268);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2a8);
  return;
}




void FUN_1400036d0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,
                  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *param_2)

{
  __uint64 _Var1;
  wchar_t *_Source;
  ulonglong _MaxCount;
  undefined1 auStack_98 [40];
  char *local_70;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_68 [40];
  uint local_40;
  char *local_38;
  char *local_30;
  uint local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_20 = 0xfffffffffffffffe;
  local_18 = DAT_140018038 ^ (ulonglong)auStack_98;
  local_28 = 0;
  _Var1 = std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          ::size(param_2);
  local_40 = (uint)(_Var1 << 2);
  setlocale(2,"");
  local_70 = (char *)operator_new((ulonglong)local_40);
  local_38 = local_70;
  if (local_70 == (char *)0x0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,"");
    local_28 = local_28 | 1;
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(param_2);
  }
  else {
    _MaxCount = (ulonglong)local_40;
    _Source = std::
              basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              ::c_str(param_2);
    wcstombs(local_70,_Source,_MaxCount);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_68,local_70);
    local_30 = local_70;
    operator_delete__(local_70);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_68);
    local_28 = local_28 | 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_68);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(param_2);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_98);
  return;
}




void FUN_140003830(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar1;
  undefined1 auStack_128 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_100 [40];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_d8 [40];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_b0 [40];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_88 [40];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_60 [40];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_38;
  uint local_30;
  undefined8 local_28;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_20;
  ulonglong local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_18 = DAT_140018038 ^ (ulonglong)auStack_128;
  local_30 = 0;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            (local_b0,L"Testid");
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            (local_88,L"SOFTWARE\\EASEUS\\DRW\\Version");
  FUN_140003550(local_d8,local_88,local_b0,0x20019);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_88);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_b0);
  local_38 = local_60;
  local_20 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)std::
                basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                ::
                basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                          (local_38,local_d8);
  FUN_1400036d0(local_100,local_20);
  pbVar1 = (basic_ostream<char,struct_std::char_traits<char>_> *)
           FUN_140002d10((longlong *)cout_exref,"test id = ");
  pbVar1 = std::operator<<<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                     (pbVar1,local_100);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,endl_exref);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_100);
  local_30 = local_30 | 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_100);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_d8);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_128);
  return;
}




void FUN_1400039a0(void)

{
  wchar_t *pwVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  WCHAR local_228;
  undefined1 local_226 [526];
  ulonglong local_18;
  
  local_18 = DAT_140018038 ^ (ulonglong)auStack_258;
  local_228 = L'\0';
  puVar3 = local_226;
  for (lVar2 = 0x206; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  GetCurrentDirectoryW(0x104,&local_228);
  FUN_1400054a0(&local_228,L"\\");
  pwVar1 = std::
           basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
           c_str((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&DAT_1400186a0);
  FUN_1400054a0(&local_228,pwVar1);
  FUN_1400054a0(&local_228,L"AliyunWrap.Dll");
  local_238 = FUN_140003510(&local_228);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_140003a50(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,
                  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_2)

{
  undefined1 auVar1 [16];
  int cchWideChar;
  __uint64 _Var2;
  char *pcVar3;
  undefined1 auStackY_a8 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_68 [40];
  LPWSTR local_40;
  LPWSTR local_38;
  LPWSTR local_30;
  uint local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_20 = 0xfffffffffffffffe;
  local_18 = DAT_140018038 ^ (ulonglong)auStackY_a8;
  local_28 = 0;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_68);
  _Var2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size
                    (param_2);
  pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_2);
  cchWideChar = MultiByteToWideChar(0,0,pcVar3,(int)_Var2,(LPWSTR)0x0,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(cchWideChar + 1);
  _Var2 = SUB168(ZEXT816(2) * auVar1,0);
  if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
    _Var2 = 0xffffffffffffffff;
  }
  local_40 = (LPWSTR)thunk_FUN_14000e548(_Var2);
  local_38 = local_40;
  if (local_40 == (LPWSTR)0x0) {
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(param_1);
    local_28 = local_28 | 1;
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_68)
    ;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_2);
  }
  else {
    _Var2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size
                      (param_2);
    pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(param_2);
    MultiByteToWideChar(0,0,pcVar3,(int)_Var2,local_40,cchWideChar);
    local_40[cchWideChar] = L'\0';
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    append(local_68,local_40);
    local_30 = local_40;
    operator_delete__(local_40);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              (param_1,local_68);
    local_28 = local_28 | 1;
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_68)
    ;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_2);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_a8);
  return;
}




__uint64 FUN_140003c40(__uint64 param_1,
                      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      *param_2)

{
  int iVar1;
  __uint64 _Var2;
  char *pcVar3;
  int local_18;
  
  _Var2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size
                    (param_2);
  local_18 = (int)_Var2;
  do {
    iVar1 = local_18;
    local_18 = iVar1 + -1;
    if ((local_18 < 0) ||
       (pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 operator[](param_2,(longlong)local_18), *pcVar3 == '\\')) break;
    pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             operator[](param_2,(longlong)local_18);
  } while (*pcVar3 != '/');
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size(param_2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::substr
            (param_2,param_1,(longlong)iVar1);
  return param_1;
}




undefined1
FUN_140003cf0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  bool bVar1;
  char *pcVar2;
  basic_ifstream<char,struct_std::char_traits<char>_> local_118 [256];
  undefined1 local_18;
  undefined1 local_17;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_1);
  std::basic_ifstream<char,struct_std::char_traits<char>_>::
  basic_ifstream<char,struct_std::char_traits<char>_>(local_118,pcVar2,1,0x40);
  bVar1 = std::basic_ifstream<char,struct_std::char_traits<char>_>::is_open(local_118);
  if (bVar1) {
    local_18 = 1;
    std::basic_ifstream<char,struct_std::char_traits<char>_>::_vbase_destructor_(local_118);
  }
  else {
    local_17 = 0;
    std::basic_ifstream<char,struct_std::char_traits<char>_>::_vbase_destructor_(local_118);
    local_18 = local_17;
  }
  return local_18;
}




undefined8
FUN_140003d90(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  BOOL BVar1;
  char *lpFileName;
  undefined4 extraout_var;
  
  lpFileName = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(param_1);
  BVar1 = DeleteFileA(lpFileName);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
}




undefined1
FUN_140003dd0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  bool bVar1;
  char *pcVar2;
  __uint64 _Var3;
  basic_ofstream<char,struct_std::char_traits<char>_> local_118 [256];
  undefined1 local_18;
  undefined1 local_17;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_2);
  std::basic_ofstream<char,struct_std::char_traits<char>_>::
  basic_ofstream<char,struct_std::char_traits<char>_>(local_118,pcVar2,0x22,0x40);
  bVar1 = std::basic_ofstream<char,struct_std::char_traits<char>_>::is_open(local_118);
  if (bVar1) {
    _Var3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size
                      (param_1);
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(param_1);
    std::basic_ostream<char,struct_std::char_traits<char>_>::write
              ((basic_ostream<char,struct_std::char_traits<char>_> *)local_118,pcVar2,_Var3);
    local_18 = 1;
    std::basic_ofstream<char,struct_std::char_traits<char>_>::_vbase_destructor_(local_118);
  }
  else {
    local_17 = 0;
    std::basic_ofstream<char,struct_std::char_traits<char>_>::_vbase_destructor_(local_118);
    local_18 = local_17;
  }
  return local_18;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140003ea0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,
                  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_2)

{
  bool bVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_29a8 [32];
  undefined4 local_2988;
  int local_2978;
  char local_2968 [10256];
  basic_ifstream<char,struct_std::char_traits<char>_> local_158 [256];
  int local_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [40];
  int local_28;
  uint local_24;
  undefined8 local_20;
  uint local_18;
  ulonglong local_10;
  
  local_20 = 0xfffffffffffffffe;
  local_10 = DAT_140018038 ^ (ulonglong)auStack_29a8;
  local_24 = 0;
  pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_2);
  local_2988 = 1;
  std::basic_ifstream<char,struct_std::char_traits<char>_>::
  basic_ifstream<char,struct_std::char_traits<char>_>(local_158,pcVar2,1,0x40);
  bVar1 = std::basic_ifstream<char,struct_std::char_traits<char>_>::is_open(local_158);
  if (bVar1) {
    uVar3 = FUN_1400054d0(local_158);
    local_58 = (int)uVar3;
    local_18 = (uint)(local_58 % 0x2800 != 0);
    local_2978 = local_58 / 0x2800 + local_18;
    local_2968[0] = '\0';
    pcVar2 = local_2968;
    for (lVar4 = 0x2800; pcVar2 = pcVar2 + 1, lVar4 != 0; lVar4 = lVar4 + -1) {
      *pcVar2 = '\0';
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
    for (local_28 = 0; local_28 < local_2978; local_28 = local_28 + 1) {
      pcVar2 = local_2968;
      for (lVar4 = 0x2801; lVar4 != 0; lVar4 = lVar4 + -1) {
        *pcVar2 = '\0';
        pcVar2 = pcVar2 + 1;
      }
      std::basic_istream<char,struct_std::char_traits<char>_>::read
                ((basic_istream<char,struct_std::char_traits<char>_> *)local_158,local_2968,0x2800);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
                (local_50,local_2968);
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_50);
    local_24 = local_24 | 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
    std::basic_ifstream<char,struct_std::char_traits<char>_>::_vbase_destructor_(local_158);
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
    local_24 = local_24 | 1;
    std::basic_ifstream<char,struct_std::char_traits<char>_>::_vbase_destructor_(local_158);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_29a8);
  return;
}




undefined8
FUN_1400040b0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  int *piVar3;
  wchar_t *pwVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_160 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_138;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_130 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_108 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_e0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 *local_88;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_80 [40];
  undefined8 local_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_50;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_48;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_40;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_38;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_30;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_28;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_20;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_18;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_10;
  
  local_58 = 0xfffffffffffffffe;
  cVar1 = FUN_140003cf0(param_1);
  if (cVar1 != '\0') {
    FUN_140003d90(param_1);
  }
  local_138 = local_160;
  local_50 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_138,param_1);
  local_48 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)FUN_140003a50(local_130,local_50);
  local_40 = local_48;
  pwVar2 = std::
           basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
           c_str(local_48);
  piVar3 = (int *)FUN_14000dcf0(pwVar2,(char *)0x0);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_130);
  local_e0 = local_108;
  local_88 = local_b0;
  local_38 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_e0,param_2);
  local_30 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)FUN_140003a50(local_d8,local_38);
  local_28 = local_30;
  local_20 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_140003c40((__uint64)local_88,param_2);
  local_18 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)FUN_140003a50(local_80,local_20);
  local_10 = local_18;
  pwVar2 = std::
           basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
           c_str(local_28);
  pwVar4 = std::
           basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
           c_str(local_10);
  FUN_14000ddc0(piVar3,pwVar4,pwVar2);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_80);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_d8);
  FUN_14000de00(piVar3);
  return 0;
}




void FUN_140004280(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,
                  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_2)

{
  bool bVar1;
  char *pcVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  longlong lVar5;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  char *local_188;
  int local_180;
  basic_ifstream<char,struct_std::char_traits<char>_> local_178 [264];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_70 [40];
  __uint64 local_48;
  char *local_40;
  char *local_38;
  uint local_30;
  undefined8 local_28;
  char *local_20;
  ulonglong local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_18 = DAT_140018038 ^ (ulonglong)auStack_1b8;
  local_30 = 0;
  pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_2);
  local_198 = 1;
  std::basic_ifstream<char,struct_std::char_traits<char>_>::
  basic_ifstream<char,struct_std::char_traits<char>_>(local_178,pcVar2,0x21,0x40);
  bVar1 = std::basic_ifstream<char,struct_std::char_traits<char>_>::is_open(local_178);
  if (bVar1) {
    uVar3 = FUN_1400054d0(local_178);
    local_180 = (int)uVar3;
    local_48 = (__uint64)local_180;
    local_40 = (char *)operator_new(local_48);
    _Var4 = local_48;
    pcVar2 = local_40;
    if (local_40 == (char *)0x0) {
      local_20 = (char *)0x0;
    }
    else {
      for (; local_20 = local_40, _Var4 != 0; _Var4 = _Var4 - 1) {
        *pcVar2 = '\0';
        pcVar2 = pcVar2 + 1;
      }
    }
    local_188 = local_20;
    pcVar2 = local_20;
    for (lVar5 = (longlong)local_180; lVar5 != 0; lVar5 = lVar5 + -1) {
      *pcVar2 = '\0';
      pcVar2 = pcVar2 + 1;
    }
    std::basic_istream<char,struct_std::char_traits<char>_>::read
              ((basic_istream<char,struct_std::char_traits<char>_> *)local_178,local_20,
               (longlong)local_180);
    FUN_140001310(local_70,(longlong)local_188,(longlong)local_180,0);
    local_38 = local_188;
    operator_delete__(local_188);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_70);
    local_30 = local_30 | 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_70);
    std::basic_ifstream<char,struct_std::char_traits<char>_>::_vbase_destructor_(local_178);
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
    local_30 = local_30 | 1;
    std::basic_ifstream<char,struct_std::char_traits<char>_>::_vbase_destructor_(local_178);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1b8);
  return;
}




int FUN_140004470(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1)

{
  __uint64 _Var1;
  char *pcVar2;
  undefined4 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  while( true ) {
    _Var1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size
                      (param_1);
    if (_Var1 <= local_10) break;
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             operator[](param_1,local_10);
    local_18 = local_18 + *pcVar2;
    local_10 = local_10 + 1;
  }
  return local_18;
}




void FUN_1400044e0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  __uint64 _Var3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStackY_588 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_528 [40];
  int local_500;
  undefined4 local_4fc;
  int local_4f8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_4f0 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_4c8 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_4a0 [40];
  char local_478;
  int local_474;
  int local_470;
  int local_46c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_468 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_440 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_418 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_3f0 [40];
  int local_3c8;
  int local_3c4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_3c0 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_398 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_370 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_348 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_320 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2f8 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2d0 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2a8 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_280 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_258 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_230 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_208 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1e0 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1b8 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_190 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_168 [40];
  undefined1 local_140;
  undefined8 local_138;
  uint local_130;
  __uint64 local_128;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_120;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_118;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_110;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_108;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_100;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_f8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_f0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_e8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_e0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_d8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_d0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_c8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_c0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_b8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_b0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_a8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_a0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_98;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_90;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_88;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_80;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_78;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_70;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_68;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_60;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_58;
  char *local_50;
  char *local_48;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_40;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_38;
  char *local_30;
  char *local_28;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_20;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_18;
  ulonglong local_10;
  
  local_138 = 0xfffffffffffffffe;
  local_10 = DAT_140018038 ^ (ulonglong)auStackY_588;
  if ((DAT_140018844 & 1) == 0) {
    DAT_140018844 = DAT_140018844 | 1;
    DAT_140018840 = FUN_1400039a0();
  }
  local_478 = '\x01';
  _Var3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size
                    (param_1);
  local_130 = (uint)(_Var3 % 0x2800 != 0);
  _Var3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size
                    (param_1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = _Var3;
  local_474 = SUB164(auVar1 / ZEXT816(0x2800),0) + local_130;
  _Var3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size
                    (param_1);
  local_4fc = (undefined4)_Var3;
  local_500 = 0;
  local_4f8 = 0;
  if ((DAT_140018844 & 2) == 0) {
    DAT_140018844 = DAT_140018844 | 2;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &DAT_140018818,"total");
    atexit(FUN_14000f750);
  }
  FUN_140005560(local_4c8,&local_474);
  if ((DAT_140018844 & 4) == 0) {
    DAT_140018844 = DAT_140018844 | 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &DAT_1400187f0,"current");
    atexit(FUN_14000f730);
  }
  if ((DAT_140018844 & 8) == 0) {
    DAT_140018844 = DAT_140018844 | 8;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &DAT_1400187c8,"check");
    atexit(FUN_14000f710);
  }
  if ((DAT_140018844 & 0x10) == 0) {
    DAT_140018844 = DAT_140018844 | 0x10;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &DAT_1400187a0,"CrashLog");
    atexit(FUN_14000f6f0);
  }
  if ((DAT_140018844 & 0x20) == 0) {
    DAT_140018844 = DAT_140018844 | 0x20;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &DAT_140018778,"header");
    atexit(FUN_14000f6d0);
  }
  FUN_140005040();
  if ((DAT_140018844 & 0x40) == 0) {
    DAT_140018844 = DAT_140018844 | 0x40;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &DAT_140018750,",");
    atexit(FUN_14000f6b0);
  }
  FUN_140005230(local_4a0);
  FUN_140005330(local_4f0);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_528);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::reserve
            (local_528,0x2800);
  local_470 = 0;
  do {
    if (local_474 <= local_470) {
LAB_140004e42:
      local_478 = FUN_140003530();
      local_140 = local_478;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_528);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4f0);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4a0);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c8);
      __security_check_cookie(local_10 ^ (ulonglong)auStackY_588);
      return;
    }
    iVar2 = local_500 + 0x2800;
    _Var3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size
                      (param_1);
    if ((ulonglong)(longlong)iVar2 < _Var3) {
      local_128 = (__uint64)(local_500 + 0x2800);
    }
    else {
      local_128 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ::size(param_1);
    }
    local_4f8 = (int)local_128;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::clear
              (local_528);
    local_46c = local_4f8 - local_500;
    local_120 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                substr(param_1,(__uint64)local_3f0,(longlong)local_500);
    local_118 = local_120;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (local_528,local_120);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_3f0);
    local_500 = local_4f8;
    local_3c8 = FUN_140004470(local_528);
    FUN_140005560(local_418,&local_3c8);
    local_3c4 = local_470 + 1;
    FUN_140005560(local_468,&local_3c4);
    pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_1400050a0();
    local_110 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          (local_3c0,pbVar4);
    local_108 = local_110;
    local_100 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          (local_398,local_110);
    local_f8 = local_100;
    local_f0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_370,local_100);
    local_e8 = local_f0;
    local_e0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_348,local_f0);
    local_d8 = local_e0;
    local_d0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_320,local_e0);
    local_c8 = local_d0;
    local_c0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_2f8,local_d0);
    local_b8 = local_c0;
    local_b0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_2d0,local_c0);
    local_a8 = local_b0;
    local_a0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_2a8,local_b0);
    local_98 = local_a0;
    local_90 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_280,local_a0);
    local_88 = local_90;
    local_80 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_258,local_90);
    local_78 = local_80;
    local_70 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_230,local_80);
    local_68 = local_70;
    local_60 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_208,local_70);
    local_58 = local_60;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (local_528,local_60);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_208);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_258);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_280);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2a8);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2d0);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2f8);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_320);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_348);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_370);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_398);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_3c0);
    local_50 = (char *)std::
                       operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 ((char *)local_1e0,
                                  (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)&DAT_14001267c);
    local_48 = local_50;
    local_40 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_1b8,local_50);
    local_38 = local_40;
    local_30 = (char *)std::
                       operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 (local_190,local_40);
    local_28 = local_30;
    std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_440,local_30);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_190);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1b8);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1e0);
    local_20 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_140003830(local_168);
    local_18 = local_20;
    pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(local_20);
    pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(local_440);
    local_478 = FUN_140005640(0,0x140013774,0x14001376c,0x140013760,0x140013750,0x140013740,
                              (longlong)pcVar6,0x1400126fc,(longlong)pcVar5);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_168);
    Sleep(1000);
    if (local_478 == '\0') {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_440);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_468);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_418);
      goto LAB_140004e42;
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_440);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_468);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_418);
    local_470 = local_470 + 1;
  } while( true );
}




void FUN_140004ec0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_a8 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_80 [40];
  char local_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [40];
  undefined8 local_28;
  uint local_20;
  ulonglong local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_18 = DAT_140018038 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  FUN_140003ea0(local_80,param_1);
  bVar1 = std::operator==<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_80,"");
  if (bVar1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
  }
  else {
    FUN_140001600(local_a8,local_80,'\0');
    bVar1 = std::operator==<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (local_a8,"");
    if (bVar1) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_a8);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
    }
    else {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_50,"temp.7z");
      cVar2 = FUN_140003dd0(local_a8,local_50);
      local_58 = cVar2 == '\0';
      local_20 = (uint)(byte)local_58;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
      if (local_58 == '\0') {
        local_b8 = 1;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_a8);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
      }
      else {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_a8);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_d8);
  return;
}




undefined * FUN_140005040(void)

{
  if ((DAT_140018748 & 1) == 0) {
    DAT_140018748 = DAT_140018748 | 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &DAT_140018720,"SendDmpWithAliyunHeader");
    atexit(FUN_14000f770);
  }
  return &DAT_140018720;
}




undefined * FUN_1400050a0(void)

{
  if ((DAT_140018718 & 1) == 0) {
    DAT_140018718 = DAT_140018718 | 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &DAT_1400186f0,"__");
    atexit(FUN_14000f790);
  }
  return &DAT_1400186f0;
}




void FUN_140005100(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_80 [40];
  undefined4 local_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [40];
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_20 = 0xfffffffffffffffe;
  local_18 = DAT_140018038 ^ (ulonglong)auStack_a8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80,"temp.7z");
  local_58 = 1;
  uVar3 = FUN_1400040b0(local_80,param_1);
  if ((int)uVar3 == 0) {
    local_58 = 2;
    FUN_140004280(local_50,local_80);
    FUN_140003d90(local_80);
    bVar1 = std::operator==<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (local_50,"");
    if (bVar1) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
    }
    else {
      local_58 = 3;
      cVar2 = FUN_1400044e0(local_50);
      if (cVar2 == '\0') {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
      }
      else {
        local_58 = 0;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
      }
    }
  }
  local_28 = local_58;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_a8);
  return;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_140005230(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  __time64_t local_18;
  undefined4 local_10;
  
  local_10 = 0;
  local_18 = 0;
  _time64(&local_18);
  FUN_1400057d0(param_1,&local_18);
  return param_1;
}




void FUN_140005280(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_158 [48];
  CHAR local_128;
  undefined1 local_127 [271];
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_140018038 ^ (ulonglong)auStack_158;
  local_18 = 0;
  local_128 = '\0';
  puVar2 = local_127;
  for (lVar1 = 0x104; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  GetModuleFileNameA((HMODULE)0x0,&local_128,0x104);
  lVar1 = FUN_1400030e0(&local_128,0x5c);
  *(undefined1 *)(lVar1 + 1) = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,&local_128);
  local_18 = local_18 | 1;
  __security_check_cookie(local_10 ^ (ulonglong)auStack_158);
  return;
}




void FUN_140005330(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  char *lpFileName;
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStackY_1c8 [32];
  CHAR local_188;
  undefined1 local_187 [255];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_88 [40];
  DWORD local_60;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [40];
  uint local_30;
  undefined8 local_28;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_20;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_18;
  ulonglong local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_10 = DAT_140018038 ^ (ulonglong)auStackY_1c8;
  local_30 = 0;
  local_188 = '\0';
  puVar2 = local_187;
  for (lVar1 = 0xff; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_140005280(local_88);
  local_20 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::operator+<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_58,&DAT_1400186c8);
  local_18 = local_20;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
            (local_88,local_20);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58);
  lpFileName = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(local_88);
  local_60 = GetPrivateProfileStringA("Config","SZUID","",&local_188,0x100,lpFileName);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,&local_188);
  local_30 = local_30 | 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_88);
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_1c8);
  return;
}




longlong FUN_140005480(longlong *param_1)

{
  return (longlong)(int)param_1[1] + *param_1;
}




void FUN_1400054a0(wchar_t *param_1,wchar_t *param_2)

{
  wcscat_s(param_1,0x104,param_2);
  return;
}




ulonglong FUN_1400054d0(basic_ifstream<char,struct_std::char_traits<char>_> *param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  bVar1 = std::basic_ifstream<char,struct_std::char_traits<char>_>::is_open(param_1);
  if (bVar1) {
    plVar2 = (longlong *)
             std::basic_istream<char,struct_std::char_traits<char>_>::tellg
                       ((basic_istream<char,struct_std::char_traits<char>_> *)param_1);
    lVar3 = FUN_140005480(plVar2);
    std::basic_istream<char,struct_std::char_traits<char>_>::seekg
              ((basic_istream<char,struct_std::char_traits<char>_> *)param_1,0,2);
    plVar2 = (longlong *)
             std::basic_istream<char,struct_std::char_traits<char>_>::tellg
                       ((basic_istream<char,struct_std::char_traits<char>_> *)param_1);
    uVar4 = FUN_140005480(plVar2);
    std::basic_istream<char,struct_std::char_traits<char>_>::seekg
              ((basic_istream<char,struct_std::char_traits<char>_> *)param_1,0,(int)lVar3);
    uVar4 = uVar4 & 0xffffffff;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}




void FUN_140005560(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,int *param_2)

{
  undefined1 auStack_178 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_150 [40];
  basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_128 [16];
  basic_ostream<char,struct_std::char_traits<char>_> local_118 [240];
  uint local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_20 = 0xfffffffffffffffe;
  local_18 = DAT_140018038 ^ (ulonglong)auStack_178;
  local_28 = 0;
  std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_128,3);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(local_118,*param_2);
  std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::str
            (local_128);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_150);
  local_28 = local_28 | 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_150);
  std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _vbase_destructor_(local_128);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_178);
  return;
}




undefined1
FUN_140005640(undefined1 param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
             ,longlong param_6,longlong param_7,longlong param_8,longlong param_9)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 local_28;
  longlong local_20 [3];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28 = 0;
  if ((((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && ((param_5 != 0 && (param_6 != 0)))
       ) && ((param_7 != 0 && ((param_8 != 0 && (param_9 != 0)))))) &&
     (cVar1 = FUN_1400058b0(), cVar1 != '\0')) {
    lVar3 = FUN_140003490(0x140018850);
    FUN_140002ac0(local_20,lVar3);
    lVar3 = FUN_140003480(&DAT_140018850);
    if (*(longlong *)(lVar3 + 0x28) != 0) {
      uVar2 = FUN_1400058c0();
      lVar3 = FUN_140003480(&DAT_140018850);
      local_28 = (**(code **)(lVar3 + 0x28))
                           (param_1,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,"ALIYUN_{C69BDD99-9D0B-43f2-A794-9B70DAD4A96A}");
    }
    FUN_140002b00(local_20);
  }
  return local_28;
}




void FUN_1400057d0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,__int64 *param_2)

{
  undefined1 auStack_178 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_150 [40];
  basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_128 [16];
  basic_ostream<char,struct_std::char_traits<char>_> local_118 [240];
  uint local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_20 = 0xfffffffffffffffe;
  local_18 = DAT_140018038 ^ (ulonglong)auStack_178;
  local_28 = 0;
  std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_128,3);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(local_118,*param_2);
  std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::str
            (local_128);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_150);
  local_28 = local_28 | 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_150);
  std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _vbase_destructor_(local_128);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_178);
  return;
}




undefined1 FUN_1400058b0(void)

{
  return 1;
}




undefined1 FUN_1400058c0(void)

{
  return 0;
}




longlong FUN_1400058d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong local_98;
  longlong local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  longlong local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_98 = param_1;
  local_90 = param_1 + 0x9e8;
  local_88 = &DAT_1400105e0;
  local_80 = 0x101;
  local_7c = 0x11e;
  local_78 = 0xf;
  local_74 = 0;
  plVar2 = &local_98;
  puVar3 = (undefined1 *)(param_1 + 0xf80);
  for (lVar1 = 0x28; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *(undefined1 *)plVar2;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
    puVar3 = puVar3 + 1;
  }
  local_70 = param_1 + 0x8f4;
  local_68 = param_1 + 0xe68;
  local_60 = &DAT_140010660;
  local_58 = 0;
  local_54 = 0x1e;
  local_50 = 0xf;
  local_4c = 0;
  plVar2 = &local_70;
  puVar3 = (undefined1 *)(param_1 + 0xfa8);
  for (lVar1 = 0x28; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = (char)*plVar2;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
    puVar3 = puVar3 + 1;
  }
  local_48[0] = param_1 + 0xee0;
  local_48[1] = 0;
  local_38 = &DAT_1400106f0;
  local_30 = 0;
  local_2c = 0x13;
  local_28 = 7;
  local_24 = 0;
  plVar2 = local_48;
  puVar3 = (undefined1 *)(param_1 + 0xfd0);
  for (lVar1 = 0x28; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = (char)*plVar2;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x1af40) = 0;
  *(undefined4 *)(param_1 + 0x1af44) = 0;
  *(undefined4 *)(param_1 + 0x1af48) = 0;
  return param_1;
}




longlong FUN_140005a60(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x50000) = 0;
  return param_1;
}




void FUN_140005a80(longlong param_1,char param_2,undefined8 param_3)

{
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 0x6aff0) = param_3;
  }
  return;
}




void FUN_140005ab0(void)

{
  return;
}




void FUN_140005ae0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  *(undefined8 *)(param_1 + 0x1af88) = param_2;
  *(undefined4 *)(param_1 + 0x1af7c) = 0;
  *(undefined4 *)(param_1 + 0x1af78) = 0;
  *(undefined4 *)(param_1 + 0x1af80) = 0;
  if (*(short *)(param_1 + 0xe8a) == 0) {
    local_28 = 0;
    for (local_20 = 0; local_20 < 0x1c; local_20 = local_20 + 1) {
      *(int *)(param_1 + 0x1e74 + (longlong)local_20 * 4) = local_28;
      for (local_24 = 0;
          (int)local_24 <
          1 << ((byte)*(undefined4 *)(&DAT_1400105e0 + (longlong)local_20 * 4) & 0x1f);
          local_24 = local_24 + 1) {
        *(undefined1 *)(param_1 + 0x1b71 + (longlong)local_28) = (undefined1)local_20;
        local_28 = local_28 + 1;
      }
    }
    FUN_140005a80(param_1,local_28 == 0x100,"ct_init: length != 256");
    *(undefined1 *)(param_1 + 0x1b71 + (longlong)(local_28 + -1)) = (undefined1)local_20;
    local_18 = 0;
    for (local_20 = 0; local_20 < 0x10; local_20 = local_20 + 1) {
      *(int *)(param_1 + 0x1ee8 + (longlong)local_20 * 4) = local_18;
      for (local_24 = 0;
          (int)local_24 <
          1 << ((byte)*(undefined4 *)(&DAT_140010660 + (longlong)local_20 * 4) & 0x1f);
          local_24 = local_24 + 1) {
        *(undefined1 *)(param_1 + 0x1c71 + (longlong)local_18) = (undefined1)local_20;
        local_18 = local_18 + 1;
      }
    }
    FUN_140005a80(param_1,local_18 == 0x100,"ct_init: dist != 256");
    local_18 = local_18 >> 7;
    for (; local_20 < 0x1e; local_20 = local_20 + 1) {
      *(int *)(param_1 + 0x1ee8 + (longlong)local_20 * 4) = local_18 << 7;
      for (local_24 = 0;
          (int)local_24 <
          1 << ((char)*(undefined4 *)(&DAT_140010660 + (longlong)local_20 * 4) - 7U & 0x1f);
          local_24 = local_24 + 1) {
        *(undefined1 *)(param_1 + 0x1c71 + (longlong)(local_18 + 0x100)) = (undefined1)local_20;
        local_18 = local_18 + 1;
      }
    }
    FUN_140005a80(param_1,local_18 == 0x100,"ct_init: 256+dist != 512");
    for (local_1c = 0; local_1c < 0x10; local_1c = local_1c + 1) {
      *(undefined2 *)(param_1 + 0x1018 + (longlong)local_1c * 2) = 0;
    }
    local_24 = 0;
    while ((int)local_24 < 0x90) {
      *(undefined2 *)(param_1 + 0xa0a + (longlong)(int)local_24 * 4) = 8;
      local_24 = local_24 + 1;
      *(short *)(param_1 + 0x1028) = *(short *)(param_1 + 0x1028) + 1;
    }
    while ((int)local_24 < 0x100) {
      *(undefined2 *)(param_1 + 0xa0a + (longlong)(int)local_24 * 4) = 9;
      local_24 = local_24 + 1;
      *(short *)(param_1 + 0x102a) = *(short *)(param_1 + 0x102a) + 1;
    }
    while ((int)local_24 < 0x118) {
      *(undefined2 *)(param_1 + 0xa0a + (longlong)(int)local_24 * 4) = 7;
      local_24 = local_24 + 1;
      *(short *)(param_1 + 0x1026) = *(short *)(param_1 + 0x1026) + 1;
    }
    while ((int)local_24 < 0x120) {
      *(undefined2 *)(param_1 + 0xa0a + (longlong)(int)local_24 * 4) = 8;
      local_24 = local_24 + 1;
      *(short *)(param_1 + 0x1028) = *(short *)(param_1 + 0x1028) + 1;
    }
    FUN_1400066a0(param_1,param_1 + 0xa08,0x11f);
    for (local_24 = 0; (int)local_24 < 0x1e; local_24 = local_24 + 1) {
      *(undefined2 *)(param_1 + 0xe8a + (longlong)(int)local_24 * 4) = 5;
      uVar1 = FUN_140008240(local_24,5);
      *(short *)(param_1 + 0xe88 + (longlong)(int)local_24 * 4) = (short)uVar1;
    }
    FUN_140005f80(param_1);
  }
  return;
}




void FUN_140005f80(longlong param_1)

{
  undefined4 local_18;
  
  for (local_18 = 0; local_18 < 0x11e; local_18 = local_18 + 1) {
    *(undefined2 *)(param_1 + 0x20 + (longlong)local_18 * 4) = 0;
  }
  for (local_18 = 0; local_18 < 0x1e; local_18 = local_18 + 1) {
    *(undefined2 *)(param_1 + 0x914 + (longlong)local_18 * 4) = 0;
  }
  for (local_18 = 0; local_18 < 0x13; local_18 = local_18 + 1) {
    *(undefined2 *)(param_1 + 0xf00 + (longlong)local_18 * 4) = 0;
  }
  *(undefined2 *)(param_1 + 0x420) = 1;
  *(undefined4 *)(param_1 + 0x1af74) = 0;
  *(undefined4 *)(param_1 + 0x1af70) = 0;
  *(undefined4 *)(param_1 + 0x1af68) = 0;
  *(undefined4 *)(param_1 + 0x1af64) = 0;
  *(undefined4 *)(param_1 + 0x1af60) = 0;
  *(undefined1 *)(param_1 + 0x1af6c) = 0;
  *(undefined1 *)(param_1 + 0x1af6d) = 1;
  return;
}




void FUN_140006090(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_res18;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 0x1038 + (longlong)param_3 * 4);
  local_res18 = param_3;
  for (local_10 = param_3 << 1; local_10 <= *(int *)(param_1 + 0x192c); local_10 = local_10 << 1) {
    if ((local_10 < *(int *)(param_1 + 0x192c)) &&
       ((*(ushort *)
          (param_2 + (longlong)*(int *)(param_1 + 0x1038 + (longlong)(local_10 + 1) * 4) * 4) <
         *(ushort *)(param_2 + (longlong)*(int *)(param_1 + 0x1038 + (longlong)local_10 * 4) * 4) ||
        ((*(short *)(param_2 +
                    (longlong)*(int *)(param_1 + 0x1038 + (longlong)(local_10 + 1) * 4) * 4) ==
          *(short *)(param_2 + (longlong)*(int *)(param_1 + 0x1038 + (longlong)local_10 * 4) * 4) &&
         (*(byte *)(param_1 + 0x1934 +
                   (longlong)*(int *)(param_1 + 0x1038 + (longlong)(local_10 + 1) * 4)) <=
          *(byte *)(param_1 + 0x1934 + (longlong)*(int *)(param_1 + 0x1038 + (longlong)local_10 * 4)
                   ))))))) {
      local_10 = local_10 + 1;
    }
    iVar2 = *(int *)(param_1 + 0x1038 + (longlong)local_10 * 4);
    if ((*(ushort *)(param_2 + (longlong)iVar1 * 4) < *(ushort *)(param_2 + (longlong)iVar2 * 4)) ||
       ((*(short *)(param_2 + (longlong)iVar1 * 4) == *(short *)(param_2 + (longlong)iVar2 * 4) &&
        (*(byte *)(param_1 + 0x1934 + (longlong)iVar1) <=
         *(byte *)(param_1 + 0x1934 + (longlong)iVar2))))) break;
    *(int *)(param_1 + 0x1038 + (longlong)local_res18 * 4) = iVar2;
    local_res18 = local_10;
  }
  *(int *)(param_1 + 0x1038 + (longlong)local_res18 * 4) = iVar1;
  return;
}




void FUN_140006280(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int local_48;
  uint local_44;
  int local_38;
  uint local_28;
  int local_24;
  
  lVar5 = *param_2;
  lVar6 = param_2[2];
  lVar9 = param_2[3];
  iVar2 = *(int *)((longlong)param_2 + 0x24);
  uVar3 = *(uint *)(param_2 + 4);
  lVar7 = param_2[1];
  local_38 = 0;
  for (local_28 = 0; (int)local_28 < 0x10; local_28 = local_28 + 1) {
    *(undefined2 *)(param_1 + 0x1018 + (longlong)(int)local_28 * 2) = 0;
  }
  *(undefined2 *)
   (lVar5 + 2 + (longlong)*(int *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x1930) * 4) * 4)
       = 0;
  local_48 = *(int *)(param_1 + 0x1930);
  while (local_48 = local_48 + 1, local_48 < 0x23d) {
    iVar4 = *(int *)(param_1 + 0x1038 + (longlong)local_48 * 4);
    local_28 = *(ushort *)(lVar5 + 2 + (ulonglong)*(ushort *)(lVar5 + 2 + (longlong)iVar4 * 4) * 4)
               + 1;
    if ((int)uVar3 < (int)local_28) {
      local_38 = local_38 + 1;
      local_28 = uVar3;
    }
    *(undefined2 *)(lVar5 + 2 + (longlong)iVar4 * 4) = (undefined2)local_28;
    if (iVar4 <= iVar2) {
      *(short *)(param_1 + 0x1018 + (longlong)(int)local_28 * 2) =
           *(short *)(param_1 + 0x1018 + (longlong)(int)local_28 * 2) + 1;
      local_24 = 0;
      if ((int)lVar9 <= iVar4) {
        local_24 = *(int *)(lVar6 + (longlong)(iVar4 - (int)lVar9) * 4);
      }
      uVar1 = *(ushort *)(lVar5 + (longlong)iVar4 * 4);
      *(uint *)(param_1 + 0x1af70) =
           (uint)uVar1 * (local_28 + local_24) + *(int *)(param_1 + 0x1af70);
      if (lVar7 != 0) {
        *(uint *)(param_1 + 0x1af74) =
             (uint)uVar1 * ((uint)*(ushort *)(lVar7 + 2 + (longlong)iVar4 * 4) + local_24) +
             *(int *)(param_1 + 0x1af74);
      }
    }
  }
  if (local_38 != 0) {
    FUN_140005ab0();
    local_28 = uVar3;
    do {
      do {
        uVar8 = local_28;
        local_28 = uVar8 - 1;
      } while (*(short *)(param_1 + 0x1018 + (longlong)(int)local_28 * 2) == 0);
      *(short *)(param_1 + 0x1018 + (longlong)(int)local_28 * 2) =
           *(short *)(param_1 + 0x1018 + (longlong)(int)local_28 * 2) + -1;
      *(short *)(param_1 + 0x1018 + (longlong)(int)uVar8 * 2) =
           *(short *)(param_1 + 0x1018 + (longlong)(int)uVar8 * 2) + 2;
      *(short *)(param_1 + 0x1018 + (longlong)(int)uVar3 * 2) =
           *(short *)(param_1 + 0x1018 + (longlong)(int)uVar3 * 2) + -1;
      local_38 = local_38 + -2;
      local_28 = uVar3;
    } while (0 < local_38);
    for (; local_28 != 0; local_28 = local_28 - 1) {
      local_44 = (uint)*(ushort *)(param_1 + 0x1018 + (longlong)(int)local_28 * 2);
      while (local_44 != 0) {
        local_48 = local_48 + -1;
        iVar4 = *(int *)(param_1 + 0x1038 + (longlong)local_48 * 4);
        if (iVar4 <= iVar2) {
          if ((uint)*(ushort *)(lVar5 + 2 + (longlong)iVar4 * 4) != (local_28 & 0xffff)) {
            FUN_140005ab0();
            *(uint *)(param_1 + 0x1af70) =
                 (local_28 - *(ushort *)(lVar5 + 2 + (longlong)iVar4 * 4)) *
                 (uint)*(ushort *)(lVar5 + (longlong)iVar4 * 4) + *(int *)(param_1 + 0x1af70);
            *(undefined2 *)(lVar5 + 2 + (longlong)iVar4 * 4) = (undefined2)local_28;
          }
          local_44 = local_44 - 1;
        }
      }
    }
  }
  return;
}




void FUN_1400066a0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  int local_58;
  ushort local_54;
  int local_50;
  ushort auStack_40 [16];
  uint local_20;
  undefined1 local_1c;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_140018038 ^ (ulonglong)auStack_78;
  local_54 = 0;
  for (local_50 = 1; local_50 < 0x10; local_50 = local_50 + 1) {
    local_54 = (local_54 + *(short *)(param_1 + 0x1018 + (longlong)(local_50 + -1) * 2)) * 2;
    auStack_40[local_50] = local_54;
  }
  local_1c = (local_54 - 1) + (uint)*(ushort *)(param_1 + 0x1036) == 0x7fff;
  FUN_140005a80(param_1,local_1c,"inconsistent bit counts");
  FUN_140005ab0();
  for (local_58 = 0; local_58 <= param_3; local_58 = local_58 + 1) {
    local_20 = (uint)*(ushort *)(param_2 + 2 + (longlong)local_58 * 4);
    if (local_20 != 0) {
      local_18 = (uint)auStack_40[(int)local_20];
      auStack_40[(int)local_20] = auStack_40[(int)local_20] + 1;
      lVar2 = (longlong)local_58;
      uVar1 = FUN_140008240(local_18,local_20);
      *(short *)(param_2 + lVar2 * 4) = (short)uVar1;
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_78);
  return;
}




void FUN_140006820(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_44;
  int local_38;
  int local_34;
  int local_1c;
  char local_18;
  
  lVar3 = *param_2;
  lVar4 = param_2[1];
  local_34 = *(int *)((longlong)param_2 + 0x1c);
  local_38 = -1;
  *(undefined4 *)(param_1 + 0x192c) = 0;
  *(undefined4 *)(param_1 + 0x1930) = 0x23d;
  for (local_44 = 0; local_44 < local_34; local_44 = local_44 + 1) {
    if (*(short *)(lVar3 + (longlong)local_44 * 4) == 0) {
      *(undefined2 *)(lVar3 + 2 + (longlong)local_44 * 4) = 0;
    }
    else {
      local_38 = local_44;
      *(int *)(param_1 + 0x192c) = *(int *)(param_1 + 0x192c) + 1;
      *(int *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x192c) * 4) = local_44;
      *(undefined1 *)(param_1 + 0x1934 + (longlong)local_44) = 0;
    }
  }
  while (*(int *)(param_1 + 0x192c) < 2) {
    if (local_38 < 2) {
      local_38 = local_38 + 1;
      local_1c = local_38;
    }
    else {
      local_1c = 0;
    }
    *(int *)(param_1 + 0x192c) = *(int *)(param_1 + 0x192c) + 1;
    *(int *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x192c) * 4) = local_1c;
    *(undefined2 *)(lVar3 + (longlong)local_1c * 4) = 1;
    *(undefined1 *)(param_1 + 0x1934 + (longlong)local_1c) = 0;
    *(int *)(param_1 + 0x1af70) = *(int *)(param_1 + 0x1af70) + -1;
    if (lVar4 != 0) {
      *(uint *)(param_1 + 0x1af74) =
           *(int *)(param_1 + 0x1af74) - (uint)*(ushort *)(lVar4 + 2 + (longlong)local_1c * 4);
    }
  }
  *(int *)((longlong)param_2 + 0x24) = local_38;
  for (local_44 = *(int *)(param_1 + 0x192c) / 2; 0 < local_44; local_44 = local_44 + -1) {
    FUN_140006090(param_1,lVar3,local_44);
  }
  do {
    iVar1 = *(int *)(param_1 + 0x103c);
    *(undefined4 *)(param_1 + 0x103c) =
         *(undefined4 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x192c) * 4);
    *(int *)(param_1 + 0x192c) = *(int *)(param_1 + 0x192c) + -1;
    FUN_140006090(param_1,lVar3,1);
    iVar2 = *(int *)(param_1 + 0x103c);
    *(int *)(param_1 + 0x1930) = *(int *)(param_1 + 0x1930) + -1;
    *(int *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x1930) * 4) = iVar1;
    *(int *)(param_1 + 0x1930) = *(int *)(param_1 + 0x1930) + -1;
    *(int *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x1930) * 4) = iVar2;
    *(short *)(lVar3 + (longlong)local_34 * 4) =
         *(short *)(lVar3 + (longlong)iVar1 * 4) + *(short *)(lVar3 + (longlong)iVar2 * 4);
    if (*(byte *)(param_1 + 0x1934 + (longlong)iVar1) <
        *(byte *)(param_1 + 0x1934 + (longlong)iVar2)) {
      local_18 = *(char *)(param_1 + 0x1934 + (longlong)iVar2);
    }
    else {
      local_18 = *(char *)(param_1 + 0x1934 + (longlong)iVar1);
    }
    *(char *)(param_1 + 0x1934 + (longlong)local_34) = local_18 + '\x01';
    *(undefined2 *)(lVar3 + 2 + (longlong)iVar2 * 4) = (undefined2)local_34;
    *(undefined2 *)(lVar3 + 2 + (longlong)iVar1 * 4) = (undefined2)local_34;
    *(int *)(param_1 + 0x103c) = local_34;
    local_34 = local_34 + 1;
    FUN_140006090(param_1,lVar3,1);
  } while (1 < *(int *)(param_1 + 0x192c));
  *(int *)(param_1 + 0x1930) = *(int *)(param_1 + 0x1930) + -1;
  *(undefined4 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x1930) * 4) =
       *(undefined4 *)(param_1 + 0x103c);
  FUN_140006280(param_1,param_2);
  FUN_1400066a0(param_1,lVar3,local_38);
  return;
}




void FUN_140006c90(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = 0xffffffff;
  uVar1 = *(ushort *)(param_2 + 2);
  local_28 = 0;
  local_10 = 7;
  local_14 = 4;
  if (uVar1 == 0) {
    local_10 = 0x8a;
    local_14 = 3;
  }
  *(undefined2 *)(param_2 + 2 + (longlong)(param_3 + 1) * 4) = 0xffff;
  local_1c = (uint)uVar1;
  for (local_24 = 0; local_24 <= param_3; local_24 = local_24 + 1) {
    uVar2 = (uint)*(ushort *)(param_2 + 2 + (longlong)(local_24 + 1) * 4);
    local_28 = local_28 + 1;
    if ((local_10 <= local_28) || (local_1c != uVar2)) {
      if (local_28 < local_14) {
        *(short *)(param_1 + 0xf00 + (longlong)(int)local_1c * 4) =
             *(short *)(param_1 + 0xf00 + (longlong)(int)local_1c * 4) + (short)local_28;
      }
      else if (local_1c == 0) {
        if (local_28 < 0xb) {
          *(short *)(param_1 + 0xf44) = *(short *)(param_1 + 0xf44) + 1;
        }
        else {
          *(short *)(param_1 + 0xf48) = *(short *)(param_1 + 0xf48) + 1;
        }
      }
      else {
        if (local_1c != local_18) {
          *(short *)(param_1 + 0xf00 + (longlong)(int)local_1c * 4) =
               *(short *)(param_1 + 0xf00 + (longlong)(int)local_1c * 4) + 1;
        }
        *(short *)(param_1 + 0xf40) = *(short *)(param_1 + 0xf40) + 1;
      }
      local_28 = 0;
      local_18 = local_1c;
      if (uVar2 == 0) {
        local_10 = 0x8a;
        local_14 = 3;
      }
      else if (local_1c == uVar2) {
        local_10 = 6;
        local_14 = 3;
      }
      else {
        local_10 = 7;
        local_14 = 4;
      }
    }
    local_1c = uVar2;
  }
  return;
}




void FUN_140006e90(undefined8 *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int local_28;
  int local_24;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  char local_c;
  
  local_18 = 0xffffffff;
  local_28 = 0;
  local_10 = 7;
  local_14 = 4;
  if (*(ushort *)(param_2 + 2) == 0) {
    local_10 = 0x8a;
    local_14 = 3;
  }
  local_1c = (uint)*(ushort *)(param_2 + 2);
  for (local_24 = 0; local_24 <= param_3; local_24 = local_24 + 1) {
    uVar1 = (uint)*(ushort *)(param_2 + 2 + (longlong)(local_24 + 1) * 4);
    iVar2 = local_28 + 1;
    if ((local_10 <= iVar2) || (local_1c != uVar1)) {
      if (iVar2 < local_14) {
        do {
          local_28 = iVar2;
          FUN_140008070(param_1,(uint)*(ushort *)
                                       ((longlong)param_1 + (longlong)(int)local_1c * 4 + 0xf00),
                        (uint)*(ushort *)((longlong)param_1 + (longlong)(int)local_1c * 4 + 0xf02));
          iVar2 = local_28 + -1;
        } while (local_28 + -1 != 0);
      }
      else if (local_1c == 0) {
        if (iVar2 < 0xb) {
          FUN_140008070(param_1,(uint)*(ushort *)((longlong)param_1 + 0xf44),
                        (uint)*(ushort *)((longlong)param_1 + 0xf46));
          FUN_140008070(param_1,local_28 - 2,3);
        }
        else {
          FUN_140008070(param_1,(uint)*(ushort *)(param_1 + 0x1e9),
                        (uint)*(ushort *)((longlong)param_1 + 0xf4a));
          FUN_140008070(param_1,local_28 - 10,7);
        }
      }
      else {
        if (local_1c != local_18) {
          FUN_140008070(param_1,(uint)*(ushort *)
                                       ((longlong)param_1 + (longlong)(int)local_1c * 4 + 0xf00),
                        (uint)*(ushort *)((longlong)param_1 + (longlong)(int)local_1c * 4 + 0xf02));
          iVar2 = local_28;
        }
        local_28 = iVar2;
        if ((local_28 < 3) || (6 < local_28)) {
          local_c = '\0';
        }
        else {
          local_c = '\x01';
        }
        FUN_140005a80((longlong)param_1,local_c," 3_6?");
        FUN_140008070(param_1,(uint)*(ushort *)(param_1 + 0x1e8),
                      (uint)*(ushort *)((longlong)param_1 + 0xf42));
        FUN_140008070(param_1,local_28 - 3,2);
      }
      local_28 = 0;
      local_18 = local_1c;
      iVar2 = local_28;
      if (uVar1 == 0) {
        local_10 = 0x8a;
        local_14 = 3;
      }
      else if (local_1c == uVar1) {
        local_10 = 6;
        local_14 = 3;
      }
      else {
        local_10 = 7;
        local_14 = 4;
      }
    }
    local_28 = iVar2;
    local_1c = uVar1;
  }
  return;
}




int FUN_140007140(longlong param_1)

{
  int local_18;
  
  FUN_140006c90(param_1,param_1 + 0x20,*(int *)(param_1 + 0xfc4));
  FUN_140006c90(param_1,param_1 + 0x914,*(int *)(param_1 + 0xfec));
  FUN_140006820(param_1,(longlong *)(param_1 + 0xff0));
  local_18 = 0x12;
  while ((2 < local_18 &&
         (*(short *)(param_1 + 0xf02 + (ulonglong)(byte)(&DAT_1400106d8)[local_18] * 4) == 0))) {
    local_18 = local_18 + -1;
  }
  *(int *)(param_1 + 0x1af70) = (local_18 + 1) * 3 + 0xe + *(int *)(param_1 + 0x1af70);
  FUN_140005ab0();
  return local_18;
}




void FUN_140007240(undefined8 *param_1,int param_2,int param_3,int param_4)

{
  int local_18;
  char local_14;
  char local_13;
  
  if (((param_2 < 0x101) || (param_3 < 1)) || (param_4 < 4)) {
    local_14 = '\0';
  }
  else {
    local_14 = '\x01';
  }
  FUN_140005a80((longlong)param_1,local_14,"not enough codes");
  if (((param_2 < 0x11f) && (param_3 < 0x1f)) && (param_4 < 0x14)) {
    local_13 = '\x01';
  }
  else {
    local_13 = '\0';
  }
  FUN_140005a80((longlong)param_1,local_13,"too many codes");
  FUN_140005ab0();
  FUN_140008070(param_1,param_2 - 0x101,5);
  FUN_140008070(param_1,param_3 - 1,5);
  FUN_140008070(param_1,param_4 - 4,4);
  for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 1) {
    FUN_140005ab0();
    FUN_140008070(param_1,(uint)*(ushort *)
                                 ((longlong)param_1 +
                                 (ulonglong)(byte)(&DAT_1400106d8)[local_18] * 4 + 0xf02),3);
  }
  FUN_140005ab0();
  FUN_140006e90(param_1,(longlong)(param_1 + 4),param_2 + -1);
  FUN_140005ab0();
  FUN_140006e90(param_1,(longlong)param_1 + 0x914,param_3 + -1);
  FUN_140005ab0();
  return;
}




int FUN_140007420(undefined8 *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_10;
  
  *(undefined1 *)((longlong)param_1 + (ulonglong)*(uint *)(param_1 + 0x35ed) + 0x19f60) =
       *(undefined1 *)((longlong)param_1 + 0x1af6c);
  if (*(short *)param_1[0x35f1] == -1) {
    FUN_140007f10((longlong)param_1);
  }
  FUN_140006820((longlong)param_1,param_1 + 500);
  FUN_140005ab0();
  FUN_140006820((longlong)param_1,param_1 + 0x1f9);
  FUN_140005ab0();
  iVar1 = FUN_140007140((longlong)param_1);
  local_10 = *(int *)(param_1 + 0x35ee) + 10U >> 3;
  uVar2 = *(int *)((longlong)param_1 + 0x1af74) + 10U >> 3;
  *(uint *)(param_1 + 0x35f0) = *(int *)(param_1 + 0x35f0) + param_3;
  FUN_140005ab0();
  if (uVar2 <= local_10) {
    local_10 = uVar2;
  }
  if ((local_10 < param_3 + 4) || (param_2 == (undefined1 *)0x0)) {
    if (uVar2 == local_10) {
      FUN_140008070(param_1,param_4 + 2,3);
      FUN_140007c60(param_1,(longlong)(param_1 + 0x141),(longlong)(param_1 + 0x1d1));
      *(int *)((longlong)param_1 + 0x1af7c) =
           *(int *)((longlong)param_1 + 0x1af74) + 3 + *(int *)((longlong)param_1 + 0x1af7c);
      *(uint *)(param_1 + 0x35ef) =
           (*(uint *)((longlong)param_1 + 0x1af7c) >> 3) + *(int *)(param_1 + 0x35ef);
      *(uint *)((longlong)param_1 + 0x1af7c) = *(uint *)((longlong)param_1 + 0x1af7c) & 7;
    }
    else {
      FUN_140008070(param_1,param_4 + 4,3);
      FUN_140007240(param_1,*(int *)((longlong)param_1 + 0xfc4) + 1,
                    *(int *)((longlong)param_1 + 0xfec) + 1,iVar1 + 1);
      FUN_140007c60(param_1,(longlong)(param_1 + 4),(longlong)param_1 + 0x914);
      *(int *)((longlong)param_1 + 0x1af7c) =
           *(int *)(param_1 + 0x35ee) + 3 + *(int *)((longlong)param_1 + 0x1af7c);
      *(uint *)(param_1 + 0x35ef) =
           (*(uint *)((longlong)param_1 + 0x1af7c) >> 3) + *(int *)(param_1 + 0x35ef);
      *(uint *)((longlong)param_1 + 0x1af7c) = *(uint *)((longlong)param_1 + 0x1af7c) & 7;
    }
  }
  else {
    FUN_140008070(param_1,param_4,3);
    *(uint *)(param_1 + 0x35ef) =
         (*(int *)((longlong)param_1 + 0x1af7c) + 10U >> 3) + param_3 + 4 +
         *(int *)(param_1 + 0x35ef);
    *(undefined4 *)((longlong)param_1 + 0x1af7c) = 0;
    FUN_140008480(param_1,param_2,param_3,1);
  }
  FUN_140005a80((longlong)param_1,
                *(int *)((longlong)param_1 + 0x1af7c) + *(int *)(param_1 + 0x35ef) * 8 ==
                *(int *)(param_1 + 0x35f6),"bad compressed size");
  FUN_140005f80((longlong)param_1);
  if (param_4 != 0) {
    FUN_140008290(param_1);
    *(int *)((longlong)param_1 + 0x1af7c) = *(int *)((longlong)param_1 + 0x1af7c) + 7;
  }
  FUN_140005ab0();
  return (*(uint *)((longlong)param_1 + 0x1af7c) >> 3) + *(int *)(param_1 + 0x35ef);
}




undefined4 FUN_140007850(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ushort local_res10;
  ushort local_res18;
  int local_28;
  uint local_24;
  byte local_1c;
  char local_1b;
  byte local_1a;
  undefined4 local_18;
  
  local_res18._0_1_ = (undefined1)param_3;
  *(undefined1 *)(param_1 + 0x1f60 + (ulonglong)*(uint *)(param_1 + 0x1af60)) =
       (undefined1)local_res18;
  *(int *)(param_1 + 0x1af60) = *(int *)(param_1 + 0x1af60) + 1;
  if (param_2 == 0) {
    *(short *)(param_1 + 0x20 + (longlong)param_3 * 4) =
         *(short *)(param_1 + 0x20 + (longlong)param_3 * 4) + 1;
    goto LAB_140007a68;
  }
  iVar2 = param_2 + -1;
  local_res10 = (ushort)iVar2;
  if ((local_res10 < 0x7efa) && (local_res18 = (ushort)param_3, local_res18 < 0x100)) {
    if (iVar2 < 0x100) {
      local_1c = *(byte *)(param_1 + 0x1c71 + (longlong)iVar2);
    }
    else {
      local_1c = *(byte *)(param_1 + 0x1c71 + (longlong)((iVar2 >> 7) + 0x100));
    }
    if (0x1d < local_1c) goto LAB_14000793b;
    local_1b = '\x01';
  }
  else {
LAB_14000793b:
    local_1b = '\0';
  }
  FUN_140005a80(param_1,local_1b,"ct_tally: bad match");
  *(short *)(param_1 + 0x20 +
            (longlong)(int)(*(byte *)(param_1 + 0x1b71 + (longlong)param_3) + 0x101) * 4) =
       *(short *)(param_1 + 0x20 +
                 (longlong)(int)(*(byte *)(param_1 + 0x1b71 + (longlong)param_3) + 0x101) * 4) + 1;
  if (iVar2 < 0x100) {
    local_1a = *(byte *)(param_1 + 0x1c71 + (longlong)iVar2);
  }
  else {
    local_1a = *(byte *)(param_1 + 0x1c71 + (longlong)((iVar2 >> 7) + 0x100));
  }
  *(short *)(param_1 + 0x914 + (ulonglong)local_1a * 4) =
       *(short *)(param_1 + 0x914 + (ulonglong)local_1a * 4) + 1;
  *(ushort *)(param_1 + 0x9f60 + (ulonglong)*(uint *)(param_1 + 0x1af64) * 2) = local_res10;
  *(int *)(param_1 + 0x1af64) = *(int *)(param_1 + 0x1af64) + 1;
  *(byte *)(param_1 + 0x1af6c) = *(byte *)(param_1 + 0x1af6c) | *(byte *)(param_1 + 0x1af6d);
LAB_140007a68:
  *(char *)(param_1 + 0x1af6d) = *(char *)(param_1 + 0x1af6d) << 1;
  if ((*(uint *)(param_1 + 0x1af60) & 7) == 0) {
    *(undefined1 *)(param_1 + 0x19f60 + (ulonglong)*(uint *)(param_1 + 0x1af68)) =
         *(undefined1 *)(param_1 + 0x1af6c);
    *(int *)(param_1 + 0x1af68) = *(int *)(param_1 + 0x1af68) + 1;
    *(undefined1 *)(param_1 + 0x1af6c) = 0;
    *(undefined1 *)(param_1 + 0x1af6d) = 1;
  }
  if ((2 < *(int *)(param_1 + 8)) && ((*(uint *)(param_1 + 0x1af60) & 0xfff) == 0)) {
    local_24 = *(int *)(param_1 + 0x1af60) << 3;
    iVar2 = *(int *)(param_1 + 0x6afbc);
    iVar1 = *(int *)(param_1 + 0x6afcc);
    for (local_28 = 0; local_28 < 0x1e; local_28 = local_28 + 1) {
      local_24 = local_24 +
                 (uint)*(ushort *)(param_1 + 0x914 + (longlong)local_28 * 4) *
                 (*(int *)(&DAT_140010660 + (longlong)local_28 * 4) + 5);
    }
    FUN_140005ab0();
    if ((*(uint *)(param_1 + 0x1af64) < *(uint *)(param_1 + 0x1af60) / 2) &&
       (local_24 >> 3 < (uint)(iVar1 - iVar2) / 2)) {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x1af60) == 0x7fff) || (*(int *)(param_1 + 0x1af64) == 0x8000)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}




void FUN_140007c60(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint local_34;
  uint local_2c;
  byte local_20;
  uint local_1c;
  byte local_18;
  
  local_2c = 0;
  local_1c = 0;
  local_34 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x35ec) != 0) {
    do {
      if ((local_2c & 7) == 0) {
        local_20 = *(byte *)((longlong)param_1 + (ulonglong)local_34 + 0x19f60);
        local_34 = local_34 + 1;
      }
      uVar2 = (uint)*(byte *)((longlong)param_1 + (ulonglong)local_2c + 0x1f60);
      local_2c = local_2c + 1;
      if ((local_20 & 1) == 0) {
        FUN_140008070(param_1,(uint)*(ushort *)(param_2 + (longlong)(int)uVar2 * 4),
                      (uint)*(ushort *)(param_2 + 2 + (longlong)(int)uVar2 * 4));
      }
      else {
        uVar3 = (uint)*(byte *)((longlong)param_1 + (longlong)(int)uVar2 + 0x1b71);
        FUN_140008070(param_1,(uint)*(ushort *)(param_2 + (ulonglong)(uVar3 + 0x101) * 4),
                      (uint)*(ushort *)(param_2 + 2 + (ulonglong)(uVar3 + 0x101) * 4));
        if (*(int *)(&DAT_1400105e0 + (ulonglong)uVar3 * 4) != 0) {
          FUN_140008070(param_1,uVar2 - *(int *)((longlong)param_1 + (ulonglong)uVar3 * 4 + 0x1e74),
                        *(int *)(&DAT_1400105e0 + (ulonglong)uVar3 * 4));
        }
        uVar1 = *(ushort *)((longlong)param_1 + (ulonglong)local_1c * 2 + 0x9f60);
        uVar2 = (uint)uVar1;
        local_1c = local_1c + 1;
        if (uVar2 < 0x100) {
          local_18 = *(byte *)((longlong)param_1 + (ulonglong)uVar2 + 0x1c71);
        }
        else {
          local_18 = *(byte *)((longlong)param_1 + (ulonglong)((uVar1 >> 7) + 0x100) + 0x1c71);
        }
        uVar3 = (uint)local_18;
        FUN_140005a80((longlong)param_1,uVar3 < 0x1e,"bad d_code");
        FUN_140008070(param_1,(uint)*(ushort *)(param_3 + (ulonglong)uVar3 * 4),
                      (uint)*(ushort *)(param_3 + 2 + (ulonglong)uVar3 * 4));
        if (*(int *)(&DAT_140010660 + (ulonglong)uVar3 * 4) != 0) {
          FUN_140008070(param_1,uVar2 - *(int *)((longlong)param_1 + (ulonglong)uVar3 * 4 + 0x1ee8),
                        *(int *)(&DAT_140010660 + (ulonglong)uVar3 * 4));
        }
      }
      local_20 = local_20 >> 1;
    } while (local_2c < *(uint *)(param_1 + 0x35ec));
  }
  FUN_140008070(param_1,(uint)*(ushort *)(param_2 + 0x400),(uint)*(ushort *)(param_2 + 0x402));
  return;
}




void FUN_140007f10(longlong param_1)

{
  int local_18;
  uint local_14;
  uint local_10;
  ushort local_c;
  
  local_10 = 0;
  local_14 = 0;
  for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
    local_14 = local_14 + *(ushort *)(param_1 + 0x20 + (longlong)local_18 * 4);
  }
  for (; local_18 < 0x80; local_18 = local_18 + 1) {
    local_10 = local_10 + *(ushort *)(param_1 + 0x20 + (longlong)local_18 * 4);
  }
  for (; local_18 < 0x100; local_18 = local_18 + 1) {
    local_14 = local_14 + *(ushort *)(param_1 + 0x20 + (longlong)local_18 * 4);
  }
  local_c = (ushort)(local_14 <= local_10 >> 2);
  **(ushort **)(param_1 + 0x1af88) = local_c;
  return;
}




void FUN_140007ff0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x1afa0) = param_2;
  *(undefined4 *)(param_1 + 0x1afac) = param_3;
  *(undefined4 *)(param_1 + 0x1afa8) = 0;
  *(undefined4 *)(param_1 + 0x1af90) = param_4;
  *(undefined4 *)(param_1 + 0x1af94) = 0;
  *(undefined4 *)(param_1 + 0x1af98) = 0;
  *(undefined4 *)(param_1 + 0x1afb0) = 0;
  return;
}




void FUN_140008070(undefined8 *param_1,uint param_2,int param_3)

{
  char local_18;
  
  if ((param_3 < 1) || (0xf < param_3)) {
    local_18 = '\0';
  }
  else {
    local_18 = '\x01';
  }
  FUN_140005a80((longlong)param_1,local_18,"invalid length");
  *(int *)(param_1 + 0x35f6) = *(int *)(param_1 + 0x35f6) + param_3;
  *(uint *)((longlong)param_1 + 0x1af94) =
       *(uint *)((longlong)param_1 + 0x1af94) |
       param_2 << ((byte)*(undefined4 *)(param_1 + 0x35f3) & 0x1f);
  *(int *)(param_1 + 0x35f3) = *(int *)(param_1 + 0x35f3) + param_3;
  if (0x10 < *(int *)(param_1 + 0x35f3)) {
    if (*(int *)((longlong)param_1 + 0x1afac) - 1U <= *(uint *)(param_1 + 0x35f5)) {
      (*(code *)param_1[3])(*param_1,param_1[0x35f4],param_1 + 0x35f5);
    }
    *(char *)((ulonglong)*(uint *)(param_1 + 0x35f5) + param_1[0x35f4]) =
         (char)*(undefined4 *)((longlong)param_1 + 0x1af94);
    *(int *)(param_1 + 0x35f5) = *(int *)(param_1 + 0x35f5) + 1;
    *(char *)((ulonglong)*(uint *)(param_1 + 0x35f5) + param_1[0x35f4]) =
         (char)((ushort)*(undefined2 *)((longlong)param_1 + 0x1af94) >> 8);
    *(int *)(param_1 + 0x35f5) = *(int *)(param_1 + 0x35f5) + 1;
    *(int *)(param_1 + 0x35f3) = *(int *)(param_1 + 0x35f3) + -0x10;
    *(uint *)((longlong)param_1 + 0x1af94) =
         param_2 >> ((char)param_3 - (char)*(undefined4 *)(param_1 + 0x35f3) & 0x1fU);
  }
  return;
}




uint FUN_140008240(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_res8;
  undefined4 local_res10;
  undefined4 local_18;
  
  local_18 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  uVar1 = local_18;
  do {
    local_18 = uVar1;
    uVar2 = local_res8 & 1;
    local_res8 = local_res8 >> 1;
    local_res10 = local_res10 + -1;
    uVar1 = (local_18 | uVar2) << 1;
  } while (0 < local_res10);
  return local_18 & 0x7fffffff | uVar2;
}




void FUN_140008290(undefined8 *param_1)

{
  if (*(int *)(param_1 + 0x35f3) < 9) {
    if (0 < *(int *)(param_1 + 0x35f3)) {
      if (*(uint *)((longlong)param_1 + 0x1afac) <= *(uint *)(param_1 + 0x35f5)) {
        (*(code *)param_1[3])(*param_1,param_1[0x35f4],param_1 + 0x35f5);
      }
      *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x35f5) + param_1[0x35f4]) =
           *(undefined1 *)((longlong)param_1 + 0x1af94);
      *(int *)(param_1 + 0x35f5) = *(int *)(param_1 + 0x35f5) + 1;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x1afac) - 1U <= *(uint *)(param_1 + 0x35f5)) {
      (*(code *)param_1[3])(*param_1,param_1[0x35f4],param_1 + 0x35f5);
    }
    *(char *)((ulonglong)*(uint *)(param_1 + 0x35f5) + param_1[0x35f4]) =
         (char)*(undefined4 *)((longlong)param_1 + 0x1af94);
    *(int *)(param_1 + 0x35f5) = *(int *)(param_1 + 0x35f5) + 1;
    *(char *)((ulonglong)*(uint *)(param_1 + 0x35f5) + param_1[0x35f4]) =
         (char)((ushort)*(undefined2 *)((longlong)param_1 + 0x1af94) >> 8);
    *(int *)(param_1 + 0x35f5) = *(int *)(param_1 + 0x35f5) + 1;
  }
  if (*(int *)(param_1 + 0x35f2) != 0) {
    (*(code *)param_1[3])(*param_1,param_1[0x35f4],param_1 + 0x35f5);
  }
  *(undefined4 *)((longlong)param_1 + 0x1af94) = 0;
  *(undefined4 *)(param_1 + 0x35f3) = 0;
  *(uint *)(param_1 + 0x35f6) = *(int *)(param_1 + 0x35f6) + 7U & 0xfffffff8;
  return;
}




void FUN_140008480(undefined8 *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  byte bVar2;
  undefined1 *puVar3;
  
  FUN_140008290(param_1);
  if (param_4 != 0) {
    if (*(int *)((longlong)param_1 + 0x1afac) - 1U <= *(uint *)(param_1 + 0x35f5)) {
      (*(code *)param_1[3])(*param_1,param_1[0x35f4],param_1 + 0x35f5);
    }
    *(byte *)((ulonglong)*(uint *)(param_1 + 0x35f5) + param_1[0x35f4]) = (byte)param_3;
    *(int *)(param_1 + 0x35f5) = *(int *)(param_1 + 0x35f5) + 1;
    bVar2 = (byte)(param_3 >> 8);
    *(byte *)((ulonglong)*(uint *)(param_1 + 0x35f5) + param_1[0x35f4]) = bVar2;
    *(int *)(param_1 + 0x35f5) = *(int *)(param_1 + 0x35f5) + 1;
    if (*(int *)((longlong)param_1 + 0x1afac) - 1U <= *(uint *)(param_1 + 0x35f5)) {
      (*(code *)param_1[3])(*param_1,param_1[0x35f4],param_1 + 0x35f5);
    }
    *(byte *)((ulonglong)*(uint *)(param_1 + 0x35f5) + param_1[0x35f4]) = ~(byte)param_3;
    *(int *)(param_1 + 0x35f5) = *(int *)(param_1 + 0x35f5) + 1;
    *(byte *)((ulonglong)*(uint *)(param_1 + 0x35f5) + param_1[0x35f4]) = ~bVar2;
    *(int *)(param_1 + 0x35f5) = *(int *)(param_1 + 0x35f5) + 1;
    *(int *)(param_1 + 0x35f6) = *(int *)(param_1 + 0x35f6) + 0x20;
  }
  if (*(int *)(param_1 + 0x35f2) == 0) {
    if (*(uint *)((longlong)param_1 + 0x1afac) < *(int *)(param_1 + 0x35f5) + param_3) {
      FUN_140005a80((longlong)param_1,'\0',"output buffer too small for in-memory compression");
    }
    else {
      puVar3 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x35f5) + param_1[0x35f4]);
      for (uVar1 = (ulonglong)param_3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(uint *)(param_1 + 0x35f5) = *(int *)(param_1 + 0x35f5) + param_3;
    }
  }
  else {
    (*(code *)param_1[3])(*param_1,param_1[0x35f4],param_1 + 0x35f5);
    *(uint *)(param_1 + 0x35f5) = param_3;
    (*(code *)param_1[3])(*param_1,param_2,param_1 + 0x35f5);
  }
  *(uint *)(param_1 + 0x35f6) = *(int *)(param_1 + 0x35f6) + param_3 * 8;
  return;
}




void FUN_140008750(longlong param_1,int param_2,ushort *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint local_18;
  char local_14;
  
  if ((param_2 < 1) || (8 < param_2)) {
    local_14 = '\0';
  }
  else {
    local_14 = '\x01';
  }
  FUN_140005a80(param_1,local_14,"bad pack level");
  *(undefined4 *)(param_1 + 0x6afc0) = 0;
  if (*(int *)(param_1 + 0x6afb8) == 0) {
    *(undefined4 *)(param_1 + 0x6afc0) = 1;
    *(undefined4 *)(param_1 + 0x6afb8) = 0x10000;
  }
  *(undefined4 *)(param_1 + 0x6afb4) = 0;
  puVar3 = (undefined1 *)(param_1 + 0x4afb8);
  for (lVar2 = 0x1fffc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(uint *)(param_1 + 0x6afe0) = (uint)*(ushort *)(&DAT_140010742 + (longlong)param_2 * 8);
  *(uint *)(param_1 + 0x6afe4) = (uint)*(ushort *)(&DAT_140010740 + (longlong)param_2 * 8);
  *(uint *)(param_1 + 0x6afe8) = (uint)*(ushort *)(&DAT_140010744 + (longlong)param_2 * 8);
  *(uint *)(param_1 + 0x6afdc) = (uint)*(ushort *)(&DAT_140010746 + (longlong)param_2 * 8);
  if (param_2 < 3) {
    *param_3 = *param_3 | 4;
  }
  else if (7 < param_2) {
    *param_3 = *param_3 | 2;
  }
  *(undefined4 *)(param_1 + 0x6afcc) = 0;
  *(undefined4 *)(param_1 + 0x6afbc) = 0;
  uVar1 = (**(code **)(param_1 + 0x10))(param_1,param_1 + 0x1afb8,0x10000);
  *(undefined4 *)(param_1 + 0x6afd8) = uVar1;
  if ((*(int *)(param_1 + 0x6afd8) == 0) || (*(int *)(param_1 + 0x6afd8) == -1)) {
    *(undefined4 *)(param_1 + 0x6afd4) = 1;
    *(undefined4 *)(param_1 + 0x6afd8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x6afd4) = 0;
    if (*(uint *)(param_1 + 0x6afd8) < 0x106) {
      FUN_140008ea0(param_1);
    }
    *(undefined4 *)(param_1 + 0x6afc4) = 0;
    for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
      *(uint *)(param_1 + 0x6afc4) =
           (*(int *)(param_1 + 0x6afc4) << 5 ^
           (uint)*(byte *)(param_1 + 0x1afb8 + (ulonglong)local_18)) & 0x7fff;
    }
  }
  return;
}




int FUN_1400089d0(longlong param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint local_res10;
  int local_48;
  uint local_44;
  char local_40;
  char local_3f;
  char *local_38;
  char *local_28;
  uint local_1c;
  
  local_44 = *(uint *)(param_1 + 0x6afdc);
  local_38 = (char *)(param_1 + 0x1afb8 + (ulonglong)*(uint *)(param_1 + 0x6afcc));
  local_48 = *(int *)(param_1 + 0x6afc8);
  if (*(uint *)(param_1 + 0x6afcc) < 0x7efb) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(param_1 + 0x6afcc) - 0x7efa;
  }
  FUN_140005a80(param_1,'\x01',"Code too clever");
  pcVar1 = (char *)(param_1 + 0x1b0ba + (ulonglong)*(uint *)(param_1 + 0x6afcc));
  local_40 = local_38[local_48 + -1];
  local_3f = local_38[local_48];
  if (*(uint *)(param_1 + 0x6afe4) <= *(uint *)(param_1 + 0x6afc8)) {
    local_44 = local_44 >> 2;
  }
  FUN_140005a80(param_1,*(uint *)(param_1 + 0x6afcc) <= *(int *)(param_1 + 0x6afb8) - 0x106U,
                "insufficient lookahead");
  local_res10 = param_2;
  do {
    FUN_140005a80(param_1,local_res10 < *(uint *)(param_1 + 0x6afcc),"no future");
    local_28 = (char *)(param_1 + 0x1afb8 + (ulonglong)local_res10);
    if ((((local_28[local_48] == local_3f) && (local_28[local_48 + -1] == local_40)) &&
        (*local_28 == *local_38)) && (local_28[1] == local_38[1])) {
      local_38 = local_38 + 2;
      local_28 = local_28 + 2;
      while (((((pcVar3 = local_38 + 1, local_38[1] == local_28[1] &&
                (pcVar3 = local_38 + 2, local_38[2] == local_28[2])) &&
               ((pcVar3 = local_38 + 3, local_38[3] == local_28[3] &&
                ((pcVar3 = local_38 + 4, local_38[4] == local_28[4] &&
                 (pcVar3 = local_38 + 5, local_38[5] == local_28[5])))))) &&
              (pcVar3 = local_38 + 6, local_38[6] == local_28[6])) &&
             (pcVar3 = local_38 + 7, local_38[7] == local_28[7]))) {
        local_38 = local_38 + 8;
        local_28 = local_28 + 8;
        pcVar3 = local_38;
        if ((*local_38 != *local_28) || (pcVar1 <= local_38)) break;
      }
      local_38 = pcVar3;
      FUN_140005a80(param_1,local_38 <=
                            (char *)(param_1 + 0x1afb8 +
                                    (ulonglong)(*(int *)(param_1 + 0x6afb8) - 1)),"wild scan");
      iVar2 = -((int)pcVar1 - (int)local_38);
      iVar4 = iVar2 + 0x102;
      local_38 = pcVar1 + -0x102;
      if (local_48 < iVar4) {
        *(uint *)(param_1 + 0x6afd0) = local_res10;
        if (*(int *)(param_1 + 0x6afe8) <= iVar4) {
          return iVar4;
        }
        local_40 = local_38[iVar2 + 0x101];
        local_3f = local_38[iVar4];
        local_48 = iVar4;
      }
    }
    local_res10 = *(uint *)(param_1 + 0x2afb8 + (ulonglong)(local_res10 & 0x7fff) * 4);
    if (local_res10 <= local_1c) {
      return local_48;
    }
    local_44 = local_44 - 1;
    if (local_44 == 0) {
      return local_48;
    }
  } while( true );
}




void FUN_140008ea0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint local_38;
  uint local_34;
  int local_2c;
  int local_28;
  
  while( true ) {
    local_34 = (*(int *)(param_1 + 0x6afb8) - *(int *)(param_1 + 0x6afd8)) -
               *(int *)(param_1 + 0x6afcc);
    if (local_34 == 0xffffffff) {
      local_34 = 0xfffffffe;
    }
    else if ((0xfef9 < *(uint *)(param_1 + 0x6afcc)) && (*(int *)(param_1 + 0x6afc0) != 0)) {
      puVar4 = (undefined1 *)(param_1 + 0x22fb8);
      puVar5 = (undefined1 *)(param_1 + 0x1afb8);
      for (lVar3 = 0x8000; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(int *)(param_1 + 0x6afd0) = *(int *)(param_1 + 0x6afd0) + -0x8000;
      *(int *)(param_1 + 0x6afcc) = *(int *)(param_1 + 0x6afcc) + -0x8000;
      *(int *)(param_1 + 0x6afbc) = *(int *)(param_1 + 0x6afbc) + -0x8000;
      for (local_38 = 0; local_38 < 0x8000; local_38 = local_38 + 1) {
        uVar1 = *(uint *)(param_1 + 0x4afb8 + (ulonglong)local_38 * 4);
        if (uVar1 < 0x8000) {
          local_2c = 0;
        }
        else {
          local_2c = uVar1 - 0x8000;
        }
        *(int *)(param_1 + 0x4afb8 + (ulonglong)local_38 * 4) = local_2c;
      }
      for (local_38 = 0; local_38 < 0x8000; local_38 = local_38 + 1) {
        uVar1 = *(uint *)(param_1 + 0x2afb8 + (ulonglong)local_38 * 4);
        if (uVar1 < 0x8000) {
          local_28 = 0;
        }
        else {
          local_28 = uVar1 - 0x8000;
        }
        *(int *)(param_1 + 0x2afb8 + (ulonglong)local_38 * 4) = local_28;
      }
      local_34 = local_34 + 0x8000;
    }
    if (*(int *)(param_1 + 0x6afd4) != 0) break;
    FUN_140005a80(param_1,1 < local_34,"more < 2");
    iVar2 = (**(code **)(param_1 + 0x10))
                      (param_1,param_1 + 0x1afb8 + (ulonglong)*(uint *)(param_1 + 0x6afcc) +
                               (ulonglong)*(uint *)(param_1 + 0x6afd8),local_34);
    if ((iVar2 == 0) || (iVar2 == -1)) {
      *(undefined4 *)(param_1 + 0x6afd4) = 1;
    }
    else {
      *(int *)(param_1 + 0x6afd8) = *(int *)(param_1 + 0x6afd8) + iVar2;
    }
    if (0x105 < *(uint *)(param_1 + 0x6afd8)) {
      return;
    }
    if (*(int *)(param_1 + 0x6afd4) != 0) {
      return;
    }
  }
  return;
}




void FUN_140009140(undefined8 *param_1)

{
  int local_28;
  uint local_24;
  uint local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  local_20 = 0;
  local_24 = 0;
  *(undefined4 *)(param_1 + 0xd5f9) = 2;
  while (*(int *)(param_1 + 0xd5fb) != 0) {
    if (2 < *(uint *)(param_1 + 0xd5fb)) {
      *(uint *)((longlong)param_1 + 0x6afc4) =
           (*(int *)((longlong)param_1 + 0x6afc4) << 5 ^
           (uint)*(byte *)((longlong)param_1 +
                          (ulonglong)(*(int *)((longlong)param_1 + 0x6afcc) + 2) + 0x1afb8)) &
           0x7fff;
      local_20 = *(uint *)((longlong)param_1 +
                          (ulonglong)*(uint *)((longlong)param_1 + 0x6afc4) * 4 + 0x4afb8);
      *(uint *)((longlong)param_1 +
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6afcc) & 0x7fff) * 4 + 0x2afb8) =
           local_20;
      *(undefined4 *)
       ((longlong)param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x6afc4) * 4 + 0x4afb8) =
           *(undefined4 *)((longlong)param_1 + 0x6afcc);
    }
    if ((local_20 != 0) && (*(int *)((longlong)param_1 + 0x6afcc) - local_20 < 0x7efb)) {
      if (*(uint *)(param_1 + 0xd5fb) < *(uint *)(param_1 + 0xd5fd)) {
        *(undefined4 *)(param_1 + 0xd5fd) = *(undefined4 *)(param_1 + 0xd5fb);
      }
      local_24 = FUN_1400089d0((longlong)param_1,local_20);
      if (*(uint *)(param_1 + 0xd5fb) < local_24) {
        local_24 = *(uint *)(param_1 + 0xd5fb);
      }
    }
    if (local_24 < 3) {
      local_28 = FUN_140007850((longlong)param_1,0,
                               (uint)*(byte *)((longlong)param_1 +
                                              (ulonglong)*(uint *)((longlong)param_1 + 0x6afcc) +
                                              0x1afb8));
      *(int *)(param_1 + 0xd5fb) = *(int *)(param_1 + 0xd5fb) + -1;
      *(int *)((longlong)param_1 + 0x6afcc) = *(int *)((longlong)param_1 + 0x6afcc) + 1;
    }
    else {
      local_28 = FUN_140007850((longlong)param_1,
                               *(int *)((longlong)param_1 + 0x6afcc) - *(int *)(param_1 + 0xd5fa),
                               local_24 - 3);
      *(uint *)(param_1 + 0xd5fb) = *(int *)(param_1 + 0xd5fb) - local_24;
      if ((*(uint *)(param_1 + 0xd5fc) < local_24) || (*(uint *)(param_1 + 0xd5fb) < 3)) {
        *(uint *)((longlong)param_1 + 0x6afcc) = *(int *)((longlong)param_1 + 0x6afcc) + local_24;
        *(uint *)((longlong)param_1 + 0x6afc4) =
             (uint)*(byte *)((longlong)param_1 +
                            (ulonglong)*(uint *)((longlong)param_1 + 0x6afcc) + 0x1afb8);
        *(uint *)((longlong)param_1 + 0x6afc4) =
             (*(int *)((longlong)param_1 + 0x6afc4) << 5 ^
             (uint)*(byte *)((longlong)param_1 +
                            (ulonglong)(*(int *)((longlong)param_1 + 0x6afcc) + 1) + 0x1afb8)) &
             0x7fff;
        FUN_140005a80((longlong)param_1,'\x01',"Call UPDATE_HASH() MIN_MATCH-3 more times");
      }
      else {
        local_24 = local_24 - 1;
        do {
          *(int *)((longlong)param_1 + 0x6afcc) = *(int *)((longlong)param_1 + 0x6afcc) + 1;
          *(uint *)((longlong)param_1 + 0x6afc4) =
               (*(int *)((longlong)param_1 + 0x6afc4) << 5 ^
               (uint)*(byte *)((longlong)param_1 +
                              (ulonglong)(*(int *)((longlong)param_1 + 0x6afcc) + 2) + 0x1afb8)) &
               0x7fff;
          local_20 = *(uint *)((longlong)param_1 +
                              (ulonglong)*(uint *)((longlong)param_1 + 0x6afc4) * 4 + 0x4afb8);
          *(uint *)((longlong)param_1 +
                   (ulonglong)(*(uint *)((longlong)param_1 + 0x6afcc) & 0x7fff) * 4 + 0x2afb8) =
               local_20;
          *(undefined4 *)
           ((longlong)param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x6afc4) * 4 + 0x4afb8) =
               *(undefined4 *)((longlong)param_1 + 0x6afcc);
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        *(int *)((longlong)param_1 + 0x6afcc) = *(int *)((longlong)param_1 + 0x6afcc) + 1;
      }
      local_24 = 0;
    }
    if (local_28 != 0) {
      if (*(int *)((longlong)param_1 + 0x6afbc) < 0) {
        local_18 = (undefined1 *)0x0;
      }
      else {
        local_18 = (undefined1 *)
                   ((longlong)param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x6afbc) + 0x1afb8)
        ;
      }
      FUN_140007420(param_1,local_18,
                    *(int *)((longlong)param_1 + 0x6afcc) - *(int *)((longlong)param_1 + 0x6afbc),0)
      ;
      *(undefined4 *)((longlong)param_1 + 0x6afbc) = *(undefined4 *)((longlong)param_1 + 0x6afcc);
    }
    if (*(uint *)(param_1 + 0xd5fb) < 0x106) {
      FUN_140008ea0((longlong)param_1);
    }
  }
  if (*(int *)((longlong)param_1 + 0x6afbc) < 0) {
    local_10 = (undefined1 *)0x0;
  }
  else {
    local_10 = (undefined1 *)
               ((longlong)param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x6afbc) + 0x1afb8);
  }
  FUN_140007420(param_1,local_10,
                *(int *)((longlong)param_1 + 0x6afcc) - *(int *)((longlong)param_1 + 0x6afbc),1);
  return;
}




void FUN_140009620(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint local_30;
  uint local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  local_28 = 0;
  bVar3 = false;
  local_30 = 2;
  if (*(int *)(param_1 + 1) < 4) {
    FUN_140009140(param_1);
  }
  else {
    while (*(int *)(param_1 + 0xd5fb) != 0) {
      if (2 < *(uint *)(param_1 + 0xd5fb)) {
        *(uint *)((longlong)param_1 + 0x6afc4) =
             (*(int *)((longlong)param_1 + 0x6afc4) << 5 ^
             (uint)*(byte *)((longlong)param_1 +
                            (ulonglong)(*(int *)((longlong)param_1 + 0x6afcc) + 2) + 0x1afb8)) &
             0x7fff;
        local_28 = *(uint *)((longlong)param_1 +
                            (ulonglong)*(uint *)((longlong)param_1 + 0x6afc4) * 4 + 0x4afb8);
        *(uint *)((longlong)param_1 +
                 (ulonglong)(*(uint *)((longlong)param_1 + 0x6afcc) & 0x7fff) * 4 + 0x2afb8) =
             local_28;
        *(undefined4 *)
         ((longlong)param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x6afc4) * 4 + 0x4afb8) =
             *(undefined4 *)((longlong)param_1 + 0x6afcc);
      }
      *(uint *)(param_1 + 0xd5f9) = local_30;
      iVar4 = *(int *)(param_1 + 0xd5fa);
      local_30 = 2;
      if (((local_28 != 0) && (*(uint *)(param_1 + 0xd5f9) < *(uint *)(param_1 + 0xd5fc))) &&
         (*(int *)((longlong)param_1 + 0x6afcc) - local_28 < 0x7efb)) {
        if (*(uint *)(param_1 + 0xd5fb) < *(uint *)(param_1 + 0xd5fd)) {
          *(undefined4 *)(param_1 + 0xd5fd) = *(undefined4 *)(param_1 + 0xd5fb);
        }
        local_30 = FUN_1400089d0((longlong)param_1,local_28);
        if (*(uint *)(param_1 + 0xd5fb) < local_30) {
          local_30 = *(uint *)(param_1 + 0xd5fb);
        }
        if ((local_30 == 3) &&
           (0x1000 < (uint)(*(int *)((longlong)param_1 + 0x6afcc) - *(int *)(param_1 + 0xd5fa)))) {
          local_30 = 2;
        }
      }
      if ((*(uint *)(param_1 + 0xd5f9) < 3) || (*(uint *)(param_1 + 0xd5f9) < local_30)) {
        if (bVar3) {
          iVar4 = FUN_140007850((longlong)param_1,0,
                                (uint)*(byte *)((longlong)param_1 +
                                               (ulonglong)
                                               (*(int *)((longlong)param_1 + 0x6afcc) - 1) + 0x1afb8
                                               ));
          if (iVar4 != 0) {
            if (*(int *)((longlong)param_1 + 0x6afbc) < 0) {
              local_18 = (undefined1 *)0x0;
            }
            else {
              local_18 = (undefined1 *)
                         ((longlong)param_1 +
                         (ulonglong)*(uint *)((longlong)param_1 + 0x6afbc) + 0x1afb8);
            }
            FUN_140007420(param_1,local_18,
                          *(int *)((longlong)param_1 + 0x6afcc) -
                          *(int *)((longlong)param_1 + 0x6afbc),0);
            *(undefined4 *)((longlong)param_1 + 0x6afbc) =
                 *(undefined4 *)((longlong)param_1 + 0x6afcc);
          }
          *(int *)((longlong)param_1 + 0x6afcc) = *(int *)((longlong)param_1 + 0x6afcc) + 1;
          *(int *)(param_1 + 0xd5fb) = *(int *)(param_1 + 0xd5fb) + -1;
        }
        else {
          bVar3 = true;
          *(int *)((longlong)param_1 + 0x6afcc) = *(int *)((longlong)param_1 + 0x6afcc) + 1;
          *(int *)(param_1 + 0xd5fb) = *(int *)(param_1 + 0xd5fb) + -1;
        }
      }
      else {
        iVar1 = *(int *)((longlong)param_1 + 0x6afcc);
        iVar2 = *(int *)(param_1 + 0xd5fb);
        iVar4 = FUN_140007850((longlong)param_1,(*(int *)((longlong)param_1 + 0x6afcc) + -1) - iVar4
                              ,*(int *)(param_1 + 0xd5f9) + -3);
        *(int *)(param_1 + 0xd5fb) = *(int *)(param_1 + 0xd5fb) - (*(int *)(param_1 + 0xd5f9) + -1);
        *(int *)(param_1 + 0xd5f9) = *(int *)(param_1 + 0xd5f9) + -2;
        do {
          *(int *)((longlong)param_1 + 0x6afcc) = *(int *)((longlong)param_1 + 0x6afcc) + 1;
          if (*(uint *)((longlong)param_1 + 0x6afcc) <= (uint)(iVar1 + -3 + iVar2)) {
            *(uint *)((longlong)param_1 + 0x6afc4) =
                 (*(int *)((longlong)param_1 + 0x6afc4) << 5 ^
                 (uint)*(byte *)((longlong)param_1 +
                                (ulonglong)(*(int *)((longlong)param_1 + 0x6afcc) + 2) + 0x1afb8)) &
                 0x7fff;
            local_28 = *(uint *)((longlong)param_1 +
                                (ulonglong)*(uint *)((longlong)param_1 + 0x6afc4) * 4 + 0x4afb8);
            *(uint *)((longlong)param_1 +
                     (ulonglong)(*(uint *)((longlong)param_1 + 0x6afcc) & 0x7fff) * 4 + 0x2afb8) =
                 local_28;
            *(undefined4 *)
             ((longlong)param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x6afc4) * 4 + 0x4afb8) =
                 *(undefined4 *)((longlong)param_1 + 0x6afcc);
          }
          *(int *)(param_1 + 0xd5f9) = *(int *)(param_1 + 0xd5f9) + -1;
        } while (*(int *)(param_1 + 0xd5f9) != 0);
        *(int *)((longlong)param_1 + 0x6afcc) = *(int *)((longlong)param_1 + 0x6afcc) + 1;
        bVar3 = false;
        local_30 = 2;
        if (iVar4 != 0) {
          if (*(int *)((longlong)param_1 + 0x6afbc) < 0) {
            local_20 = (undefined1 *)0x0;
          }
          else {
            local_20 = (undefined1 *)
                       ((longlong)param_1 +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x6afbc) + 0x1afb8);
          }
          FUN_140007420(param_1,local_20,
                        *(int *)((longlong)param_1 + 0x6afcc) -
                        *(int *)((longlong)param_1 + 0x6afbc),0);
          *(undefined4 *)((longlong)param_1 + 0x6afbc) =
               *(undefined4 *)((longlong)param_1 + 0x6afcc);
        }
      }
      if (*(uint *)(param_1 + 0xd5fb) < 0x106) {
        FUN_140008ea0((longlong)param_1);
      }
    }
    if (bVar3) {
      FUN_140007850((longlong)param_1,0,
                    (uint)*(byte *)((longlong)param_1 +
                                   (ulonglong)(*(int *)((longlong)param_1 + 0x6afcc) - 1) + 0x1afb8)
                   );
    }
    if (*(int *)((longlong)param_1 + 0x6afbc) < 0) {
      local_10 = (undefined1 *)0x0;
    }
    else {
      local_10 = (undefined1 *)
                 ((longlong)param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x6afbc) + 0x1afb8);
    }
    FUN_140007420(param_1,local_10,
                  *(int *)((longlong)param_1 + 0x6afcc) - *(int *)((longlong)param_1 + 0x6afbc),1);
  }
  return;
}




undefined8 FUN_140009c50(longlong param_1,undefined *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
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
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12 [18];
  
  local_20 = 0x50;
  (*(code *)param_2)(param_3,&local_20,1);
  local_20 = 0x4b;
  (*(code *)param_2)(param_3,&local_20,1);
  local_1f = 3;
  (*(code *)param_2)(param_3,&local_1f,1);
  local_1f = 4;
  (*(code *)param_2)(param_3,&local_1f,1);
  local_1e = (undefined1)*(undefined2 *)(param_1 + 2);
  (*(code *)param_2)(param_3,&local_1e,1);
  local_1e = (undefined1)((ushort)*(undefined2 *)(param_1 + 2) >> 8);
  (*(code *)param_2)(param_3,&local_1e,1);
  local_1d = (undefined1)*(undefined2 *)(param_1 + 0x3c);
  (*(code *)param_2)(param_3,&local_1d,1);
  local_1d = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x3c) >> 8);
  (*(code *)param_2)(param_3,&local_1d,1);
  local_1c = (undefined1)*(undefined2 *)(param_1 + 6);
  (*(code *)param_2)(param_3,&local_1c,1);
  local_1c = (undefined1)((ushort)*(undefined2 *)(param_1 + 6) >> 8);
  (*(code *)param_2)(param_3,&local_1c,1);
  local_1b = (undefined1)*(undefined4 *)(param_1 + 8);
  (*(code *)param_2)(param_3,&local_1b,1);
  local_1b = (undefined1)((uint)*(undefined4 *)(param_1 + 8) >> 8);
  (*(code *)param_2)(param_3,&local_1b,1);
  local_1a = (undefined1)((uint)*(undefined4 *)(param_1 + 8) >> 0x10);
  (*(code *)param_2)(param_3,&local_1a,1);
  local_1a = (undefined1)((uint)*(undefined4 *)(param_1 + 8) >> 0x18);
  (*(code *)param_2)(param_3,&local_1a,1);
  local_19 = (undefined1)*(undefined4 *)(param_1 + 0xc);
  (*(code *)param_2)(param_3,&local_19,1);
  local_19 = (undefined1)((uint)*(undefined4 *)(param_1 + 0xc) >> 8);
  (*(code *)param_2)(param_3,&local_19,1);
  local_18 = (undefined1)((uint)*(undefined4 *)(param_1 + 0xc) >> 0x10);
  (*(code *)param_2)(param_3,&local_18,1);
  local_18 = (undefined1)((uint)*(undefined4 *)(param_1 + 0xc) >> 0x18);
  (*(code *)param_2)(param_3,&local_18,1);
  local_17 = (undefined1)*(undefined4 *)(param_1 + 0x10);
  (*(code *)param_2)(param_3,&local_17,1);
  local_17 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x10) >> 8);
  (*(code *)param_2)(param_3,&local_17,1);
  local_16 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10);
  (*(code *)param_2)(param_3,&local_16,1);
  local_16 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x18);
  (*(code *)param_2)(param_3,&local_16,1);
  local_15 = (undefined1)*(undefined4 *)(param_1 + 0x14);
  (*(code *)param_2)(param_3,&local_15,1);
  local_15 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x14) >> 8);
  (*(code *)param_2)(param_3,&local_15,1);
  local_14 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10);
  (*(code *)param_2)(param_3,&local_14,1);
  local_14 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x18);
  (*(code *)param_2)(param_3,&local_14,1);
  local_13 = (undefined1)*(undefined8 *)(param_1 + 0x18);
  (*(code *)param_2)(param_3,&local_13,1);
  local_13 = (undefined1)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 8);
  (*(code *)param_2)(param_3,&local_13,1);
  local_12[0] = (undefined1)*(undefined8 *)(param_1 + 0x20);
  (*(code *)param_2)(param_3,local_12,1);
  local_12[0] = (undefined1)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 8);
  (*(code *)param_2)(param_3,local_12,1);
  uVar1 = (*(code *)param_2)(param_3,param_1 + 0x168,*(undefined4 *)(param_1 + 0x18));
  if ((ulonglong)uVar1 == *(ulonglong *)(param_1 + 0x18)) {
    if ((*(longlong *)(param_1 + 0x20) != 0) &&
       (uVar1 = (*(code *)param_2)(param_3,*(undefined8 *)(param_1 + 0x150),
                                   *(undefined4 *)(param_1 + 0x20)),
       (ulonglong)uVar1 != *(ulonglong *)(param_1 + 0x20))) {
      return 10;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 10;
  }
  return uVar2;
}




undefined8 FUN_14000a160(longlong param_1,undefined *param_2,undefined8 param_3)

{
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11 [17];
  
  local_18 = 0x50;
  (*(code *)param_2)(param_3,&local_18,1);
  local_18 = 0x4b;
  (*(code *)param_2)(param_3,&local_18,1);
  local_17 = 7;
  (*(code *)param_2)(param_3,&local_17,1);
  local_17 = 8;
  (*(code *)param_2)(param_3,&local_17,1);
  local_16 = (undefined1)*(undefined4 *)(param_1 + 0xc);
  (*(code *)param_2)(param_3,&local_16,1);
  local_16 = (undefined1)((uint)*(undefined4 *)(param_1 + 0xc) >> 8);
  (*(code *)param_2)(param_3,&local_16,1);
  local_15 = (undefined1)((uint)*(undefined4 *)(param_1 + 0xc) >> 0x10);
  (*(code *)param_2)(param_3,&local_15,1);
  local_15 = (undefined1)((uint)*(undefined4 *)(param_1 + 0xc) >> 0x18);
  (*(code *)param_2)(param_3,&local_15,1);
  local_14 = (undefined1)*(undefined4 *)(param_1 + 0x10);
  (*(code *)param_2)(param_3,&local_14,1);
  local_14 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x10) >> 8);
  (*(code *)param_2)(param_3,&local_14,1);
  local_13 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10);
  (*(code *)param_2)(param_3,&local_13,1);
  local_13 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x18);
  (*(code *)param_2)(param_3,&local_13,1);
  local_12 = (undefined1)*(undefined4 *)(param_1 + 0x14);
  (*(code *)param_2)(param_3,&local_12,1);
  local_12 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x14) >> 8);
  (*(code *)param_2)(param_3,&local_12,1);
  local_11[0] = (undefined1)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10);
  (*(code *)param_2)(param_3,local_11,1);
  local_11[0] = (undefined1)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x18);
  (*(code *)param_2)(param_3,local_11,1);
  return 0;
}




undefined8 FUN_14000a3d0(undefined2 *param_1,undefined *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
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
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12 [18];
  
  local_28 = 0x50;
  (*(code *)param_2)(param_3,&local_28,1);
  local_28 = 0x4b;
  (*(code *)param_2)(param_3,&local_28,1);
  local_27 = 1;
  (*(code *)param_2)(param_3,&local_27,1);
  local_27 = 2;
  (*(code *)param_2)(param_3,&local_27,1);
  local_26 = (undefined1)*param_1;
  (*(code *)param_2)(param_3,&local_26,1);
  local_26 = (undefined1)((ushort)*param_1 >> 8);
  (*(code *)param_2)(param_3,&local_26,1);
  local_25 = (undefined1)param_1[1];
  (*(code *)param_2)(param_3,&local_25,1);
  local_25 = (undefined1)((ushort)param_1[1] >> 8);
  (*(code *)param_2)(param_3,&local_25,1);
  local_24 = (undefined1)param_1[2];
  (*(code *)param_2)(param_3,&local_24,1);
  local_24 = (undefined1)((ushort)param_1[2] >> 8);
  (*(code *)param_2)(param_3,&local_24,1);
  local_23 = (undefined1)param_1[3];
  (*(code *)param_2)(param_3,&local_23,1);
  local_23 = (undefined1)((ushort)param_1[3] >> 8);
  (*(code *)param_2)(param_3,&local_23,1);
  local_22 = (undefined1)*(undefined4 *)(param_1 + 4);
  (*(code *)param_2)(param_3,&local_22,1);
  local_22 = (undefined1)((uint)*(undefined4 *)(param_1 + 4) >> 8);
  (*(code *)param_2)(param_3,&local_22,1);
  local_21 = (undefined1)((uint)*(undefined4 *)(param_1 + 4) >> 0x10);
  (*(code *)param_2)(param_3,&local_21,1);
  local_21 = (undefined1)((uint)*(undefined4 *)(param_1 + 4) >> 0x18);
  (*(code *)param_2)(param_3,&local_21,1);
  local_20 = (undefined1)*(undefined4 *)(param_1 + 6);
  (*(code *)param_2)(param_3,&local_20,1);
  local_20 = (undefined1)((uint)*(undefined4 *)(param_1 + 6) >> 8);
  (*(code *)param_2)(param_3,&local_20,1);
  local_1f = (undefined1)((uint)*(undefined4 *)(param_1 + 6) >> 0x10);
  (*(code *)param_2)(param_3,&local_1f,1);
  local_1f = (undefined1)((uint)*(undefined4 *)(param_1 + 6) >> 0x18);
  (*(code *)param_2)(param_3,&local_1f,1);
  local_1e = (undefined1)*(undefined4 *)(param_1 + 8);
  (*(code *)param_2)(param_3,&local_1e,1);
  local_1e = (undefined1)((uint)*(undefined4 *)(param_1 + 8) >> 8);
  (*(code *)param_2)(param_3,&local_1e,1);
  local_1d = (undefined1)((uint)*(undefined4 *)(param_1 + 8) >> 0x10);
  (*(code *)param_2)(param_3,&local_1d,1);
  local_1d = (undefined1)((uint)*(undefined4 *)(param_1 + 8) >> 0x18);
  (*(code *)param_2)(param_3,&local_1d,1);
  local_1c = (undefined1)*(undefined4 *)(param_1 + 10);
  (*(code *)param_2)(param_3,&local_1c,1);
  local_1c = (undefined1)((uint)*(undefined4 *)(param_1 + 10) >> 8);
  (*(code *)param_2)(param_3,&local_1c,1);
  local_1b = (undefined1)((uint)*(undefined4 *)(param_1 + 10) >> 0x10);
  (*(code *)param_2)(param_3,&local_1b,1);
  local_1b = (undefined1)((uint)*(undefined4 *)(param_1 + 10) >> 0x18);
  (*(code *)param_2)(param_3,&local_1b,1);
  local_1a = (undefined1)*(undefined8 *)(param_1 + 0xc);
  (*(code *)param_2)(param_3,&local_1a,1);
  local_1a = (undefined1)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 8);
  (*(code *)param_2)(param_3,&local_1a,1);
  local_19 = (undefined1)*(undefined8 *)(param_1 + 0x14);
  (*(code *)param_2)(param_3,&local_19,1);
  local_19 = (undefined1)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 8);
  (*(code *)param_2)(param_3,&local_19,1);
  local_18 = (undefined1)*(undefined8 *)(param_1 + 0x18);
  (*(code *)param_2)(param_3,&local_18,1);
  local_18 = (undefined1)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 8);
  (*(code *)param_2)(param_3,&local_18,1);
  local_17 = (undefined1)param_1[0x1c];
  (*(code *)param_2)(param_3,&local_17,1);
  local_17 = (undefined1)((ushort)param_1[0x1c] >> 8);
  (*(code *)param_2)(param_3,&local_17,1);
  local_16 = (undefined1)param_1[0x1d];
  (*(code *)param_2)(param_3,&local_16,1);
  local_16 = (undefined1)((ushort)param_1[0x1d] >> 8);
  (*(code *)param_2)(param_3,&local_16,1);
  local_15 = (undefined1)*(undefined4 *)(param_1 + 0x20);
  (*(code *)param_2)(param_3,&local_15,1);
  local_15 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x20) >> 8);
  (*(code *)param_2)(param_3,&local_15,1);
  local_14 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
  (*(code *)param_2)(param_3,&local_14,1);
  local_14 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x18);
  (*(code *)param_2)(param_3,&local_14,1);
  local_13 = (undefined1)*(undefined4 *)(param_1 + 0x22);
  (*(code *)param_2)(param_3,&local_13,1);
  local_13 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x22) >> 8);
  (*(code *)param_2)(param_3,&local_13,1);
  local_12[0] = (undefined1)((uint)*(undefined4 *)(param_1 + 0x22) >> 0x10);
  (*(code *)param_2)(param_3,local_12,1);
  local_12[0] = (undefined1)((uint)*(undefined4 *)(param_1 + 0x22) >> 0x18);
  (*(code *)param_2)(param_3,local_12,1);
  uVar1 = (*(code *)param_2)(param_3,param_1 + 0xb4,*(undefined4 *)(param_1 + 0xc));
  if ((ulonglong)uVar1 == *(ulonglong *)(param_1 + 0xc)) {
    if (*(longlong *)(param_1 + 0x14) != 0) {
      uVar1 = (*(code *)param_2)(param_3,*(undefined8 *)(param_1 + 0xac),
                                 *(undefined4 *)(param_1 + 0x14));
      if ((ulonglong)uVar1 != *(ulonglong *)(param_1 + 0x14)) goto LAB_14000ab50;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar1 = (*(code *)param_2)(param_3,*(undefined8 *)(param_1 + 0xb0),
                                 *(undefined4 *)(param_1 + 0x18));
      if ((ulonglong)uVar1 != *(ulonglong *)(param_1 + 0x18)) goto LAB_14000ab50;
    }
    uVar2 = 0;
  }
  else {
LAB_14000ab50:
    uVar2 = 10;
  }
  return uVar2;
}




undefined8
FUN_14000ab60(undefined4 param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e [14];
  
  local_18 = 0x50;
  (*(code *)param_6)(param_7,&local_18,1);
  local_18 = 0x4b;
  (*(code *)param_6)(param_7,&local_18,1);
  local_17 = 5;
  (*(code *)param_6)(param_7,&local_17,1);
  local_17 = 6;
  (*(code *)param_6)(param_7,&local_17,1);
  local_16 = 0;
  (*(code *)param_6)(param_7,&local_16,1);
  local_16 = 0;
  (*(code *)param_6)(param_7,&local_16,1);
  local_15 = 0;
  (*(code *)param_6)(param_7,&local_15,1);
  local_15 = 0;
  (*(code *)param_6)(param_7,&local_15,1);
  local_14 = (char)param_1;
  (*(code *)param_6)(param_7,&local_14,1);
  uVar1 = (undefined1)((uint)param_1 >> 8);
  local_14 = uVar1;
  (*(code *)param_6)(param_7,&local_14,1);
  local_13 = (char)param_1;
  (*(code *)param_6)(param_7,&local_13,1);
  local_13 = uVar1;
  (*(code *)param_6)(param_7,&local_13,1);
  local_12 = (undefined1)param_2;
  (*(code *)param_6)(param_7,&local_12,1);
  local_12 = (undefined1)((uint)param_2 >> 8);
  (*(code *)param_6)(param_7,&local_12,1);
  local_11 = (undefined1)((uint)param_2 >> 0x10);
  (*(code *)param_6)(param_7,&local_11,1);
  local_11 = (undefined1)((uint)param_2 >> 0x18);
  (*(code *)param_6)(param_7,&local_11,1);
  local_10 = (undefined1)param_3;
  (*(code *)param_6)(param_7,&local_10,1);
  local_10 = (undefined1)((uint)param_3 >> 8);
  (*(code *)param_6)(param_7,&local_10,1);
  local_f = (undefined1)((uint)param_3 >> 0x10);
  (*(code *)param_6)(param_7,&local_f,1);
  local_f = (undefined1)((uint)param_3 >> 0x18);
  (*(code *)param_6)(param_7,&local_f,1);
  local_e[0] = (undefined1)param_4;
  (*(code *)param_6)(param_7,local_e,1);
  local_e[0] = (undefined1)(param_4 >> 8);
  (*(code *)param_6)(param_7,local_e,1);
  if ((param_4 != 0) &&
     (uVar2 = (*(code *)param_6)(param_7,param_5,param_4 & 0xffffffff), uVar2 != param_4)) {
    return 10;
  }
  return 0;
}




uint FUN_14000ae60(uint param_1,byte *param_2,ulonglong param_3)

{
  uint uVar1;
  uint local_res8;
  byte *local_res10;
  ulonglong local_res18;
  
  if (param_2 == (byte *)0x0) {
    local_res8 = 0;
  }
  else {
    local_res8 = param_1 ^ 0xffffffff;
    local_res10 = param_2;
    for (local_res18 = param_3; 7 < local_res18; local_res18 = local_res18 - 8) {
      uVar1 = *(uint *)(&DAT_140010ad0 + (longlong)(int)((local_res8 ^ *local_res10) & 0xff) * 4) ^
              local_res8 >> 8;
      uVar1 = *(uint *)(&DAT_140010ad0 + (longlong)(int)((uVar1 ^ local_res10[1]) & 0xff) * 4) ^
              uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_140010ad0 + (longlong)(int)((uVar1 ^ local_res10[2]) & 0xff) * 4) ^
              uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_140010ad0 + (longlong)(int)((uVar1 ^ local_res10[3]) & 0xff) * 4) ^
              uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_140010ad0 + (longlong)(int)((uVar1 ^ local_res10[4]) & 0xff) * 4) ^
              uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_140010ad0 + (longlong)(int)((uVar1 ^ local_res10[5]) & 0xff) * 4) ^
              uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_140010ad0 + (longlong)(int)((uVar1 ^ local_res10[6]) & 0xff) * 4) ^
              uVar1 >> 8;
      local_res8 = *(uint *)(&DAT_140010ad0 + (longlong)(int)((uVar1 ^ local_res10[7]) & 0xff) * 4)
                   ^ uVar1 >> 8;
      local_res10 = local_res10 + 8;
    }
    for (; local_res18 != 0; local_res18 = local_res18 - 1) {
      local_res8 = *(uint *)(&DAT_140010ad0 +
                            (longlong)(int)((local_res8 ^ *local_res10) & 0xff) * 4) ^
                   local_res8 >> 8;
      local_res10 = local_res10 + 1;
    }
    local_res8 = local_res8 ^ 0xffffffff;
  }
  return local_res8;
}




void FUN_14000b0f0(uint *param_1,char param_2)

{
  *param_1 = *(uint *)(&DAT_140010ad0 + (longlong)(int)((*param_1 ^ (int)param_2) & 0xff) * 4) ^
             *param_1 >> 8;
  param_1[1] = (*param_1 & 0xff) + param_1[1];
  param_1[1] = param_1[1] * 0x8088405 + 1;
  param_1[2] = *(uint *)(&DAT_140010ad0 + (ulonglong)((param_1[2] ^ param_1[1] >> 0x18) & 0xff) * 4)
               ^ param_1[2] >> 8;
  return;
}




uint FUN_14000b1a0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8) & 0xffff | 2;
  return uVar1 * (uVar1 ^ 1) >> 8 & 0xff;
}




int FUN_14000b1e0(uint *param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = FUN_14000b1a0((longlong)param_1);
  FUN_14000b0f0(param_1,param_2);
  return (int)(char)((byte)uVar1 ^ param_2);
}




longlong FUN_14000b220(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  longlong lVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  uint7 uVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  wchar_t *local_18;
  
  uVar5 = 0xffffffffffffffff;
  pwVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  for (local_18 = param_1 + (~uVar5 - 1); (param_1 < local_18 && (*local_18 != L'.'));
      local_18 = local_18 + -1) {
  }
  if ((local_18 == param_1) && (*local_18 != L'.')) {
    lVar3 = (ulonglong)(byte)((ushort)*local_18 >> 8) << 8;
  }
  else {
    iVar2 = _wcsicmp(local_18,L".Z");
    if (iVar2 == 0) {
      lVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),1);
    }
    else {
      iVar2 = _wcsicmp(local_18,L".zip");
      if (iVar2 == 0) {
        lVar3 = CONCAT71((int7)(CONCAT44(extraout_var_00,iVar2) >> 8),1);
      }
      else {
        iVar2 = _wcsicmp(local_18,L".zoo");
        if (iVar2 == 0) {
          lVar3 = CONCAT71((int7)(CONCAT44(extraout_var_01,iVar2) >> 8),1);
        }
        else {
          iVar2 = _wcsicmp(local_18,L".arc");
          if (iVar2 == 0) {
            lVar3 = CONCAT71((int7)(CONCAT44(extraout_var_02,iVar2) >> 8),1);
          }
          else {
            iVar2 = _wcsicmp(local_18,L".lzh");
            if (iVar2 == 0) {
              lVar3 = CONCAT71((int7)(CONCAT44(extraout_var_03,iVar2) >> 8),1);
            }
            else {
              iVar2 = _wcsicmp(local_18,L".arj");
              if (iVar2 == 0) {
                lVar3 = CONCAT71((int7)(CONCAT44(extraout_var_04,iVar2) >> 8),1);
              }
              else {
                iVar2 = _wcsicmp(local_18,L".gz");
                if (iVar2 == 0) {
                  lVar3 = CONCAT71((int7)(CONCAT44(extraout_var_05,iVar2) >> 8),1);
                }
                else {
                  iVar2 = _wcsicmp(local_18,L".tgz");
                  uVar4 = (uint7)(CONCAT44(extraout_var_06,iVar2) >> 8);
                  if (iVar2 == 0) {
                    lVar3 = CONCAT71(uVar4,1);
                  }
                  else {
                    lVar3 = (ulonglong)uVar4 << 8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return lVar3;
}




longlong FUN_14000b380(longlong param_1)

{
  return (param_1 + -0x19db1ded53e8000) / 10000000;
}




void FUN_14000b3c0(FILETIME param_1,ushort *param_2,ushort *param_3)

{
  FILETIME local_res8;
  ushort *local_res10;
  ushort *local_res18;
  _SYSTEMTIME local_18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FileTimeToSystemTime(&local_res8,&local_18);
  *local_res10 = (ushort)((local_18.wYear - 0x7bc & 0x7f) << 9);
  *local_res10 = *local_res10 | (ushort)((local_18.wMonth & 0xf) << 5);
  *local_res10 = *local_res10 | local_18.wDay & 0x1f;
  *local_res18 = (ushort)((local_18.wHour & 0x1f) << 0xb);
  *local_res18 = *local_res18 | (ushort)((local_18.wMinute & 0x3f) << 5);
  *local_res18 = *local_res18 | (ushort)((local_18.wSecond & 0xf) << 1);
  return;
}




undefined8
FUN_14000b490(HANDLE param_1,uint *param_2,DWORD *param_3,longlong *param_4,undefined4 *param_5)

{
  uint uVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint local_64;
  DWORD local_5c;
  _BY_HANDLE_FILE_INFORMATION local_58;
  DWORD local_20;
  short local_1c [2];
  int local_18;
  int local_14;
  ushort local_10 [2];
  ushort local_c [6];
  
  BVar2 = GetFileInformationByHandle(param_1,&local_58);
  if (BVar2 == 0) {
    uVar3 = 0x200;
  }
  else {
    local_64 = (uint)((local_58.dwFileAttributes & 1) != 0);
    if ((local_58.dwFileAttributes & 2) != 0) {
      local_64 = local_64 | 2;
    }
    if ((local_58.dwFileAttributes & 4) != 0) {
      local_64 = local_64 | 4;
    }
    if ((local_58.dwFileAttributes & 0x10) != 0) {
      local_64 = local_64 | 0x10;
    }
    if ((local_58.dwFileAttributes & 0x20) != 0) {
      local_64 = local_64 | 0x20;
    }
    if ((local_58.dwFileAttributes & 0x10) == 0) {
      local_64 = local_64 | 0x80000000;
    }
    else {
      local_64 = local_64 | 0x40000000;
    }
    uVar1 = local_64 | 0x1000000;
    if ((local_58.dwFileAttributes & 1) == 0) {
      uVar1 = local_64 | 0x1800000;
    }
    local_64 = uVar1;
    local_20 = GetFileSize(param_1,(LPDWORD)0x0);
    if (0x28 < local_20) {
      SetFilePointer(param_1,0,(PLONG)0x0,0);
      ReadFile(param_1,local_1c,2,&local_5c,(LPOVERLAPPED)0x0);
      SetFilePointer(param_1,0x24,(PLONG)0x0,0);
      ReadFile(param_1,&local_18,4,&local_5c,(LPOVERLAPPED)0x0);
      if ((local_1c[0] == 0x54ad) && (local_18 + 0x34U < local_20)) {
        SetFilePointer(param_1,local_18,(PLONG)0x0,0);
        ReadFile(param_1,&local_14,4,&local_5c,(LPOVERLAPPED)0x0);
        if ((local_14 == 0x5a4d) ||
           (((local_14 == 0x454e || (local_14 == 0x454c)) || (local_14 == 0x4550)))) {
          local_64 = local_64 | 0x400000;
        }
      }
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = local_64;
    }
    if (param_3 != (DWORD *)0x0) {
      *param_3 = local_20;
    }
    if (param_4 != (longlong *)0x0) {
      lVar4 = FUN_14000b380((longlong)local_58.ftLastAccessTime);
      *param_4 = lVar4;
      lVar4 = FUN_14000b380((longlong)local_58.ftLastWriteTime);
      param_4[1] = lVar4;
      lVar4 = FUN_14000b380((longlong)local_58.ftCreationTime);
      param_4[2] = lVar4;
    }
    if (param_5 != (undefined4 *)0x0) {
      FUN_14000b3c0(local_58.ftLastWriteTime,local_c,local_10);
      *param_5 = CONCAT22(local_c[0],local_10[0]);
    }
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 * FUN_14000b7c0(undefined8 *param_1,char *param_2)

{
  char cVar1;
  void *pvVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *local_30;
  char *local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x15] = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar3 = 0xffffffffffffffff;
    pcVar4 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pvVar2 = operator_new(~uVar3);
    *param_1 = pvVar2;
    local_28 = (char *)*param_1;
    local_30 = param_2;
    do {
      cVar1 = *local_30;
      *local_28 = cVar1;
      local_30 = local_30 + 1;
      local_28 = local_28 + 1;
    } while (cVar1 != '\0');
  }
  return param_1;
}




void FUN_14000b930(longlong *param_1)

{
  if (param_1[0xd] != 0) {
    operator_delete((void *)param_1[0xd]);
  }
  param_1[0xd] = 0;
  if (param_1[10] != 0) {
    operator_delete((void *)param_1[10]);
  }
  param_1[10] = 0;
  if (*param_1 != 0) {
    operator_delete((void *)*param_1);
  }
  *param_1 = 0;
  return;
}




undefined8 FUN_14000b9d0(longlong param_1,LPCWSTR param_2,uint param_3,int param_4)

{
  DWORD DVar1;
  undefined8 uVar2;
  HANDLE pvVar3;
  LPVOID pvVar4;
  
  if ((((*(longlong *)(param_1 + 8) == 0) && (*(longlong *)(param_1 + 0x18) == 0)) &&
      (*(longlong *)(param_1 + 0x30) == 0)) &&
     (((*(int *)(param_1 + 0x28) == 0 && (*(int *)(param_1 + 0x24) == 0)) &&
      (*(char *)(param_1 + 0x40) == '\0')))) {
    if (param_4 == 1) {
      *(LPCWSTR *)(param_1 + 8) = param_2;
      *(undefined1 *)(param_1 + 0x10) = 0;
      DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 8),0,(PLONG)0x0,1);
      *(bool *)(param_1 + 0x2c) = DVar1 != 0xffffffff;
      if (*(char *)(param_1 + 0x2c) == '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      else {
        *(DWORD *)(param_1 + 0x20) = DVar1;
      }
      uVar2 = 0;
    }
    else if (param_4 == 2) {
      pvVar3 = CreateFileW(param_2,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
      *(HANDLE *)(param_1 + 8) = pvVar3;
      if (*(longlong *)(param_1 + 8) == -1) {
        *(undefined8 *)(param_1 + 8) = 0;
        uVar2 = 0x200;
      }
      else {
        *(undefined1 *)(param_1 + 0x2c) = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined1 *)(param_1 + 0x10) = 1;
        uVar2 = 0;
      }
    }
    else if (param_4 == 3) {
      if (param_3 == 0) {
        uVar2 = 0x30000;
      }
      else {
        if (param_2 == (LPCWSTR)0x0) {
          pvVar3 = CreateFileMappingW((HANDLE)0xffffffffffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,
                                      param_3,(LPCWSTR)0x0);
          *(HANDLE *)(param_1 + 0x18) = pvVar3;
          if (*(longlong *)(param_1 + 0x18) == 0) {
            return 0x300;
          }
          pvVar4 = MapViewOfFile(*(HANDLE *)(param_1 + 0x18),0xf001f,0,0,(ulonglong)param_3);
          *(LPVOID *)(param_1 + 0x30) = pvVar4;
          if (*(longlong *)(param_1 + 0x30) == 0) {
            CloseHandle(*(HANDLE *)(param_1 + 0x18));
            *(undefined8 *)(param_1 + 0x18) = 0;
            return 0x300;
          }
        }
        else {
          *(LPCWSTR *)(param_1 + 0x30) = param_2;
        }
        *(undefined1 *)(param_1 + 0x2c) = 1;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(uint *)(param_1 + 0x3c) = param_3;
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0x10000;
    }
  }
  else {
    uVar2 = 0x1000000;
  }
  return uVar2;
}




uint FUN_14000bd10(longlong param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14000bd60(param_1,param_2,param_3);
  }
  return uVar1;
}




uint FUN_14000bd60(longlong param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *local_38;
  uint local_30;
  uint local_2c;
  void *local_28;
  void *local_20;
  
  local_38 = param_2;
  if (*(char *)(param_1 + 0x41) != '\0') {
    if ((*(longlong *)(param_1 + 0x50) != 0) && (*(uint *)(param_1 + 0x58) < param_3)) {
      local_28 = *(void **)(param_1 + 0x50);
      operator_delete(local_28);
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    if (*(longlong *)(param_1 + 0x50) == 0) {
      local_20 = operator_new((ulonglong)(param_3 << 1));
      *(void **)(param_1 + 0x50) = local_20;
      *(uint *)(param_1 + 0x58) = param_3;
    }
    puVar3 = *(undefined1 **)(param_1 + 0x50);
    for (uVar2 = (ulonglong)param_3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 1) {
      iVar1 = FUN_14000b1e0((uint *)(param_1 + 0x44),
                            *(byte *)(*(longlong *)(param_1 + 0x50) + (ulonglong)local_30));
      *(char *)((ulonglong)local_30 + *(longlong *)(param_1 + 0x50)) = (char)iVar1;
    }
    local_38 = *(undefined1 **)(param_1 + 0x50);
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0x1000000;
      param_3 = 0;
    }
    else {
      WriteFile(*(HANDLE *)(param_1 + 8),local_38,param_3,&local_2c,(LPOVERLAPPED)0x0);
      param_3 = local_2c;
    }
  }
  else if (*(int *)(param_1 + 0x38) + param_3 < *(uint *)(param_1 + 0x3c)) {
    puVar3 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30));
    for (uVar2 = (ulonglong)param_3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *local_38;
      local_38 = local_38 + 1;
      puVar3 = puVar3 + 1;
    }
    *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_3;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 0x30000;
    param_3 = 0;
  }
  return param_3;
}




ulonglong FUN_14000bf60(ulonglong param_1,uint param_2)

{
  DWORD DVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0x2000000;
    uVar2 = param_1 & 0xffffffffffffff00;
  }
  else if (*(longlong *)(param_1 + 0x30) == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0x1000000;
      uVar2 = param_1 & 0xffffffffffffff00;
    }
    else {
      DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 8),param_2 + *(int *)(param_1 + 0x20),(PLONG)0x0,
                             0);
      uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,DVar1) >> 8),1);
    }
  }
  else if (param_2 < *(uint *)(param_1 + 0x3c)) {
    *(uint *)(param_1 + 0x38) = param_2;
    uVar2 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 0x30000;
    uVar2 = param_1 & 0xffffffffffffff00;
  }
  return uVar2;
}




undefined4 FUN_14000c010(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_18;
  
  local_18 = 0;
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar1 = FUN_14000d9d0(param_1);
    local_18 = (undefined4)uVar1;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    CloseHandle(*(HANDLE *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return local_18;
}




ulonglong FUN_14000c0f0(longlong param_1,LPCWSTR param_2)

{
  ulonglong uVar1;
  HANDLE hObject;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (param_2 == (LPCWSTR)0x0) {
    uVar1 = 0x10000;
  }
  else {
    hObject = CreateFileW(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffffffffffff) {
      uVar1 = 0x200;
    }
    else {
      uVar1 = FUN_14000c200(param_1,hObject,0);
      if ((int)uVar1 == 0) {
        *(undefined1 *)(param_1 + 0xb0) = 1;
        uVar1 = 0;
      }
      else {
        CloseHandle(hObject);
        uVar1 = uVar1 & 0xffffffff;
      }
    }
  }
  return uVar1;
}




ulonglong FUN_14000c200(longlong param_1,HANDLE param_2,int param_3)

{
  DWORD DVar1;
  ulonglong uVar2;
  longlong lVar3;
  FILETIME local_30;
  ushort local_28 [2];
  ushort local_24 [2];
  _SYSTEMTIME local_20 [2];
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if ((param_2 == (HANDLE)0x0) || (param_2 == (HANDLE)0xffffffffffffffff)) {
    uVar2 = 0x10000;
  }
  else {
    DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 8),0,(PLONG)0x0,1);
    if (DVar1 == 0xffffffff) {
      *(undefined4 *)(param_1 + 0x70) = 0x80000000;
      *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
      if (param_3 != 0) {
        *(int *)(param_1 + 0x98) = param_3;
      }
      *(undefined1 *)(param_1 + 0x94) = 0;
      GetLocalTime(local_20);
      SystemTimeToFileTime(local_20,&local_30);
      FUN_14000b3c0(local_30,local_24,local_28);
      lVar3 = FUN_14000b380((longlong)local_30);
      *(longlong *)(param_1 + 0x78) = lVar3;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x78);
      *(uint *)(param_1 + 0x90) = CONCAT22(local_24[0],local_28[0]);
      *(HANDLE *)(param_1 + 0xa8) = param_2;
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_14000b490(param_2,(uint *)(param_1 + 0x70),(DWORD *)(param_1 + 0x98),
                            (longlong *)(param_1 + 0x78),(undefined4 *)(param_1 + 0x90));
      if ((int)uVar2 == 0) {
        SetFilePointer(param_2,0,(PLONG)0x0,0);
        *(undefined1 *)(param_1 + 0x94) = 1;
        *(HANDLE *)(param_1 + 0xa8) = param_2;
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 & 0xffffffff;
      }
    }
  }
  return uVar2;
}




undefined8 FUN_14000c430(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  FILETIME local_28;
  ushort local_20 [2];
  ushort local_1c [2];
  _SYSTEMTIME local_18;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(longlong *)(param_1 + 0xb8) = param_2;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(int *)(param_1 + 0xc0) = param_3;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar1 = 0x10000;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0x80000000;
    *(int *)(param_1 + 0x98) = param_3;
    *(undefined1 *)(param_1 + 0x94) = 1;
    GetLocalTime(&local_18);
    SystemTimeToFileTime(&local_18,&local_28);
    FUN_14000b3c0(local_28,local_1c,local_20);
    lVar2 = FUN_14000b380((longlong)local_28);
    *(longlong *)(param_1 + 0x78) = lVar2;
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x90) = CONCAT22(local_1c[0],local_20[0]);
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_14000c5a0(longlong param_1)

{
  longlong lVar1;
  FILETIME local_28;
  ushort local_20 [2];
  ushort local_1c [2];
  _SYSTEMTIME local_18;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x41c00010;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  GetLocalTime(&local_18);
  SystemTimeToFileTime(&local_18,&local_28);
  FUN_14000b3c0(local_28,local_1c,local_20);
  lVar1 = FUN_14000b380((longlong)local_28);
  *(longlong *)(param_1 + 0x78) = lVar1;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x90) = CONCAT22(local_1c[0],local_20[0]);
  return 0;
}




uint FUN_14000c710(longlong param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  BOOL BVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint local_28;
  uint local_20 [4];
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0x1000000;
      local_28 = 0;
    }
    else {
      BVar2 = ReadFile(*(HANDLE *)(param_1 + 0xa8),param_2,param_3,local_20,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        local_28 = 0;
      }
      else {
        *(uint *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + local_20[0];
        uVar1 = FUN_14000ae60(*(uint *)(param_1 + 0xa0),param_2,(ulonglong)local_20[0]);
        *(uint *)(param_1 + 0xa0) = uVar1;
        local_28 = local_20[0];
      }
    }
  }
  else if (*(uint *)(param_1 + 0xc4) < *(uint *)(param_1 + 0xc0)) {
    local_28 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xc4);
    if (param_3 < local_28) {
      local_28 = param_3;
    }
    pbVar4 = (byte *)((ulonglong)*(uint *)(param_1 + 0xc4) + *(longlong *)(param_1 + 0xb8));
    pbVar5 = param_2;
    for (uVar3 = (ulonglong)local_28; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar5 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    }
    *(uint *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + local_28;
    *(uint *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + local_28;
    uVar1 = FUN_14000ae60(*(uint *)(param_1 + 0xa0),param_2,(ulonglong)local_28);
    *(uint *)(param_1 + 0xa0) = uVar1;
  }
  else {
    local_28 = 0;
  }
  return local_28;
}




undefined8 FUN_14000c8c0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0xb0) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
    CloseHandle(*(HANDLE *)(param_1 + 0xa8));
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if ((*(int *)(param_1 + 0x98) == -1) || (*(int *)(param_1 + 0x98) == *(int *)(param_1 + 0x9c))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x9c);
  if (bVar1) {
    uVar2 = 0x60000;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




undefined4 FUN_14000c980(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_28;
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    pvVar2 = operator_new(0x6aff8);
    if (pvVar2 == (void *)0x0) {
      local_10 = 0;
    }
    else {
      local_10 = FUN_14000cb40((longlong)pvVar2);
    }
    *(longlong *)(param_1 + 0x68) = local_10;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x6aff0) = 0;
  *(undefined1 **)(*(longlong *)(param_1 + 0x68) + 0x10) = &LAB_14000c6d0;
  *(undefined1 **)(*(longlong *)(param_1 + 0x68) + 0x18) = &LAB_14000bca0;
  **(longlong **)(param_1 + 0x68) = param_1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 8) = 8;
  *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0xc) = *(undefined1 *)(param_1 + 0x94);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x6aff0) = 0;
  *(undefined2 *)(*(longlong *)(param_1 + 0x68) + 0xe8a) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x6afb8) = 0;
  FUN_140007ff0(*(longlong *)(param_1 + 0x68),param_1 + 0xcc,0x4000,1);
  FUN_140005ae0(*(longlong *)(param_1 + 0x68),param_2 + 0x3a);
  FUN_140008750(*(longlong *)(param_1 + 0x68),*(int *)(*(longlong *)(param_1 + 0x68) + 8),
                (ushort *)(param_2 + 4));
  uVar1 = FUN_140009620(*(undefined8 **)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 200) = uVar1;
  local_28 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x6aff0) != 0) {
    local_28 = 0x5000000;
  }
  return local_28;
}




longlong FUN_14000cb40(longlong param_1)

{
  FUN_1400058d0(param_1 + 0x20);
  FUN_140005a60(param_1 + 0x1afb8);
  return param_1;
}




undefined8 FUN_14000cb80(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int local_18;
  
  local_18 = 0;
  while ((uVar1 = FUN_14000c710(param_1,(byte *)(param_1 + 0xcc),0x4000), uVar1 != 0 &&
         (uVar1 != 0xffffffff))) {
    uVar2 = FUN_14000bd60(param_1,(undefined1 *)(param_1 + 0xcc),uVar1);
    if (uVar2 != uVar1) {
      return 0x60000;
    }
    local_18 = local_18 + uVar1;
  }
  *(int *)(param_1 + 200) = local_18;
  return 0;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_14000cc20(longlong *param_1,short *param_2,LPCWSTR param_3,int param_4,int param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  DWORD DVar18;
  int iVar19;
  undefined8 uVar20;
  HWND pHVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  __uint64 _Var25;
  char *pcVar26;
  undefined1 *puVar27;
  undefined2 *puVar28;
  short *psVar29;
  char *pcVar30;
  undefined1 *puVar31;
  undefined1 auStackY_6d8 [32];
  int local_698;
  byte local_688 [11];
  undefined1 local_67d;
  int local_678;
  uint local_674;
  bool local_670;
  char local_66f;
  undefined1 local_668 [14];
  short asStack_65a [265];
  undefined1 *local_448;
  undefined1 local_440;
  int local_43c;
  undefined1 *local_438;
  undefined1 local_430 [6];
  undefined1 local_42a;
  undefined1 local_429;
  undefined1 local_428;
  undefined1 local_427;
  undefined1 local_426;
  undefined1 local_425;
  undefined1 local_424;
  undefined1 local_423;
  undefined1 local_422;
  undefined1 local_421;
  undefined1 local_420;
  undefined2 local_418;
  undefined2 local_416;
  ushort local_414;
  ushort local_412;
  undefined4 local_410;
  undefined4 local_40c;
  int local_408;
  undefined4 local_404;
  ulonglong local_400;
  undefined8 local_3f8;
  __uint64 local_3f0;
  undefined8 local_3e8;
  undefined2 local_3e0;
  undefined2 local_3de;
  ushort local_3dc;
  undefined4 local_3d8;
  int local_3d4;
  undefined1 local_3d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined8 local_2b8;
  CHAR local_2b0 [260];
  undefined1 local_1ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  int local_88;
  short *local_80;
  char *local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  short *local_50;
  short *local_48;
  short *local_40;
  short local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_140018038 ^ (ulonglong)auStackY_6d8;
  if ((*(int *)((longlong)param_1 + 0x24) != 0) || ((char)param_1[8] != '\0')) goto LAB_14000d9af;
  local_43c = 0;
  if ((*param_1 != 0) && (param_5 != 4)) {
    local_43c = 0xc;
  }
  local_48 = asStack_65a + 1;
  local_40 = local_48;
  local_50 = param_2;
  do {
    local_38 = *local_50;
    *local_48 = *local_50;
    local_50 = local_50 + 1;
    local_48 = local_48 + 1;
  } while (local_38 != 0);
  if (asStack_65a[1] == 0) goto LAB_14000d9af;
  for (local_80 = asStack_65a + 1; *local_80 != 0; local_80 = local_80 + 1) {
    if (*local_80 == 0x5c) {
      *local_80 = 0x2f;
    }
  }
  if (param_5 != 4) {
    local_34 = 0;
  }
  else {
    local_34 = 1;
  }
  local_670 = param_5 == 4;
  local_34 = (uint)local_670;
  if (local_670) {
    uVar22 = 0xffffffffffffffff;
    psVar29 = asStack_65a;
    do {
      psVar29 = (short *)((longlong)psVar29 + 2);
      if (uVar22 == 0) break;
      uVar22 = uVar22 - 1;
    } while (*psVar29 != 0);
    if (asStack_65a[~uVar22 + 0xffffffffffffffff] == 0x2f) goto LAB_14000ce0c;
    local_30 = 1;
  }
  else {
LAB_14000ce0c:
    local_30 = 0;
  }
  local_66f = (char)local_30;
  local_674 = 8;
  if ((local_670) || (uVar22 = FUN_14000b220(asStack_65a + 1), (uVar22 & 0xff) != 0)) {
    local_674 = 0;
  }
  if (param_5 == 2) {
    uVar22 = FUN_14000c0f0((longlong)param_1,param_3);
    local_678 = (int)uVar22;
  }
  else if (param_5 == 1) {
    uVar22 = FUN_14000c200((longlong)param_1,param_3,param_4);
    local_678 = (int)uVar22;
  }
  else if (param_5 == 3) {
    uVar20 = FUN_14000c430((longlong)param_1,(longlong)param_3,param_4);
    local_678 = (int)uVar20;
  }
  else {
    if (param_5 != 4) goto LAB_14000d9af;
    uVar20 = FUN_14000c5a0((longlong)param_1);
    local_678 = (int)uVar20;
  }
  if (local_678 == 0) {
    local_98 = 0;
    local_3d0 = 0;
    WideCharToMultiByte(0xfde9,0,asStack_65a + 1,-1,local_2b0,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar22 = 0xffffffffffffffff;
    pcVar26 = local_2b0;
    do {
      if (uVar22 == 0) break;
      uVar22 = uVar22 - 1;
      cVar1 = *pcVar26;
      pcVar26 = pcVar26 + 1;
    } while (cVar1 != '\0');
    local_400 = ~uVar22 - 1;
    if (local_66f != '\0') {
      lVar23 = -1;
      pcVar26 = local_2b0;
      do {
        pcVar30 = pcVar26;
        if (lVar23 == 0) break;
        lVar23 = lVar23 + -1;
        pcVar30 = pcVar26 + 1;
        cVar1 = *pcVar26;
        pcVar26 = pcVar30;
      } while (cVar1 != '\0');
      pcVar26 = "/";
      pcVar30 = pcVar30 + -1;
      for (lVar23 = 2; local_400 = ~uVar22, lVar23 != 0; lVar23 = lVar23 + -1) {
        *pcVar30 = *pcVar26;
        pcVar26 = pcVar26 + 1;
        pcVar30 = pcVar30 + 1;
      }
    }
    local_1ac = 0;
    local_2b8 = 0;
    local_3e8 = 0;
    local_a8 = 1;
    local_a0 = 0;
    local_3de = 0;
    local_418 = 0xb17;
    local_416 = 0x14;
    lVar23 = param_1[0x12];
    local_40c = 0;
    local_414 = 8;
    if ((*param_1 != 0) && (local_670 == false)) {
      local_414 = 9;
    }
    local_3dc = local_414;
    local_412 = (ushort)local_674;
    if ((local_674 == 0) && (-1 < (int)param_1[0x13])) {
      local_2c = (int)param_1[0x13] + local_43c;
    }
    else {
      local_2c = 0;
    }
    local_408 = local_2c;
    lVar11 = param_1[0x13];
    local_3e0 = 0;
    lVar12 = param_1[0xe];
    lVar13 = param_1[5];
    lVar14 = param_1[4];
    local_3f8 = 0x11;
    local_3f0 = 9;
    local_430[0] = 0x55;
    local_430[1] = 0x54;
    local_430[2] = 0xd;
    local_430[3] = 0;
    local_430[4] = 7;
    lVar15 = param_1[0x10];
    lVar2 = param_1[0x10];
    lVar3 = param_1[0x10];
    lVar4 = param_1[0x10];
    lVar16 = param_1[0xf];
    lVar5 = param_1[0xf];
    lVar6 = param_1[0xf];
    lVar7 = param_1[0xf];
    lVar17 = param_1[0x11];
    lVar8 = param_1[0x11];
    lVar9 = param_1[0x11];
    lVar10 = param_1[0x11];
    puVar27 = local_430;
    puVar31 = local_668;
    for (lVar24 = 9; lVar24 != 0; lVar24 = lVar24 + -1) {
      *puVar31 = *puVar27;
      puVar27 = puVar27 + 1;
      puVar31 = puVar31 + 1;
    }
    local_668[2] = 5;
    local_430[5] = (char)lVar15;
    local_42a = (char)((ulonglong)lVar2 >> 8);
    local_429 = (char)((ulonglong)lVar3 >> 0x10);
    local_428 = (char)((ulonglong)lVar4 >> 0x18);
    local_427 = (char)lVar16;
    local_426 = (char)((ulonglong)lVar5 >> 8);
    local_425 = (char)((ulonglong)lVar6 >> 0x10);
    local_424 = (char)((ulonglong)lVar7 >> 0x18);
    local_423 = (char)lVar17;
    local_422 = (char)((ulonglong)lVar8 >> 8);
    local_421 = (char)((ulonglong)lVar9 >> 0x10);
    local_420 = (char)((ulonglong)lVar10 >> 0x18);
    local_410 = (int)lVar23;
    local_404 = (int)lVar11;
    local_3d8 = (int)lVar12;
    local_3d4 = (int)lVar13 + (int)lVar14;
    local_2c8 = local_430;
    local_2c0 = local_668;
    uVar20 = FUN_140009c50((longlong)&local_418,FUN_14000bd10,param_1);
    local_88 = (int)uVar20;
    if ((int)uVar20 == 0) {
      *(int *)(param_1 + 5) = (int)local_400 + 0x1e + (int)local_3f8 + (int)param_1[5];
      if (*(int *)((longlong)param_1 + 0x24) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x44) = 0x12345678;
        *(undefined4 *)(param_1 + 9) = 0x23456789;
        *(undefined4 *)((longlong)param_1 + 0x4c) = 0x34567890;
        for (local_78 = (char *)*param_1; (local_78 != (char *)0x0 && (*local_78 != '\0'));
            local_78 = local_78 + 1) {
          FUN_14000b0f0((uint *)((longlong)param_1 + 0x44),*local_78);
        }
        if (DAT_140018698 == '\0') {
          DVar18 = GetTickCount();
          pHVar21 = GetDesktopWindow();
          srand(DVar18 ^ (uint)pHVar21);
        }
        for (local_70 = 0; local_70 < 0xc; local_70 = local_70 + 1) {
          iVar19 = rand();
          local_688[local_70] = (byte)(iVar19 >> 7);
        }
        local_67d = (char)((uint)local_410 >> 8);
        for (local_6c = 0; local_6c < 0xc; local_6c = local_6c + 1) {
          iVar19 = FUN_14000b1e0((uint *)((longlong)param_1 + 0x44),local_688[local_6c]);
          local_688[local_6c] = (byte)iVar19;
        }
        if ((*param_1 != 0) && (local_670 == false)) {
          FUN_14000bd10((longlong)param_1,local_688,0xc);
          *(int *)(param_1 + 5) = (int)param_1[5] + 0xc;
        }
        local_698 = 0;
        if ((*param_1 == 0) || (local_670 != false)) {
          local_28 = 0;
        }
        else {
          local_28 = 1;
        }
        *(undefined1 *)((longlong)param_1 + 0x41) = (undefined1)local_28;
        if ((local_670 == false) && (local_674 == 8)) {
          local_698 = FUN_14000c980((longlong)param_1,(longlong)&local_418);
        }
        else if ((local_670 == false) && (local_674 == 0)) {
          uVar20 = FUN_14000cb80((longlong)param_1);
          local_698 = (int)uVar20;
        }
        else if (local_670 != false) {
          *(undefined4 *)(param_1 + 0x19) = 0;
        }
        *(undefined1 *)((longlong)param_1 + 0x41) = 0;
        FUN_14000c8c0((longlong)param_1);
        *(int *)(param_1 + 5) = (int)param_1[5] + (int)param_1[0x19];
        if ((*(int *)((longlong)param_1 + 0x24) == 0) && (local_698 == 0)) {
          local_440 = local_408 == (int)param_1[0x19] + local_43c;
          local_24 = (uint)(byte)local_440;
          local_40c = (undefined4)param_1[0x14];
          local_408 = (int)param_1[0x19] + local_43c;
          local_404 = (undefined4)param_1[0x13];
          if ((*(char *)((longlong)param_1 + 0x2c) == '\0') ||
             ((*param_1 != 0 && (local_670 == false)))) {
            if (((uint)local_412 != (local_674 & 0xffff)) ||
               ((local_674 == 0 && (!(bool)local_440)))) goto LAB_14000d9af;
            uVar20 = FUN_14000a160((longlong)&local_418,FUN_14000bd10,param_1);
            local_88 = (int)uVar20;
            if (local_88 != 0) goto LAB_14000d9af;
            *(int *)(param_1 + 5) = (int)param_1[5] + 0x10;
            local_414 = local_3dc;
          }
          else {
            local_412 = (ushort)local_674;
            if ((local_414 & 1) == 0) {
              local_414 = local_414 & 0xfff7;
            }
            local_3dc = local_414;
            uVar22 = FUN_14000bf60((ulonglong)param_1,local_3d4 - (int)param_1[4]);
            if ((uVar22 & 0xff) == 0) goto LAB_14000d9af;
            uVar20 = FUN_140009c50((longlong)&local_418,FUN_14000bd10,param_1);
            local_88 = (int)uVar20;
            if ((local_88 != 0) ||
               (uVar22 = FUN_14000bf60((ulonglong)param_1,*(uint *)(param_1 + 5)),
               (uVar22 & 0xff) == 0)) goto LAB_14000d9af;
          }
          if (*(int *)((longlong)param_1 + 0x24) == 0) {
            local_448 = (undefined1 *)operator_new(local_3f0);
            puVar27 = local_448;
            for (_Var25 = local_3f0; _Var25 != 0; _Var25 = _Var25 - 1) {
              *puVar27 = *local_2c0;
              local_2c0 = local_2c0 + 1;
              puVar27 = puVar27 + 1;
            }
            local_2c0 = local_448;
            local_60 = local_448;
            local_58 = (undefined1 *)operator_new(0x388);
            local_438 = local_58;
            puVar28 = &local_418;
            puVar27 = local_58;
            for (lVar23 = 0x388; lVar23 != 0; lVar23 = lVar23 + -1) {
              *puVar27 = *(undefined1 *)puVar28;
              puVar28 = (undefined2 *)((longlong)puVar28 + 1);
              puVar27 = puVar27 + 1;
            }
            if (param_1[0xc] == 0) {
              param_1[0xc] = (longlong)local_58;
            }
            else {
              for (local_68 = param_1[0xc]; *(longlong *)(local_68 + 0x380) != 0;
                  local_68 = *(longlong *)(local_68 + 0x380)) {
              }
              *(undefined1 **)(local_68 + 0x380) = local_58;
            }
          }
        }
      }
      else {
        FUN_14000c8c0((longlong)param_1);
      }
    }
    else {
      FUN_14000c8c0((longlong)param_1);
    }
  }
LAB_14000d9af:
  __security_check_cookie(local_20 ^ (ulonglong)auStackY_6d8);
  return;
}




undefined8 FUN_14000d9d0(longlong param_1)

{
  int iVar1;
  undefined2 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  int local_3c;
  undefined2 *local_38;
  
  local_3c = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  bVar3 = true;
  local_38 = *(undefined2 **)(param_1 + 0x60);
  while (local_38 != (undefined2 *)0x0) {
    if (bVar3) {
      uVar4 = FUN_14000a3d0(local_38,FUN_14000bd10,param_1);
      if ((int)uVar4 != 0) {
        bVar3 = false;
      }
    }
    *(int *)(param_1 + 0x28) =
         *(int *)(local_38 + 0xc) + 0x2e + *(int *)(local_38 + 0x14) + *(int *)(local_38 + 0x18) +
         *(int *)(param_1 + 0x28);
    local_3c = local_3c + 1;
    puVar2 = *(undefined2 **)(local_38 + 0x1c0);
    if (*(longlong *)(local_38 + 0xac) != 0) {
      operator_delete(*(void **)(local_38 + 0xac));
    }
    operator_delete(local_38);
    local_38 = puVar2;
  }
  if (bVar3) {
    uVar4 = FUN_14000ab60(local_3c,*(int *)(param_1 + 0x28) - iVar1,iVar1 + *(int *)(param_1 + 0x20)
                          ,0,0,FUN_14000bd10,param_1);
    if ((int)uVar4 != 0) {
      bVar3 = false;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 0x16;
  }
  if (bVar3) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x400;
  }
  return uVar4;
}




undefined4 * FUN_14000db90(LPCWSTR param_1,uint param_2,int param_3,char *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong *local_18;
  
  puVar1 = (undefined8 *)operator_new(0x40d0);
  if (puVar1 == (undefined8 *)0x0) {
    local_18 = (longlong *)0x0;
  }
  else {
    local_18 = FUN_14000b7c0(puVar1,param_4);
  }
  uVar2 = FUN_14000b9d0((longlong)local_18,param_1,param_2,param_3);
  DAT_14001869c = (int)uVar2;
  if (DAT_14001869c == 0) {
    puVar3 = (undefined4 *)operator_new(0x10);
    *puVar3 = 2;
    *(longlong **)(puVar3 + 2) = local_18;
  }
  else {
    if (local_18 != (longlong *)0x0) {
      FUN_14000dcb0(local_18,1);
    }
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}




longlong * FUN_14000dcb0(longlong *param_1,uint param_2)

{
  FUN_14000b930(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_14000dcf0(LPCWSTR param_1,char *param_2)

{
  FUN_14000db90(param_1,0,2,param_2);
  return;
}




undefined4 FUN_14000dd20(int *param_1,short *param_2,LPCWSTR param_3,int param_4,int param_5)

{
  if (param_1 == (int *)0x0) {
    DAT_14001869c = 0x10000;
  }
  else if (*param_1 == 2) {
    DAT_14001869c = FUN_14000cc20(*(longlong **)(param_1 + 2),param_2,param_3,param_4,param_5);
  }
  else {
    DAT_14001869c = 0x80000;
  }
  return DAT_14001869c;
}




void FUN_14000ddc0(int *param_1,short *param_2,LPCWSTR param_3)

{
  FUN_14000dd20(param_1,param_2,param_3,0,2);
  return;
}




undefined4 FUN_14000de00(int *param_1)

{
  longlong *plVar1;
  
  if (param_1 == (int *)0x0) {
    DAT_14001869c = 0x10000;
  }
  else if (*param_1 == 2) {
    plVar1 = *(longlong **)(param_1 + 2);
    DAT_14001869c = FUN_14000c010((longlong)plVar1);
    if (plVar1 != (longlong *)0x0) {
      FUN_14000dcb0(plVar1,1);
    }
    operator_delete(param_1);
  }
  else {
    DAT_14001869c = 0x80000;
  }
  return DAT_14001869c;
}




/* public: class std::_Init_locks & __ptr64 __cdecl std::_Init_locks::operator=(class
   std::_Init_locks const & __ptr64) __ptr64 */

_Init_locks * __thiscall std::_Init_locks::operator=(_Init_locks *this,_Init_locks *param_1)

{
                    /* 0xdec4  1  ??4_Init_locks@std@@QEAAAEAV01@AEBV01@@Z */
  return this;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140018038) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __ptr64 __cdecl exception::`vector deleting destructor'(unsigned int)
   __ptr64
    public: virtual void * __ptr64 __cdecl std::exception::`vector deleting destructor'(unsigned
   int) __ptr64
    public: virtual void * __ptr64 __cdecl logic_error::`vector deleting destructor'(unsigned int)
   __ptr64
    public: virtual void * __ptr64 __cdecl type_info::`vector deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2008 Release */

type_info * FID_conflict__vector_deleting_destructor_(type_info *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    type_info::_type_info_dtor_internal_method(param_1);
    if ((param_2 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_
              (param_1,0x18,*(int *)(param_1 + -8),type_info::_type_info_dtor_internal_method);
    if ((param_2 & 1) != 0) {
      operator_delete(param_1 + -8);
    }
    param_1 = param_1 + -8;
  }
  return param_1;
}




/* Library Function - Single Match
    _onexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  undefined8 uVar2;
  longlong local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = _decode_pointer(DAT_140018910);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140018910);
    local_res18[0] = _decode_pointer(DAT_140018908);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140018910 = _encode_pointer(local_res10);
    DAT_140018908 = _encode_pointer(local_res18[0]);
    _unlock(8);
  }
  return p_Var1;
}




/* Library Function - Single Match
    atexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}




/* Library Function - Single Match
    __tmainCRTStartup
   
   Library: Visual Studio 2008 Release */

int __tmainCRTStartup(void)

{
  void *pvVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  BOOL BVar5;
  void *pvVar6;
  bool bVar7;
  
  pvVar1 = StackBase;
  bVar2 = false;
  while( true ) {
    pvVar6 = (void *)0x0;
    LOCK();
    bVar7 = DAT_1400188f8 == (void *)0x0;
    pvVar3 = pvVar1;
    if (!bVar7) {
      pvVar6 = DAT_1400188f8;
      pvVar3 = DAT_1400188f8;
    }
    DAT_1400188f8 = pvVar3;
    UNLOCK();
    if (bVar7) goto LAB_14000e102;
    if (pvVar6 == pvVar1) break;
    Sleep(1000);
  }
  bVar2 = true;
LAB_14000e102:
  if (DAT_1400188f0 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_1400188f0 == 0) {
    DAT_1400188f0 = 1;
    iVar4 = _initterm_e(&DAT_140010538,&DAT_140010550);
    if (iVar4 != 0) {
      return 0xff;
    }
  }
  else {
    DAT_14001810c = 1;
  }
  if (DAT_1400188f0 == 1) {
    _initterm(&DAT_140010508,&DAT_140010530);
    DAT_1400188f0 = 2;
  }
  if (!bVar2) {
    LOCK();
    DAT_1400188f8 = (void *)0x0;
    UNLOCK();
  }
  if ((DAT_140018900 != (code *)0x0) &&
     (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140018900), BVar5 != 0)) {
    (*DAT_140018900)(0,2);
  }
  *(undefined8 *)__initenv_exref = DAT_1400180f0;
  DAT_140018108 = FUN_140002a90(DAT_1400180e8,DAT_1400180f8);
  if (DAT_1400180ec != 0) {
    if (DAT_14001810c == 0) {
      _cexit();
    }
    return DAT_140018108;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_140018108);
}




void entry(void)

{
  __security_init_cookie();
  __tmainCRTStartup();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __report_gsfailure
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  HANDLE hProcess;
  DWORD64 unaff_retaddr;
  uintptr_t local_res8 [4];
  PVOID local_48;
  ulonglong local_40;
  PRUNTIME_FUNCTION local_38;
  DWORD64 local_30;
  DWORD64 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_res8[0] = _StackCookie;
  RtlCaptureContext(&DAT_1400181b0);
  local_30 = DAT_1400182a8;
  local_38 = RtlLookupFunctionEntry(DAT_1400182a8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140018248 = local_res8;
    DAT_1400182a8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_1400181b0,&local_48,&local_40,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140018120 = DAT_1400182a8;
  _DAT_140018230 = local_res8[0];
  _DAT_140018110 = 0xc0000409;
  _DAT_140018114 = 1;
  local_20 = DAT_140018038;
  local_18 = DAT_140018040;
  DAT_1400181a8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1400105a0);
  if (DAT_1400181a8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




/* Library Function - Single Match
    void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64))
   
   Library: Visual Studio 2008 Release */

void __cdecl __ArrayUnwind(void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4)

{
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
  }
  return;
}




/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,int,void
   (__cdecl*)(void * __ptr64))
   
   Library: Visual Studio 2008 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  pvVar1 = (void *)(uVar3 * param_2 + (longlong)param_1);
  while( true ) {
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
  }
  return;
}




void FUN_14000e548(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




undefined8 FUN_14000e5ac(void)

{
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_14000e568);
  return 0;
}




void FUN_14000e5cc(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140014428; puVar1 < &DAT_140014428; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* Library Function - Single Match
    _ValidateImageBase
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

BOOL __cdecl _ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)((short)*(int *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) ==
                  0x20b);
  }
  return uVar1;
}




/* Library Function - Single Match
    _FindPESection
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase +
           (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}




/* Library Function - Single Match
    _IsNonwritableInCurrentImage
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  uint uVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  IMAGE_DOS_HEADER *pImageBase;
  
  pImageBase = &IMAGE_DOS_HEADER_140000000;
  uVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140000000);
  p_Var2 = (PIMAGE_SECTION_HEADER)(ulonglong)uVar1;
  if (uVar1 != 0) {
    p_Var2 = _FindPESection((PBYTE)pImageBase,(longlong)pTarget - (longlong)pImageBase);
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      p_Var2 = (PIMAGE_SECTION_HEADER)(ulonglong)(~(p_Var2->Characteristics >> 0x1f) & 1);
    }
  }
  return (BOOL)p_Var2;
}




undefined8 FUN_14000e720(void)

{
  return 0;
}




/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __security_init_cookie(void)

{
  _FILETIME _Var1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  if (DAT_140018038 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140018038 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_140018038 == 0x2b992ddfa232) {
      DAT_140018038 = 0x2b992ddfa233;
    }
    DAT_140018040 = ~DAT_140018038;
  }
  else {
    DAT_140018040 = ~DAT_140018038;
  }
  return;
}




/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  lVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8) + *(longlong *)(param_2 + 8);
  if ((*(byte *)(lVar1 + 3) & 0xf) != 0) {
    param_1 = param_1 + (longlong)(int)(*(byte *)(lVar1 + 3) & 0xfffffff0);
  }
  __security_check_cookie(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

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




void FUN_14000e980(void)

{
  _unlock(8);
  return;
}




undefined * Catch_All_14000ea1e(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x50) = 0;
  return &DAT_14000e55d;
}




bool FUN_14000ea40(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




void Unwind_14000ea70(undefined8 param_1,longlong param_2)

{
  std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _vbase_destructor_((basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      *)(param_2 + 0x50));
  return;
}




void Unwind_14000ea90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x28));
  return;
}




void Unwind_14000eab0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x150) & 1) != 0) {
    *(uint *)(param_2 + 0x150) = *(uint *)(param_2 + 0x150) & 0xfffffffe;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (param_2 + 0x180));
  }
  return;
}




void Unwind_14000eae0(void)

{
  DAT_140018718 = DAT_140018718 & 0xfffffffe;
  return;
}




void Unwind_14000eb00(void)

{
  DAT_140018748 = DAT_140018748 & 0xfffffffe;
  return;
}




void Unwind_14000eb20(undefined8 param_1,longlong param_2)

{
  std::basic_ofstream<char,struct_std::char_traits<char>_>::_vbase_destructor_
            ((basic_ofstream<char,struct_std::char_traits<char>_> *)(param_2 + 0x30));
  return;
}




void Unwind_14000eb40(undefined8 param_1,longlong param_2)

{
  std::basic_ifstream<char,struct_std::char_traits<char>_>::_vbase_destructor_
            ((basic_ifstream<char,struct_std::char_traits<char>_> *)(param_2 + 0x30));
  return;
}




void Unwind_14000eb60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (param_2 + 0xb8));
  return;
}




void Unwind_14000eb80(undefined8 param_1,longlong param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(param_2 + 0x40));
  return;
}




void Unwind_14000eba0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 1) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffe;
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              (*(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 **)(param_2 + 0xb0));
  }
  return;
}




void Unwind_14000ebd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            (*(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
               **)(param_2 + 0xa8));
  return;
}




void Unwind_14000ebf0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (param_2 + 0xa0));
  }
  return;
}




void Unwind_14000ec20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x30));
  return;
}




void Unwind_14000ec40(undefined8 param_1,longlong param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(param_2 + 0x40));
  return;
}




void Unwind_14000ec60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x284) & 1) != 0) {
    *(uint *)(param_2 + 0x284) = *(uint *)(param_2 + 0x284) & 0xfffffffe;
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              (*(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 **)(param_2 + 0x2b0));
  }
  return;
}




void Unwind_14000ec90(undefined8 param_1,longlong param_2)

{
  FUN_140002cb0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14000ecb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x40));
  return;
}




void Unwind_14000ecd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x6c) & 1) != 0) {
    *(uint *)(param_2 + 0x6c) = *(uint *)(param_2 + 0x6c) & 0xfffffffe;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (param_2 + 0xa0));
  }
  return;
}




void Unwind_14000ed00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14000ed20(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_14000ed40(undefined8 param_1,longlong param_2)

{
  std::basic_ifstream<char,struct_std::char_traits<char>_>::_vbase_destructor_
            ((basic_ifstream<char,struct_std::char_traits<char>_> *)(param_2 + 0x40));
  return;
}




void Unwind_14000ed60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x188) & 1) != 0) {
    *(uint *)(param_2 + 0x188) = *(uint *)(param_2 + 0x188) & 0xfffffffe;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (param_2 + 0x1c0));
  }
  return;
}




void Unwind_14000ed90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x148));
  return;
}




void Unwind_14000edb0(undefined8 param_1,longlong param_2)

{
  std::basic_ifstream<char,struct_std::char_traits<char>_>::_vbase_destructor_
            ((basic_ifstream<char,struct_std::char_traits<char>_> *)(param_2 + 0x2850));
  return;
}




void Unwind_14000edd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x2984) & 1) != 0) {
    *(uint *)(param_2 + 0x2984) = *(uint *)(param_2 + 0x2984) & 0xfffffffe;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (param_2 + 0x29b0));
  }
  return;
}




void Unwind_14000ee00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x2958));
  return;
}




void Unwind_14000ee20(undefined8 param_1,longlong param_2)

{
  FUN_140002bf0((longlong *)(param_2 + 0x38));
  return;
}




undefined8 Catch_All_14000ee40(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0xd0) +
             (longlong)*(int *)(**(longlong **)(param_2 + 0xd0) + 4)),4,true);
  return 0x140003088;
}




void Unwind_14000ee90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x60));
  return;
}




void Unwind_14000eeb0(undefined8 param_1,longlong param_2)

{
  FUN_140002b00((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_14000eed0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x140));
  return;
}




void Unwind_14000eef0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x170));
  return;
}




void Unwind_14000ef10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x198) & 1) != 0) {
    *(uint *)(param_2 + 0x198) = *(uint *)(param_2 + 0x198) & 0xfffffffe;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (param_2 + 0x1d0));
  }
  return;
}




void Unwind_14000ef40(undefined8 param_1,longlong param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(param_2 + 0x78));
  return;
}




void Unwind_14000ef60(undefined8 param_1,longlong param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(param_2 + 0xa0));
  return;
}




void Unwind_14000ef80(undefined8 param_1,longlong param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(param_2 + 0x50));
  return;
}




void Unwind_14000efa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x28));
  return;
}




void Unwind_14000efc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xf8) & 1) != 0) {
    *(uint *)(param_2 + 0xf8) = *(uint *)(param_2 + 0xf8) & 0xfffffffe;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (param_2 + 0x130));
  }
  return;
}




void Unwind_14000eff0(undefined8 param_1,longlong param_2)

{
  FUN_140002b00((longlong *)(param_2 + 0x20));
  return;
}




void Unwind_14000f010(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (param_2 + 0x1c8));
  return;
}




void Unwind_14000f030(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x160) & 1) != 0) {
    *(uint *)(param_2 + 0x160) = *(uint *)(param_2 + 0x160) & 0xfffffffe;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (param_2 + 0x1c0));
  }
  return;
}




void Unwind_14000f060(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x68));
  return;
}




void Unwind_14000f080(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x30));
  return;
}




void Unwind_14000f0a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x58));
  return;
}




void Unwind_14000f0c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x30));
  return;
}




void Unwind_14000f0e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x88));
  return;
}




void Unwind_14000f100(void)

{
  DAT_140018844 = DAT_140018844 & 0xfffffffe;
  return;
}




void Unwind_14000f120(void)

{
  DAT_140018844 = DAT_140018844 & 0xfffffffd;
  return;
}




void Unwind_14000f140(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0xc0));
  return;
}




void Unwind_14000f160(void)

{
  DAT_140018844 = DAT_140018844 & 0xfffffffb;
  return;
}




void Unwind_14000f180(void)

{
  DAT_140018844 = DAT_140018844 & 0xfffffff7;
  return;
}




void Unwind_14000f1a0(void)

{
  DAT_140018844 = DAT_140018844 & 0xffffffef;
  return;
}




void Unwind_14000f1c0(void)

{
  DAT_140018844 = DAT_140018844 & 0xffffffdf;
  return;
}




void Unwind_14000f1e0(void)

{
  DAT_140018844 = DAT_140018844 & 0xffffffbf;
  return;
}




void Unwind_14000f200(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0xe8));
  return;
}




void Unwind_14000f220(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x98));
  return;
}




void Unwind_14000f240(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x60));
  return;
}




void Unwind_14000f260(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x198));
  return;
}




void Unwind_14000f280(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x170));
  return;
}




void Unwind_14000f2a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x120));
  return;
}




void Unwind_14000f2c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x1c8));
  return;
}




void Unwind_14000f2e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x1f0));
  return;
}




void Unwind_14000f300(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x218));
  return;
}




void Unwind_14000f320(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x240));
  return;
}




void Unwind_14000f340(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x268));
  return;
}




void Unwind_14000f360(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x290));
  return;
}




void Unwind_14000f380(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x2b8));
  return;
}




void Unwind_14000f3a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x2e0));
  return;
}




void Unwind_14000f3c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x308));
  return;
}




void Unwind_14000f3e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x330));
  return;
}




void Unwind_14000f400(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x358));
  return;
}




void Unwind_14000f420(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x380));
  return;
}




void Unwind_14000f440(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x3a8));
  return;
}




void Unwind_14000f460(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x3d0));
  return;
}




void Unwind_14000f480(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x3f8));
  return;
}




void Unwind_14000f4a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x148));
  return;
}




void Unwind_14000f4c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x420));
  return;
}




void Unwind_14000f4e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(param_2 + 0x58));
  return;
}




void Unwind_14000f500(undefined8 param_1,longlong param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(param_2 + 0xb0));
  return;
}




void Unwind_14000f520(undefined8 param_1,longlong param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(param_2 + 0x108));
  return;
}




void Unwind_14000f540(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x28));
  return;
}




void Unwind_14000f560(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x58));
  return;
}




void Unwind_14000f580(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x28));
  return;
}




void Unwind_14000f5a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x50));
  return;
}




void FUN_14000f5c0(void)

{
  FUN_1400026c0((longlong *)&DAT_140018850);
  atexit(FUN_14000f650);
  return;
}




void FUN_14000f5f0(void)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_1400186c8,".\\");
  atexit(FUN_14000f670);
  return;
}




void FUN_14000f620(void)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)&DAT_1400186a0,L".\\");
  atexit(FUN_14000f690);
  return;
}




void FUN_14000f650(void)

{
  FUN_140002720(0x140018850);
  return;
}




void FUN_14000f670(void)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_1400186c8);
  return;
}




void FUN_14000f690(void)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)&DAT_1400186a0);
  return;
}




void FUN_14000f6b0(void)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_140018750);
  return;
}




void FUN_14000f6d0(void)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_140018778);
  return;
}




void FUN_14000f6f0(void)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_1400187a0);
  return;
}




void FUN_14000f710(void)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_1400187c8);
  return;
}




void FUN_14000f730(void)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_1400187f0);
  return;
}




void FUN_14000f750(void)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_140018818);
  return;
}




void FUN_14000f770(void)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_140018720);
  return;
}




void FUN_14000f790(void)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_1400186f0);
  return;
}



