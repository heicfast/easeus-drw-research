
void FUN_180001030(char *param_1)

{
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10 [2];
  
  local_38 = 0xfffffffffffffffe;
  local_10[0] = DAT_180021010 ^ (ulonglong)auStack_68;
  local_30 = 1;
  local_2c = 2;
  local_28 = 4;
  local_24 = 8;
  local_20 = 0x10;
  local_1c = 0x20;
  local_18 = 0x40;
  local_14 = 0x80;
  DAT_180022660 = (undefined8 *)FUN_180006370(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  FUN_1800116a0(param_1,(undefined8 *)*DAT_180022660,&local_30,(undefined4 *)local_10);
  atexit((_func_5014 *)&DAT_180018c30);
  __security_check_cookie(local_10[0] ^ (ulonglong)auStack_68);
  return;
}




undefined8 FUN_1800010d0(undefined8 param_1,int param_2)

{
  DWORD DVar1;
  
  if (param_2 == 1) {
    DVar1 = GetVersion();
    if (((byte)DVar1 < 6) || ((byte)(DVar1 >> 8) < 2)) {
      return 0;
    }
  }
  return 1;
}




void EUCreateReFSQuickSearcher(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
                    /* 0x1100  1  EUCreateReFSQuickSearcher */
  puVar1 = (undefined8 *)operator_new(0x90);
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 2) = 0xe;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0;
  *puVar1 = RefsQuickSearchFiles::vftable;
  puVar2 = (undefined4 *)operator_new(0x210);
  uVar3 = FUN_1800019c0(puVar2,param_2,param_3);
  puVar1[0x11] = uVar3;
  *param_1 = puVar1;
  return;
}




void EUCreateReFSSearcher(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
                    /* 0x1180  2  EUCreateReFSSearcher */
  puVar1 = (undefined8 *)operator_new(0xc0);
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0xe;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[0xd] = 0;
  puVar1[0x16] = 0;
  *puVar1 = RefsSearchController::vftable;
  puVar2 = (undefined8 *)operator_new(0x40);
  FUN_1800066b0(puVar2);
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  uVar3 = FUN_1800064b0();
  puVar2[5] = uVar3;
  FUN_18000f100(puVar2 + 7);
  puVar1[0x17] = puVar2;
  *param_1 = puVar1;
  return;
}




undefined8 FUN_180001230(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




longlong * FUN_180001240(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  LOCK();
  puVar1 = (uint *)((longlong)param_1 + 0xc);
  uVar2 = *puVar1;
  plVar3 = (longlong *)(ulonglong)uVar2;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (uVar2 == 1) {
    if ((undefined **)*param_1 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
      free(param_1);
      return param_1;
    }
    plVar3 = (longlong *)(*(code *)((undefined **)*param_1)[1])();
  }
  return plVar3;
}




undefined8 FUN_180001280(void)

{
  return 0;
}




void FUN_180001290(undefined8 *param_1)

{
  *param_1 = CSearchedPartitionInfo::vftable;
  return;
}




undefined8 FUN_1800012a0(void)

{
  return 8;
}




void FUN_1800012b0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 8,4);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0xc,4);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x10,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x18,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x20,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x28,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x5c,4);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x60,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x68,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x70,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x80,4);
                    /* WARNING: Could not recover jumptable at 0x0001800013ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x58,4);
  return;
}




void FUN_1800013c0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 8,4);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0xc,4);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x10,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x18,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x20,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x28,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x5c,4);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x60,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x68,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x70,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x80,4);
                    /* WARNING: Could not recover jumptable at 0x0001800014be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x58,4);
  return;
}




undefined8 * FUN_1800014d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CSearchedPartitionInfo::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001500(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0xe;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x200;
  param_1[0xc] = 0;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *param_1 = refs::RefsPartitionInformation::vftable;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar1 = FUN_1800065e0();
  param_1[0x1a] = uVar1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  uVar1 = FUN_1800065e0();
  param_1[0x1c] = uVar1;
  return param_1;
}




undefined8 * FUN_180001620(undefined8 *param_1,uint param_2)

{
  FUN_180006420(param_1 + 0x1c);
  free((void *)param_1[0x1c]);
  FUN_180006420(param_1 + 0x1a);
  free((void *)param_1[0x1a]);
  *param_1 = CSearchedPartitionInfo::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800016a0(undefined8 *param_1)

{
  FUN_180006420(param_1 + 0x1c);
  free((void *)param_1[0x1c]);
  FUN_180006420(param_1 + 0x1a);
  free((void *)param_1[0x1a]);
  *param_1 = CSearchedPartitionInfo::vftable;
  return;
}




void FUN_180001700(longlong *param_1)

{
  FUN_180006420(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180001720(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_180001730(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_180001740(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}




void FUN_180001750(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_180001760(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000176c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
    return;
  }
  return;
}




void _guard_check_icall(void)

{
  return;
}




void FUN_180001790(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98 [7];
  longlong *local_60;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_a8 = 0xfffffffffffffffe;
  local_18 = DAT_180021010 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_60 = (longlong *)0x0;
  puVar2 = (undefined8 *)param_2[7];
  local_a0 = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    local_60 = (longlong *)(**(code **)*puVar2)(puVar2,local_98);
  }
  if ((local_60 != local_98) && (plVar3 = *(longlong **)(param_1 + 0x68), plVar3 != plVar1)) {
    *(longlong **)(param_1 + 0x68) = local_60;
    local_60 = plVar3;
    goto LAB_1800018a3;
  }
  local_20 = (longlong *)0x0;
  if (local_60 != (longlong *)0x0) {
    plVar3 = local_60;
    if (local_60 == local_98) {
      local_20 = (longlong *)(**(code **)(*local_60 + 8))(local_60,local_58);
      if (local_60 == (longlong *)0x0) goto LAB_180001866;
      (**(code **)(*local_60 + 0x20))
                (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
      plVar3 = local_20;
    }
    local_20 = plVar3;
    local_60 = (longlong *)0x0;
  }
LAB_180001866:
  FUN_1800063b0((longlong)local_98,plVar1);
  FUN_1800063b0((longlong)plVar1,local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))
              (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
  }
LAB_1800018a3:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x20))
              (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_180001900(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}




undefined1 FUN_180001930(void)

{
  return 0;
}




void FUN_180001940(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}




undefined8 * FUN_180001950(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800019c0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  longlong *plVar6;
  undefined1 auStackY_148 [32];
  undefined ***local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined4 *local_100;
  undefined **local_f8;
  code *local_f0;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined4 *local_e0;
  undefined ***local_c0;
  undefined8 local_b8;
  undefined4 *local_b0;
  longlong local_a8 [7];
  longlong *local_70;
  longlong local_68 [7];
  longlong *local_30;
  ulonglong local_28;
  
  local_b8 = 0xfffffffffffffffe;
  local_28 = DAT_180021010 ^ (ulonglong)auStackY_148;
  *param_1 = 0xe;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x16) = 0x2a;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_b0 = param_1;
  FUN_180001500((undefined8 *)(param_1 + 0x2a));
  FUN_1800066b0((undefined8 *)(param_1 + 0x66));
  pppuVar1 = (undefined ***)(param_1 + 0x6a);
  *pppuVar1 = (undefined **)0x0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  local_118 = pppuVar1;
  ppuVar4 = (undefined **)FUN_1800064e0();
  *pppuVar1 = ppuVar4;
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0xf;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  param_1[0x76] = 0;
  FUN_18000f100((undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x7a) = 0;
  pppuVar5 = (undefined ***)operator_new(0x10);
  local_118 = pppuVar5;
  FUN_1800066b0(pppuVar5);
  *(undefined ****)(param_1 + 0x7c) = pppuVar5;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  pppuVar5 = (undefined ***)(param_1 + 0x80);
  *pppuVar5 = (undefined **)0x0;
  *(undefined8 *)(param_1 + 0x82) = 0;
  local_118 = pppuVar5;
  ppuVar4 = (undefined **)FUN_1800064b0();
  *pppuVar5 = ppuVar4;
  local_118._0_4_ = 0x500;
  local_110 = &DAT_180002d30;
  local_108 = 0x30;
  local_107 = 0x2d;
  local_106 = 0;
  local_100 = param_1;
  plVar6 = (longlong *)FUN_180006d10(pppuVar1,(undefined4 *)&local_118);
  FUN_180006d70((longlong *)pppuVar1,&local_118,param_3,(int *)(plVar6 + 4),plVar6);
  local_118._0_4_ = 0x600;
  local_110 = &DAT_1800030d0;
  local_108 = 0xd0;
  local_107 = 0x30;
  local_106 = 0;
  local_100 = param_1;
  plVar6 = (longlong *)FUN_180006d10(pppuVar1,(undefined4 *)&local_118);
  FUN_180006d70((longlong *)pppuVar1,&local_118,param_3,(int *)(plVar6 + 4),plVar6);
  local_118 = (undefined ***)CONCAT44(local_118._4_4_,0x701);
  local_110 = &DAT_1800032e0;
  local_108 = 0xe0;
  local_107 = 0x32;
  local_106 = 0;
  local_100 = param_1;
  plVar6 = (longlong *)FUN_180006d10(pppuVar1,(undefined4 *)&local_118);
  FUN_180006d70((longlong *)pppuVar1,&local_118,param_3,(int *)(plVar6 + 4),plVar6);
  local_f8 = std::
             _Func_impl_no_alloc<class_std::_Binder<struct_std::_Unforced,bool_(__cdecl_RefsQuickSearchFilesImpl::*)(unsigned___int64,class_refs::RefsFileProperties*___ptr64&___ptr64)___ptr64,struct_RefsQuickSearchFilesImpl*___ptr64,struct_std::_Ph<1>_const&___ptr64,struct_std::_Ph<2>_const&___ptr64>,bool,unsigned___int64,class_refs::RefsFileProperties*___ptr64&___ptr64>
             ::vftable;
  local_f0 = FUN_1800046c0;
  local_e8 = (undefined1)local_110;
  local_e7 = local_110._1_1_;
  local_c0 = &local_f8;
  local_118 = &local_f8;
  lVar2 = *(longlong *)(param_1 + 0x78);
  plVar6 = (longlong *)(lVar2 + 0x68);
  local_70 = (longlong *)0x0;
  local_e0 = param_1;
  local_70 = FUN_180006ce0((longlong)&local_f8,local_a8);
  if ((local_70 != local_a8) && (plVar3 = *(longlong **)(lVar2 + 0xa0), plVar3 != plVar6)) {
    *(longlong **)(lVar2 + 0xa0) = local_70;
    local_70 = plVar3;
    goto LAB_180001d20;
  }
  local_30 = (longlong *)0x0;
  if (local_70 != (longlong *)0x0) {
    plVar3 = local_70;
    if (local_70 == local_a8) {
      local_30 = (longlong *)(**(code **)(*local_70 + 8))(local_70,local_68);
      if (local_70 == (longlong *)0x0) goto LAB_180001ceb;
      (**(code **)(*local_70 + 0x20))
                (local_70,CONCAT71((int7)((ulonglong)local_a8 >> 8),local_70 != local_a8));
      plVar3 = local_30;
    }
    local_30 = plVar3;
    local_70 = (longlong *)0x0;
  }
LAB_180001ceb:
  FUN_1800063b0((longlong)local_a8,plVar6);
  FUN_1800063b0((longlong)plVar6,local_68);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))
              (local_30,CONCAT71((int7)((ulonglong)local_68 >> 8),local_30 != local_68));
  }
LAB_180001d20:
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x20))
              (local_70,CONCAT71((int7)((ulonglong)local_a8 >> 8),local_70 != local_a8));
  }
  if (local_c0 != (undefined ***)0x0) {
    (*(code *)(*local_c0)[4])
              (local_c0,CONCAT71((int7)((ulonglong)*local_c0 >> 8),local_c0 != &local_f8));
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_148);
  return;
}




undefined4 * FUN_180001d90(undefined4 *param_1)

{
  *param_1 = 0xe;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x16) = 0x2a;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return param_1;
}




void FUN_180001e00(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(ulonglong *)(param_1 + 0x80)) {
    pvVar1 = *(void **)(param_1 + 0x68);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x80) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180001eab;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0xf;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(param_1 + 0x18);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x30) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_180001eab:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_180001ec0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180006510(param_1,*(longlong **)(lVar1 + 8));
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  free((void *)*param_1);
  return;
}




void FUN_180001f20(longlong *param_1)

{
  FUN_180005830(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180001f40(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *_Memory;
  longlong *plVar3;
  undefined8 *_Memory_00;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  FUN_180005830((longlong *)(param_1 + 0x200));
  FUN_1800058c0();
  FUN_180005830((longlong *)(param_1 + 0x200));
  free(*(void **)(param_1 + 0x200));
  puVar2 = (undefined8 *)(param_1 + 0x1f0);
  if ((puVar2 != (undefined8 *)0x0) && (_Memory = (void *)*puVar2, _Memory != (void *)0x0)) {
    plVar3 = *(longlong **)((longlong)_Memory + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        if ((undefined **)*plVar3 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
          plVar1 = plVar3 + 2;
          if ((plVar1 != (longlong *)0x0) &&
             (_Memory_00 = (undefined8 *)*plVar1, _Memory_00 != (undefined8 *)0x0)) {
            *_Memory_00 = 0;
            FUN_180005830(_Memory_00 + 0x21);
            free((void *)_Memory_00[0x21]);
            FUN_180006420(_Memory_00 + 0x1f);
            free((void *)_Memory_00[0x1f]);
            FUN_180006420(_Memory_00 + 0x1d);
            free((void *)_Memory_00[0x1d]);
            FUN_180006420(_Memory_00 + 0x1b);
            free((void *)_Memory_00[0x1b]);
            _Memory_00[1] = CSearchedPartitionInfo::vftable;
            free(_Memory_00);
            *plVar1 = 0;
          }
        }
        else {
          (**(code **)*plVar3)(plVar3);
        }
        FUN_180001240(plVar3);
      }
    }
    free(_Memory);
    *puVar2 = 0;
  }
  FUN_18000f200((undefined8 *)(param_1 + 0x1e0));
  FUN_180005cd0((longlong *)(param_1 + 0x1b8));
  FUN_180001ec0((longlong *)(param_1 + 0x1a8));
  FUN_180005a20(param_1 + 0x198);
  FUN_1800016a0((undefined8 *)(param_1 + 0xa8));
  FUN_180001e00(param_1);
  return;
}




undefined8 FUN_180002130(int *param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = *(longlong **)(param_1 + 0x66);
  if (plVar5 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if ((*param_1 == 10) && (param_1[0x17] != 0)) {
    lVar6 = *(longlong *)(param_1 + 2);
    *(longlong *)(param_1 + 0x30) = lVar6;
    param_1[0x2d] = param_1[0xe];
    plVar1 = *(longlong **)*plVar5;
    if (plVar1 == (longlong *)0x0) {
      iVar2 = 0x200;
    }
    else {
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      lVar6 = *(longlong *)(param_1 + 2);
      plVar5 = *(longlong **)(param_1 + 0x66);
    }
    param_1[0x40] = iVar2;
    param_1[0x52] = 0x4000;
    *(longlong *)(param_1 + 0x5c) = *(longlong *)(param_1 + 0x28) - lVar6;
    uVar3 = FUN_180011cd0(plVar5,(longlong)(param_1 + 0x2a));
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  uVar4 = FUN_180004980((longlong)param_1);
  return CONCAT71((int7)(uVar4 >> 8),1);
}




undefined8 FUN_1800021e0(longlong param_1,undefined ***param_2)

{
  longlong *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  bool bVar15;
  undefined8 *local_res8;
  undefined ***local_res10;
  undefined8 local_res18;
  undefined8 *local_res20;
  undefined **local_98;
  undefined8 *local_90;
  undefined **local_88;
  undefined8 *local_80;
  undefined **local_78;
  undefined8 *local_70;
  int *local_68;
  int *local_60;
  longlong local_58;
  
  local_res18 = 0xffffffffffffffff;
  if ((*(longlong *)(param_1 + 0x198) != 0) &&
     (uVar9 = *(int *)(param_1 + 0x100) * *(int *)(param_1 + 0xb4), uVar9 - 1 < 0x8000000)) {
    local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
    puVar11 = (undefined8 *)(ulonglong)uVar9;
    local_res10 = param_2;
    FUN_1800059b0((ulonglong *)&local_68,(ulonglong)uVar9,(byte *)&local_res8);
    plVar1 = *(longlong **)**(undefined8 **)(param_1 + 0x198);
    piVar10 = local_68;
    if ((plVar1 == (longlong *)0x0) ||
       ((bVar15 = local_68 == local_60, bVar15 ||
        (iVar4 = (**(code **)(*plVar1 + 8))
                           (plVar1,local_68,*(undefined8 *)(param_1 + 0x140),
                            *(undefined4 *)(param_1 + 0xb4),0), iVar4 == 0)))) {
      if (local_68 == (int *)0x0) {
        return local_res18;
      }
      if ((0xfff < (ulonglong)(local_58 - (longlong)local_68)) &&
         (piVar10 = *(int **)(local_68 + -2),
         0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)piVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      local_70 = (undefined8 *)0x0;
      local_78 = refs::RefsSupperBlock::vftable;
      local_res8 = (undefined8 *)operator_new(0x48);
      puVar5 = FUN_180011770(local_res8,local_68,(longlong)local_60 - (longlong)local_68);
      local_70 = puVar5;
      if (*(char *)(puVar5 + 1) == '\0') {
        (**(code **)*puVar5)(puVar5,1);
        if (local_68 == (int *)0x0) {
          return local_res18;
        }
        if ((0xfff < (ulonglong)(local_58 - (longlong)local_68)) &&
           (piVar10 = *(int **)(local_68 + -2),
           0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)*(int **)(local_68 + -2))))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      else {
        puVar13 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 0xb4) * puVar5[5]);
        plVar1 = *(longlong **)**(undefined8 **)(param_1 + 0x198);
        local_res8 = puVar13;
        if (((plVar1 == (longlong *)0x0) || (bVar15)) ||
           (iVar4 = (**(code **)(*plVar1 + 8))
                              (plVar1,local_68,puVar13,*(uint *)(param_1 + 0xb4),bVar15), iVar4 == 0
           )) {
          (**(code **)*puVar5)(puVar5,1);
          if (local_68 == (int *)0x0) {
            return local_res18;
          }
          if ((0xfff < (ulonglong)(local_58 - (longlong)local_68)) &&
             (piVar10 = *(int **)(local_68 + -2),
             0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)*(int **)(local_68 + -2))))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        else {
          local_90 = (undefined8 *)0x0;
          local_98 = refs::RefsCheckPoint::vftable;
          local_res20 = (undefined8 *)operator_new(0x48);
          puVar6 = FUN_180012650(local_res20,local_68,(ulonglong)puVar11);
          local_90 = puVar6;
          if ((bool)*(char *)(puVar6 + 1) == bVar15) {
            (**(code **)*puVar6)(puVar6,1);
            (**(code **)*puVar5)(puVar5,1);
            if (local_68 == (int *)0x0) {
              return local_res18;
            }
            if ((0xfff < (ulonglong)(local_58 - (longlong)local_68)) &&
               (piVar10 = *(int **)(local_68 + -2),
               0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)*(int **)(local_68 + -2)))))
            {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          else {
            local_res20 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 0xb4) * puVar5[6]);
            plVar1 = *(longlong **)**(undefined8 **)(param_1 + 0x198);
            if (((plVar1 == (longlong *)0x0) || (bVar15)) ||
               (iVar4 = (**(code **)(*plVar1 + 8))
                                  (plVar1,local_68,local_res20,*(uint *)(param_1 + 0xb4),bVar15),
               iVar4 == 0)) {
              (**(code **)*puVar6)(puVar6,1);
              (**(code **)*puVar5)(puVar5,1);
              if (local_68 == (int *)0x0) {
                return local_res18;
              }
              if ((0xfff < (ulonglong)(local_58 - (longlong)local_68)) &&
                 (piVar10 = *(int **)(local_68 + -2),
                 0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)*(int **)(local_68 + -2))))
                 ) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            else {
              local_80 = (undefined8 *)0x0;
              local_88 = refs::RefsCheckPoint::vftable;
              puVar7 = (undefined8 *)operator_new(0x48);
              puVar7 = FUN_180012650(puVar7,local_68,(ulonglong)puVar11);
              local_80 = puVar7;
              if ((bool)*(char *)(puVar7 + 1) == bVar15) {
                (**(code **)*puVar7)(puVar7,1);
                (**(code **)*puVar6)(puVar6,1);
                (**(code **)*puVar5)(puVar5,1);
                if (local_68 == (int *)0x0) {
                  return local_res18;
                }
                if ((0xfff < (ulonglong)(local_58 - (longlong)local_68)) &&
                   (piVar10 = *(int **)(local_68 + -2),
                   0x1f < (ulonglong)
                          ((longlong)local_68 + (-8 - (longlong)*(int **)(local_68 + -2))))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              else {
                pppuVar14 = &local_98;
                if ((ulonglong)puVar6[2] < (ulonglong)puVar7[2]) {
                  pppuVar14 = &local_88;
                }
                if (local_res10 != pppuVar14) {
                  ppuVar2 = pppuVar14[1];
                  ppuVar3 = local_res10[1];
                  *(undefined1 *)(ppuVar3 + 1) = *(undefined1 *)(ppuVar2 + 1);
                  ppuVar3[2] = ppuVar2[2];
                  *(undefined4 *)(ppuVar3 + 3) = *(undefined4 *)(ppuVar2 + 3);
                  *(undefined4 *)((longlong)ppuVar3 + 0x1c) =
                       *(undefined4 *)((longlong)ppuVar2 + 0x1c);
                  if (ppuVar3 + 4 != ppuVar2 + 4) {
                    puVar11 = (undefined8 *)ppuVar2[4];
                    FUN_18000f460((longlong *)(ppuVar3 + 4),(undefined8 *)*puVar11,puVar11);
                  }
                  puVar13 = local_res8;
                  if (ppuVar3 + 6 != ppuVar2 + 6) {
                    puVar11 = (undefined8 *)ppuVar2[7];
                    FUN_180012e20((ulonglong *)(ppuVar3 + 6),(undefined8 *)ppuVar2[6],puVar11);
                    puVar13 = local_res8;
                  }
                }
                uVar12 = (ulonglong)*(uint *)(param_1 + 0xb4);
                if ((*(uint *)(param_1 + 0xb4) != 0) &&
                   (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0)) {
                  FUN_1800089f0(*(longlong **)(param_1 + 0x1f8),*(longlong *)(param_1 + 0x140),
                                puVar11,uVar12);
                  uVar12 = (ulonglong)*(uint *)(param_1 + 0xb4);
                }
                uVar9 = (uint)uVar12;
                if ((uVar9 != 0) && (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0)) {
                  FUN_1800089f0(*(longlong **)(param_1 + 0x1f8),(longlong)puVar13,puVar11,uVar12);
                  uVar9 = *(uint *)(param_1 + 0xb4);
                }
                if ((uVar9 != 0) && (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0)) {
                  FUN_1800089f0(*(longlong **)(param_1 + 0x1f8),(longlong)local_res20,puVar11,
                                (ulonglong)uVar9);
                }
                uVar8 = FUN_180004ec0(param_1,(longlong)local_res10);
                local_res18 = 0xffffffffffffffff;
                if ((char)uVar8 == '\0') {
                  local_res18 = 0;
                }
                (**(code **)*puVar7)(puVar7,1);
                (**(code **)*puVar6)(puVar6,1);
                (**(code **)*puVar5)(puVar5,1);
                if (local_68 == (int *)0x0) {
                  return local_res18;
                }
                if ((0xfff < (ulonglong)(local_58 - (longlong)local_68)) &&
                   (piVar10 = *(int **)(local_68 + -2),
                   0x1f < (ulonglong)
                          ((longlong)local_68 + (-8 - (longlong)*(int **)(local_68 + -2))))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
            }
          }
        }
      }
    }
    free(piVar10);
  }
  return local_res18;
}




void FUN_180002770(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong *_Memory;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong local_res18 [2];
  longlong *local_80;
  ulonglong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  char local_50 [24];
  
  local_res18[0] = local_res18[0] & 0xffffffff00000000;
  plVar4 = (longlong *)FUN_180005c00(local_50,param_2);
  FUN_180003620(param_1,(longlong *)&local_80,plVar4,'\0');
  plVar4 = local_80;
  if (local_78 == (ulonglong *)0x0) {
    plVar4 = (longlong *)*local_80;
    *local_80 = (longlong)local_80;
    local_80[1] = (longlong)local_80;
    local_78 = (ulonglong *)0x0;
    if (plVar4 != local_80) {
      do {
        plVar9 = (longlong *)*plVar4;
        (**(code **)plVar4[2])(plVar4 + 2,0);
        free(plVar4);
        plVar4 = plVar9;
      } while (plVar9 != local_80);
    }
  }
  else {
    plVar9 = (longlong *)*local_80;
    while (puVar11 = (ulonglong *)0x0, plVar9 != plVar4) {
      lVar1 = plVar9[3];
      if (*(char *)(lVar1 + 0x58) == '\0') {
        if (3 < (ulonglong)(*(longlong *)(lVar1 + 0x20) - *(longlong *)(lVar1 + 0x18))) {
          puVar11 = *(ulonglong **)(*(longlong *)(lVar1 + 0x18) + 8);
          if (puVar11 == (ulonglong *)0x600) {
            FUN_1800041f0(param_1);
          }
          else if ((ulonglong *)0x700 < puVar11) {
            puVar11 = (ulonglong *)0x701;
          }
        }
        puVar3 = *(ulonglong **)(param_1 + 0x1a8);
        puVar5 = (ulonglong *)puVar3[1];
        puVar13 = puVar3;
        if (*(char *)((longlong)puVar3[1] + 0x19) == '\0') {
          do {
            iVar10 = (int)puVar11;
            if ((int)puVar5[4] < iVar10) {
              puVar6 = (ulonglong *)puVar5[2];
            }
            else {
              puVar6 = (ulonglong *)*puVar5;
              puVar13 = puVar5;
            }
            puVar5 = puVar6;
          } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
          if ((puVar13 == puVar3) || (puVar11 = puVar13, iVar10 < (int)puVar13[4]))
          goto LAB_180002918;
        }
        else {
LAB_180002918:
          puVar11 = puVar3;
        }
        if (puVar11 != puVar3) {
          lVar1 = *(longlong *)(plVar9[3] + 0x18);
          if ((ulonglong)(*(longlong *)(plVar9[3] + 0x20) - lVar1) < 4) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(ulonglong *)(lVar1 + 8);
          }
          puVar7 = FUN_18000b5f0((longlong)(plVar9 + 2),&local_60);
          plVar8 = (longlong *)puVar11[0xc];
          local_res18[0] = uVar12;
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,plVar9 + 2,puVar7,local_res18);
            plVar8 = (longlong *)*local_60;
            *local_60 = (longlong)local_60;
            local_60[1] = (longlong)local_60;
            local_58 = 0;
            _Memory = local_60;
            if (plVar8 != local_60) {
              do {
                plVar2 = (longlong *)*plVar8;
                free(plVar8);
                _Memory = local_60;
                plVar8 = plVar2;
              } while (plVar2 != local_60);
            }
            goto LAB_180002899;
          }
          std::_Xbad_function_call();
          break;
        }
        plVar9 = (longlong *)*plVar9;
      }
      else {
        FUN_180005c00((char *)&local_70,(undefined8 *)(lVar1 + 0x48));
        FUN_180002770(param_1,&local_70);
        plVar8 = (longlong *)*local_70;
        *local_70 = (longlong)local_70;
        local_70[1] = (longlong)local_70;
        local_68 = 0;
        _Memory = local_70;
        if (plVar8 != local_70) {
          do {
            plVar2 = (longlong *)*plVar8;
            free(plVar8);
            _Memory = local_70;
            plVar8 = plVar2;
          } while (plVar2 != local_70);
        }
LAB_180002899:
        free(_Memory);
        plVar9 = (longlong *)*plVar9;
      }
    }
    plVar4 = (longlong *)FUN_180005c00((char *)&local_60,param_2);
    FUN_180004820(param_1,plVar4);
    plVar4 = (longlong *)*local_80;
    *local_80 = (longlong)local_80;
    local_80[1] = (longlong)local_80;
    local_78 = puVar11;
    if (plVar4 != local_80) {
      do {
        plVar9 = (longlong *)*plVar4;
        (**(code **)plVar4[2])(plVar4 + 2,0);
        free(plVar4);
        plVar4 = plVar9;
      } while (plVar9 != local_80);
    }
  }
  free(local_80);
  return;
}




void FUN_180002a60(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong local_res20;
  ulonglong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  char local_50 [24];
  
  if (param_3 < 0xc9) {
    local_78 = 0xfffffffffffffffe;
    plVar3 = (longlong *)FUN_180005c00(local_50,param_2);
    FUN_180003620(param_1,(longlong *)&local_70,plVar3,'\0');
    plVar3 = local_70;
    if (local_68 == 0) {
      plVar3 = (longlong *)*local_70;
      *local_70 = (longlong)local_70;
      local_70[1] = (longlong)local_70;
      local_68 = 0;
      if (plVar3 != local_70) {
        do {
          plVar1 = (longlong *)*plVar3;
          (**(code **)plVar3[2])(plVar3 + 2,0);
          free(plVar3);
          plVar3 = plVar1;
        } while (plVar1 != local_70);
      }
    }
    else {
      for (plVar1 = (longlong *)*local_70; plVar1 != plVar3; plVar1 = (longlong *)*plVar1) {
        lVar7 = plVar1[3];
        if (*(char *)(lVar7 + 0x58) == '\0') {
          lVar2 = *(longlong *)(lVar7 + 0x30);
          lVar7 = *(longlong *)(lVar7 + 0x38) - lVar2;
          if (lVar7 == 0xa0) {
            lVar7 = *(longlong *)(lVar2 + 0x90);
            uVar8 = *(ulonglong *)(lVar2 + 0x98);
          }
          else if (lVar7 == 0xe0) {
            lVar7 = *(longlong *)(lVar2 + 0xd0);
            uVar8 = *(ulonglong *)(lVar2 + 0xd8);
          }
          else {
            lVar7 = 0;
            uVar8 = 0;
          }
          if (uVar8 == *(uint *)(param_1 + 0x148)) {
            local_res20 = *(uint *)(param_1 + 0x14c) * uVar8;
            plVar6 = *(longlong **)(param_1 + 0x188);
            plVar4 = (longlong *)plVar6[1];
            plVar9 = plVar6;
            if (*(char *)(plVar6[1] + 0x19) == '\0') {
              do {
                if ((ulonglong)plVar4[4] < local_res20) {
                  plVar5 = (longlong *)plVar4[2];
                }
                else {
                  plVar5 = (longlong *)*plVar4;
                  plVar9 = plVar4;
                }
                plVar4 = plVar5;
              } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
              if ((plVar9 == plVar6) || (local_res20 < (ulonglong)plVar9[4])) goto LAB_180002bd7;
            }
            else {
LAB_180002bd7:
              local_88 = &local_res20;
              plVar6 = (longlong *)
                       FUN_180007530((undefined8 *)(param_1 + 0x188),local_res20,&local_88);
              FUN_180007560((longlong *)(param_1 + 0x188),&local_80,plVar9,(ulonglong *)(plVar6 + 4)
                            ,plVar6);
              plVar9 = local_80;
            }
            plVar9[5] = lVar7;
            *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
          }
        }
        else {
          param_3 = param_3 + 1;
          FUN_180005c00((char *)&local_60,(undefined8 *)(lVar7 + 0x48));
          FUN_180002a60(param_1,&local_60,param_3);
          plVar6 = (longlong *)*local_60;
          *local_60 = (longlong)local_60;
          local_60[1] = (longlong)local_60;
          local_58 = 0;
          if (plVar6 != local_60) {
            do {
              plVar4 = (longlong *)*plVar6;
              free(plVar6);
              plVar6 = plVar4;
            } while (plVar4 != local_60);
          }
          free(local_60);
        }
      }
      plVar3 = (longlong *)FUN_180005c00((char *)&local_60,param_2);
      FUN_180004820(param_1,plVar3);
      plVar3 = (longlong *)*local_70;
      *local_70 = (longlong)local_70;
      local_70[1] = (longlong)local_70;
      local_68 = 0;
      if (plVar3 != local_70) {
        do {
          plVar1 = (longlong *)*plVar3;
          (**(code **)plVar3[2])(plVar3 + 2,0);
          free(plVar3);
          plVar3 = plVar1;
        } while (plVar1 != local_70);
      }
    }
    free(local_70);
  }
  return;
}




void FUN_1800032f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  longlong *plVar6;
  undefined6 extraout_var;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  char local_68 [16];
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_180021010 ^ (ulonglong)auStack_a8;
  FUN_180005c00((char *)&local_88,(undefined8 *)(*(longlong *)(param_2 + 8) + 0x48));
  if (local_80 == 0) {
    plVar6 = (longlong *)*local_88;
    *local_88 = (longlong)local_88;
    local_88[1] = (longlong)local_88;
    local_80 = 0;
    if (plVar6 != local_88) {
      do {
        plVar2 = (longlong *)*plVar6;
        free(plVar6);
        plVar6 = plVar2;
      } while (plVar2 != local_88);
    }
  }
  else {
    cVar1 = *(char *)(*(longlong *)(param_2 + 8) + 0x59);
    plVar6 = (longlong *)FUN_180005c00(local_68,&local_88);
    FUN_180003620(param_1,(longlong *)&local_78,plVar6,cVar1);
    plVar6 = local_78;
    if (local_70 == 0) {
      plVar6 = (longlong *)*local_78;
      *local_78 = (longlong)local_78;
      local_78[1] = (longlong)local_78;
      local_70 = 0;
      if (plVar6 != local_78) {
        do {
          plVar2 = (longlong *)*plVar6;
          (**(code **)plVar6[2])(plVar6 + 2,0);
          free(plVar6);
          plVar6 = plVar2;
        } while (plVar2 != local_78);
      }
      free(local_78);
      plVar6 = (longlong *)*local_88;
      *local_88 = (longlong)local_88;
      local_88[1] = (longlong)local_88;
      local_80 = 0;
      if (plVar6 != local_88) {
        do {
          plVar2 = (longlong *)*plVar6;
          free(plVar6);
          plVar6 = plVar2;
        } while (plVar2 != local_88);
      }
    }
    else {
      local_40 = 0;
      uStack_38 = 0xf;
      local_50 = 0;
      for (plVar2 = (longlong *)*local_78; plVar2 != plVar6; plVar2 = (longlong *)*plVar2) {
        plVar7 = plVar2 + 2;
        *(undefined1 *)(plVar2[3] + 0x5a) = 1;
        if (*(char *)(plVar2[3] + 0x59) == '\0') {
          *(undefined1 *)(plVar2[3] + 0x59) = *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x59);
        }
        lVar8 = plVar2[3];
        if (*(char *)(lVar8 + 0x58) == '\0') {
          uVar3 = FUN_18000b820((longlong)plVar7);
          iVar5 = (int)CONCAT62(extraout_var,uVar3);
          if (iVar5 == 0x10) {
            FUN_18000cbd0(*(longlong *)(param_1 + 0x1e0),(longlong)plVar7);
          }
          else if (iVar5 == 0x30) {
            if ((ulonglong)(*(longlong *)(lVar8 + 0x20) - *(longlong *)(lVar8 + 0x18)) < 4) {
              sVar4 = 0;
            }
            else {
              sVar4 = *(short *)(*(longlong *)(lVar8 + 0x18) + 2);
            }
            if (sVar4 == 1) {
              FUN_18000ba90(*(longlong **)(param_1 + 0x1e0),(longlong)plVar7);
            }
            else if (sVar4 == 2) {
              FUN_18000c920(*(longlong *)(param_1 + 0x1e0),(longlong)plVar7);
            }
          }
        }
        else {
          FUN_1800032f0(param_1,(longlong)plVar7,param_3);
        }
      }
      plVar6 = (longlong *)FUN_180005c00(local_68,&local_88);
      FUN_180004820(param_1,plVar6);
      plVar6 = (longlong *)*local_78;
      *local_78 = (longlong)local_78;
      local_78[1] = (longlong)local_78;
      local_70 = 0;
      if (plVar6 != local_78) {
        do {
          plVar2 = (longlong *)*plVar6;
          (**(code **)plVar6[2])(plVar6 + 2,0);
          free(plVar6);
          plVar6 = plVar2;
        } while (plVar2 != local_78);
      }
      free(local_78);
      plVar6 = (longlong *)*local_88;
      *local_88 = (longlong)local_88;
      local_88[1] = (longlong)local_88;
      local_80 = 0;
      if (plVar6 != local_88) {
        do {
          plVar2 = (longlong *)*plVar6;
          free(plVar6);
          plVar6 = plVar2;
        } while (plVar2 != local_88);
      }
    }
  }
  free(local_88);
  __security_check_cookie(local_30 ^ (ulonglong)auStack_a8);
  return;
}




longlong * FUN_180003620(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int *_Memory;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *local_58;
  undefined8 local_50;
  int *local_48;
  int *local_40;
  longlong lStack_38;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = FUN_180006330(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  *param_2 = lVar3;
  if (param_3[1] != 0) {
    lVar3 = *(longlong *)*param_3;
    if (param_4 != '\0') {
      puVar1 = *(undefined8 **)(param_1 + 0x200);
      if (*(char *)((longlong)puVar1[1] + 0x19) == '\0') {
        uVar10 = *(ulonglong *)(lVar3 + 0x10);
        puVar4 = (undefined8 *)puVar1[1];
        puVar8 = puVar1;
        do {
          if ((ulonglong)puVar4[4] < uVar10) {
            puVar5 = (undefined8 *)puVar4[2];
          }
          else {
            puVar5 = (undefined8 *)*puVar4;
            puVar8 = puVar4;
          }
          puVar4 = puVar5;
        } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
        if ((puVar8 != puVar1) && ((ulonglong)puVar8[4] <= uVar10)) goto LAB_180003849;
      }
    }
    local_48 = (int *)0x0;
    local_40 = (int *)0x0;
    lStack_38 = 0;
    uVar6 = FUN_180011b50((longlong *)**(undefined8 **)(param_1 + 0x198),(longlong *)&local_48,
                          param_3);
    if (((char)uVar6 == '\0') || (local_48 == local_40)) {
      if (local_48 == (int *)0x0) goto LAB_180003849;
      _Memory = local_48;
      if ((0xfff < (ulonglong)(lStack_38 - (longlong)local_48)) &&
         (_Memory = *(int **)(local_48 + -2),
         0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      uVar10 = (longlong)local_40 - (longlong)local_48;
      plVar7 = (longlong *)
               FUN_18000ae70((char *)&local_58,local_48,uVar10,
                             *(undefined8 *)(*(longlong *)*param_3 + 0x10));
      if (param_2 != plVar7) {
        FUN_180005de0(param_2);
        lVar2 = *param_2;
        *param_2 = *plVar7;
        *plVar7 = lVar2;
        lVar2 = param_2[1];
        param_2[1] = plVar7[1];
        plVar7[1] = lVar2;
      }
      plVar7 = (longlong *)*local_58;
      *local_58 = (longlong)local_58;
      local_58[1] = (longlong)local_58;
      local_50 = 0;
      if (plVar7 != local_58) {
        do {
          plVar9 = (longlong *)*plVar7;
          (**(code **)plVar7[2])(plVar7 + 2,0);
          free(plVar7);
          plVar7 = plVar9;
        } while (plVar9 != local_58);
      }
      free(local_58);
      FUN_180006a50((longlong *)(param_1 + 0x200),&local_58,uVar10,(ulonglong *)(lVar3 + 0x10));
      if (local_48 == (int *)0x0) goto LAB_180003849;
      _Memory = local_48;
      if ((0xfff < (ulonglong)(lStack_38 - (longlong)local_48)) &&
         (_Memory = *(int **)(local_48 + -2),
         0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)*(int **)(local_48 + -2))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(_Memory);
  }
LAB_180003849:
  plVar7 = (longlong *)*param_3;
  plVar9 = (longlong *)*plVar7;
  *plVar7 = (longlong)plVar7;
  *(longlong *)(*param_3 + 8) = *param_3;
  param_3[1] = 0;
  if (plVar9 != (longlong *)*param_3) {
    do {
      plVar7 = (longlong *)*plVar9;
      free(plVar9);
      plVar9 = plVar7;
    } while (plVar7 != (longlong *)*param_3);
  }
  free((void *)*param_3);
  return param_2;
}




undefined8 * FUN_1800038b0(undefined8 *param_1,ulonglong param_2)

{
  void *_Memory;
  longlong *plVar1;
  
  _Memory = (void *)param_1[0x11];
  *param_1 = RefsQuickSearchFiles::vftable;
  if (_Memory != (void *)0x0) {
    FUN_180001f40((longlong)_Memory);
    free(_Memory);
  }
  param_1[0x11] = 0;
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180003950(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *_Memory;
  undefined8 uVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 local_38;
  longlong *local_30;
  
  if (param_2 != 0) {
    puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 0x88) + 0x198);
    *(longlong *)*puVar8 = param_2;
    lVar4 = *(longlong *)(param_1 + 0x88);
    plVar7 = *(longlong **)(lVar4 + 0x1a0);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar4 + 0x1a0);
    }
    local_38 = *(undefined8 *)(lVar4 + 0x198);
    pcVar6 = (code *)&local_38;
    local_30 = plVar7;
    FUN_18000f2c0(*(undefined8 **)(lVar4 + 0x1e0),(undefined8 *)pcVar6);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        pcVar6 = *(code **)*plVar7;
        if ((undefined **)*plVar7 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
          plVar1 = plVar7 + 2;
          if ((plVar1 != (longlong *)0x0) &&
             (_Memory = (undefined8 *)*plVar1, _Memory != (undefined8 *)0x0)) {
            *_Memory = 0;
            FUN_180005830(_Memory + 0x21);
            free((void *)_Memory[0x21]);
            FUN_180006420(_Memory + 0x1f);
            free((void *)_Memory[0x1f]);
            FUN_180006420(_Memory + 0x1d);
            free((void *)_Memory[0x1d]);
            FUN_180006420(_Memory + 0x1b);
            free((void *)_Memory[0x1b]);
            pcVar6 = (code *)0x118;
            _Memory[1] = CSearchedPartitionInfo::vftable;
            free(_Memory);
            *plVar1 = 0;
          }
        }
        else {
          (*pcVar6)(plVar7);
        }
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar6 = (code *)((undefined **)*plVar7)[1];
          if ((undefined **)*plVar7 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
            pcVar6 = (code *)0x1;
            FUN_180006c80(plVar7,1);
          }
          else {
            (*pcVar6)();
          }
        }
      }
    }
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x1e0) + 0x58) =
         *(undefined8 *)(param_1 + 0x70);
    uVar5 = FUN_180002130(*(int **)(param_1 + 0x88));
    if ((char)uVar5 != '\0') {
      FUN_180003d50(param_1,pcVar6,puVar8,param_4);
    }
  }
  return 0;
}




void FUN_180003b30(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x88);
  *puVar1 = *param_2;
  *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
  plVar2 = (longlong *)(param_2 + 6);
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
  if ((longlong *)(puVar1 + 6) != plVar2) {
    if (0xf < *(ulonglong *)(param_2 + 0xc)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180006170((longlong *)(puVar1 + 6),plVar2,*(size_t *)(param_2 + 10));
  }
  plVar2 = (longlong *)(param_2 + 0x1a);
  puVar1[0xe] = param_2[0xe];
  puVar1[0xf] = param_2[0xf];
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined1 *)(puVar1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((longlong)puVar1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  puVar1[0x17] = param_2[0x17];
  *(undefined1 *)(puVar1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if ((longlong *)(puVar1 + 0x1a) != plVar2) {
    if (0xf < *(ulonglong *)(param_2 + 0x20)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180006170((longlong *)(puVar1 + 0x1a),plVar2,*(size_t *)(param_2 + 0x1e));
  }
  *(undefined8 *)(puVar1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(puVar1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined1 *)(puVar1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return;
}




void FUN_180003c20(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x1e8) = param_2;
  return;
}




void FUN_180003c30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong local_res8 [4];
  
  plVar1 = (longlong *)param_2[1];
  local_res8[0] = *(longlong *)(param_1 + 0x88) + 0xa8;
  if ((longlong *)param_2[2] != plVar1) {
    *plVar1 = local_res8[0];
    param_2[1] = param_2[1] + 8;
    return;
  }
  FUN_180006780(param_2,plVar1,local_res8);
  return;
}




undefined8
FUN_180003c80(longlong param_1,undefined8 param_2,int *param_3,ulonglong param_4,undefined4 *param_5
             )

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)**(ulonglong **)(*(longlong *)(param_1 + 0x88) + 0x1f0);
  *(undefined8 *)*puVar1 = param_2;
  if ((param_3 != (int *)0x0) && (0x1ff < param_4)) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    uVar3 = FUN_180010390(*(longlong **)(lVar2 + 0x1f0),(longlong)param_3,param_4,param_5);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_180010630(*(longlong **)(lVar2 + 0x1f0),param_3,param_4,param_5);
      if ((char)uVar3 == '\0') {
        return uVar3;
      }
    }
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return (ulonglong)puVar1 & 0xffffffffffffff00;
}




void FUN_180003d30(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x1f8) = param_2;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}




longlong FUN_180003d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined **local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  longlong local_20;
  
  lVar4 = -1;
  local_38 = (undefined8 *)0x0;
  local_40 = refs::RefsCheckPoint::vftable;
  puVar1 = (undefined8 *)operator_new(0x48);
  puVar1 = FUN_180012530(puVar1);
  lVar2 = *(longlong *)(param_1 + 0x88);
  local_38 = puVar1;
  if (*(int *)(lVar2 + 0x5c) == 0) {
    lVar2 = FUN_1800021e0(lVar2,&local_40);
    if (lVar2 != 0) {
      if (puVar1 == (undefined8 *)0x0) {
        return lVar2;
      }
      (**(code **)*puVar1)(puVar1,1);
      return lVar2;
    }
    FUN_180012a70((ulonglong *)&local_30,puVar1 + 6);
    lVar4 = FUN_180003f40(*(longlong *)(param_1 + 0x88),(longlong *)&local_30);
    puVar3 = local_30;
    if (local_30 == (undefined8 *)0x0) goto LAB_180003f10;
    for (; puVar3 != local_28; puVar3 = puVar3 + 2) {
      (**(code **)*puVar3)(puVar3,0);
    }
    puVar3 = local_30;
    if ((0xfff < (local_20 - (longlong)local_30 & 0xfffffffffffffff0U)) &&
       (puVar3 = (undefined8 *)local_30[-1],
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)local_30[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    lVar2 = FUN_180004bf0(lVar2,&local_40);
    if (lVar2 != 0) goto LAB_180003f10;
    lVar2 = *(longlong *)(param_1 + 0x88);
    FUN_180012a70((ulonglong *)&local_30,puVar1 + 6);
    lVar4 = FUN_180003f40(lVar2,(longlong *)&local_30);
    puVar3 = local_30;
    if (local_30 == (undefined8 *)0x0) goto LAB_180003f10;
    for (; puVar3 != local_28; puVar3 = puVar3 + 2) {
      (**(code **)*puVar3)(puVar3,0);
    }
    puVar3 = local_30;
    if ((0xfff < (local_20 - (longlong)local_30 & 0xfffffffffffffff0U)) &&
       (puVar3 = (undefined8 *)local_30[-1],
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)puVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  free(puVar3);
LAB_180003f10:
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return lVar4;
}




undefined8 FUN_180003f40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res10;
  longlong *local_30;
  undefined8 local_28;
  
  if (0xc < (ulonglong)(param_2[1] - *param_2 >> 4)) {
    FUN_180005c00((char *)&local_30,(undefined8 *)(*(longlong *)(*param_2 + 0x78) + 0x10));
    FUN_180002a60(param_1,&local_30,0);
    plVar4 = (longlong *)*local_30;
    *local_30 = (longlong)local_30;
    local_30[1] = (longlong)local_30;
    local_28 = 0;
    if (plVar4 != local_30) {
      do {
        plVar5 = (longlong *)*plVar4;
        free(plVar4);
        plVar4 = plVar5;
      } while (plVar5 != local_30);
    }
    free(local_30);
    if (*(longlong *)(param_1 + 400) == 0) {
      FUN_180005c00((char *)&local_30,(undefined8 *)(*(longlong *)(*param_2 + 0x88) + 0x10));
      FUN_180002a60(param_1,&local_30,0);
      plVar4 = (longlong *)*local_30;
      *local_30 = (longlong)local_30;
      local_30[1] = (longlong)local_30;
      local_28 = 0;
      if (plVar4 != local_30) {
        do {
          plVar5 = (longlong *)*plVar4;
          free(plVar4);
          plVar4 = plVar5;
        } while (plVar5 != local_30);
      }
      free(local_30);
    }
    plVar4 = (longlong *)(**(longlong **)(param_1 + 0x198) + 0xf8);
    if (plVar4 != (longlong *)(param_1 + 0x188)) {
      FUN_180006420(plVar4);
      FUN_180011fe0(plVar4,(longlong *)(param_1 + 0x188),local_res10);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x1e0) + 0x50) = *(undefined4 *)(param_1 + 0x1d8);
    FUN_180005c00((char *)&local_30,(undefined8 *)(*(longlong *)(*param_2 + 8) + 0x10));
    FUN_180002770(param_1,&local_30);
    plVar4 = (longlong *)*local_30;
    *local_30 = (longlong)local_30;
    local_30[1] = (longlong)local_30;
    local_28 = 0;
    if (plVar4 != local_30) {
      do {
        plVar5 = (longlong *)*plVar4;
        free(plVar4);
        plVar4 = plVar5;
      } while (plVar5 != local_30);
    }
    free(local_30);
    FUN_180005330(param_1);
    FUN_18000ef20(*(longlong *)(param_1 + 0x1e0));
    FUN_180006420((longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x20));
    FUN_180006420((longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x10));
    FUN_180005830((longlong *)(*(longlong *)(param_1 + 0x1e0) + 0xa8));
    plVar5 = (longlong *)(param_1 + 0x200);
    lVar1 = *plVar5;
    plVar4 = *(longlong **)(lVar1 + 8);
    lVar3 = lVar1;
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      do {
        FUN_180005d70(plVar5,(longlong *)plVar4[2]);
        plVar2 = (longlong *)*plVar4;
        free(plVar4);
        plVar4 = plVar2;
      } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
      lVar3 = *plVar5;
    }
    *(longlong *)(lVar3 + 8) = lVar1;
    *(longlong *)*plVar5 = lVar1;
    *(longlong *)(*plVar5 + 0x10) = lVar1;
    *(undefined8 *)(param_1 + 0x208) = 0;
  }
  return 0;
}




void FUN_1800041f0(longlong param_1)

{
  undefined8 *_Memory;
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *_Memory_00;
  longlong *plVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong *_Src;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_86;
  undefined8 local_7e;
  longlong local_76 [2];
  size_t local_66;
  ulonglong local_5e;
  undefined8 local_56;
  undefined8 *local_4e;
  undefined8 local_46;
  ulonglong local_38;
  
  local_c0 = 0xfffffffffffffffe;
  local_38 = DAT_180021010 ^ (ulonglong)auStack_e8;
  plVar3 = (longlong *)operator_new(0x290);
  local_c8 = plVar3;
  plVar4 = FUN_180009250(plVar3);
  if (plVar4 != (longlong *)0x0) {
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    lVar8 = -1;
    local_86 = 0xffffffffffffffff;
    local_7e = 0;
    local_66 = 0;
    local_5e = 0xf;
    local_76[0]._0_1_ = 0;
    local_56 = 0;
    local_4e = (undefined8 *)0x0;
    local_46 = 0;
    local_4e = (undefined8 *)FUN_180006670(plVar3,(undefined8 *)0x0,(undefined8 *)0x0);
    FUN_180006170(local_76,&DAT_1800192d0,4);
    uVar7 = (uint)local_90 | 0x10;
    local_90 = local_90 | 0x10;
    plVar3 = (longlong *)operator_new(0x8b);
    *(undefined4 *)(plVar3 + 1) = 0;
    *(undefined1 *)(plVar3 + 2) = 0;
    *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
    *plVar3 = (longlong)refs::RefsFileProperties::vftable;
    local_c8 = plVar3;
    FUN_180004570((undefined8 *)((longlong)plVar3 + 0x11));
    *(undefined8 *)((longlong)plVar3 + 0x11) = local_b8;
    *(undefined8 *)((longlong)plVar3 + 0x19) = local_b0;
    *(undefined8 *)((longlong)plVar3 + 0x21) = local_a8;
    *(undefined8 *)((longlong)plVar3 + 0x29) = local_a0;
    *(undefined8 *)((longlong)plVar3 + 0x31) = local_98;
    *(uint *)((longlong)plVar3 + 0x39) = uVar7;
    *(undefined2 *)((longlong)plVar3 + 0x3d) = local_90._4_2_;
    *(undefined1 *)((longlong)plVar3 + 0x3f) = local_90._6_1_;
    *(undefined1 *)(plVar3 + 8) = local_90._7_1_;
    *(undefined1 *)((longlong)plVar3 + 0x41) = (undefined1)local_88;
    *(undefined1 *)((longlong)plVar3 + 0x42) = local_88._1_1_;
    *(undefined8 *)((longlong)plVar3 + 0x43) = local_86;
    *(undefined8 *)((longlong)plVar3 + 0x4b) = local_7e;
    if ((longlong *)((longlong)plVar3 + 0x53) != local_76) {
      plVar6 = local_76;
      if (0xf < local_5e) {
        plVar6 = (longlong *)CONCAT71(local_76[0]._1_7_,(undefined1)local_76[0]);
      }
      FUN_180006170((longlong *)((longlong)plVar3 + 0x53),plVar6,local_66);
    }
    _Memory_00 = local_4e;
    *(undefined8 *)((longlong)plVar3 + 0x73) = local_56;
    if ((undefined8 **)((longlong)plVar3 + 0x7b) != &local_4e) {
      FUN_1800137e0((longlong *)((longlong)plVar3 + 0x7b),(undefined8 *)*local_4e,local_4e);
    }
    plVar4[6] = (longlong)plVar3;
    (**(code **)(*plVar4 + 0x38))
              (plVar4,*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xb4));
    (**(code **)(*plVar4 + 0x40))(plVar4,10);
    plVar6 = (longlong *)(param_1 + 0x1b8);
    if ((*(ulonglong *)(param_1 + 0x1c8) != 0) && (*(ulonglong *)(param_1 + 0x1c8) < 0x41)) {
      _Src = plVar6;
      if (0xf < *(ulonglong *)(param_1 + 0x1d0)) {
        _Src = (longlong *)*plVar6;
      }
      if ((void *)plVar4[0x3b] != (void *)0x0) {
        free((void *)plVar4[0x3b]);
        plVar4[0x3b] = 0;
      }
      if (_Src != (longlong *)0x0) {
        do {
          lVar8 = lVar8 + 1;
        } while (*(char *)((longlong)_Src + lVar8) != '\0');
        uVar7 = (uint)lVar8;
        if (400 < uVar7) {
          uVar7 = 400;
        }
        *(uint *)(plVar4 + 0x3c) = uVar7;
        pvVar5 = operator_new((ulonglong)(uVar7 + 1));
        plVar4[0x3b] = (longlong)pvVar5;
        memcpy(pvVar5,_Src,(ulonglong)*(uint *)(plVar4 + 0x3c));
        *(undefined1 *)((ulonglong)*(uint *)(plVar4 + 0x3c) + plVar4[0x3b]) = 0;
      }
      if (0xf < *(ulonglong *)(param_1 + 0x1d0)) {
        plVar6 = (longlong *)*plVar6;
      }
      (**(code **)(*plVar3 + 8))(plVar3,plVar6);
    }
    plVar4[10] = 0x600;
    (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x18))
              (*(longlong **)(param_1 + 0x1e8),plVar4,0,0);
    _Memory = (undefined8 *)*_Memory_00;
    *_Memory_00 = _Memory_00;
    _Memory_00[1] = _Memory_00;
    while (_Memory != _Memory_00) {
      puVar1 = (undefined8 *)*_Memory;
      free(_Memory);
      _Memory = puVar1;
    }
    free(_Memory_00);
    if (0xf < local_5e) {
      pvVar2 = (void *)CONCAT71(local_76[0]._1_7_,(undefined1)local_76[0]);
      pvVar5 = pvVar2;
      if ((0xfff < local_5e + 1) &&
         (pvVar5 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar5);
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_e8);
  return;
}




undefined8 * FUN_180004570(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x52) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a) = 0xf;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x62) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x72) = 0;
  uVar1 = FUN_180006670(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  *(undefined8 *)((longlong)param_1 + 0x6a) = uVar1;
  return param_1;
}




void FUN_180004600(longlong param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *_Memory;
  void *_Memory_00;
  
  plVar3 = *(longlong **)(param_1 + 0x6a);
  _Memory = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(longlong *)(*(longlong *)(param_1 + 0x6a) + 8) = *(longlong *)(param_1 + 0x6a);
  *(undefined8 *)(param_1 + 0x72) = 0;
  plVar3 = *(longlong **)(param_1 + 0x6a);
  if (_Memory != plVar3) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      plVar3 = *(longlong **)(param_1 + 0x6a);
      _Memory = plVar1;
    } while (plVar1 != plVar3);
  }
  free(plVar3);
  if (0xf < *(ulonglong *)(param_1 + 0x5a)) {
    pvVar2 = *(void **)(param_1 + 0x42);
    _Memory_00 = pvVar2;
    if ((0xfff < *(ulonglong *)(param_1 + 0x5a) + 1) &&
       (_Memory_00 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory_00)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory_00);
  }
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0xf;
  *(undefined1 *)(param_1 + 0x42) = 0;
  return;
}




ulonglong FUN_1800046c0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong local_res8;
  
  plVar2 = (longlong *)operator_new(0x93);
  *plVar2 = (longlong)CFileNode::vftable;
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[0xc] = 0;
  *(undefined4 *)(plVar2 + 0xd) = 0xffff;
  *(undefined4 *)((longlong)plVar2 + 0x6c) = 0xffff;
  *(undefined2 *)(plVar2 + 0xe) = 0;
  *(undefined8 *)((longlong)plVar2 + 0x75) = 0;
  *(undefined4 *)((longlong)plVar2 + 0x7d) = 0;
  *(undefined8 *)((longlong)plVar2 + 0x81) = 0;
  *(undefined2 *)((longlong)plVar2 + 0x91) = 0;
  *(byte *)((longlong)plVar2 + 0x72) = *(byte *)((longlong)plVar2 + 0x72) & 0xf8;
  *(byte *)((longlong)plVar2 + 0x91) = *(byte *)((longlong)plVar2 + 0x91) & 0xfe;
  *(byte *)((longlong)plVar2 + 0x91) = *(byte *)((longlong)plVar2 + 0x91) | 2;
  *(byte *)((longlong)plVar2 + 0x72) = *(byte *)((longlong)plVar2 + 0x72) & 7;
  *(byte *)((longlong)plVar2 + 0x74) = *(byte *)((longlong)plVar2 + 0x74) & 0xf8;
  plVar2[9] = -1;
  plVar2[10] = -1;
  uVar3 = 0;
  plVar2[0xb] = 0;
  *(undefined8 *)((longlong)plVar2 + 0x89) = 0;
  plVar2[4] = 0;
  *(undefined1 *)((longlong)plVar2 + 0x73) = 0x20;
  if ((*(longlong *)(param_1 + 0x1e8) != 0) && (uVar3 = *param_3, uVar3 != 0)) {
    plVar2[6] = uVar3;
    plVar2[10] = *(longlong *)(*param_3 + 0x31);
    plVar2[9] = param_2;
    local_res8 = 0;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0xa0))
                      (*(longlong **)(param_1 + 0x1e8),plVar2);
    bVar4 = iVar1 != 0;
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x28))
                        (*(longlong **)(param_1 + 0x1e8),plVar2,6,&local_res8);
      bVar4 = iVar1 != 0;
      if ((iVar1 == 0) && (local_res8 == 0)) {
        (**(code **)(*plVar2 + 0x30))(plVar2,1);
        *param_3 = 0;
      }
    }
    uVar3 = (ulonglong)bVar4;
  }
  return uVar3;
}




void FUN_180004820(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *_Memory;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  if ((*(longlong *)(param_1 + 0x198) != 0) && (*(longlong *)(param_1 + 0x1f8) != 0)) {
    puVar2 = (undefined8 *)*param_2;
    for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
      uVar11 = puVar3[2];
      uVar1 = *(uint *)(**(longlong **)(param_1 + 0x198) + 0xa8);
      uVar6 = (ulonglong)uVar1;
      plVar7 = (longlong *)(**(longlong **)(param_1 + 0x198) + 0xf8);
      if ((uVar6 <= uVar11) && (plVar7 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)*plVar7;
        uVar6 = ((uVar11 / uVar6 >> 1) - 2) * uVar6;
        puVar8 = puVar4;
        puVar10 = (undefined8 *)puVar4[1];
        if (*(char *)((longlong)puVar4[1] + 0x19) == '\0') {
          do {
            puVar9 = puVar10;
            if ((ulonglong)puVar9[4] < uVar6) {
              puVar10 = (undefined8 *)puVar9[2];
              puVar9 = puVar8;
            }
            else {
              puVar10 = (undefined8 *)*puVar9;
            }
            puVar8 = puVar9;
          } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
          if ((puVar9 == puVar4) || (uVar6 < (ulonglong)puVar9[4])) goto LAB_1800048e3;
        }
        else {
LAB_1800048e3:
          puVar9 = puVar4;
        }
        if (puVar9 != puVar4) {
          uVar11 = uVar11 & uVar1 - 1 | puVar9[5];
        }
      }
      FUN_1800089f0(*(longlong **)(param_1 + 0x1f8),*(uint *)(param_1 + 0xb4) * uVar11,uVar11,
                    (ulonglong)*(uint *)(param_1 + 0xb4));
    }
  }
  plVar7 = (longlong *)*param_2;
  _Memory = (longlong *)*plVar7;
  *plVar7 = (longlong)plVar7;
  *(longlong *)(*param_2 + 8) = *param_2;
  param_2[1] = 0;
  plVar7 = (longlong *)*param_2;
  if (_Memory != plVar7) {
    do {
      plVar5 = (longlong *)*_Memory;
      free(_Memory);
      plVar7 = (longlong *)*param_2;
      _Memory = plVar5;
    } while (plVar5 != plVar7);
  }
  free(plVar7);
  return;
}




ulonglong FUN_180004980(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *extraout_RAX;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *local_res8;
  void *local_20;
  void *local_18;
  longlong local_10;
  
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  FUN_1800059b0((ulonglong *)&local_20,0x1000,(byte *)&local_res8);
  puVar3 = *(undefined8 **)(param_1 + 0x198);
  plVar2 = *(longlong **)*puVar3;
  pvVar4 = local_20;
  if ((plVar2 == (longlong *)0x0) || (local_20 == local_18)) {
LAB_180004b94:
    if (local_20 == (void *)0x0) goto LAB_180004bd1;
    if ((0xfff < (ulonglong)(local_10 - (longlong)local_20)) &&
       (pvVar4 = *(void **)((longlong)local_20 + -8),
       0x1f < (ulonglong)((longlong)local_20 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2,local_20,0,1,0);
    if ((int)puVar3 == 0) goto LAB_180004b94;
    local_res8 = (undefined8 *)operator_new(0x38);
    uVar5 = 0x1000;
    puVar3 = FUN_180012390(local_res8,(longlong)local_20,0x1000);
    if (*(char *)(puVar3 + 1) == '\0') {
      puVar3 = (undefined8 *)(**(code **)*puVar3)(puVar3,1);
      if (local_20 == (void *)0x0) goto LAB_180004bd1;
      if ((0xfff < (ulonglong)(local_10 - (longlong)local_20)) &&
         (pvVar4 = *(void **)((longlong)local_20 + -8),
         0x1f < (ulonglong)
                ((longlong)local_20 + (-8 - (longlong)*(void **)((longlong)local_20 + -8))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x108) = puVar3[2];
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(puVar3 + 3);
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((longlong)puVar3 + 0x1c);
      *(ulonglong *)(param_1 + 0x140) = (ulonglong)*(uint *)((longlong)puVar3 + 0x1c) * 0x1e;
      *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(puVar3 + 4);
      *(undefined1 *)(param_1 + 0x139) = *(undefined1 *)((longlong)puVar3 + 0x21);
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)((longlong)puVar3 + 0x34);
      *(undefined8 *)(param_1 + 0x150) = puVar3[5];
      FUN_180011cd0(*(longlong **)(param_1 + 0x198),param_1 + 0xa8);
      if (*(char *)(param_1 + 0x138) == '\x03') {
        bVar1 = *(byte *)(param_1 + 0x139);
        if (bVar1 < 5) {
          *(undefined4 *)(param_1 + 0x1d8) = 3;
        }
        else if (bVar1 < 0xb) {
          *(undefined4 *)(param_1 + 0x1d8) = 7;
        }
        else {
          *(uint *)(param_1 + 0x1d8) = (0xc < bVar1) + 8;
        }
      }
      if ((*(int *)(param_1 + 0xb4) != 0) && (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0)) {
        FUN_1800089f0(*(longlong **)(param_1 + 0x1f8),0,uVar5,1);
      }
      puVar3 = (undefined8 *)(**(code **)*puVar3)(puVar3,1);
      if (local_20 == (void *)0x0) goto LAB_180004bd1;
      if ((0xfff < (ulonglong)(local_10 - (longlong)local_20)) &&
         (pvVar4 = *(void **)((longlong)local_20 + -8),
         0x1f < (ulonglong)
                ((longlong)local_20 + (-8 - (longlong)*(void **)((longlong)local_20 + -8))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  free(pvVar4);
  puVar3 = extraout_RAX;
LAB_180004bd1:
  return (ulonglong)puVar3 & 0xffffffffffffff00;
}




undefined8 FUN_180004bf0(longlong param_1,undefined ***param_2)

{
  longlong *plVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 *local_res8;
  undefined **local_40;
  undefined8 *local_38;
  int *local_30;
  int *local_28;
  longlong local_20;
  
  uVar10 = 0xffffffffffffffff;
  if (*(longlong *)(param_1 + 0x198) == 0) {
    return 0xffffffffffffffff;
  }
  if (*(longlong *)(param_1 + 0x170) < 1) {
    return 0xffffffffffffffff;
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
    return 0xffffffffffffffff;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
    FUN_1800059b0((ulonglong *)&local_30,
                  (ulonglong)(uint)(*(int *)(param_1 + 0x100) * *(int *)(param_1 + 0xb4)),
                  (byte *)&local_res8);
    plVar1 = *(longlong **)**(undefined8 **)(param_1 + 0x198);
    piVar9 = local_30;
    if (((plVar1 == (longlong *)0x0) || (local_30 == local_28)) ||
       (iVar4 = (**(code **)(*plVar1 + 8))
                          (plVar1,local_30,*(undefined8 *)(param_1 + 0x170),
                           *(undefined4 *)(param_1 + 0xb4),0), iVar4 == 0)) {
      if (local_30 == (int *)0x0) {
        return 0xffffffffffffffff;
      }
      if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
         (piVar9 = *(int **)(local_30 + -2),
         0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)piVar9)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      local_38 = (undefined8 *)0x0;
      local_40 = refs::RefsCheckPoint::vftable;
      local_res8 = (undefined8 *)operator_new(0x48);
      puVar5 = FUN_180012650(local_res8,local_30,(longlong)local_28 - (longlong)local_30);
      local_38 = puVar5;
      if (*(char *)(puVar5 + 1) == '\0') {
        (**(code **)*puVar5)(puVar5,1);
        if (local_30 == (int *)0x0) {
          return 0xffffffffffffffff;
        }
        if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
           (piVar9 = *(int **)(local_30 + -2),
           0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)*(int **)(local_30 + -2))))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      else {
        uVar8 = *(undefined4 *)(puVar5 + 3);
        *(char *)(param_1 + 0x138) = (char)uVar8;
        bVar7 = (byte)*(undefined4 *)((longlong)puVar5 + 0x1c);
        *(byte *)(param_1 + 0x139) = bVar7;
        if ((char)uVar8 == '\x03') {
          if (bVar7 < 5) {
            uVar8 = 3;
            *(undefined4 *)(param_1 + 0x1d8) = 3;
          }
          else if (bVar7 < 0xb) {
            uVar8 = 7;
            *(undefined4 *)(param_1 + 0x1d8) = 7;
          }
          else if (bVar7 < 0xd) {
            uVar8 = 8;
            *(undefined4 *)(param_1 + 0x1d8) = 8;
          }
          else {
            uVar8 = 9;
            *(undefined4 *)(param_1 + 0x1d8) = 9;
          }
        }
        else {
          uVar8 = *(undefined4 *)(param_1 + 0x1d8);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x1e0) + 0x50) = uVar8;
        uVar6 = FUN_180004ec0(param_1,(longlong)&local_40);
        if (((char)uVar6 == '\0') && (uVar10 = 0, param_2 != &local_40)) {
          ppuVar2 = param_2[1];
          *(undefined1 *)(ppuVar2 + 1) = *(undefined1 *)(puVar5 + 1);
          ppuVar2[2] = (undefined *)puVar5[2];
          *(undefined4 *)(ppuVar2 + 3) = *(undefined4 *)(puVar5 + 3);
          *(undefined4 *)((longlong)ppuVar2 + 0x1c) = *(undefined4 *)((longlong)puVar5 + 0x1c);
          if (ppuVar2 + 4 != (undefined **)(puVar5 + 4)) {
            puVar3 = (undefined8 *)puVar5[4];
            FUN_18000f460((longlong *)(ppuVar2 + 4),(undefined8 *)*puVar3,puVar3);
          }
          if (ppuVar2 + 6 != (undefined **)(puVar5 + 6)) {
            FUN_180012e20((ulonglong *)(ppuVar2 + 6),(undefined8 *)puVar5[6],(undefined8 *)puVar5[7]
                         );
          }
        }
        (**(code **)*puVar5)(puVar5,1);
        if (local_30 == (int *)0x0) {
          return uVar10;
        }
        if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
           (piVar9 = *(int **)(local_30 + -2),
           0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)*(int **)(local_30 + -2))))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    free(piVar9);
    return uVar10;
  }
  return 0xffffffffffffffff;
}




undefined8 FUN_180004ec0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  longlong local_30;
  
  uVar8 = 0;
  local_30 = 0;
  lVar2 = *(longlong *)(param_1 + 0xc0);
  iVar1 = *(int *)(param_1 + 0xb4);
  local_48 = lVar2;
  local_40 = iVar1;
  FUN_180012a70((ulonglong *)&local_60,(longlong *)(*(longlong *)(param_2 + 8) + 0x30));
  puVar12 = local_60;
  if ((ulonglong)((longlong)local_58 - (longlong)local_60 >> 4) < 8) {
    puVar11 = local_60;
    if (local_60 == (undefined8 *)0x0) {
      return 0;
    }
    for (; puVar11 != local_58; puVar11 = puVar11 + 2) {
      (**(code **)*puVar11)(puVar11,0);
    }
    if ((0xfff < (local_50 - (longlong)local_60 & 0xfffffffffffffff0U)) &&
       (puVar12 = (undefined8 *)local_60[-1],
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)local_60[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    FUN_180005c00((char *)&local_80,(undefined8 *)(local_60[0xf] + 0x10));
    if (local_78 == 0) {
      plVar9 = (longlong *)*local_80;
      *local_80 = (longlong)local_80;
      local_80[1] = (longlong)local_80;
      local_78 = 0;
      if (plVar9 != local_80) {
        do {
          plVar10 = (longlong *)*plVar9;
          free(plVar9);
          plVar9 = plVar10;
        } while (plVar10 != local_80);
      }
      free(local_80);
      for (puVar11 = local_60; puVar11 != local_58; puVar11 = puVar11 + 2) {
        (**(code **)*puVar11)(puVar11,0);
      }
      if ((0xfff < (local_50 - (longlong)local_60 & 0xfffffffffffffff0U)) &&
         (puVar12 = (undefined8 *)local_60[-1],
         0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)local_60[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      lVar3 = *(longlong *)(*local_80 + 0x10);
      local_38 = lVar3;
      FUN_180005c00((char *)&local_70,(undefined8 *)(local_60[1] + 0x10));
      plVar9 = (longlong *)*local_80;
      *local_80 = (longlong)local_80;
      local_80[1] = (longlong)local_80;
      local_78 = 0;
      plVar10 = local_80;
      if (plVar9 != local_80) {
        do {
          plVar4 = (longlong *)*plVar9;
          free(plVar9);
          plVar9 = plVar4;
          plVar10 = local_80;
        } while (plVar4 != local_80);
      }
      local_80 = local_70;
      local_78 = local_68;
      plVar9 = (longlong *)*plVar10;
      *plVar10 = (longlong)plVar10;
      plVar10[1] = (longlong)plVar10;
      local_68 = 0;
      local_70 = plVar10;
      if (plVar9 != plVar10) {
        do {
          plVar10 = (longlong *)*plVar9;
          free(plVar9);
          plVar9 = plVar10;
        } while (plVar10 != local_70);
      }
      free(local_70);
      puVar11 = DAT_180022650;
      if (local_78 == 0) {
        plVar9 = (longlong *)*local_80;
        *local_80 = (longlong)local_80;
        local_80[1] = (longlong)local_80;
        local_78 = 0;
        if (plVar9 != local_80) {
          do {
            plVar10 = (longlong *)*plVar9;
            free(plVar9);
            plVar9 = plVar10;
          } while (plVar10 != local_80);
        }
        free(local_80);
        for (puVar11 = local_60; puVar11 != local_58; puVar11 = puVar11 + 2) {
          (**(code **)*puVar11)(puVar11,0);
        }
        if ((0xfff < (local_50 - (longlong)local_60 & 0xfffffffffffffff0U)) &&
           (puVar12 = (undefined8 *)local_60[-1],
           0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)local_60[-1])))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      else {
        local_30 = *(longlong *)(*local_80 + 0x10);
        uVar8 = 0;
        for (puVar6 = (undefined8 *)*DAT_180022650; puVar6 != DAT_180022650;
            puVar6 = (undefined8 *)*puVar6) {
          if ((((puVar6[2] == lVar2) && (*(int *)(puVar6 + 3) == iVar1)) && (puVar6[4] == lVar3)) &&
             (puVar6[5] == local_30)) {
            uVar8 = 1;
            goto LAB_180005255;
          }
        }
        puVar6 = (undefined8 *)DAT_180022650[1];
        uVar7 = FUN_180006ba0(local_30,DAT_180022650,puVar6,&local_48);
        if (DAT_180022658 == 0x555555555555554) {
          std::_Xlength_error("list<T> too long");
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return uVar8;
        }
        DAT_180022658 = DAT_180022658 + 1;
        puVar11[1] = uVar7;
        *puVar6 = uVar7;
LAB_180005255:
        plVar9 = (longlong *)*local_80;
        *local_80 = (longlong)local_80;
        local_80[1] = (longlong)local_80;
        local_78 = 0;
        if (plVar9 != local_80) {
          do {
            plVar10 = (longlong *)*plVar9;
            free(plVar9);
            plVar9 = plVar10;
          } while (plVar10 != local_80);
        }
        free(local_80);
        for (puVar11 = local_60; puVar11 != local_58; puVar11 = puVar11 + 2) {
          (**(code **)*puVar11)(puVar11,0);
        }
        if ((0xfff < (local_50 - (longlong)local_60 & 0xfffffffffffffff0U)) &&
           (puVar12 = (undefined8 *)local_60[-1],
           0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)puVar12)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
  }
  free(puVar12);
  return uVar8;
}




void FUN_180005330(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  void *_Memory;
  undefined6 extraout_var;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  uint uVar18;
  bool bVar19;
  uint local_res8;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  void *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60 [4];
  
  local_68 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0xb8) = 1;
    FUN_180011f20((longlong *)&local_b8,(longlong *)(**(longlong **)(param_1 + 0x198) + 0x108));
    plVar17 = local_b8;
    uVar12 = *(uint *)(param_1 + 0xb4);
    if (uVar12 - 1 < 0x80) {
      if ((*(int *)(param_1 + 0x148) != 0) && (*(int *)(param_1 + 0x100) - 1U < 0x1000)) {
        iVar13 = *(int *)(param_1 + 0x100) * uVar12;
        iVar16 = (int)(0x20 / (ulonglong)uVar12);
        if (iVar16 == 0) {
          iVar16 = 1;
        }
        _Memory = operator_new((ulonglong)(uint)(iVar13 * 0x80));
        local_70 = local_b8;
        local_a8 = (longlong *)*local_b8;
        plVar17 = local_b8;
        local_88 = _Memory;
        if (local_a8 != local_b8) {
          do {
            local_80 = local_a8[4];
            uVar14 = 0;
            local_res8 = 0;
            uVar12 = *(uint *)(param_1 + 0x148);
            if (uVar12 != 0) {
              do {
                uVar12 = uVar12 - (int)uVar14;
                if (0x80 < uVar12) {
                  uVar12 = 0x80;
                }
                plVar2 = *(longlong **)**(undefined8 **)(param_1 + 0x198);
                plVar17 = local_70;
                local_78 = uVar14;
                if (((plVar2 == (longlong *)0x0) || (_Memory == (void *)0x0)) ||
                   (iVar6 = (**(code **)(*plVar2 + 8))
                                      (plVar2,_Memory,
                                       (uVar14 + local_80) * (ulonglong)*(uint *)(param_1 + 0xb4),
                                       *(uint *)(param_1 + 0xb4) << 7,0), plVar17 = local_70,
                   iVar6 == 0)) break;
                uVar14 = 0;
                if (uVar12 != 0) {
                  do {
                    piVar11 = (int *)((ulonglong)(uint)((int)uVar14 * iVar13) + (longlong)local_88);
                    if (piVar11 == (int *)0x0) {
                      bVar19 = false;
                    }
                    else {
                      bVar19 = *piVar11 == 0x2b42534d;
                    }
                    _Memory = local_88;
                    if (!bVar19) break;
                    local_90 = FUN_18000ab40(uVar14 + local_78 + local_80,*(uint *)(param_1 + 0x148)
                                             ,(longlong *)(param_1 + 0x188));
                    puVar3 = *(undefined8 **)(param_1 + 0x200);
                    puVar7 = (undefined8 *)puVar3[1];
                    puVar9 = puVar3;
                    if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
                      do {
                        if ((ulonglong)puVar7[4] < local_90) {
                          puVar8 = (undefined8 *)puVar7[2];
                        }
                        else {
                          puVar8 = (undefined8 *)*puVar7;
                          puVar9 = puVar7;
                        }
                        puVar7 = puVar8;
                      } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
                      if ((puVar9 == puVar3) || (local_90 < (ulonglong)puVar9[4]))
                      goto LAB_180005533;
                    }
                    else {
LAB_180005533:
                      puVar9 = puVar3;
                    }
                    if (puVar9 == puVar3) {
                      FUN_180006a50((longlong *)(param_1 + 0x200),local_60,puVar3,&local_90);
                      FUN_18000ae70((char *)&local_a0,piVar11,(ulonglong)(uint)(iVar16 * iVar13),
                                    local_90);
                      plVar2 = local_a0;
                      for (plVar17 = (longlong *)*local_a0; plVar17 != plVar2;
                          plVar17 = (longlong *)*plVar17) {
                        plVar10 = plVar17 + 2;
                        *(undefined1 *)(plVar17[3] + 0x59) = 1;
                        lVar15 = plVar17[3];
                        if (*(char *)(lVar15 + 0x58) == '\0') {
                          uVar4 = FUN_18000b820((longlong)plVar10);
                          iVar6 = (int)CONCAT62(extraout_var,uVar4);
                          if (iVar6 == 0x10) {
                            FUN_18000cbd0(*(longlong *)(param_1 + 0x1e0),(longlong)plVar10);
                          }
                          else if (iVar6 == 0x30) {
                            if ((ulonglong)
                                (*(longlong *)(lVar15 + 0x20) - *(longlong *)(lVar15 + 0x18)) < 4) {
                              sVar5 = 0;
                            }
                            else {
                              sVar5 = *(short *)(*(longlong *)(lVar15 + 0x18) + 2);
                            }
                            if (sVar5 == 1) {
                              FUN_18000ba90(*(longlong **)(param_1 + 0x1e0),(longlong)plVar10);
                            }
                            else if (sVar5 == 2) {
                              FUN_18000c920(*(longlong *)(param_1 + 0x1e0),(longlong)plVar10);
                            }
                          }
                        }
                        else {
                          FUN_1800032f0(param_1,(longlong)plVar10,*(undefined8 *)(lVar15 + 0x68));
                        }
                      }
                      plVar17 = (longlong *)*local_a0;
                      *local_a0 = (longlong)local_a0;
                      local_a0[1] = (longlong)local_a0;
                      local_98 = 0;
                      if (plVar17 != local_a0) {
                        do {
                          plVar2 = (longlong *)*plVar17;
                          (**(code **)plVar17[2])(plVar17 + 2,0);
                          free(plVar17);
                          plVar17 = plVar2;
                        } while (plVar2 != local_a0);
                      }
                      free(local_a0);
                    }
                    uVar18 = (int)uVar14 + iVar16;
                    uVar14 = (ulonglong)uVar18;
                    _Memory = local_88;
                  } while (uVar18 < uVar12);
                }
                local_res8 = local_res8 + uVar12;
                uVar14 = (ulonglong)local_res8;
                uVar12 = *(uint *)(param_1 + 0x148);
                plVar17 = local_70;
              } while (local_res8 < uVar12);
            }
            plVar2 = (longlong *)local_a8[2];
            if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar2 + 0x19);
              local_a8 = plVar2;
              plVar2 = (longlong *)*plVar2;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar2 + 0x19);
                local_a8 = plVar2;
                plVar2 = (longlong *)*plVar2;
              }
            }
            else {
              cVar1 = *(char *)(local_a8[1] + 0x19);
              plVar10 = (longlong *)local_a8[1];
              plVar2 = local_a8;
              while ((local_a8 = plVar10, cVar1 == '\0' && (plVar2 == (longlong *)local_a8[2]))) {
                cVar1 = *(char *)(local_a8[1] + 0x19);
                plVar10 = (longlong *)local_a8[1];
                plVar2 = local_a8;
              }
            }
          } while (local_a8 != plVar17);
        }
        FUN_180005830((longlong *)&local_b8);
        free(local_b8);
        if (_Memory == (void *)0x0) {
          return;
        }
        free(_Memory);
        return;
      }
      cVar1 = *(char *)(local_b8[1] + 0x19);
      plVar2 = (longlong *)local_b8[1];
      while (cVar1 == '\0') {
        FUN_180005d70(&local_b8,(longlong *)plVar2[2]);
        plVar10 = (longlong *)*plVar2;
        free(plVar2);
        plVar2 = plVar10;
        cVar1 = *(char *)((longlong)plVar10 + 0x19);
      }
      local_b8[1] = (longlong)plVar17;
      *local_b8 = (longlong)plVar17;
      local_b8[2] = (longlong)plVar17;
    }
    else {
      cVar1 = *(char *)(local_b8[1] + 0x19);
      plVar2 = (longlong *)local_b8[1];
      while (cVar1 == '\0') {
        FUN_180005d70(&local_b8,(longlong *)plVar2[2]);
        plVar10 = (longlong *)*plVar2;
        free(plVar2);
        plVar2 = plVar10;
        cVar1 = *(char *)((longlong)plVar10 + 0x19);
      }
      local_b8[1] = (longlong)plVar17;
      *local_b8 = (longlong)plVar17;
      local_b8[2] = (longlong)plVar17;
    }
    local_b0 = 0;
    free(local_b8);
  }
  return;
}




void FUN_180005830(longlong *param_1)

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
      FUN_180005d70(param_1,(longlong *)_Memory[2]);
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




void FUN_1800058c0(void)

{
  longlong *plVar1;
  longlong *_Memory;
  
  _Memory = (longlong *)*DAT_180022650;
  *DAT_180022650 = (longlong)DAT_180022650;
  DAT_180022650[1] = (longlong)DAT_180022650;
  DAT_180022658 = 0;
  if (_Memory != DAT_180022650) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != DAT_180022650);
  }
  return;
}




void FUN_180005930(longlong *param_1)

{
  FUN_180005de0(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180005950(longlong *param_1)

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




ulonglong * FUN_1800059b0(ulonglong *param_1,ulonglong param_2,byte *param_3)

{
  void *_Dst;
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_180005e50(param_1,param_2);
  if ((char)uVar1 != '\0') {
    _Dst = (void *)*param_1;
    memset(_Dst,(uint)*param_3,param_2);
    param_1[1] = (longlong)_Dst + param_2;
  }
  return param_1;
}




undefined ** FUN_180005a20(longlong param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *_Memory;
  undefined **in_RAX;
  undefined **extraout_RAX;
  undefined **ppuVar5;
  
  ppuVar5 = *(undefined ***)(param_1 + 8);
  if (ppuVar5 != (undefined **)0x0) {
    LOCK();
    ppuVar1 = ppuVar5 + 1;
    uVar3 = *(uint *)ppuVar1;
    in_RAX = (undefined **)(ulonglong)uVar3;
    *(uint *)ppuVar1 = *(uint *)ppuVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      if ((undefined **)*ppuVar5 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
        ppuVar1 = ppuVar5 + 2;
        in_RAX = std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable;
        if ((ppuVar1 != (undefined **)0x0) &&
           (_Memory = (undefined8 *)*ppuVar1, _Memory != (undefined8 *)0x0)) {
          *_Memory = 0;
          FUN_180005830(_Memory + 0x21);
          free((void *)_Memory[0x21]);
          FUN_180006420(_Memory + 0x1f);
          free((void *)_Memory[0x1f]);
          FUN_180006420(_Memory + 0x1d);
          free((void *)_Memory[0x1d]);
          FUN_180006420(_Memory + 0x1b);
          free((void *)_Memory[0x1b]);
          _Memory[1] = CSearchedPartitionInfo::vftable;
          free(_Memory);
          *ppuVar1 = (undefined *)0x0;
          in_RAX = extraout_RAX;
        }
      }
      else {
        in_RAX = (undefined **)(**(code **)*ppuVar5)(ppuVar5);
      }
      LOCK();
      piVar2 = (int *)((longlong)ppuVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        if ((undefined **)*ppuVar5 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
          free(ppuVar5);
          return ppuVar5;
        }
        ppuVar5 = (undefined **)(**(code **)((longlong)*ppuVar5 + 8))();
        return ppuVar5;
      }
    }
  }
  return in_RAX;
}




void FUN_180005ba0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  plVar2 = (longlong *)*param_1;
  _Memory = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  plVar2 = (longlong *)*param_1;
  if (_Memory != plVar2) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      plVar2 = (longlong *)*param_1;
      _Memory = plVar1;
    } while (plVar1 != plVar2);
  }
  free(plVar2);
  return;
}




char * FUN_180005c00(char *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  puVar1 = (undefined8 *)FUN_180006370(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  *(undefined8 **)param_1 = puVar1;
  FUN_180006bd0(param_1,(undefined8 *)*puVar1,*(undefined8 **)*param_2,(undefined8 *)*param_2);
  return param_1;
}




void FUN_180005c60(longlong *param_1)

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




void FUN_180005cd0(longlong *param_1)

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




void FUN_180005d40(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180005d70(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180005d70(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180005de0(longlong *param_1)

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
      (**(code **)_Memory[2])(_Memory + 2,0);
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != (longlong *)*param_1);
  }
  return;
}




undefined8 FUN_180005e50(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x7fffffffffffffff < param_2) {
      FUN_1800062c0();
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
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
    uVar4 = CONCAT71((int7)(*param_1 >> 8),1);
    param_1[2] = param_2 + *param_1;
  }
  return uVar4;
}




void FUN_180005ef0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    if (puVar1 != puVar2) {
      do {
        (**(code **)*puVar1)(puVar1,0);
        puVar1 = puVar1 + 2;
      } while (puVar1 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    puVar2 = puVar1;
    if ((0xfff < (param_1[2] - (longlong)puVar1 & 0xfffffffffffffff0U)) &&
       (puVar2 = (undefined8 *)puVar1[-1],
       0x1f < (ulonglong)((longlong)puVar1 + (-8 - (longlong)puVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(puVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_180005f90(longlong *param_1)

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




longlong * FUN_180005fe0(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  void *_Memory;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Dst;
  
  uVar1 = param_1[3];
  if (uVar1 < param_3) {
    if (0x7ffffffffffffffe < param_3) {
      FUN_180006a30();
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    uVar5 = param_3 | 7;
    uVar7 = 0x7ffffffffffffffe;
    if (((uVar5 < 0x7fffffffffffffff) && (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1))) &&
       (uVar6 = (uVar1 >> 1) + uVar1, uVar7 = uVar5, uVar5 < uVar6)) {
      uVar7 = uVar6;
    }
    _Dst = (void *)0x0;
    uVar5 = (uVar7 + 1) * 2;
    uVar6 = 0xffffffffffffffff;
    if ((uVar7 + 1 < 0x8000000000000000) && (uVar6 = uVar5, uVar5 < 0x1000)) {
      if (uVar5 != 0) {
        _Dst = operator_new(uVar5);
      }
    }
    else {
      uVar5 = uVar6 + 0x27;
      if (uVar6 + 0x27 <= uVar6) {
        uVar5 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new(uVar5);
      if (pvVar3 == (void *)0x0) goto LAB_18000615d;
      _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst - 8) = pvVar3;
    }
    param_1[3] = uVar7;
    param_1[2] = param_3;
    memcpy(_Dst,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
    if (7 < uVar1) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar1 * 2 + 2) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_18000615d:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    plVar4 = param_1;
    if (7 < uVar1) {
      plVar4 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(plVar4,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar4) = 0;
  }
  return param_1;
}




longlong * FUN_180006170(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_180006a30();
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
      if (pvVar3 == (void *)0x0) goto LAB_1800062b3;
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
LAB_1800062b3:
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




void FUN_1800062c0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_1800062e0(longlong *param_1)

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




void FUN_180006330(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (param_2 == (undefined8 *)0x0) {
    param_2 = puVar1;
    param_3 = puVar1;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}




void FUN_180006370(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_1800063b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
        param_2[7] = 0;
        return;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
      param_2[7] = 0;
    }
  }
  return;
}




void FUN_180006420(longlong *param_1)

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
      FUN_180006610(param_1,(longlong *)_Memory[2]);
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




void FUN_1800064b0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_1800064e0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x68);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180006510(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180006510(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)param_2[0xc];
    plVar3 = (longlong *)*param_2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_2 + 5);
      param_2[0xc] = 0;
    }
    free(param_2);
    param_2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  return;
}




void FUN_1800065a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (param_2 == (undefined8 *)0x0) {
    param_2 = puVar1;
    param_3 = puVar1;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}




void FUN_1800065e0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180006610(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180006610(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180006670(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (param_2 == (undefined8 *)0x0) {
    param_2 = puVar1;
    param_3 = puVar1;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}




undefined8 * FUN_1800066b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable;
  puVar2 = (undefined8 *)operator_new(0x118);
  *puVar2 = 0;
  FUN_180001500(puVar2 + 1);
  puVar2[0x1f] = 0;
  puVar2[0x20] = 0;
  uVar3 = FUN_1800065e0();
  puVar2[0x1f] = uVar3;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  uVar3 = FUN_1800064b0();
  puVar2[0x21] = uVar3;
  puVar1[2] = puVar2;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}




longlong FUN_180006780(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  void *_Dst;
  longlong lVar10;
  size_t _Size;
  undefined1 local_res8 [8];
  
  lVar6 = *param_1;
  lVar10 = (longlong)param_2 - lVar6 >> 3;
  lVar3 = param_1[1] - lVar6 >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
    FUN_1800062c0();
    pcVar2 = (code *)swi(3);
    lVar6 = (*pcVar2)();
    return lVar6;
  }
  uVar7 = param_1[2] - lVar6 >> 3;
  uVar1 = lVar3 + 1;
  uVar4 = uVar1;
  if ((uVar7 <= 0x1fffffffffffffff - (uVar7 >> 1)) && (uVar4 = (uVar7 >> 1) + uVar7, uVar4 < uVar1))
  {
    uVar4 = uVar1;
  }
  uVar7 = uVar4 * 8;
  if (uVar4 < 0x2000000000000000) {
    uVar4 = uVar7;
    if (0xfff < uVar7) goto LAB_180006823;
    if (uVar7 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar7);
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
LAB_180006823:
    uVar8 = uVar4 + 0x27;
    if (uVar8 <= uVar4) {
      uVar8 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(uVar8);
    if (pvVar5 == (void *)0x0) goto LAB_180006920;
    _Dst = (void *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar5;
  }
  *(undefined8 *)((longlong)_Dst + lVar10 * 8) = *param_3;
  pvVar5 = (void *)param_1[1];
  pvVar9 = (void *)*param_1;
  FUN_1800071d0(local_res8);
  if (param_2 == pvVar5) {
    _Size = (longlong)pvVar5 - (longlong)pvVar9;
    pvVar5 = _Dst;
    param_2 = pvVar9;
  }
  else {
    memmove(_Dst,pvVar9,(longlong)param_2 - (longlong)pvVar9);
    pvVar5 = (void *)((longlong)_Dst + (lVar10 + 1) * 8);
    FUN_1800071d0(local_res8);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar5,param_2,_Size);
  pvVar5 = (void *)*param_1;
  if (pvVar5 != (void *)0x0) {
    pvVar9 = pvVar5;
    if ((0xfff < (param_1[2] - (longlong)pvVar5 & 0xfffffffffffffff8U)) &&
       (pvVar9 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar9)))) {
LAB_180006920:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar9);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + uVar1 * 8);
  param_1[2] = (longlong)(uVar7 + (longlong)_Dst);
  return *param_1 + lVar10 * 8;
}




void FUN_180006930(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000693d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}




void FUN_180006950(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *_Memory;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if ((puVar1 != (undefined8 *)0x0) &&
     (_Memory = (undefined8 *)*puVar1, _Memory != (undefined8 *)0x0)) {
    *_Memory = 0;
    FUN_180005830(_Memory + 0x21);
    free((void *)_Memory[0x21]);
    FUN_180006420(_Memory + 0x1f);
    free((void *)_Memory[0x1f]);
    FUN_180006420(_Memory + 0x1d);
    free((void *)_Memory[0x1d]);
    FUN_180006420(_Memory + 0x1b);
    free((void *)_Memory[0x1b]);
    _Memory[1] = CSearchedPartitionInfo::vftable;
    free(_Memory);
    *puVar1 = 0;
  }
  return;
}




void FUN_180006a30(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined8 *
FUN_180006a50(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 local_res8;
  
  plVar2 = (longlong *)*param_1;
  bVar7 = true;
  plVar6 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar5 = (longlong *)plVar2[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_4 < (ulonglong)plVar6[4];
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
  }
  plVar5 = plVar6;
  if (bVar7) {
    if (plVar6 == (longlong *)*plVar2) {
      puVar4 = FUN_180006f10(param_1,&local_res8,'\x01',plVar6,param_4);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar5 = (longlong *)*plVar6;
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar5[2] + 0x19);
        plVar2 = (longlong *)plVar5[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar5 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar2 = (longlong *)plVar6[1];
        plVar5 = plVar6;
        while ((plVar3 = plVar2, cVar1 == '\0' && (plVar5 == (longlong *)*plVar3))) {
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar2 = (longlong *)plVar3[1];
          plVar5 = plVar3;
        }
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          plVar5 = plVar3;
        }
      }
    }
    else {
      plVar5 = (longlong *)plVar6[2];
    }
  }
  if ((ulonglong)plVar5[4] < *param_4) {
    puVar4 = FUN_180006f10(param_1,&local_res8,bVar7,plVar6,param_4);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_180006ba0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1800065a0(param_1,param_2,param_3);
  uVar1 = param_4[1];
  *(undefined8 *)(lVar2 + 0x10) = *param_4;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  uVar1 = param_4[3];
  *(undefined8 *)(lVar2 + 0x20) = param_4[2];
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  return;
}




void FUN_180006bd0(char *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong extraout_RAX;
  longlong lVar3;
  char *pcVar4;
  
  pcVar4 = param_1;
  for (; param_3 != param_4; param_3 = (undefined8 *)*param_3) {
    puVar1 = (undefined8 *)param_2[1];
    uVar2 = FUN_180007510(pcVar4,param_2,puVar1,param_3 + 2);
    lVar3 = *(longlong *)(param_1 + 8);
    pcVar4 = (char *)(0xaaaaaaaaaaaaaa9 - lVar3);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar3 = extraout_RAX;
    }
    *(longlong *)(param_1 + 8) = lVar3 + 1;
    param_2[1] = uVar2;
    *puVar1 = uVar2;
  }
  return;
}




void * FUN_180006c80(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180006cb0(void *param_1,char param_2)

{
  if (param_2 != '\0') {
    free(param_1);
    return;
  }
  return;
}




longlong FUN_180006cc0(longlong param_1)

{
  return param_1 + 8;
}




TypeDescriptor * FUN_180006cd0(void)

{
  return &std::
          _Binder<struct_std::_Unforced,bool_(__cdecl_RefsQuickSearchFilesImpl::*)(unsigned___int64,class_refs::RefsFileProperties*___ptr64&___ptr64)___ptr64,struct_RefsQuickSearchFilesImpl*___ptr64,struct_std::_Ph<1>_const&___ptr64,struct_std::_Ph<2>_const&___ptr64>
          ::RTTI_Type_Descriptor;
}




undefined8 * FUN_180006ce0(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::
             _Func_impl_no_alloc<class_std::_Binder<struct_std::_Unforced,bool_(__cdecl_RefsQuickSearchFilesImpl::*)(unsigned___int64,class_refs::RefsFileProperties*___ptr64&___ptr64)___ptr64,struct_RefsQuickSearchFilesImpl*___ptr64,struct_std::_Ph<1>_const&___ptr64,struct_std::_Ph<2>_const&___ptr64>,bool,unsigned___int64,class_refs::RefsFileProperties*___ptr64&___ptr64>
             ::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((longlong)param_2 + 0x11) = *(undefined1 *)(param_1 + 0x11);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}




void FUN_180006d10(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = FUN_1800071e0(param_1);
  *(undefined2 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 0x20) = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined1 *)(param_2 + 4);
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x11);
  uVar3 = *(undefined1 *)((longlong)param_2 + 0x12);
  uVar5 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(lVar6 + 0x28) =
       std::
       _Func_impl_no_alloc<class_std::_Binder<struct_std::_Unforced,void_(__cdecl_RefsQuickSearchFilesImpl::*)(class_refs::RefsNodeRecord_const&___ptr64,class_std::list<unsigned___int64,class_std::allocator<unsigned___int64>_>_const&___ptr64,unsigned___int64)___ptr64,struct_RefsQuickSearchFilesImpl*___ptr64,struct_std::_Ph<1>_const&___ptr64,struct_std::_Ph<2>_const&___ptr64,struct_std::_Ph<3>_const&___ptr64>,void,class_refs::RefsNodeRecord_const&___ptr64,class_std::list<unsigned___int64,class_std::allocator<unsigned___int64>_>_const&___ptr64,unsigned___int64>
       ::vftable;
  *(undefined8 *)(lVar6 + 0x30) = uVar4;
  *(undefined1 *)(lVar6 + 0x38) = uVar1;
  *(undefined1 *)(lVar6 + 0x39) = uVar2;
  *(undefined1 *)(lVar6 + 0x3a) = uVar3;
  *(undefined8 *)(lVar6 + 0x40) = uVar5;
  *(undefined8 **)(lVar6 + 0x60) = (undefined8 *)(lVar6 + 0x28);
  return;
}




undefined8 *
FUN_180006d70(longlong *param_1,undefined8 *param_2,undefined8 param_3,int *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  
  plVar2 = (longlong *)*param_1;
  bVar3 = true;
  plVar7 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar6 = (longlong *)plVar2[1];
    do {
      plVar7 = plVar6;
      bVar3 = *param_4 < (int)plVar7[4];
      if (*param_4 < (int)plVar7[4]) {
        plVar6 = (longlong *)*plVar7;
      }
      else {
        plVar6 = (longlong *)plVar7[2];
      }
    } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
  }
  plVar6 = plVar7;
  if (bVar3) {
    if (plVar7 == (longlong *)*plVar2) {
      puVar5 = FUN_180007260(param_1,&local_res8,'\x01',plVar7,in_stack_ffffffffffffffc8,param_5);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar6 = (longlong *)*plVar7;
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar6[2] + 0x19);
        plVar2 = (longlong *)plVar6[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar6 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar2 = (longlong *)plVar7[1];
        plVar6 = plVar7;
        while ((plVar4 = plVar2, cVar1 == '\0' && (plVar6 == (longlong *)*plVar4))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar2 = (longlong *)plVar4[1];
          plVar6 = plVar4;
        }
        if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
          plVar6 = plVar4;
        }
      }
    }
    else {
      plVar6 = (longlong *)plVar7[2];
    }
  }
  if ((int)plVar6[4] < *param_4) {
    puVar5 = FUN_180007260(param_1,&local_res8,bVar3,plVar7,in_stack_ffffffffffffffc8,param_5);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    plVar2 = (longlong *)param_5[0xc];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_5 + 5);
      param_5[0xc] = 0;
    }
    free(param_5);
    *param_2 = plVar6;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_180006f00(longlong param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180006f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x18),*param_2);
  return;
}




undefined8 *
FUN_180006f10(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (0x666666666666664 < (ulonglong)param_1[1]) {
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  plVar5 = (longlong *)FUN_180007800(param_1,param_5);
  param_1[1] = param_1[1] + 1;
  plVar5[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(*param_1 + 0x10)) {
      *(longlong **)(*param_1 + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)*param_1) {
      *(longlong **)*param_1 = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar9 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar6 = *(longlong *)(*param_1 + 8);
      *param_2 = plVar5;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      return param_2;
    }
    plVar10 = (longlong *)plVar9[1];
    plVar8 = plVar9 + 1;
    plVar11 = plVar10 + 1;
    lVar6 = *(longlong *)plVar10[1];
    if (plVar10 == (longlong *)lVar6) {
      lVar6 = ((longlong *)plVar10[1])[2];
      if (*(char *)(lVar6 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar10[2];
        if (plVar9 == plVar2) {
          plVar10[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar10;
          }
          plVar2[1] = *plVar11;
          if (plVar10 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
            *plVar2 = (longlong)plVar10;
            *plVar11 = (longlong)plVar2;
            plVar9 = plVar10;
            plVar10 = plVar2;
            plVar8 = plVar11;
          }
          else {
            plVar9 = (longlong *)*plVar11;
            if (plVar10 == (longlong *)*plVar9) {
              *plVar9 = (longlong)plVar2;
              *plVar2 = (longlong)plVar10;
              *plVar11 = (longlong)plVar2;
              plVar9 = plVar10;
              plVar10 = plVar2;
              plVar8 = plVar11;
            }
            else {
              plVar9[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar10;
              *plVar11 = (longlong)plVar2;
              plVar9 = plVar10;
              plVar10 = plVar2;
              plVar8 = plVar11;
            }
          }
        }
        *(undefined1 *)(plVar10 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
        plVar8 = *(longlong **)(*plVar8 + 8);
        plVar11 = (longlong *)*plVar8;
        *plVar8 = plVar11[2];
        if (*(char *)(plVar11[2] + 0x19) == '\0') {
          *(longlong **)(plVar11[2] + 8) = plVar8;
        }
        plVar11[1] = plVar8[1];
        if (plVar8 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar11;
          plVar11[2] = (longlong)plVar8;
        }
        else {
          plVar10 = (longlong *)plVar8[1];
          if (plVar8 == (longlong *)plVar10[2]) {
            plVar10[2] = (longlong)plVar11;
            plVar11[2] = (longlong)plVar8;
          }
          else {
            *plVar10 = (longlong)plVar11;
            plVar11[2] = (longlong)plVar8;
          }
        }
        goto LAB_180007195;
      }
LAB_1800070c7:
      *(undefined1 *)(plVar10 + 3) = 1;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar6 + 0x18) == '\0') goto LAB_1800070c7;
      plVar2 = (longlong *)*plVar10;
      plVar7 = plVar10;
      if (plVar9 == plVar2) {
        *plVar10 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar10;
        }
        plVar2[1] = *plVar11;
        if (plVar10 == (longlong *)*(longlong *)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar2;
        }
        else {
          puVar4 = (undefined8 *)*plVar11;
          if (plVar10 == (longlong *)puVar4[2]) {
            puVar4[2] = plVar2;
          }
          else {
            *puVar4 = plVar2;
          }
        }
        plVar2[2] = (longlong)plVar10;
        *plVar11 = (longlong)plVar2;
        plVar7 = plVar2;
        plVar9 = plVar10;
        plVar8 = plVar11;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar8 + 8);
      plVar11 = (longlong *)plVar8[2];
      plVar8[2] = *plVar11;
      if (*(char *)(*plVar11 + 0x19) == '\0') {
        *(longlong **)(*plVar11 + 8) = plVar8;
      }
      plVar11[1] = plVar8[1];
      if (plVar8 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar11;
      }
      else {
        puVar4 = (undefined8 *)plVar8[1];
        if (plVar8 == (longlong *)*puVar4) {
          *puVar4 = plVar11;
        }
        else {
          puVar4[2] = plVar11;
        }
      }
      *plVar11 = (longlong)plVar8;
LAB_180007195:
      plVar8[1] = (longlong)plVar11;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}




undefined1 * FUN_1800071d0(undefined1 *param_1)

{
  *param_1 = 0;
  return param_1;
}




void FUN_1800071e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180007210(undefined8 param_1,void *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)param_2 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)((longlong)param_2 + 0x28));
    *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  }
  free(param_2);
  return;
}




undefined8 *
FUN_180007260(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (0x276276276276274 < (ulonglong)param_1[1]) {
    FUN_180007210(0x276276276276275,param_6);
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_1800072e9;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_1800072e9;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_1800072e9:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar9 = (longlong *)plVar8[1];
    plVar7 = plVar8 + 1;
    plVar10 = plVar9 + 1;
    lVar5 = *(longlong *)plVar9[1];
    if (plVar9 == (longlong *)lVar5) {
      lVar5 = ((longlong *)plVar9[1])[2];
      if (*(char *)(lVar5 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar9[2];
        if (plVar8 == plVar2) {
          plVar9[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar9;
          }
          plVar2[1] = *plVar10;
          if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
            *plVar2 = (longlong)plVar9;
            *plVar10 = (longlong)plVar2;
            plVar8 = plVar9;
            plVar9 = plVar2;
            plVar7 = plVar10;
          }
          else {
            plVar8 = (longlong *)*plVar10;
            if (plVar9 == (longlong *)*plVar8) {
              *plVar8 = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
            else {
              plVar8[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
          }
        }
        *(undefined1 *)(plVar9 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        plVar10 = (longlong *)*plVar7;
        *plVar7 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar7;
        }
        plVar10[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar10;
          plVar10[2] = (longlong)plVar7;
        }
        else {
          plVar9 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar9[2]) {
            plVar9[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
          else {
            *plVar9 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
        }
        goto LAB_1800074d5;
      }
LAB_180007407:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_180007407;
      plVar2 = (longlong *)*plVar9;
      plVar6 = plVar9;
      if (plVar8 == plVar2) {
        *plVar9 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar9;
        }
        plVar2[1] = *plVar10;
        if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar2;
        }
        else {
          puVar4 = (undefined8 *)*plVar10;
          if (plVar9 == (longlong *)puVar4[2]) {
            puVar4[2] = plVar2;
          }
          else {
            *puVar4 = plVar2;
          }
        }
        plVar2[2] = (longlong)plVar9;
        *plVar10 = (longlong)plVar2;
        plVar6 = plVar2;
        plVar8 = plVar9;
        plVar7 = plVar10;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(*plVar7 + 8);
      plVar10 = (longlong *)plVar7[2];
      plVar7[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(longlong **)(*plVar10 + 8) = plVar7;
      }
      plVar10[1] = plVar7[1];
      if (plVar7 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar10;
      }
      else {
        puVar4 = (undefined8 *)plVar7[1];
        if (plVar7 == (longlong *)*puVar4) {
          *puVar4 = plVar10;
        }
        else {
          puVar4[2] = plVar10;
        }
      }
      *plVar10 = (longlong)plVar7;
LAB_1800074d5:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




void FUN_180007510(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_180006370(param_1,param_2,param_3);
  *(undefined8 *)(lVar1 + 0x10) = *param_4;
  return;
}




void FUN_180007530(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1800077c0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}




undefined8 *
FUN_180007560(longlong *param_1,undefined8 *param_2,longlong *param_3,ulonglong *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_180007830(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar2 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar2) {
      if (*param_4 < (ulonglong)param_3[4]) {
        FUN_180007830(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar2) {
      if ((ulonglong)((undefined8 *)plVar2[2])[4] < *param_4) {
        FUN_180007830(param_1,param_2,'\0',(undefined8 *)plVar2[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      uVar3 = *param_4;
      if (uVar3 < (ulonglong)param_3[4]) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar7 = (longlong *)*param_3;
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            cVar1 = *(char *)(plVar7[2] + 0x19);
            plVar8 = (longlong *)plVar7[2];
            while (cVar1 == '\0') {
              cVar1 = *(char *)(plVar8[2] + 0x19);
              plVar7 = plVar8;
              plVar8 = (longlong *)plVar8[2];
            }
          }
          else {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar8 = (longlong *)param_3[1];
            plVar7 = param_3;
            while ((plVar4 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)*plVar4))) {
              cVar1 = *(char *)(plVar4[1] + 0x19);
              plVar8 = (longlong *)plVar4[1];
              plVar7 = plVar4;
            }
            if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
              plVar7 = plVar4;
            }
          }
        }
        else {
          plVar7 = (longlong *)param_3[2];
        }
        if ((ulonglong)plVar7[4] < uVar3) {
          if (*(char *)(plVar7[2] + 0x19) != '\0') {
            FUN_180007830(param_1,param_2,'\0',plVar7,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180007830(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
      if ((ulonglong)param_3[4] < uVar3) {
        plVar7 = (longlong *)param_3[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar8 = plVar7;
          plVar4 = (longlong *)*plVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar8 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(param_3[1] + 0x19);
          plVar5 = (longlong *)param_3[1];
          plVar4 = param_3;
          while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar5 = (longlong *)plVar8[1];
            plVar4 = plVar8;
          }
        }
        if ((plVar8 == plVar2) || (uVar3 < (ulonglong)plVar8[4])) {
          if (*(char *)((longlong)plVar7 + 0x19) != '\0') {
            FUN_180007830(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180007830(param_1,param_2,'\x01',plVar8,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar6 = FUN_180007ae0(param_1,local_20,param_3,param_4,param_5);
    *param_2 = *puVar6;
  }
  return param_2;
}




void FUN_1800077c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_1800077f0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_180007800(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007c40(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  return;
}




undefined8 *
FUN_180007830(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (0x555555555555553 < (ulonglong)param_1[1]) {
    FUN_1800077f0(0x555555555555554,param_6);
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_1800078b9;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_1800078b9;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_1800078b9:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar9 = (longlong *)plVar8[1];
    plVar7 = plVar8 + 1;
    plVar10 = plVar9 + 1;
    lVar5 = *(longlong *)plVar9[1];
    if (plVar9 == (longlong *)lVar5) {
      lVar5 = ((longlong *)plVar9[1])[2];
      if (*(char *)(lVar5 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar9[2];
        if (plVar8 == plVar2) {
          plVar9[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar9;
          }
          plVar2[1] = *plVar10;
          if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
            *plVar2 = (longlong)plVar9;
            *plVar10 = (longlong)plVar2;
            plVar8 = plVar9;
            plVar9 = plVar2;
            plVar7 = plVar10;
          }
          else {
            plVar8 = (longlong *)*plVar10;
            if (plVar9 == (longlong *)*plVar8) {
              *plVar8 = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
            else {
              plVar8[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
          }
        }
        *(undefined1 *)(plVar9 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        plVar10 = (longlong *)*plVar7;
        *plVar7 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar7;
        }
        plVar10[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar10;
          plVar10[2] = (longlong)plVar7;
        }
        else {
          plVar9 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar9[2]) {
            plVar9[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
          else {
            *plVar9 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
        }
        goto LAB_180007aa5;
      }
LAB_1800079d7:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_1800079d7;
      plVar2 = (longlong *)*plVar9;
      plVar6 = plVar9;
      if (plVar8 == plVar2) {
        *plVar9 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar9;
        }
        plVar2[1] = *plVar10;
        if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar2;
        }
        else {
          puVar4 = (undefined8 *)*plVar10;
          if (plVar9 == (longlong *)puVar4[2]) {
            puVar4[2] = plVar2;
          }
          else {
            *puVar4 = plVar2;
          }
        }
        plVar2[2] = (longlong)plVar9;
        *plVar10 = (longlong)plVar2;
        plVar6 = plVar2;
        plVar8 = plVar9;
        plVar7 = plVar10;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(*plVar7 + 8);
      plVar10 = (longlong *)plVar7[2];
      plVar7[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(longlong **)(*plVar10 + 8) = plVar7;
      }
      plVar10[1] = plVar7[1];
      if (plVar7 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar10;
      }
      else {
        puVar4 = (undefined8 *)plVar7[1];
        if (plVar7 == (longlong *)*puVar4) {
          *puVar4 = plVar10;
        }
        else {
          puVar4[2] = plVar10;
        }
      }
      *plVar10 = (longlong)plVar7;
LAB_180007aa5:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180007ae0(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  plVar2 = (longlong *)*param_1;
  bVar7 = true;
  plVar6 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar5 = (longlong *)plVar2[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_4 < (ulonglong)plVar6[4];
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
  }
  plVar5 = plVar6;
  if (bVar7) {
    if (plVar6 == (longlong *)*plVar2) {
      puVar4 = FUN_180007830(param_1,&local_res8,'\x01',plVar6,in_stack_ffffffffffffffd8,param_5);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar5 = (longlong *)*plVar6;
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar5[2] + 0x19);
        plVar2 = (longlong *)plVar5[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar5 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar2 = (longlong *)plVar6[1];
        plVar5 = plVar6;
        while ((plVar3 = plVar2, cVar1 == '\0' && (plVar5 == (longlong *)*plVar3))) {
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar2 = (longlong *)plVar3[1];
          plVar5 = plVar3;
        }
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          plVar5 = plVar3;
        }
      }
    }
    else {
      plVar5 = (longlong *)plVar6[2];
    }
  }
  if ((ulonglong)plVar5[4] < *param_4) {
    puVar4 = FUN_180007830(param_1,&local_res8,bVar7,plVar6,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_180007c40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




TypeDescriptor * FUN_180007c70(void)

{
  return &std::
          _Binder<struct_std::_Unforced,void_(__cdecl_RefsQuickSearchFilesImpl::*)(class_refs::RefsNodeRecord_const&___ptr64,class_std::list<unsigned___int64,class_std::allocator<unsigned___int64>_>_const&___ptr64,unsigned___int64)___ptr64,struct_RefsQuickSearchFilesImpl*___ptr64,struct_std::_Ph<1>_const&___ptr64,struct_std::_Ph<2>_const&___ptr64,struct_std::_Ph<3>_const&___ptr64>
          ::RTTI_Type_Descriptor;
}




undefined8 * FUN_180007c80(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::
             _Func_impl_no_alloc<class_std::_Binder<struct_std::_Unforced,void_(__cdecl_RefsQuickSearchFilesImpl::*)(class_refs::RefsNodeRecord_const&___ptr64,class_std::list<unsigned___int64,class_std::allocator<unsigned___int64>_>_const&___ptr64,unsigned___int64)___ptr64,struct_RefsQuickSearchFilesImpl*___ptr64,struct_std::_Ph<1>_const&___ptr64,struct_std::_Ph<2>_const&___ptr64,struct_std::_Ph<3>_const&___ptr64>,void,class_refs::RefsNodeRecord_const&___ptr64,class_std::list<unsigned___int64,class_std::allocator<unsigned___int64>_>_const&___ptr64,unsigned___int64>
             ::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((longlong)param_2 + 0x11) = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)((longlong)param_2 + 0x12) = *(undefined1 *)(param_1 + 0x12);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}




void FUN_180007cc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000180007cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x18),param_2,param_3,*param_4);
  return;
}




void FUN_180007cd0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x70) = param_2;
  return;
}




void FUN_180007ce0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98 [7];
  longlong *local_60;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_a8 = 0xfffffffffffffffe;
  local_18 = DAT_180021010 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x78);
  local_60 = (longlong *)0x0;
  puVar2 = (undefined8 *)param_2[7];
  local_a0 = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    local_60 = (longlong *)(**(code **)*puVar2)(puVar2,local_98);
  }
  if ((local_60 != local_98) && (plVar3 = *(longlong **)(param_1 + 0xb0), plVar3 != plVar1)) {
    *(longlong **)(param_1 + 0xb0) = local_60;
    local_60 = plVar3;
    goto LAB_180007df3;
  }
  local_20 = (longlong *)0x0;
  if (local_60 != (longlong *)0x0) {
    plVar3 = local_60;
    if (local_60 == local_98) {
      local_20 = (longlong *)(**(code **)(*local_60 + 8))(local_60,local_58);
      if (local_60 == (longlong *)0x0) goto LAB_180007db6;
      (**(code **)(*local_60 + 0x20))
                (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
      plVar3 = local_20;
    }
    local_20 = plVar3;
    local_60 = (longlong *)0x0;
  }
LAB_180007db6:
  FUN_1800063b0((longlong)local_98,plVar1);
  FUN_1800063b0((longlong)plVar1,local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))
              (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
  }
LAB_180007df3:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x20))
              (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}




undefined8 * FUN_180007e50(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = ICompleteFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0x16];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0xf);
    param_1[0x16] = 0;
  }
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180007ee0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 *local_res8;
  undefined **local_30;
  undefined8 *local_28;
  void *local_20;
  void *local_18;
  longlong local_10;
  
  if (*param_1 == 0) {
    return;
  }
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  FUN_1800059b0((ulonglong *)&local_20,0x1000,(byte *)&local_res8);
  plVar1 = (longlong *)**(longlong **)*param_1;
  pvVar4 = local_20;
  if ((plVar1 != (longlong *)0x0) && (local_20 != local_18)) {
    uVar6 = 1;
    iVar2 = (**(code **)(*plVar1 + 8))(plVar1,local_20,0,1,0);
    if (iVar2 != 0) {
      local_28 = (undefined8 *)0x0;
      local_30 = refs::RefsDbr::vftable;
      local_res8 = (undefined8 *)operator_new(0x38);
      puVar5 = (undefined8 *)0x1000;
      puVar3 = FUN_180012390(local_res8,(longlong)local_20,0x1000);
      local_28 = puVar3;
      if (*(char *)(puVar3 + 1) == '\0') {
        (**(code **)*puVar3)(puVar3,1);
        if (local_20 == (void *)0x0) {
          return;
        }
        if ((0xfff < (ulonglong)(local_10 - (longlong)local_20)) &&
           (pvVar4 = *(void **)((longlong)local_20 + -8),
           0x1f < (ulonglong)
                  ((longlong)local_20 + (-8 - (longlong)*(void **)((longlong)local_20 + -8))))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      else {
        FUN_1800080a0((longlong)param_1,(longlong)&local_30,puVar5,uVar6);
        (**(code **)*puVar3)(puVar3,1);
        if (local_20 == (void *)0x0) {
          return;
        }
        if ((0xfff < (ulonglong)(local_10 - (longlong)local_20)) &&
           (pvVar4 = *(void **)((longlong)local_20 + -8),
           0x1f < (ulonglong)
                  ((longlong)local_20 + (-8 - (longlong)*(void **)((longlong)local_20 + -8))))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_180008079;
    }
  }
  if (local_20 == (void *)0x0) {
    return;
  }
  if ((0xfff < (ulonglong)(local_10 - (longlong)local_20)) &&
     (pvVar4 = *(void **)((longlong)local_20 + -8),
     0x1f < (ulonglong)((longlong)local_20 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
LAB_180008079:
  free(pvVar4);
  return;
}




undefined8 * FUN_1800080a0(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *local_res18;
  undefined4 local_res20;
  undefined8 local_40 [3];
  
  if (*(char *)(*(longlong *)(param_2 + 8) + 8) != '\0') {
    local_res18 = param_3;
    local_res20 = param_4;
    puVar1 = (undefined8 *)operator_new(0xf0);
    *(undefined4 *)(puVar1 + 1) = 0xe;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0xffffffffffffffff;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0x200;
    puVar1[0xc] = 0;
    puVar1[0xd] = 1;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 1;
    *(undefined2 *)((longlong)puVar1 + 0x7c) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    puVar1[0x11] = 0;
    *puVar1 = refs::RefsPartitionInformation::vftable;
    *(undefined2 *)(puVar1 + 0x12) = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    local_res18 = puVar1;
    uVar2 = FUN_1800065e0();
    puVar1[0x1a] = uVar2;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    uVar2 = FUN_1800065e0();
    puVar1[0x1c] = uVar2;
    puVar1[0xc] = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10);
    *(undefined4 *)(puVar1 + 0xb) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x1c);
    puVar1[0x13] = (ulonglong)*(uint *)(*(longlong *)(param_2 + 8) + 0x1c) * 0x1e;
    *(undefined1 *)(puVar1 + 0x12) = *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x20);
    *(undefined1 *)((longlong)puVar1 + 0x91) = *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x21);
    *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x34);
    puVar1[0x15] = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x28);
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 1;
    local_res18 = puVar1;
    FUN_1800088d0((longlong *)(param_1 + 0x28),local_40,param_3,(longlong *)&local_res18);
    return local_res18;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_1800082a0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = ICompleteFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0x16];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0xf);
    param_1[0x16] = 0;
  }
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180008330(longlong param_1,undefined8 param_2)

{
  **(undefined8 **)**(undefined8 **)(param_1 + 0xb8) = param_2;
  return;
}




void FUN_180008350(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x20) = param_2;
  return;
}




undefined8 FUN_180008360(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x20);
}




void FUN_180008370(longlong param_1,int *param_2,ulonglong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_108 [2];
  undefined8 local_100;
  ulonglong local_58;
  
  if (param_2 != (int *)0x0) {
    local_118 = 0xfffffffffffffffe;
    local_58 = DAT_180021010 ^ (ulonglong)auStack_158;
    local_130 = param_4;
    puVar6 = (undefined8 *)operator_new(0x10);
    local_138 = puVar6;
    FUN_1800066b0(puVar6);
    puVar3 = *(undefined8 **)(param_1 + 0xb8);
    plVar8 = (longlong *)puVar3[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8 = (longlong *)puVar3[1];
    }
    local_128 = *puVar3;
    local_138 = puVar6;
    local_120 = plVar8;
    FUN_18000f2c0(puVar6,&local_128);
    plVar5 = local_120;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar8 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        if ((undefined **)*local_120 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
          plVar8 = local_120 + 2;
          param_4 = local_130;
          if ((plVar8 != (longlong *)0x0) &&
             (puVar3 = (undefined8 *)*plVar8, puVar3 != (undefined8 *)0x0)) {
            *puVar3 = 0;
            FUN_180005830(puVar3 + 0x21);
            free((void *)puVar3[0x21]);
            FUN_180006420(puVar3 + 0x1f);
            free((void *)puVar3[0x1f]);
            FUN_180006420(puVar3 + 0x1d);
            free((void *)puVar3[0x1d]);
            FUN_180006420(puVar3 + 0x1b);
            free((void *)puVar3[0x1b]);
            puVar3[1] = CSearchedPartitionInfo::vftable;
            free(puVar3);
            *plVar8 = 0;
            param_4 = local_130;
          }
        }
        else {
          (**(code **)*local_120)(local_120);
        }
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((undefined **)*local_120 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable)
          {
            FUN_180006c80(local_120,1);
          }
          else {
            (*(code *)((undefined **)*local_120)[1])();
          }
        }
      }
    }
    FUN_180001d90(local_108);
    local_100 = param_4;
    uVar7 = FUN_1800115d0(&local_138,param_2,param_3,local_108);
    if (((char)uVar7 != '\0') && (*(longlong *)(param_1 + 0xb0) != 0)) {
      FUN_1800088a0(param_1 + 0x78,local_108);
    }
    FUN_180001e00((longlong)local_108);
    FUN_180011440(&local_138);
    __security_check_cookie(local_58 ^ (ulonglong)auStack_158);
  }
  return;
}




void FUN_1800085b0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x18) = param_2;
  return;
}




void FUN_1800085c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    plVar2 = (longlong *)**(longlong **)*plVar1;
    if (plVar2 == (longlong *)0x0) {
      iVar3 = 0x200;
    }
    else {
      iVar3 = (**(code **)(*plVar2 + 0x28))();
    }
    pvVar4 = operator_new((ulonglong)(uint)(((int)plVar1[3] + 0x20) * iVar3));
    plVar1[2] = (longlong)pvVar4;
    FUN_180007ee0(plVar1);
    return;
  }
  return;
}




undefined8 * FUN_180008620(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined7 extraout_var;
  int *_Src;
  longlong lVar7;
  ulonglong _Size;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined8 local_68;
  char local_60;
  
  puVar1 = (undefined8 *)**(longlong **)(param_1 + 0xb8);
  if (puVar1 == (undefined8 *)0x0) {
    return puVar1;
  }
  if (*(longlong **)*puVar1 == (longlong *)0x0) {
    uVar5 = 0x200;
  }
  else {
    uVar5 = (**(code **)(**(longlong **)*puVar1 + 0x28))();
    if (0xfff < uVar5 - 1) {
      return (undefined8 *)0x0;
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  plVar2 = (longlong *)**(longlong **)*puVar1;
  if ((plVar2 != (longlong *)0x0) && (DAT_180022638 + puVar1[2] != 0)) {
    uVar8 = (ulonglong)*(uint *)(puVar1 + 3);
    if ((uint)param_3 <= *(uint *)(puVar1 + 3)) {
      uVar8 = param_3 & 0xffffffff;
    }
    iVar6 = (**(code **)(*plVar2 + 8))(plVar2,DAT_180022638 + puVar1[2],param_2,uVar8,0);
    if (iVar6 != 0) {
      uVar8 = 0;
      uVar9 = uVar5 * param_3 + DAT_180022638;
      _Src = *(int **)(*(longlong *)(param_1 + 0xb8) + 0x10);
      if (uVar9 != 0) {
        do {
          if (*_Src != 0) {
            _Size = uVar9 - uVar8;
            lVar7 = (uVar8 - DAT_180022638) / (ulonglong)uVar5 + param_2;
            if (((param_4 == (longlong *)0x0) || (*param_4 == 0)) ||
               ((bVar3 = FUN_180008a60(param_4,lVar7), (int)CONCAT71(extraout_var,bVar3) == 0 &&
                (((longlong *)param_4[0xc] == (longlong *)0x0 ||
                 (cVar4 = (**(code **)(*(longlong *)param_4[0xc] + 0x20))(), cVar4 == '\0')))))) {
              if ((*(int *)((longlong)_Src + 3) != 0x53466552) ||
                 ((_Src[4] != 0x53525346 ||
                  (FUN_180012390(&local_68,(longlong)_Src,0x200), local_60 == '\0')))) {
                if (_Size / uVar5 < 0x20) {
                  DAT_180022638 = _Size;
                  memmove(*(void **)(*(longlong *)(param_1 + 0xb8) + 0x10),_Src,_Size);
                  break;
                }
                bVar10 = false;
                if (3 < _Size) {
                  bVar10 = *_Src == 0x42505553;
                }
                if (!bVar10) {
                  bVar10 = false;
                  if (3 < _Size) {
                    bVar10 = *_Src == 0x504b4843;
                  }
                  if (!bVar10) goto LAB_1800087fa;
                }
              }
              FUN_180008370(param_1,_Src,_Size,lVar7);
            }
          }
LAB_1800087fa:
          uVar8 = uVar8 + 0x200;
          _Src = _Src + 0x80;
        } while (uVar8 < uVar9);
        if (uVar8 < uVar9) {
          return (undefined8 *)0x0;
        }
      }
      DAT_180022638 = 0;
    }
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_180008890(void)

{
  return 6;
}




void FUN_1800088a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_18 [3];
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  local_18[0] = 0;
  if (plVar1 == (longlong *)0x0) {
    std::_Xbad_function_call();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,local_18);
  return;
}




undefined8 *
FUN_1800088d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 local_res8;
  
  puVar4 = (undefined8 *)*param_1;
  cVar5 = '\x01';
  if (*(char *)((longlong)puVar4[1] + 0x19) == '\0') {
    lVar1 = *(longlong *)(*param_4 + 0x10);
    puVar3 = (undefined8 *)puVar4[1];
    do {
      puVar4 = puVar3;
      lVar2 = *(longlong *)(puVar4[4] + 0x10);
      if ((lVar1 < lVar2) ||
         ((lVar1 <= lVar2 && (*(uint *)(*param_4 + 0xc) < *(uint *)(puVar4[4] + 0xc))))) {
        puVar3 = (undefined8 *)*puVar4;
        cVar5 = '\x01';
      }
      else {
        puVar3 = (undefined8 *)puVar4[2];
        cVar5 = '\0';
      }
    } while (*(char *)((longlong)puVar3 + 0x19) == '\0');
  }
  puVar4 = FUN_180006f10(param_1,&local_res8,cVar5,puVar4,param_4);
  *param_2 = *puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




undefined * FUN_180008980(void)

{
  return &DAT_180022640;
}




void FUN_180008990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180008980();
  __stdio_common_vfprintf(*puVar2,uVar1,param_1,0,&local_res10);
  return;
}




undefined8 FUN_1800089f0(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = param_1[10] + param_2;
  if ((uVar1 <= (ulonglong)param_1[2]) && (*param_1 != 0)) {
    lVar2 = 0;
    while( true ) {
      if ((longlong)(param_4 & 0xffffffff) <= lVar2) {
        return 1;
      }
      if ((ulonglong)param_1[2] < uVar1) break;
      *(byte *)(*param_1 + (uVar1 >> 3)) =
           *(byte *)(*param_1 + (uVar1 >> 3)) | '\x01' << ((byte)uVar1 & 7);
      lVar2 = lVar2 + 1;
      uVar1 = uVar1 + 1;
    }
    return 1;
  }
  return 0;
}




byte FUN_180008a60(longlong *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[10] + param_2;
  if (((ulonglong)param_1[2] < uVar2) || (*param_1 == 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*param_1 + (uVar2 >> 3)) & '\x01' << ((byte)uVar2 & 7);
  }
  return bVar1;
}




undefined8 * FUN_180008ab0(undefined8 *param_1,uint param_2)

{
  FUN_180008af0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180008af0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = CFileNode::vftable;
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x138))(plVar3,1);
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
    param_1[8] = 0;
  }
  return;
}




ulonglong FUN_180008b70(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined **ppuVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  plVar5 = param_1;
  if (param_1 != (longlong *)0x0) {
    do {
      iVar2 = (**(code **)(*plVar5 + 8))(plVar5);
      if (iVar2 != 0) {
        if (((ulonglong)*(ushort *)(param_1 + 0xd) < (ulonglong)(plVar5[0x43] - plVar5[0x42] >> 3))
           && (plVar1 = *(longlong **)(plVar5[0x42] + (ulonglong)*(ushort *)(param_1 + 0xd) * 8),
              plVar1 != (longlong *)0x0)) {
          ppuVar3 = (undefined **)*plVar1;
          plVar5 = plVar1;
          if (ppuVar3 == CFileSystemNode::vftable) {
            return (ulonglong)*(uint *)((longlong)plVar1 + 0x1d4);
          }
        }
        else {
          ppuVar3 = (undefined **)*plVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x000180008c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)ppuVar3[3])(plVar5);
        return uVar4;
      }
      plVar5 = (longlong *)plVar5[1];
    } while (plVar5 != (longlong *)0x0);
  }
  return 0xe;
}




void FUN_180008c10(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      *param_2 = 0;
      *param_3 = 0;
      return;
    }
    iVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    if (iVar3 != 0) break;
    plVar1 = (longlong *)plVar1[1];
  }
  if (((ulonglong)*(ushort *)(param_1 + 0x68) < (ulonglong)(plVar1[0x43] - plVar1[0x42] >> 3)) &&
     (plVar2 = *(longlong **)(plVar1[0x42] + (ulonglong)*(ushort *)(param_1 + 0x68) * 8),
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3);
    return;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  return;
}




undefined8 FUN_180008cb0(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  byte local_res18 [8];
  char local_res20 [8];
  byte local_28;
  byte local_27;
  byte local_26 [2];
  undefined4 local_24 [5];
  
  local_24[0] = 0;
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x50,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x48,8);
  local_res18[0] = *(byte *)(param_1 + 0x91) & 1;
  (**(code **)(*param_2 + 0x78))(param_2,local_res18,1);
  puVar1 = local_res8;
  if ((*(byte *)(param_1 + 0x72) & 2) == 0) {
    puVar1 = local_res10;
  }
  local_res8[0] = 1;
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x78))(param_2,puVar1,1);
  puVar1 = local_res8;
  if ((*(byte *)(param_1 + 0x72) & 1) == 0) {
    puVar1 = local_res10;
  }
  (**(code **)(*param_2 + 0x78))(param_2,puVar1,1);
  (**(code **)(*param_2 + 0x78))(param_2,local_24,4);
  puVar1 = local_res8;
  if (-1 < *(char *)(param_1 + 0x72)) {
    puVar1 = local_res10;
  }
  (**(code **)(*param_2 + 0x78))(param_2,puVar1,1);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x6c,2);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x68,2);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x6e,2);
  local_res20[0] = *(char *)(param_1 + 0x71);
  if (local_res20[0] == '\x02') {
    local_res20[0] = '\x05';
  }
  (**(code **)(*param_2 + 0x78))(param_2,local_res20,1);
  local_28 = *(byte *)(param_1 + 0x72) >> 7;
  (**(code **)(*param_2 + 0x78))(param_2,&local_28,1);
  local_27 = *(byte *)(param_1 + 0x73) >> 1 & 1;
  (**(code **)(*param_2 + 0x78))(param_2,&local_27,1);
  local_26[0] = *(byte *)(param_1 + 0x73) >> 2 & 1;
  (**(code **)(*param_2 + 0x78))(param_2,local_26,1);
  return 1;
}




undefined8 FUN_180008e60(longlong param_1,longlong *param_2)

{
  byte local_res8 [8];
  char local_res10 [8];
  byte local_res18 [8];
  char local_res20 [8];
  undefined1 local_28 [4];
  undefined4 local_24 [5];
  
  local_24[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x50,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x48,8);
  local_res8[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) & 0xfe;
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) | local_res8[0] & 1;
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfd;
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | -(local_res8[0] != 0) & 2U;
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x72) = local_res8[0] != 0 | *(byte *)(param_1 + 0x72) & 0xfe;
  (**(code **)(*param_2 + 0x70))(param_2,local_24,4);
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x72) = (local_res8[0] != 0) << 7 | *(byte *)(param_1 + 0x72) & 0x7f;
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x6c,2);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x68,2);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x6e,2);
  (**(code **)(*param_2 + 0x70))(param_2,local_28,1);
  local_res10[0] = '\0';
  (**(code **)(*param_2 + 0x70))(param_2,local_res10,1);
  local_res18[0] = 0;
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0x7f | local_res10[0] << 7;
  *(undefined1 *)(param_1 + 0x71) = local_28[0];
  (**(code **)(*param_2 + 0x70))(param_2,local_res18,1);
  *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) & 0xfd;
  local_res20[0] = '\0';
  *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) | (local_res18[0] & 1) * '\x02';
  (**(code **)(*param_2 + 0x70))(param_2,local_res20,1);
  *(byte *)(param_1 + 0x73) =
       *(byte *)(param_1 + 0x73) ^ (local_res20[0] << 2 ^ *(byte *)(param_1 + 0x73)) & 4;
  return 1;
}




undefined8 * FUN_180009040(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x93);
  *puVar3 = CFileNode::vftable;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0xffff;
  *(undefined4 *)((longlong)puVar3 + 0x6c) = 0xffff;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x75) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x7d) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x81) = 0;
  *(undefined2 *)((longlong)puVar3 + 0x91) = 0;
  *(byte *)((longlong)puVar3 + 0x72) = *(byte *)((longlong)puVar3 + 0x72) & 0xf8;
  *(byte *)((longlong)puVar3 + 0x91) = *(byte *)((longlong)puVar3 + 0x91) & 0xfe;
  *(byte *)((longlong)puVar3 + 0x91) = *(byte *)((longlong)puVar3 + 0x91) | 2;
  *(byte *)((longlong)puVar3 + 0x72) = *(byte *)((longlong)puVar3 + 0x72) & 7;
  *(byte *)((longlong)puVar3 + 0x74) = *(byte *)((longlong)puVar3 + 0x74) & 0xf8;
  puVar3[9] = 0xffffffffffffffff;
  puVar3[10] = 0xffffffffffffffff;
  puVar3[0xb] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x89) = 0;
  puVar3[4] = 0;
  *(undefined1 *)((longlong)puVar3 + 0x73) = 0x20;
  puVar3[0xb] = *(undefined8 *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0xc);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  puVar3[10] = *(undefined8 *)(param_1 + 0x50);
  puVar3[9] = *(undefined8 *)(param_1 + 0x48);
  *(byte *)((longlong)puVar3 + 0x72) =
       *(byte *)((longlong)puVar3 + 0x72) ^
       (*(byte *)((longlong)puVar3 + 0x72) ^ *(byte *)(param_1 + 0x72)) & 4;
  *(undefined8 *)((longlong)puVar3 + 0x75) = *(undefined8 *)(param_1 + 0x75);
  *(undefined4 *)((longlong)puVar3 + 0x7d) = *(undefined4 *)(param_1 + 0x7d);
  *(undefined8 *)((longlong)puVar3 + 0x89) = *(undefined8 *)(param_1 + 0x89);
  *(undefined1 *)((longlong)puVar3 + 0x91) = *(undefined1 *)(param_1 + 0x91);
  bVar2 = (*(byte *)((longlong)puVar3 + 0x72) ^ *(byte *)(param_1 + 0x72)) & 1 ^
          *(byte *)((longlong)puVar3 + 0x72);
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 2 ^ bVar2;
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 4 ^ bVar2;
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 8 ^ bVar2;
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 0x40 ^ bVar2;
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 0x7f ^ *(byte *)(param_1 + 0x72);
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  *(undefined2 *)(puVar3 + 0xd) = *(undefined2 *)(param_1 + 0x68);
  *(undefined2 *)((longlong)puVar3 + 0x6c) = *(undefined2 *)(param_1 + 0x6c);
  *(byte *)((longlong)puVar3 + 0x72) =
       (bVar2 ^ *(byte *)(param_1 + 0x72)) & 0x7f ^ *(byte *)(param_1 + 0x72);
  *(byte *)((longlong)puVar3 + 0x73) =
       *(byte *)((longlong)puVar3 + 0x73) ^
       (*(byte *)(param_1 + 0x73) ^ *(byte *)((longlong)puVar3 + 0x73)) & 4;
  bVar2 = (*(char *)(param_1 + 0x73) * '\x02' ^ *(byte *)((longlong)puVar3 + 0x73)) & 2 ^
          *(byte *)((longlong)puVar3 + 0x73);
  *(byte *)((longlong)puVar3 + 0x73) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x73)) & 0x1f ^ *(byte *)(param_1 + 0x73);
  *(byte *)((longlong)puVar3 + 0x73) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x73)) & 0x10 ^ bVar2;
  *(byte *)((longlong)puVar3 + 0x73) = bVar2;
  *(byte *)((longlong)puVar3 + 0x73) =
       (bVar2 ^ *(byte *)(param_1 + 0x73)) & 0x1f ^ *(byte *)(param_1 + 0x73);
  *(byte *)((longlong)puVar3 + 0x74) =
       *(byte *)((longlong)puVar3 + 0x74) ^
       (*(byte *)((longlong)puVar3 + 0x74) ^ *(byte *)(param_1 + 0x74)) & 1;
  *(byte *)((longlong)puVar3 + 0x74) =
       *(byte *)((longlong)puVar3 + 0x74) ^
       (*(byte *)((longlong)puVar3 + 0x74) ^ *(byte *)(param_1 + 0x74)) & 4;
  return puVar3;
}




undefined8 * FUN_180009250(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0xffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffff;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined2 *)((longlong)param_1 + 0x91) = 0;
  *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_1 + 0x72) & 0xf8;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xfe;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 2;
  *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_1 + 0x72) & 7;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) & 0xf8;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  *param_1 = CFileSystemNode::vftable;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  param_1[4] = 0;
  *(undefined1 *)((longlong)param_1 + 0x73) = 0x20;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xe;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x38;
  *(undefined8 *)((longlong)param_1 + 500) = 0x23;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  _Mtx_init_in_situ(param_1 + 0x45);
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x51) = 0x2a00;
  memset(param_1 + 0x13,0,0x130);
  return param_1;
}




undefined8 * FUN_1800093a0(undefined8 *param_1,uint param_2)

{
  FUN_1800093e0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800093e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  void *_Memory;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  *param_1 = CFileSystemNode::vftable;
  uVar6 = 0;
  if ((void *)param_1[0x3b] != (void *)0x0) {
    free((void *)param_1[0x3b]);
    param_1[0x3b] = 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  memset(param_1 + 0x13,0,0x130);
  plVar7 = (longlong *)param_1[0x42];
  uVar5 = (ulonglong)((longlong)param_1[0x43] + (7 - (longlong)plVar7)) >> 3;
  if ((longlong *)param_1[0x43] < plVar7) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,1);
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  param_1[0x43] = param_1[0x42];
  _Mtx_destroy_in_situ(param_1 + 0x45);
  pvVar4 = (void *)param_1[0x42];
  if (pvVar4 != (void *)0x0) {
    _Memory = pvVar4;
    if ((0xfff < (param_1[0x44] - (longlong)pvVar4 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
  }
  plVar7 = (longlong *)param_1[6];
  *param_1 = CFileNode::vftable;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x138))(plVar7,1);
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
    param_1[8] = 0;
  }
  return;
}




void FUN_180009590(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1d0) = param_3;
  *(undefined8 *)(param_1 + 0x1c8) = param_2;
  return;
}




undefined8 FUN_1800095a0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined8 *)(param_1 + 0x1c8);
  *param_3 = *(undefined4 *)(param_1 + 0x1d0);
  return 1;
}




void FUN_1800095c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1d4) = param_2;
  return;
}




undefined4 FUN_1800095d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1d4);
}




undefined8 FUN_1800095e0(longlong param_1,void *param_2)

{
  memmove(param_2,(void *)(param_1 + 0xc0),0x108);
  return 1;
}




undefined8 FUN_180009610(longlong param_1,void *param_2)

{
  memmove((void *)(param_1 + 0xc0),param_2,0x108);
  return 1;
}




undefined8 FUN_180009630(longlong param_1,void *param_2)

{
  memmove(param_2,(void *)(param_1 + 0x98),0x28);
  return 1;
}




undefined8 FUN_180009660(void)

{
  return 1;
}




void FUN_180009670(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  longlong local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  byte local_34;
  ulonglong local_30;
  
  local_30 = DAT_180021010 ^ (ulonglong)auStack_a8;
  bVar2 = 0;
  bVar6 = *(byte *)(param_2 + 0xe) & 3;
  if (bVar6 != 2) {
    bVar2 = 2;
  }
  if (param_3 == 0) {
    local_38 = 1;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_34 = bVar2;
    FUN_18000a2c0(param_2,(int *)&local_60);
    memmove(&local_88,&local_60,0x28);
    iVar3 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar3 != 0) {
      iVar3 = *(int *)((longlong)param_2 + 0x9c) - local_84;
      lVar4 = param_2[0x15] - local_78;
      iVar5 = *(int *)((longlong)param_2 + 0xb4) - local_6c;
      iVar7 = *(int *)((longlong)param_2 + 0xbc) - local_64;
      if (bVar6 != 2) {
        iVar3 = iVar3 + local_88;
        iVar5 = iVar5 + local_70;
        lVar4 = lVar4 + local_80;
        iVar7 = iVar7 + local_68;
      }
      *(int *)((longlong)param_2 + 0xbc) = iVar7;
      *(int *)((longlong)param_2 + 0xb4) = iVar5;
      param_2[0x15] = lVar4;
      *(int *)((longlong)param_2 + 0x9c) = iVar3;
    }
    for (plVar1 = (longlong *)param_2[1]; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1])
    {
      lVar4 = plVar1[2];
      iVar3 = 0;
      iVar5 = 0;
      iVar7 = 0;
      if (lVar4 == 0) {
LAB_180009816:
        *(byte *)(plVar1 + 0xe) = *(byte *)(plVar1 + 0xe) & 0xfc;
      }
      else {
        do {
          iVar7 = iVar7 + 1;
          bVar2 = *(byte *)(lVar4 + 0x70) & 3;
          if (bVar2 == 2) {
            iVar3 = iVar3 + 1;
          }
          else if (bVar2 == 1) {
            iVar5 = iVar5 + 1;
          }
          lVar4 = *(longlong *)(lVar4 + 0x18);
        } while (lVar4 != 0);
        if ((iVar3 == 0) && (iVar5 == 0)) goto LAB_180009816;
        if (iVar3 < iVar7) {
          *(byte *)(plVar1 + 0xe) = *(byte *)(plVar1 + 0xe) & 0xfd | 1;
        }
        else {
          *(byte *)(plVar1 + 0xe) = *(byte *)(plVar1 + 0xe) & 0xfe | 2;
        }
      }
      iVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      if (iVar3 != 0) {
        iVar3 = *(int *)((longlong)plVar1 + 0x9c) - local_84;
        lVar4 = plVar1[0x15] - local_78;
        iVar5 = *(int *)((longlong)plVar1 + 0xb4) - local_6c;
        iVar7 = *(int *)((longlong)plVar1 + 0xbc) - local_64;
        if (bVar6 != 2) {
          iVar3 = iVar3 + local_88;
          iVar5 = iVar5 + local_70;
          lVar4 = lVar4 + local_80;
          iVar7 = iVar7 + local_68;
        }
        *(int *)((longlong)plVar1 + 0xbc) = iVar7;
        *(int *)((longlong)plVar1 + 0xb4) = iVar5;
        plVar1[0x15] = lVar4;
        *(int *)((longlong)plVar1 + 0x9c) = iVar3;
      }
    }
  }
  else {
    *(byte *)(param_2 + 0xe) = *(byte *)(param_2 + 0xe) & 0xfc | bVar2;
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_a8);
  return;
}




undefined8 FUN_1800098e0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x30), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001800098f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,param_3);
    return uVar2;
  }
  return 0;
}




void FUN_180009900(longlong param_1)

{
  undefined1 auStack_68 [32];
  int local_48 [11];
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180021010 ^ (ulonglong)auStack_68;
  local_48[10] = 0;
  local_1c = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  if (param_1 != 0) {
    FUN_18000a2c0(param_1,local_48);
  }
  memmove((void *)(param_1 + 0x98),local_48,0x28);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




void FUN_180009980(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  ulonglong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180021010 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    uStack_48 = *(undefined8 *)(param_1 + 0xa0);
    uVar4 = 0;
    local_50 = *(ulonglong *)(param_1 + 0x98) & 0xffffffff;
    local_40 = 0;
    local_30 = *(ulonglong *)(param_1 + 0xb8) & 0xffffffff;
    uStack_38 = *(ulonglong *)(param_1 + 0xb0) & 0xffffffff;
    FUN_180008cb0(param_1,param_2);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x50,8);
    (**(code **)(*param_2 + 0x78))(param_2,&local_50,0x28);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1c8,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1d0,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1d4,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1e0,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1e4,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1ec,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1e8,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1f0,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x200,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x208,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x288,1);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x289,1);
    if (*(longlong *)(param_1 + 0x1d8) != 0) {
      (**(code **)(*param_2 + 0x78))
                (param_2,*(longlong *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e0));
    }
    local_58[0] = (undefined4)(*(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210) >> 3)
    ;
    (**(code **)(*param_2 + 0x78))(param_2,local_58,4);
    puVar1 = *(undefined8 **)(param_1 + 0x218);
    puVar2 = *(undefined8 **)(param_1 + 0x210);
    if (puVar2 != puVar1) {
      uVar3 = (ulonglong)((longlong)puVar1 + (7 - (longlong)puVar2)) >> 3;
      if (puVar1 < puVar2) {
        uVar3 = uVar4;
      }
      if (uVar3 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar2 + 0x20))((longlong *)*puVar2,param_2);
          uVar4 = uVar4 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar4 != uVar3);
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_78);
  return;
}




undefined8 FUN_180009bc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong *plVar3;
  uint uVar4;
  uint local_res10 [2];
  longlong *local_res18 [2];
  
  if (param_2 != (longlong *)0x0) {
    FUN_180008e60(param_1,param_2);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x50,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x98,0x28);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1c8,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1d0,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1d4,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1e0,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1e4,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1ec,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1e8,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1f0,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x200,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x208,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x288,1);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x289,1);
    uVar4 = 0;
    if (*(void **)(param_1 + 0x1d8) != (void *)0x0) {
      free(*(void **)(param_1 + 0x1d8));
      *(undefined8 *)(param_1 + 0x1d8) = 0;
    }
    if (*(int *)(param_1 + 0x1e0) != 0) {
      pvVar2 = operator_new((ulonglong)(*(int *)(param_1 + 0x1e0) + 1));
      *(void **)(param_1 + 0x1d8) = pvVar2;
      (**(code **)(*param_2 + 0x70))(param_2,pvVar2,*(undefined4 *)(param_1 + 0x1e0));
      *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x1e0) + *(longlong *)(param_1 + 0x1d8)) = 0;
    }
    local_res10[0] = 0;
    (**(code **)(*param_2 + 0x70))(param_2,local_res10,4);
    if (local_res10[0] != 0) {
      do {
        local_res18[0] = (longlong *)operator_new(0x290);
        plVar3 = FUN_180009250(local_res18[0]);
        local_res18[0] = plVar3;
        (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
        puVar1 = *(undefined8 **)(param_1 + 0x218);
        if (*(undefined8 **)(param_1 + 0x220) == puVar1) {
          FUN_180006780((longlong *)(param_1 + 0x210),puVar1,local_res18);
        }
        else {
          *puVar1 = plVar3;
          *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 8;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_res10[0]);
    }
    return 1;
  }
  return 0;
}




undefined8 *
FUN_180009e20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char *pcVar12;
  
  puVar6 = (undefined8 *)operator_new(0x290);
  puVar6 = FUN_180009250(puVar6);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xb] = *(undefined8 *)(param_1 + 0x58);
    plVar7 = FUN_18000a040(param_1);
    puVar6[6] = plVar7;
    lVar11 = 2;
    puVar6[10] = *(undefined8 *)(param_1 + 0x50);
    puVar6[9] = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    puVar6[0x13] = *(undefined8 *)(param_1 + 0x98);
    puVar6[0x14] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    puVar6[0x15] = *(undefined8 *)(param_1 + 0xa8);
    puVar6[0x16] = uVar5;
    puVar6[0x17] = *(undefined8 *)(param_1 + 0xb8);
    puVar8 = (undefined8 *)(param_1 + 0xc0);
    puVar10 = puVar6 + 0x18;
    do {
      puVar1 = puVar10 + 0x10;
      uVar5 = puVar8[1];
      puVar2 = puVar8 + 0x10;
      *puVar10 = *puVar8;
      puVar10[1] = uVar5;
      uVar5 = puVar8[3];
      puVar10[2] = puVar8[2];
      puVar10[3] = uVar5;
      uVar5 = puVar8[5];
      puVar10[4] = puVar8[4];
      puVar10[5] = uVar5;
      uVar5 = puVar8[7];
      puVar10[6] = puVar8[6];
      puVar10[7] = uVar5;
      uVar5 = puVar8[9];
      puVar10[8] = puVar8[8];
      puVar10[9] = uVar5;
      uVar5 = puVar8[0xb];
      puVar10[10] = puVar8[10];
      puVar10[0xb] = uVar5;
      uVar5 = puVar8[0xd];
      puVar10[0xc] = puVar8[0xc];
      puVar10[0xd] = uVar5;
      uVar5 = puVar8[0xf];
      puVar10[0xe] = puVar8[0xe];
      puVar10[0xf] = uVar5;
      lVar11 = lVar11 + -1;
      puVar8 = puVar2;
      puVar10 = puVar1;
    } while (lVar11 != 0);
    *puVar1 = *puVar2;
    puVar6[0x39] = *(undefined8 *)(param_1 + 0x1c8);
    *(undefined4 *)(puVar6 + 0x3a) = *(undefined4 *)(param_1 + 0x1d0);
    *(undefined4 *)((longlong)puVar6 + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
    iVar4 = *(int *)(param_1 + 0x1e0);
    *(int *)(puVar6 + 0x3c) = iVar4;
    if (iVar4 != 0) {
      pcVar9 = (char *)operator_new((ulonglong)(*(int *)(param_1 + 0x1e0) + 1));
      puVar6[0x3b] = pcVar9;
      pcVar12 = *(char **)(param_1 + 0x1d8);
      do {
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        *pcVar9 = cVar3;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
    }
    if (puVar6 + 0x42 != (ulonglong *)(param_1 + 0x210)) {
      FUN_18000a970(puVar6 + 0x42,*(void **)(param_1 + 0x210),*(longlong *)(param_1 + 0x218),param_4
                   );
    }
    *(undefined4 *)(puVar6 + 0x3f) = *(undefined4 *)(param_1 + 0x1f8);
    *(undefined4 *)((longlong)puVar6 + 500) = *(undefined4 *)(param_1 + 500);
    *(undefined4 *)(puVar6 + 0x3e) = *(undefined4 *)(param_1 + 0x1f0);
    *(undefined4 *)((longlong)puVar6 + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
    *(undefined4 *)(puVar6 + 0x3d) = *(undefined4 *)(param_1 + 0x1e8);
    *(undefined4 *)((longlong)puVar6 + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
    puVar6[0x40] = *(undefined8 *)(param_1 + 0x200);
    puVar6[0x41] = *(undefined8 *)(param_1 + 0x208);
    puVar6[0x50] = param_1;
    *(undefined1 *)(puVar6 + 0x51) = *(undefined1 *)(param_1 + 0x288);
    *(byte *)((longlong)puVar6 + 0x72) =
         (*(byte *)(param_1 + 0x72) ^ *(byte *)((longlong)puVar6 + 0x72)) & 0x7f ^
         *(byte *)(param_1 + 0x72);
    *(undefined1 *)((longlong)puVar6 + 0x289) = *(undefined1 *)(param_1 + 0x289);
  }
  return puVar6;
}




longlong * FUN_18000a040(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) &&
     (plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0xf8))(),
     plVar1 != (longlong *)0x0)) {
    switch(*(undefined4 *)(param_1 + 0x1d4)) {
    case 0:
      (**(code **)(*plVar1 + 8))(plVar1,"FAT12");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 1:
      (**(code **)(*plVar1 + 8))(plVar1,"FAT16");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 2:
      (**(code **)(*plVar1 + 8))(plVar1,"FAT32");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 3:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_1800197e8);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 4:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_1800197f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 5:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_1800197f8);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 6:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180019810);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 7:
      (**(code **)(*plVar1 + 8))(plVar1,"EXFAT");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 8:
      (**(code **)(*plVar1 + 8))(plVar1,"HFSPLUS");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 9:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180019800);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 10:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180019808);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    }
  }
  return (longlong *)0x0;
}




/* WARNING: Removing unreachable block (ram,0x00018000a5a0) */
/* WARNING: Removing unreachable block (ram,0x00018000a5a6) */

void FUN_18000a2c0(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong *local_50;
  void *pvStack_48;
  ulonglong local_40;
  ulonglong local_38;
  longlong local_30;
  
  local_50 = (longlong *)0x0;
  pvStack_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_50 = (longlong *)operator_new(0x10);
  *local_50 = 0;
  local_50[1] = 0;
  *local_50 = (longlong)&local_50;
  if ((((int)local_30 + (int)local_38 & 1U) == 0) && (local_40 <= local_30 + 2U >> 1)) {
    FUN_18000a750((longlong)&local_50,local_38);
  }
  local_38 = local_38 & local_40 * 2 - 1;
  uVar9 = local_38 + local_30;
  lVar7 = (local_40 - 1 & uVar9 >> 1) * 8;
  if (*(longlong *)((longlong)pvStack_48 + lVar7) == 0) {
    pvVar6 = operator_new(0x10);
    *(void **)((longlong)pvStack_48 + lVar7) = pvVar6;
  }
  *(undefined8 *)(*(longlong *)((longlong)pvStack_48 + lVar7) + (ulonglong)((uint)uVar9 & 1) * 8) =
       param_1;
  local_30 = local_30 + 1;
  while (local_30 != 0) {
    lVar7 = 0;
    if (local_50 != (longlong *)0x0) {
      lVar7 = *local_50;
    }
    plVar2 = *(longlong **)
              (*(longlong *)
                (*(longlong *)(lVar7 + 8) + (*(longlong *)(lVar7 + 0x10) - 1U & local_38 >> 1) * 8)
              + (ulonglong)((uint)local_38 & 1) * 8);
    local_30 = local_30 + -1;
    if (local_30 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = local_38 + 1;
    }
    plVar3 = (longlong *)plVar2[6];
    if (plVar3 != (longlong *)0x0) {
      bVar10 = *(byte *)(plVar2 + 0xe) & 3;
      if ((undefined **)*plVar3 == refs::RefsFileProperties::vftable) {
        uVar4 = *(ushort *)((longlong)plVar3 + 0x39);
      }
      else {
        uVar4 = (*(code *)((undefined **)*plVar3)[7])(plVar3);
      }
      if ((uVar4 & 0x10) == 0) {
        iVar5 = (**(code **)(*plVar2 + 8))(plVar2);
        if (iVar5 == 0) {
          *param_2 = *param_2 + 1;
        }
        if ((undefined **)*plVar3 == refs::RefsFileProperties::vftable) {
          lVar7 = *(longlong *)((longlong)plVar3 + 0x11);
        }
        else {
          lVar7 = (*(code *)((undefined **)*plVar3)[3])(plVar3);
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + lVar7;
        if (bVar10 == 2) {
          iVar5 = (**(code **)(*plVar2 + 8))(plVar2);
          if (iVar5 == 0) {
            param_2[1] = param_2[1] + 1;
          }
          if ((undefined **)*plVar3 == refs::RefsFileProperties::vftable) {
            lVar7 = *(longlong *)((longlong)plVar3 + 0x11);
          }
          else {
            lVar7 = (*(code *)((undefined **)*plVar3)[3])(plVar3);
          }
          *(longlong *)(param_2 + 4) = *(longlong *)(param_2 + 4) + lVar7;
        }
        if (((uVar4 & 0x800) != 0) && (param_2[6] = param_2[6] + 1, bVar10 == 2)) {
          param_2[7] = param_2[7] + 1;
        }
        if (((uVar4 & 0x40) != 0) && (param_2[8] = param_2[8] + 1, bVar10 == 2)) {
          param_2[9] = param_2[9] + 1;
        }
      }
      if (param_2[10] != 0) {
        *(byte *)(plVar2 + 0xe) = *(byte *)(plVar2 + 0xe) & 0xfc | *(byte *)(param_2 + 0xb);
      }
    }
    for (lVar7 = plVar2[2]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x18)) {
      if ((((char)local_38 + (char)local_30 & 1U) == 0) && (local_40 <= local_30 + 2U >> 1)) {
        FUN_18000a750((longlong)&local_50,local_40);
      }
      local_38 = local_38 & local_40 * 2 - 1;
      uVar9 = local_38 + local_30;
      lVar1 = (local_40 - 1 & uVar9 >> 1) * 8;
      if (*(longlong *)(lVar1 + (longlong)pvStack_48) == 0) {
        pvVar6 = operator_new(0x10);
        *(void **)(lVar1 + (longlong)pvStack_48) = pvVar6;
      }
      *(longlong *)(*(longlong *)(lVar1 + (longlong)pvStack_48) + (ulonglong)((uint)uVar9 & 1) * 8)
           = lVar7;
      local_30 = local_30 + 1;
    }
  }
  local_30 = 0;
  pvVar6 = pvStack_48;
  uVar9 = local_40;
  while (uVar9 != 0) {
    uVar9 = uVar9 - 1;
    pvVar8 = *(void **)((longlong)pvVar6 + uVar9 * 8);
    if (pvVar8 != (void *)0x0) {
      free(pvVar8);
      pvVar6 = pvStack_48;
    }
  }
  if (pvVar6 != (void *)0x0) {
    pvVar8 = pvVar6;
    if ((0xfff < local_40 * 8) &&
       (pvVar8 = *(void **)((longlong)pvVar6 + -8),
       0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
  }
  local_40 = 0;
  pvStack_48 = (void *)0x0;
  free(local_50);
  return;
}




void FUN_18000a680(undefined8 *param_1)

{
  void *pvVar1;
  longlong lVar2;
  void *_Memory;
  
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      param_1[4] = lVar2;
    } while (lVar2 != 0);
    param_1[3] = 0;
  }
  lVar2 = param_1[2];
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    pvVar1 = *(void **)(param_1[1] + lVar2 * 8);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] << 3)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  free((void *)*param_1);
  *param_1 = 0;
  return;
}




void FUN_18000a750(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  size_t sVar5;
  void *pvVar6;
  size_t sVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *_Dst;
  ulonglong uVar10;
  undefined8 local_res10;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = 1;
  if (uVar4 != 0) {
    uVar3 = uVar4;
  }
  for (; (uVar8 = uVar3 - uVar4, local_res10 = param_2, uVar8 == 0 || (uVar3 < 8));
      uVar3 = uVar3 * 2) {
    if (0xfffffffffffffff - uVar3 < uVar3) {
      FUN_18000a950();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = uVar3 * 8;
  uVar10 = *(ulonglong *)(param_1 + 0x18) >> 1;
  if (uVar3 < 0x2000000000000000) {
    if (0xfff < uVar4) goto LAB_18000a7e3;
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar4);
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
LAB_18000a7e3:
    uVar3 = uVar4 + 0x27;
    if (uVar3 <= uVar4) {
      uVar3 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new(uVar3);
    if (pvVar2 == (void *)0x0) goto LAB_18000a943;
    _Dst = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar2;
  }
  lVar9 = *(longlong *)(param_1 + 8);
  sVar7 = uVar10 * 8;
  pvVar2 = (void *)(lVar9 + sVar7);
  FUN_1800071d0((undefined1 *)&local_res10);
  sVar5 = (*(longlong *)(param_1 + 0x10) * 8 - (longlong)pvVar2) + lVar9;
  memmove((void *)(sVar7 + (longlong)_Dst),pvVar2,sVar5);
  pvVar2 = *(void **)(param_1 + 8);
  pvVar6 = (void *)(sVar5 + (longlong)(sVar7 + (longlong)_Dst));
  FUN_1800071d0((undefined1 *)&local_res10);
  if (uVar8 < uVar10) {
    sVar5 = uVar8 * 8;
    memmove(pvVar6,pvVar2,sVar5);
    lVar9 = *(longlong *)(param_1 + 8);
    pvVar2 = (void *)(sVar5 + lVar9);
    FUN_1800071d0((undefined1 *)&local_res10);
    sVar7 = (lVar9 - (longlong)pvVar2) + sVar7;
    memmove(_Dst,pvVar2,sVar7);
    pvVar2 = (void *)(sVar7 + (longlong)_Dst);
  }
  else {
    memmove(pvVar6,pvVar2,sVar7);
    memset((void *)(sVar7 + (longlong)pvVar6),0,(uVar8 - uVar10) * 8);
    pvVar2 = _Dst;
    sVar5 = sVar7;
  }
  memset(pvVar2,0,sVar5);
  pvVar2 = *(void **)(param_1 + 8);
  if (pvVar2 != (void *)0x0) {
    pvVar6 = pvVar2;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 3)) &&
       (pvVar6 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
LAB_18000a943:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar6);
  }
  *(void **)(param_1 + 8) = _Dst;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar8;
  return;
}




void FUN_18000a950(void)

{
  code *pcVar1;
  
  std::_Xlength_error("deque<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_18000a970(ulonglong *param_1,void *param_2,longlong param_3,undefined1 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  size_t sVar7;
  undefined1 local_res20 [8];
  
  pvVar4 = (void *)*param_1;
  sVar7 = param_3 - (longlong)param_2;
  uVar2 = (longlong)(param_1[1] - (longlong)pvVar4) >> 3;
  uVar6 = (longlong)sVar7 >> 3;
  uVar5 = (longlong)(param_1[2] - (longlong)pvVar4) >> 3;
  local_res20[0] = param_4;
  if (uVar5 < uVar6) {
    if (0x1fffffffffffffff < uVar6) {
LAB_18000ab33:
      FUN_1800062c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = uVar6;
    if ((uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) &&
       (uVar2 = (uVar5 >> 1) + uVar5, uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    if (pvVar4 != (void *)0x0) {
      pvVar3 = pvVar4;
      if ((0xfff < uVar5 * 8) &&
         (pvVar3 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar3)))) goto LAB_18000aa86;
      free(pvVar3);
    }
    pvVar4 = (void *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (uVar2 != 0) {
      if (0x1fffffffffffffff < uVar2) goto LAB_18000ab33;
      uVar2 = uVar2 * 8;
      if (uVar2 < 0x1000) {
        if (uVar2 != 0) {
          pvVar4 = operator_new(uVar2);
        }
      }
      else {
        uVar5 = uVar2 + 0x27;
        if (uVar5 <= uVar2) {
          uVar5 = 0xffffffffffffffff;
        }
        pvVar3 = operator_new(uVar5);
        if (pvVar3 == (void *)0x0) {
LAB_18000aa86:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        pvVar4 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar4 - 8) = pvVar3;
      }
      *param_1 = (ulonglong)pvVar4;
      param_1[1] = (ulonglong)pvVar4;
      param_1[2] = *param_1 + uVar2;
    }
    pvVar4 = (void *)*param_1;
    FUN_1800071d0(local_res20);
    memmove(pvVar4,param_2,sVar7);
    pvVar4 = (void *)(sVar7 + (longlong)pvVar4);
  }
  else if (uVar2 < uVar6) {
    sVar7 = uVar2 * 8;
    memmove(pvVar4,param_2,sVar7);
    pvVar3 = (void *)(sVar7 + (longlong)param_2);
    pvVar4 = (void *)param_1[1];
    FUN_1800071d0(local_res20);
    memmove(pvVar4,pvVar3,param_3 - (longlong)pvVar3);
    pvVar4 = (void *)((param_3 - (longlong)pvVar3) + (longlong)pvVar4);
  }
  else {
    memmove(pvVar4,param_2,sVar7);
    pvVar4 = (void *)((longlong)pvVar4 + uVar6 * 8);
  }
  param_1[1] = (ulonglong)pvVar4;
  return;
}




ulonglong FUN_18000ab40(ulonglong param_1,uint param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar4 = (ulonglong)param_2;
  if ((0x33 < param_1) && (param_3 != (longlong *)0x0)) {
    if (param_1 < uVar4) {
      return uVar4 | param_1;
    }
    if (param_2 * 2 <= param_1) {
      plVar2 = (longlong *)*param_3;
      plVar6 = (longlong *)*plVar2;
      if (plVar6 != plVar2) {
        do {
          if (plVar6[5] == (~(ulonglong)(param_2 - 1) & param_1)) break;
          plVar3 = (longlong *)plVar6[2];
          if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar3 + 0x19);
              plVar6 = plVar3;
              plVar3 = (longlong *)*plVar3;
            }
          }
          else {
            cVar1 = *(char *)(plVar6[1] + 0x19);
            plVar5 = (longlong *)plVar6[1];
            plVar3 = plVar6;
            while ((plVar6 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
              cVar1 = *(char *)(plVar6[1] + 0x19);
              plVar5 = (longlong *)plVar6[1];
              plVar3 = plVar6;
            }
          }
        } while (plVar6 != plVar2);
        if (plVar6 != plVar2) {
          param_1 = ((ulonglong)plVar6[4] / uVar4 + 2) * uVar4 * 2 | param_2 - 1 & param_1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}




void FUN_18000ac40(longlong *param_1,longlong *param_2)

{
  size_t *psVar1;
  size_t *psVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  undefined8 *_Buf2;
  undefined8 *_Buf1;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong uStack_48;
  void *local_40 [3];
  ulonglong local_28;
  ulonglong local_20;
  
  local_68 = 0xfffffffffffffffe;
  local_20 = DAT_180021010 ^ (ulonglong)auStack_88;
  if ((param_1 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
    _Buf2 = (undefined8 *)(**(code **)(*param_1 + 0x148))(param_1,local_40);
    _Buf1 = (undefined8 *)(**(code **)(*param_2 + 0x148))(param_2,&local_60);
    psVar1 = _Buf2 + 2;
    if (0xf < (ulonglong)_Buf2[3]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    psVar2 = _Buf1 + 2;
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((*psVar2 == *psVar1) && (iVar5 = memcmp(_Buf1,_Buf2,*psVar2), iVar5 == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (0xf < uStack_48) {
      pvVar3 = (void *)CONCAT71(uStack_5f,local_60);
      pvVar8 = pvVar3;
      if ((0xfff < uStack_48 + 1) &&
         (pvVar8 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar8);
    }
    local_50 = 0;
    uStack_48 = 0xf;
    local_60 = 0;
    if (0xf < local_28) {
      pvVar8 = local_40[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar8 = *(void **)((longlong)local_40[0] + -8),
         0x1f < (ulonglong)((longlong)local_40[0] + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar8);
    }
    if ((!bVar4) && ((*(uint *)((longlong)param_1 + 0x39) >> 4 & 1) == 0)) {
      if ((undefined **)*param_1 == refs::RefsFileProperties::vftable) {
        lVar6 = *(longlong *)((longlong)param_1 + 0x19);
      }
      else {
        lVar6 = (*(code *)((undefined **)*param_1)[0x28])(param_1);
      }
      if ((undefined **)*param_2 == refs::RefsFileProperties::vftable) {
        lVar7 = *(longlong *)((longlong)param_2 + 0x19);
      }
      else {
        lVar7 = (*(code *)((undefined **)*param_2)[0x28])(param_2);
      }
      if (lVar6 == lVar7) {
        if ((undefined **)*param_1 != refs::RefsFileProperties::vftable) {
          (*(code *)((undefined **)*param_1)[0x2a])(param_1);
        }
        if ((undefined **)*param_2 != refs::RefsFileProperties::vftable) {
          (*(code *)((undefined **)*param_2)[0x2a])(param_2);
        }
      }
    }
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStack_88);
  return;
}




void FUN_18000ae40(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x138))(plVar1,1);
  }
  *param_1 = 0;
  return;
}




char * FUN_18000ae70(char *param_1,int *param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  char *local_38;
  
  pcVar2 = param_1;
  if (param_2 != (int *)0x0) {
    pcVar2 = (char *)operator_new(0x40);
    puVar3 = FUN_18000fc80((undefined8 *)pcVar2,param_2,param_3,3);
    if (*(char *)(puVar3 + 1) != '\0') {
      uVar1 = *(uint *)(puVar3 + 4);
      FUN_180014c20(&local_40,(uint *)((ulonglong)uVar1 + (longlong)param_2),param_3 - uVar1);
      if (((local_38[8] != '\0') && (uVar5 = *(int *)(local_38 + 0x10) + uVar1, uVar5 < param_3)) &&
         (uVar1 < uVar5)) {
        FUN_180014280(&local_50,(longlong)param_2,param_3,uVar5,puVar3[5],param_4);
        if (*(char *)(local_48 + 1) != '\0') {
          FUN_1800144a0(param_1,local_48 + 3);
          (**(code **)*local_48)(local_48,1);
          (*(code *)**(undefined8 **)local_38)(local_38,1);
          return param_1;
        }
        (**(code **)*local_48)(local_48,1);
      }
      (*(code *)**(undefined8 **)local_38)();
      pcVar2 = local_38;
    }
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  uVar4 = FUN_180006330(pcVar2,(undefined8 *)0x0,(undefined8 *)0x0);
  *(undefined8 *)param_1 = uVar4;
  return param_1;
}




undefined4 FUN_18000afe0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_18000aff0(undefined8 *param_1)

{
  *param_1 = refs::RefsBaseDataImpl::vftable;
  return;
}




undefined8 * FUN_18000b000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_18000b030(void)

{
  return 0xe;
}




undefined8 * FUN_18000b040(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = refs::RefsNodeRecordImpl::vftable;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = FUN_180006370(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  param_1[9] = uVar1;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}




undefined8 * FUN_18000b0e0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *_Memory;
  void *pvVar4;
  
  plVar3 = (longlong *)param_1[9];
  _Memory = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(undefined8 *)(param_1[9] + 8) = param_1[9];
  param_1[10] = 0;
  plVar3 = (longlong *)param_1[9];
  if (_Memory != plVar3) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      plVar3 = (longlong *)param_1[9];
      _Memory = plVar1;
    } while (plVar1 != plVar3);
  }
  free(plVar3);
  pvVar2 = (void *)param_1[6];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (ulonglong)(param_1[8] - (longlong)pvVar2)) &&
       (pvVar4 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) goto LAB_18000b203;
    free(pvVar4);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  pvVar2 = (void *)param_1[3];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (ulonglong)(param_1[5] - (longlong)pvVar2)) &&
       (pvVar4 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
LAB_18000b203:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  *param_1 = refs::RefsBaseDataImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000b210(undefined8 *param_1,uint *param_2,ulonglong param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  longlong extraout_RAX;
  longlong extraout_RAX_00;
  longlong extraout_RAX_01;
  longlong extraout_RAX_02;
  longlong lVar7;
  uint *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = refs::RefsNodeRecordImpl::vftable;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar6 = FUN_180006370(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  param_1[9] = uVar6;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (param_2 == (uint *)0x0) {
    return param_1;
  }
  if (param_3 < 8) {
    return param_1;
  }
  uVar2 = *param_2;
  *(uint *)((longlong)param_1 + 100) = uVar2;
  if (*param_2 == 0) {
    return param_1;
  }
  if (param_3 < uVar2) {
    return param_1;
  }
  *(uint *)((longlong)param_1 + 0x5c) = (uint)*(ushort *)((longlong)param_2 + 10);
  uVar1 = *(ushort *)((longlong)param_2 + 6);
  puVar12 = (undefined8 *)(ulonglong)uVar1;
  *(short *)(param_1 + 2) = (short)param_2[2];
  uVar10 = (ulonglong)(ushort)param_2[1];
  if (param_3 <= uVar10) {
    return param_1;
  }
  uVar13 = (ulonglong)uVar1;
  if (param_3 <= uVar13) {
    return param_1;
  }
  uVar2 = param_2[3];
  if (param_3 <= uVar2) {
    return param_1;
  }
  if (0x2000 < uVar2) {
    return param_1;
  }
  if (param_3 <= *(ushort *)((longlong)param_2 + 10)) {
    return param_1;
  }
  if (param_3 < *(ushort *)((longlong)param_2 + 10) + uVar2) {
    return param_1;
  }
  if (param_3 < uVar13 + uVar10) {
    return param_1;
  }
  if ((uVar1 != 0) && (uVar13 < param_3 - uVar10)) {
    FUN_18000f5a0(param_1 + 3,uVar13,puVar12);
    puVar12 = (undefined8 *)(ulonglong)uVar1;
    memcpy((void *)param_1[3],(void *)((ulonglong)(ushort)param_2[1] + (longlong)param_2),
           (size_t)puVar12);
  }
  puVar8 = param_2;
  cVar5 = FUN_18000b860((longlong)param_2,param_3);
  *(char *)(param_1 + 0xb) = cVar5;
  if (cVar5 != '\0') {
    puVar11 = (undefined8 *)((ulonglong)*(ushort *)((longlong)param_2 + 10) + (longlong)param_2);
    puVar12 = (undefined8 *)param_1[9];
    puVar3 = (undefined8 *)puVar12[1];
    uVar6 = FUN_180007510(puVar8,puVar12,puVar3,puVar11);
    lVar7 = param_1[10];
    pcVar9 = (char *)(0xaaaaaaaaaaaaaa9 - lVar7);
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar7 = extraout_RAX;
    }
    param_1[10] = lVar7 + 1;
    puVar12[1] = uVar6;
    *puVar3 = uVar6;
    puVar12 = (undefined8 *)param_1[9];
    puVar3 = (undefined8 *)puVar12[1];
    uVar6 = FUN_180007510(pcVar9,puVar12,puVar3,puVar11 + 1);
    lVar7 = param_1[10];
    pcVar9 = (char *)(0xaaaaaaaaaaaaaa9 - lVar7);
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar7 = extraout_RAX_00;
    }
    param_1[10] = lVar7 + 1;
    puVar12[1] = uVar6;
    *puVar3 = uVar6;
    puVar12 = (undefined8 *)param_1[9];
    puVar3 = (undefined8 *)puVar12[1];
    uVar6 = FUN_180007510(pcVar9,puVar12,puVar3,puVar11 + 2);
    lVar7 = param_1[10];
    pcVar9 = (char *)(0xaaaaaaaaaaaaaa9 - lVar7);
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar7 = extraout_RAX_01;
    }
    param_1[10] = lVar7 + 1;
    puVar12[1] = uVar6;
    *puVar3 = uVar6;
    puVar3 = (undefined8 *)param_1[9];
    puVar4 = (undefined8 *)puVar3[1];
    puVar12 = puVar4;
    pcVar9 = (char *)FUN_180007510(pcVar9,puVar3,puVar4,puVar11 + 3);
    lVar7 = param_1[10];
    if (lVar7 == 0xaaaaaaaaaaaaaa9) {
      pcVar9 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar7 = extraout_RAX_02;
    }
    param_1[10] = lVar7 + 1;
    puVar3[1] = pcVar9;
    *puVar4 = pcVar9;
    if (*(char *)(param_1 + 0xb) != '\0') goto LAB_18000b4dd;
  }
  uVar2 = param_2[3];
  if ((uVar2 != 0) && ((ulonglong)uVar2 < param_3 - *(ushort *)((longlong)param_2 + 10))) {
    FUN_18000f5a0(param_1 + 6,(ulonglong)uVar2,puVar12);
    memcpy((void *)param_1[6],
           (void *)((ulonglong)*(ushort *)((longlong)param_2 + 10) + (longlong)param_2),
           (ulonglong)param_2[3]);
  }
LAB_18000b4dd:
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}




undefined8 * FUN_18000b510(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsNodeRecord::vftable;
  if ((plVar1 != (longlong *)0x0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0))
  {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000b580(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsNodeRecord::vftable;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      *plVar1 = 0;
    }
    *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
    return;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018000b747) */
/* WARNING: Removing unreachable block (ram,0x00018000b701) */
/* WARNING: Removing unreachable block (ram,0x00018000b78a) */
/* WARNING: Removing unreachable block (ram,0x00018000b6bb) */

undefined8 * FUN_18000b5f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar6 = param_1;
  puVar3 = (undefined8 *)FUN_180006370(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30);
  if ((ulonglong)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) - lVar1) < 0x50) {
    *param_2 = 0;
    param_2[1] = 0;
    uVar4 = FUN_180006370(lVar6,(undefined8 *)0x0,(undefined8 *)0x0);
    *param_2 = uVar4;
    puVar2 = (undefined8 *)*puVar3;
    *puVar3 = puVar3;
    puVar3[1] = puVar3;
    while (puVar5 = puVar3, puVar2 != puVar3) {
      puVar5 = (undefined8 *)*puVar2;
      free(puVar2);
      puVar2 = puVar5;
    }
  }
  else {
    puVar5 = (undefined8 *)puVar3[1];
    uVar4 = FUN_180007510(lVar6,puVar3,puVar5,(undefined8 *)(lVar1 + 0x20));
    puVar3[1] = uVar4;
    *puVar5 = uVar4;
    puVar5 = (undefined8 *)puVar3[1];
    uVar4 = FUN_180007510(0xaaaaaaaaaaaaaa9,puVar3,puVar5,(undefined8 *)(lVar1 + 0x28));
    puVar3[1] = uVar4;
    *puVar5 = uVar4;
    puVar5 = (undefined8 *)puVar3[1];
    uVar4 = FUN_180007510(0xaaaaaaaaaaaaaa8,puVar3,puVar5,(undefined8 *)(lVar1 + 0x30));
    uVar7 = 0xaaaaaaaaaaaaaa7;
    puVar3[1] = uVar4;
    *puVar5 = uVar4;
    puVar5 = (undefined8 *)puVar3[1];
    uVar4 = FUN_180007510(0xaaaaaaaaaaaaaa7,puVar3,puVar5,(undefined8 *)(lVar1 + 0x38));
    puVar3[1] = uVar4;
    *puVar5 = uVar4;
    *param_2 = 0;
    param_2[1] = 0;
    puVar5 = (undefined8 *)FUN_180006370(uVar7,(undefined8 *)0x0,(undefined8 *)0x0);
    *param_2 = puVar3;
    param_2[1] = 4;
    puVar3 = (undefined8 *)*puVar5;
    *puVar5 = puVar5;
    puVar5[1] = puVar5;
    while (puVar3 != puVar5) {
      puVar2 = (undefined8 *)*puVar3;
      free(puVar3);
      puVar3 = puVar2;
    }
  }
  free(puVar5);
  return param_2;
}




undefined2 FUN_18000b820(longlong param_1)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)(*(longlong *)(param_1 + 8) + 0x18);
  if ((ulonglong)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) - (longlong)puVar1) < 4) {
    return 0;
  }
  return *puVar1;
}




undefined2 FUN_18000b840(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if ((ulonglong)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) - lVar1) < 4) {
    return 0;
  }
  return *(undefined2 *)(lVar1 + 2);
}




undefined1 FUN_18000b860(longlong param_1,ulonglong param_2)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if ((((param_1 != 0) && (0xf < param_2)) && (*(int *)(param_1 + 0xc) == 0x30)) &&
     ((uVar3 = (ulonglong)*(ushort *)(param_1 + 10), uVar3 + 0x30 <= param_2 &&
      (*(char *)(uVar3 + 0x23 + param_1) == '\b')))) {
    cVar1 = *(char *)(uVar3 + 0x22 + param_1);
    if (cVar1 == '\x02') {
      if (*(int *)(uVar3 + 0x24 + param_1) != 8) {
        return 0;
      }
    }
    else {
      if (cVar1 != '\x01') {
        return 0;
      }
      if (*(int *)(uVar3 + 0x24 + param_1) != 4) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_18000b8c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *_Memory;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_180006420((longlong *)(param_1 + 0x20));
  FUN_180006420((longlong *)(param_1 + 0x10));
  FUN_180005830((longlong *)(param_1 + 0xa8));
  FUN_180005830((longlong *)(param_1 + 0xa8));
  free(*(void **)(param_1 + 0xa8));
  plVar3 = *(longlong **)(param_1 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != (longlong *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  FUN_180006420((longlong *)(param_1 + 0x40));
  free(*(void **)(param_1 + 0x40));
  plVar3 = *(longlong **)(param_1 + 0x30);
  plVar4 = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar4 != plVar3) {
    do {
      plVar1 = (longlong *)*plVar4;
      free(plVar4);
      plVar3 = *(longlong **)(param_1 + 0x30);
      plVar4 = plVar1;
    } while (plVar1 != plVar3);
  }
  free(plVar3);
  FUN_180006420((longlong *)(param_1 + 0x20));
  free(*(void **)(param_1 + 0x20));
  FUN_180006420((longlong *)(param_1 + 0x10));
  free(*(void **)(param_1 + 0x10));
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      if ((undefined **)*plVar3 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
        plVar4 = plVar3 + 2;
        if ((plVar4 != (longlong *)0x0) &&
           (_Memory = (undefined8 *)*plVar4, _Memory != (undefined8 *)0x0)) {
          *_Memory = 0;
          FUN_180005830(_Memory + 0x21);
          free((void *)_Memory[0x21]);
          FUN_180006420(_Memory + 0x1f);
          free((void *)_Memory[0x1f]);
          FUN_1800016a0(_Memory + 1);
          free(_Memory);
          *plVar4 = 0;
        }
      }
      else {
        (**(code **)*plVar3)(plVar3);
      }
      FUN_180001240(plVar3);
    }
  }
  return;
}




void FUN_18000ba90(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong *plVar8;
  size_t sVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ushort uVar16;
  byte *pbVar17;
  void *_Memory;
  undefined1 *puVar18;
  uint uVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStackY_158 [32];
  undefined **local_118;
  undefined8 *local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b6;
  undefined8 local_ae;
  undefined1 local_a6;
  undefined7 uStack_a5;
  size_t local_96;
  ulonglong local_8e;
  undefined8 local_86;
  undefined8 *local_7e;
  longlong local_76;
  byte local_68;
  undefined7 uStack_67;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_f0 = 0xfffffffffffffffe;
  local_48 = DAT_180021010 ^ (ulonglong)auStackY_158;
  local_118 = (undefined **)((ulonglong)local_118 & 0xffffffff00000000);
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b6 = 0xffffffffffffffff;
  local_ae = 0;
  local_96 = 0;
  local_8e = 0xf;
  local_a6 = 0;
  local_86 = 0;
  local_7e = (undefined8 *)0x0;
  local_76 = 0;
  local_108 = param_2;
  local_7e = (undefined8 *)FUN_180006670(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  bVar1 = *(byte *)(*(longlong *)(param_2 + 8) + 0x5a);
  uVar22 = (ulonglong)bVar1;
  local_b8 = CONCAT11((char)param_1[0x17],bVar1);
  FUN_18000c2b0(uVar22,param_2,(longlong)&local_e8);
  local_118 = (undefined **)((ulonglong)local_118 & 0xffffffff00000000);
  bVar10 = FUN_18000c060(uVar22,param_2,&local_e8,(undefined4 *)&local_118);
  sVar9 = local_96;
  if (bVar10) {
    if (local_e8 < 1) {
      puVar18 = &local_a6;
      if (0xf < local_8e) {
        puVar18 = (undefined1 *)CONCAT71(uStack_a5,local_a6);
      }
      if (local_96 != 0) {
        for (pbVar13 = (byte *)memchr(puVar18,0x2e,local_96); pbVar13 != (byte *)0x0;
            pbVar13 = (byte *)memchr(pbVar13 + 1,0x2e,
                                     (size_t)(puVar18 + (sVar9 - (longlong)(pbVar13 + 1))))) {
          if (*pbVar13 == 0x2e) {
            uVar11 = 0;
          }
          else {
            uVar11 = -(uint)(*pbVar13 < 0x2e) | 1;
          }
          if (uVar11 == 0) {
            if ((longlong)pbVar13 - (longlong)puVar18 != -1) goto LAB_18000bbfb;
            break;
          }
        }
      }
    }
    else {
LAB_18000bbfb:
      lVar21 = *(longlong *)(param_2 + 8);
      lVar2 = *(longlong *)(lVar21 + 0x30);
      if (lVar2 != *(longlong *)(lVar21 + 0x38)) {
        plVar20 = (longlong *)(*(longlong *)(lVar21 + 0x38) - lVar2);
        uVar11 = (uint)local_118;
        if ((longlong *)((ulonglong)local_118 & 0xffffffff) < plVar20) {
          uVar15 = *(undefined8 *)(lVar21 + 0x70);
          uVar3 = *(undefined8 *)(lVar21 + 0x68);
          local_118 = refs::RefsNodeHeader::vftable;
          puVar14 = (undefined8 *)operator_new(0x30);
          puVar14 = FUN_1800139a0(puVar14,lVar2,(ulonglong)plVar20,uVar11,uVar3,uVar15);
          local_110 = puVar14;
          if (*(char *)(puVar14 + 1) != '\0') {
            FUN_1800144a0((char *)&local_100,puVar14 + 3);
            plVar8 = local_100;
            bVar10 = false;
            puVar6 = local_7e;
            for (plVar4 = (longlong *)*local_100; local_7e = puVar6, plVar4 != plVar8;
                plVar4 = (longlong *)*plVar4) {
              lVar21 = plVar4[3];
              if (*(char *)(lVar21 + 0x58) == '\0') {
                uVar22 = *(longlong *)(lVar21 + 0x20) - (longlong)*(ushort **)(lVar21 + 0x18);
                if (uVar22 < 4) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = **(ushort **)(lVar21 + 0x18);
                }
                if (uVar16 == 0x178) {
                  local_c0 = CONCAT17(2,(undefined7)local_c0);
                }
                else {
                  if (((uVar22 != 0x28) || (uVar16 < 0xb1)) || ((int)param_1[10] < 8)) {
                    if (((uVar22 == 0x10) && (uVar16 == 100)) && (2 < local_96)) {
                      local_58 = 0;
                      local_50 = (longlong *)0xf;
                      local_68 = 0;
                      puVar18 = &local_a6;
                      if (0xf < local_8e) {
                        puVar18 = (undefined1 *)CONCAT71(uStack_a5,local_a6);
                      }
                      FUN_180006170((longlong *)&local_68,puVar18,2);
                      bVar10 = true;
                      pbVar13 = (byte *)CONCAT71(uStack_67,local_68);
                      pbVar17 = &local_68;
                      if ((longlong *)0xf < local_50) {
                        pbVar17 = pbVar13;
                      }
                      if (local_58 != 2) goto LAB_18000bdbd;
                      bVar23 = *pbVar17 < 0x24;
                      if ((*pbVar17 == 0x24) && (bVar23 = pbVar17[1] < 0x49, pbVar17[1] == 0x49)) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = -(uint)bVar23 | 1;
                      }
                      if (uVar11 != 0) goto LAB_18000bdbd;
                      bVar23 = true;
                    }
                    else {
                      pbVar13 = (byte *)CONCAT71(uStack_67,local_68);
LAB_18000bdbd:
                      bVar23 = false;
                    }
                    plVar20 = local_50;
                    if ((bVar10) && (bVar10 = false, (longlong *)0xf < local_50)) {
                      pbVar17 = pbVar13;
                      if ((0xfff < (longlong)local_50 + 1U) &&
                         (pbVar17 = *(byte **)(pbVar13 + -8),
                         (byte *)0x1f < pbVar13 + (-8 - (longlong)pbVar17))) {
                    /* WARNING: Subroutine does not return */
                        _invalid_parameter_noinfo_noreturn();
                      }
                      free(pbVar17);
                    }
                    if (bVar23) {
                      plVar20 = &local_e8;
                      FUN_18000ea30(param_1,(longlong)(plVar4 + 2),plVar20,
                                    *(int *)(*(longlong *)(local_108 + 8) + 0x5c) +
                                    *(int *)(*(longlong *)(local_108 + 8) + 0x60));
                    }
                    else if ((uVar22 == 0x10) && (local_f8 == 1)) {
                      plVar20 = &local_e8;
                      FUN_18000e490(param_1,(longlong)(plVar4 + 2),plVar20,
                                    *(int *)(*(longlong *)(local_108 + 8) + 0x5c) +
                                    *(int *)(*(longlong *)(local_108 + 8) + 0x60));
                    }
                    goto LAB_18000be6e;
                  }
                  if (uVar16 == 0x108) {
                    local_c0 = CONCAT17(1,(undefined7)local_c0);
                  }
                  else {
                    local_c0._7_1_ = (undefined1)(local_c0 >> 0x38);
                    if (uVar16 == 0xf8) {
                      local_c0._7_1_ = 3;
                    }
                  }
                }
                plVar20 = &local_e8;
                FUN_18000c560(param_1,(longlong)(plVar4 + 2),(longlong)plVar20);
              }
              else {
                plVar20 = &local_e8;
                FUN_18000d470(param_1,(longlong)(plVar4 + 2),(longlong)plVar20);
              }
LAB_18000be6e:
              puVar14 = local_110;
              puVar6 = local_7e;
            }
            if (*(char *)(*(longlong *)(local_108 + 8) + 0x59) == '\0') {
              if (((param_1[0xb] != 0) && ((int)param_1[0xc] - 1U < 0x20)) && (local_76 != 0)) {
                lVar21 = local_e8;
                for (puVar5 = (undefined8 *)*puVar6; puVar5 != puVar6;
                    puVar5 = (undefined8 *)*puVar5) {
                  local_58 = puVar5[4];
                  uVar11 = *(uint *)(param_1 + 0xc);
                  lVar2 = puVar5[2];
                  uVar19 = (int)local_58 * uVar11;
                  if ((int)local_58 != 0) {
                    if ((longlong *)**(longlong **)*param_1 == (longlong *)0x0) {
                      iVar12 = 0x200;
                    }
                    else {
                      iVar12 = (**(code **)(*(longlong *)**(longlong **)*param_1 + 0x28))();
                    }
                    lVar21 = lVar21 - (ulonglong)(iVar12 * uVar19);
                    if (lVar21 < 0) break;
                    FUN_1800089f0((longlong *)param_1[0xb],(ulonglong)uVar11 * lVar2,plVar20,
                                  (ulonglong)uVar19);
                  }
                }
              }
            }
            else {
              local_c0 = local_c0 | 0x100000000;
            }
            uVar15 = FUN_18000e020(param_1,&local_e8);
            if ((char)uVar15 != '\0') {
              FUN_18000d970((longlong)param_1,&local_e8);
            }
            plVar20 = (longlong *)*local_100;
            *local_100 = (longlong)local_100;
            local_100[1] = (longlong)local_100;
            local_f8 = 0;
            if (plVar20 != local_100) {
              do {
                plVar4 = (longlong *)*plVar20;
                (**(code **)plVar20[2])(plVar20 + 2,0);
                free(plVar20);
                plVar20 = plVar4;
              } while (plVar4 != local_100);
            }
            free(local_100);
            (**(code **)*puVar14)(puVar14,1);
            puVar14 = (undefined8 *)*local_7e;
            *local_7e = local_7e;
            local_7e[1] = local_7e;
            local_76 = 0;
            if (puVar14 != local_7e) {
              do {
                puVar6 = (undefined8 *)*puVar14;
                free(puVar14);
                puVar14 = puVar6;
              } while (puVar6 != local_7e);
            }
            free(local_7e);
            if (0xf < local_8e) {
              pvVar7 = (void *)CONCAT71(uStack_a5,local_a6);
              _Memory = pvVar7;
              if ((0xfff < local_8e + 1) &&
                 (_Memory = *(void **)((longlong)pvVar7 + -8),
                 0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(_Memory);
            }
            goto LAB_18000c035;
          }
          (**(code **)*puVar14)(puVar14,1);
        }
      }
    }
  }
  FUN_180004600((longlong)&local_e8);
LAB_18000c035:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_158);
  return;
}




bool FUN_18000c060(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ushort uVar11;
  int iVar12;
  
  lVar9 = param_2;
  uVar5 = FUN_18000b820(param_2);
  iVar12 = (int)CONCAT62(extraout_var,uVar5);
  uVar5 = FUN_18000b840(lVar9);
  iVar6 = (int)CONCAT62(extraout_var_00,uVar5);
  if (iVar12 == 0x30) {
    if (iVar6 != 1) {
      return false;
    }
  }
  else {
    if (iVar12 != 0x40) {
      return false;
    }
    if (iVar6 != 0x8000) {
      return false;
    }
  }
  lVar9 = *(longlong *)(lVar9 + 8);
  puVar2 = *(uint **)(lVar9 + 0x30);
  uVar10 = *(longlong *)(lVar9 + 0x38) - (longlong)puVar2;
  uVar11 = 0;
  puVar7 = (undefined8 *)operator_new(0x20);
  *(undefined1 *)(puVar7 + 1) = 0;
  *puVar7 = refs::RefsMSTreeHeaderDescImpl::vftable;
  puVar7[2] = 0;
  puVar7[3] = 0;
  bVar4 = false;
  if ((0x27 < uVar10) && (*puVar2 < 0x1001)) {
    *(uint *)(puVar7 + 2) = *puVar2;
    *(uint *)(puVar7 + 3) = puVar2[6];
    uVar11 = (ushort)puVar2[1];
    *(uint *)((longlong)puVar7 + 0x14) = (uint)uVar11;
    *(uint *)((longlong)puVar7 + 0x1c) = puVar2[8];
    bVar4 = false;
    if (uVar11 < uVar10) {
      *(undefined1 *)(puVar7 + 1) = 1;
      bVar4 = true;
    }
  }
  if (bVar4) {
    if ((ulonglong)uVar11 < (ulonglong)(*(longlong *)(lVar9 + 0x38) - *(longlong *)(lVar9 + 0x30)))
    {
      puVar1 = (undefined8 *)((ulonglong)uVar11 + *(longlong *)(lVar9 + 0x30));
      puVar8 = (undefined8 *)operator_new(0x40);
      *(undefined1 *)(puVar8 + 1) = 0;
      *puVar8 = refs::RefsFileValuesImpl::vftable;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      *(undefined4 *)(puVar8 + 7) = 0;
      if (puVar1 != (undefined8 *)0x0) {
        uVar3 = *puVar1;
        puVar8[2] = uVar3;
        puVar8[3] = puVar1[1];
        puVar8[4] = puVar1[3];
        puVar8[5] = puVar1[6];
        *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar1 + 4);
        *(undefined1 *)(puVar8 + 1) = 1;
        param_3[1] = uVar3;
        param_3[2] = puVar8[3];
        param_3[3] = puVar8[4];
        *param_3 = puVar8[5];
        *(undefined8 *)((longlong)param_3 + 0x3a) =
             *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x68);
        lVar9 = DAT_180021038 + 1;
        param_3[4] = DAT_180021038;
        DAT_180021038 = lVar9;
        *(undefined4 *)(param_3 + 5) = *(undefined4 *)(puVar8 + 7);
        *param_4 = *(undefined4 *)(puVar7 + 2);
        (**(code **)*puVar8)(puVar8,1);
      }
      else {
        FUN_180014e20(puVar8,1);
      }
      (**(code **)*puVar7)(puVar7,1);
      return puVar1 != (undefined8 *)0x0;
    }
  }
  FUN_180014bf0(puVar7,1);
  return false;
}




void FUN_18000c2b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  int cbMultiByte;
  undefined6 extraout_var;
  LPSTR lpMultiByteStr;
  ulonglong uVar5;
  void *pvVar6;
  void *pvVar7;
  WCHAR *lpWideCharStr;
  size_t sVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auStackY_d8 [32];
  WCHAR local_88;
  undefined6 uStack_86;
  longlong local_78;
  ulonglong uStack_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180021010 ^ (ulonglong)auStackY_d8;
  uVar3 = FUN_18000b820(param_2);
  if ((int)CONCAT62(extraout_var,uVar3) == 0x30) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x18);
    iVar4 = (int)((*(longlong *)(*(longlong *)(param_2 + 8) + 0x20) - lVar2) - 4U >> 1);
    if (0 < iVar4) {
      local_78 = 0;
      uStack_70 = 7;
      local_88 = L'\0';
      FUN_180005fe0((longlong *)&local_88,(void *)(lVar2 + 4),(longlong)iVar4);
      uVar9 = 0;
      uVar10 = 0xf;
      local_58 = 0;
      uStack_50 = 0xf;
      local_68 = 0;
      lpWideCharStr = &local_88;
      if (((uStack_70 < 8) ||
          (lpWideCharStr = (WCHAR *)CONCAT62(uStack_86,local_88), lpWideCharStr != (LPCWSTR)0x0)) &&
         (local_78 != 0)) {
        iVar4 = (int)local_78;
        cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,(int)local_78,(LPSTR)0x0,0,
                                          (LPCSTR)0x0,(LPBOOL)0x0);
        if (0 < cbMultiByte) {
          lpMultiByteStr = (LPSTR)operator_new((longlong)(cbMultiByte + 1));
          memset(lpMultiByteStr,0,(longlong)(cbMultiByte + 1));
          WideCharToMultiByte(0xfde9,0,lpWideCharStr,iVar4,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                              (LPBOOL)0x0);
          if (lpMultiByteStr != (LPSTR)0x0) {
            sVar8 = 0xffffffffffffffff;
            do {
              sVar8 = sVar8 + 1;
            } while (lpMultiByteStr[sVar8] != '\0');
            FUN_180006170((longlong *)&local_68,lpMultiByteStr,sVar8);
            free(lpMultiByteStr);
            uVar9 = local_58;
            uVar10 = uStack_50;
          }
        }
      }
      plVar1 = (longlong *)(param_3 + 0x42);
      uVar5 = uStack_50;
      if (plVar1 != (longlong *)&local_68) {
        if (0xf < *(ulonglong *)(param_3 + 0x5a)) {
          pvVar7 = (void *)*plVar1;
          pvVar6 = pvVar7;
          if ((0xfff < *(ulonglong *)(param_3 + 0x5a) + 1) &&
             (pvVar6 = *(void **)((longlong)pvVar7 + -8),
             0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar6);
        }
        *plVar1 = CONCAT71(uStack_67,local_68);
        *(undefined8 *)(param_3 + 0x4a) = uStack_60;
        *(undefined8 *)(param_3 + 0x52) = uVar9;
        *(ulonglong *)(param_3 + 0x5a) = uVar10;
        local_68 = 0;
        uVar5 = 0xf;
      }
      if (0xf < uVar5) {
        pvVar6 = (void *)CONCAT71(uStack_67,local_68);
        pvVar7 = pvVar6;
        if ((0xfff < uVar5 + 1) &&
           (pvVar7 = *(void **)((longlong)pvVar6 + -8),
           0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar7);
      }
      if (7 < uStack_70) {
        pvVar6 = (void *)CONCAT62(uStack_86,local_88);
        pvVar7 = pvVar6;
        if ((0xfff < uStack_70 * 2 + 2) &&
           (pvVar7 = *(void **)((longlong)pvVar6 + -8),
           0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar7);
      }
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_d8);
  return;
}




undefined1 FUN_18000c560(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined **local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined8 local_38;
  
  uVar3 = 0;
  if ((int)param_1[10] < 8) {
    uVar4 = FUN_18000b820(param_2);
    if ((int)CONCAT62(extraout_var,uVar4) != 0x178) {
      return 0;
    }
    lVar9 = *(longlong *)(param_2 + 8);
  }
  else {
    lVar9 = *(longlong *)(param_2 + 8);
    if (*(longlong *)(lVar9 + 0x20) - *(longlong *)(lVar9 + 0x18) != 0x28) {
      return 0;
    }
    uVar4 = FUN_18000b820(param_2);
    if ((uint)CONCAT62(extraout_var_00,uVar4) < 0x29) {
      return 0;
    }
  }
  puVar1 = *(uint **)(lVar9 + 0x30);
  if (puVar1 != *(uint **)(lVar9 + 0x38)) {
    uVar12 = (longlong)*(uint **)(lVar9 + 0x38) - (longlong)puVar1;
    uVar11 = (ulonglong)*puVar1;
    if (uVar11 < uVar12) {
      FUN_180014380(&local_40,(longlong)puVar1,uVar11,uVar12);
      plVar2 = local_40;
      for (plVar8 = (longlong *)*local_40; plVar8 != plVar2; plVar8 = (longlong *)*plVar8) {
        puVar10 = (ulonglong *)(*(uint *)(plVar8 + 2) + uVar11 + (longlong)puVar1);
        if ((*(byte *)((longlong)puVar10 + 10) & 0x18) == 0x18) {
          uVar7 = FUN_18000c790(param_1,puVar10,param_3);
          uVar3 = (undefined1)uVar7;
        }
        else {
          local_50 = refs::RefsNodeRecord::vftable;
          puVar5 = (undefined8 *)operator_new(0x78);
          puVar5 = FUN_18000b210(puVar5,(uint *)puVar10,uVar12);
          local_48 = puVar5;
          if (*(char *)(puVar5 + 0xb) == '\0') {
            uVar3 = 1;
            (**(code **)*puVar5)(puVar5,1);
            local_48 = (undefined8 *)0x0;
            local_50 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
          }
          else {
            uVar6 = FUN_18000cf30(param_1,(longlong)&local_50,param_3);
            uVar3 = (undefined1)uVar6;
            (**(code **)*puVar5)(puVar5,1);
            local_48 = (undefined8 *)0x0;
            local_50 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
          }
        }
      }
      plVar8 = (longlong *)*local_40;
      *local_40 = (longlong)local_40;
      local_40[1] = (longlong)local_40;
      local_38 = 0;
      if (plVar8 != local_40) {
        do {
          plVar2 = (longlong *)*plVar8;
          free(plVar8);
          plVar8 = plVar2;
        } while (plVar2 != local_40);
      }
      free(local_40);
    }
  }
  return uVar3;
}




undefined8 FUN_18000c790(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong local_38;
  ushort local_30;
  undefined2 local_2e;
  uint local_2c;
  int local_28;
  longlong *plVar11;
  
  plVar11 = (longlong *)*param_1;
  if (plVar11 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = (ushort)param_2[1];
  local_38 = 0;
  if ((uVar1 & 0x40) == 0) {
    return 0;
  }
  if (*(short *)((longlong)param_2 + 10) != 0x18) {
    return 0;
  }
  iVar2 = *(int *)((longlong)param_2 + 0x14);
  uVar3 = *(uint *)((longlong)param_2 + 0xc);
  uVar8 = *param_2;
  local_2e = 0x18;
  local_30 = uVar1;
  local_2c = uVar3;
  local_28 = iVar2;
  if ((uVar1 & 0x20) == 0) {
    uVar8 = FUN_180011e90(plVar11,uVar8);
  }
  if (uVar8 == 0) {
    return 0;
  }
  local_38 = uVar8;
  if (*(longlong *)(param_3 + 0x72) == 0) {
    puVar5 = *(undefined8 **)(param_3 + 0x6a);
    puVar6 = (undefined8 *)puVar5[1];
    uVar9 = FUN_18000fad0(plVar11,puVar5,puVar6,&local_38);
    if (*(longlong *)(param_3 + 0x72) == 0x666666666666665) {
LAB_18000c8d4:
      std::_Xlength_error("list<T> too long");
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return uVar9;
    }
    *(longlong *)(param_3 + 0x72) = *(longlong *)(param_3 + 0x72) + 1;
    puVar5[1] = uVar9;
    *puVar6 = uVar9;
  }
  else {
    puVar5 = *(undefined8 **)(param_3 + 0x6a);
    puVar6 = (undefined8 *)puVar5[1];
    if ((*(ushort *)(puVar6 + 3) == uVar1) && (*(short *)((longlong)puVar6 + 0x1a) == 0x18)) {
      uVar4 = *(uint *)(puVar6 + 4);
      uVar10 = *(int *)((longlong)puVar6 + 0x1c) + uVar4;
      plVar11 = (longlong *)(ulonglong)uVar10;
      if ((uVar10 == uVar3) && ((ulonglong)uVar4 + puVar6[2] == uVar8)) {
        *(uint *)(puVar6 + 4) = uVar4 + iVar2;
        return 1;
      }
    }
    uVar9 = FUN_18000fad0(plVar11,puVar5,puVar6,&local_38);
    if (*(longlong *)(param_3 + 0x72) == 0x666666666666665) goto LAB_18000c8d4;
    *(longlong *)(param_3 + 0x72) = *(longlong *)(param_3 + 0x72) + 1;
    puVar5[1] = uVar9;
    *puVar6 = uVar9;
  }
  return 1;
}




void FUN_18000c920(longlong param_1,longlong param_2)

{
  void *pvVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  void *_Memory;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined **local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_86;
  undefined8 local_7e;
  undefined1 local_76;
  undefined7 uStack_75;
  longlong local_66;
  ulonglong local_5e;
  undefined8 local_56;
  undefined8 *local_4e;
  undefined8 local_46;
  ulonglong local_38;
  
  local_c0 = 0xfffffffffffffffe;
  local_38 = DAT_180021010 ^ (ulonglong)auStack_f8;
  puVar6 = (undefined8 *)0x0;
  local_b8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_86 = 0xffffffffffffffff;
  local_7e = 0;
  local_66 = 0;
  local_5e = 0xf;
  local_76 = 0;
  local_56 = 0;
  local_4e = (undefined8 *)0x0;
  local_46 = 0;
  lVar8 = param_1;
  local_4e = (undefined8 *)FUN_180006670(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  FUN_18000c2b0(lVar8,param_2,(longlong)&local_b8);
  local_88 = CONCAT11(*(undefined1 *)(param_1 + 0xb8),(undefined1)local_88);
  if ((local_66 != 0) &&
     ((uVar4 = FUN_18000b820(param_2), (int)CONCAT62(extraout_var,uVar4) == 0x30 ||
      (uVar4 = FUN_18000b840(param_2), (int)CONCAT62(extraout_var_00,uVar4) == 2)))) {
    lVar8 = *(longlong *)(param_2 + 8);
    lVar14 = *(longlong *)(lVar8 + 0x38) - *(longlong *)(lVar8 + 0x30);
    puVar15 = puVar6;
    if (lVar14 != 0) {
      puVar15 = *(undefined8 **)(lVar8 + 0x30);
    }
    local_c8 = (undefined8 *)0x0;
    local_d0 = refs::RefsDirectoryValues::vftable;
    puVar5 = (undefined8 *)operator_new(0x48);
    uVar3 = local_90;
    *(undefined1 *)(puVar5 + 1) = 0;
    *puVar5 = refs::RefsDirectoryValuesImpl::vftable;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    uVar7 = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    puVar5[8] = 0;
    bVar2 = false;
    puVar9 = puVar6;
    puVar10 = puVar6;
    puVar11 = puVar6;
    puVar12 = puVar6;
    puVar13 = puVar6;
    if ((puVar15 != (undefined8 *)0x0) && (0x47 < (uint)lVar14)) {
      puVar9 = (undefined8 *)*puVar15;
      puVar5[2] = puVar9;
      puVar13 = (undefined8 *)puVar15[1];
      puVar5[3] = puVar13;
      uVar7 = *(uint *)(puVar15 + 8);
      *(uint *)(puVar5 + 7) = uVar7;
      puVar6 = (undefined8 *)puVar15[2];
      puVar5[4] = puVar6;
      puVar11 = (undefined8 *)puVar15[3];
      puVar5[5] = puVar11;
      puVar12 = (undefined8 *)puVar15[5];
      puVar5[6] = puVar12;
      puVar10 = (undefined8 *)puVar15[7];
      puVar5[8] = puVar10;
      *(undefined1 *)(puVar5 + 1) = 1;
      bVar2 = true;
    }
    local_d8 = puVar5;
    local_c8 = puVar5;
    if (bVar2) {
      local_7e = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x68);
      if (puVar9 == (undefined8 *)0x0) {
        uVar7 = uVar7 | 0x10;
        puVar10 = local_b8;
      }
      local_b8 = puVar10;
      local_90 = CONCAT44(local_90._4_4_,uVar7);
      if (*(char *)(*(longlong *)(param_2 + 8) + 0x59) != '\0') {
        local_90._6_2_ = SUB82(uVar3,6);
        local_90._0_6_ = CONCAT24(1,uVar7);
      }
      local_b0 = puVar6;
      local_a8 = puVar11;
      local_a0 = puVar12;
      local_98 = puVar13;
      FUN_18000d970(param_1,&local_b8);
      (**(code **)*puVar5)(puVar5,1);
      puVar15 = local_4e;
      puVar6 = (undefined8 *)*local_4e;
      *local_4e = local_4e;
      local_4e[1] = local_4e;
      while (puVar6 != puVar15) {
        puVar9 = (undefined8 *)*puVar6;
        free(puVar6);
        puVar6 = puVar9;
      }
      free(puVar15);
      if (0xf < local_5e) {
        pvVar1 = (void *)CONCAT71(uStack_75,local_76);
        _Memory = pvVar1;
        if ((0xfff < local_5e + 1) &&
           (_Memory = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      goto LAB_18000cba0;
    }
    FUN_180014df0(puVar5,1);
  }
  FUN_180004600((longlong)&local_b8);
LAB_18000cba0:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_f8);
  return;
}




void FUN_18000cbd0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined6 extraout_var;
  ulonglong uVar9;
  ushort *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  ushort ****ppppuVar14;
  ushort ****ppppuVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined6 uStack_a6;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ushort ***local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_b0 = 0xfffffffffffffffe;
  local_28 = DAT_180021010 ^ (ulonglong)auStack_d8;
  lVar13 = param_2;
  uVar7 = FUN_18000b820(param_2);
  if ((int)CONCAT62(extraout_var,uVar7) == 0x10) {
    lVar4 = *(longlong *)(*(longlong *)(lVar13 + 8) + 0x30);
    lVar13 = *(longlong *)(*(longlong *)(lVar13 + 8) + 0x38) - lVar4;
    if ((lVar13 != 0) && (lVar4 != 0)) {
      local_38 = 0;
      uStack_30 = 7;
      local_48 = (ushort ***)((ulonglong)local_48 & 0xffffffffffff0000);
      uVar12 = (uint)lVar13;
      uVar9 = 0;
      if (uVar12 != 0) {
        do {
          uVar3 = *(uint *)(uVar9 + lVar4);
          uVar8 = (int)uVar9 + uVar3;
          if ((uVar12 <= uVar8) || (uVar3 == 0)) {
LAB_18000cddb:
            uVar9 = 7;
            ppppuVar14 = (ushort ****)local_48;
            goto LAB_18000ce4b;
          }
          if ((uVar3 == 0xa8) && (*(short *)(uVar9 + 4 + lVar4) == 0x28)) {
            if (uVar12 < 0x40) goto LAB_18000cddb;
            puVar1 = (undefined8 *)(uVar9 + 0x18 + lVar4);
            local_88 = *puVar1;
            uStack_80 = puVar1[1];
            puVar1 = (undefined8 *)(uVar9 + 0x28 + lVar4);
            local_78 = *puVar1;
            uStack_70 = puVar1[1];
            puVar1 = (undefined8 *)(uVar9 + 0x38 + lVar4);
            local_68 = *puVar1;
            uStack_60 = puVar1[1];
            puVar1 = (undefined8 *)(uVar9 + 0x48 + lVar4);
            local_58 = *puVar1;
            uStack_50 = puVar1[1];
          }
          else if ((*(short *)(uVar9 + 4 + lVar4) == 0x10) &&
                  (*(short *)(uVar9 + 10 + lVar4) == 0x18)) {
            uVar8 = *(uint *)(uVar9 + 0xc + lVar4);
            if ((uVar8 + 0x18 <= uVar12) && ((0x30 < uVar3 && (0x18 < uVar8)))) {
              local_98 = 0;
              uStack_90 = 7;
              local_a8 = 0;
              FUN_180005fe0((longlong *)&local_a8,(void *)(lVar4 + 0x30 + uVar9),
                            (ulonglong)(uVar8 - 0x18 >> 1));
              FUN_180005c60((longlong *)&local_48);
              local_48 = (ushort ***)CONCAT62(uStack_a6,local_a8);
              uStack_40 = uStack_a0;
              local_38 = local_98;
              uStack_30 = uStack_90;
            }
            break;
          }
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < uVar12);
      }
      uVar9 = uStack_30;
      ppppuVar14 = (ushort ****)local_48;
      ppppuVar15 = &local_48;
      if (7 < uStack_30) {
        ppppuVar15 = (ushort ****)local_48;
      }
      if (local_38 == 1) {
        lVar13 = 1;
        puVar10 = (ushort *)&DAT_1800199a8;
        uVar2 = *(ushort *)ppppuVar15;
        if (0x2d < uVar2) {
          bVar16 = uVar2 < 0x2e;
          bVar17 = uVar2 == 0x2e;
          while (bVar16 || bVar17) {
            if (lVar13 == 1) {
              if (*(longlong *)(*(longlong *)(param_2 + 8) + 0x68) == 0) {
                local_b8 = 0;
                puVar1 = *(undefined8 **)(param_1 + 0x30);
                puVar5 = (undefined8 *)puVar1[1];
                uVar11 = FUN_180007510((ulonglong)uVar2,puVar1,puVar5,&local_b8);
                if (*(longlong *)(param_1 + 0x38) == 0xaaaaaaaaaaaaaa9) {
                  std::_Xlength_error("list<T> too long");
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
                puVar1[1] = uVar11;
                *puVar5 = uVar11;
              }
              break;
            }
            lVar13 = lVar13 + -1;
            puVar10 = puVar10 + 1;
            uVar2 = *(ushort *)((longlong)puVar10 + (longlong)(ppppuVar15 + -0x30003335));
            bVar16 = uVar2 < *puVar10;
            bVar17 = uVar2 == *puVar10;
            if (bVar16) break;
          }
        }
      }
LAB_18000ce4b:
      if (7 < uVar9) {
        ppppuVar15 = ppppuVar14;
        if ((0xfff < uVar9 * 2 + 2) &&
           (ppppuVar15 = (ushort ****)ppppuVar14[-1],
           0x1f < (ulonglong)((longlong)ppppuVar14 + (-8 - (longlong)ppppuVar15)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(ppppuVar15);
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_d8);
  return;
}




void FUN_18000cec0(longlong param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (7 < *(ulonglong *)(param_1 + 0x58)) {
    pvVar1 = *(void **)(param_1 + 0x40);
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x58) * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(param_1 + 0x58) = 7;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  return;
}




ulonglong FUN_18000cf30(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined **ppuVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 *in_RAX;
  undefined8 uVar8;
  undefined8 *extraout_RAX;
  undefined8 *puVar9;
  undefined8 *extraout_RAX_00;
  undefined8 *extraout_RAX_01;
  undefined8 *extraout_RAX_02;
  uint uVar10;
  undefined **_Memory;
  longlong *plVar11;
  int *piVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint local_res8;
  longlong *local_70;
  longlong local_68;
  undefined **local_60;
  undefined8 *local_58;
  int *local_50;
  longlong lStack_48;
  longlong local_40;
  
  puVar9 = (undefined8 *)*param_1;
  if (puVar9 != (undefined8 *)0x0) {
    local_50 = (int *)0x0;
    lStack_48 = 0;
    local_40 = 0;
    FUN_180005c00((char *)&local_60,(undefined8 *)(*(longlong *)(param_2 + 8) + 0x48));
    uVar8 = FUN_180011b50((longlong *)*puVar9,(longlong *)&local_50,&local_60);
    _Memory = (undefined **)*local_60;
    *local_60 = (undefined *)local_60;
    local_60[1] = (undefined *)local_60;
    local_58 = (undefined8 *)0x0;
    if (_Memory != local_60) {
      do {
        ppuVar5 = (undefined **)*_Memory;
        free(_Memory);
        _Memory = ppuVar5;
      } while (ppuVar5 != local_60);
    }
    free(local_60);
    piVar12 = local_50;
    in_RAX = extraout_RAX;
    if ((char)uVar8 == '\0') {
      if (local_50 == (int *)0x0) goto LAB_18000d454;
      if ((0xfff < (ulonglong)(local_40 - (longlong)local_50)) &&
         (piVar12 = *(int **)(local_50 + -2),
         0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)*(int **)(local_50 + -2))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      uVar15 = lStack_48 - (longlong)local_50;
      local_res8 = 0xffffffff;
      if (local_50 != (int *)0x0) {
        local_58 = (undefined8 *)0x0;
        local_60 = refs::RefsMetadataBlockHeader::vftable;
        puVar9 = (undefined8 *)operator_new(0x40);
        in_RAX = FUN_18000fc80(puVar9,piVar12,uVar15 & 0xffffffff,3);
        if (*(char *)(in_RAX + 1) != '\0') {
          uVar3 = *(uint *)(in_RAX + 4);
          uVar14 = (ulonglong)uVar3;
          uVar16 = (uVar15 & 0xffffffff) - uVar14;
          puVar9 = (undefined8 *)operator_new(0x20);
          *(undefined1 *)(puVar9 + 1) = 0;
          *puVar9 = refs::RefsMSTreeHeaderDescImpl::vftable;
          puVar9[2] = 0;
          puVar9[3] = 0;
          bVar7 = false;
          uVar10 = 0;
          if ((0x27 < uVar16) && (uVar4 = *(uint *)(uVar14 + (longlong)piVar12), uVar4 < 0x1001)) {
            *(uint *)(puVar9 + 2) = uVar4;
            *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(uVar14 + 0x18 + (longlong)piVar12);
            uVar2 = *(ushort *)(uVar14 + 4 + (longlong)piVar12);
            *(uint *)((longlong)puVar9 + 0x14) = (uint)uVar2;
            *(undefined4 *)((longlong)puVar9 + 0x1c) =
                 *(undefined4 *)(uVar14 + 0x20 + (longlong)piVar12);
            uVar10 = uVar4;
            if (uVar2 < uVar16) {
              *(undefined1 *)(puVar9 + 1) = 1;
              bVar7 = true;
            }
          }
          if (((bVar7) && (uVar10 = uVar10 + uVar3, (ulonglong)uVar10 < (uVar15 & 0xffffffff))) &&
             (uVar3 < uVar10)) {
            in_RAX = FUN_180014bf0(puVar9,1);
            local_res8 = uVar10;
          }
          else {
            in_RAX = FUN_180014bf0(puVar9,1);
          }
        }
      }
      if (local_res8 < (uint)uVar15) {
        FUN_180014380(&local_70,(longlong)piVar12,(ulonglong)local_res8,uVar15 & 0xffffffff);
        plVar11 = local_70;
        if (local_68 == 0) {
          plVar11 = (longlong *)*local_70;
          *local_70 = (longlong)local_70;
          local_70[1] = (longlong)local_70;
          local_68 = 0;
          if (plVar11 != local_70) {
            do {
              plVar6 = (longlong *)*plVar11;
              free(plVar11);
              plVar11 = plVar6;
            } while (plVar6 != local_70);
          }
          free(local_70);
          in_RAX = extraout_RAX_00;
          if (local_50 == (int *)0x0) goto LAB_18000d454;
          piVar12 = local_50;
          if ((0xfff < (ulonglong)(local_40 - (longlong)local_50)) &&
             (piVar12 = *(int **)(local_50 + -2),
             0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)*(int **)(local_50 + -2))))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        else {
          for (plVar6 = (longlong *)*local_70; plVar6 != plVar11; plVar6 = (longlong *)*plVar6) {
            uVar14 = (ulonglong)(((uint)uVar15 - local_res8) - *(uint *)(plVar6 + 2));
            puVar13 = (ulonglong *)
                      ((longlong)piVar12 + (ulonglong)*(uint *)(plVar6 + 2) + (ulonglong)local_res8)
            ;
            if ((((puVar13 == (ulonglong *)0x0) || (uVar14 < 0x10)) ||
                ((*(int *)((longlong)puVar13 + 0xc) != 0x30 ||
                 ((uVar16 = (ulonglong)*(ushort *)((longlong)puVar13 + 10), uVar14 < uVar16 + 0x30
                  || (*(char *)(uVar16 + 0x23 + (longlong)puVar13) != '\b')))))) ||
               (((cVar1 = *(char *)(uVar16 + 0x22 + (longlong)puVar13), cVar1 != '\x02' ||
                 (*(int *)(uVar16 + 0x24 + (longlong)puVar13) != 8)) &&
                ((cVar1 != '\x01' || (*(int *)(uVar16 + 0x24 + (longlong)puVar13) != 4)))))) {
              if ((*(short *)((longlong)puVar13 + 10) == 0x18) &&
                 ((*(int *)((longlong)puVar13 + 0x14) != 0 && ((puVar13[1] & 0x40) != 0)))) {
                FUN_18000c790(param_1,puVar13,param_3);
              }
            }
            else {
              local_58 = (undefined8 *)0x0;
              local_60 = refs::RefsNodeRecord::vftable;
              puVar9 = (undefined8 *)operator_new(0x78);
              local_58 = FUN_18000b210(puVar9,(uint *)puVar13,uVar14);
              if (*(char *)(local_58 + 1) == '\0') {
                local_60 = refs::RefsNodeRecord::vftable;
                (**(code **)*local_58)(local_58,1);
                local_58 = (undefined8 *)0x0;
                local_60 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
              }
              else {
                FUN_18000cf30(param_1,(longlong)&local_60,param_3);
                local_60 = refs::RefsNodeRecord::vftable;
                if (local_58 != (undefined8 *)0x0) {
                  (**(code **)*local_58)(local_58,1);
                  local_58 = (undefined8 *)0x0;
                }
                local_60 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
              }
            }
          }
          plVar11 = (longlong *)*local_70;
          *local_70 = (longlong)local_70;
          local_70[1] = (longlong)local_70;
          local_68 = 0;
          if (plVar11 != local_70) {
            do {
              plVar6 = (longlong *)*plVar11;
              free(plVar11);
              plVar11 = plVar6;
            } while (plVar6 != local_70);
          }
          free(local_70);
          in_RAX = extraout_RAX_01;
          if (local_50 == (int *)0x0) goto LAB_18000d454;
          piVar12 = local_50;
          if ((0xfff < (ulonglong)(local_40 - (longlong)local_50)) &&
             (piVar12 = *(int **)(local_50 + -2),
             0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)piVar12)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
      }
      else {
        if (local_50 == (int *)0x0) goto LAB_18000d454;
        piVar12 = local_50;
        if ((0xfff < (ulonglong)(local_40 - (longlong)local_50)) &&
           (piVar12 = *(int **)(local_50 + -2),
           0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)*(int **)(local_50 + -2))))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    free(piVar12);
    in_RAX = extraout_RAX_02;
  }
LAB_18000d454:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}




undefined8 FUN_18000d470(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 *extraout_RAX;
  undefined8 uVar2;
  undefined1 *extraout_RAX_00;
  undefined1 *extraout_RAX_01;
  undefined1 *extraout_RAX_02;
  longlong *plVar3;
  int *_Memory;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  int *local_30;
  longlong local_28;
  longlong local_20;
  
  if (*param_1 != 0) {
    local_30 = (int *)0x0;
    local_28 = 0;
    local_20 = 0;
    FUN_180005c00((char *)&local_50,(undefined8 *)(*(longlong *)(param_2 + 8) + 0x48));
    if (local_48 == 0) {
      plVar3 = (longlong *)*local_50;
      *local_50 = (longlong)local_50;
      local_50[1] = (longlong)local_50;
      local_48 = 0;
      if (plVar3 != local_50) {
        do {
          plVar1 = (longlong *)*plVar3;
          free(plVar3);
          plVar3 = plVar1;
        } while (plVar1 != local_50);
      }
      free(local_50);
      register0x00000020 = (BADSPACEBASE *)extraout_RAX;
      if (local_30 == (int *)0x0) goto LAB_18000d745;
      _Memory = local_30;
      if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
         (_Memory = *(int **)(local_30 + -2),
         0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)*(int **)(local_30 + -2))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      uVar2 = FUN_180011b50(*(longlong **)*param_1,(longlong *)&local_30,&local_50);
      if ((char)uVar2 == '\0') {
        plVar3 = (longlong *)*local_50;
        *local_50 = (longlong)local_50;
        local_50[1] = (longlong)local_50;
        local_48 = 0;
        if (plVar3 != local_50) {
          do {
            plVar1 = (longlong *)*plVar3;
            free(plVar3);
            plVar3 = plVar1;
          } while (plVar1 != local_50);
        }
        free(local_50);
        register0x00000020 = (BADSPACEBASE *)extraout_RAX_00;
        if (local_30 == (int *)0x0) goto LAB_18000d745;
        _Memory = local_30;
        if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
           (_Memory = *(int **)(local_30 + -2),
           0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)*(int **)(local_30 + -2))))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      else {
        FUN_18000ae70((char *)&local_40,local_30,local_28 - (longlong)local_30,
                      *(undefined8 *)(*local_50 + 0x10));
        plVar1 = local_40;
        for (plVar3 = (longlong *)*local_40; plVar3 != plVar1; plVar3 = (longlong *)*plVar3) {
          if (*(char *)(plVar3[3] + 0x58) == '\0') {
            FUN_18000d770(param_1,(longlong)(plVar3 + 2),param_3);
          }
          else {
            FUN_18000d470(param_1,(longlong)(plVar3 + 2),param_3);
          }
        }
        plVar3 = (longlong *)*local_40;
        *local_40 = (longlong)local_40;
        local_40[1] = (longlong)local_40;
        local_38 = 0;
        if (plVar3 != local_40) {
          do {
            plVar1 = (longlong *)*plVar3;
            (**(code **)plVar3[2])(plVar3 + 2,0);
            free(plVar3);
            plVar3 = plVar1;
          } while (plVar1 != local_40);
        }
        free(local_40);
        plVar3 = (longlong *)*local_50;
        *local_50 = (longlong)local_50;
        local_50[1] = (longlong)local_50;
        local_48 = 0;
        if (plVar3 != local_50) {
          do {
            plVar1 = (longlong *)*plVar3;
            free(plVar3);
            plVar3 = plVar1;
          } while (plVar1 != local_50);
        }
        free(local_50);
        register0x00000020 = (BADSPACEBASE *)extraout_RAX_01;
        if (local_30 == (int *)0x0) goto LAB_18000d745;
        _Memory = local_30;
        if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
           (_Memory = *(int **)(local_30 + -2),
           0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    free(_Memory);
    register0x00000020 = (BADSPACEBASE *)extraout_RAX_02;
  }
LAB_18000d745:
  return CONCAT71((int7)((ulonglong)register0x00000020 >> 8),1);
}




undefined8 FUN_18000d770(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  undefined2 uVar3;
  undefined6 extraout_var;
  longlong lVar4;
  undefined6 extraout_var_00;
  undefined8 *puVar5;
  longlong extraout_RAX;
  longlong *plVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined **local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined8 local_38;
  
  if ((int)param_1[10] < 8) {
    uVar3 = FUN_18000b820(param_2);
    lVar4 = CONCAT62(extraout_var,uVar3);
    if ((int)lVar4 != 0x178) goto LAB_18000d947;
    lVar7 = *(longlong *)(param_2 + 8);
  }
  else {
    lVar7 = *(longlong *)(param_2 + 8);
    lVar4 = *(longlong *)(lVar7 + 0x20) - *(longlong *)(lVar7 + 0x18);
    if (lVar4 != 0x28) goto LAB_18000d947;
    uVar3 = FUN_18000b820(param_2);
    lVar4 = CONCAT62(extraout_var_00,uVar3);
    if ((uint)lVar4 < 0x29) goto LAB_18000d947;
  }
  puVar1 = *(uint **)(lVar7 + 0x30);
  if (puVar1 != *(uint **)(lVar7 + 0x38)) {
    uVar10 = (longlong)*(uint **)(lVar7 + 0x38) - (longlong)puVar1;
    uVar9 = (ulonglong)*puVar1;
    if (uVar9 < uVar10) {
      FUN_180014380(&local_40,(longlong)puVar1,uVar9,uVar10);
      plVar2 = local_40;
      for (plVar6 = (longlong *)*local_40; plVar6 != plVar2; plVar6 = (longlong *)*plVar6) {
        puVar8 = (ulonglong *)(*(uint *)(plVar6 + 2) + uVar9 + (longlong)puVar1);
        if ((*(byte *)((longlong)puVar8 + 10) & 0x18) == 0x18) {
          FUN_18000c790(param_1,puVar8,param_3);
        }
        else {
          local_50 = refs::RefsNodeRecord::vftable;
          puVar5 = (undefined8 *)operator_new(0x78);
          puVar5 = FUN_18000b210(puVar5,(uint *)puVar8,uVar10);
          local_48 = puVar5;
          if (*(char *)(puVar5 + 0xb) == '\0') {
            (**(code **)*puVar5)(puVar5,1);
            local_48 = (undefined8 *)0x0;
            local_50 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
          }
          else {
            FUN_18000cf30(param_1,(longlong)&local_50,param_3);
            (**(code **)*puVar5)(puVar5,1);
            local_48 = (undefined8 *)0x0;
            local_50 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
          }
        }
      }
      plVar6 = (longlong *)*local_40;
      *local_40 = (longlong)local_40;
      local_40[1] = (longlong)local_40;
      local_38 = 0;
      if (plVar6 != local_40) {
        do {
          plVar2 = (longlong *)*plVar6;
          free(plVar6);
          plVar6 = plVar2;
        } while (plVar2 != local_40);
      }
      free(local_40);
      lVar4 = extraout_RAX;
    }
  }
LAB_18000d947:
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}




void FUN_18000d970(longlong param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  code *pcVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong ****pppplVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  size_t sVar20;
  longlong ****pppplVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStackY_c8 [32];
  longlong ***local_98 [2];
  longlong ***local_88;
  longlong ***local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  byte local_60;
  undefined7 uStack_5f;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_180021010 ^ (ulonglong)auStackY_c8;
  pppplVar7 = (longlong ****)operator_new(0x8b);
  uVar22 = 0;
  *(undefined4 *)(pppplVar7 + 1) = 0;
  *(undefined1 *)(pppplVar7 + 2) = 0;
  *(undefined4 *)((longlong)pppplVar7 + 0xc) = 1;
  *pppplVar7 = (longlong ***)refs::RefsFileProperties::vftable;
  local_88 = (longlong ***)pppplVar7;
  FUN_180004570((undefined8 *)((longlong)pppplVar7 + 0x11));
  *(undefined8 *)((longlong)pppplVar7 + 0x11) = *param_2;
  *(undefined8 *)((longlong)pppplVar7 + 0x19) = param_2[1];
  *(undefined8 *)((longlong)pppplVar7 + 0x21) = param_2[2];
  *(undefined8 *)((longlong)pppplVar7 + 0x29) = param_2[3];
  *(undefined8 *)((longlong)pppplVar7 + 0x31) = param_2[4];
  *(undefined4 *)((longlong)pppplVar7 + 0x39) = *(undefined4 *)(param_2 + 5);
  *(undefined2 *)((longlong)pppplVar7 + 0x3d) = *(undefined2 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)pppplVar7 + 0x3f) = *(undefined1 *)((longlong)param_2 + 0x2e);
  *(undefined1 *)(pppplVar7 + 8) = *(undefined1 *)((longlong)param_2 + 0x2f);
  *(undefined1 *)((longlong)pppplVar7 + 0x41) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((longlong)pppplVar7 + 0x42) = *(undefined1 *)((longlong)param_2 + 0x31);
  *(undefined8 *)((longlong)pppplVar7 + 0x43) = *(undefined8 *)((longlong)param_2 + 0x32);
  *(undefined8 *)((longlong)pppplVar7 + 0x4b) = *(undefined8 *)((longlong)param_2 + 0x3a);
  plVar10 = (longlong *)((longlong)param_2 + 0x42);
  local_98[0] = (longlong ***)pppplVar7;
  if ((longlong *)((longlong)pppplVar7 + 0x53) != plVar10) {
    plVar19 = plVar10;
    if (0xf < *(ulonglong *)((longlong)param_2 + 0x5a)) {
      plVar19 = (longlong *)*plVar10;
    }
    FUN_180006170((longlong *)((longlong)pppplVar7 + 0x53),plVar19,
                  *(size_t *)((longlong)param_2 + 0x52));
  }
  *(undefined8 *)((longlong)pppplVar7 + 0x73) = *(undefined8 *)((longlong)param_2 + 0x62);
  if ((longlong *)((longlong)pppplVar7 + 0x7b) != (longlong *)((longlong)param_2 + 0x6a)) {
    puVar18 = *(undefined8 **)((longlong)param_2 + 0x6a);
    FUN_1800137e0((longlong *)((longlong)pppplVar7 + 0x7b),(undefined8 *)*puVar18,puVar18);
  }
  pppplVar7 = *(longlong *****)((longlong)param_2 + 0x3a);
  uVar14 = *(ulonglong *)((longlong)param_2 + 0x52);
  if (2 < uVar14) {
    local_50 = 0;
    local_48 = 0xf;
    local_60 = 0;
    sVar20 = 2;
    if (uVar14 < 2) {
      sVar20 = uVar14;
    }
    plVar19 = plVar10;
    if (0xf < *(ulonglong *)((longlong)param_2 + 0x5a)) {
      plVar19 = (longlong *)*plVar10;
    }
    FUN_180006170((longlong *)&local_60,plVar19,sVar20);
    uVar14 = local_48;
    pbVar3 = (byte *)CONCAT71(uStack_5f,local_60);
    pbVar16 = &local_60;
    if (0xf < local_48) {
      pbVar16 = pbVar3;
    }
    if (local_50 == 2) {
      bVar23 = *pbVar16 < 0x24;
      if ((*pbVar16 != 0x24) || (bVar23 = pbVar16[1] < 0x52, uVar5 = uVar22, pbVar16[1] != 0x52)) {
        uVar5 = -(uint)bVar23 | 1;
      }
      if (uVar5 != 0) goto LAB_18000db1b;
    }
    else {
LAB_18000db1b:
      pbVar16 = &local_60;
      if (0xf < local_48) {
        pbVar16 = pbVar3;
      }
      if (local_50 == 2) {
        bVar23 = *pbVar16 < 0x53;
        if ((*pbVar16 != 0x53) || (bVar23 = pbVar16[1] < 0x2d, pbVar16[1] != 0x2d)) {
          uVar22 = -(uint)bVar23 | 1;
        }
        if (uVar22 == 0) goto LAB_18000db7a;
      }
      sVar20 = *(size_t *)((longlong)param_2 + 0x52);
      if (0xf < *(ulonglong *)((longlong)param_2 + 0x5a)) {
        plVar10 = (longlong *)*plVar10;
      }
      if ((sVar20 != 0x19) || (iVar6 = memcmp(plVar10,"System Volume Information",0x19), iVar6 != 0)
         ) {
        if (0xf < uVar14) {
          pbVar16 = pbVar3;
          if ((0xfff < uVar14 + 1) &&
             (pbVar16 = *(byte **)(pbVar3 + -8), (byte *)0x1f < pbVar3 + (-8 - (longlong)pbVar16)))
          {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pbVar16);
        }
        goto LAB_18000dc24;
      }
    }
LAB_18000db7a:
    local_80 = local_98[0];
    local_88 = (longlong ***)pppplVar7;
    FUN_18000f780((longlong *)(param_1 + 0x40),local_78,sVar20,(longlong *)&local_88);
    if (0xf < uVar14) {
      pbVar16 = pbVar3;
      if ((0xfff < uVar14 + 1) &&
         (pbVar16 = *(byte **)(pbVar3 + -8), (byte *)0x1f < pbVar3 + (-8 - (longlong)pbVar16))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pbVar16);
    }
    goto LAB_18000df94;
  }
LAB_18000dc24:
  pppplVar21 = (longlong ****)local_98[0];
  if (((longlong ****)local_98[0] != (longlong ****)0x0) &&
     ((*(uint *)((longlong)local_98[0] + 0x39) >> 4 & 1) != 0)) {
    puVar18 = *(undefined8 **)(param_1 + 0xa8);
    cVar4 = *(char *)((longlong)puVar18[1] + 0x19);
    puVar17 = puVar18;
    puVar8 = (undefined8 *)puVar18[1];
    while (cVar4 == '\0') {
      if ((ulonglong)puVar8[4] < *(ulonglong *)((longlong)local_98[0] + 0x31)) {
        puVar9 = (undefined8 *)puVar8[2];
        puVar8 = puVar17;
      }
      else {
        puVar9 = (undefined8 *)*puVar8;
      }
      puVar17 = puVar8;
      puVar8 = puVar9;
      cVar4 = *(char *)((longlong)puVar9 + 0x19);
    }
    if ((puVar17 == puVar18) ||
       (*(ulonglong *)((longlong)local_98[0] + 0x31) < (ulonglong)puVar17[4])) {
      puVar17 = puVar18;
    }
    if (puVar17 != puVar18) goto LAB_18000dd78;
  }
  if ((*(byte *)((longlong)param_2 + 0x2c) & 1) != 0) {
    puVar18 = (undefined8 *)(*(undefined8 **)(param_1 + 0x10))[1];
    cVar4 = *(char *)((longlong)puVar18 + 0x19);
    puVar17 = *(undefined8 **)(param_1 + 0x10);
    while (cVar4 == '\0') {
      if ((longlong)puVar18[4] < (longlong)pppplVar7) {
        puVar8 = (undefined8 *)puVar18[2];
        puVar18 = puVar17;
      }
      else {
        puVar8 = (undefined8 *)*puVar18;
      }
      puVar17 = puVar18;
      puVar18 = puVar8;
      cVar4 = *(char *)((longlong)puVar8 + 0x19);
    }
LAB_18000dcb0:
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    cVar4 = *(char *)((longlong)puVar18[1] + 0x19);
    puVar8 = (undefined8 *)puVar18[1];
    while (cVar4 == '\0') {
      if ((longlong)pppplVar7 < (longlong)puVar8[4]) {
        puVar9 = (undefined8 *)*puVar8;
        puVar18 = puVar8;
      }
      else {
        puVar9 = (undefined8 *)puVar8[2];
      }
      puVar8 = puVar9;
      cVar4 = *(char *)((longlong)puVar9 + 0x19);
    }
    if (puVar17 == puVar18) goto LAB_18000de9b;
    plVar10 = (longlong *)puVar17[5];
    if (plVar10 != (longlong *)0x0) {
      if ((*(uint *)((longlong)pppplVar21 + 0x39) >> 4 & 1) == 0) {
        cVar4 = FUN_18000ac40(plVar10,(longlong *)pppplVar21);
        pppplVar21 = (longlong ****)local_98[0];
        if (cVar4 != '\0') {
          lVar12 = *(longlong *)((longlong)local_98[0] + 0x43);
          if ((lVar12 < 0) &&
             ((*(longlong *)(puVar17[5] + 0x43) < 0 ||
              ((lVar12 < 0 && (0 < *(longlong *)(puVar17[5] + 0x43))))))) goto LAB_18000def0;
          if ((0 < lVar12) && (*(longlong *)(puVar17[5] + 0x43) < 0)) goto LAB_18000de8e;
          plVar10 = (longlong *)puVar17[5];
          if (*(char *)((longlong)plVar10 + 0x41) == '\0') {
LAB_18000de48:
            if (*(char *)(param_2 + 6) != '\0') goto LAB_18000de8e;
          }
          else {
            if (*(char *)(param_2 + 6) == '\0') goto LAB_18000def0;
            if (*(char *)((longlong)plVar10 + 0x41) == '\0') goto LAB_18000de48;
          }
          if ((*(longlong *)((longlong)plVar10 + 0x43) == lVar12) ||
             (((lVar12 < 0 && (-1 < *(longlong *)((longlong)plVar10 + 0x43))) ||
              (*(byte *)(plVar10 + 8) <= *(byte *)((longlong)param_2 + 0x2f))))) goto LAB_18000def0;
          if ((undefined **)*plVar10 == refs::RefsFileProperties::vftable) {
            cVar4 = *(char *)((longlong)plVar10 + 0x42);
          }
          else {
            cVar4 = (*(code *)((undefined **)*plVar10)[0x2c])(plVar10);
          }
          if ((cVar4 == '\0') && (*(char *)((longlong)param_2 + 0x2f) != '\0')) goto LAB_18000dee7;
          goto LAB_18000de8e;
        }
      }
      else if (((*(uint *)((longlong)plVar10 + 0x39) >> 4 & 1) != 0) &&
              (*(longlong *)((longlong)plVar10 + 0x31) == *(longlong *)((longlong)pppplVar21 + 0x31)
              )) goto code_r0x00018000dd19;
    }
    puVar18 = (undefined8 *)puVar17[2];
    if (*(char *)((longlong)puVar18 + 0x19) == '\0') {
      cVar4 = *(char *)((longlong)*puVar18 + 0x19);
      puVar17 = puVar18;
      puVar18 = (undefined8 *)*puVar18;
      while (cVar4 == '\0') {
        cVar4 = *(char *)((longlong)*puVar18 + 0x19);
        puVar17 = puVar18;
        puVar18 = (undefined8 *)*puVar18;
      }
    }
    else {
      cVar4 = *(char *)((longlong)puVar17[1] + 0x19);
      puVar8 = (undefined8 *)puVar17[1];
      puVar18 = puVar17;
      while ((puVar17 = puVar8, cVar4 == '\0' && (puVar18 == (undefined8 *)puVar17[2]))) {
        cVar4 = *(char *)((longlong)puVar17[1] + 0x19);
        puVar8 = (undefined8 *)puVar17[1];
        puVar18 = puVar17;
      }
    }
    goto LAB_18000dcb0;
  }
  uVar11 = FUN_18000e930(param_1,(longlong)pppplVar7,(longlong *)local_98[0]);
  if ((char)uVar11 == '\0') {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      plVar10 = *(longlong **)(param_1 + 0xa0);
      if (plVar10 == (longlong *)0x0) {
        local_88 = (longlong ***)pppplVar7;
        std::_Xbad_function_call();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pppplVar21 = local_98;
      local_88 = (longlong ***)pppplVar7;
      (**(code **)(*plVar10 + 0x10))(plVar10,&local_88);
    }
    local_80 = local_98[0];
    local_88 = (longlong ***)pppplVar7;
    plVar10 = (longlong *)FUN_18000fb00((undefined8 *)(param_1 + 0x20),&local_88);
    FUN_18000fb30((longlong *)(param_1 + 0x20),local_78,pppplVar21,plVar10 + 4,plVar10);
    if ((*(uint *)((longlong)local_98[0] + 0x39) >> 4 & 1) != 0) {
      local_88 = (longlong ***)param_2[4];
      FUN_180006a50((longlong *)(param_1 + 0xa8),local_78,pppplVar21,(ulonglong *)&local_88);
    }
  }
  else {
LAB_18000dee7:
    if ((longlong ****)local_98[0] != (longlong ****)0x0) {
LAB_18000def0:
      (*(code *)(*local_98[0])[0x27])(local_98[0],1);
    }
  }
  goto LAB_18000df94;
code_r0x00018000dd19:
  if ((undefined **)*plVar10 == refs::RefsFileProperties::vftable) {
    lVar12 = *(longlong *)((longlong)plVar10 + 0x19);
  }
  else {
    lVar12 = (*(code *)((undefined **)*plVar10)[0x28])();
    pppplVar21 = (longlong ****)local_98[0];
  }
  if (*pppplVar21 == (longlong ***)refs::RefsFileProperties::vftable) {
    lVar13 = *(longlong *)((longlong)pppplVar21 + 0x19);
  }
  else {
    lVar13 = (*(code *)(*pppplVar21)[0x28])(pppplVar21);
    pppplVar21 = (longlong ****)local_98[0];
  }
  if (lVar12 == lVar13) {
    ppuVar1 = *(undefined ***)puVar17[5];
    if (ppuVar1 == refs::RefsFileProperties::vftable) {
      uVar14 = *(ulonglong *)((longlong)puVar17[5] + 0x21);
    }
    else {
      uVar14 = (*(code *)ppuVar1[0x2b])();
      pppplVar21 = (longlong ****)local_98[0];
    }
    if (*pppplVar21 == (longlong ***)refs::RefsFileProperties::vftable) {
      uVar15 = *(ulonglong *)((longlong)pppplVar21 + 0x21);
    }
    else {
      uVar15 = (*(code *)(*pppplVar21)[0x2b])(pppplVar21);
      pppplVar21 = (longlong ****)local_98[0];
    }
    if (uVar15 < uVar14) {
      if (pppplVar21 == (longlong ****)0x0) goto LAB_18000df94;
LAB_18000dd78:
      (*(code *)(*pppplVar21)[0x27])(pppplVar21,1);
      goto LAB_18000df94;
    }
  }
LAB_18000de8e:
  FUN_18000ae40(puVar17 + 5);
  pppplVar21 = (longlong ****)local_98[0];
LAB_18000de9b:
  if (pppplVar21 != (longlong ****)0x0) {
    local_88 = (longlong ***)pppplVar7;
    local_80 = (longlong ***)pppplVar21;
    plVar10 = (longlong *)FUN_18000fb00((undefined8 *)(param_1 + 0x10),&local_88);
    FUN_18000fb30((longlong *)(param_1 + 0x10),local_78,pppplVar21,plVar10 + 4,plVar10);
  }
LAB_18000df94:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_c8);
  return;
}




undefined8 FUN_18000e020(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *_Memory;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *local_res10;
  longlong local_res18;
  undefined8 *local_res20;
  undefined **local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  
  if (*(longlong *)((longlong)param_2 + 0x72) != 0) {
    local_98 = IDataRunList::vftable;
    puVar13 = (undefined8 *)0x0;
    local_90 = (longlong *)0x0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_90 = (longlong *)operator_new(0x10);
    *local_90 = 0;
    local_90[1] = 0;
    *local_90 = (longlong)&local_90;
    local_60 = 0;
    local_98 = CReFSDataRunList::vftable;
    puVar7 = *(undefined8 **)((longlong)param_2 + 0x6a);
    local_68 = local_90;
    local_58 = local_78;
    for (puVar1 = (undefined8 *)*puVar7; puVar1 != puVar7; puVar1 = (undefined8 *)*puVar1) {
      lVar2 = puVar1[2];
      uVar10 = puVar1[4];
      puVar11 = puVar13;
      if ((((local_90 != (longlong *)0x0) && ((undefined8 *)*local_90 != (undefined8 *)0x0)) &&
          (puVar6 = *(undefined8 **)*local_90, puVar11 = (undefined8 *)0x0,
          puVar6 != (undefined8 *)0x0)) &&
         (puVar6 = (undefined8 *)*puVar6, puVar6 != (undefined8 *)0x0)) {
        puVar11 = (undefined8 *)*puVar6;
      }
      if (local_70 == 0) {
LAB_18000e179:
        local_res10 = (longlong *)operator_new(0x10);
        *local_res10 = lVar2;
        local_res10[1] = uVar10 & 0xffffffff;
        FUN_180015b60((longlong)&local_90,&local_res10);
      }
      else {
        puVar6 = puVar13;
        if ((puVar11 != (undefined8 *)0x0) && ((undefined8 *)*puVar11 != (undefined8 *)0x0)) {
          puVar6 = *(undefined8 **)*puVar11;
        }
        uVar14 = local_70 + local_78 + -1;
        puVar11 = puVar13;
        if (puVar6 != (undefined8 *)0x0) {
          puVar11 = (undefined8 *)*puVar6;
        }
        plVar8 = *(longlong **)
                  (*(longlong *)(puVar11[1] + (puVar11[2] - 1 & uVar14 >> 1) * 8) +
                  (ulonglong)((uint)uVar14 & 1) * 8);
        if ((*plVar8 < 0) || (*plVar8 + plVar8[1] != lVar2)) goto LAB_18000e179;
        plVar8[1] = (uVar10 & 0xffffffff) + plVar8[1];
      }
    }
    local_res10 = (longlong *)0x0;
    local_res18 = 0;
    puVar7 = (undefined8 *)operator_new(0x10);
    *(undefined2 *)puVar7 = 0;
    puVar7[1] = 0;
    local_res20 = puVar7;
    iVar4 = (*(code *)local_98[5])(&local_98);
    if ((iVar4 == 1) || (iVar4 = (*(code *)local_98[5])(&local_98), iVar4 == 0xe)) {
      uVar3 = (*(code *)local_98[2])(&local_98);
      *(undefined2 *)puVar7 = uVar3;
    }
    plVar8 = FUN_180015140((longlong)&local_98,(longlong *)&local_res10,&local_res18);
    puVar7[1] = plVar8;
    if (plVar8 == (longlong *)0x0) {
      free(puVar7);
      puVar7 = puVar13;
    }
    *(undefined8 **)((longlong)param_2 + 0x62) = puVar7;
    *(longlong **)((longlong)param_2 + 0x32) = local_res10;
    plVar8 = *(longlong **)((longlong)param_2 + 0x6a);
    _Memory = (longlong *)*plVar8;
    *plVar8 = (longlong)plVar8;
    *(longlong *)(*(longlong *)((longlong)param_2 + 0x6a) + 8) =
         *(longlong *)((longlong)param_2 + 0x6a);
    *(undefined8 *)((longlong)param_2 + 0x72) = 0;
    if (_Memory != *(longlong **)((longlong)param_2 + 0x6a)) {
      do {
        plVar8 = (longlong *)*_Memory;
        free(_Memory);
        _Memory = plVar8;
      } while (plVar8 != (longlong *)*(longlong *)((longlong)param_2 + 0x6a));
    }
    lVar2 = local_res18;
    if ((((0 < local_res18) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) &&
        ((char)param_1[0x17] != '\0')) &&
       ((plVar8 = (longlong *)**(longlong **)*param_1, plVar8 == (longlong *)0x0 ||
        (iVar4 = (**(code **)(*plVar8 + 0x28))(), iVar4 != 0)))) {
      puVar7 = (undefined8 *)*param_1;
      if (*(longlong **)*puVar7 == (longlong *)0x0) {
        uVar5 = 0x200;
      }
      else {
        uVar5 = (**(code **)(**(longlong **)*puVar7 + 0x28))();
        puVar7 = (undefined8 *)*param_1;
      }
      lVar15 = *param_2;
      lVar9 = lVar15 / (longlong)(ulonglong)uVar5;
      plVar8 = *(longlong **)*puVar7;
      if (plVar8 == (longlong *)0x0) {
        uVar5 = 0x200;
      }
      else {
        uVar5 = (**(code **)(*plVar8 + 0x28))(plVar8,lVar15 % (longlong)(ulonglong)uVar5);
        lVar15 = *param_2;
      }
      uVar5 = (uint)((longlong)((ulonglong)(lVar15 % (longlong)(ulonglong)uVar5 != 0) + lVar9) /
                    lVar2);
      if (uVar5 < 0x41) {
        if (uVar5 - 0x21 < 0x20) {
          uVar12 = 0x40;
        }
        else if (uVar5 - 0x11 < 0x10) {
          uVar12 = 0x20;
        }
        else {
          uVar12 = 0x10;
          if (7 < uVar5 - 9) {
            if (uVar5 - 5 < 4) {
              uVar12 = 8;
            }
            else if (uVar5 - 3 < 2) {
              uVar12 = 4;
            }
            else if (uVar5 == 2) {
              uVar12 = 2;
            }
            else {
              uVar12 = (uint)(uVar5 == 1);
            }
          }
        }
      }
      else {
        uVar12 = 0;
        if (uVar5 < 0x1001) {
          if (uVar5 < 0x801) {
            if (uVar5 - 0x401 < 0x400) {
              uVar12 = 0x800;
            }
            else if (uVar5 - 0x201 < 0x200) {
              uVar12 = 0x400;
            }
            else if (uVar5 - 0x101 < 0x100) {
              uVar12 = 0x200;
            }
            else if (uVar5 - 0x81 < 0x80) {
              uVar12 = 0x100;
            }
            else {
              uVar12 = 0;
              if (uVar5 - 0x41 < 0x40) {
                uVar12 = 0x80;
              }
            }
          }
          else {
            uVar12 = 0x1000;
          }
        }
      }
      if (uVar12 != *(uint *)(*(longlong *)*param_1 + 0x14)) {
        uVar10 = FUN_180015ca0(&local_98);
        return uVar10 & 0xffffffffffffff00;
      }
    }
    in_RAX = FUN_180015ca0(&local_98);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




undefined8 * FUN_18000e450(undefined8 *param_1,uint param_2)

{
  FUN_180015ca0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000e490(longlong *param_1,longlong param_2,longlong *param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined6 extraout_var;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  void *pvVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong *local_res8;
  ulonglong *local_50;
  void *local_48;
  void *local_40;
  longlong local_38;
  
  if (*param_1 != 0) {
    FUN_18000f250((ulonglong *)&local_48,(longlong *)(*(longlong *)(param_2 + 8) + 0x30));
    pvVar17 = local_48;
    if (local_48 == local_40) {
      if (local_48 == (void *)0x0) {
        return;
      }
      if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
         (pvVar17 = *(void **)((longlong)local_48 + -8),
         0x1f < (ulonglong)
                ((longlong)local_48 + (-8 - (longlong)*(void **)((longlong)local_48 + -8))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      uVar20 = (longlong)local_40 - (longlong)local_48;
      uVar6 = FUN_18000b820(param_2);
      if (uVar20 == (CONCAT62(extraout_var,uVar6) & 0xffffffff)) {
        plVar12 = (longlong *)*param_1;
        if (*(longlong **)*plVar12 == (longlong *)0x0) {
          iVar7 = 0x200;
        }
        else {
          iVar7 = (**(code **)(**(longlong **)*plVar12 + 0x28))();
          plVar12 = (longlong *)*param_1;
        }
        lVar2 = *plVar12;
        uVar19 = iVar7 * *(int *)(lVar2 + 0x14);
        uVar20 = (ulonglong)uVar19;
        if (uVar19 - 1 < 0x10000) {
          lVar3 = *param_3;
          if (lVar3 < 0x10001) {
            lVar4 = *(longlong *)(param_2 + 8);
            uVar5 = (ulonglong)
                    (uint)(*(int *)((longlong)local_48 + 0xc) + *(int *)((longlong)local_48 + 8) +
                          *(int *)(lVar4 + 0x5c) + *(int *)(lVar4 + 0x60) + param_4);
            uVar18 = uVar5 / uVar20;
            uVar5 = uVar5 % uVar20;
            if ((uint)uVar18 < 4) {
              uVar18 = uVar18 + *(longlong *)(lVar4 + 0x70);
              uVar8 = (ulonglong)*(uint *)(lVar2 + 0xa8);
              if ((uVar8 <= uVar18) && ((longlong *)(lVar2 + 0xf8) != (longlong *)0x0)) {
                uVar8 = ((uVar18 / uVar8 >> 1) - 2) * uVar8;
                puVar10 = *(undefined8 **)(lVar2 + 0xf8);
                cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
                puVar16 = puVar10;
                puVar15 = (undefined8 *)puVar10[1];
                while (cVar1 == '\0') {
                  if ((ulonglong)puVar15[4] < uVar8) {
                    puVar14 = (undefined8 *)puVar15[2];
                    puVar15 = puVar16;
                  }
                  else {
                    puVar14 = (undefined8 *)*puVar15;
                  }
                  puVar16 = puVar15;
                  puVar15 = puVar14;
                  cVar1 = *(char *)((longlong)puVar14 + 0x19);
                }
                if ((puVar16 == puVar10) || (uVar8 < (ulonglong)puVar16[4])) {
                  puVar16 = puVar10;
                }
                if (puVar16 != puVar10) {
                  uVar18 = uVar18 & *(uint *)(lVar2 + 0xa8) - 1 | puVar16[5];
                }
              }
              uVar19 = (uint)(lVar3 / (longlong)uVar20);
              uVar13 = uVar19 + 1;
              if (lVar3 % (longlong)uVar20 == 0) {
                uVar13 = uVar19;
              }
              uVar19 = uVar13 + 1;
              if ((longlong)(lVar3 + uVar5) <= (longlong)uVar20) {
                uVar19 = uVar13;
              }
              if (uVar19 < 4) {
                puVar9 = (ulonglong *)operator_new(0x50);
                *puVar9 = (ulonglong)IDataRunList::vftable;
                puVar11 = puVar9 + 1;
                *puVar11 = 0;
                puVar9[2] = 0;
                puVar9[3] = 0;
                puVar9[4] = 0;
                puVar9[5] = 0;
                local_res8 = puVar9;
                local_50 = puVar11;
                puVar10 = (undefined8 *)operator_new(0x10);
                *puVar11 = (ulonglong)puVar10;
                *puVar10 = 0;
                puVar10[1] = 0;
                *(ulonglong **)*puVar11 = puVar11;
                puVar9[6] = 0;
                puVar9[7] = 0;
                puVar9[8] = puVar9[4];
                puVar9[6] = *puVar11;
                *puVar9 = (ulonglong)CRefsResidentDataRunList::vftable;
                *(undefined4 *)(puVar9 + 9) = 0;
                local_res8 = (ulonglong *)operator_new(0x10);
                *local_res8 = uVar18;
                local_res8[1] = (ulonglong)uVar19;
                FUN_180015b60((longlong)puVar11,&local_res8);
                *(int *)(puVar9 + 9) = (int)uVar5;
                local_res8 = (ulonglong *)0x0;
                puVar11 = (ulonglong *)operator_new(0x10);
                *(undefined2 *)puVar11 = 0;
                puVar11[1] = 0;
                local_50 = puVar11;
                iVar7 = (**(code **)(*puVar9 + 0x28))(puVar9);
                if ((iVar7 == 1) || (iVar7 = (**(code **)(*puVar9 + 0x28))(puVar9), iVar7 == 0xe)) {
                  uVar6 = (**(code **)(*puVar9 + 0x10))(puVar9);
                  *(undefined2 *)puVar11 = uVar6;
                }
                plVar12 = FUN_180015140((longlong)puVar9,(longlong *)&local_50,
                                        (longlong *)&local_res8);
                puVar11[1] = (ulonglong)plVar12;
                if (plVar12 == (longlong *)0x0) {
                  free(puVar11);
                  puVar11 = (ulonglong *)0x0;
                }
                *(ulonglong **)((longlong)param_3 + 0x62) = puVar11;
                if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
                   (pvVar17 = *(void **)((longlong)local_48 + -8),
                   0x1f < (ulonglong)
                          ((longlong)local_48 + (-8 - (longlong)*(void **)((longlong)local_48 + -8))
                          ))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              else if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
                      (pvVar17 = *(void **)((longlong)local_48 + -8),
                      0x1f < (ulonglong)
                             ((longlong)local_48 +
                             (-8 - (longlong)*(void **)((longlong)local_48 + -8))))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            else if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
                    (pvVar17 = *(void **)((longlong)local_48 + -8),
                    0x1f < (ulonglong)
                           ((longlong)local_48 +
                           (-8 - (longlong)*(void **)((longlong)local_48 + -8))))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          else {
            if (local_48 == (void *)0x0) {
              return;
            }
            if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
               (pvVar17 = *(void **)((longlong)local_48 + -8),
               0x1f < (ulonglong)
                      ((longlong)local_48 + (-8 - (longlong)*(void **)((longlong)local_48 + -8)))))
            {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
        }
        else {
          if (local_48 == (void *)0x0) {
            return;
          }
          if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
             (pvVar17 = *(void **)((longlong)local_48 + -8),
             0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar17)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
      }
      else {
        if (local_48 == (void *)0x0) {
          return;
        }
        if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
           (pvVar17 = *(void **)((longlong)local_48 + -8),
           0x1f < (ulonglong)
                  ((longlong)local_48 + (-8 - (longlong)*(void **)((longlong)local_48 + -8))))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    free(pvVar17);
  }
  return;
}




undefined8 * FUN_18000e8f0(undefined8 *param_1,uint param_2)

{
  FUN_180015ca0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_18000e930(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)(*(undefined8 **)(param_1 + 0x20))[1];
  cVar1 = *(char *)((longlong)puVar5 + 0x19);
  puVar6 = *(undefined8 **)(param_1 + 0x20);
  while (cVar1 == '\0') {
    if ((longlong)puVar5[4] < param_2) {
      puVar2 = (undefined8 *)puVar5[2];
      puVar5 = puVar6;
    }
    else {
      puVar2 = (undefined8 *)*puVar5;
    }
    puVar6 = puVar5;
    puVar5 = puVar2;
    cVar1 = *(char *)((longlong)puVar2 + 0x19);
  }
  while( true ) {
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    cVar1 = *(char *)((longlong)puVar5[1] + 0x19);
    puVar2 = (undefined8 *)puVar5[1];
    while (cVar1 == '\0') {
      if (param_2 < (longlong)puVar2[4]) {
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
      cVar1 = *(char *)((longlong)puVar3 + 0x19);
    }
    if (puVar6 == puVar5) break;
    uVar4 = FUN_18000ac40(param_3,(longlong *)puVar6[5]);
    if ((char)uVar4 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    puVar5 = (undefined8 *)puVar6[2];
    if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar5 + 0x19);
      puVar6 = puVar5;
      puVar5 = (undefined8 *)*puVar5;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar5 + 0x19);
        puVar6 = puVar5;
        puVar5 = (undefined8 *)*puVar5;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
      puVar2 = (undefined8 *)puVar6[1];
      puVar5 = puVar6;
      while ((puVar6 = puVar2, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar6[2]))) {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
        puVar2 = (undefined8 *)puVar6[1];
        puVar5 = puVar6;
      }
    }
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}




void FUN_18000ea30(longlong *param_1,longlong param_2,longlong *param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 uVar5;
  int iVar6;
  undefined6 extraout_var;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  void *pvVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong *local_res8;
  ulonglong *local_50;
  void *local_48;
  void *local_40;
  longlong local_38;
  ulonglong uVar20;
  
  if (*param_1 != 0) {
    FUN_18000f250((ulonglong *)&local_48,(longlong *)(*(longlong *)(param_2 + 8) + 0x30));
    pvVar16 = local_48;
    if (local_48 == local_40) {
      if (local_48 == (void *)0x0) {
        return;
      }
      if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
         (pvVar16 = *(void **)((longlong)local_48 + -8),
         0x1f < (ulonglong)
                ((longlong)local_48 + (-8 - (longlong)*(void **)((longlong)local_48 + -8))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      uVar18 = (longlong)local_40 - (longlong)local_48;
      uVar5 = FUN_18000b820(param_2);
      if (uVar18 == (CONCAT62(extraout_var,uVar5) & 0xffffffff)) {
        plVar11 = (longlong *)*param_1;
        if (*(longlong **)*plVar11 == (longlong *)0x0) {
          iVar6 = 0x200;
        }
        else {
          iVar6 = (**(code **)(**(longlong **)*plVar11 + 0x28))();
          plVar11 = (longlong *)*param_1;
        }
        lVar2 = *plVar11;
        uVar19 = iVar6 * *(int *)(lVar2 + 0x14);
        uVar20 = (ulonglong)uVar19;
        if (uVar19 - 1 < 0x10000) {
          lVar3 = *param_3;
          if (lVar3 < 0x10001) {
            lVar4 = *(longlong *)(param_2 + 8);
            uVar19 = *(uint *)((longlong)local_48 + 0xc);
            if ((ulonglong)uVar19 < uVar18 - 4) {
              if (*(int *)((ulonglong)uVar19 + (longlong)local_48) + uVar19 < uVar18) {
                uVar18 = (ulonglong)
                         (uVar19 + 8 + *(int *)(lVar4 + 0x5c) + *(int *)(lVar4 + 0x60) + param_4);
                uVar17 = uVar18 / uVar20;
                uVar18 = uVar18 % uVar20;
                if ((uint)uVar17 < 4) {
                  uVar17 = uVar17 + *(longlong *)(lVar4 + 0x70);
                  uVar7 = (ulonglong)*(uint *)(lVar2 + 0xa8);
                  if ((uVar7 <= uVar17) && ((longlong *)(lVar2 + 0xf8) != (longlong *)0x0)) {
                    uVar7 = ((uVar17 / uVar7 >> 1) - 2) * uVar7;
                    puVar9 = *(undefined8 **)(lVar2 + 0xf8);
                    cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
                    puVar15 = puVar9;
                    puVar14 = (undefined8 *)puVar9[1];
                    while (cVar1 == '\0') {
                      if ((ulonglong)puVar14[4] < uVar7) {
                        puVar13 = (undefined8 *)puVar14[2];
                        puVar14 = puVar15;
                      }
                      else {
                        puVar13 = (undefined8 *)*puVar14;
                      }
                      puVar15 = puVar14;
                      puVar14 = puVar13;
                      cVar1 = *(char *)((longlong)puVar13 + 0x19);
                    }
                    if ((puVar15 == puVar9) || (uVar7 < (ulonglong)puVar15[4])) {
                      puVar15 = puVar9;
                    }
                    if (puVar15 != puVar9) {
                      uVar17 = uVar17 & *(uint *)(lVar2 + 0xa8) - 1 | puVar15[5];
                    }
                  }
                  uVar19 = (uint)(lVar3 / (longlong)uVar20);
                  uVar12 = uVar19 + 1;
                  if (lVar3 % (longlong)uVar20 == 0) {
                    uVar12 = uVar19;
                  }
                  uVar19 = uVar12 + 1;
                  if ((longlong)(lVar3 + uVar18) <= (longlong)uVar20) {
                    uVar19 = uVar12;
                  }
                  if (uVar19 < 4) {
                    puVar8 = (ulonglong *)operator_new(0x50);
                    *puVar8 = (ulonglong)IDataRunList::vftable;
                    puVar10 = puVar8 + 1;
                    *puVar10 = 0;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                    puVar8[4] = 0;
                    puVar8[5] = 0;
                    local_res8 = puVar8;
                    local_50 = puVar10;
                    puVar9 = (undefined8 *)operator_new(0x10);
                    *puVar10 = (ulonglong)puVar9;
                    *puVar9 = 0;
                    puVar9[1] = 0;
                    *(ulonglong **)*puVar10 = puVar10;
                    puVar8[6] = 0;
                    puVar8[7] = 0;
                    puVar8[8] = puVar8[4];
                    puVar8[6] = *puVar10;
                    *puVar8 = (ulonglong)CRefsResidentDataRunList::vftable;
                    *(undefined4 *)(puVar8 + 9) = 0;
                    local_res8 = (ulonglong *)operator_new(0x10);
                    *local_res8 = uVar17;
                    local_res8[1] = (ulonglong)uVar19;
                    FUN_180015b60((longlong)puVar10,&local_res8);
                    *(int *)(puVar8 + 9) = (int)uVar18;
                    local_res8 = (ulonglong *)0x0;
                    puVar10 = (ulonglong *)operator_new(0x10);
                    *(undefined2 *)puVar10 = 0;
                    puVar10[1] = 0;
                    local_50 = puVar10;
                    iVar6 = (**(code **)(*puVar8 + 0x28))(puVar8);
                    if ((iVar6 == 1) ||
                       (iVar6 = (**(code **)(*puVar8 + 0x28))(puVar8), iVar6 == 0xe)) {
                      uVar5 = (**(code **)(*puVar8 + 0x10))(puVar8);
                      *(undefined2 *)puVar10 = uVar5;
                    }
                    plVar11 = FUN_180015140((longlong)puVar8,(longlong *)&local_50,
                                            (longlong *)&local_res8);
                    puVar10[1] = (ulonglong)plVar11;
                    if (plVar11 == (longlong *)0x0) {
                      free(puVar10);
                      puVar10 = (ulonglong *)0x0;
                    }
                    *(ulonglong **)((longlong)param_3 + 0x62) = puVar10;
                    if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
                       (pvVar16 = *(void **)((longlong)local_48 + -8),
                       0x1f < (ulonglong)
                              ((longlong)local_48 +
                              (-8 - (longlong)*(void **)((longlong)local_48 + -8))))) {
                    /* WARNING: Subroutine does not return */
                      _invalid_parameter_noinfo_noreturn();
                    }
                  }
                  else if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
                          (pvVar16 = *(void **)((longlong)local_48 + -8),
                          0x1f < (ulonglong)
                                 ((longlong)local_48 +
                                 (-8 - (longlong)*(void **)((longlong)local_48 + -8))))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                else if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
                        (pvVar16 = *(void **)((longlong)local_48 + -8),
                        0x1f < (ulonglong)
                               ((longlong)local_48 +
                               (-8 - (longlong)*(void **)((longlong)local_48 + -8))))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              else if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
                      (pvVar16 = *(void **)((longlong)local_48 + -8),
                      0x1f < (ulonglong)
                             ((longlong)local_48 +
                             (-8 - (longlong)*(void **)((longlong)local_48 + -8))))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            else if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
                    (pvVar16 = *(void **)((longlong)local_48 + -8),
                    0x1f < (ulonglong)
                           ((longlong)local_48 +
                           (-8 - (longlong)*(void **)((longlong)local_48 + -8))))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          else {
            if (local_48 == (void *)0x0) {
              return;
            }
            if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
               (pvVar16 = *(void **)((longlong)local_48 + -8),
               0x1f < (ulonglong)
                      ((longlong)local_48 + (-8 - (longlong)*(void **)((longlong)local_48 + -8)))))
            {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
        }
        else {
          if (local_48 == (void *)0x0) {
            return;
          }
          if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
             (pvVar16 = *(void **)((longlong)local_48 + -8),
             0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
      }
      else {
        if (local_48 == (void *)0x0) {
          return;
        }
        if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
           (pvVar16 = *(void **)((longlong)local_48 + -8),
           0x1f < (ulonglong)
                  ((longlong)local_48 + (-8 - (longlong)*(void **)((longlong)local_48 + -8))))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    free(pvVar16);
  }
  return;
}




void FUN_18000ef20(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_res8;
  longlong lStack_30;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)*puVar2;
  do {
    if (puVar3 == puVar2) {
      puVar2 = *(undefined8 **)(param_1 + 0x40);
      puVar3 = (undefined8 *)*puVar2;
      while (puVar3 != puVar2) {
        local_res8 = puVar3[4];
        lStack_30 = puVar3[5];
        if ((lStack_30 != 0) && (plVar4 = *(longlong **)(param_1 + 0xa0), plVar4 != (longlong *)0x0)
           ) {
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_res8,&lStack_30);
        }
        puVar5 = (undefined8 *)puVar3[2];
        if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
          cVar1 = *(char *)((longlong)*puVar5 + 0x19);
          puVar3 = puVar5;
          puVar5 = (undefined8 *)*puVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar5 + 0x19);
            puVar3 = puVar5;
            puVar5 = (undefined8 *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
          puVar6 = (undefined8 *)puVar3[1];
          puVar5 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar3[2]))) {
            cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
            puVar6 = (undefined8 *)puVar3[1];
            puVar5 = puVar3;
          }
        }
      }
      return;
    }
    if ((longlong *)puVar3[5] != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x30);
      lVar9 = puVar3[4];
      plVar7 = (longlong *)*plVar4;
      bVar10 = plVar7 == plVar4;
      if (bVar10) {
LAB_18000ef93:
        if (!bVar10) {
          lVar9 = 0x600;
        }
      }
      else {
        do {
          if (plVar7[2] == lVar9) {
            bVar10 = plVar7 == plVar4;
            goto LAB_18000ef93;
          }
          plVar7 = (longlong *)*plVar7;
        } while (plVar7 != plVar4);
      }
      uVar8 = FUN_18000e930(param_1,lVar9,(longlong *)puVar3[5]);
      if ((char)uVar8 == '\0') {
        plVar4 = *(longlong **)(param_1 + 0xa0);
        if (plVar4 == (longlong *)0x0) goto LAB_18000efe3;
        local_res8 = lVar9;
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_res8,puVar3 + 5);
      }
      else {
        plVar4 = (longlong *)puVar3[5];
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x138))(plVar4,1);
        }
      }
      puVar3[5] = 0;
    }
LAB_18000efe3:
    puVar5 = (undefined8 *)puVar3[2];
    if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar5 + 0x19);
      puVar3 = puVar5;
      puVar5 = (undefined8 *)*puVar5;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar5 + 0x19);
        puVar3 = puVar5;
        puVar5 = (undefined8 *)*puVar5;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
      puVar6 = (undefined8 *)puVar3[1];
      puVar5 = puVar3;
      while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar3[2]))) {
        cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar6 = (undefined8 *)puVar3[1];
        puVar5 = puVar3;
      }
    }
  } while( true );
}




undefined8 * FUN_18000f100(undefined8 *param_1)

{
  undefined8 *_Dst;
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  _Dst = (undefined8 *)operator_new(0xc0);
  puVar2 = _Dst;
  memset(_Dst,0,0xc0);
  *_Dst = 0;
  _Dst[1] = 0;
  _Dst[2] = 0;
  _Dst[3] = 0;
  uVar1 = FUN_1800065e0();
  _Dst[2] = uVar1;
  _Dst[4] = 0;
  _Dst[5] = 0;
  uVar1 = FUN_1800065e0();
  _Dst[4] = uVar1;
  _Dst[6] = 0;
  _Dst[7] = 0;
  uVar1 = FUN_180006370(puVar2,(undefined8 *)0x0,(undefined8 *)0x0);
  _Dst[6] = uVar1;
  _Dst[8] = 0;
  _Dst[9] = 0;
  uVar1 = FUN_1800065e0();
  _Dst[8] = uVar1;
  *(undefined4 *)(_Dst + 10) = 7;
  _Dst[0xb] = 0;
  *(undefined4 *)(_Dst + 0xc) = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  _Dst[0x16] = 0;
  uVar1 = FUN_1800064b0();
  _Dst[0x15] = uVar1;
  *(undefined1 *)(_Dst + 0x17) = 0;
  *param_1 = _Dst;
  return param_1;
}




void FUN_18000f200(undefined8 *param_1)

{
  void *_Memory;
  
  if ((param_1 != (undefined8 *)0x0) && (_Memory = (void *)*param_1, _Memory != (void *)0x0)) {
    FUN_18000b8c0((longlong)_Memory);
    free(_Memory);
    *param_1 = 0;
  }
  return;
}




ulonglong * FUN_18000f250(ulonglong *param_1,longlong *param_2)

{
  void *_Dst;
  longlong lVar1;
  undefined8 uVar2;
  void *_Src;
  undefined1 local_res8 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = FUN_180005e50(param_1,param_2[1] - *param_2);
  if ((char)uVar2 != '\0') {
    _Src = (void *)*param_2;
    _Dst = (void *)*param_1;
    FUN_1800071d0(local_res8);
    lVar1 = param_2[1];
    memmove(_Dst,_Src,lVar1 - (longlong)_Src);
    param_1[1] = (lVar1 - (longlong)_Src) + (longlong)_Dst;
  }
  return param_1;
}




undefined8 * FUN_18000f2c0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *_Memory;
  longlong lVar5;
  
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    lVar5 = param_2[1];
  }
  *param_1 = *param_2;
  plVar4 = (longlong *)param_1[1];
  param_1[1] = lVar5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      if ((undefined **)*plVar4 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
        plVar1 = plVar4 + 2;
        if ((plVar1 != (longlong *)0x0) &&
           (_Memory = (undefined8 *)*plVar1, _Memory != (undefined8 *)0x0)) {
          *_Memory = 0;
          FUN_180005830(_Memory + 0x21);
          free((void *)_Memory[0x21]);
          FUN_180006420(_Memory + 0x1f);
          free((void *)_Memory[0x1f]);
          FUN_180006420(_Memory + 0x1d);
          free((void *)_Memory[0x1d]);
          FUN_180006420(_Memory + 0x1b);
          free((void *)_Memory[0x1b]);
          _Memory[1] = CSearchedPartitionInfo::vftable;
          free(_Memory);
          *plVar1 = 0;
        }
      }
      else {
        (**(code **)*plVar4)(plVar4);
      }
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((undefined **)*plVar4 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
          FUN_180006c80(plVar4,1);
        }
        else {
          (*(code *)((undefined **)*plVar4)[1])(plVar4);
        }
      }
    }
  }
  return param_1;
}




undefined8 * FUN_18000f430(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000f460(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong extraout_RAX;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)*param_1;
  pcVar6 = (char *)param_1;
  for (; param_2 != param_3; param_2 = (undefined8 *)*param_2) {
    if (plVar8 == *(longlong **)pcVar6) goto LAB_18000f4c0;
    FUN_18000f800(pcVar6,(longlong)plVar8,param_2 + 2);
    plVar8 = (longlong *)*plVar8;
  }
LAB_18000f50f:
  plVar3 = (longlong *)*param_1;
  plVar7 = (longlong *)*plVar3;
  if (plVar8 == plVar7) {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*param_1 + 8) = *param_1;
    param_1[1] = 0;
    if (plVar7 != (longlong *)*param_1) {
      do {
        plVar8 = (longlong *)*plVar7;
        free(plVar7);
        plVar7 = plVar8;
      } while (plVar8 != (longlong *)*param_1);
    }
  }
  else {
    while (plVar8 != plVar3) {
      plVar7 = (longlong *)*plVar8;
      *(longlong **)plVar8[1] = plVar7;
      *(longlong *)(*plVar8 + 8) = plVar8[1];
      param_1[1] = param_1[1] + -1;
      free(plVar8);
      plVar8 = plVar7;
    }
  }
  return;
LAB_18000f4c0:
  for (; param_2 != param_3; param_2 = (undefined8 *)*param_2) {
    puVar1 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)puVar1[1];
    uVar4 = FUN_180007510(pcVar6,puVar1,puVar2,param_2 + 2);
    lVar5 = param_1[1];
    pcVar6 = (char *)(0xaaaaaaaaaaaaaa9 - lVar5);
    if ((longlong *)pcVar6 == (longlong *)0x0) {
      pcVar6 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar5 = extraout_RAX;
    }
    param_1[1] = lVar5 + 1;
    puVar1[1] = uVar4;
    *puVar2 = uVar4;
  }
  goto LAB_18000f50f;
}




void FUN_18000f5a0(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  undefined8 local_res18 [2];
  
  pvVar6 = (void *)param_1[1];
  lVar1 = *param_1;
  uVar5 = (longlong)pvVar6 - lVar1;
  uVar4 = param_1[2] - lVar1;
  local_res18[0] = param_3;
  if (uVar4 < param_2) {
    if (0x7fffffffffffffff < param_2) {
      FUN_1800062c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = param_2;
    if ((uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) &&
       (uVar7 = (uVar4 >> 1) + uVar4, uVar7 < param_2)) {
      uVar7 = param_2;
    }
    if (uVar7 < 0x1000) {
      if (uVar7 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = operator_new(uVar7);
      }
    }
    else {
      uVar4 = uVar7 + 0x27;
      if (uVar4 <= uVar7) {
        uVar4 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new(uVar4);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar6 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar6 - 8) = pvVar3;
    }
    memset((void *)((longlong)pvVar6 + uVar5),0,param_2 - uVar5);
    pvVar3 = (void *)*param_1;
    FUN_1800071d0((undefined1 *)local_res18);
    memmove(pvVar6,pvVar3,param_1[1] - (longlong)pvVar3);
    FUN_18000f6f0(param_1,(longlong)pvVar6,param_2,uVar7);
  }
  else {
    if (uVar5 < param_2) {
      memset(pvVar6,0,(param_2 + lVar1) - (longlong)pvVar6);
      param_1[1] = param_2 + lVar1;
      return;
    }
    if (param_2 != uVar5) {
      param_1[1] = lVar1 + param_2;
      return;
    }
  }
  return;
}




void FUN_18000f6f0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3;
  param_1[2] = param_2 + param_4;
  return;
}




undefined8 *
FUN_18000f780(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 local_res8 [4];
  
  puVar2 = (undefined8 *)*param_1;
  bVar3 = true;
  if (*(char *)((longlong)puVar2[1] + 0x19) == '\0') {
    puVar1 = (undefined8 *)puVar2[1];
    do {
      puVar2 = puVar1;
      bVar3 = *param_4 < (longlong)puVar2[4];
      if (*param_4 < (longlong)puVar2[4]) {
        puVar1 = (undefined8 *)*puVar2;
      }
      else {
        puVar1 = (undefined8 *)puVar2[2];
      }
    } while (*(char *)((longlong)puVar1 + 0x19) == '\0');
  }
  puVar2 = FUN_18000f810(param_1,local_res8,bVar3,puVar2,param_4);
  *param_2 = *puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




void FUN_18000f800(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_2 + 0x10) = *param_3;
  return;
}




undefined8 *
FUN_18000f810(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (0x555555555555553 < (ulonglong)param_1[1]) {
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  plVar5 = (longlong *)FUN_18000fbb0(param_1,param_5);
  param_1[1] = param_1[1] + 1;
  plVar5[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(*param_1 + 0x10)) {
      *(longlong **)(*param_1 + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)*param_1) {
      *(longlong **)*param_1 = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar9 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar6 = *(longlong *)(*param_1 + 8);
      *param_2 = plVar5;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      return param_2;
    }
    plVar10 = (longlong *)plVar9[1];
    plVar8 = plVar9 + 1;
    plVar11 = plVar10 + 1;
    lVar6 = *(longlong *)plVar10[1];
    if (plVar10 == (longlong *)lVar6) {
      lVar6 = ((longlong *)plVar10[1])[2];
      if (*(char *)(lVar6 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar10[2];
        if (plVar9 == plVar2) {
          plVar10[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar10;
          }
          plVar2[1] = *plVar11;
          if (plVar10 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
            *plVar2 = (longlong)plVar10;
            *plVar11 = (longlong)plVar2;
            plVar9 = plVar10;
            plVar10 = plVar2;
            plVar8 = plVar11;
          }
          else {
            plVar9 = (longlong *)*plVar11;
            if (plVar10 == (longlong *)*plVar9) {
              *plVar9 = (longlong)plVar2;
              *plVar2 = (longlong)plVar10;
              *plVar11 = (longlong)plVar2;
              plVar9 = plVar10;
              plVar10 = plVar2;
              plVar8 = plVar11;
            }
            else {
              plVar9[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar10;
              *plVar11 = (longlong)plVar2;
              plVar9 = plVar10;
              plVar10 = plVar2;
              plVar8 = plVar11;
            }
          }
        }
        *(undefined1 *)(plVar10 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
        plVar8 = *(longlong **)(*plVar8 + 8);
        plVar11 = (longlong *)*plVar8;
        *plVar8 = plVar11[2];
        if (*(char *)(plVar11[2] + 0x19) == '\0') {
          *(longlong **)(plVar11[2] + 8) = plVar8;
        }
        plVar11[1] = plVar8[1];
        if (plVar8 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar11;
          plVar11[2] = (longlong)plVar8;
        }
        else {
          plVar10 = (longlong *)plVar8[1];
          if (plVar8 == (longlong *)plVar10[2]) {
            plVar10[2] = (longlong)plVar11;
            plVar11[2] = (longlong)plVar8;
          }
          else {
            *plVar10 = (longlong)plVar11;
            plVar11[2] = (longlong)plVar8;
          }
        }
        goto LAB_18000fa95;
      }
LAB_18000f9c7:
      *(undefined1 *)(plVar10 + 3) = 1;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar6 + 0x18) == '\0') goto LAB_18000f9c7;
      plVar2 = (longlong *)*plVar10;
      plVar7 = plVar10;
      if (plVar9 == plVar2) {
        *plVar10 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar10;
        }
        plVar2[1] = *plVar11;
        if (plVar10 == (longlong *)*(longlong *)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar2;
        }
        else {
          puVar4 = (undefined8 *)*plVar11;
          if (plVar10 == (longlong *)puVar4[2]) {
            puVar4[2] = plVar2;
          }
          else {
            *puVar4 = plVar2;
          }
        }
        plVar2[2] = (longlong)plVar10;
        *plVar11 = (longlong)plVar2;
        plVar7 = plVar2;
        plVar9 = plVar10;
        plVar8 = plVar11;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar8 + 8);
      plVar11 = (longlong *)plVar8[2];
      plVar8[2] = *plVar11;
      if (*(char *)(*plVar11 + 0x19) == '\0') {
        *(longlong **)(*plVar11 + 8) = plVar8;
      }
      plVar11[1] = plVar8[1];
      if (plVar8 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar11;
      }
      else {
        puVar4 = (undefined8 *)plVar8[1];
        if (plVar8 == (longlong *)*puVar4) {
          *puVar4 = plVar11;
        }
        else {
          puVar4[2] = plVar11;
        }
      }
      *plVar11 = (longlong)plVar8;
LAB_18000fa95:
      plVar8[1] = (longlong)plVar11;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}




void FUN_18000fad0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_180006670(param_1,param_2,param_3);
  uVar1 = param_4[1];
  *(undefined8 *)(lVar2 + 0x10) = *param_4;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  *(undefined8 *)(lVar2 + 0x20) = param_4[2];
  return;
}




void FUN_18000fb00(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1800077c0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_2[1];
  return;
}




undefined8 *
FUN_18000fb30(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  puVar2 = (undefined8 *)*param_1;
  bVar3 = true;
  if (*(char *)((longlong)puVar2[1] + 0x19) == '\0') {
    puVar1 = (undefined8 *)puVar2[1];
    do {
      puVar2 = puVar1;
      bVar3 = *param_4 < (longlong)puVar2[4];
      if (*param_4 < (longlong)puVar2[4]) {
        puVar1 = (undefined8 *)*puVar2;
      }
      else {
        puVar1 = (undefined8 *)puVar2[2];
      }
    } while (*(char *)((longlong)puVar1 + 0x19) == '\0');
  }
  puVar2 = FUN_180007830(param_1,&local_res8,bVar3,puVar2,in_stack_ffffffffffffffd8,param_5);
  *param_2 = *puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




void FUN_18000fbb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1800077c0(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 0x20) = *param_2;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  return;
}




undefined8 * FUN_18000fbe0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  plVar2 = (longlong *)param_1[2];
  _Memory = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(undefined8 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  plVar2 = (longlong *)param_1[2];
  if (_Memory != plVar2) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      plVar2 = (longlong *)param_1[2];
      _Memory = plVar1;
    } while (plVar1 != plVar2);
  }
  free(plVar2);
  *param_1 = refs::RefsBaseDataImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000fc80(undefined8 *param_1,int *param_2,ulonglong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 local_30 [3];
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = refs::RefsMetadataBlockHeaderImpl::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = refs::RefsMetadataBlockReference::vftable;
  puVar2 = (undefined8 *)operator_new(0x40);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2 = FUN_180010180(puVar2);
  param_1[7] = puVar2;
  if ((0x1f < param_3) && (*(undefined4 *)(param_1 + 4) = 0x20, param_2 != (int *)0x0)) {
    if (param_4 == 1) {
      pcVar4 = "SUPBMSB+ReFSFSRS";
    }
    else if (param_4 == 2) {
      pcVar4 = "CHKPSUPBMSB+ReFSFSRS";
    }
    else {
      if (param_4 != 3) {
        return param_1;
      }
      pcVar4 = "MSB+ReFSFSRS";
    }
    if (*param_2 == *(int *)pcVar4) {
      uVar5 = 0x40;
      puVar2 = (undefined8 *)operator_new(0x40);
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = refs::RefsMetadataBlockRefrenceImpl::vftable;
      plVar1 = puVar2 + 2;
      *plVar1 = 0;
      puVar2[3] = 0;
      lVar3 = FUN_180006370(uVar5,(undefined8 *)0x0,(undefined8 *)0x0);
      *plVar1 = lVar3;
      puVar2[4] = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
      puVar2[7] = 0;
      FUN_18000ff60((longlong)puVar2,(undefined8 *)(param_2 + 8),param_3 - 0x20);
      if (*(char *)(puVar2 + 1) != '\0') {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(puVar2 + 6);
        if (param_1 + 6 != local_30) {
          lVar3 = param_1[7];
          *(undefined1 *)(lVar3 + 8) = *(undefined1 *)(puVar2 + 1);
          if ((longlong *)(lVar3 + 0x10) != plVar1) {
            FUN_18000f460((longlong *)(lVar3 + 0x10),*(undefined8 **)*plVar1,(undefined8 *)*plVar1);
          }
          *(undefined8 *)(lVar3 + 0x20) = puVar2[4];
          *(undefined1 *)(lVar3 + 0x28) = *(undefined1 *)(puVar2 + 5);
          *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)((longlong)puVar2 + 0x2c);
          *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(puVar2 + 6);
          *(undefined8 *)(lVar3 + 0x38) = puVar2[7];
        }
        param_1[5] = puVar2[7];
        *(undefined1 *)(param_1 + 1) = 1;
      }
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_1;
}




undefined8 * FUN_18000fe60(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 7;
  param_1[6] = refs::RefsMetadataBlockReference::vftable;
  if ((plVar1 != (longlong *)0x0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0))
  {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  param_1[6] = refs::RefsBaseDataImplManager<struct_refs::RefsMetadataBlockRefrenceImpl>::vftable;
  *param_1 = refs::RefsBaseDataImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000fee0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsMetadataBlockHeaderImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000ff10(undefined8 *param_1)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsMetadataBlockHeaderImpl>::vftable;
  return;
}




bool FUN_18000ff20(int *param_1,ulonglong param_2)

{
  if ((param_1 != (int *)0x0) && (3 < param_2)) {
    return *param_1 == 0x42505553;
  }
  return false;
}




bool FUN_18000ff40(int *param_1,ulonglong param_2)

{
  if ((param_1 != (int *)0x0) && (3 < param_2)) {
    return *param_1 == 0x504b4843;
  }
  return false;
}




ulonglong FUN_18000ff60(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  ulonglong in_RAX;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *_Memory;
  
  if ((param_2 != (undefined8 *)0x0) && (0x2f < param_3)) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    puVar3 = (undefined8 *)puVar2[1];
    uVar6 = FUN_180007510(param_1,puVar2,puVar3,param_2);
    if (*(longlong *)(param_1 + 0x18) != 0xaaaaaaaaaaaaaa9) {
      lVar1 = *(longlong *)(param_1 + 0x18) + 1;
      *(longlong *)(param_1 + 0x18) = lVar1;
      puVar2[1] = uVar6;
      *puVar3 = uVar6;
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      puVar3 = (undefined8 *)puVar2[1];
      uVar6 = FUN_180007510(lVar1,puVar2,puVar3,param_2 + 1);
      if (*(longlong *)(param_1 + 0x18) != 0xaaaaaaaaaaaaaa9) {
        lVar1 = *(longlong *)(param_1 + 0x18) + 1;
        *(longlong *)(param_1 + 0x18) = lVar1;
        puVar2[1] = uVar6;
        *puVar3 = uVar6;
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        puVar3 = (undefined8 *)puVar2[1];
        uVar6 = FUN_180007510(lVar1,puVar2,puVar3,param_2 + 2);
        if (*(longlong *)(param_1 + 0x18) != 0xaaaaaaaaaaaaaa9) {
          lVar1 = *(longlong *)(param_1 + 0x18) + 1;
          *(longlong *)(param_1 + 0x18) = lVar1;
          puVar2[1] = uVar6;
          *puVar3 = uVar6;
          puVar2 = *(undefined8 **)(param_1 + 0x10);
          puVar3 = (undefined8 *)puVar2[1];
          uVar6 = FUN_180007510(lVar1,puVar2,puVar3,param_2 + 3);
          if (*(longlong *)(param_1 + 0x18) != 0xaaaaaaaaaaaaaa9) {
            *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
            puVar2[1] = uVar6;
            *puVar3 = uVar6;
            _Memory = (longlong *)**(longlong **)(param_1 + 0x10);
            if (_Memory != *(longlong **)(param_1 + 0x10)) {
              do {
                plVar4 = (longlong *)*_Memory;
                if (_Memory[2] == 0) {
                  *(longlong **)_Memory[1] = plVar4;
                  *(longlong *)(*_Memory + 8) = _Memory[1];
                  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
                  free(_Memory);
                }
                _Memory = plVar4;
              } while (plVar4 != (longlong *)*(longlong *)(param_1 + 0x10));
            }
            *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)((longlong)param_2 + 0x22);
            in_RAX = param_2[5];
            *(ulonglong *)(param_1 + 0x38) = in_RAX;
            *(undefined4 *)(param_1 + 0x30) = 0x30;
            *(undefined1 *)(param_1 + 8) = 1;
            goto LAB_1800100dd;
          }
        }
      }
    }
    std::_Xlength_error("list<T> too long");
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return uVar7;
  }
LAB_1800100dd:
  return in_RAX & 0xffffffffffffff00;
}




undefined8 * FUN_180010110(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsMetadataBlockReference::vftable;
  if ((plVar1 != (longlong *)0x0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0))
  {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsMetadataBlockRefrenceImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180010180(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = refs::RefsMetadataBlockRefrenceImpl::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_180006370(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  param_1[2] = uVar1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  return param_1;
}




void FUN_1800101f0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsMetadataBlockReference::vftable;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      *plVar1 = 0;
    }
    *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsMetadataBlockRefrenceImpl>::vftable;
    return;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsMetadataBlockRefrenceImpl>::vftable;
  return;
}




undefined8 * FUN_180010260(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  *param_1 = refs::RefsMetadataBlockReference::vftable;
  if (param_1 != param_2) {
    if (param_2[1] != 0) {
      puVar2 = (undefined8 *)operator_new(0x40);
      lVar1 = param_2[1];
      *puVar2 = refs::RefsBaseDataImpl::vftable;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(lVar1 + 8);
      *puVar2 = refs::RefsMetadataBlockRefrenceImpl::vftable;
      FUN_180005c00((char *)(puVar2 + 2),(undefined8 *)(lVar1 + 0x10));
      puVar2[4] = *(undefined8 *)(lVar1 + 0x20);
      *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(lVar1 + 0x28);
      *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(lVar1 + 0x2c);
      *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(lVar1 + 0x30);
      puVar2[7] = *(undefined8 *)(lVar1 + 0x38);
      param_1[1] = puVar2;
      return param_1;
    }
    puVar2 = (undefined8 *)operator_new(0x40);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2 = FUN_180010180(puVar2);
    param_1[1] = puVar2;
  }
  return param_1;
}




undefined8 * FUN_180010360(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsMetadataBlockRefrenceImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




ulonglong FUN_180010390(longlong *param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_1 != 0) {
    local_30 = (undefined8 *)0x0;
    local_38 = refs::RefsDbr::vftable;
    puVar2 = (undefined8 *)operator_new(0x38);
    puVar2 = FUN_180012390(puVar2,param_2,param_3);
    local_30 = puVar2;
    if (*(char *)(puVar2 + 1) == '\0') {
      register0x00000020 = (BADSPACEBASE *)(**(code **)*puVar2)(puVar2,1);
    }
    else {
      if ((longlong *)**(longlong **)*param_1 == (longlong *)0x0) {
        local_d0 = 0x200;
      }
      else {
        local_d0 = (**(code **)(*(longlong *)**(longlong **)*param_1 + 0x28))();
      }
      local_120 = 0xe;
      local_11c = 1;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0xffffffffffffffff;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      local_cc = 0;
      local_c8 = 0;
      local_c0 = 1;
      local_b8 = 0;
      local_b0 = 1;
      local_ac = 0;
      local_a8 = 0;
      if (((local_d0 & 0x1ff) != 0) || (local_d0 == 0)) {
        local_d0 = 0x200;
      }
      local_a0 = 0;
      local_128 = refs::RefsPartitionInformation::vftable;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_58 = (void *)FUN_1800065e0();
      local_48 = (void *)0x0;
      local_40 = 0;
      local_48 = (void *)FUN_1800065e0();
      local_c8 = puVar2[2];
      local_d0 = *(uint *)(puVar2 + 3);
      local_11c = *(undefined4 *)((longlong)puVar2 + 0x1c);
      local_90 = (ulonglong)*(uint *)((longlong)puVar2 + 0x1c) * 0x1e;
      local_98 = *(undefined2 *)(puVar2 + 4);
      local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)((longlong)puVar2 + 0x34));
      local_80 = puVar2[5];
      local_118 = *(undefined8 *)(param_4 + 2);
      cVar1 = FUN_180010820(param_1,(longlong)&local_128);
      if (cVar1 != '\0') {
        param_4[0xe] = local_11c;
        *(undefined8 *)(param_4 + 4) = local_c8;
        *param_4 = 10;
        param_4[0x17] = 0;
        FUN_180006420((longlong *)&local_48);
        free(local_48);
        FUN_180006420((longlong *)&local_58);
        free(local_58);
        local_128 = CSearchedPartitionInfo::vftable;
        uVar3 = (**(code **)*puVar2)(puVar2,1);
        return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
      FUN_180006420((longlong *)&local_48);
      free(local_48);
      FUN_180006420((longlong *)&local_58);
      free(local_58);
      local_128 = CSearchedPartitionInfo::vftable;
      register0x00000020 = (BADSPACEBASE *)(**(code **)*puVar2)(puVar2,1);
    }
  }
  return (ulonglong)register0x00000020 & 0xffffffffffffff00;
}




undefined8 FUN_180010630(longlong *param_1,int *param_2,ulonglong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int *piVar7;
  byte local_res8 [8];
  int *local_30;
  int *local_28;
  longlong local_20;
  
  uVar5 = 0;
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    return 0;
  }
  plVar1 = (longlong *)**(longlong **)*param_1;
  if ((plVar1 != (longlong *)0x0) && (iVar4 = (**(code **)(*plVar1 + 0x28))(), iVar4 == 0)) {
    return 0;
  }
  uVar6 = param_3;
  bVar2 = FUN_18000ff20(param_2,param_3);
  if ((!bVar2) && (bVar2 = FUN_18000ff40(param_2,uVar6), !bVar2)) {
    return 0;
  }
  if ((longlong *)**(longlong **)*param_1 == (longlong *)0x0) {
    iVar4 = 0x200;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)**(longlong **)*param_1 + 0x28))();
  }
  if (param_3 < (uint)(iVar4 << 5)) {
    local_res8[0] = 0;
    FUN_1800059b0((ulonglong *)&local_30,(ulonglong)(uint)(iVar4 << 5),local_res8);
    plVar1 = (longlong *)**(longlong **)*param_1;
    piVar7 = local_30;
    if (((plVar1 == (longlong *)0x0) || (local_30 == local_28)) ||
       (iVar4 = (**(code **)(*plVar1 + 8))(plVar1,local_30,*(undefined8 *)(param_4 + 2),0x20,0),
       iVar4 == 0)) {
      if (local_30 == (int *)0x0) {
        return 0;
      }
      if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
         (piVar7 = *(int **)(local_30 + -2),
         0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)piVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      uVar5 = FUN_180010c00(param_1,local_30,(longlong)local_28 - (longlong)local_30,param_4);
      if (((char)uVar5 == '\0') &&
         (cVar3 = FUN_180010da0(param_1,local_30,(longlong)local_28 - (longlong)local_30,param_4),
         cVar3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      if (local_30 == (int *)0x0) {
        return uVar5;
      }
      if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
         (piVar7 = *(int **)(local_30 + -2),
         0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)*(int **)(local_30 + -2))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(piVar7);
    return uVar5;
  }
  uVar5 = FUN_180010c00(param_1,param_2,param_3,param_4);
  if (((char)uVar5 == '\0') &&
     (cVar3 = FUN_180010da0(param_1,param_2,param_3,param_4), cVar3 == '\0')) {
    return 0;
  }
  return 1;
}




undefined1 FUN_180010820(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 uVar6;
  int *local_30;
  int *local_28;
  longlong local_20;
  
  uVar6 = 0;
  if (*(int *)(param_2 + 0x58) == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    return 0;
  }
  FUN_180011640((ulonglong *)&local_30,
                (ulonglong)(uint)(*(int *)(param_2 + 0x58) * *(int *)(param_2 + 0xc)));
  plVar1 = (longlong *)**(longlong **)*param_1;
  piVar5 = local_30;
  if (((plVar1 == (longlong *)0x0) || (local_30 == local_28)) ||
     (iVar2 = (**(code **)(*plVar1 + 8))
                        (plVar1,local_30,
                         *(longlong *)(param_2 + 0x98) + *(longlong *)(param_2 + 0x10),
                         *(undefined4 *)(param_2 + 0xc),0), iVar2 == 0)) {
    if (local_30 == (int *)0x0) {
      return 0;
    }
    if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
       (piVar5 = *(int **)(local_30 + -2),
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)piVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    puVar3 = (undefined8 *)operator_new(0x48);
    puVar3 = FUN_180011770(puVar3,local_30,(longlong)local_28 - (longlong)local_30);
    if (*(char *)(puVar3 + 1) == '\0') {
      (**(code **)*puVar3)(puVar3,1);
      if (local_30 == (int *)0x0) {
        return 0;
      }
      if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
         (piVar5 = *(int **)(local_30 + -2),
         0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)*(int **)(local_30 + -2))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      uVar4 = FUN_180010a20(param_1,puVar3[5],*(uint *)(param_2 + 0xc),*(longlong *)(param_2 + 0x10)
                           );
      if (((char)uVar4 != '\0') ||
         (uVar4 = FUN_180010a20(param_1,puVar3[6],*(uint *)(param_2 + 0xc),
                                *(longlong *)(param_2 + 0x10)), (char)uVar4 != '\0')) {
        uVar6 = 1;
      }
      (**(code **)*puVar3)(puVar3,1);
      if (local_30 == (int *)0x0) {
        return uVar6;
      }
      if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
         (piVar5 = *(int **)(local_30 + -2),
         0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)*(int **)(local_30 + -2))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  free(piVar5);
  return uVar6;
}




undefined8 FUN_180010a20(undefined8 *param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  int *local_30;
  int *local_28;
  longlong local_20;
  
  uVar5 = 0;
  if (param_2 == 0) {
    return 0;
  }
  if ((longlong *)**(longlong **)*param_1 == (longlong *)0x0) {
    iVar2 = 0x200;
  }
  else {
    iVar2 = (**(code **)(*(longlong *)**(longlong **)*param_1 + 0x28))();
  }
  FUN_180011640((ulonglong *)&local_30,(ulonglong)(iVar2 * param_3 * 4));
  plVar1 = (longlong *)**(longlong **)*param_1;
  piVar4 = local_30;
  if (((plVar1 == (longlong *)0x0) || (local_30 == local_28)) ||
     (iVar2 = (**(code **)(*plVar1 + 8))
                        (plVar1,local_30,(ulonglong)param_3 * param_2 + param_4,param_3 * 4,0),
     iVar2 == 0)) {
    if (local_30 == (int *)0x0) {
      return 0;
    }
    if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
       (piVar4 = *(int **)(local_30 + -2),
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)piVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    puVar3 = (undefined8 *)operator_new(0x48);
    puVar3 = FUN_180012650(puVar3,local_30,(longlong)local_28 - (longlong)local_30);
    if (*(char *)(puVar3 + 1) == '\0') {
      (**(code **)*puVar3)();
      if (local_30 == (int *)0x0) {
        return 0;
      }
      if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
         (piVar4 = *(int **)(local_30 + -2),
         0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)*(int **)(local_30 + -2))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      uVar5 = 1;
      (**(code **)*puVar3)(puVar3,1);
      if (local_30 == (int *)0x0) {
        return 1;
      }
      if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
         (piVar4 = *(int **)(local_30 + -2),
         0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)*(int **)(local_30 + -2))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  free(piVar4);
  return uVar5;
}




ulonglong FUN_180010c00(undefined8 *param_1,int *param_2,ulonglong param_3,undefined4 *param_4)

{
  ulonglong in_RAX;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 != (int *)0x0) && (0x1ff < param_3)) {
    lVar4 = 0;
    puVar1 = (undefined8 *)operator_new(0x48);
    puVar1 = FUN_180011770(puVar1,param_2,param_3);
    if (*(char *)(puVar1 + 1) == '\0') {
      in_RAX = (**(code **)*puVar1)(puVar1,1);
    }
    else {
      lVar5 = *(longlong *)(param_4 + 2) + puVar1[8] * -8;
      uVar2 = FUN_180010a20(param_1,puVar1[5],8,lVar5);
      if (((char)uVar2 != '\0') ||
         (uVar2 = FUN_180010a20(param_1,puVar1[6],8,lVar5), (char)uVar2 == '\0')) {
        uVar2 = FUN_180010a20(param_1,puVar1[5],8,lVar5);
        uVar3 = FUN_180010a20(param_1,puVar1[6],8,lVar5);
        if (((char)uVar2 != '\0') || ((char)uVar3 != '\0')) {
          *(longlong *)(param_4 + 2) = lVar5;
          param_4[0xe] = 8;
          if ((longlong *)**(longlong **)*param_1 != (longlong *)0x0) {
            lVar4 = (**(code **)(*(longlong *)**(longlong **)*param_1 + 0x18))();
          }
          *(longlong *)(param_4 + 4) = lVar4 - lVar5;
          if ((char)uVar2 == '\0') {
            lVar4 = puVar1[6];
          }
          else {
            lVar4 = puVar1[5];
          }
          *(longlong *)(param_4 + 0x28) = lVar4 * 8;
          *param_4 = 10;
          param_4[0x17] = 3;
          uVar2 = (**(code **)*puVar1)(puVar1,1);
          return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
        }
      }
      in_RAX = (**(code **)*puVar1)(puVar1,1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined1 FUN_180010da0(undefined8 *param_1,int *param_2,ulonglong param_3,undefined4 *param_4)

{
  undefined **ppuVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined **_Memory;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  int *piVar14;
  byte bVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  byte local_f8;
  undefined1 local_f7;
  longlong *local_f0;
  longlong local_e8;
  uint local_e0;
  undefined **local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  int *local_98;
  int *local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined **local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar10 = 0;
  local_e0 = 0;
  local_f7 = 0;
  local_50 = (undefined8 *)0x0;
  local_58 = refs::RefsCheckPoint::vftable;
  local_b0 = (longlong *)operator_new(0x48);
  puVar8 = FUN_180012650(local_b0,param_2,param_3);
  local_b8 = puVar8;
  local_50 = puVar8;
  if (*(char *)(puVar8 + 1) == '\0') {
    (**(code **)*puVar8)(puVar8,1);
  }
  else {
    local_60 = puVar8 + 6;
    FUN_180012a70((ulonglong *)&local_98,local_60);
    piVar6 = local_90;
    piVar5 = local_98;
    lVar17 = (longlong)local_90 - (longlong)local_98;
    piVar14 = local_98;
    if (local_98 != (int *)0x0) {
      for (; piVar14 != piVar6; piVar14 = piVar14 + 4) {
        (*(code *)**(undefined8 **)piVar14)(piVar14,0);
      }
      piVar14 = piVar5;
      if ((0xfff < (local_88 - (longlong)piVar5 & 0xfffffffffffffff0U)) &&
         (piVar14 = *(int **)(piVar5 + -2),
         0x1f < (ulonglong)((longlong)piVar5 + (-8 - (longlong)piVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(piVar14);
    }
    if (7 < (ulonglong)(lVar17 >> 4)) {
      local_68 = puVar8 + 4;
      FUN_180005c00((char *)&local_d8,local_68);
      bVar19 = local_d0 == (undefined8 *)0x0;
      _Memory = (undefined **)*local_d8;
      *local_d8 = (undefined *)local_d8;
      local_d8[1] = (undefined *)local_d8;
      local_d0 = (undefined8 *)0x0;
      if (_Memory != local_d8) {
        do {
          ppuVar1 = (undefined **)*_Memory;
          free(_Memory);
          _Memory = ppuVar1;
        } while (ppuVar1 != local_d8);
      }
      free(local_d8);
      if (!bVar19) {
        *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(param_4 + 2);
        local_f8 = bVar19;
        FUN_1800059b0((ulonglong *)&local_98,0x100000,&local_f8);
        local_b0 = DAT_180022660;
        plVar12 = (longlong *)*DAT_180022660;
        uVar13 = 3;
        local_f8 = bVar19;
        if (plVar12 != DAT_180022660) {
          do {
            FUN_180005c00((char *)&local_a8,local_68);
            plVar11 = (longlong *)*local_a8;
            local_c0 = *(longlong *)(param_4 + 2) - plVar11[2] * (ulonglong)*(uint *)(plVar12 + 2);
            *local_a8 = (longlong)local_a8;
            local_a8[1] = (longlong)local_a8;
            local_a0 = 0;
            if (plVar11 != local_a8) {
              do {
                plVar2 = (longlong *)*plVar11;
                free(plVar11);
                plVar11 = plVar2;
              } while (plVar2 != local_a8);
            }
            free(local_a8);
            FUN_180012a70((ulonglong *)&local_80,local_60);
            local_e0 = uVar13 | 0xc;
            local_c8 = local_80;
            puVar8 = local_78;
            puVar16 = local_80;
            uVar18 = uVar10;
            bVar15 = local_f8;
            if (local_80 != local_78) {
              do {
                FUN_180010260(&local_d8,puVar16);
                puVar4 = local_d0;
                iVar3 = (int)uVar18;
                if (iVar3 - 7U < 2) {
                  FUN_180005c00((char *)&local_f0,local_d0 + 2);
                  local_e0 = local_e0 | 0x10;
                  if (local_e8 == 0) {
                    uVar18 = (ulonglong)(iVar3 + 1);
                    plVar11 = (longlong *)*local_f0;
                    *local_f0 = (longlong)local_f0;
                    local_f0[1] = (longlong)local_f0;
                    local_e8 = 0;
                    if (plVar11 != local_f0) {
                      do {
                        plVar2 = (longlong *)*plVar11;
                        free(plVar11);
                        plVar11 = plVar2;
                        puVar8 = local_78;
                      } while (plVar2 != local_f0);
                    }
LAB_1800111ce:
                    free(local_f0);
                    if (puVar4 != (undefined8 *)0x0) {
                      puVar9 = (undefined8 *)*puVar4;
                      goto LAB_1800111e7;
                    }
                    goto LAB_1800111f2;
                  }
                  plVar11 = (longlong *)**(longlong **)*param_1;
                  if (((plVar11 == (longlong *)0x0) || (local_98 == local_90)) ||
                     (iVar7 = (**(code **)(*plVar11 + 8))
                                        (plVar11,local_98,
                                         (ulonglong)*(uint *)(plVar12 + 2) *
                                         *(longlong *)(*local_f0 + 0x10) + local_c0,
                                         (ulonglong)*(uint *)(plVar12 + 2),0), iVar7 == 0)) {
                    plVar11 = (longlong *)*local_f0;
                    *local_f0 = (longlong)local_f0;
                    local_f0[1] = (longlong)local_f0;
                    local_e8 = 0;
                    if (plVar11 != local_f0) {
                      do {
                        plVar2 = (longlong *)*plVar11;
                        free(plVar11);
                        plVar11 = plVar2;
                        puVar8 = local_78;
                      } while (plVar2 != local_f0);
                    }
                    goto LAB_1800111ce;
                  }
                  bVar19 = false;
                  if (local_98 != (int *)0x0) {
                    bVar19 = *local_98 == 0x2b42534d;
                  }
                  if (!bVar19) {
                    uVar18 = (ulonglong)(iVar3 + 1);
                    plVar11 = (longlong *)*local_f0;
                    *local_f0 = (longlong)local_f0;
                    local_f0[1] = (longlong)local_f0;
                    local_e8 = 0;
                    if (plVar11 != local_f0) {
                      do {
                        plVar2 = (longlong *)*plVar11;
                        free(plVar11);
                        plVar11 = plVar2;
                        puVar8 = local_78;
                      } while (plVar2 != local_f0);
                    }
                    goto LAB_1800111ce;
                  }
                  *(longlong *)(param_4 + 2) = local_c0;
                  param_4[0xe] = (int)plVar12[2];
                  local_f8 = 1;
                  plVar11 = (longlong *)*local_f0;
                  *local_f0 = (longlong)local_f0;
                  local_f0[1] = (longlong)local_f0;
                  local_e8 = 0;
                  if (plVar11 != local_f0) {
                    do {
                      plVar2 = (longlong *)*plVar11;
                      free(plVar11);
                      plVar11 = plVar2;
                    } while (plVar2 != local_f0);
                  }
                  free(local_f0);
                  if (puVar4 != (undefined8 *)0x0) {
                    (**(code **)*puVar4)(puVar4,1);
                    local_d0 = (undefined8 *)0x0;
                  }
                  local_d8 = refs::
                             RefsBaseDataImplManager<struct_refs::RefsMetadataBlockRefrenceImpl>::
                             vftable;
                  bVar15 = 1;
                  break;
                }
                uVar18 = (ulonglong)(iVar3 + 1);
                if (local_d0 != (undefined8 *)0x0) {
                  puVar9 = (undefined8 *)*local_d0;
LAB_1800111e7:
                  (*(code *)*puVar9)(puVar4,1);
                  local_d0 = (undefined8 *)0x0;
                }
LAB_1800111f2:
                local_d8 = refs::RefsBaseDataImplManager<struct_refs::RefsMetadataBlockRefrenceImpl>
                           ::vftable;
                puVar16 = puVar16 + 2;
                bVar15 = local_f8;
              } while (puVar16 != puVar8);
            }
            puVar16 = local_78;
            puVar8 = local_c8;
            if (local_c8 != (undefined8 *)0x0) {
              for (; puVar8 != puVar16; puVar8 = puVar8 + 2) {
                (**(code **)*puVar8)(puVar8,0);
              }
              puVar8 = local_c8;
              if ((0xfff < (local_70 - (longlong)local_c8 & 0xfffffffffffffff0U)) &&
                 (puVar8 = (undefined8 *)local_c8[-1],
                 0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)puVar8)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(puVar8);
            }
            plVar12 = (longlong *)*plVar12;
            uVar13 = local_e0;
          } while (plVar12 != local_b0);
          puVar8 = local_b8;
          if (bVar15 != 0) {
            puVar8 = (undefined8 *)*param_1;
            if (*(longlong **)*puVar8 != (longlong *)0x0) {
              (**(code **)(**(longlong **)*puVar8 + 0x18))();
              puVar8 = (undefined8 *)*param_1;
            }
            if (*(longlong **)*puVar8 != (longlong *)0x0) {
              uVar10 = (**(code **)(**(longlong **)*puVar8 + 0x18))();
            }
            *(ulonglong *)(param_4 + 4) = uVar10 - *(longlong *)(param_4 + 2);
            *param_4 = 10;
            param_4[0x17] = 3;
            local_f7 = 1;
            if (local_98 != (int *)0x0) {
              piVar14 = local_98;
              if ((0xfff < (ulonglong)(local_88 - (longlong)local_98)) &&
                 (piVar14 = *(int **)(local_98 + -2),
                 0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)piVar14)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(piVar14);
            }
            (**(code **)*local_b8)(local_b8,1);
            return local_f7;
          }
        }
        if (local_98 != (int *)0x0) {
          piVar14 = local_98;
          if ((0xfff < (ulonglong)(local_88 - (longlong)local_98)) &&
             (piVar14 = *(int **)(local_98 + -2),
             0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)piVar14)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(piVar14);
        }
        (**(code **)*puVar8)(puVar8,1);
        return local_f7;
      }
    }
    (**(code **)*puVar8)(puVar8,1);
  }
  return local_f7;
}




void FUN_180011440(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Memory;
  longlong *plVar4;
  undefined8 *_Memory_00;
  longlong lVar5;
  
  if ((param_1 != (undefined8 *)0x0) && (_Memory = (void *)*param_1, _Memory != (void *)0x0)) {
    plVar4 = *(longlong **)((longlong)_Memory + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        if ((undefined **)*plVar4 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
          plVar1 = plVar4 + 2;
          if ((plVar1 != (longlong *)0x0) &&
             (_Memory_00 = (undefined8 *)*plVar1, _Memory_00 != (undefined8 *)0x0)) {
            *_Memory_00 = 0;
            FUN_180005830(_Memory_00 + 0x21);
            free((void *)_Memory_00[0x21]);
            FUN_180006420(_Memory_00 + 0x1f);
            free((void *)_Memory_00[0x1f]);
            FUN_180006420(_Memory_00 + 0x1d);
            free((void *)_Memory_00[0x1d]);
            FUN_180006420(_Memory_00 + 0x1b);
            free((void *)_Memory_00[0x1b]);
            _Memory_00[1] = CSearchedPartitionInfo::vftable;
            free(_Memory_00);
            *plVar1 = 0;
          }
        }
        else {
          (**(code **)*plVar4)(plVar4);
        }
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((undefined **)*plVar4 == std::_Ref_count_obj<class_refs::RefsBasicDevice>::vftable) {
            FUN_180006c80(plVar4,1);
          }
          else {
            (*(code *)((undefined **)*plVar4)[1])(plVar4);
          }
        }
      }
    }
    free(_Memory);
    *param_1 = 0;
  }
  return;
}




ulonglong FUN_1800115d0(undefined8 *param_1,int *param_2,ulonglong param_3,undefined4 *param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((param_2 == (int *)0x0) || (param_3 < 0x200)) {
LAB_180011624:
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    in_RAX = FUN_180010390((longlong *)*param_1,(longlong)param_2,param_3,param_4);
    if ((char)in_RAX == '\0') {
      in_RAX = FUN_180010630((longlong *)*param_1,param_2,param_3,param_4);
      if ((char)in_RAX == '\0') goto LAB_180011624;
    }
    uVar1 = CONCAT71((int7)(in_RAX >> 8),1);
  }
  return uVar1;
}




ulonglong * FUN_180011640(ulonglong *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_180005e50(param_1,param_2);
  if ((char)uVar1 != '\0') {
    _Dst = (void *)*param_1;
    memset(_Dst,0,param_2);
    param_1[1] = (longlong)_Dst + param_2;
  }
  return param_1;
}




void FUN_1800116a0(char *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong extraout_RAX;
  
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    puVar1 = (undefined8 *)param_2[1];
    uVar2 = FUN_180011750(param_1,param_2,puVar1,param_3);
    param_1 = (char *)(0xaaaaaaaaaaaaaa9 - DAT_180022668);
    if (param_1 == (char *)0x0) {
      param_1 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      DAT_180022668 = extraout_RAX;
    }
    DAT_180022668 = DAT_180022668 + 1;
    param_2[1] = uVar2;
    *puVar1 = uVar2;
  }
  return;
}




void FUN_180011750(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_180006370(param_1,param_2,param_3);
  *(undefined4 *)(lVar1 + 0x10) = *param_4;
  return;
}




undefined8 * FUN_180011770(undefined8 *param_1,int *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong *local_60;
  longlong local_58;
  undefined **local_50;
  undefined8 *local_48;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = refs::RefsSupperBlockImpl::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x1e;
  local_48 = (undefined8 *)0x0;
  local_50 = refs::RefsMetadataBlockHeader::vftable;
  puVar6 = (undefined8 *)operator_new(0x40);
  uVar8 = param_3;
  puVar6 = FUN_18000fc80(puVar6,param_2,param_3,1);
  if (*(char *)(puVar6 + 1) != '\0') {
    local_48 = puVar6;
    FUN_180005c00((char *)&local_60,(undefined8 *)(puVar6[7] + 0x10));
    bVar10 = local_58 != 0;
    plVar7 = (longlong *)*local_60;
    *local_60 = (longlong)local_60;
    local_60[1] = (longlong)local_60;
    local_58 = 0;
    if (plVar7 != local_60) {
      do {
        plVar3 = (longlong *)*plVar7;
        free(plVar7);
        plVar7 = plVar3;
      } while (plVar3 != local_60);
    }
    free(local_60);
    if (bVar10) {
      FUN_180005c00((char *)&local_60,(undefined8 *)(puVar6[7] + 0x10));
      param_1[8] = *(undefined8 *)(*local_60 + 0x10);
      plVar7 = (longlong *)*local_60;
      *local_60 = (longlong)local_60;
      local_60[1] = (longlong)local_60;
      local_58 = 0;
      if (plVar7 != local_60) {
        do {
          plVar3 = (longlong *)*plVar7;
          free(plVar7);
          plVar7 = plVar3;
        } while (plVar3 != local_60);
      }
      free(local_60);
    }
    uVar9 = (ulonglong)*(uint *)(puVar6 + 4);
    if (((uVar9 < param_3) && (0x2f < param_3 - uVar9)) &&
       (puVar6 = (undefined8 *)(uVar9 + (longlong)param_2), puVar6 != (undefined8 *)0x0)) {
      FUN_18000f5a0(param_1 + 2,0x10,uVar8);
      puVar4 = (undefined8 *)param_1[2];
      uVar5 = puVar6[1];
      *puVar4 = *puVar6;
      puVar4[1] = uVar5;
      uVar8 = (ulonglong)*(uint *)(puVar6 + 4);
      if (((uVar9 + 0x30 <= uVar8) && (uVar8 < param_3)) &&
         ((*(int *)((longlong)puVar6 + 0x24) == 2 && (0xf < param_3 - uVar8)))) {
        param_1[5] = *(undefined8 *)(uVar8 + (longlong)param_2);
        param_1[6] = *(undefined8 *)(uVar8 + 8 + (longlong)param_2);
        uVar1 = *(uint *)(puVar6 + 5);
        *(uint *)(param_1 + 7) = uVar1;
        uVar2 = *(uint *)((longlong)puVar6 + 0x2c);
        *(uint *)((longlong)param_1 + 0x3c) = uVar2;
        if (((uVar9 + 0x30 <= (ulonglong)uVar1) && (uVar2 + uVar1 < param_3)) &&
           ((ulonglong)uVar2 <= param_3 - uVar1)) {
          *(undefined1 *)(param_1 + 1) = 1;
        }
      }
    }
  }
  return param_1;
}




undefined8 * FUN_1800119a0(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(param_1[4] - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = refs::RefsBaseDataImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180011a30(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsSupperBlock::vftable;
  if ((plVar1 != (longlong *)0x0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0))
  {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsSupperBlockImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180011aa0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsSupperBlock::vftable;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      *plVar1 = 0;
    }
    *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsSupperBlockImpl>::vftable;
    return;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsSupperBlockImpl>::vftable;
  return;
}




void FUN_180011b10(undefined8 *param_1)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsSupperBlockImpl>::vftable;
  return;
}




undefined8 * FUN_180011b20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsSupperBlockImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




ulonglong FUN_180011b50(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong in_RAX;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  undefined8 local_18 [2];
  
  if ((*param_1 == 0) || ((int)param_1[0xc] == 0)) {
LAB_180011cb3:
    return in_RAX & 0xffffffffffffff00;
  }
  in_RAX = param_3[1] - 1;
  if ((0x1f < in_RAX) ||
     (uVar7 = (int)param_1[0xc] * *(int *)((longlong)param_1 + 0x14), 0x8000000 < uVar7))
  goto LAB_180011cb3;
  FUN_18000f5a0(param_2,(ulonglong)uVar7 * param_3[1],param_3);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x15);
  local_res8 = 0xffffffffffffffff;
  uVar8 = *(ulonglong *)(*(longlong *)*param_3 + 0x10);
  if ((uVar8 < uVar5) || (param_1 + 0x1f == (longlong *)0x0)) goto LAB_180011c49;
  puVar3 = (undefined8 *)param_1[0x1f];
  uVar5 = ((uVar8 / uVar5 >> 1) - 2) * uVar5;
  puVar1 = puVar3;
  puVar4 = (undefined8 *)puVar3[1];
  if (*(char *)((longlong)puVar3[1] + 0x19) == '\0') {
    do {
      puVar2 = puVar4;
      if ((ulonglong)puVar2[4] < uVar5) {
        puVar4 = (undefined8 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar4 = (undefined8 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
    if ((puVar2 == puVar3) || (uVar5 < (ulonglong)puVar2[4])) goto LAB_180011c33;
  }
  else {
LAB_180011c33:
    puVar2 = puVar3;
  }
  if (puVar2 != puVar3) {
    local_res8 = puVar2[5];
    uVar8 = uVar8 & *(uint *)(param_1 + 0x15) - 1 | local_res8;
  }
LAB_180011c49:
  lVar6 = *(uint *)((longlong)param_1 + 0x14) * uVar8;
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)*param_1 + 8))
                     ((longlong *)*param_1,*param_2,lVar6,
                      param_3[1] * (ulonglong)*(uint *)((longlong)param_1 + 0x14),0);
  if ((int)puVar3 == 0) {
    uVar8 = (ulonglong)puVar3 & 0xffffffffffffff00;
  }
  else {
    if (-1 < (longlong)local_res8) {
      puVar3 = FUN_180006a50(param_1 + 0x21,local_18,lVar6,&local_res8);
    }
    uVar8 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
  return uVar8;
}




void FUN_180011cd0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_res8;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_2 + 8);
  plVar2 = (longlong *)(lVar1 + 0xd8);
  *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(lVar1 + 100) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(lVar1 + 0x80) = *(undefined4 *)(param_2 + 0x78);
  *(undefined1 *)(lVar1 + 0x84) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined1 *)(lVar1 + 0x85) = *(undefined1 *)(param_2 + 0x7d);
  *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(param_2 + 0x80);
  *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(param_2 + 0x88);
  *(undefined1 *)(lVar1 + 0x98) = *(undefined1 *)(param_2 + 0x90);
  *(undefined1 *)(lVar1 + 0x99) = *(undefined1 *)(param_2 + 0x91);
  *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(lVar1 + 0xa8) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(lVar1 + 0xac) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined4 *)(lVar1 + 0xb8) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(lVar1 + 0xd0) = *(undefined8 *)(param_2 + 200);
  if (plVar2 != (longlong *)(param_2 + 0xd0)) {
    FUN_180006420(plVar2);
    FUN_180011fe0(plVar2,(longlong *)(param_2 + 0xd0),local_res8);
  }
  plVar2 = (longlong *)(lVar1 + 0xe8);
  if (plVar2 != (longlong *)(param_2 + 0xe0)) {
    FUN_180006420(plVar2);
    FUN_180011fe0(plVar2,(longlong *)(param_2 + 0xe0),local_res8);
  }
  return;
}




ulonglong FUN_180011e90(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(*param_1 + 0xa8);
  uVar7 = (ulonglong)uVar2;
  plVar1 = (longlong *)(*param_1 + 0xf8);
  if (param_2 < uVar7) {
    return param_2;
  }
  if (plVar1 == (longlong *)0x0) {
    return param_2;
  }
  puVar3 = (undefined8 *)*plVar1;
  uVar7 = ((param_2 / uVar7 >> 1) - 2) * uVar7;
  puVar4 = puVar3;
  puVar6 = (undefined8 *)puVar3[1];
  if (*(char *)((longlong)puVar3[1] + 0x19) == '\0') {
    do {
      puVar5 = puVar6;
      if ((ulonglong)puVar5[4] < uVar7) {
        puVar6 = (undefined8 *)puVar5[2];
        puVar5 = puVar4;
      }
      else {
        puVar6 = (undefined8 *)*puVar5;
      }
      puVar4 = puVar5;
    } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
    if ((puVar5 != puVar3) && ((ulonglong)puVar5[4] <= uVar7)) goto LAB_180011efd;
  }
  puVar5 = puVar3;
LAB_180011efd:
  if (puVar5 != puVar3) {
    param_2 = param_2 & uVar2 - 1 | puVar5[5];
  }
  return param_2;
}




longlong * FUN_180011f20(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = FUN_1800064b0();
  *param_1 = lVar6;
  local_res8 = SUB81(param_1,0);
  puVar7 = FUN_1800121e0(param_1,*(undefined8 **)(*param_2 + 8),lVar6,local_res8);
  *(undefined8 **)(*param_1 + 8) = puVar7;
  param_1[1] = param_2[1];
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar3 + 0x19);
    plVar5 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar3 = plVar5;
      plVar5 = (longlong *)*plVar5;
    }
    *plVar2 = (longlong)plVar3;
    lVar6 = *(longlong *)(*param_1 + 8);
    lVar4 = *(longlong *)(lVar6 + 0x10);
    cVar1 = *(char *)(lVar4 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x19);
      lVar6 = lVar4;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    *(longlong *)(*param_1 + 0x10) = lVar6;
  }
  else {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}




void FUN_180011fe0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  puVar7 = FUN_180012140(param_1,*(undefined8 **)(*param_2 + 8),*param_1,param_3);
  *(undefined8 **)(*param_1 + 8) = puVar7;
  plVar2 = (longlong *)*param_1;
  param_1[1] = param_2[1];
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
    return;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar6 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x19);
    plVar3 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar2 = (longlong)plVar3;
  lVar4 = *(longlong *)(*param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x19);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
    lVar4 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*param_1 + 0x10) = lVar4;
  return;
}




void FUN_180012090(char *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong extraout_RAX;
  longlong lVar3;
  char *pcVar4;
  
  pcVar4 = param_1;
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    puVar1 = (undefined8 *)param_2[1];
    uVar2 = FUN_180007510(pcVar4,param_2,puVar1,param_3);
    lVar3 = *(longlong *)(param_1 + 8);
    pcVar4 = (char *)(0xaaaaaaaaaaaaaa9 - lVar3);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar3 = extraout_RAX;
    }
    *(longlong *)(param_1 + 8) = lVar3 + 1;
    param_2[1] = uVar2;
    *puVar1 = uVar2;
  }
  return;
}




undefined8 *
FUN_180012140(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_18000fbb0(param_1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_180012140(param_1,(undefined8 *)*param_2,puVar1,param_4);
    *puVar1 = puVar2;
    puVar2 = FUN_180012140(param_1,(undefined8 *)param_2[2],puVar1,param_4);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 *
FUN_1800121e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_180007800(param_1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_1800121e0(param_1,(undefined8 *)*param_2,puVar1,param_4);
    *puVar1 = puVar2;
    puVar2 = FUN_1800121e0(param_1,(undefined8 *)param_2[2],puVar1,param_4);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 * FUN_180012280(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800122b0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsDbr::vftable;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      *plVar1 = 0;
    }
    *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsDbrImpl>::vftable;
    return;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsDbrImpl>::vftable;
  return;
}




undefined8 * FUN_180012320(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsDbr::vftable;
  if ((plVar1 != (longlong *)0x0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0))
  {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsDbrImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180012390(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 uVar7;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = refs::RefsDbrImpl::vftable;
  param_1[3] = 0x200;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (((((param_2 != 0) && (0x1ff < param_3)) && (*(int *)(param_2 + 3) == 0x53466552)) &&
      ((*(int *)(param_2 + 0x10) == 0x53525346 && (*(char *)(param_2 + 0x28) == '\x03')))) &&
     (3 < *(byte *)(param_2 + 0x29))) {
    param_1[2] = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(uint *)(param_2 + 0x20);
    *(uint *)(param_1 + 3) = uVar3;
    iVar4 = *(int *)(param_2 + 0x24);
    *(int *)((longlong)param_1 + 0x1c) = iVar4;
    cVar1 = *(char *)(param_2 + 0x28);
    *(char *)(param_1 + 4) = cVar1;
    cVar2 = *(char *)(param_2 + 0x29);
    *(char *)((longlong)param_1 + 0x21) = cVar2;
    param_1[5] = *(undefined8 *)(param_2 + 0x38);
    uVar5 = *(ulonglong *)(param_2 + 0x40);
    uVar7 = 0;
    if ((((uVar3 == 0x100) || (uVar3 == 0x200)) ||
        ((uVar3 == 0x400 || ((uVar3 == 0x800 || (uVar3 == 0x1000)))))) &&
       ((uVar6 = iVar4 * uVar3, uVar6 == 0x1000 || (uVar6 == 0x10000)))) {
      if (cVar1 == '\x01') {
        *(int *)(param_1 + 6) = (int)(0x4000 / (ulonglong)uVar3);
        *(undefined1 *)(param_1 + 1) = 1;
        return param_1;
      }
      if (cVar1 == '\x03') {
        *(int *)(param_1 + 6) = iVar4;
        if (cVar2 == '\0') {
          *(undefined1 *)(param_1 + 1) = 1;
          *(undefined4 *)((longlong)param_1 + 0x34) = 0x1000;
          return param_1;
        }
        uVar7 = 1;
        *(int *)((longlong)param_1 + 0x34) = (int)(uVar5 / uVar6);
      }
    }
    *(undefined1 *)(param_1 + 1) = uVar7;
  }
  return param_1;
}




void FUN_1800124f0(undefined8 *param_1)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsDbrImpl>::vftable;
  return;
}




undefined8 * FUN_180012500(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsDbrImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180012530(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  char *local_res18 [2];
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = refs::RefsCheckPointImpl::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  pcVar1 = (char *)(param_1 + 4);
  local_res10 = 0;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  param_1[5] = 0;
  local_res18[0] = pcVar1;
  puVar2 = (undefined8 *)FUN_180006370(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  *(undefined8 **)pcVar1 = puVar2;
  FUN_180012090(pcVar1,(undefined8 *)*puVar2,&local_res10,local_res18);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}




undefined8 * FUN_1800125b0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  FUN_180005ef0(param_1 + 6);
  plVar2 = (longlong *)param_1[4];
  _Memory = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(undefined8 *)(param_1[4] + 8) = param_1[4];
  param_1[5] = 0;
  plVar2 = (longlong *)param_1[4];
  if (_Memory != plVar2) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      plVar2 = (longlong *)param_1[4];
      _Memory = plVar1;
    } while (plVar1 != plVar2);
  }
  free(plVar2);
  *param_1 = refs::RefsBaseDataImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180012650(undefined8 *param_1,int *param_2,ulonglong param_3)

{
  ushort uVar1;
  longlong ****pppplVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong ***ppplVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong ****pppplVar9;
  longlong ****pppplVar10;
  undefined8 uVar11;
  longlong ****pppplVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 *local_res20;
  longlong ***local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 *local_68;
  undefined **local_60;
  undefined8 *local_58;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = refs::RefsCheckPointImpl::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  pppplVar10 = (longlong ****)(param_1 + 4);
  local_res20 = (undefined8 *)0x0;
  *pppplVar10 = (longlong ***)0x0;
  param_1[5] = 0;
  local_80 = (longlong ***)pppplVar10;
  ppplVar5 = (longlong ***)FUN_180006370(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  *pppplVar10 = ppplVar5;
  FUN_180012090((char *)pppplVar10,*ppplVar5,&local_res20,(undefined8 *)&stack0x00000028);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_58 = (undefined8 *)0x0;
  local_60 = refs::RefsMetadataBlockHeader::vftable;
  local_res20 = (undefined8 *)operator_new(0x40);
  puVar6 = FUN_18000fc80(local_res20,param_2,param_3,2);
  if (*(char *)(puVar6 + 1) != '\0') {
    local_58 = puVar6;
    FUN_180005c00((char *)&local_80,(undefined8 *)(puVar6[7] + 0x10));
    if (pppplVar10 != &local_80) {
      ppplVar5 = *pppplVar10;
      pppplVar9 = (longlong ****)*ppplVar5;
      *ppplVar5 = (longlong **)ppplVar5;
      (*pppplVar10)[1] = (longlong **)*pppplVar10;
      param_1[5] = 0;
      pppplVar12 = (longlong ****)*pppplVar10;
      if (pppplVar9 != pppplVar12) {
        do {
          pppplVar2 = (longlong ****)*pppplVar9;
          free(pppplVar9);
          pppplVar12 = (longlong ****)*pppplVar10;
          pppplVar9 = pppplVar2;
        } while (pppplVar2 != pppplVar12);
      }
      *pppplVar10 = local_80;
      param_1[5] = local_78;
      local_80 = (longlong ***)pppplVar12;
    }
    pppplVar10 = (longlong ****)*local_80;
    *local_80 = (longlong **)local_80;
    local_80[1] = (longlong **)local_80;
    local_78 = 0;
    if (pppplVar10 != (longlong ****)local_80) {
      do {
        pppplVar9 = (longlong ****)*pppplVar10;
        free(pppplVar10);
        pppplVar10 = pppplVar9;
      } while (pppplVar9 != (longlong ****)local_80);
    }
    uVar15 = 0;
    free(local_80);
    uVar14 = (ulonglong)*(uint *)(puVar6 + 4);
    uVar1 = *(ushort *)((longlong)param_2 + uVar14 + 4);
    if ((uVar1 == 3) && (3 < *(ushort *)((longlong)param_2 + uVar14 + 6))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      *(uint *)(param_1 + 3) = (uint)uVar1;
      *(uint *)((longlong)param_1 + 0x1c) = (uint)*(ushort *)((longlong)param_2 + uVar14 + 6);
      lVar7 = 0x58;
      if (*(ushort *)((longlong)param_2 + uVar14 + 6) < 0xe) {
        lVar7 = 0x44;
      }
      if (lVar7 + uVar14 <= param_3) {
        local_res20 = (undefined8 *)(lVar7 + uVar14 + (longlong)param_2);
        uVar13 = 0;
        uVar8 = *(uint *)((longlong)param_2 + uVar14 + 0x40);
        if (uVar8 != 0) {
          do {
            uVar15 = (uint)uVar13;
            uVar13 = (ulonglong)*(uint *)((longlong)local_res20 + uVar13 * 4);
            if (param_3 < uVar13 + 0x30) break;
            local_70 = refs::RefsMetadataBlockReference::vftable;
            uVar11 = 0x40;
            puVar6 = (undefined8 *)operator_new(0x40);
            *(undefined1 *)(puVar6 + 1) = 0;
            *puVar6 = refs::RefsMetadataBlockRefrenceImpl::vftable;
            pppplVar10 = (longlong ****)(puVar6 + 2);
            *pppplVar10 = (longlong ***)0x0;
            puVar6[3] = 0;
            local_80 = (longlong ***)pppplVar10;
            ppplVar5 = (longlong ***)FUN_180006370(uVar11,(undefined8 *)0x0,(undefined8 *)0x0);
            *pppplVar10 = ppplVar5;
            puVar6[4] = 0;
            *(undefined1 *)(puVar6 + 5) = 0;
            *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
            puVar6[7] = 0;
            FUN_18000ff60((longlong)puVar6,(undefined8 *)(uVar13 + (longlong)param_2),param_3);
            local_68 = puVar6;
            if (*(char *)(puVar6 + 1) != '\0') {
              *(uint *)((longlong)puVar6 + 0x2c) = uVar15;
              puVar3 = (undefined8 *)param_1[7];
              if ((undefined8 *)param_1[8] == puVar3) {
                FUN_180012bf0(param_1 + 6,puVar3,&local_70);
                puVar6 = local_68;
              }
              else {
                FUN_180010260(puVar3,&local_70);
                param_1[7] = param_1[7] + 0x10;
              }
            }
            if (puVar6 != (undefined8 *)0x0) {
              (**(code **)*puVar6)(puVar6,1);
              local_68 = (undefined8 *)0x0;
            }
            uVar15 = uVar15 + 1;
            uVar13 = (ulonglong)uVar15;
            uVar8 = *(uint *)((longlong)param_2 + uVar14 + 0x40);
          } while (uVar15 < uVar8);
        }
        *(bool *)(param_1 + 1) = uVar15 == uVar8;
      }
    }
  }
  return param_1;
}




undefined8 * FUN_180012990(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsCheckPoint::vftable;
  if ((plVar1 != (longlong *)0x0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0))
  {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsCheckPointImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180012a00(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsCheckPoint::vftable;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      *plVar1 = 0;
    }
    *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsCheckPointImpl>::vftable;
    return;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsCheckPointImpl>::vftable;
  return;
}




ulonglong * FUN_180012a70(ulonglong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar2 = FUN_180012b40(param_1,param_2[1] - *param_2 >> 4);
  if ((char)pvVar2 != '\0') {
    puVar1 = (undefined8 *)param_2[1];
    puVar4 = (undefined8 *)*param_1;
    for (puVar3 = (undefined8 *)*param_2; puVar3 != puVar1; puVar3 = puVar3 + 2) {
      FUN_180010260(puVar4,puVar3);
      puVar4 = puVar4 + 2;
    }
    param_1[1] = (ulonglong)puVar4;
  }
  return param_1;
}




void FUN_180012b00(undefined8 *param_1)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsCheckPointImpl>::vftable;
  return;
}




undefined8 * FUN_180012b10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsCheckPointImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void * FUN_180012b40(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pvVar3 = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0xfffffffffffffff < param_2) {
      FUN_1800062c0();
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
    uVar5 = param_2 * 0x10;
    if (uVar5 < 0x1000) {
      if (uVar5 != 0) {
        pvVar3 = operator_new(uVar5);
      }
    }
    else {
      uVar4 = uVar5 + 0x27;
      if (uVar4 <= uVar5) {
        uVar4 = 0xffffffffffffffff;
      }
      pvVar2 = operator_new(uVar4);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 - 8) = pvVar2;
    }
    *param_1 = (ulonglong)pvVar3;
    param_1[1] = (ulonglong)pvVar3;
    pvVar3 = (void *)CONCAT71((int7)(*param_1 >> 8),1);
    param_1[2] = uVar5 + *param_1;
  }
  return pvVar3;
}




longlong FUN_180012bf0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar6 = *param_1;
  lVar3 = param_1[1] - lVar6 >> 4;
  if (lVar3 == 0xfffffffffffffff) {
    FUN_1800062c0();
    pcVar2 = (code *)swi(3);
    lVar6 = (*pcVar2)();
    return lVar6;
  }
  uVar7 = param_1[2] - lVar6 >> 4;
  uVar1 = lVar3 + 1;
  uVar4 = uVar1;
  if ((uVar7 <= 0xfffffffffffffff - (uVar7 >> 1)) && (uVar4 = (uVar7 >> 1) + uVar7, uVar4 < uVar1))
  {
    uVar4 = uVar1;
  }
  uVar7 = uVar4 * 0x10;
  if (uVar4 < 0x1000000000000000) {
    if (0xfff < uVar7) goto LAB_180012c93;
    if (uVar7 == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = (undefined8 *)operator_new(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
LAB_180012c93:
    uVar8 = uVar7 + 0x27;
    if (uVar8 <= uVar7) {
      uVar8 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(uVar8);
    if (pvVar5 == (void *)0x0) goto LAB_180012e10;
    puVar12 = (undefined8 *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    puVar12[-1] = pvVar5;
  }
  uVar7 = (longlong)param_2 - lVar6 & 0xfffffffffffffff0;
  FUN_180010260((undefined8 *)((longlong)puVar12 + uVar7),param_3);
  puVar9 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  puVar11 = puVar12;
  if (param_2 == puVar9) {
    for (; puVar10 != puVar9; puVar10 = puVar10 + 2) {
      FUN_180010260(puVar11,puVar10);
      puVar11 = puVar11 + 2;
    }
  }
  else {
    if (puVar10 != param_2) {
      do {
        FUN_180010260(puVar11,puVar10);
        puVar11 = puVar11 + 2;
        puVar10 = puVar10 + 2;
      } while (puVar10 != param_2);
      puVar9 = (undefined8 *)param_1[1];
    }
    if (param_2 != puVar9) {
      lVar6 = (uVar7 + 0x10) - (longlong)param_2;
      do {
        FUN_180010260((undefined8 *)((longlong)param_2 + (longlong)puVar12 + lVar6),param_2);
        param_2 = param_2 + 2;
      } while (param_2 != puVar9);
    }
  }
  puVar9 = (undefined8 *)*param_1;
  if (puVar9 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)param_1[1];
    if (puVar9 != puVar10) {
      do {
        (**(code **)*puVar9)(puVar9,0);
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar10);
      puVar9 = (undefined8 *)*param_1;
    }
    puVar10 = puVar9;
    if ((0xfff < (param_1[2] - (longlong)puVar9 & 0xfffffffffffffff0U)) &&
       (puVar10 = (undefined8 *)puVar9[-1],
       0x1f < (ulonglong)((longlong)puVar9 + (-8 - (longlong)puVar10)))) {
LAB_180012e10:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(puVar10);
  }
  *param_1 = (longlong)puVar12;
  param_1[1] = (longlong)(puVar12 + uVar1 * 2);
  param_1[2] = (longlong)(puVar12 + uVar4 * 2);
  return *param_1 + uVar7;
}




void FUN_180012e20(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar6 = (longlong)param_3 - (longlong)param_2 >> 4;
  uVar5 = (longlong)puVar2 - (longlong)puVar3 >> 4;
  uVar7 = (longlong)(param_1[2] - (longlong)puVar3) >> 4;
  if (uVar7 < uVar6) {
    if (0xfffffffffffffff < uVar6) {
      FUN_1800062c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar5 = uVar6;
    if ((uVar7 <= 0xfffffffffffffff - (uVar7 >> 1)) && (uVar5 = (uVar7 >> 1) + uVar7, uVar5 < uVar6)
       ) {
      uVar5 = uVar6;
    }
    if (puVar3 != (undefined8 *)0x0) {
      if (puVar3 != puVar2) {
        do {
          (**(code **)*puVar3)(puVar3,0);
          puVar3 = puVar3 + 2;
        } while (puVar3 != puVar2);
        puVar3 = (undefined8 *)*param_1;
      }
      puVar2 = puVar3;
      if ((0xfff < uVar7 << 4) &&
         (puVar2 = (undefined8 *)puVar3[-1],
         0x1f < (ulonglong)((longlong)puVar3 + (-8 - (longlong)puVar2)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(puVar2);
    }
    FUN_180012b40(param_1,uVar5);
    puVar3 = (undefined8 *)*param_1;
    if (param_2 != param_3) {
      do {
        FUN_180010260(puVar3,param_2);
        puVar3 = puVar3 + 2;
        param_2 = param_2 + 2;
      } while (param_2 != param_3);
      param_1[1] = (ulonglong)puVar3;
      return;
    }
  }
  else {
    if (uVar6 <= uVar5) {
      FUN_180012fe0((longlong)param_2,(longlong)param_3,(longlong)puVar3);
      puVar2 = (undefined8 *)param_1[1];
      for (puVar4 = puVar3 + uVar6 * 2; puVar4 != puVar2; puVar4 = puVar4 + 2) {
        (**(code **)*puVar4)(puVar4,0);
      }
      param_1[1] = (ulonglong)(puVar3 + uVar6 * 2);
      return;
    }
    puVar2 = param_2 + uVar5 * 2;
    FUN_180012fe0((longlong)param_2,(longlong)puVar2,(longlong)puVar3);
    puVar3 = (undefined8 *)param_1[1];
    for (; puVar2 != param_3; puVar2 = puVar2 + 2) {
      FUN_180010260(puVar3,puVar2);
      puVar3 = puVar3 + 2;
    }
  }
  param_1[1] = (ulonglong)puVar3;
  return;
}




longlong FUN_180012fe0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    lVar6 = param_1 - param_3;
    lVar5 = param_3 - param_1;
    do {
      if (param_3 != param_1) {
        plVar1 = (longlong *)(lVar5 + 8 + param_1);
        lVar2 = *(longlong *)((longlong)plVar1 + lVar6);
        lVar3 = *plVar1;
        *(undefined1 *)(lVar3 + 8) = *(undefined1 *)(lVar2 + 8);
        if ((longlong *)(lVar3 + 0x10) != (longlong *)(lVar2 + 0x10)) {
          puVar4 = *(undefined8 **)(lVar2 + 0x10);
          FUN_18000f460((longlong *)(lVar3 + 0x10),(undefined8 *)*puVar4,puVar4);
        }
        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        *(undefined1 *)(lVar3 + 0x28) = *(undefined1 *)(lVar2 + 0x28);
        *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(lVar2 + 0x2c);
        *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
        *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
      }
      param_3 = param_3 + 0x10;
      param_1 = param_1 + 0x10;
    } while (param_1 != param_2);
  }
  return param_3;
}




undefined8 FUN_1800130b0(void)

{
  return 0xffffffffffffffff;
}




void FUN_1800130c0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(code **)(*param_2 + 0x40) == FUN_18000afe0) {
    *(int *)(param_1 + 8) = (int)param_2[5];
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}




void FUN_180013110(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




undefined4 FUN_180013120(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_180013130(undefined8 *param_1)

{
  *param_1 = IFileProperties::vftable;
  return;
}




undefined8 * FUN_180013140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IFileProperties::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180013170(undefined8 *param_1,uint param_2)

{
  FUN_180004600((longlong)param_1 + 0x11);
  *param_1 = IFileProperties::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined4 FUN_1800131c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 99);
}




void FUN_1800131d0(longlong param_1,void *param_2)

{
  size_t sVar1;
  
  if (param_2 != (void *)0x0) {
    sVar1 = 0xffffffffffffffff;
    do {
      sVar1 = sVar1 + 1;
    } while (*(char *)((longlong)param_2 + sVar1) != '\0');
    FUN_180006170((longlong *)(param_1 + 0x53),param_2,sVar1);
    return;
  }
  return;
}




undefined8 * FUN_180013200(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 99) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x53);
    if (0xf < *(ulonglong *)(param_1 + 0x6b)) {
      return (undefined8 *)*puVar1;
    }
  }
  return puVar1;
}




undefined8 FUN_180013220(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x11);
}




undefined2 FUN_180013230(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x39);
}




void FUN_180013240(longlong param_1,ushort param_2)

{
  *(uint *)(param_1 + 0x39) = (uint)param_2;
  return;
}




undefined1 * FUN_180013250(undefined8 param_1,undefined1 *param_2)

{
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *param_2 = 0;
  return param_2;
}




undefined4 * FUN_180013270(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x19);
  param_2[1] = (int)((ulonglong)*(undefined8 *)(param_1 + 0x19) >> 0x20);
  return param_2;
}




undefined4 * FUN_180013290(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x21);
  param_2[1] = (int)((ulonglong)*(undefined8 *)(param_1 + 0x21) >> 0x20);
  return param_2;
}




undefined4 * FUN_1800132b0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x29);
  param_2[1] = (int)((ulonglong)*(undefined8 *)(param_1 + 0x29) >> 0x20);
  return param_2;
}




undefined2 FUN_1800132d0(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x3d);
}




void FUN_1800132e0(longlong param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x3d) = param_2;
  return;
}




short * FUN_1800132f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ushort *puVar2;
  char *pcVar3;
  undefined8 *_Memory;
  longlong *plVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar8;
  ushort *puVar9;
  longlong *plVar10;
  longlong *plStack_20;
  longlong lStack_18;
  ushort *puVar7;
  
  puVar2 = *(ushort **)(param_1 + 0x73);
  if (puVar2 == (ushort *)0x0) {
    return (short *)0x0;
  }
  pcVar3 = *(char **)(puVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)0x0;
    uVar6 = 0;
    cVar1 = *pcVar3;
    puVar9 = puVar2;
    puVar5 = puVar8;
    puVar7 = puVar8;
    while (cVar1 != '\0') {
      uVar6 = (int)puVar7 + (*(byte *)((longlong)puVar5 + (longlong)pcVar3) & 0xf) +
              (*(byte *)((longlong)puVar5 + (longlong)pcVar3) >> 4) + 1;
      puVar7 = (ushort *)(ulonglong)uVar6;
      puVar9 = (ushort *)(longlong)(int)uVar6;
      puVar5 = puVar9;
      cVar1 = *(char *)((longlong)puVar9 + (longlong)pcVar3);
    }
    if (*puVar2 == 0) {
      puVar8 = (ushort *)operator_new(0x48);
      FUN_180015c20((undefined8 *)puVar8);
      *(undefined ***)puVar8 = CNoneResidentNTFSDataRunList::vftable;
      FUN_180016090((longlong)puVar8,*(longlong *)(puVar2 + 4),uVar6 + 1);
    }
    else {
      plStack_20 = (longlong *)0x0;
      lStack_18 = 0;
      plStack_20 = (longlong *)FUN_180006370(puVar9,(undefined8 *)0x0,(undefined8 *)0x0);
      FUN_1800176c0(*(longlong *)(puVar2 + 4),uVar6 + 1,(longlong)&plStack_20);
      if (lStack_18 != 0) {
        _Memory = *(undefined8 **)(*plStack_20 + 0x10);
        puVar8 = (ushort *)operator_new(0x50);
        FUN_180015c20((undefined8 *)puVar8);
        *(undefined ***)puVar8 = CRefsResidentDataRunList::vftable;
        puVar8[0x24] = 0;
        puVar8[0x25] = 0;
        FUN_180015af0((longlong)puVar8,*_Memory,*(uint *)(_Memory + 2),(uint)*puVar2);
        free(_Memory);
        plVar10 = (longlong *)*plStack_20;
        *plStack_20 = (longlong)plStack_20;
        plStack_20[1] = (longlong)plStack_20;
        lStack_18 = 0;
        if (plVar10 != plStack_20) {
          do {
            plVar4 = (longlong *)*plVar10;
            free(plVar10);
            plVar10 = plVar4;
          } while (plVar4 != plStack_20);
        }
      }
      plVar10 = (longlong *)*plStack_20;
      *plStack_20 = (longlong)plStack_20;
      plStack_20[1] = (longlong)plStack_20;
      lStack_18 = 0;
      if (plVar10 != plStack_20) {
        do {
          plVar4 = (longlong *)*plVar10;
          free(plVar10);
          plVar10 = plVar4;
        } while (plVar4 != plStack_20);
      }
      free(plStack_20);
    }
  }
  return (short *)puVar8;
}




undefined8 FUN_180013300(void)

{
  return 0xff;
}




undefined1 FUN_180013310(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3f);
}




undefined1 FUN_180013320(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x3f);
  *(undefined1 *)(param_1 + 0x3f) = param_2;
  return uVar1;
}




undefined8 FUN_180013330(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  short local_res10 [4];
  int local_res18 [2];
  undefined4 local_res20 [2];
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  local_res10[0] = *(short *)(param_1 + 99);
  (**(code **)(*param_2 + 0x78))(param_2,local_res10,2);
  if (local_res10[0] != 0) {
    plVar4 = (longlong *)(param_1 + 0x53);
    if (0xf < *(ulonglong *)(param_1 + 0x6b)) {
      plVar4 = (longlong *)*plVar4;
    }
    (**(code **)(*param_2 + 0x78))(param_2,plVar4,local_res10[0]);
  }
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x11,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x39,4);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x19,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x21,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x29,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x3d,1);
  if (*(longlong *)(param_1 + 0x73) != 0) {
    local_res20[0] = 1;
    (**(code **)(*param_2 + 0x78))(param_2,local_res20);
    lVar1 = *(longlong *)(param_1 + 0x73);
    local_res18[0] = 0;
    pcVar2 = *(char **)(lVar1 + 8);
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 != '\0') {
        lVar3 = 0;
        do {
          local_res18[0] =
               ((byte)pcVar2[lVar3] >> 4) + 1 + ((byte)pcVar2[lVar3] & 0xf) + local_res18[0];
          lVar3 = (longlong)local_res18[0];
        } while (pcVar2[lVar3] != '\0');
      }
      local_res18[0] = local_res18[0] + 1;
    }
    (**(code **)(*param_2 + 0x78))(param_2,local_res18,4);
    (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(lVar1 + 8),local_res18[0]);
    (**(code **)(*param_2 + 0x78))(param_2,lVar1,2);
    return 1;
  }
  local_res18[0] = 0;
  (**(code **)(*param_2 + 0x78))(param_2,local_res18,4);
  return 1;
}




void FUN_1800134e0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  int *piVar3;
  size_t sVar4;
  undefined8 uVar6;
  undefined1 auStack_148 [32];
  short local_128 [2];
  int local_124 [3];
  char local_118 [256];
  ulonglong local_18;
  size_t sVar5;
  
  local_18 = DAT_180021010 ^ (ulonglong)auStack_148;
  if (param_2 != (longlong *)0x0) {
    puVar2 = (undefined2 *)0x0;
    local_128[0] = 0;
    (**(code **)(*param_2 + 0x70))(param_2,local_128,2);
    if (local_128[0] != 0) {
      memset(local_118,0,0x100);
      (**(code **)(*param_2 + 0x70))(param_2,local_118,local_128[0]);
      sVar5 = 0xffffffffffffffff;
      do {
        sVar4 = sVar5 + 1;
        lVar1 = sVar5 + 1;
        sVar5 = sVar4;
      } while (local_118[lVar1] != '\0');
      FUN_180006170((longlong *)(param_1 + 0x53),local_118,sVar4);
    }
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x11,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x39,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x19,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x21,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x29,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x3d,1);
    piVar3 = local_124;
    uVar6 = 4;
    local_124[0] = 0;
    (**(code **)(*param_2 + 0x70))(param_2);
    if (local_124[0] != 0) {
      puVar2 = FUN_180015670(param_2,piVar3,uVar6,param_4);
    }
    *(undefined2 **)(param_1 + 0x73) = puVar2;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
  return;
}




undefined8 * FUN_180013660(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x8b);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = refs::RefsFileProperties::vftable;
  FUN_180004570((undefined8 *)((longlong)puVar1 + 0x11));
  return puVar1;
}




undefined8 FUN_1800136b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x19);
}




undefined8 * FUN_1800136c0(longlong param_1,undefined8 *param_2)

{
  FUN_180013700(param_2,(undefined8 *)(param_1 + 0x53));
  return param_2;
}




undefined8 FUN_1800136e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x21);
}




undefined1 FUN_1800136f0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x42);
}




undefined8 * FUN_180013700(undefined8 *param_1,undefined8 *param_2)

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




void FUN_1800137e0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong extraout_RAX;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)*param_1;
  pcVar6 = (char *)param_1;
  for (; param_2 != param_3; param_2 = (undefined8 *)*param_2) {
    if (plVar8 == *(longlong **)pcVar6) goto LAB_180013840;
    FUN_180013920(pcVar6,(longlong)plVar8,param_2 + 2);
    plVar8 = (longlong *)*plVar8;
  }
LAB_18001388f:
  plVar3 = (longlong *)*param_1;
  plVar7 = (longlong *)*plVar3;
  if (plVar8 == plVar7) {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*param_1 + 8) = *param_1;
    param_1[1] = 0;
    if (plVar7 != (longlong *)*param_1) {
      do {
        plVar8 = (longlong *)*plVar7;
        free(plVar7);
        plVar7 = plVar8;
      } while (plVar8 != (longlong *)*param_1);
    }
  }
  else {
    while (plVar8 != plVar3) {
      plVar7 = (longlong *)*plVar8;
      *(longlong **)plVar8[1] = plVar7;
      *(longlong *)(*plVar8 + 8) = plVar8[1];
      param_1[1] = param_1[1] + -1;
      free(plVar8);
      plVar8 = plVar7;
    }
  }
  return;
LAB_180013840:
  for (; param_2 != param_3; param_2 = (undefined8 *)*param_2) {
    puVar1 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)puVar1[1];
    uVar4 = FUN_18000fad0(pcVar6,puVar1,puVar2,param_2 + 2);
    lVar5 = param_1[1];
    pcVar6 = (char *)(0x666666666666665 - lVar5);
    if ((longlong *)pcVar6 == (longlong *)0x0) {
      pcVar6 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar5 = extraout_RAX;
    }
    param_1[1] = lVar5 + 1;
    puVar1[1] = uVar4;
    *puVar2 = uVar4;
  }
  goto LAB_18001388f;
}




void FUN_180013920(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3[1];
  *(undefined8 *)(param_2 + 0x10) = *param_3;
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  *(undefined8 *)(param_2 + 0x20) = param_3[2];
  return;
}




undefined8 * FUN_180013940(undefined8 *param_1,uint param_2)

{
  FUN_180005de0(param_1 + 3);
  free((void *)param_1[3]);
  *param_1 = refs::RefsBaseDataImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 *
FUN_1800139a0(undefined8 *param_1,longlong param_2,ulonglong param_3,uint param_4,undefined8 param_5
             ,undefined8 param_6)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong **pplVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  int local_98;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined8 *local_58;
  undefined8 local_50 [3];
  
  local_88 = 0xfffffffffffffffe;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = refs::RefsNodeHeaderImpl::vftable;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar19 = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  puVar11 = param_1 + 3;
  *puVar11 = 0;
  param_1[4] = 0;
  local_90 = puVar11;
  uVar10 = FUN_180006330(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  *puVar11 = uVar10;
  param_1[5] = param_5;
  if (((param_2 != 0) && (param_4 + 0x28 <= param_3)) &&
     (puVar16 = (uint *)((ulonglong)param_4 + param_2), puVar16 != (uint *)0x0)) {
    bVar1 = *(byte *)((longlong)puVar16 + 0xd);
    if (((0x27 < *puVar16) && (*puVar16 < param_3)) &&
       ((0x27 < puVar16[1] && (puVar16[1] < param_3)))) {
      *(char *)(param_1 + 2) = (char)puVar16[3];
      *(uint *)((longlong)param_1 + 0x14) = (uint)bVar1;
      uVar18 = (ulonglong)puVar16[4];
      if (((0x27 < puVar16[4]) && (uVar18 < param_3)) &&
         ((puVar16[8] == 0 || (puVar16[8] <= param_3)))) {
        local_80 = (longlong *)0x0;
        local_78 = 0;
        local_80 = (longlong *)FUN_1800064b0();
        local_70 = (longlong *)0x0;
        local_68 = 0;
        local_70 = (longlong *)FUN_180014530();
        if (puVar16[5] != 0) {
          while (uVar18 < param_3) {
            uVar3 = *(ushort *)(uVar18 + (longlong)puVar16);
            uVar18 = (ulonglong)((int)uVar18 + 4);
            if (((uint)uVar3 < *puVar16) || (uVar4 = puVar16[1], uVar4 <= uVar3)) break;
            if (param_3 <= *(uint *)((longlong)puVar16 + (ulonglong)uVar3) + (uint)uVar3) break;
            local_60 = refs::RefsNodeRecord::vftable;
            puVar11 = (undefined8 *)operator_new(0x78);
            uVar17 = (ulonglong)uVar4;
            puVar11 = FUN_18000b210(puVar11,(uint *)((longlong)puVar16 + (ulonglong)uVar3),uVar17);
            local_58 = puVar11;
            if (*(char *)(puVar11 + 1) != '\0') {
              puVar11[0xd] = param_5;
              puVar11[0xe] = param_6;
              iVar15 = param_4 + uVar3;
              local_94 = *(undefined4 *)((longlong)puVar11 + 100);
              local_98 = iVar15;
              plVar12 = (longlong *)FUN_1800146a0(&local_80,&local_98);
              pplVar14 = &local_80;
              FUN_1800146d0((longlong *)pplVar14,local_50,uVar17,(uint *)((longlong)plVar12 + 0x1c),
                            plVar12);
              puVar8 = local_90;
              *(int *)(puVar11 + 0xc) = iVar15;
              puVar11 = (undefined8 *)*local_90;
              plVar12 = (longlong *)puVar11[1];
              lVar13 = FUN_1800145c0(pplVar14,puVar11,plVar12,&local_60);
              lVar5 = puVar8[1];
              if (lVar5 == 0x7fffffffffffffe) {
                std::_Xlength_error("list<T> too long");
                pcVar7 = (code *)swi(3);
                puVar11 = (undefined8 *)(*pcVar7)();
                return puVar11;
              }
              puVar8[1] = lVar5 + 1;
              puVar11[1] = lVar13;
              *plVar12 = lVar13;
            }
            if (local_58 != (undefined8 *)0x0) {
              (**(code **)*local_58)(local_58,1);
              local_58 = (undefined8 *)0x0;
            }
            local_60 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
            uVar19 = uVar19 + 1;
            if (puVar16[5] <= uVar19) break;
          }
        }
        FUN_180013e60((longlong)param_1,(longlong *)&local_80,param_2,(uint)param_3,param_6,*puVar16
                     );
        plVar9 = local_70;
        *(undefined1 *)(param_1 + 1) = 1;
        cVar2 = *(char *)(local_70[1] + 0x19);
        plVar12 = (longlong *)local_70[1];
        while (cVar2 == '\0') {
          FUN_180014560(&local_70,(longlong *)plVar12[2]);
          plVar6 = (longlong *)*plVar12;
          free(plVar12);
          plVar12 = plVar6;
          cVar2 = *(char *)((longlong)plVar6 + 0x19);
        }
        local_70[1] = (longlong)plVar9;
        *local_70 = (longlong)plVar9;
        local_70[2] = (longlong)plVar9;
        local_68 = 0;
        free(local_70);
        plVar9 = local_80;
        cVar2 = *(char *)(local_80[1] + 0x19);
        plVar12 = (longlong *)local_80[1];
        while (cVar2 == '\0') {
          FUN_180005d70(&local_80,(longlong *)plVar12[2]);
          plVar6 = (longlong *)*plVar12;
          free(plVar12);
          plVar12 = plVar6;
          cVar2 = *(char *)((longlong)plVar6 + 0x19);
        }
        local_80[1] = (longlong)plVar9;
        *local_80 = (longlong)plVar9;
        local_80[2] = (longlong)plVar9;
        local_78 = 0;
        free(local_80);
      }
    }
  }
  return param_1;
}




void FUN_180013d20(longlong *param_1)

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
      FUN_180005d70(param_1,(longlong *)_Memory[2]);
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
  free((void *)*param_1);
  return;
}




void FUN_180013dc0(longlong *param_1)

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
      FUN_180014560(param_1,(longlong *)_Memory[2]);
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
  free((void *)*param_1);
  return;
}




void FUN_180013e60(longlong param_1,longlong *param_2,longlong param_3,uint param_4,
                  undefined8 param_5,uint param_6)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  longlong *_Memory;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  uint *puVar14;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  
  if (param_3 == 0) {
    return;
  }
  local_58 = 0xfffffffffffffffe;
  if (param_4 == 0) {
    return;
  }
  local_50 = (longlong *)0x0;
  local_48 = 0;
  _Memory = (longlong *)FUN_180006370(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  plVar10 = (longlong *)*param_2;
  plVar9 = (longlong *)*plVar10;
  local_50 = _Memory;
  if (plVar9 == plVar10) {
    local_68 = (undefined **)CONCAT44(param_4,param_6);
    plVar13 = (longlong *)_Memory[1];
    lVar5 = FUN_180007510(plVar10,_Memory,plVar13,&local_68);
    if (local_48 == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar3 = *(int *)((longlong)plVar9 + 0x1c) - param_6;
    if (iVar3 == 0) goto LAB_180013f71;
    local_68 = (undefined **)CONCAT44(iVar3,param_6);
    plVar13 = (longlong *)_Memory[1];
    lVar5 = FUN_180007510((ulonglong)param_6,_Memory,plVar13,&local_68);
    if (local_48 == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  do {
    _Memory[1] = lVar5;
    *plVar13 = lVar5;
    local_48 = local_48 + 1;
    _Memory = local_50;
LAB_180013f71:
    do {
      if (plVar9 == (longlong *)*param_2) {
        plVar10 = (longlong *)*_Memory;
        if (plVar10 != _Memory) goto LAB_180014030;
        goto LAB_1800141a9;
      }
      uVar8 = (int)plVar9[4] + *(int *)((longlong)plVar9 + 0x1c);
      plVar10 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar10 + 0x19);
        plVar9 = plVar10;
        plVar10 = (longlong *)*plVar10;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar10 + 0x19);
          plVar9 = plVar10;
          plVar10 = (longlong *)*plVar10;
        }
      }
      else {
        cVar1 = *(char *)(plVar9[1] + 0x19);
        plVar13 = (longlong *)plVar9[1];
        plVar10 = plVar9;
        while ((plVar9 = plVar13, cVar1 == '\0' && (plVar10 == (longlong *)plVar9[2]))) {
          cVar1 = *(char *)(plVar9[1] + 0x19);
          plVar13 = (longlong *)plVar9[1];
          plVar10 = plVar9;
        }
      }
      uVar7 = param_4;
      if (plVar9 != (longlong *)*param_2) {
        uVar7 = *(uint *)((longlong)plVar9 + 0x1c);
      }
    } while (uVar7 <= uVar8);
    local_68 = (undefined **)CONCAT44(uVar7 - uVar8,uVar8);
    plVar13 = (longlong *)_Memory[1];
    lVar5 = FUN_180007510((ulonglong)(uVar7 - uVar8),_Memory,plVar13,&local_68);
    if (local_48 == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
LAB_180014030:
  uVar11 = plVar10[2];
  uVar8 = (uint)uVar11;
  uVar4 = (int)(uVar11 >> 0x20) + uVar8;
  uVar7 = param_4;
  if (uVar4 < param_4) {
    uVar7 = uVar4;
  }
  while (uVar8 < uVar7) {
    iVar3 = (int)uVar11;
    puVar14 = (uint *)(param_3 + (uVar11 & 0xffffffff));
    if ((char)*puVar14 == '\0') {
LAB_180014183:
      iVar12 = 1;
    }
    else {
      local_68 = refs::RefsNodeRecord::vftable;
      puVar6 = (undefined8 *)operator_new(0x78);
      local_60 = FUN_18000b210(puVar6,puVar14,(ulonglong)(param_4 - iVar3));
      if (*(char *)(local_60 + 1) == '\0') {
LAB_18001415f:
        (**(code **)*local_60)(local_60,1);
        local_60 = (undefined8 *)0x0;
        local_68 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
        goto LAB_180014183;
      }
      if (*(char *)(local_60 + 0xb) == '\0') {
        if ((((ulonglong)(local_60[4] - local_60[3]) < 8) ||
            ((ulonglong)(local_60[7] - local_60[6]) < 8)) ||
           (((local_60[7] - local_60[6] | local_60[4] - local_60[3]) & 1) != 0)) goto LAB_18001415f;
      }
      if (uVar7 - iVar3 < *(uint *)((longlong)local_60 + 100)) goto LAB_18001415f;
      if (*(char *)(local_60 + 1) != '\0') {
        *(undefined1 *)((longlong)local_60 + 0x59) = 1;
        local_60[0xd] = *(undefined8 *)(param_1 + 0x28);
        local_60[0xe] = param_5;
        *(int *)(local_60 + 0xc) = iVar3;
        puVar6 = *(undefined8 **)(param_1 + 0x18);
        plVar9 = (longlong *)puVar6[1];
        lVar5 = FUN_1800145c0(local_60,puVar6,plVar9,&local_68);
        if (*(longlong *)(param_1 + 0x20) == 0x7fffffffffffffe) {
          std::_Xlength_error("list<T> too long");
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
        puVar6[1] = lVar5;
        *plVar9 = lVar5;
      }
      iVar12 = *(int *)((longlong)local_60 + 100);
      (**(code **)*local_60)(local_60,1);
      local_60 = (undefined8 *)0x0;
      local_68 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeRecordImpl>::vftable;
    }
    uVar8 = iVar12 + iVar3;
    uVar11 = (ulonglong)uVar8;
  }
  plVar10 = (longlong *)*plVar10;
  if (plVar10 == _Memory) {
LAB_1800141a9:
    plVar10 = (longlong *)*_Memory;
    *_Memory = (longlong)_Memory;
    _Memory[1] = (longlong)_Memory;
    while (plVar10 != _Memory) {
      plVar9 = (longlong *)*plVar10;
      free(plVar10);
      plVar10 = plVar9;
    }
    free(_Memory);
    return;
  }
  goto LAB_180014030;
}




undefined8 * FUN_180014210(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsNodeHeader::vftable;
  if ((plVar1 != (longlong *)0x0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0))
  {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeHeaderImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 *
FUN_180014280(undefined8 *param_1,longlong param_2,ulonglong param_3,uint param_4,undefined8 param_5
             ,undefined8 param_6)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = refs::RefsNodeHeader::vftable;
  puVar1 = (undefined8 *)operator_new(0x30);
  puVar1 = FUN_1800139a0(puVar1,param_2,param_3,param_4,param_5,param_6);
  param_1[1] = puVar1;
  return param_1;
}




void FUN_180014310(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsNodeHeader::vftable;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      *plVar1 = 0;
    }
    *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeHeaderImpl>::vftable;
    return;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeHeaderImpl>::vftable;
  return;
}




undefined8 * FUN_180014380(undefined8 *param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort *puVar7;
  uint uVar8;
  uint local_res10 [2];
  
  uVar8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = FUN_180006370(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  *param_1 = uVar3;
  if (((param_2 != 0) && (0x27 < param_4)) && (param_3 < param_4)) {
    lVar6 = param_3 + param_2;
    uVar5 = (ulonglong)(uint)(*(int *)(lVar6 + 0x14) * 4);
    if (((ulonglong)*(uint *)(lVar6 + 0x10) < param_4 - uVar5) &&
       (puVar7 = (ushort *)((ulonglong)*(uint *)(lVar6 + 0x10) + lVar6), *(int *)(lVar6 + 0x14) != 0
       )) {
      do {
        if (param_4 <= *(uint *)(lVar6 + 0x10)) {
          return param_1;
        }
        if (*(uint *)(lVar6 + 0x20) <= *(uint *)(lVar6 + 0x10)) {
          return param_1;
        }
        local_res10[0] = (uint)*puVar7;
        puVar4 = (undefined8 *)*param_1;
        puVar1 = (undefined8 *)puVar4[1];
        uVar3 = FUN_180011750(uVar5,puVar4,puVar1,local_res10);
        if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
          std::_Xlength_error("list<T> too long");
          pcVar2 = (code *)swi(3);
          puVar4 = (undefined8 *)(*pcVar2)();
          return puVar4;
        }
        uVar5 = param_1[1] + 1;
        param_1[1] = uVar5;
        puVar4[1] = uVar3;
        *puVar1 = uVar3;
        uVar8 = uVar8 + 1;
        puVar7 = puVar7 + 2;
      } while (uVar8 < *(uint *)(lVar6 + 0x14));
    }
  }
  return param_1;
}




char * FUN_1800144a0(char *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  puVar1 = (undefined8 *)FUN_180006330(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  *(undefined8 **)param_1 = puVar1;
  FUN_1800145f0(param_1,(undefined8 *)*puVar1,*(undefined8 **)*param_2,(undefined8 *)*param_2);
  return param_1;
}




undefined8 * FUN_180014500(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsNodeHeaderImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180014530(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180014560(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180014560(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




longlong FUN_1800145c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                      undefined8 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_180006330(param_1,param_2,param_3);
  FUN_180014830(param_1,(undefined8 *)(lVar1 + 0x10),param_4);
  return lVar1;
}




void FUN_1800145f0(char *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong extraout_RAX;
  longlong lVar3;
  char *pcVar4;
  
  pcVar4 = param_1;
  for (; param_3 != param_4; param_3 = (undefined8 *)*param_3) {
    plVar1 = (longlong *)param_2[1];
    lVar2 = FUN_1800145c0(pcVar4,param_2,plVar1,param_3 + 2);
    lVar3 = *(longlong *)(param_1 + 8);
    pcVar4 = (char *)(0x7fffffffffffffe - lVar3);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar3 = extraout_RAX;
    }
    *(longlong *)(param_1 + 8) = lVar3 + 1;
    param_2[1] = lVar2;
    *plVar1 = lVar2;
  }
  return;
}




void FUN_1800146a0(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007c40(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x1c) = *param_2;
  *(undefined4 *)(lVar1 + 0x20) = param_2[1];
  return;
}




undefined8 *
FUN_1800146d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  plVar2 = (longlong *)*param_1;
  bVar7 = true;
  plVar6 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar5 = (longlong *)plVar2[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_4 < *(uint *)((longlong)plVar6 + 0x1c);
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
  }
  plVar5 = plVar6;
  if (bVar7) {
    if (plVar6 == (longlong *)*plVar2) {
      puVar4 = FUN_180014940(param_1,&local_res8,'\x01',plVar6,in_stack_ffffffffffffffd8,param_5);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar5 = (longlong *)*plVar6;
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar5[2] + 0x19);
        plVar2 = (longlong *)plVar5[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar5 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar2 = (longlong *)plVar6[1];
        plVar5 = plVar6;
        while ((plVar3 = plVar2, cVar1 == '\0' && (plVar5 == (longlong *)*plVar3))) {
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar2 = (longlong *)plVar3[1];
          plVar5 = plVar3;
        }
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          plVar5 = plVar3;
        }
      }
    }
    else {
      plVar5 = (longlong *)plVar6[2];
    }
  }
  if (*(uint *)((longlong)plVar5 + 0x1c) < *param_4) {
    puVar4 = FUN_180014940(param_1,&local_res8,bVar7,plVar6,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_180014830(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_2[1] = 0;
  *param_2 = refs::RefsNodeRecord::vftable;
  if (param_2 != param_3) {
    if (param_3[1] == 0) {
      puVar2 = (undefined8 *)operator_new(0x78);
      puVar2 = FUN_18000b040(puVar2);
      param_2[1] = puVar2;
    }
    else {
      puVar2 = (undefined8 *)operator_new(0x78);
      lVar1 = param_3[1];
      *puVar2 = refs::RefsBaseDataImpl::vftable;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(lVar1 + 8);
      *puVar2 = refs::RefsNodeRecordImpl::vftable;
      *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(lVar1 + 0x10);
      FUN_18000f250(puVar2 + 3,(longlong *)(lVar1 + 0x18));
      FUN_18000f250(puVar2 + 6,(longlong *)(lVar1 + 0x30));
      FUN_180005c00((char *)(puVar2 + 9),(undefined8 *)(lVar1 + 0x48));
      *(undefined1 *)(puVar2 + 0xb) = *(undefined1 *)(lVar1 + 0x58);
      *(undefined1 *)((longlong)puVar2 + 0x59) = *(undefined1 *)(lVar1 + 0x59);
      *(undefined1 *)((longlong)puVar2 + 0x5a) = *(undefined1 *)(lVar1 + 0x5a);
      *(undefined4 *)((longlong)puVar2 + 0x5c) = *(undefined4 *)(lVar1 + 0x5c);
      *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(lVar1 + 0x60);
      *(undefined4 *)((longlong)puVar2 + 100) = *(undefined4 *)(lVar1 + 100);
      puVar2[0xd] = *(undefined8 *)(lVar1 + 0x68);
      puVar2[0xe] = *(undefined8 *)(lVar1 + 0x70);
      param_2[1] = puVar2;
    }
  }
  return;
}




void FUN_180014930(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




undefined8 *
FUN_180014940(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (0x666666666666664 < (ulonglong)param_1[1]) {
    FUN_180014930(0x666666666666665,param_6);
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_1800149c9;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_1800149c9;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_1800149c9:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar9 = (longlong *)plVar8[1];
    plVar7 = plVar8 + 1;
    plVar10 = plVar9 + 1;
    lVar5 = *(longlong *)plVar9[1];
    if (plVar9 == (longlong *)lVar5) {
      lVar5 = ((longlong *)plVar9[1])[2];
      if (*(char *)(lVar5 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar9[2];
        if (plVar8 == plVar2) {
          plVar9[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar9;
          }
          plVar2[1] = *plVar10;
          if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
            *plVar2 = (longlong)plVar9;
            *plVar10 = (longlong)plVar2;
            plVar8 = plVar9;
            plVar9 = plVar2;
            plVar7 = plVar10;
          }
          else {
            plVar8 = (longlong *)*plVar10;
            if (plVar9 == (longlong *)*plVar8) {
              *plVar8 = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
            else {
              plVar8[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
          }
        }
        *(undefined1 *)(plVar9 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        plVar10 = (longlong *)*plVar7;
        *plVar7 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar7;
        }
        plVar10[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar10;
          plVar10[2] = (longlong)plVar7;
        }
        else {
          plVar9 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar9[2]) {
            plVar9[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
          else {
            *plVar9 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
        }
        goto LAB_180014bb5;
      }
LAB_180014ae7:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_180014ae7;
      plVar2 = (longlong *)*plVar9;
      plVar6 = plVar9;
      if (plVar8 == plVar2) {
        *plVar9 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar9;
        }
        plVar2[1] = *plVar10;
        if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar2;
        }
        else {
          puVar4 = (undefined8 *)*plVar10;
          if (plVar9 == (longlong *)puVar4[2]) {
            puVar4[2] = plVar2;
          }
          else {
            *puVar4 = plVar2;
          }
        }
        plVar2[2] = (longlong)plVar9;
        *plVar10 = (longlong)plVar2;
        plVar6 = plVar2;
        plVar8 = plVar9;
        plVar7 = plVar10;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(*plVar7 + 8);
      plVar10 = (longlong *)plVar7[2];
      plVar7[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(longlong **)(*plVar10 + 8) = plVar7;
      }
      plVar10[1] = plVar7[1];
      if (plVar7 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar10;
      }
      else {
        puVar4 = (undefined8 *)plVar7[1];
        if (plVar7 == (longlong *)*puVar4) {
          *puVar4 = plVar10;
        }
        else {
          puVar4[2] = plVar10;
        }
      }
      *plVar10 = (longlong)plVar7;
LAB_180014bb5:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined8 * FUN_180014bf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180014c20(undefined8 *param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  *param_1 = refs::RefsMSTreeHeaderDesc::vftable;
  *(undefined2 *)(param_1 + 2) = 0;
  puVar2 = (undefined8 *)operator_new(0x20);
  *(undefined1 *)(puVar2 + 1) = 0;
  *puVar2 = refs::RefsMSTreeHeaderDescImpl::vftable;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if ((0x27 < param_3) && (*param_2 < 0x1001)) {
    *(uint *)(puVar2 + 2) = *param_2;
    *(uint *)(puVar2 + 3) = param_2[6];
    uVar1 = param_2[1];
    *(uint *)((longlong)puVar2 + 0x14) = (uint)(ushort)uVar1;
    *(uint *)((longlong)puVar2 + 0x1c) = param_2[8];
    if ((ushort)uVar1 < param_3) {
      *(undefined1 *)(puVar2 + 1) = 1;
    }
  }
  param_1[1] = puVar2;
  return param_1;
}




undefined8 * FUN_180014ce0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsMSTreeHeaderDesc::vftable;
  if ((plVar1 != (longlong *)0x0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0))
  {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsMSTreeHeaderDescImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180014d50(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsMSTreeHeaderDesc::vftable;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      *plVar1 = 0;
    }
    *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsMSTreeHeaderDescImpl>::vftable;
    return;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsMSTreeHeaderDescImpl>::vftable;
  return;
}




undefined8 * FUN_180014dc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsMSTreeHeaderDescImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180014df0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180014e20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180014e50(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsDirectoryValues::vftable;
  if ((plVar1 != (longlong *)0x0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0))
  {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsDirectoryValuesImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180014ec0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsDirectoryValues::vftable;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      *plVar1 = 0;
    }
    *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsDirectoryValuesImpl>::vftable;
    return;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsDirectoryValuesImpl>::vftable;
  return;
}




undefined8 * FUN_180014f30(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = refs::RefsFileValues::vftable;
  if ((plVar1 != (longlong *)0x0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0))
  {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsFileValuesImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180014fa0(undefined8 *param_1)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsFileValuesImpl>::vftable;
  return;
}




void FUN_180014fb0(undefined8 *param_1)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsDirectoryValuesImpl>::vftable;
  return;
}




undefined8 * FUN_180014fc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsFileValuesImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180014ff0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = refs::RefsBaseDataImplManager<struct_refs::RefsDirectoryValuesImpl>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180015020(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong local_58 [11];
  
  local_58[8] = DAT_180021010 ^ (ulonglong)local_58;
  if ((longlong)param_1 < 0) {
    uVar2 = 0;
    local_58[0] = 0xffffffffffffff80;
    local_58[1] = 0xffffffffffff8000;
    local_58[2] = 0xffffffffff800000;
    local_58[3] = 0xffffffff80000000;
    local_58[4] = 0xffffff8000000000;
    local_58[5] = 0xffff800000000000;
    local_58[6] = 0xff80000000000000;
    local_58[7] = 0x8000000000000000;
    while( true ) {
      uVar3 = (int)uVar2 + 1;
      puVar1 = local_58 + uVar2;
      uVar2 = (ulonglong)(uVar3 & 0xff);
      if ((longlong)*puVar1 <= (longlong)param_1) break;
      if (7 < (byte)uVar3) {
        __security_check_cookie(local_58[8] ^ (ulonglong)local_58);
        return;
      }
    }
  }
  else {
    local_58[0] = 0x80;
    local_58[3] = 0x80000000;
    local_58[4] = 0x8000000000;
    local_58[5] = 0x800000000000;
    local_58[6] = 0x80000000000000;
    local_58[7] = 0x8000000000000000;
    uVar2 = 0;
    local_58[1] = 0x8000;
    local_58[2] = 0x800000;
    do {
      uVar3 = (int)uVar2 + 1;
      puVar1 = local_58 + uVar2;
      uVar2 = (ulonglong)(uVar3 & 0xff);
      if (param_1 < *puVar1) break;
    } while ((byte)uVar3 < 8);
  }
  local_58[7] = 0x8000000000000000;
  __security_check_cookie(local_58[8] ^ (ulonglong)local_58);
  return;
}




longlong * FUN_180015140(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  uint uVar6;
  byte *pbVar7;
  byte *_Memory;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte local_res20 [8];
  longlong local_60;
  byte *local_50;
  byte *local_48;
  byte *local_40;
  longlong *plVar13;
  
  plVar13 = (longlong *)0x0;
  plVar12 = (longlong *)0x0;
  local_50 = (byte *)0x0;
  local_48 = (byte *)0x0;
  local_40 = (byte *)0x0;
  FUN_180015740((longlong *)&local_50,param_2);
  local_60 = 0;
  *param_3 = 0;
  *param_2 = 0;
  pbVar7 = local_50;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar8 = *(ulonglong *)(param_1 + 0x20);
    plVar5 = plVar13;
    if ((undefined8 *)(param_1 + 8) != (undefined8 *)0x0) {
      plVar5 = *(longlong **)(param_1 + 8);
    }
    if (((*(longlong **)(param_1 + 0x30) != plVar5) && (plVar5 != (longlong *)0x0)) &&
       ((undefined8 *)*plVar5 != (undefined8 *)0x0)) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)*plVar5;
    }
    *(ulonglong *)(param_1 + 0x40) = uVar8;
    plVar5 = plVar13;
    if (uVar8 != *(longlong *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20)) {
      if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
        plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x30);
      }
      plVar5 = *(longlong **)
                (*(longlong *)(plVar5[1] + (plVar5[2] - 1U & uVar8 >> 1) * 8) +
                (ulonglong)((uint)uVar8 & 1) * 8);
    }
    if (plVar5 != (longlong *)0x0) {
      *param_2 = *plVar5;
      bVar2 = false;
      lVar9 = *(longlong *)(param_1 + 0x20);
      lVar10 = *(longlong *)(param_1 + 0x28);
      uVar8 = *(ulonglong *)(param_1 + 0x40);
      while (uVar8 != lVar9 + lVar10) {
        lVar9 = *plVar5;
        uVar11 = lVar9 - local_60;
        pbVar7 = local_48;
        bVar3 = FUN_180015020(uVar11);
        uVar8 = plVar5[1];
        bVar4 = FUN_180015020(uVar8);
        if (lVar9 == -1) {
          bVar2 = true;
        }
        bVar1 = 0;
        if (lVar9 != -1) {
          local_60 = lVar9;
          bVar1 = bVar3;
        }
        *param_3 = *param_3 + uVar8;
        lVar9 = plVar5[1];
        local_res20[0] = bVar1 << 4 | bVar4 & 0xf;
        if (local_40 == pbVar7) {
          FUN_180015820((longlong *)&local_50,pbVar7,local_res20);
        }
        else {
          *pbVar7 = local_res20[0];
          local_48 = pbVar7 + 1;
        }
        uVar6 = 0;
        if (bVar4 != 0) {
          do {
            local_res20[0] = (byte)(lVar9 >> ((byte)(uVar6 << 3) & 0x3f));
            if (local_40 == local_48) {
              FUN_180015820((longlong *)&local_50,local_48,local_res20);
            }
            else {
              *local_48 = local_res20[0];
              local_48 = local_48 + 1;
            }
            bVar3 = (char)uVar6 + 1;
            uVar6 = (uint)bVar3;
          } while (bVar3 < bVar4);
        }
        uVar6 = 0;
        if (bVar1 != 0) {
          do {
            local_res20[0] = (byte)((longlong)uVar11 >> ((byte)(uVar6 << 3) & 0x3f));
            if (local_40 == local_48) {
              FUN_180015820((longlong *)&local_50,local_48,local_res20);
            }
            else {
              *local_48 = local_res20[0];
              local_48 = local_48 + 1;
            }
            bVar3 = (char)uVar6 + 1;
            uVar6 = (uint)bVar3;
          } while (bVar3 < bVar1);
        }
        uVar8 = *(longlong *)(param_1 + 0x40) + 1;
        *(ulonglong *)(param_1 + 0x40) = uVar8;
        lVar10 = *(longlong *)(param_1 + 0x28);
        lVar9 = *(longlong *)(param_1 + 0x20);
        plVar5 = plVar13;
        if (uVar8 != lVar9 + lVar10) {
          plVar12 = plVar13;
          if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
            plVar12 = (longlong *)**(undefined8 **)(param_1 + 0x30);
          }
          plVar5 = *(longlong **)
                    (*(longlong *)(plVar12[1] + (uVar8 >> 1 & plVar12[2] - 1U) * 8) +
                    (ulonglong)((uint)uVar8 & 1) * 8);
        }
      }
      if (bVar2) {
        *param_3 = 0;
      }
      pbVar7 = local_50;
      plVar12 = plVar13;
      if (local_50 != local_48) {
        local_res20[0] = 0;
        if (local_40 == local_48) {
          FUN_180015820((longlong *)&local_50,local_48,local_res20);
        }
        else {
          *local_48 = 0;
          local_48 = local_48 + 1;
        }
        pbVar7 = local_50;
        uVar8 = (longlong)local_48 - (longlong)local_50;
        plVar12 = (longlong *)operator_new(uVar8 & 0xffffffff);
        if (plVar12 != (longlong *)0x0) {
          memcpy(plVar12,pbVar7,uVar8 & 0xffffffff);
        }
      }
    }
  }
  if (pbVar7 != (byte *)0x0) {
    _Memory = pbVar7;
    if ((0xfff < (ulonglong)((longlong)local_40 - (longlong)pbVar7)) &&
       (_Memory = *(byte **)(pbVar7 + -8), (byte *)0x1f < pbVar7 + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return plVar12;
}




ushort * FUN_180015490(ushort *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 *_Memory;
  longlong *plVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar7;
  ushort *puVar8;
  longlong *plVar9;
  longlong *local_20;
  longlong local_18;
  ushort *puVar6;
  
  pcVar2 = *(char **)(param_1 + 4);
  if (pcVar2 == (char *)0x0) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)0x0;
    uVar5 = 0;
    cVar1 = *pcVar2;
    puVar8 = param_1;
    puVar4 = puVar7;
    puVar6 = puVar7;
    while (cVar1 != '\0') {
      uVar5 = (int)puVar6 + (*(byte *)((longlong)puVar4 + (longlong)pcVar2) & 0xf) +
              (*(byte *)((longlong)puVar4 + (longlong)pcVar2) >> 4) + 1;
      puVar6 = (ushort *)(ulonglong)uVar5;
      puVar8 = (ushort *)(longlong)(int)uVar5;
      puVar4 = puVar8;
      cVar1 = *(char *)((longlong)puVar8 + (longlong)pcVar2);
    }
    if (*param_1 == 0) {
      puVar7 = (ushort *)operator_new(0x48);
      FUN_180015c20((undefined8 *)puVar7);
      *(undefined ***)puVar7 = CNoneResidentNTFSDataRunList::vftable;
      FUN_180016090((longlong)puVar7,*(longlong *)(param_1 + 4),uVar5 + 1);
    }
    else {
      local_20 = (longlong *)0x0;
      local_18 = 0;
      local_20 = (longlong *)FUN_180006370(puVar8,(undefined8 *)0x0,(undefined8 *)0x0);
      FUN_1800176c0(*(longlong *)(param_1 + 4),uVar5 + 1,(longlong)&local_20);
      if (local_18 != 0) {
        _Memory = *(undefined8 **)(*local_20 + 0x10);
        puVar7 = (ushort *)operator_new(0x50);
        FUN_180015c20((undefined8 *)puVar7);
        *(undefined ***)puVar7 = CRefsResidentDataRunList::vftable;
        puVar7[0x24] = 0;
        puVar7[0x25] = 0;
        FUN_180015af0((longlong)puVar7,*_Memory,*(uint *)(_Memory + 2),(uint)*param_1);
        free(_Memory);
        plVar9 = (longlong *)*local_20;
        *local_20 = (longlong)local_20;
        local_20[1] = (longlong)local_20;
        local_18 = 0;
        if (plVar9 != local_20) {
          do {
            plVar3 = (longlong *)*plVar9;
            free(plVar9);
            plVar9 = plVar3;
          } while (plVar3 != local_20);
        }
      }
      plVar9 = (longlong *)*local_20;
      *local_20 = (longlong)local_20;
      local_20[1] = (longlong)local_20;
      local_18 = 0;
      if (plVar9 != local_20) {
        do {
          plVar3 = (longlong *)*plVar9;
          free(plVar9);
          plVar9 = plVar3;
        } while (plVar3 != local_20);
      }
      free(local_20);
    }
  }
  return puVar7;
}




undefined2 *
FUN_180015670(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  void *pvVar2;
  int local_res8 [2];
  undefined2 *local_res10;
  
  if (param_1 == (longlong *)0x0) {
    return (undefined2 *)0x0;
  }
  local_res10 = (undefined2 *)0x0;
  puVar1 = (undefined2 *)operator_new(0x10);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  local_res8[0] = 0;
  local_res10 = puVar1;
  (**(code **)(*param_1 + 0x70))(param_1,local_res8,4);
  pvVar2 = operator_new((longlong)local_res8[0]);
  *(void **)(puVar1 + 4) = pvVar2;
  (**(code **)(*param_1 + 0x70))(param_1,pvVar2,local_res8[0]);
  (**(code **)(*param_1 + 0x70))(param_1,puVar1,2);
  return puVar1;
}




void FUN_180015740(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  void *_Src;
  undefined8 local_res10;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  local_res10 = param_2;
  _Dst = operator_new(0x80);
  _Src = (void *)*param_1;
  FUN_1800071d0((undefined1 *)&local_res10);
  memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
  FUN_18000f6f0(param_1,(longlong)_Dst,lVar1 - lVar2,0x80);
  return;
}




undefined8 FUN_1800157b0(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_1800157c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
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




longlong FUN_180015820(longlong *param_1,void *param_2,undefined1 *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  void *pvVar3;
  longlong lVar4;
  void *_Src;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Dst;
  size_t _Size;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar4 = *param_1;
  lVar7 = (longlong)param_2 - lVar4;
  if (param_1[1] - lVar4 == 0x7fffffffffffffff) {
    FUN_1800062c0();
    pcVar1 = (code *)swi(3);
    lVar4 = (*pcVar1)();
    return lVar4;
  }
  uVar6 = (param_1[1] - lVar4) + 1;
  uVar2 = param_1[2] - lVar4;
  uVar5 = uVar6;
  if ((uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1)) && (uVar5 = (uVar2 >> 1) + uVar2, uVar5 < uVar6))
  {
    uVar5 = uVar6;
  }
  if (uVar5 < 0x1000) {
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar5);
    }
  }
  else {
    uVar2 = uVar5 + 0x27;
    if (uVar2 <= uVar5) {
      uVar2 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new(uVar2);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar3;
  }
  *(undefined1 *)((longlong)_Dst + lVar7) = *param_3;
  pvVar3 = (void *)param_1[1];
  _Src = (void *)*param_1;
  FUN_1800071d0(local_res8);
  if (param_2 == pvVar3) {
    _Size = (longlong)pvVar3 - (longlong)_Src;
    pvVar3 = _Dst;
    param_2 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    lVar4 = lVar7 + 1;
    FUN_1800071d0(local_res8);
    pvVar3 = (void *)(lVar4 + (longlong)_Dst);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar3,param_2,_Size);
  FUN_18000f6f0(param_1,(longlong)_Dst,uVar6,uVar5);
  return *param_1 + lVar7;
}




void FUN_180015960(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_res8;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  plVar7 = (longlong *)0x0;
  plVar5 = (longlong *)0x0;
  plVar4 = plVar7;
  if (puVar1 != (undefined8 *)0x0) {
    plVar4 = (longlong *)*puVar1;
  }
  plVar6 = plVar7;
  if ((((plVar4 != (longlong *)0x0) && (plVar6 = plVar5, (undefined8 *)*plVar4 != (undefined8 *)0x0)
       ) && (puVar3 = *(undefined8 **)*plVar4, puVar3 != (undefined8 *)0x0)) &&
     (puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0)) {
    plVar6 = (longlong *)*puVar3;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar4 = plVar7;
    if ((plVar6 != (longlong *)0x0) && ((undefined8 *)*plVar6 != (undefined8 *)0x0)) {
      plVar4 = *(longlong **)*plVar6;
    }
    uVar2 = *(longlong *)(param_1 + 0x20) + -1 + *(longlong *)(param_1 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      plVar7 = (longlong *)*plVar4;
    }
    plVar4 = *(longlong **)
              (*(longlong *)(plVar7[1] + (plVar7[2] - 1U & uVar2 >> 1) * 8) +
              (ulonglong)((uint)uVar2 & 1) * 8);
    if ((-1 < *plVar4) && (*plVar4 + plVar4[1] == *param_2)) {
      plVar4[1] = plVar4[1] + param_2[1];
      return;
    }
  }
  local_res8 = (longlong *)operator_new(0x10);
  *local_res8 = *param_2;
  local_res8[1] = param_2[1];
  FUN_180015b60((longlong)puVar1,&local_res8);
  return;
}




undefined4 FUN_180015a60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




void FUN_180015a70(longlong param_1,longlong *param_2)

{
  FUN_180015d80(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000180015a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x48,4);
  return;
}




void FUN_180015ab0(longlong param_1,longlong *param_2)

{
  FUN_180015e40(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000180015adf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x48,4);
  return;
}




void FUN_180015af0(longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 *local_res8;
  
  local_res8 = (undefined8 *)operator_new(0x10);
  *local_res8 = param_2;
  local_res8[1] = (ulonglong)param_3;
  FUN_180015b60(param_1 + 8,&local_res8);
  *(undefined4 *)(param_1 + 0x48) = param_4;
  return;
}




void FUN_180015b60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  if ((((int)*(longlong *)(param_1 + 0x20) + (int)uVar3 & 1U) == 0) &&
     (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 0x20) + 2U >> 1)) {
    FUN_18000a750(param_1,param_2);
    uVar3 = *(ulonglong *)(param_1 + 0x18);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 2 - 1U & uVar3;
  *(ulonglong *)(param_1 + 0x18) = uVar3;
  uVar3 = *(longlong *)(param_1 + 0x20) + uVar3;
  lVar1 = (*(longlong *)(param_1 + 0x10) - 1U & uVar3 >> 1) * 8;
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar4 + lVar1) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(lVar1 + *(longlong *)(param_1 + 8)) = pvVar2;
    lVar4 = *(longlong *)(param_1 + 8);
  }
  *(undefined8 *)(*(longlong *)(lVar1 + lVar4) + (ulonglong)((uint)uVar3 & 1) * 8) = *param_2;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}




undefined8 * FUN_180015c20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + 1;
  *param_1 = IDataRunList::vftable;
  *puVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = (undefined8 *)operator_new(0x10);
  *puVar1 = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 **)*puVar1 = puVar1;
  param_1[6] = 0;
  param_1[8] = param_1[4];
  param_1[7] = 0;
  param_1[6] = *puVar1;
  return param_1;
}




void FUN_180015ca0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = IDataRunList::vftable;
  plVar1 = (longlong *)param_1[1];
  for (uVar3 = param_1[4]; uVar3 != param_1[5] + param_1[4]; uVar3 = uVar3 + 1) {
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    free(*(void **)(*(longlong *)
                     (*(longlong *)(lVar2 + 8) + (uVar3 >> 1 & *(longlong *)(lVar2 + 0x10) - 1U) * 8
                     ) + (ulonglong)((uint)uVar3 & 1) * 8));
  }
  FUN_180015f80((longlong)(param_1 + 1));
  plVar1 = (longlong *)param_1[1];
  if ((((longlong *)param_1[6] != plVar1) && (plVar1 != (longlong *)0x0)) &&
     ((undefined8 *)*plVar1 != (undefined8 *)0x0)) {
    param_1[6] = *(undefined8 *)*plVar1;
  }
  param_1[8] = param_1[4];
  FUN_180015f80((longlong)(param_1 + 1));
  free((void *)param_1[1]);
  param_1[1] = 0;
  return;
}




void FUN_180015d80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x28);
  (**(code **)(*param_2 + 0x78))(param_2,local_res8,4);
  plVar3 = (longlong *)0x0;
  uVar4 = *(ulonglong *)(param_1 + 0x20);
  if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
     (puVar1 = (undefined8 *)**(longlong **)(param_1 + 8), puVar1 != (undefined8 *)0x0)) {
    plVar3 = (longlong *)*puVar1;
  }
  for (; uVar4 != *(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x28); uVar4 = uVar4 + 1)
  {
    if (plVar3 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar3;
    }
    (**(code **)(*param_2 + 0x78))
              (param_2,*(undefined8 *)
                        (*(longlong *)
                          (*(longlong *)(lVar2 + 8) +
                          (uVar4 >> 1 & *(longlong *)(lVar2 + 0x10) - 1U) * 8) +
                        (ulonglong)((uint)uVar4 & 1) * 8),0x10);
  }
  return;
}




void FUN_180015e40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint local_res10 [2];
  undefined8 *local_res18;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar7 = 0;
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,local_res10,4);
  if (local_res10[0] != 0) {
    do {
      local_38 = 0;
      uStack_30 = 0;
      (**(code **)(*param_2 + 0x70))(param_2,&local_38,0x10);
      puVar2 = (undefined8 *)operator_new(0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      uVar5 = *(ulonglong *)(param_1 + 0x20);
      local_res18 = puVar2;
      if ((((int)*(longlong *)(param_1 + 0x28) + (int)uVar5 & 1U) == 0) &&
         (*(ulonglong *)(param_1 + 0x18) <= *(longlong *)(param_1 + 0x28) + 2U >> 1)) {
        FUN_18000a750(param_1 + 8,uVar5);
        uVar5 = *(ulonglong *)(param_1 + 0x20);
      }
      uVar5 = *(longlong *)(param_1 + 0x18) * 2 - 1U & uVar5;
      *(ulonglong *)(param_1 + 0x20) = uVar5;
      uVar5 = *(longlong *)(param_1 + 0x28) + uVar5;
      uVar6 = *(longlong *)(param_1 + 0x18) - 1U & uVar5 >> 1;
      lVar4 = *(longlong *)(param_1 + 0x10);
      lVar1 = uVar6 * 8;
      if (*(longlong *)(lVar4 + uVar6 * 8) == 0) {
        pvVar3 = operator_new(0x10);
        *(void **)(lVar1 + *(longlong *)(param_1 + 0x10)) = pvVar3;
        lVar4 = *(longlong *)(param_1 + 0x10);
      }
      uVar7 = uVar7 + 1;
      *(undefined8 **)(*(longlong *)(lVar1 + lVar4) + (ulonglong)((uint)uVar5 & 1) * 8) = puVar2;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}




void FUN_180015f80(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  void *_Memory;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      *(longlong *)(param_1 + 0x20) = lVar2;
    } while (lVar2 != 0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    pvVar1 = *(void **)(*(longlong *)(param_1 + 8) + lVar2 * 8);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
  }
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 3)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




undefined8 FUN_180016040(void)

{
  return 2;
}




undefined8 * FUN_180016050(undefined8 *param_1,uint param_2)

{
  *param_1 = CNoneResidentNTFSDataRunList::vftable;
  FUN_180015ca0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180016090(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *local_res20;
  longlong local_48 [2];
  
  uVar8 = 0;
  uVar14 = uVar8;
  while( true ) {
    iVar10 = (int)uVar8;
    if (param_3 <= iVar10) {
      return 1;
    }
    lVar12 = (longlong)iVar10;
    bVar1 = *(byte *)(lVar12 + param_2);
    if (bVar1 == 0) {
      return 1;
    }
    bVar9 = bVar1 >> 4;
    uVar5 = bVar1 & 0xf;
    local_48[0] = 0;
    local_res20 = (longlong *)0x0;
    uVar11 = iVar10 + 1 + bVar9 + uVar5;
    uVar8 = (ulonglong)uVar11;
    if (param_3 < (int)uVar11) {
      return 1;
    }
    if (8 < (ulonglong)uVar5) break;
    if (8 < bVar9) {
      return 1;
    }
    memcpy(local_48,(void *)(param_2 + 1 + lVar12),(ulonglong)uVar5);
    memcpy(&local_res20,(void *)((ulonglong)uVar5 + 1 + lVar12 + param_2),(ulonglong)bVar9);
    plVar13 = local_res20;
    switch((uint)bVar9) {
    case 1:
      plVar13 = (longlong *)(longlong)(char)local_res20;
      break;
    case 2:
      plVar13 = (longlong *)(longlong)(short)local_res20;
      break;
    case 3:
      if (0x800000 < (longlong)local_res20) {
        plVar13 = local_res20 + -0x200000;
      }
      break;
    case 4:
      plVar13 = (longlong *)(longlong)(int)local_res20;
      break;
    case 5:
      if (((ulonglong)local_res20 & 0x8000000000) != 0) {
        plVar13 = local_res20 + -0x2000000000;
      }
      break;
    case 6:
      if (((ulonglong)local_res20 & 0x800000000000) != 0) {
        plVar13 = local_res20 + -0x200000000000;
      }
      break;
    case 7:
      if (((ulonglong)local_res20 & 0x80000000000000) != 0) {
        plVar13 = local_res20 + -0x20000000000000;
      }
    }
    plVar2 = (longlong *)operator_new(0x10);
    *plVar2 = 0;
    plVar2[1] = 0;
    if (bVar1 >> 4 == 0) {
      *plVar2 = -1;
    }
    else {
      *plVar2 = (longlong)plVar13 + uVar14;
    }
    plVar2[1] = local_48[0];
    uVar6 = *(ulonglong *)(param_1 + 0x20);
    local_res20 = plVar2;
    if ((((int)*(longlong *)(param_1 + 0x28) + (int)uVar6 & 1U) == 0) &&
       (*(ulonglong *)(param_1 + 0x18) <= *(longlong *)(param_1 + 0x28) + 2U >> 1)) {
      FUN_18000a750(param_1 + 8,uVar6);
      uVar6 = *(ulonglong *)(param_1 + 0x20);
    }
    uVar6 = *(longlong *)(param_1 + 0x18) * 2 - 1U & uVar6;
    *(ulonglong *)(param_1 + 0x20) = uVar6;
    uVar6 = *(longlong *)(param_1 + 0x28) + uVar6;
    uVar7 = *(longlong *)(param_1 + 0x18) - 1U & uVar6 >> 1;
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar12 = uVar7 * 8;
    if (*(longlong *)(lVar4 + uVar7 * 8) == 0) {
      pvVar3 = operator_new(0x10);
      *(void **)(lVar12 + *(longlong *)(param_1 + 0x10)) = pvVar3;
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
    uVar14 = uVar14 + (longlong)plVar13;
    *(longlong **)(*(longlong *)(lVar12 + lVar4) + (ulonglong)((uint)uVar6 & 1) * 8) = plVar2;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    if ((int)uVar11 < 0) {
      return 1;
    }
  }
  return 1;
}




void FUN_180016360(longlong param_1,undefined8 *param_2)

{
  undefined8 *local_res8;
  
  local_res8 = (undefined8 *)operator_new(0x10);
  *local_res8 = *param_2;
  local_res8[1] = param_2[1];
  FUN_180015b60(param_1 + 8,&local_res8);
  return;
}




void FUN_1800163b0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_10 [2];
  
  puVar1 = FUN_1800163f0(param_1,local_10);
  FUN_180016470(param_1,(undefined8 *)*puVar1,param_2);
  return;
}




undefined8 * FUN_1800163f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800157b0(param_1);
  FUN_180016430(param_2,*puVar1);
  return param_2;
}




undefined8 * FUN_180016430(undefined8 *param_1,undefined8 param_2)

{
  FUN_1800157c0(param_1,param_2);
  return param_1;
}




void FUN_180016470(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_2[1];
  uVar2 = FUN_1800165c0(param_3);
  lVar3 = FUN_1800165d0(param_1,param_2,plVar1,uVar2);
  FUN_1800164f0(param_1,1);
  param_2[1] = lVar3;
  *plVar1 = lVar3;
  return;
}




void FUN_1800164f0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_180016570(param_1);
  plVar2 = (longlong *)FUN_180006cc0(param_1);
  if ((lVar1 - *plVar2) - 1U < param_2) {
    std::_Xlength_error("list<T> too long");
  }
  plVar2 = (longlong *)FUN_180006cc0(param_1);
  *plVar2 = *plVar2 + param_2;
  return;
}




void FUN_180016570(undefined8 param_1)

{
  FUN_1800165a0(param_1);
  FUN_180016590();
  return;
}




undefined8 FUN_180016590(void)

{
  return 0xaaaaaaaaaaaaaaa;
}




void FUN_1800165a0(undefined8 param_1)

{
  FUN_1800165c0(param_1);
  return;
}




undefined8 FUN_1800165c0(undefined8 param_1)

{
  return param_1;
}




longlong FUN_1800165d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4
                      )

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_180006370(param_1,param_2,param_3);
  uVar2 = FUN_1800157b0(param_1);
  uVar3 = FUN_1800165c0(param_4);
  uVar4 = FUN_1800157b0(lVar1 + 0x10);
  construct<>(uVar2,uVar4,uVar3);
  return lVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::construct<char * __ptr64,char * __ptr64 const & __ptr64>(class std::allocator<char> &
   __ptr64,char * __ptr64 * __ptr64 const,char * __ptr64 const & __ptr64)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<unsigned short>
   >::construct<unsigned short * __ptr64,unsigned short * __ptr64 const & __ptr64>(class
   std::allocator<unsigned short> & __ptr64,unsigned short * __ptr64 * __ptr64 const,unsigned short
   * __ptr64 const & __ptr64)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<wchar_t>
   >::construct<wchar_t * __ptr64,wchar_t * __ptr64 const & __ptr64>(class std::allocator<wchar_t> &
   __ptr64,wchar_t * __ptr64 * __ptr64 const,wchar_t * __ptr64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void construct<>(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180001230(8,param_2);
  puVar2 = (undefined8 *)FUN_1800165c0(param_3);
  *puVar1 = *puVar2;
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180021010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
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
    FUN_1800171a4();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_180017184();
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
LAB_180016756:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180022050 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180022050;
        pvVar1 = DAT_180022050;
      }
      DAT_180022050 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180016756;
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
    uVar3 = FUN_180009660();
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
  
  uVar1 = FUN_1800168e0(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_1800176b0();
  if (cVar1 != '\0') {
    cVar1 = FUN_1800176b0();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1800176b0();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_1800176b0();
  FUN_1800176b0();
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
    _execute_onexit_table(&DAT_180022060);
    return;
  }
  uVar2 = FUN_180001280();
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
  FUN_1800176b0();
  FUN_1800176b0();
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
    DAT_180022058 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_1800176b0();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_1800176b0();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_1800176b0();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800168e0(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_180022059 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180021010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180021010;
      _DAT_180022060 = in_RAX;
      uRam0000000180022068 = in_RAX;
      _DAT_180022070 = in_RAX;
      _DAT_180022078 = in_RAX;
      uRam0000000180022080 = in_RAX;
      _DAT_180022088 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180022060);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180022078), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180022059 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180016a46) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_180016a2f;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180016a2f:
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
    DAT_180022050 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180022058 == '\0') || (param_2 == '\0')) {
    FUN_1800176b0();
    FUN_1800176b0();
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
  
  bVar2 = (byte)DAT_180021010 & 0x3f;
  if (((DAT_180021010 ^ _DAT_180022060) >> bVar2 | (DAT_180021010 ^ _DAT_180022060) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180022060,_Func);
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




undefined8 * FUN_180016b14(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
    if (DAT_180022090 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_180022090 = DAT_180022090 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_180022048 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180017570();
      FID_conflict__RTC_Initialize();
      DAT_180022048 = 0;
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
    if (DAT_180022048 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_180022048 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180017560();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_1800191e8,&DAT_1800191f0);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_1800191c8,&DAT_1800191e0);
        DAT_180022048 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_1800175a0();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180022090 = DAT_180022090 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180016e00) */
/* WARNING: Removing unreachable block (ram,0x000180016d8f) */
/* WARNING: Removing unreachable block (ram,0x000180016e43) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_180022090 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_1800010d0(param_1,param_2);
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_1800010d0(param_1,0);
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




/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180016edd. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180016f0e;
  capture_previous_context((PCONTEXT)&DAT_180022140);
  _DAT_1800220b0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_1800221d8 = puVar3 + 0x40;
  _DAT_1800221c0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1800220a0 = 0xc0000409;
  _DAT_1800220a4 = 1;
  _DAT_1800220b8 = 1;
  DAT_1800220c0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180021010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180021008;
  *(undefined8 *)(puVar3 + -8) = 0x180016fb0;
  DAT_180022238 = _DAT_1800220b0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180019238);
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




undefined8 * FUN_180017034(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180017074(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180017094(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_1800170d4(undefined8 *param_1)

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




undefined8 * FUN_180017140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180017184(void)

{
  undefined8 local_28 [5];
  
  FUN_180017074(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001ffe8);
}




void FUN_1800171a4(void)

{
  undefined8 local_28 [5];
  
  FUN_1800170d4(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180020070);
}




char * FUN_1800171c4(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x0001800172a6) */
/* WARNING: Removing unreachable block (ram,0x000180017224) */
/* WARNING: Removing unreachable block (ram,0x0001800171ff) */
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
  
  DAT_18002101c = 2;
  _DAT_180021018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180021020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180022610 = DAT_180022610 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_180022610 = DAT_180022610 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180021018 = 2;
    DAT_18002101c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18002101c = 0xe;
      _DAT_180021018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180021018 = 5;
        DAT_18002101c = 0x2e;
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
  return DAT_180021030 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180017360(void)

{
  _DAT_180022614 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x18001739b;
  FUN_180017360();
  *(undefined8 *)(puVar4 + -8) = 0x1800173ac;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1800173b6;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x1800173d0;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180017411;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180017443;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180017465;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180017486;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180017491;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1800174a1;
    FUN_180017360();
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
  
  if (DAT_180021010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180021010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180021010 == 0x2b992ddfa232) {
      DAT_180021010 = 0x2b992ddfa233;
    }
  }
  DAT_180021008 = ~DAT_180021010;
  return;
}




void FUN_180017560(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180017567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180022620);
  return;
}




void FUN_180017570(void)

{
  __std_type_info_destroy_list(&DAT_180022620);
  return;
}




undefined * FUN_18001757c(void)

{
  return &DAT_180022630;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180008980();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_18001757c();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_1800175a0(void)

{
  return &DAT_180022670;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18001cdb8; puVar1 < &DAT_18001cdb8; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_18001cdc8; puVar1 < &DAT_18001cdc8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_1800176b0(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x0001800177d6) */
/* WARNING: Removing unreachable block (ram,0x0001800178e0) */
/* WARNING: Removing unreachable block (ram,0x0001800178fa) */
/* WARNING: Removing unreachable block (ram,0x000180017897) */
/* WARNING: Removing unreachable block (ram,0x0001800178b1) */
/* WARNING: Removing unreachable block (ram,0x0001800178de) */
/* WARNING: Removing unreachable block (ram,0x00018001784b) */
/* WARNING: Removing unreachable block (ram,0x000180017865) */
/* WARNING: Removing unreachable block (ram,0x000180017892) */
/* WARNING: Removing unreachable block (ram,0x00018001783c) */
/* WARNING: Removing unreachable block (ram,0x00018001780e) */
/* WARNING: Removing unreachable block (ram,0x000180017819) */
/* WARNING: Removing unreachable block (ram,0x000180017837) */
/* WARNING: Removing unreachable block (ram,0x0001800177fe) */
/* WARNING: Removing unreachable block (ram,0x0001800177ee) */
/* WARNING: Removing unreachable block (ram,0x000180017957) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_1800176c0(longlong param_1,int param_2,longlong param_3)

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
    FUN_1800163b0(param_3,&local_30);
    local_28 = local_28 + local_40;
    local_18 = local_18 + local_20;
  }
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




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180017b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180017b40(undefined8 param_1,longlong param_2)

{
  FUN_180001290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180017b50(undefined8 param_1,longlong param_2)

{
  FUN_180001700((longlong *)(*(longlong *)(param_2 + 0x40) + 0xd0));
  return;
}




void Unwind_180017b70(undefined8 param_1,longlong param_2)

{
  FUN_180001900(*(longlong **)(param_2 + 0x28));
  return;
}




void Unwind_180017b80(undefined8 param_1,longlong param_2)

{
  FUN_180001900((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180017b90(undefined8 param_1,longlong param_2)

{
  FUN_180001e00(*(longlong *)(param_2 + 0x98));
  return;
}




void Unwind_180017ba0(undefined8 param_1,longlong param_2)

{
  FUN_1800016a0((undefined8 *)(*(longlong *)(param_2 + 0x98) + 0xa8));
  return;
}




void Unwind_180017bc0(undefined8 param_1,longlong param_2)

{
  FUN_180005a20(*(longlong *)(param_2 + 0x98) + 0x198);
  return;
}




void Unwind_180017be0(undefined8 param_1,longlong param_2)

{
  FUN_180001ec0((longlong *)(*(longlong *)(param_2 + 0x98) + 0x1a8));
  return;
}




void Unwind_180017c00(undefined8 param_1,longlong param_2)

{
  FUN_180005cd0((longlong *)(*(longlong *)(param_2 + 0x98) + 0x1b8));
  return;
}




void Unwind_180017c20(undefined8 param_1,longlong param_2)

{
  FUN_18000f200((undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x1e0));
  return;
}




void Unwind_180017c40(undefined8 param_1,longlong param_2)

{
  FUN_180011440((undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x1f0));
  return;
}




void Unwind_180017c60(undefined8 param_1,longlong param_2)

{
  FUN_180001f20((longlong *)(*(longlong *)(param_2 + 0x98) + 0x200));
  return;
}




void Unwind_180017c80(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}




void Unwind_180017ca0(undefined8 param_1,longlong param_2)

{
  FUN_180001900(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_180017cb0(undefined8 param_1,longlong param_2)

{
  FUN_180001900((longlong *)(param_2 + 0xa0));
  return;
}




void Unwind_180017cc0(undefined8 param_1,longlong param_2)

{
  FUN_180005950((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180017cd0(undefined8 param_1,longlong param_2)

{
  FUN_180011aa0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_180017ce0(undefined8 param_1,longlong param_2)

{
  FUN_180012a00((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180017cf0(undefined8 param_1,longlong param_2)

{
  FUN_180012a00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_180017d00(undefined8 param_1,longlong param_2)

{
  FUN_180011b10((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_180017d10(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xe0));
  return;
}




void Unwind_180017d30(undefined8 param_1,longlong param_2)

{
  FUN_180012b00((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180017d40(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xf8));
  return;
}




void Unwind_180017d60(undefined8 param_1,longlong param_2)

{
  FUN_180012b00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_180017d70(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_180017d90(undefined8 param_1,longlong param_2)

{
  FUN_180005930((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180017da0(undefined8 param_1,longlong param_2)

{
  FUN_180005ba0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180017db0(undefined8 param_1,longlong param_2)

{
  FUN_180005ba0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180017dc0(undefined8 param_1,longlong param_2)

{
  FUN_180005930((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180017dd0(undefined8 param_1,longlong param_2)

{
  FUN_180005ba0((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_180017de0(undefined8 param_1,longlong param_2)

{
  FUN_180005930((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180017df0(undefined8 param_1,longlong param_2)

{
  FUN_180005c60((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_180017e00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 1) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffffe;
    FUN_180005cd0((longlong *)(param_2 + 0xa0));
  }
  return;
}




void Unwind_180017e30(undefined8 param_1,longlong param_2)

{
  FUN_180005ba0((longlong *)(param_2 + 0x20));
  return;
}




void Unwind_180017e40(undefined8 param_1,longlong param_2)

{
  FUN_180005930((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180017e50(undefined8 param_1,longlong param_2)

{
  FUN_180005cd0((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_180017e60(undefined8 param_1,longlong param_2)

{
  FUN_180005ba0(*(longlong **)(param_2 + 0xb0));
  return;
}




void Unwind_180017e70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180005930(*(longlong **)(param_2 + 0xa8));
  }
  return;
}




void Unwind_180017ea0(undefined8 param_1,longlong param_2)

{
  FUN_180005950((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180017eb0(undefined8 param_1,longlong param_2)

{
  FUN_180012a00((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180017ec0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180005ef0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180017ed0(undefined8 param_1,longlong param_2)

{
  FUN_180012b00((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180017ee0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x70));
  return;
}




void Unwind_180017f00(undefined8 param_1,longlong param_2)

{
  FUN_180005ba0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180017f10(undefined8 param_1,longlong param_2)

{
  FUN_180004600(param_2 + 0x30);
  return;
}




void Unwind_180017f20(undefined8 param_1,longlong param_2)

{
  FUN_180005cd0((longlong *)(param_2 + 0x72));
  return;
}




void Unwind_180017f30(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180017f50(undefined8 param_1,longlong param_2)

{
  FUN_180013130(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_180017f60(undefined8 param_1,longlong param_2)

{
  FUN_180005cd0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x42));
  return;
}




void Unwind_180017f70(undefined8 param_1,longlong param_2)

{
  FUN_180005950((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180017f80(undefined8 param_1,longlong param_2)

{
  FUN_1800122b0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180017f90(undefined8 param_1,longlong param_2)

{
  FUN_1800124f0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180017fa0(undefined8 param_1,longlong param_2)

{
  FUN_180012a00((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180017fb0(undefined8 param_1,longlong param_2)

{
  FUN_180012b00((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180017fc0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}




void Unwind_180017fe0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180005ef0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180017ff0(undefined8 param_1,longlong param_2)

{
  FUN_180001f20((longlong *)(param_2 + 0x30));
  return;
}




void Catch_All_180018000(undefined8 param_1,longlong param_2)

{
  FUN_180005f90(*(longlong **)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180018030(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_180018050(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x68));
  return;
}




void Unwind_180018070(undefined8 param_1,longlong param_2)

{
  FUN_1800016a0((undefined8 *)(*(longlong *)(param_2 + 0x68) + 8));
  return;
}




void Unwind_180018080(undefined8 param_1,longlong param_2)

{
  FUN_180001700((longlong *)(*(longlong *)(param_2 + 0x68) + 0xf8));
  return;
}




void Catch_All_1800180a0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_1800180c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_2 + 0x88);
  plVar1 = *(longlong **)(param_2 + 0x80);
  if (plVar5 != plVar1) {
    lVar2 = *(longlong *)(param_2 + 0x78);
    lVar3 = *(longlong *)(param_2 + 0x70);
    do {
      plVar4 = *(longlong **)(lVar2 + 8);
      *(longlong *)plVar4[1] = *plVar4;
      *(longlong *)(*plVar4 + 8) = plVar4[1];
      free(plVar4);
      plVar4 = (longlong *)(lVar3 + 8);
      *plVar4 = *plVar4 + -1;
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != plVar1);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180018130(undefined8 param_1,longlong param_2)

{
  FUN_180007210(param_1,*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180018160(undefined8 param_1,longlong param_2)

{
  FUN_1800077f0(param_1,*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180018190(undefined8 param_1,longlong param_2)

{
  FUN_1800077f0(param_1,*(void **)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800181d0(undefined8 param_1,longlong param_2)

{
  FUN_180001290(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1800181e0(undefined8 param_1,longlong param_2)

{
  FUN_180001700((longlong *)(*(longlong *)(param_2 + 0x90) + 0xd0));
  return;
}




void Unwind_180018200(undefined8 param_1,longlong param_2)

{
  FUN_180011440((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_180018210(undefined8 param_1,longlong param_2)

{
  FUN_180001e00(param_2 + 0x50);
  return;
}




void Unwind_180018220(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Catch_All_180018240(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined8
FUN_180018260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180008990("Exception occurred.GetErrorCode\n",param_2,param_3,param_4);
  return 1;
}




void Unwind_180018290(undefined8 param_1,longlong param_2)

{
  FUN_18000a680((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_1800182a0(undefined8 param_1,longlong param_2)

{
  FUN_180005cd0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_1800182b0(undefined8 param_1,longlong param_2)

{
  FUN_18000ff10((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_1800182c0(undefined8 param_1,longlong param_2)

{
  FUN_180014d50((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_1800182d0(undefined8 param_1,longlong param_2)

{
  FUN_180014310((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_1800182e0(undefined8 param_1,longlong param_2)

{
  FUN_18000aff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800182f0(undefined8 param_1,longlong param_2)

{
  FUN_180005950((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_180018300(undefined8 param_1,longlong param_2)

{
  FUN_180005950((longlong *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}




void Unwind_180018310(undefined8 param_1,longlong param_2)

{
  FUN_180004600(param_2 + 0x70);
  return;
}




void Unwind_180018320(undefined8 param_1,longlong param_2)

{
  FUN_180014310((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180018330(undefined8 param_1,longlong param_2)

{
  FUN_180005930((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_180018340(undefined8 param_1,longlong param_2)

{
  FUN_180005cd0((longlong *)(param_2 + 0xb2));
  return;
}




void Unwind_180018350(undefined8 param_1,longlong param_2)

{
  FUN_180014d50((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180018360(undefined8 param_1,longlong param_2)

{
  FUN_180014fa0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180018370(undefined8 param_1,longlong param_2)

{
  FUN_180005c60((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180018380(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_180005cd0((longlong *)(param_2 + 0x70));
  }
  return;
}




void Unwind_1800183b0(undefined8 param_1,longlong param_2)

{
  FUN_18000b580((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_1800183c0(undefined8 param_1,longlong param_2)

{
  FUN_180004600(param_2 + 0x40);
  return;
}




void Unwind_1800183d0(undefined8 param_1,longlong param_2)

{
  FUN_180014ec0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_1800183e0(undefined8 param_1,longlong param_2)

{
  FUN_180005cd0((longlong *)(param_2 + 0x82));
  return;
}




void Unwind_1800183f0(undefined8 param_1,longlong param_2)

{
  FUN_180014fb0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180018400(undefined8 param_1,longlong param_2)

{
  FUN_18000cec0(param_2 + 0x50);
  return;
}




void Unwind_180018410(undefined8 param_1,longlong param_2)

{
  FUN_18000b580((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180018420(undefined8 param_1,longlong param_2)

{
  FUN_18000ff10((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180018430(undefined8 param_1,longlong param_2)

{
  FUN_180005930((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180018440(undefined8 param_1,longlong param_2)

{
  FUN_180005cd0((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_180018450(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_180018470(undefined8 param_1,longlong param_2)

{
  FUN_180013130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180018480(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180015ca0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_180018490(undefined8 param_1,longlong param_2)

{
  FUN_180005950((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1800184a0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}




void Unwind_1800184c0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_1800184e0(undefined8 param_1,longlong param_2)

{
  FUN_180005a20(*(longlong *)(param_2 + 0x50));
  return;
}




void Unwind_1800184f0(undefined8 param_1,longlong param_2)

{
  FUN_180001700((longlong *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Unwind_180018500(undefined8 param_1,longlong param_2)

{
  FUN_180001700((longlong *)(*(longlong *)(param_2 + 0x50) + 0x20));
  return;
}




void Unwind_180018510(undefined8 param_1,longlong param_2)

{
  FUN_180005ba0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x30));
  return;
}




void Unwind_180018520(undefined8 param_1,longlong param_2)

{
  FUN_180001700((longlong *)(*(longlong *)(param_2 + 0x50) + 0x40));
  return;
}




void Unwind_180018530(undefined8 param_1,longlong param_2)

{
  FUN_180001900((longlong *)(*(longlong *)(param_2 + 0x50) + 0x68));
  return;
}




void Catch_All_180018540(undefined8 param_1,longlong param_2)

{
  FUN_180005f90(*(longlong **)(param_2 + 0x60));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180018580(undefined8 param_1,longlong param_2)

{
  FUN_1800077f0(param_1,*(void **)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800185b0(undefined8 param_1,longlong param_2)

{
  FUN_1800122b0((undefined8 *)(param_2 + 0x110));
  return;
}




void Unwind_1800185c0(undefined8 param_1,longlong param_2)

{
  FUN_1800016a0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1800185d0(undefined8 param_1,longlong param_2)

{
  FUN_1800124f0((undefined8 *)(param_2 + 0x110));
  return;
}




void Unwind_1800185e0(undefined8 param_1,longlong param_2)

{
  FUN_180001290((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1800185f0(undefined8 param_1,longlong param_2)

{
  FUN_180001700((longlong *)(param_2 + 0xf0));
  return;
}




void Unwind_180018610(undefined8 param_1,longlong param_2)

{
  FUN_180005950((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180018620(undefined8 param_1,longlong param_2)

{
  FUN_180011aa0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180018630(undefined8 param_1,longlong param_2)

{
  FUN_180011b10((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180018640(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x88));
  return;
}




void Unwind_180018660(undefined8 param_1,longlong param_2)

{
  FUN_180011aa0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180018670(undefined8 param_1,longlong param_2)

{
  FUN_180011b10((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180018680(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x68));
  return;
}




void Unwind_1800186a0(undefined8 param_1,longlong param_2)

{
  FUN_180012a00((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1800186b0(undefined8 param_1,longlong param_2)

{
  FUN_180005950((longlong *)(param_2 + 0x90));
  return;
}




void Unwind_1800186c0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180005ef0((longlong *)(param_2 + 0xa8));
  return;
}




void Unwind_1800186d0(undefined8 param_1,longlong param_2)

{
  FUN_1800101f0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1800186e0(undefined8 param_1,longlong param_2)

{
  FUN_180012b00((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1800186f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x78));
  return;
}




void Catch_All_180018710(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *_Memory;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0x70);
  lVar1 = *(longlong *)(param_2 + 0x60);
  if (lVar3 != lVar1) {
    lVar2 = *(longlong *)(param_2 + 0x68);
    do {
      _Memory = *(longlong **)(lVar2 + 8);
      *(longlong *)_Memory[1] = *_Memory;
      *(longlong *)(*_Memory + 8) = _Memory[1];
      free(_Memory);
      DAT_180022668 = DAT_180022668 + -1;
      lVar3 = lVar3 + 4;
    } while (lVar3 != lVar1);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180018770(undefined8 param_1,longlong param_2)

{
  FUN_18000aff0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_180018780(undefined8 param_1,longlong param_2)

{
  FUN_180005950((longlong *)(*(longlong *)(param_2 + 0x90) + 0x10));
  return;
}




void Catch_All_180018790(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180005830(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_1800187c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_2 + 0x88);
  lVar1 = *(longlong *)(param_2 + 0x80);
  if (lVar5 != lVar1) {
    lVar2 = *(longlong *)(param_2 + 0x78);
    lVar3 = *(longlong *)(param_2 + 0x70);
    do {
      plVar4 = *(longlong **)(lVar2 + 8);
      *(longlong *)plVar4[1] = *plVar4;
      *(longlong *)(*plVar4 + 8) = plVar4[1];
      free(plVar4);
      plVar4 = (longlong *)(lVar3 + 8);
      *plVar4 = *plVar4 + -1;
      lVar5 = lVar5 + 8;
    } while (lVar5 != lVar1);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180018830(undefined8 param_1,longlong param_2)

{
  FUN_180006610(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180018860(undefined8 param_1,longlong param_2)

{
  FUN_180005d70(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180018890(undefined8 param_1,longlong param_2)

{
  FUN_18000aff0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_1800188a0(undefined8 param_1,longlong param_2)

{
  FUN_180005d40(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_1800188b0(undefined8 param_1,longlong param_2)

{
  FUN_18000aff0(*(undefined8 **)(param_2 + 0xc0));
  return;
}




void Unwind_1800188c0(undefined8 param_1,longlong param_2)

{
  FUN_180005ba0((longlong *)(*(longlong *)(param_2 + 0xc0) + 0x20));
  return;
}




void Unwind_1800188d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180005ef0((longlong *)(*(longlong *)(param_2 + 0xc0) + 0x30));
  return;
}




void Unwind_1800188e0(undefined8 param_1,longlong param_2)

{
  FUN_18000ff10((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_1800188f0(undefined8 param_1,longlong param_2)

{
  FUN_1800101f0((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_180018900(undefined8 param_1,longlong param_2)

{
  FUN_180005d40(*(undefined8 **)(param_2 + 0x38));
  return;
}




void Unwind_180018910(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_180018930(undefined8 param_1,longlong param_2)

{
  FUN_180013130(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Catch_All_180018940(undefined8 param_1,longlong param_2)

{
  FUN_1800062e0(*(longlong **)(param_2 + 0x60));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180018970(undefined8 param_1,longlong param_2)

{
  FUN_180005930((longlong *)(*(longlong *)(param_2 + 0xd0) + 0x18));
  return;
}




void Unwind_180018980(undefined8 param_1,longlong param_2)

{
  FUN_180013d20((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180018990(undefined8 param_1,longlong param_2)

{
  FUN_180013dc0((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_1800189a0(undefined8 param_1,longlong param_2)

{
  FUN_18000b580((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_1800189b0(undefined8 param_1,longlong param_2)

{
  FUN_18000b580((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1800189c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180005ba0(*(longlong **)(param_2 + 0x70));
  }
  return;
}




void Catch_All_1800189f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180005de0(*(longlong **)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180018a20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_2 + 0x88);
  plVar1 = *(longlong **)(param_2 + 0x80);
  if (plVar5 != plVar1) {
    lVar2 = *(longlong *)(param_2 + 0x78);
    lVar3 = *(longlong *)(param_2 + 0x70);
    do {
      plVar4 = *(longlong **)(lVar2 + 8);
      *(longlong *)plVar4[1] = *plVar4;
      *(longlong *)(*plVar4 + 8) = plVar4[1];
      (**(code **)plVar4[2])(plVar4 + 2,0);
      free(plVar4);
      plVar4 = (longlong *)(lVar3 + 8);
      *plVar4 = *plVar4 + -1;
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != plVar1);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180018aa0(undefined8 param_1,longlong param_2)

{
  FUN_180014930(param_1,*(void **)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180018ae0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




undefined1 * Catch_All_180018b00(undefined8 param_1,longlong param_2)

{
  void *_Memory;
  
  _Memory = *(void **)(param_2 + 0x48);
  if (_Memory != (void *)0x0) {
    if (*(void **)((longlong)_Memory + 8) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 8));
    }
    free(_Memory);
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return &LAB_18001571a;
}




void Catch_All_180018b50(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_180018ba0(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180018bb7(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_180018bd3(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180018c10(void)

{
  FUN_1800058c0();
  free(DAT_180022650);
  return;
}



