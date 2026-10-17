
void FUN_18000102c(void)

{
  ATL::CAtlBaseModule::CAtlBaseModule((CAtlBaseModule *)&DAT_18002a2c0);
  atexit((_func_5014 *)&LAB_18001b318);
  return;
}




undefined8 FUN_180001050(void)

{
  return 1;
}




void EUCreateHFSSearcher(undefined8 *param_1)

{
  undefined8 *puVar1;
  
                    /* 0x1060  2  EUCreateHFSSearcher */
  puVar1 = (undefined8 *)FUN_180018ba0(0x178);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = FUN_180002680(puVar1);
    *param_1 = puVar1;
    return;
  }
  *param_1 = 0;
  return;
}




void EUCreateHFSQuickSearcher(undefined8 *param_1)

{
  undefined8 *puVar1;
  
                    /* 0x10b0  1  EUCreateHFSQuickSearcher */
  puVar1 = (undefined8 *)FUN_180018ba0(0xa8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = IFileSystemSearchController::vftable;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0xe;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[0xd] = 0;
    *puVar1 = IQuickFileSystemSearchController::vftable;
    puVar1[0xe] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = 0;
    *puVar1 = CHFSPlusQuickFileSystemSearchController::vftable;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *param_1 = puVar1;
    return;
  }
  *param_1 = 0;
  return;
}




undefined8 FUN_180001170(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 * FUN_180001180(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 1) = 0xe;
  *param_1 = CSearchedPartitionInfo::vftable;
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
  *(uint *)(param_1 + 0xb) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((param_2 & 0x1ff) != 0) || (param_2 == 0)) {
    *(undefined4 *)(param_1 + 0xb) = 0x200;
  }
  param_1[0x11] = 0;
  return param_1;
}




void FUN_180001210(undefined8 *param_1)

{
  *param_1 = CSearchedPartitionInfo::vftable;
  return;
}




undefined8 FUN_180001220(void)

{
  return 8;
}




undefined8 FUN_180001230(void)

{
  return 0;
}




void FUN_180001240(longlong param_1,longlong *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00018000133e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x58,4);
  return;
}




void FUN_180001350(longlong param_1,longlong *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00018000144e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x58,4);
  return;
}




undefined8 * FUN_180001460(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CSearchedPartitionInfo::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180001490(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_1800014a0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_1800014b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}




void FUN_1800014c0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_1800014d0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800014dc. Too many branches */
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




void FUN_180001500(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  FUN_180001bf0((longlong *)(param_1 + 0x30),(longlong)param_2);
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return;
}




void FUN_180001550(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1,param_3,param_4,0xfffffffffffffffe);
    param_1[7] = 0;
  }
  return;
}




void FUN_180001590(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6,param_3,param_4,0xfffffffffffffffe);
    param_1[0xd] = 0;
  }
  return;
}




undefined1 FUN_1800015e0(void)

{
  return 0;
}




void FUN_1800015f0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}




undefined8 *
FUN_180001600(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6,param_3,param_4,0xfffffffffffffffe);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180001680(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,plVar1 != (longlong *)(param_1 + 0x30),param_3,param_4,0xfffffffffffffffe);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}




void FUN_1800016c0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return;
}




undefined8 *
FUN_1800016d0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = CHFSPlusQuickFileSystemSearchController::vftable;
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6,param_3,param_4,0xfffffffffffffffe);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




ulonglong FUN_180001760(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *_Memory;
  int *piVar4;
  longlong lVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  longlong *plVar7;
  undefined **ppuVar8;
  int iVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 local_20 [24];
  
  *(longlong *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0x98) = param_3;
  puVar3 = (undefined8 *)operator_new(0x18);
  uVar12 = 0;
  _Memory = FUN_1800093d0(puVar3,*(undefined8 *)(param_1 + 0x98),0);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    uVar11 = 0x5001e00000005;
  }
  else if (*(longlong *)(param_1 + 0x88) == 0) {
    uVar11 = 0x5001f00000002;
  }
  else {
    piVar4 = (int *)FUN_180018ba0(0x90);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_18000b410(piVar4,param_2,uVar12,param_4);
    }
    if (piVar4 == (int *)0x0) {
      uVar11 = 0x5002200000004;
    }
    else {
      uVar11 = *(ulonglong *)(piVar4 + 4);
      if ((uVar11 & 0xff00000000000000) == 0) {
        uVar1 = *(uint *)(*(longlong *)(piVar4 + 6) + 0x28);
        *(uint *)(param_1 + 0xa0) = uVar1;
        plVar7 = *(longlong **)(param_1 + 0x90);
        if ((undefined **)*plVar7 == CPartitionVirtualVolumeDevice::vftable) {
          uVar2 = *(uint *)(plVar7 + 7);
        }
        else {
          uVar2 = (*(code *)((undefined **)*plVar7)[5])();
          uVar1 = *(uint *)(param_1 + 0xa0);
        }
        plVar7 = FUN_18000af90(plVar7,0,uVar1 / uVar2,param_4);
        if (plVar7 == (longlong *)0x0) {
          uVar11 = 0x5002c00000004;
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))
                    (*(longlong **)(param_1 + 0x88),plVar7,0);
          FUN_18000c8f0((longlong)piVar4,*(longlong **)(param_1 + 0x88),_Memory,(int *)0x0);
          ppuVar8 = (undefined **)**(longlong **)(param_1 + 0x88);
          if (ppuVar8 == DetourDirectoryTree::vftable) {
            ppuVar8 = *(undefined ***)(*(longlong **)(param_1 + 0x88))[1];
          }
          (*(code *)ppuVar8[9])();
        }
      }
      else {
        pcVar10 = 
        "e:\\drw\\_drw_main\\drwintelligentscan\\hfsplussearch\\hfsplusquickfilesystemsearchcontroller.cpp"
        ;
        iVar9 = 0x5b;
        lVar5 = 0x5b;
        do {
          if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfsplussearch\\hfsplusquickfilesystemsearchcontroller.cpp"
               [lVar5] == '\\') ||
             ("e:\\drw\\_drw_main\\drwintelligentscan\\hfsplussearch\\hfsplusquickfilesystemsearchcontroller.cpp"
              [lVar5] == '/')) {
            pcVar10 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfsplussearch\\hfsplusquickfilesystemsearchcontroller.cpp"
                      + (iVar9 + 1);
            break;
          }
          iVar9 = iVar9 + -1;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
        pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "Return Error:0x");
        puVar3 = (undefined8 *)std::setbase((int)local_20);
        (*(code *)*puVar3)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar3 + 1));
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar11);
        if (pcVar10 != (char *)0x0) {
          pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                 "\tFile:");
          FUN_180001e50(pbVar6,pcVar10);
        }
        pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tLine:");
        puVar3 = (undefined8 *)std::setbase((int)local_20);
        (*(code *)*puVar3)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar3 + 1));
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,0x23);
        pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFuction:");
        FUN_180001e50(pbVar6,"CHFSPlusQuickFileSystemSearchController::QuickSearchFiles");
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                  ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
      }
    }
  }
  if (_Memory != (longlong *)0x0) {
    if (((char)_Memory[2] == '\0') && ((undefined4 *)_Memory[1] != (undefined4 *)0x0)) {
      *(undefined4 *)_Memory[1] = 4;
      (**(code **)(*(longlong *)*_Memory + 8))((longlong *)*_Memory,_Memory[1]);
    }
    if ((void *)_Memory[1] != (void *)0x0) {
      free((void *)_Memory[1]);
      _Memory[1] = 0;
    }
    *_Memory = 0;
    free(_Memory);
  }
  return uVar11;
}




void FUN_180001a70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *local_res18;
  undefined8 *local_res20;
  
  puVar4 = (undefined8 *)FUN_180018ba0(0x90);
  local_res20 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x90);
    if ((undefined **)*plVar1 == CPartitionVirtualVolumeDevice::vftable) {
      puVar4 = FUN_180001180(puVar4,*(uint *)(plVar1 + 7));
    }
    else {
      uVar3 = (*(code *)((undefined **)*plVar1)[5])(plVar1);
      puVar4 = FUN_180001180(puVar4,uVar3);
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[2] = 0;
    puVar4[3] = 0;
    ppuVar2 = (undefined **)**(longlong **)(param_1 + 0x90);
    local_res18 = puVar4;
    if (ppuVar2 == CPartitionVirtualVolumeDevice::vftable) {
      lVar5 = (*(longlong **)(param_1 + 0x90))[9];
    }
    else {
      lVar5 = (*(code *)ppuVar2[3])();
    }
    local_res18[0xc] = lVar5;
    *(undefined4 *)(local_res18 + 1) = 8;
    ppuVar2 = (undefined **)**(longlong **)(param_1 + 0x90);
    if (ppuVar2 == CPartitionVirtualVolumeDevice::vftable) {
      uVar3 = *(uint *)(*(longlong **)(param_1 + 0x90) + 7);
    }
    else {
      uVar3 = (*(code *)ppuVar2[5])();
    }
    *(uint *)((longlong)local_res18 + 0xc) = *(uint *)(param_1 + 0xa0) / uVar3;
    puVar4 = (undefined8 *)param_2[1];
    if ((undefined8 *)param_2[2] != puVar4) {
      *puVar4 = local_res18;
      param_2[1] = param_2[1] + 8;
      return;
    }
    FUN_180002070(param_2,puVar4,&local_res18);
  }
  return;
}




void FUN_180001bc0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}




void FUN_180001bf0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_98 [7];
  longlong *local_60;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_a8 = 0xfffffffffffffffe;
  local_18 = DAT_180028010 ^ (ulonglong)auStack_c8;
  local_60 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    local_60 = (longlong *)(**(code **)*puVar1)(puVar1,local_98);
  }
  if ((local_60 != local_98) && (plVar2 = (longlong *)param_1[7], plVar2 != param_1)) {
    param_1[7] = (longlong)local_60;
    local_60 = plVar2;
    goto LAB_180001d11;
  }
  local_20 = (longlong *)0x0;
  if (local_60 != (longlong *)0x0) {
    if (local_60 == local_98) {
      local_20 = (longlong *)(**(code **)(*local_60 + 8))(local_60,local_58);
      if (local_60 == (longlong *)0x0) goto LAB_180001ca6;
      (**(code **)(*local_60 + 0x20))
                (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
    }
    else {
      local_20 = local_60;
    }
    local_60 = (longlong *)0x0;
  }
LAB_180001ca6:
  FUN_180001de0((longlong)local_98,param_1);
  if (local_20 != (longlong *)0x0) {
    if (local_20 == local_58) {
      lVar3 = (**(code **)(*local_20 + 8))(local_20,param_1);
      param_1[7] = lVar3;
      if (local_20 == (longlong *)0x0) goto LAB_180001cf4;
      (**(code **)(*local_20 + 0x20))
                (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
    }
    else {
      param_1[7] = (longlong)local_20;
    }
    local_20 = (longlong *)0x0;
  }
LAB_180001cf4:
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))
              (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
    local_20 = (longlong *)0x0;
  }
LAB_180001d11:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x20))(local_60,local_60 != local_98);
    local_60 = (longlong *)0x0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_180001d60(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,struct_std::char_traits<char>_> *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




void FUN_180001db0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




void FUN_180001de0(longlong param_1,longlong *param_2)

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




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_180001e50(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  bool bVar1;
  int iVar2;
  longlong lVar3;
  __int64 _Var4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = 0;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (param_2[lVar7] != '\0');
  lVar6 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if ((lVar6 < 1) || (lVar6 <= lVar7)) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar6 - lVar7;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  lVar3 = *(longlong *)param_1;
  if (((*(int *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x10) == 0) &&
      (this = *(basic_ostream<char,struct_std::char_traits<char>_> **)
               (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x50),
      this != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0)) && (this != param_1)) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::flush(this);
    lVar3 = *(longlong *)param_1;
  }
  if (*(int *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x10) == 0) {
    lVar3 = *(longlong *)param_1;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) goto LAB_180001f9b;
      }
      lVar3 = *(longlong *)param_1;
    }
    _Var4 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x48),param_2,lVar7);
    if (_Var4 == lVar7) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) goto LAB_180001f9b;
      }
    }
    else {
LAB_180001f9b:
      iVar5 = 4;
    }
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  else {
    iVar5 = 4;
  }
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_180002030(basic_ostream<char,struct_std::char_traits<char>_> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::widen
                    ((basic_ios<char,struct_std::char_traits<char>_> *)
                     (param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<char,struct_std::char_traits<char>_>::put(param_1,cVar1);
  std::basic_ostream<char,struct_std::char_traits<char>_>::flush(param_1);
  return param_1;
}




undefined8 * FUN_180002070(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *_Dst;
  void *pvVar9;
  undefined8 *puVar10;
  size_t _Size;
  longlong lVar11;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  ulonglong local_res20;
  
  lVar11 = *param_1;
  lVar4 = param_1[1] - lVar11 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
    FUN_180002230();
    pcVar3 = (code *)swi(3);
    puVar10 = (undefined8 *)(*pcVar3)();
    return puVar10;
  }
  uVar1 = lVar4 + 1;
  uVar7 = param_1[2] - lVar11 >> 3;
  uVar5 = uVar1;
  if ((uVar7 <= 0x1fffffffffffffff - (uVar7 >> 1)) && (uVar5 = (uVar7 >> 1) + uVar7, uVar5 < uVar1))
  {
    uVar5 = uVar1;
  }
  uVar7 = uVar5 * 8;
  local_res20 = uVar5;
  if (uVar5 < 0x2000000000000000) {
    if (uVar7 < 0x1000) {
      if (uVar7 == 0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)operator_new(uVar7);
      }
      goto LAB_18000215f;
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
  puVar10 = (undefined8 *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
  puVar10[-1] = pvVar6;
LAB_18000215f:
  puVar2 = puVar10 + ((longlong)param_2 - lVar11 >> 3);
  *puVar2 = *param_3;
  pvVar6 = (void *)param_1[1];
  pvVar9 = (void *)*param_1;
  local_res10 = puVar10;
  FUN_1800022a0(local_res8);
  if (param_2 == pvVar6) {
    _Size = (longlong)pvVar6 - (longlong)pvVar9;
    _Dst = puVar10;
    param_2 = pvVar9;
  }
  else {
    memmove(puVar10,pvVar9,(longlong)param_2 - (longlong)pvVar9);
    lVar11 = param_1[1];
    FUN_1800022a0(local_res8);
    _Size = lVar11 - (longlong)param_2;
    _Dst = puVar2 + 1;
  }
  memmove(_Dst,param_2,_Size);
  pvVar6 = (void *)*param_1;
  if (pvVar6 != (void *)0x0) {
    pvVar9 = pvVar6;
    if ((0xfff < (param_1[2] - (longlong)pvVar6 & 0xfffffffffffffff8U)) &&
       (pvVar9 = *(void **)((longlong)pvVar6 + -8),
       0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar9);
  }
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1);
  param_1[2] = (longlong)(puVar10 + uVar5);
  return puVar2;
}




void FUN_180002230(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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




undefined1 * FUN_1800022a0(undefined1 *param_1)

{
  *param_1 = 0;
  return param_1;
}




void FUN_1800022b0(undefined8 *param_1)

{
  *param_1 = IDirecotryTreeBuilder::vftable;
  return;
}




undefined8 * FUN_1800022c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDirecotryTreeBuilder::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800022f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = ICompleteFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0x16];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0xf,param_3,param_4,0xfffffffffffffffe)
    ;
    param_1[0x16] = 0;
  }
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6);
    param_1[0xd] = 0;
  }
  return;
}




void FUN_180002370(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x70) = param_2;
  return;
}




void FUN_180002380(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  FUN_180001bf0((longlong *)(param_1 + 0x78),(longlong)param_2);
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return;
}




undefined8 *
FUN_1800023d0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800022f0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180002410(void)

{
  return 5;
}




undefined8 * FUN_180002420(undefined8 *param_1)

{
  *param_1 = CSearchedPartitionInfo::vftable;
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
  *param_1 = CompleteSearchPatition::vftable;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = 0xffffffffffffffff;
  param_1[0x14] = 0x1000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xffffffffffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xffffffffffffffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffffffffffff;
  param_1[0x1e] = 0xffffffffffffffff;
  param_1[0x1f] = 0xffffffffffffffff;
  param_1[0x20] = 0xffffffffffffffff;
  param_1[0x21] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return param_1;
}




undefined8 *
FUN_180002560(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Memory;
  undefined8 *puVar1;
  ulonglong uVar2;
  
  *param_1 = CompleteSearchPatition::vftable;
  uVar2 = param_2;
  if ((void *)param_1[0x16] != (void *)0x0) {
    uVar2 = 0x200;
    free((void *)param_1[0x16]);
    param_1[0x16] = 0;
  }
  if ((void *)param_1[0x1a] != (void *)0x0) {
    uVar2 = 0xb4;
    free((void *)param_1[0x1a]);
    param_1[0x1a] = 0;
  }
  if ((void *)param_1[0x1c] != (void *)0x0) {
    uVar2 = 0x2c;
    free((void *)param_1[0x1c]);
    param_1[0x1c] = 0;
  }
  _Memory = (void *)param_1[0x19];
  if (_Memory != (void *)0x0) {
    FUN_18000c010((longlong)_Memory,uVar2,param_3,param_4);
    free(_Memory);
    param_1[0x19] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x18];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x18] = 0;
  }
  *param_1 = CSearchedPartitionInfo::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180002670(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 200) = param_2;
  return;
}




undefined8 * FUN_180002680(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *_Memory;
  
  *param_1 = IFileSystemSearchController::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xe;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xd] = 0;
  *param_1 = ICompleteFileSystemSearchController::vftable;
  param_1[0x16] = 0;
  *param_1 = CHFSPlusCompleteFileSystemSearchController::vftable;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  plVar1 = param_1 + 0x1b;
  *plVar1 = 0;
  param_1[0x1c] = 0;
  puVar7 = param_1;
  lVar5 = FUN_180006f90(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  *plVar1 = lVar5;
  param_1[0x1d] = IDirecotryTreeBuilder::vftable;
  param_1[0x1d] = DetourDirectoryTree::vftable;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  uVar6 = FUN_180006a50();
  param_1[0x1f] = uVar6;
  plVar2 = param_1 + 0x22;
  *plVar2 = 0;
  param_1[0x23] = 0;
  lVar5 = FUN_180006a50();
  *plVar2 = lVar5;
  plVar3 = param_1 + 0x24;
  *plVar3 = 0;
  param_1[0x25] = 0;
  lVar5 = FUN_180006a50();
  *plVar3 = lVar5;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  uVar6 = FUN_180006a50();
  param_1[0x28] = uVar6;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  uVar6 = FUN_180006f90(puVar7,(undefined8 *)0x0,(undefined8 *)0x0);
  param_1[0x2d] = uVar6;
  plVar4 = (longlong *)*plVar1;
  _Memory = (longlong *)*plVar4;
  *plVar4 = (longlong)plVar4;
  *(longlong *)(*plVar1 + 8) = *plVar1;
  param_1[0x1c] = 0;
  if (_Memory != (longlong *)*plVar1) {
    do {
      plVar4 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar4;
    } while (plVar4 != (longlong *)*plVar1);
  }
  FUN_1800063d0(plVar2);
  FUN_1800063d0(plVar3);
  param_1[0x21] = 0;
  return param_1;
}




undefined8 *
FUN_180002850(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002970(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180002890(longlong *param_1)

{
  FUN_1800063d0(param_1);
  free((void *)*param_1);
  return;
}




void FUN_1800028c0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *_Memory;
  
  lVar1 = *param_1;
  _Memory = *(longlong **)(lVar1 + 8);
  lVar3 = lVar1;
  if (*(char *)((longlong)_Memory + 0x19) == '\0') {
    do {
      FUN_1800066c0(param_1,(longlong *)_Memory[2]);
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




void FUN_180002970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  *param_1 = CHFSPlusCompleteFileSystemSearchController::vftable;
  FUN_1800038c0((longlong)param_1);
  if ((void *)param_1[0x21] != (void *)0x0) {
    free((void *)param_1[0x21]);
    param_1[0x21] = 0;
  }
  plVar1 = param_1 + 0x2d;
  plVar6 = (longlong *)*plVar1;
  plVar4 = (longlong *)*plVar6;
  *plVar6 = (longlong)plVar6;
  *(longlong *)(*plVar1 + 8) = *plVar1;
  param_1[0x2e] = 0;
  if (plVar4 != (longlong *)*plVar1) {
    do {
      plVar6 = (longlong *)*plVar4;
      free(plVar4);
      plVar4 = plVar6;
    } while (plVar6 != (longlong *)*plVar1);
  }
  plVar6 = (longlong *)*plVar1;
  plVar4 = (longlong *)*plVar6;
  *plVar6 = (longlong)plVar6;
  *(longlong *)(*plVar1 + 8) = *plVar1;
  param_1[0x2e] = 0;
  if (plVar4 != (longlong *)*plVar1) {
    do {
      plVar6 = (longlong *)*plVar4;
      free(plVar4);
      plVar4 = plVar6;
    } while (plVar6 != (longlong *)*plVar1);
  }
  free((void *)*plVar1);
  plVar1 = param_1 + 0x28;
  lVar2 = *plVar1;
  lVar3 = lVar2;
  plVar6 = *(longlong **)(lVar2 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19) == '\0') {
    do {
      FUN_1800066c0(plVar1,(longlong *)plVar6[2]);
      plVar4 = (longlong *)*plVar6;
      free(plVar6);
      plVar6 = plVar4;
    } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
    lVar3 = *plVar1;
  }
  *(longlong *)(lVar3 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  param_1[0x29] = 0;
  free((void *)*plVar1);
  FUN_1800063d0(param_1 + 0x24);
  free((void *)param_1[0x24]);
  FUN_1800063d0(param_1 + 0x22);
  free((void *)param_1[0x22]);
  param_1[0x1d] = DetourDirectoryTree::vftable;
  FUN_1800063d0(param_1 + 0x1f);
  uVar5 = 0x30;
  free((void *)param_1[0x1f]);
  param_1[0x1d] = IDirecotryTreeBuilder::vftable;
  FUN_180006360(param_1 + 0x1b);
  FUN_1800022f0(param_1,uVar5,param_3,param_4);
  return;
}




void FUN_180002b60(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  return;
}




void FUN_180002b70(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(longlong **)(param_1 + 0xb8) = param_2;
  if (param_2 != (longlong *)0x0) {
    if ((undefined **)*param_2 == CPartitionVirtualVolumeDevice::vftable) {
      iVar1 = (int)param_2[7];
    }
    else {
      iVar1 = (*(code *)((undefined **)*param_2)[5])(param_2);
    }
    *(int *)(param_1 + 0xcc) = iVar1;
    if ((undefined **)*param_2 == CPartitionVirtualVolumeDevice::vftable) {
      lVar3 = param_2[9];
    }
    else {
      lVar3 = (*(code *)((undefined **)*param_2)[3])(param_2);
      iVar1 = *(int *)(param_1 + 0xcc);
    }
    *(longlong *)(param_1 + 0xd0) = lVar3;
    uVar2 = thunk_FUN_180018ba0((longlong)iVar1);
    *(undefined8 *)(param_1 + 0x108) = uVar2;
  }
  return;
}




void FUN_180002c00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong local_res8;
  
  iVar9 = 0;
  lVar1 = *(longlong *)(param_1 + 0xe0);
  plVar8 = (longlong *)**(longlong **)(param_1 + 0xd8);
  if (plVar8 != *(longlong **)(param_1 + 0xd8)) {
    do {
      lVar2 = plVar8[2];
      lVar3 = *(longlong *)(lVar2 + 0xb0);
      if ((lVar3 != 0) && (*(longlong *)(lVar2 + 0xb8) != -1)) {
        lVar6 = *(longlong *)(lVar2 + 0x90);
        *(longlong *)(lVar2 + 0x10) = lVar6;
        *(longlong *)(lVar2 + 0x18) = lVar6;
        if (iVar9 == 0) {
          if (lVar6 < 0) {
            lVar6 = -lVar6;
          }
          lVar6 = *(longlong *)(param_1 + 0xd0) - lVar6;
        }
        else {
          lVar6 = *(longlong *)(lVar2 + 0x98);
        }
        uVar10 = (ulonglong)*(uint *)(lVar2 + 0xa8);
        *(longlong *)(lVar2 + 0x60) = lVar6 + -1;
        *(undefined4 *)(lVar2 + 8) = 8;
        lVar6 = (lVar1 - iVar9) * 10;
        *(longlong *)(lVar2 + 0x68) = lVar6;
        uVar5 = *(uint *)(lVar2 + 0xa0) / *(uint *)(param_1 + 0xcc);
        uVar7 = (ulonglong)*(uint *)(lVar2 + 0xa4);
        *(uint *)(lVar2 + 0xc) = uVar5;
        *(ulonglong *)(lVar2 + 0x20) = uVar7;
        *(ulonglong *)(lVar2 + 0x28) = uVar10;
        if (*(longlong *)(lVar2 + 0xb8) == 2) {
          *(longlong *)(lVar2 + 0x68) = lVar6 + 0x50;
          if (uVar7 < *(uint *)(lVar3 + 0x20)) {
            uVar7 = *(uint *)(lVar3 + 0x20) + uVar7;
            *(ulonglong *)(lVar2 + 0x20) = uVar7;
          }
          if (uVar10 < *(uint *)(lVar3 + 0x24)) {
            *(ulonglong *)(lVar2 + 0x28) = *(uint *)(lVar3 + 0x24) + uVar10;
          }
        }
        if (uVar5 == 0) {
          this = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "Warn:SectorsperCluster calc Error!");
          std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(this,FUN_180002030);
          uVar7 = *(ulonglong *)(lVar2 + 0x20);
          *(int *)(lVar2 + 0xc) = (int)(0x1000 / (longlong)*(int *)(param_1 + 0xcc));
        }
        if ((uVar7 != 0) || (*(longlong *)(lVar2 + 0x28) != 0)) {
          plVar4 = (longlong *)param_2[1];
          local_res8 = lVar2;
          if ((longlong *)param_2[2] == plVar4) {
            FUN_180002070(param_2,plVar4,&local_res8);
          }
          else {
            *plVar4 = lVar2;
            param_2[1] = param_2[1] + 8;
          }
        }
      }
      plVar8 = (longlong *)*plVar8;
      iVar9 = iVar9 + 1;
    } while (plVar8 != (longlong *)*(longlong *)(param_1 + 0xd8));
  }
  return;
}




void FUN_180002dc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  void *_Memory;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar8 = param_1;
  FUN_1800038c0(param_1);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    plVar3 = FUN_18000af90(lVar8,0,*(undefined4 *)(param_1 + 200),param_4);
    *(longlong **)(param_1 + 0x158) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_180002ea6;
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))(*(longlong **)(param_1 + 0xc0),plVar3,0,0)
    ;
  }
  _Memory = (void *)thunk_FUN_180018ba0((longlong)*(int *)(param_1 + 0xcc));
  if (_Memory != (void *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                      (*(longlong **)(param_1 + 0xb8),_Memory,0,1,0);
    if (iVar2 != 0) {
      if (((*(char *)((longlong)_Memory + 0x1c2) == -0x12) &&
          (*(char *)((longlong)_Memory + 0x1fe) == 'U')) &&
         (*(char *)((longlong)_Memory + 0x1ff) == -0x56)) {
        uVar6 = (ulonglong)(*(uint *)(param_1 + 0xcc) * 2 + 0x4fff & 0xfffff000) /
                (ulonglong)*(uint *)(param_1 + 0xcc);
      }
      else {
        uVar6 = 0;
      }
      FUN_180003aa0(param_1,uVar6,*(longlong *)(param_1 + 0xd0));
    }
    free(_Memory);
  }
LAB_180002ea6:
  if (((*(longlong *)(param_1 + 0x108) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0xb8), plVar3 != (longlong *)0x0)) &&
     ((iVar2 = (**(code **)(*plVar3 + 8))(plVar3,*(longlong *)(param_1 + 0x108),2,1,0), iVar2 != 0
      && (iVar2 = FUN_18000c6e0(*(undefined8 **)(param_1 + 0x108)), iVar2 != 0)))) {
    puVar4 = (undefined8 *)FUN_180018ba0(0x200);
    lVar8 = 4;
    puVar5 = *(undefined8 **)(param_1 + 0x108);
    puVar7 = puVar4;
    do {
      uVar1 = puVar5[1];
      *puVar7 = *puVar5;
      puVar7[1] = uVar1;
      uVar1 = puVar5[3];
      puVar7[2] = puVar5[2];
      puVar7[3] = uVar1;
      uVar1 = puVar5[5];
      puVar7[4] = puVar5[4];
      puVar7[5] = uVar1;
      uVar1 = puVar5[7];
      puVar7[6] = puVar5[6];
      puVar7[7] = uVar1;
      uVar1 = puVar5[9];
      puVar7[8] = puVar5[8];
      puVar7[9] = uVar1;
      uVar1 = puVar5[0xb];
      puVar7[10] = puVar5[10];
      puVar7[0xb] = uVar1;
      uVar1 = puVar5[0xd];
      puVar7[0xc] = puVar5[0xc];
      puVar7[0xd] = uVar1;
      uVar1 = puVar5[0xf];
      puVar7[0xe] = puVar5[0xe];
      puVar7[0xf] = uVar1;
      lVar8 = lVar8 + -1;
      puVar5 = puVar5 + 0x10;
      puVar7 = puVar7 + 0x10;
    } while (lVar8 != 0);
    FUN_18000d030((undefined1 *)puVar4);
    FUN_180003b90(param_1,2,puVar4,*(int *)(param_1 + 0x10) == 8);
    return;
  }
  return;
}




undefined8 FUN_180002fb0(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined7 extraout_var;
  undefined8 *puVar8;
  int *piVar9;
  char *pcVar10;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar11;
  void *_Memory;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  bool bVar22;
  uint local_res8;
  longlong local_res10;
  ulonglong local_res18;
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    *(undefined8 *)(param_1 + 0x130) = 0x5009300000002;
    return 1;
  }
  local_res8 = 1;
  if ((param_4 != (longlong *)0x0) && (*param_4 != 0)) {
    local_res8 = *(uint *)(param_4 + 3);
  }
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 != 0) {
    do {
      if ((param_4 == (longlong *)0x0) || (*param_4 == 0)) {
LAB_180003089:
        uVar15 = 0;
        puVar8 = (undefined8 *)0x0;
        iVar19 = 0;
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                          (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x108),
                           local_res10,1,0);
        if (iVar6 == 0) {
LAB_18000323b:
          iVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                            (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x108),
                             local_res10,1,0);
          if (iVar6 == 0) {
LAB_180003443:
            iVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                              (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x108),
                               local_res10,1,0);
            if ((iVar6 == 0) ||
               (((piVar9 = *(int **)(param_1 + 0x108), *piVar9 != 0x4a4e4c78 ||
                 (piVar9[1] != 0x12345678)) ||
                (puVar8 = (undefined8 *)FUN_180018ba0(0x2c), puVar8 == (undefined8 *)0x0)))) {
              uVar13 = 0;
              bVar4 = 0;
              iVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                                (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x108),
                                 local_res10,1,0);
              uVar20 = 0;
              if (iVar6 != 0) {
                puVar17 = *(undefined1 **)(param_1 + 0x108);
                FUN_18000d360(puVar17);
                uVar20 = uVar13;
                if (((*(short *)(puVar17 + 0xc) == 0) && (bVar1 = puVar17[8], (byte)(bVar1 + 1) < 4)
                    ) && ((bVar1 & 0xfd) != 0)) {
                  if (bVar1 == 1) {
                    bVar22 = puVar17[9] == '\0';
LAB_18000359a:
                    if (!bVar22) goto LAB_180003643;
                  }
                  else if (bVar1 == 0xff) {
                    bVar22 = puVar17[9] == '\x01';
                    goto LAB_18000359a;
                  }
                  _Memory = (void *)thunk_FUN_180018ba0(0x8000);
                  if (_Memory != (void *)0x0) {
                    (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                              (*(longlong **)(param_1 + 0xb8),_Memory,local_res10,
                               (longlong)(int)(0x8000 / (longlong)*(int *)(param_1 + 0xcc)),0);
                    uVar13 = *(uint *)(param_1 + 0xcc);
                    while (uVar20 = 0, uVar13 < 0x8001) {
                      iVar6 = FUN_180010720((longlong)_Memory,(ushort)uVar13);
                      if (iVar6 != 0) {
                        uVar20 = 1 << (bVar4 & 0x1f);
                        FUN_180003ea0(param_1,local_res10,(longlong)_Memory,(ushort)uVar13);
                        break;
                      }
                      bVar4 = bVar4 + 1;
                      uVar13 = (1 << (bVar4 & 0x1f)) * *(int *)(param_1 + 0xcc);
                    }
                    free(_Memory);
                  }
                }
              }
LAB_180003643:
              uVar15 = (ulonglong)uVar20;
              if ((longlong)local_res18 <= (longlong)(ulonglong)uVar20) {
                uVar15 = local_res18 & 0xffffffff;
              }
              if ((int)uVar15 == 0) goto LAB_1800033be;
              local_res18 = local_res18 - uVar15;
              goto LAB_1800033c6;
            }
            uVar3 = *(undefined8 *)(piVar9 + 2);
            *puVar8 = *(undefined8 *)piVar9;
            puVar8[1] = uVar3;
            uVar3 = *(undefined8 *)(piVar9 + 6);
            puVar8[2] = *(undefined8 *)(piVar9 + 4);
            puVar8[3] = uVar3;
            puVar8[4] = *(undefined8 *)(piVar9 + 8);
            *(int *)(puVar8 + 5) = piVar9[10];
            if (*(longlong *)(param_1 + 0xe0) != 0) {
              lVar21 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 8) + 0x10);
              if ((*(longlong *)(lVar21 + 0xe8) == -1) || (*(longlong *)(lVar21 + 0xe0) == 0)) {
                *(longlong *)(lVar21 + 0xe8) = local_res10;
                *(undefined8 **)(lVar21 + 0xe0) = puVar8;
              }
              goto LAB_1800033be;
            }
            pbVar11 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref
                                    ,"Error:");
            iVar6 = 0x217;
          }
          else {
            puVar8 = *(undefined8 **)(param_1 + 0x108);
            FUN_18000db70((undefined1 *)puVar8);
            if (((*(uint *)((longlong)puVar8 + 0x2c) & 0x1ff) != 0) ||
               ((*(uint *)((longlong)puVar8 + 0x24) & 0x1ff) != 0)) goto LAB_180003443;
            lVar21 = 0;
            piVar9 = (int *)((longlong)puVar8 + 0x34);
            do {
              if (*piVar9 != 0) goto LAB_180003443;
              lVar21 = lVar21 + 1;
              piVar9 = piVar9 + 1;
            } while (lVar21 < 0x20);
            iVar6 = *(int *)(param_1 + 0xcc);
            iVar19 = 0xb4;
            bVar22 = iVar6 == 0xb4;
            if (0xb4 < iVar6) {
              pcVar10 = (char *)(*(longlong *)(param_1 + 0x108) + 0xb4);
              do {
                if (*pcVar10 != -0x25) break;
                iVar19 = iVar19 + 1;
                pcVar10 = pcVar10 + 1;
              } while (iVar19 < iVar6);
              bVar22 = iVar6 == iVar19;
            }
            if ((!bVar22) ||
               (puVar14 = (undefined8 *)FUN_180018ba0(0xb4), puVar14 == (undefined8 *)0x0))
            goto LAB_180003443;
            uVar3 = puVar8[1];
            *puVar14 = *puVar8;
            puVar14[1] = uVar3;
            uVar3 = puVar8[3];
            puVar14[2] = puVar8[2];
            puVar14[3] = uVar3;
            uVar3 = puVar8[5];
            puVar14[4] = puVar8[4];
            puVar14[5] = uVar3;
            uVar3 = puVar8[7];
            puVar14[6] = puVar8[6];
            puVar14[7] = uVar3;
            uVar3 = puVar8[9];
            puVar14[8] = puVar8[8];
            puVar14[9] = uVar3;
            uVar3 = puVar8[0xb];
            puVar14[10] = puVar8[10];
            puVar14[0xb] = uVar3;
            uVar3 = puVar8[0xd];
            puVar14[0xc] = puVar8[0xc];
            puVar14[0xd] = uVar3;
            uVar3 = puVar8[0xf];
            puVar14[0xe] = puVar8[0xe];
            puVar14[0xf] = uVar3;
            uVar3 = puVar8[0x11];
            puVar14[0x10] = puVar8[0x10];
            puVar14[0x11] = uVar3;
            uVar3 = puVar8[0x13];
            puVar14[0x12] = puVar8[0x12];
            puVar14[0x13] = uVar3;
            uVar3 = puVar8[0x15];
            puVar14[0x14] = puVar8[0x14];
            puVar14[0x15] = uVar3;
            *(undefined4 *)(puVar14 + 0x16) = *(undefined4 *)(puVar8 + 0x16);
            if (*(longlong *)(param_1 + 0xe0) != 0) {
              lVar21 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 8) + 0x10);
              if ((*(longlong *)(lVar21 + 0xd8) == -1) || (*(longlong *)(lVar21 + 0xd0) == 0)) {
                *(longlong *)(lVar21 + 0xd8) = local_res10;
                *(undefined8 **)(lVar21 + 0xd0) = puVar14;
              }
              goto LAB_1800033be;
            }
            pbVar11 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref
                                    ,"Error:");
            iVar6 = 499;
          }
          pbVar11 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                              (pbVar11,iVar6);
          std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar11,FUN_180002030)
          ;
          goto LAB_1800033be;
        }
        iVar6 = 0;
        if (0 < (int)(*(int *)(param_1 + 0xcc) + (*(int *)(param_1 + 0xcc) >> 0x1f & 0x1ffU)) >> 9)
        {
          lVar21 = 0;
          iVar18 = 0;
          do {
            puVar14 = (undefined8 *)((longlong)iVar18 + *(longlong *)(param_1 + 0x108));
            iVar7 = memcmp(puVar14,&DAT_18001ca20,0x200);
            if (iVar7 != 0) {
              iVar7 = FUN_18000c6e0(puVar14);
              if (iVar7 == 0) break;
              puVar8 = (undefined8 *)FUN_180018ba0(0x200);
              if (puVar8 == (undefined8 *)0x0) goto LAB_180003215;
              lVar16 = 4;
              puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x108) + lVar21);
              puVar12 = puVar8;
              do {
                uVar3 = puVar14[1];
                *puVar12 = *puVar14;
                puVar12[1] = uVar3;
                uVar3 = puVar14[3];
                puVar12[2] = puVar14[2];
                puVar12[3] = uVar3;
                uVar3 = puVar14[5];
                puVar12[4] = puVar14[4];
                puVar12[5] = uVar3;
                uVar3 = puVar14[7];
                puVar12[6] = puVar14[6];
                puVar12[7] = uVar3;
                uVar3 = puVar14[9];
                puVar12[8] = puVar14[8];
                puVar12[9] = uVar3;
                uVar3 = puVar14[0xb];
                puVar12[10] = puVar14[10];
                puVar12[0xb] = uVar3;
                uVar3 = puVar14[0xd];
                puVar12[0xc] = puVar14[0xc];
                puVar12[0xd] = uVar3;
                uVar3 = puVar14[0xf];
                puVar12[0xe] = puVar14[0xe];
                puVar12[0xf] = uVar3;
                lVar16 = lVar16 + -1;
                puVar14 = puVar14 + 0x10;
                puVar12 = puVar12 + 0x10;
              } while (lVar16 != 0);
              FUN_18000d030((undefined1 *)puVar8);
              iVar19 = iVar19 + 1;
              uVar15 = 1;
            }
            iVar6 = iVar6 + 1;
            iVar18 = iVar18 + 0x200;
            lVar21 = lVar21 + 0x200;
          } while (iVar6 < (int)(*(int *)(param_1 + 0xcc) +
                                (*(int *)(param_1 + 0xcc) >> 0x1f & 0x1ffU)) >> 9);
        }
        if ((iVar6 == (int)(*(int *)(param_1 + 0xcc) + (*(int *)(param_1 + 0xcc) >> 0x1f & 0x1ffU))
                      >> 9) && (iVar19 == 1)) {
          FUN_180003b90(param_1,local_res10,puVar8,'\0');
        }
LAB_180003215:
        if ((int)uVar15 == 0) goto LAB_18000323b;
        local_res18 = local_res18 - uVar15;
      }
      else {
        bVar4 = FUN_180018460(param_4,local_res10 / (longlong)(ulonglong)local_res8);
        if (((int)CONCAT71(extraout_var,bVar4) == 0) &&
           ((plVar2 = (longlong *)param_4[0xc], plVar2 == (longlong *)0x0 ||
            (cVar5 = (**(code **)(*plVar2 + 0x20))
                               (plVar2,local_res10 / (longlong)(ulonglong)local_res8), cVar5 == '\0'
            )))) goto LAB_180003089;
LAB_1800033be:
        local_res18 = local_res18 - 1;
        uVar15 = 1;
      }
LAB_1800033c6:
      local_res10 = local_res10 + uVar15;
    } while (local_res18 != 0);
  }
  return 1;
}




void FUN_180003670(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  plVar9 = (longlong *)**(longlong **)(param_1 + 0xd8);
  if (plVar9 != *(longlong **)(param_1 + 0xd8)) {
    do {
      lVar1 = plVar9[2];
      if (*(int *)(lVar1 + 0xa4) != 0) {
        lVar2 = *(longlong *)(lVar1 + 0xb0);
        lVar10 = *(longlong *)(lVar1 + 0x90);
        lVar3 = *(longlong *)(lVar1 + 0x98);
        uVar12 = *(uint *)(lVar1 + 0xa0);
        if (lVar2 == 0) {
          pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                 "ErrorLine:");
          puVar7 = (undefined8 *)std::setbase((int)local_28);
          (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1))
          ;
          pbVar6 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,0x118)
          ;
          pcVar8 = " Can\'t Find Volume Head!";
LAB_180003842:
          pbVar6 = FUN_180001e50(pbVar6,pcVar8);
          std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,FUN_180002030);
        }
        else {
          uVar12 = *(uint *)(lVar2 + 0x28);
          uVar13 = (ulonglong)uVar12;
          lVar11 = (longlong)*(int *)(param_1 + 0xcc);
          lVar3 = (longlong)(*(uint *)(lVar2 + 0x2c) * uVar13) / lVar11;
          if ((*(longlong *)(lVar1 + 0xd0) == 0) || (*(uint *)(lVar2 + 0xc) == 0)) {
LAB_180003728:
            lVar4 = *(longlong *)(lVar1 + 0x108);
            if ((lVar4 == -1) ||
               (lVar5 = (longlong)(*(uint *)(lVar2 + 0x120) * uVar13) / lVar11, lVar4 < lVar5)) {
              lVar4 = *(longlong *)(lVar1 + 0xd8);
              if ((lVar4 == -1) ||
                 (lVar5 = (longlong)(*(uint *)(lVar2 + 0xc) * uVar13) / lVar11, lVar4 < lVar5)) {
                lVar1 = *(longlong *)(lVar1 + 0x100);
                if ((lVar1 == -1) ||
                   (lVar11 = (longlong)(*(uint *)(lVar2 + 0xd0) * uVar13) / lVar11, lVar1 < lVar11))
                {
                  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                         cout_exref,"ErrorLine:");
                  puVar7 = (undefined8 *)std::setbase((int)local_38);
                  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                                     *(undefined4 *)(puVar7 + 1));
                  pbVar6 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                                     (pbVar6,0x113);
                  pcVar8 = " Can\'t Find Volume Start Sector!";
                  goto LAB_180003842;
                }
                lVar10 = lVar1 - lVar11;
              }
              else {
                lVar10 = lVar4 - lVar5;
              }
            }
            else {
              lVar10 = lVar4 - lVar5;
            }
          }
          else {
            lVar4 = (longlong)(*(uint *)(lVar2 + 0xc) * uVar13) / lVar11;
            if (*(longlong *)(lVar1 + 0xd8) < lVar4) goto LAB_180003728;
            lVar10 = *(longlong *)(lVar1 + 0xd8) - lVar4;
          }
        }
        *(longlong *)(plVar9[2] + 0x90) = lVar10;
        lVar10 = *(longlong *)(param_1 + 0xd0) - lVar10;
        if (lVar10 < lVar3) {
          lVar3 = lVar10;
        }
        *(longlong *)(plVar9[2] + 0x98) = lVar3;
        *(uint *)(plVar9[2] + 0xa0) = uVar12;
      }
      plVar9 = (longlong *)*plVar9;
    } while (plVar9 != (longlong *)*(longlong *)(param_1 + 0xd8));
  }
  FUN_180005d80(param_1);
  return;
}




void FUN_1800038c0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xd8);
  plVar5 = (longlong *)*plVar4;
  if (plVar5 != plVar4) {
    do {
      puVar2 = (undefined8 *)plVar5[2];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      plVar5 = (longlong *)*plVar5;
      plVar4 = *(longlong **)(param_1 + 0xd8);
    } while (plVar5 != plVar4);
    plVar5 = (longlong *)*plVar4;
  }
  *plVar4 = (longlong)plVar4;
  *(longlong *)(*(longlong *)(param_1 + 0xd8) + 8) = *(longlong *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (plVar5 != *(longlong **)(param_1 + 0xd8)) {
    do {
      plVar4 = (longlong *)*plVar5;
      free(plVar5);
      plVar5 = plVar4;
    } while (plVar4 != (longlong *)*(longlong *)(param_1 + 0xd8));
  }
  plVar4 = (longlong *)**(longlong **)(param_1 + 0x110);
  if (plVar4 != *(longlong **)(param_1 + 0x110)) {
    do {
      free((void *)plVar4[4]);
      if ((void *)plVar4[5] != (void *)0x0) {
        free((void *)plVar4[5]);
        plVar4[5] = 0;
      }
      plVar5 = (longlong *)plVar4[2];
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar4 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar4 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar3 = (longlong *)plVar4[1];
        plVar5 = plVar4;
        while ((plVar4 = plVar3, cVar1 == '\0' && (plVar5 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar5 = plVar4;
        }
      }
    } while (plVar4 != *(longlong **)(param_1 + 0x110));
  }
  FUN_1800063d0((longlong *)(param_1 + 0x110));
  plVar4 = (longlong *)**(longlong **)(param_1 + 0x120);
  if (plVar4 != *(longlong **)(param_1 + 0x120)) {
    do {
      free((void *)plVar4[4]);
      if ((void *)plVar4[5] != (void *)0x0) {
        free((void *)plVar4[5]);
        plVar4[5] = 0;
      }
      plVar5 = (longlong *)plVar4[2];
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar4 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar4 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar3 = (longlong *)plVar4[1];
        plVar5 = plVar4;
        while ((plVar4 = plVar3, cVar1 == '\0' && (plVar5 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar5 = plVar4;
        }
      }
    } while (plVar4 != *(longlong **)(param_1 + 0x120));
  }
  FUN_1800063d0((longlong *)(param_1 + 0x120));
  return;
}




void FUN_180003aa0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *local_res20;
  
  local_res20 = (undefined8 *)FUN_180018ba0(0x118);
  if (local_res20 != (undefined8 *)0x0) {
    local_res20 = FUN_180002420(local_res20);
  }
  if (local_res20 != (undefined8 *)0x0) {
    local_res20[0x12] = param_2;
    lVar5 = *(longlong *)(param_1 + 0xd0) - param_2;
    if (lVar5 < param_3) {
      param_3 = lVar5;
    }
    local_res20[0x13] = param_3;
    uVar1 = *(uint *)(param_1 + 0xe0);
    *(uint *)(local_res20 + 0x22) = uVar1;
    puVar2 = *(undefined8 **)(param_1 + 0xd8);
    puVar3 = (undefined8 *)puVar2[1];
    uVar6 = FUN_180007550((ulonglong)uVar1,puVar2,puVar3,&local_res20);
    if (*(longlong *)(param_1 + 0xe0) == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + 1;
    puVar2[1] = uVar6;
    *puVar3 = uVar6;
  }
  return;
}




void FUN_180003b90(longlong param_1,longlong param_2,void *param_3,char param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *local_res8;
  
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    pbVar10 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                            "Error:");
    pbVar10 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar10,0x19d);
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar10,FUN_180002030);
    return;
  }
  if (param_3 == (void *)0x0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if ((undefined **)*plVar2 == CPartitionVirtualVolumeDevice::vftable) {
    iVar8 = (int)plVar2[7];
  }
  else {
    iVar8 = (*(code *)((undefined **)*plVar2)[5])();
  }
  if (iVar8 < 0x200) {
    return;
  }
  puVar11 = *(undefined8 **)(param_1 + 0xd8);
  lVar3 = *(longlong *)(puVar11[1] + 0x10);
  if ((*(longlong *)(lVar3 + 0xb8) != -1) && (lVar18 = *(longlong *)(lVar3 + 0xb0), lVar18 != 0)) {
    puVar12 = (undefined8 *)0x0;
    iVar8 = 0;
    puVar17 = puVar12;
    for (puVar4 = (undefined8 *)*puVar11; puVar4 != puVar11; puVar4 = (undefined8 *)*puVar4) {
      if ((*(longlong *)(puVar4[2] + 0xb0) != 0) &&
         (*(int *)((longlong)param_3 + 0x10) == *(int *)(*(longlong *)(puVar4[2] + 0xb0) + 0x10))) {
        puVar17 = (undefined8 *)0x1;
      }
      iVar8 = (int)puVar17;
    }
    uVar9 = *(uint *)((longlong)param_3 + 0x2c);
    uVar16 = (ulonglong)(*(int *)((longlong)param_3 + 0x28) * uVar9) /
             (ulonglong)*(uint *)(param_1 + 0xcc);
    if ((iVar8 != 0) || (*(longlong *)(param_1 + 0xd0) <= (longlong)uVar16)) {
      if (*(uint *)(lVar18 + 0x2c) < uVar9) {
        *(uint *)(lVar18 + 0x2c) = uVar9;
      }
      free(param_3);
      return;
    }
    puVar11 = (undefined8 *)FUN_180018ba0(0x118);
    if (puVar11 != (undefined8 *)0x0) {
      puVar12 = FUN_180002420(puVar11);
    }
    if (puVar12 == (undefined8 *)0x0) {
      return;
    }
    puVar12[0x12] = param_2 + -2;
    uVar13 = *(longlong *)(param_1 + 0xd0) - puVar12[0x12];
    if ((longlong)uVar13 < (longlong)uVar16) {
      uVar16 = uVar13;
    }
    puVar12[0x13] = uVar16;
    puVar12[0x17] = param_2;
    puVar12[0x16] = param_3;
    uVar9 = *(uint *)(param_1 + 0xe0);
    *(uint *)(puVar12 + 0x22) = uVar9;
    puVar11 = *(undefined8 **)(param_1 + 0xd8);
    puVar4 = (undefined8 *)puVar11[1];
    local_res8 = puVar12;
    uVar14 = FUN_180007550((ulonglong)uVar9,puVar11,puVar4,&local_res8);
    if (*(longlong *)(param_1 + 0xe0) != 0xaaaaaaaaaaaaaa9) {
      *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + 1;
      puVar11[1] = uVar14;
      *puVar4 = uVar14;
      return;
    }
    std::_Xlength_error("list<T> too long");
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(longlong *)(lVar3 + 0xb8) = param_2;
  *(void **)(lVar3 + 0xb0) = param_3;
  ppuVar5 = (undefined **)**(longlong **)(param_1 + 0xb8);
  if (ppuVar5 == CPartitionVirtualVolumeDevice::vftable) {
    uVar9 = *(uint *)(*(longlong **)(param_1 + 0xb8) + 7);
  }
  else {
    uVar9 = (*(code *)ppuVar5[5])();
  }
  uVar1 = *(uint *)((longlong)param_3 + 0x28);
  uVar7 = uVar1 / uVar9;
  if ((longlong)(ulonglong)(*(int *)((longlong)param_3 + 0x120) * uVar7) < param_2) {
    lVar18 = (param_2 - (ulonglong)(uVar7 * *(int *)((longlong)param_3 + 0x2c))) + 2;
    *(longlong *)(lVar3 + 0x90) = lVar18;
    if (-1 < lVar18) {
      plVar2 = *(longlong **)(param_1 + 0xb8);
      if ((undefined **)*plVar2 == CPartitionVirtualVolumeDevice::vftable) {
        lVar15 = plVar2[9];
      }
      else {
        lVar15 = (*(code *)((undefined **)*plVar2)[3])(plVar2,(ulonglong)uVar1 % (ulonglong)uVar9);
        lVar18 = *(longlong *)(lVar3 + 0x90);
      }
      if (lVar18 <= lVar15) goto LAB_180003e4d;
    }
    *(undefined8 *)(lVar3 + 0x90) = 0;
  }
  else {
    lVar18 = param_2 + -2;
    if (param_2 + -2 < 0) {
      lVar18 = 0;
    }
    *(longlong *)(lVar3 + 0x90) = lVar18;
  }
LAB_180003e4d:
  if (param_4 != '\0') {
    *(undefined1 *)(lVar3 + 0x7c) = 1;
    *(undefined4 *)(lVar3 + 0x80) = 1;
  }
  return;
}




ushort FUN_180003ea0(longlong param_1,longlong param_2,longlong param_3,ushort param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  short *psVar5;
  longlong *plVar6;
  ushort uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  char cVar10;
  longlong lVar11;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  char *pcVar23;
  longlong **pplVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort local_res8;
  longlong *local_98;
  longlong *local_90;
  ushort local_88 [4];
  ulonglong local_80;
  void *local_78;
  int local_70;
  void *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  local_50 = 0xfffffffffffffffe;
  uVar25 = 0;
  uVar26 = 0;
  uVar7 = 0;
  local_res8 = 0;
  FUN_180010110(local_88,param_3,param_4,0);
  uVar14 = local_80;
  *(ulonglong *)(param_1 + 0x130) = local_80;
  if ((local_80 & 0xff00000000000000) == 0) {
    cVar10 = *(char *)((longlong)local_68 + 8);
    if (((cVar10 == '\x01') && (*(longlong *)(param_1 + 0x150) == 0)) &&
       (*(longlong *)(param_1 + 0xe0) != 0)) {
      *(longlong *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 8) + 0x10) + 0xf0) =
           param_2;
      cVar10 = *(char *)((longlong)local_68 + 8);
    }
    uVar27 = 0;
    if ((cVar10 == -1) && (iVar19 = FUN_1800102d0(local_88), uVar27 = uVar26, iVar19 != 0)) {
      if (iVar19 == 3) {
        if (*(longlong *)(param_1 + 0x150) != 0) goto LAB_18000402b;
        uVar26 = 0;
        while (local_68 != (void *)0x0) {
          local_80 = 0;
          uVar27 = local_res8;
          if (*(ushort *)((longlong)local_68 + 10) <= uVar26) goto LAB_18000402b;
          local_98 = (longlong *)0x0;
          local_90 = (longlong *)0x0;
          uVar14 = FUN_18000fbe0((short *)local_88,uVar26,&local_98);
          *(ulonglong *)(param_1 + 0x130) = uVar14;
          if ((uVar14 & 0xff00000000000000) == 0) {
            pplVar24 = &local_90;
            uVar14 = FUN_18000fe90((short *)local_88,uVar26,pplVar24);
            plVar22 = local_90;
            *(ulonglong *)(param_1 + 0x130) = uVar14;
            if ((uVar14 & 0xff00000000000000) != 0) {
              *(undefined8 *)(param_1 + 0x130) = 0;
              if (local_90 != (longlong *)0x0) {
                free(local_90);
              }
              goto LAB_180004766;
            }
            plVar4 = *(longlong **)(param_1 + 0x110);
            plVar21 = (longlong *)*plVar4;
            plVar17 = local_98;
            if (plVar21 != plVar4) {
              bVar1 = *(byte *)((longlong)local_98 + 2);
              pplVar24 = (longlong **)(ulonglong)bVar1;
              do {
                psVar5 = (short *)plVar21[4];
                if ((bVar1 <= *(byte *)(psVar5 + 1)) && (*(byte *)(psVar5 + 1) <= bVar1)) {
                  if ((*(uint *)((longlong)local_98 + 4) <= *(uint *)(psVar5 + 2)) &&
                     (*(uint *)(psVar5 + 2) <= *(uint *)((longlong)local_98 + 4))) {
                    if (((*(uint *)(local_98 + 1) <= *(uint *)(psVar5 + 4)) &&
                        (*(uint *)(psVar5 + 4) <= *(uint *)(local_98 + 1))) &&
                       (*psVar5 == (short)*local_98)) {
                      free(local_98);
                      plVar17 = (longlong *)0x0;
                      if ((void *)plVar21[5] != (void *)0x0) {
                        free((void *)plVar21[5]);
                      }
                      plVar21[5] = (longlong)plVar22;
                      break;
                    }
                  }
                }
                plVar6 = (longlong *)plVar21[2];
                if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
                  cVar10 = *(char *)(*plVar6 + 0x19);
                  plVar21 = plVar6;
                  plVar6 = (longlong *)*plVar6;
                  while (cVar10 == '\0') {
                    cVar10 = *(char *)(*plVar6 + 0x19);
                    plVar21 = plVar6;
                    plVar6 = (longlong *)*plVar6;
                  }
                }
                else {
                  cVar10 = *(char *)(plVar21[1] + 0x19);
                  plVar8 = (longlong *)plVar21[1];
                  plVar6 = plVar21;
                  while ((plVar21 = plVar8, cVar10 == '\0' && (plVar6 == (longlong *)plVar21[2]))) {
                    cVar10 = *(char *)(plVar21[1] + 0x19);
                    plVar8 = (longlong *)plVar21[1];
                    plVar6 = plVar21;
                  }
                }
              } while (plVar21 != plVar4);
            }
            if (plVar21 == *(longlong **)(param_1 + 0x110)) {
              local_58 = plVar22;
              local_60 = plVar17;
              FUN_1800071b0((longlong *)(param_1 + 0x110),local_48,pplVar24,&local_60);
            }
LAB_1800048c8:
            uVar26 = uVar26 + 1;
          }
          else {
            *(undefined8 *)(param_1 + 0x130) = 0;
LAB_180004766:
            if (local_98 == (longlong *)0x0) goto LAB_1800048c8;
            free(local_98);
            uVar26 = uVar26 + 1;
          }
        }
      }
      else {
        if (iVar19 != 4) {
          if ((iVar19 == 8) && (*(longlong *)(param_1 + 0x150) == 0)) {
            FUN_180003aa0(param_1,param_2,8);
            while (local_68 != (void *)0x0) {
              local_80 = 0;
              uVar27 = 0;
              if (*(ushort *)((longlong)local_68 + 10) <= uVar25) goto LAB_18000402b;
              local_90 = (longlong *)0x0;
              local_98 = (longlong *)0x0;
              uVar14 = FUN_18000dee0(local_88,uVar25,&local_90);
              *(ulonglong *)(param_1 + 0x130) = uVar14;
              if ((uVar14 & 0xff00000000000000) == 0) {
                pplVar24 = &local_98;
                uVar14 = FUN_18000e200(local_88,uVar25,pplVar24);
                plVar22 = local_90;
                *(ulonglong *)(param_1 + 0x130) = uVar14;
                if ((uVar14 & 0xff00000000000000) != 0) {
                  *(undefined8 *)(param_1 + 0x130) = 0;
                  if (local_98 != (longlong *)0x0) {
                    free(local_98);
                  }
                  goto LAB_18000417a;
                }
                puVar13 = *(undefined8 **)(param_1 + 0x120);
                puVar2 = (undefined8 *)*puVar13;
                while (puVar2 != puVar13) {
                  uVar15 = FUN_18000de20(puVar2[4],(longlong)plVar22);
                  if ((int)uVar15 == 0) {
                    if (plVar22 != (longlong *)0x0) {
                      free(plVar22);
                      plVar22 = (longlong *)0x0;
                    }
                    if ((void *)puVar2[5] != (void *)0x0) {
                      free((void *)puVar2[5]);
                    }
                    puVar2[5] = local_98;
                    break;
                  }
                  puVar3 = (undefined8 *)puVar2[2];
                  if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
                    cVar10 = *(char *)((longlong)*puVar3 + 0x19);
                    puVar2 = puVar3;
                    puVar3 = (undefined8 *)*puVar3;
                    while (cVar10 == '\0') {
                      cVar10 = *(char *)((longlong)*puVar3 + 0x19);
                      puVar2 = puVar3;
                      puVar3 = (undefined8 *)*puVar3;
                    }
                  }
                  else {
                    cVar10 = *(char *)((longlong)puVar2[1] + 0x19);
                    puVar9 = (undefined8 *)puVar2[1];
                    puVar3 = puVar2;
                    while ((puVar2 = puVar9, cVar10 == '\0' && (puVar3 == (undefined8 *)puVar2[2])))
                    {
                      cVar10 = *(char *)((longlong)puVar2[1] + 0x19);
                      puVar9 = (undefined8 *)puVar2[1];
                      puVar3 = puVar2;
                    }
                  }
                }
                if (puVar2 == *(undefined8 **)(param_1 + 0x120)) {
                  local_58 = local_98;
                  local_60 = plVar22;
                  FUN_1800071b0((longlong *)(param_1 + 0x120),local_48,pplVar24,&local_60);
                }
LAB_180004281:
                uVar25 = uVar25 + 1;
              }
              else {
                *(undefined8 *)(param_1 + 0x130) = 0;
LAB_18000417a:
                if (local_90 == (longlong *)0x0) goto LAB_180004281;
                free(local_90);
                uVar25 = uVar25 + 1;
              }
            }
            local_80 = 0x5002c00000002;
            uVar27 = 0;
          }
          goto LAB_18000402b;
        }
        uVar26 = 0;
        while (uVar14 = 0, local_68 != (void *)0x0) {
          local_80 = 0;
          uVar27 = uVar7;
          if (*(ushort *)((longlong)local_68 + 10) <= uVar26) goto LAB_18000402b;
          local_90 = (longlong *)0x0;
          local_98 = (longlong *)0x0;
          uVar16 = FUN_18000ef30(local_88,uVar26,&local_90);
          *(ulonglong *)(param_1 + 0x130) = uVar16;
          if ((uVar16 & 0xff00000000000000) == 0) {
            uVar16 = FUN_18000f2d0(local_88,uVar26,&local_98);
            plVar22 = local_98;
            *(ulonglong *)(param_1 + 0x130) = uVar16;
            if (((uVar16 & 0xff00000000000000) != 0) || (local_98 == (longlong *)0x0)) {
              *(undefined8 *)(param_1 + 0x130) = 0;
              if (local_98 != (longlong *)0x0) {
                free(local_98);
              }
              goto LAB_180004332;
            }
            if ((ushort)((short)*local_98 - 3U) < 2) {
              *(undefined8 *)(param_1 + 0x130) = 0;
              free(local_98);
              goto LAB_180004332;
            }
            uVar16 = uVar14;
            if (*(longlong *)(param_1 + 0xe0) != 0) {
              uVar16 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 8) + 0x10);
            }
            if ((((*(longlong *)(param_1 + 0x150) == 0) && (uVar16 != 0)) &&
                (*(int *)(uVar16 + 0xa0) == 0)) &&
               (((short)*local_98 == 2 && (1 < *(uint *)((longlong)local_98 + 100))))) {
              uVar20 = *(uint *)(param_1 + 0xcc);
              if (uVar20 < 0x8001) {
                uVar18 = uVar20;
                do {
                  if ((ulonglong)local_98[0xb] <=
                      (ulonglong)uVar18 * (ulonglong)*(uint *)((longlong)local_98 + 100)) {
                    *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 8) + 0x10)
                             + 0xa0) = uVar18;
                    break;
                  }
                  uVar18 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar18;
                  uVar18 = (1 << ((byte)uVar18 & 0x1f)) * uVar20;
                } while (uVar18 < 0x8001);
              }
            }
            local_98 = (longlong *)0x0;
            lVar11 = FUN_180005390(param_1,(short *)plVar22,param_2,(int *)&local_98);
            if (lVar11 == 0) {
              free(plVar22);
              goto LAB_180004332;
            }
            plVar17 = (longlong *)FUN_180018ba0(0xd0);
            plVar21 = local_90;
            plVar4 = local_98;
            local_60 = plVar17;
            if (plVar17 != (longlong *)0x0) {
              uVar25 = *(ushort *)(lVar11 + 0x110);
              *plVar17 = (longlong)CFileNode::vftable;
              plVar17[1] = 0;
              plVar17[2] = 0;
              plVar17[3] = 0;
              plVar17[5] = 0;
              plVar17[6] = 0;
              plVar17[7] = 0;
              plVar17[8] = 0;
              plVar17[0xc] = 0;
              *(undefined4 *)(plVar17 + 0xd) = 0xffff;
              *(undefined4 *)((longlong)plVar17 + 0x6c) = 0xffff;
              *(undefined2 *)(plVar17 + 0xe) = 0;
              *(undefined8 *)((longlong)plVar17 + 0x75) = 0;
              *(undefined4 *)((longlong)plVar17 + 0x7d) = 0;
              *(undefined8 *)((longlong)plVar17 + 0x81) = 0;
              *(undefined2 *)((longlong)plVar17 + 0x91) = 0;
              plVar17[0xb] = 0;
              plVar17[9] = -1;
              plVar17[10] = -1;
              *(byte *)((longlong)plVar17 + 0x72) = *(byte *)((longlong)plVar17 + 0x72) & 0xf8;
              *(undefined1 *)((longlong)plVar17 + 0x91) = 2;
              *(undefined8 *)((longlong)plVar17 + 0x89) = 0;
              *(byte *)((longlong)plVar17 + 0x72) = *(byte *)((longlong)plVar17 + 0x72) & 7;
              plVar17[4] = 0;
              *(undefined1 *)((longlong)plVar17 + 0x73) = 0x20;
              *(byte *)((longlong)plVar17 + 0x74) = *(byte *)((longlong)plVar17 + 0x74) & 0xf8;
              *plVar17 = (longlong)CHFSPlusFileNode::vftable;
              plVar17[0x13] = 0;
              *(undefined4 *)(plVar17 + 0x14) = 0;
              plVar17[0x15] = (longlong)local_98;
              plVar17[0x16] = 0;
              plVar17[0x17] = 0;
              plVar17[0x18] = 0;
              *(undefined4 *)(plVar17 + 0x19) = 0;
              *(undefined2 *)((longlong)plVar17 + 0xcc) = 0;
              *(undefined1 *)((longlong)plVar17 + 0xce) = 0;
              FUN_180009940(plVar17,(longlong)local_98,param_2,uVar25,(longlong)local_90,
                            (short *)plVar22,0);
              plVar17[7] = (longlong)plVar4;
            }
            free(plVar22);
            if (plVar21 != (longlong *)0x0) {
              free(plVar21);
            }
            if (plVar17 == (longlong *)0x0) goto LAB_1800046b6;
            if (plVar17[10] == -1) {
              (**(code **)(*plVar17 + 0x30))(plVar17,1);
              goto LAB_1800046b6;
            }
            if (*(longlong *)(param_1 + 0xc0) == 0) goto LAB_1800046b6;
            local_98 = (longlong *)0x0;
            if (*(longlong *)(param_1 + 0x150) == 0) {
              if ((undefined **)*plVar17 == CHFSPlusFileNode::vftable) {
                uVar20 = *(byte *)((longlong)plVar17 + 0xce) >> 1 & 1;
              }
              else {
                uVar20 = (*(code *)((undefined **)*plVar17)[0xd])(plVar17);
              }
              iVar19 = (**(code **)(*(longlong *)(param_1 + 0xe8) + 0x28))
                                 ((longlong *)(param_1 + 0xe8),plVar17,5,&local_98);
              if (iVar19 == 0) {
                (**(code **)(*plVar17 + 0x30))(plVar17,1);
                uVar26 = uVar26 + 1;
              }
              else if (uVar20 == 0) {
                *(int *)(lVar11 + 0xa4) = *(int *)(lVar11 + 0xa4) + 1;
                uVar7 = 1;
                uVar26 = uVar26 + 1;
              }
              else {
                *(int *)(lVar11 + 0xa8) = *(int *)(lVar11 + 0xa8) + 1;
                uVar7 = 1;
                uVar26 = uVar26 + 1;
              }
            }
            else {
              iVar19 = (**(code **)(*(longlong *)(param_1 + 0xe8) + 0x20))
                                 ((longlong *)(param_1 + 0xe8),plVar17);
              if (iVar19 != 0) goto LAB_1800046b6;
              (**(code **)(*plVar17 + 0x30))(plVar17,1);
              uVar26 = uVar26 + 1;
            }
          }
          else {
            *(undefined8 *)(param_1 + 0x130) = 0;
LAB_180004332:
            if (local_90 == (longlong *)0x0) {
LAB_1800046b6:
              uVar26 = uVar26 + 1;
            }
            else {
              free(local_90);
              uVar26 = uVar26 + 1;
            }
          }
        }
      }
      local_80 = 0x5002c00000002;
      uVar27 = uVar7;
    }
  }
  else {
    pcVar23 = 
    "e:\\drw\\_drw_main\\drwintelligentscan\\hfsplussearch\\hfspluscompletefilesystemsearchcontroller.cpp"
    ;
    iVar19 = 0x5e;
    lVar11 = 0x5e;
    do {
      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfsplussearch\\hfspluscompletefilesystemsearchcontroller.cpp"
           [lVar11] == '\\') ||
         ("e:\\drw\\_drw_main\\drwintelligentscan\\hfsplussearch\\hfspluscompletefilesystemsearchcontroller.cpp"
          [lVar11] == '/')) {
        pcVar23 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfsplussearch\\hfspluscompletefilesystemsearchcontroller.cpp"
                  + (iVar19 + 1);
        break;
      }
      iVar19 = iVar19 + -1;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
    pbVar12 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                            "Return Error:0x");
    puVar13 = (undefined8 *)std::setbase((int)&local_60);
    (*(code *)*puVar13)(pbVar12 + *(int *)(*(longlong *)pbVar12 + 4),*(undefined4 *)(puVar13 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar12,uVar14);
    if (pcVar23 != (char *)0x0) {
      pbVar12 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                              "\tFile:");
      FUN_180001e50(pbVar12,pcVar23);
    }
    pbVar12 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                            "\tLine:");
    puVar13 = (undefined8 *)std::setbase((int)&local_60);
    (*(code *)*puVar13)(pbVar12 + *(int *)(*(longlong *)pbVar12 + 4),*(undefined4 *)(puVar13 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar12,0x2d9);
    pbVar12 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                            "\tFuction:");
    FUN_180001e50(pbVar12,"CHFSPlusCompleteFileSystemSearchController::AnalyzeNode");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
              ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    uVar27 = uVar26;
  }
LAB_18000402b:
  if (local_68 != (void *)0x0) {
    free(local_68);
    local_68 = (void *)0x0;
  }
  if ((local_70 != 0) && (local_78 != (void *)0x0)) {
    free(local_78);
  }
  return uVar27;
}




void FUN_1800048f0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x138) = param_2;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180004900(longlong *******param_1,undefined8 *param_2,longlong *******param_3,
                  longlong *******param_4)

{
  char cVar1;
  int iVar2;
  longlong ******pppppplVar3;
  longlong ***********ppppppppppplVar4;
  longlong ******pppppplVar5;
  longlong *****ppppplVar6;
  longlong **********pppppppppplVar7;
  longlong *plVar8;
  longlong ***********ppppppppppplVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong ***********ppppppppppplVar13;
  longlong *************ppppppppppppplVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong ************pppppppppppplVar18;
  longlong *************ppppppppppppplVar19;
  longlong ************pppppppppppplVar20;
  longlong ***********ppppppppppplVar21;
  longlong *plVar22;
  longlong *************ppppppppppppplVar23;
  undefined8 *puVar24;
  longlong ************pppppppppppplVar25;
  longlong ************pppppppppppplVar26;
  longlong **********pppppppppplVar27;
  longlong *************ppppppppppppplVar28;
  longlong *************ppppppppppppplVar29;
  ulonglong uVar30;
  longlong ***********ppppppppppplVar31;
  undefined8 *puVar32;
  longlong *plVar33;
  longlong *******local_res8;
  longlong ************local_res10;
  longlong ***********local_res18;
  longlong ***********local_res20;
  longlong *in_stack_ffffffffffffff18;
  longlong ***********local_d8;
  longlong ************pppppppppppplStack_d0;
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  longlong ***********local_b0;
  undefined8 uStack_a8;
  longlong ***********local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 uStack_88;
  longlong ************local_80;
  longlong *************local_78;
  longlong ************local_70;
  longlong *************local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_b0 = (longlong ***********)0x0;
  uStack_a8 = 0;
  ppppppppppppplVar14 = (longlong *************)param_1;
  local_res8 = param_1;
  local_b0 = (longlong ***********)FUN_180006e10();
  local_90 = (longlong *)0x0;
  uStack_88 = 0;
  local_90 = (longlong *)FUN_180006a50();
  ppppppppppplVar31 = (longlong ***********)0x0;
  local_res20 = (longlong ***********)0x0;
  local_a0 = (longlong ***********)0x0;
  uStack_98 = 0;
  local_a0 = (longlong ***********)FUN_180006a50();
  puVar32 = (undefined8 *)*param_2;
  ppppppppppplVar13 = local_res20;
  if (puVar32 != (undefined8 *)param_2[1]) {
    do {
      pppppppppppplVar18 = (longlong ************)*puVar32;
      if (*(int *)(pppppppppppplVar18 + 1) == 8) {
        param_3 = (longlong *******)(ulonglong)*(uint *)((longlong)pppppppppppplVar18 + 0xc);
        ppppppppppplVar13 =
             (longlong ***********)
             FUN_18000af90(ppppppppppppplVar14,pppppppppppplVar18[2],
                           *(uint *)((longlong)pppppppppppplVar18 + 0xc),param_4);
        if (ppppppppppplVar13 != (longlong ***********)0x0) {
          in_stack_ffffffffffffff18 =
               (longlong *)((ulonglong)in_stack_ffffffffffffff18 & 0xffffffffffffff00);
          param_4 = (longlong *******)&local_d8;
          local_d8 = ppppppppppplVar13;
          pppppppppppplStack_d0 = pppppppppppplVar18;
          FUN_180007410((longlong *)&local_90,local_60,param_3,(ulonglong *)param_4);
          iVar2 = *(int *)(pppppppppppplVar18 + 0x22);
          ppppppppppppplVar14 = (longlong *************)local_a0[1];
          ppppppppppppplVar19 = (longlong *************)local_a0;
          if (*(char *)((longlong)local_a0[1] + 0x19) == '\0') {
            do {
              if (*(int *)(ppppppppppppplVar14 + 4) < iVar2) {
                pppppppppppplVar20 = ppppppppppppplVar14[2];
              }
              else {
                pppppppppppplVar20 = *ppppppppppppplVar14;
                ppppppppppppplVar19 = ppppppppppppplVar14;
              }
              ppppppppppppplVar14 = (longlong *************)pppppppppppplVar20;
            } while (*(char *)((longlong)pppppppppppplVar20 + 0x19) == '\0');
            if ((ppppppppppppplVar19 == (longlong *************)local_a0) ||
               (ppppppppppppplVar14 = ppppppppppppplVar19, iVar2 < *(int *)(ppppppppppppplVar19 + 4)
               )) goto LAB_180004a01;
          }
          else {
LAB_180004a01:
            local_res18 = (longlong ***********)&local_res10;
            local_res10._0_4_ = iVar2;
            in_stack_ffffffffffffff18 = (longlong *)FUN_180008030(&local_a0,local_a0,&local_res18);
            param_4 = (longlong *******)(in_stack_ffffffffffffff18 + 4);
            FUN_180008080((longlong *)&local_a0,&local_res20,(longlong *)ppppppppppppplVar19,
                          (int *)param_4,in_stack_ffffffffffffff18);
            ppppppppppppplVar14 = (longlong *************)local_res20;
            param_3 = (longlong *******)ppppppppppppplVar19;
          }
          ppppppppppppplVar14[5] = pppppppppppplVar18;
          iVar2 = *(int *)(pppppppppppplVar18 + 0x22);
          local_res10 = (longlong ************)CONCAT44(local_res10._4_4_,iVar2);
          ppppppppppppplVar14 = (longlong *************)local_b0[1];
          ppppppppppppplVar19 = (longlong *************)local_b0;
          if (*(char *)((longlong)local_b0[1] + 0x19) == '\0') {
            do {
              if (*(int *)(ppppppppppppplVar14 + 4) < iVar2) {
                pppppppppppplVar18 = ppppppppppppplVar14[2];
              }
              else {
                pppppppppppplVar18 = *ppppppppppppplVar14;
                ppppppppppppplVar19 = ppppppppppppplVar14;
              }
              ppppppppppppplVar14 = (longlong *************)pppppppppppplVar18;
            } while (*(char *)((longlong)pppppppppppplVar18 + 0x19) == '\0');
            if ((ppppppppppppplVar19 == (longlong *************)local_b0) ||
               (ppppppppppppplVar28 = (longlong *************)local_b0,
               ppppppppppppplVar23 = ppppppppppppplVar19, iVar2 < *(int *)(ppppppppppppplVar19 + 4))
               ) goto LAB_180004a73;
          }
          else {
LAB_180004a73:
            local_80 = (longlong ************)&local_res10;
            in_stack_ffffffffffffff18 = (longlong *)FUN_1800082e0(&local_b0,local_b0,&local_80);
            param_4 = (longlong *******)(in_stack_ffffffffffffff18 + 4);
            ppppppppppppplVar28 = (longlong *************)&local_78;
            FUN_180008360((longlong *)&local_b0,ppppppppppppplVar28,(longlong *)ppppppppppppplVar19,
                          (int *)param_4,in_stack_ffffffffffffff18);
            ppppppppppppplVar23 = local_78;
            param_3 = (longlong *******)ppppppppppppplVar19;
          }
          ppppppppppppplVar23 = ppppppppppppplVar23 + 5;
          local_res18 = (longlong ***********)0x2;
          ppppppppppppplVar14 = (longlong *************)*ppppppppppppplVar23;
          ppppppppppppplVar19 = (longlong *************)ppppppppppppplVar14[1];
          ppppppppppppplVar29 = ppppppppppppplVar14;
          if (*(char *)((longlong)ppppppppppppplVar14[1] + 0x19) == '\0') {
            do {
              if ((longlong)ppppppppppppplVar19[4] < 2) {
                pppppppppppplVar18 = ppppppppppppplVar19[2];
              }
              else {
                pppppppppppplVar18 = *ppppppppppppplVar19;
                ppppppppppppplVar29 = ppppppppppppplVar19;
              }
              ppppppppppppplVar19 = (longlong *************)pppppppppppplVar18;
            } while (*(char *)((longlong)pppppppppppplVar18 + 0x19) == '\0');
            if ((ppppppppppppplVar29 == ppppppppppppplVar14) ||
               (ppppppppppppplVar19 = ppppppppppppplVar29, 2 < (longlong)ppppppppppppplVar29[4]))
            goto LAB_180004ae6;
          }
          else {
LAB_180004ae6:
            local_70 = &local_res18;
            in_stack_ffffffffffffff18 =
                 (longlong *)FUN_1800085c0(ppppppppppppplVar23,ppppppppppppplVar28,&local_70);
            param_4 = (longlong *******)(in_stack_ffffffffffffff18 + 4);
            FUN_180008610((longlong *)ppppppppppppplVar23,&local_68,(longlong *)ppppppppppppplVar29,
                          (longlong *)param_4,in_stack_ffffffffffffff18);
            ppppppppppppplVar14 = ppppppppppppplVar23;
            ppppppppppppplVar19 = local_68;
            param_3 = (longlong *******)ppppppppppppplVar29;
          }
          ppppppppppppplVar19[5] = (longlong ************)ppppppppppplVar13;
          if (ppppppppppplVar31 == (longlong ***********)0x0) {
            ppppppppppplVar31 = ppppppppppplVar13;
          }
        }
      }
      puVar32 = puVar32 + 1;
      param_1 = local_res8;
      ppppppppppplVar13 = ppppppppppplVar31;
    } while (puVar32 != (undefined8 *)param_2[1]);
  }
  local_res20 = ppppppppppplVar13;
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  local_c0 = (undefined8 *)FUN_180006f50();
  pppppplVar3 = param_1[0x2b];
  ppppppppppplVar31 = (longlong ***********)0x0;
  ppppppppppplVar13 = ppppppppppplVar31;
  if (pppppplVar3 != (longlong ******)0x0) {
    ppppppppppplVar21 = (longlong ***********)pppppplVar3[2];
    for (ppppppppppplVar4 = ppppppppppplVar21; ppppppppppplVar13 = (longlong ***********)0x0,
        ppppppppppplVar4 != (longlong ***********)0x0;
        ppppppppppplVar4 = (longlong ***********)ppppppppppplVar4[4]) {
      if (ppppppppppplVar4[10] == (longlong **********)0xfffffffffffffff1) {
        if (ppppppppppplVar4 != ppppppppppplVar21) goto joined_r0x000180004b9a;
        pppppplVar3[2] = (longlong *****)ppppppppppplVar4[3];
        goto LAB_180004bbf;
      }
    }
  }
  goto LAB_180004de6;
  while (ppppppppppplVar21 = (longlong ***********)ppppppppppplVar13[3],
        ppppppppppplVar4 != (longlong ***********)ppppppppppplVar13[3]) {
joined_r0x000180004b9a:
    ppppppppppplVar13 = ppppppppppplVar21;
    if (ppppppppppplVar13 == (longlong ***********)0x0) goto LAB_180004bcb;
  }
  pppppppppplVar27 = ppppppppppplVar4[3];
  ppppppppppplVar13[3] = pppppppppplVar27;
  ppppppppppplVar13[4] = pppppppppplVar27;
LAB_180004bbf:
  ppppppppppplVar4[1] = (longlong **********)0x0;
  ppppppppppplVar4[3] = (longlong **********)0x0;
  ppppppppppplVar4[4] = (longlong **********)0x0;
LAB_180004bcb:
  local_d8 = (longlong ***********)0x0;
  pppppppppppplStack_d0 = (longlong ************)0x0;
  local_c8 = 0;
  pppppppppppplVar18 = (longlong ************)0x0;
  ppppppppppplVar13 = (longlong ***********)ppppppppppplVar4[2];
  ppppppppppplVar21 = ppppppppppplVar31;
  ppppppppppplVar9 = local_d8;
  lVar10 = local_c8;
  while (pppppppppppplVar20 = (longlong ************)ppppppppppplVar13, local_d8 = ppppppppppplVar9,
        local_c8 = lVar10, pppppppppppplVar20 != (longlong ************)0x0) {
    if (pppppppppppplVar20[6] == (longlong ***********)0x0) {
      ppppppppppplVar13 = pppppppppppplVar20[3];
      if (ppppppppppplVar21 == (longlong ***********)0x0) {
        pppppppppppplVar26 = (longlong ************)ppppppppppplVar4[2];
        if (pppppppppppplVar20 == (longlong ************)ppppppppppplVar4[2]) {
          ppppppppppplVar4[2] = (longlong **********)ppppppppppplVar13;
        }
        else {
          do {
            pppppppppppplVar25 = pppppppppppplVar26;
            if (pppppppppppplVar25 == (longlong ************)0x0) goto LAB_180004c49;
            pppppppppppplVar26 = (longlong ************)pppppppppppplVar25[3];
          } while (pppppppppppplVar20 != (longlong ************)pppppppppppplVar25[3]);
          pppppppppppplVar25[3] = ppppppppppplVar13;
          pppppppppppplVar25[4] = ppppppppppplVar13;
        }
      }
      else {
        ppppppppppplVar21[3] = (longlong **********)ppppppppppplVar13;
        ppppppppppplVar21[4] = (longlong **********)ppppppppppplVar13;
      }
LAB_180004c49:
      pppppppppppplVar20[1] = ppppppppppplVar31;
      pppppppppppplVar20[3] = ppppppppppplVar31;
      pppppppppppplVar20[4] = ppppppppppplVar31;
      local_res10 = pppppppppppplVar20;
      uVar15 = FUN_180018000((longlong)&local_d8);
      if ((char)uVar15 == '\0') {
        param_3 = (longlong *******)&local_res10;
LAB_180004c79:
        FUN_1800182a0((longlong *)&local_d8,pppppppppppplVar18,param_3);
        pppppppppppplVar18 = pppppppppppplStack_d0;
        pppppppppppplVar20 = (longlong ************)ppppppppppplVar21;
LAB_180004d31:
        ppppppppppplVar31 = (longlong ***********)0x0;
        ppppppppppplVar21 = (longlong ***********)pppppppppppplVar20;
        ppppppppppplVar9 = local_d8;
        lVar10 = local_c8;
      }
      else {
        *pppppppppppplVar18 = (longlong ***********)local_res10;
        pppppppppppplVar18 = (longlong ************)((longlong *)pppppppppppplVar18 + 1);
        ppppppppppplVar9 = local_d8;
        pppppppppppplStack_d0 = pppppppppppplVar18;
        lVar10 = local_c8;
      }
    }
    else {
      uVar30 = (*(code *)(*pppppppppppplVar20[6])[7])();
      if (((uVar30 & 0x10) == 0) || (pppppppppppplVar20[2] != (longlong ***********)0x0)) {
        ppppppppppplVar13 = pppppppppppplVar20[3];
        goto LAB_180004d31;
      }
      ppppppppppplVar13 = pppppppppppplVar20[3];
      if (ppppppppppplVar21 == (longlong ***********)0x0) {
        pppppppppppplVar26 = (longlong ************)ppppppppppplVar4[2];
        if (pppppppppppplVar20 == (longlong ************)ppppppppppplVar4[2]) {
          ppppppppppplVar4[2] = (longlong **********)ppppppppppplVar13;
        }
        else {
          do {
            pppppppppppplVar25 = pppppppppppplVar26;
            if (pppppppppppplVar25 == (longlong ************)0x0) goto LAB_180004cf5;
            pppppppppppplVar26 = (longlong ************)pppppppppppplVar25[3];
          } while (pppppppppppplVar20 != (longlong ************)pppppppppppplVar25[3]);
          pppppppppppplVar25[3] = ppppppppppplVar13;
          pppppppppppplVar25[4] = ppppppppppplVar13;
        }
      }
      else {
        ppppppppppplVar21[3] = (longlong **********)ppppppppppplVar13;
        ppppppppppplVar21[4] = (longlong **********)ppppppppppplVar13;
      }
LAB_180004cf5:
      ppppppppppplVar31 = (longlong ***********)0x0;
      pppppppppppplVar20[1] = (longlong ***********)0x0;
      pppppppppppplVar20[3] = (longlong ***********)0x0;
      pppppppppppplVar20[4] = (longlong ***********)0x0;
      local_res18 = (longlong ***********)pppppppppppplVar20;
      uVar15 = FUN_180018000((longlong)&local_d8);
      if ((char)uVar15 == '\0') {
        param_3 = (longlong *******)&local_res18;
        goto LAB_180004c79;
      }
      *pppppppppppplVar18 = local_res18;
      pppppppppppplVar18 = (longlong ************)((longlong *)pppppppppppplVar18 + 1);
      ppppppppppplVar9 = local_d8;
      pppppppppppplStack_d0 = pppppppppppplVar18;
      lVar10 = local_c8;
    }
  }
  uVar30 = (longlong)pppppppppppplVar18 - (longlong)ppppppppppplVar9 >> 3;
  if (0 < (int)uVar30) {
    uVar30 = uVar30 & 0xffffffff;
    ppppppppppplVar31 = ppppppppppplVar9;
    do {
      local_res10 = (longlong ************)*ppppppppppplVar31;
      in_stack_ffffffffffffff18 =
           (longlong *)((ulonglong)in_stack_ffffffffffffff18 & 0xffffffffffffff00);
      FUN_1800072d0((longlong *)&local_c0,local_60,param_3,(ulonglong *)&local_res10);
      ppppppppppplVar31 = ppppppppppplVar31 + 1;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  ppppppppppplVar13 = ppppppppppplVar4;
  param_1 = local_res8;
  pppppppppppplStack_d0 = (longlong ************)ppppppppppplVar9;
  if (ppppppppppplVar9 != (longlong ***********)0x0) {
    ppppppppppplVar31 = ppppppppppplVar9;
    if ((0xfff < (ulonglong)((lVar10 - (longlong)ppppppppppplVar9 >> 3) * 8)) &&
       (ppppppppppplVar31 = (longlong ***********)ppppppppppplVar9[-1],
       0x1f < (ulonglong)((longlong)ppppppppppplVar9 + (-8 - (longlong)ppppppppppplVar31)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppppppppplVar31);
    local_d8 = (longlong ***********)0x0;
    pppppppppppplStack_d0 = (longlong ************)0x0;
    local_c8 = 0;
    param_1 = local_res8;
  }
LAB_180004de6:
  pppppplVar3 = param_1[0x2d];
  pppppplVar5 = (longlong ******)*pppppplVar3;
  puVar32 = local_c0;
  do {
    if (pppppplVar5 == pppppplVar3) {
      puVar16 = (undefined8 *)*puVar32;
      while (puVar16 != puVar32) {
        plVar22 = (longlong *)puVar16[4];
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 0x30))(plVar22,1);
        }
        puVar24 = (undefined8 *)puVar16[2];
        if (*(char *)((longlong)puVar24 + 0x19) == '\0') {
          cVar1 = *(char *)((longlong)*puVar24 + 0x19);
          puVar16 = puVar24;
          puVar24 = (undefined8 *)*puVar24;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar24 + 0x19);
            puVar16 = puVar24;
            puVar24 = (undefined8 *)*puVar24;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar16[1] + 0x19);
          puVar17 = (undefined8 *)puVar16[1];
          puVar24 = puVar16;
          while ((puVar16 = puVar17, cVar1 == '\0' && (puVar24 == (undefined8 *)puVar16[2]))) {
            cVar1 = *(char *)((longlong)puVar16[1] + 0x19);
            puVar17 = (undefined8 *)puVar16[1];
            puVar24 = puVar16;
          }
        }
      }
      FUN_1800062a0((longlong *)&local_c0);
      if ((local_res20 != (longlong ***********)0x0) &&
         (ppppppppppplVar13 != (longlong ***********)0x0)) {
        ppppppppppplVar13[1] = (longlong **********)local_res20;
        pppppppppplVar27 = ppppppppppplVar13[3];
        ppppppppppplVar13[4] = pppppppppplVar27;
        pppppppppplVar7 = local_res20[2];
        ppppppppppplVar13[3] = pppppppppplVar7;
        if (pppppppppplVar27 == (longlong **********)0x0) {
          pppppppppplVar27 = pppppppppplVar7;
        }
        ppppppppppplVar13[4] = pppppppppplVar27;
        local_res20[2] = (longlong **********)ppppppppppplVar13;
        ppppppppppplVar13[9] = local_res20[10];
      }
      FUN_1800063d0((longlong *)(param_1 + 0x1f));
      param_1[0x2b] = (longlong ******)0x0;
      plVar22 = (longlong *)*local_90;
      plVar33 = local_90;
      if (plVar22 != local_90) {
        do {
          if ((plVar22[4] != 0) && (plVar22[5] != 0)) {
            (*(code *)(*param_1[0x18])[2])();
            plVar33 = local_90;
          }
          plVar8 = (longlong *)plVar22[2];
          if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar8 + 0x19);
            plVar22 = plVar8;
            plVar8 = (longlong *)*plVar8;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar8 + 0x19);
              plVar22 = plVar8;
              plVar8 = (longlong *)*plVar8;
            }
          }
          else {
            cVar1 = *(char *)(plVar22[1] + 0x19);
            plVar11 = (longlong *)plVar22[1];
            plVar8 = plVar22;
            while ((plVar22 = plVar11, cVar1 == '\0' && (plVar8 == (longlong *)plVar22[2]))) {
              cVar1 = *(char *)(plVar22[1] + 0x19);
              plVar11 = (longlong *)plVar22[1];
              plVar8 = plVar22;
            }
          }
        } while (plVar22 != plVar33);
      }
      FUN_1800062a0((longlong *)&local_c0);
      free(local_c0);
      FUN_1800061b0((longlong *)&local_a0);
      FUN_1800061b0((longlong *)&local_90);
      FUN_180006870((longlong *)&local_b0,&local_res8,(longlong *)*local_b0,(longlong *)local_b0);
      free(local_b0);
      return;
    }
    ppppplVar6 = pppppplVar5[2];
    puVar16 = (undefined8 *)puVar32[1];
    puVar24 = puVar32;
    if (*(char *)((longlong)puVar32[1] + 0x19) == '\0') {
      do {
        if ((longlong *****)puVar16[4] < ppppplVar6) {
          puVar17 = (undefined8 *)puVar16[2];
        }
        else {
          puVar17 = (undefined8 *)*puVar16;
          puVar24 = puVar16;
        }
        puVar16 = puVar17;
      } while (*(char *)((longlong)puVar17 + 0x19) == '\0');
      if ((puVar24 == puVar32) || (ppppplVar6 < (longlong *****)puVar24[4])) goto LAB_180004e48;
    }
    else {
LAB_180004e48:
      in_stack_ffffffffffffff18 =
           (longlong *)((ulonglong)in_stack_ffffffffffffff18 & 0xffffffff00000000);
      pppppppppppplVar18 =
           (longlong ************)
           __RTDynamicCast(ppppplVar6,0,&CFileNode::RTTI_Type_Descriptor,
                           &CHFSPlusFileNode::RTTI_Type_Descriptor,in_stack_ffffffffffffff18);
      puVar32 = local_c0;
      if (pppppppppppplVar18 != (longlong ************)0x0) {
        pppppppppppplVar18[2] = (longlong ***********)0x0;
        pppppppppppplVar18[3] = (longlong ***********)0x0;
        pppppppppppplVar18[4] = (longlong ***********)0x0;
        pppppppppppplVar18[1] = (longlong ***********)0x0;
        iVar2 = *(int *)(pppppppppppplVar18 + 0x14);
        ppppppppppppplVar14 = (longlong *************)local_a0[1];
        ppppppppppppplVar19 = (longlong *************)local_a0;
        if (*(char *)((longlong)local_a0[1] + 0x19) == '\0') {
          do {
            if (*(int *)(ppppppppppppplVar14 + 4) < iVar2) {
              pppppppppppplVar20 = ppppppppppppplVar14[2];
            }
            else {
              pppppppppppplVar20 = *ppppppppppppplVar14;
              ppppppppppppplVar19 = ppppppppppppplVar14;
            }
            ppppppppppppplVar14 = (longlong *************)pppppppppppplVar20;
          } while (*(char *)((longlong)pppppppppppplVar20 + 0x19) == '\0');
          if (((ppppppppppppplVar19 != (longlong *************)local_a0) &&
              (*(int *)(ppppppppppppplVar19 + 4) <= iVar2)) &&
             (ppppppppppppplVar19 = (longlong *************)local_b0[1],
             ppppppppppppplVar14 = (longlong *************)local_b0,
             *(char *)((longlong)local_b0[1] + 0x19) == '\0')) {
            do {
              if (*(int *)(ppppppppppppplVar19 + 4) < iVar2) {
                pppppppppppplVar20 = ppppppppppppplVar19[2];
              }
              else {
                pppppppppppplVar20 = *ppppppppppppplVar19;
                ppppppppppppplVar14 = ppppppppppppplVar19;
              }
              ppppppppppppplVar19 = (longlong *************)pppppppppppplVar20;
            } while (*(char *)((longlong)pppppppppppplVar20 + 0x19) == '\0');
            if ((ppppppppppppplVar14 != (longlong *************)local_b0) &&
               (*(int *)(ppppppppppppplVar14 + 4) <= iVar2)) {
              ppppppppppplVar31 = pppppppppppplVar18[10];
              ppppppppppppplVar14 = ppppppppppppplVar14 + 5;
              pppppppppppplVar20 = *ppppppppppppplVar14;
              cVar1 = *(char *)((longlong)pppppppppppplVar20[1] + 0x19);
              pppppppppppplVar26 = pppppppppppplVar20;
              pppppppppppplVar25 = (longlong ************)pppppppppppplVar20[1];
              while (cVar1 == '\0') {
                if ((longlong)pppppppppppplVar25[4] < (longlong)pppppppppppplVar18[9]) {
                  ppppppppppplVar21 = pppppppppppplVar25[2];
                  pppppppppppplVar25 = pppppppppppplVar26;
                }
                else {
                  ppppppppppplVar21 = *pppppppppppplVar25;
                }
                pppppppppppplVar26 = pppppppppppplVar25;
                pppppppppppplVar25 = (longlong ************)ppppppppppplVar21;
                cVar1 = *(char *)((longlong)ppppppppppplVar21 + 0x19);
              }
              if ((pppppppppppplVar26 == pppppppppppplVar20) ||
                 ((longlong)pppppppppppplVar18[9] < (longlong)pppppppppppplVar26[4])) {
                pppppppppppplVar26 = pppppppppppplVar20;
              }
              if (pppppppppppplVar26 == pppppppppppplVar20) {
                if (ppppppppppplVar13 != (longlong ***********)0x0) {
                  pppppppppppplVar18[1] = ppppppppppplVar13;
                  pppppppppppplVar18[4] = (longlong ***********)0x0;
                  ppppppppppplVar31 = (longlong ***********)ppppppppppplVar13[2];
                  pppppppppppplVar18[3] = ppppppppppplVar31;
                  pppppppppppplVar18[4] = ppppppppppplVar31;
                  ppppppppppplVar13[2] = (longlong **********)pppppppppppplVar18;
                  pppppppppppplVar18[9] = (longlong ***********)ppppppppppplVar13[10];
                }
              }
              else {
                ppppppppppplVar21 = pppppppppppplVar26[5];
                pppppppppppplVar18[1] = ppppppppppplVar21;
                pppppppppppplVar18[4] = (longlong ***********)0x0;
                ppppppppppplVar4 = (longlong ***********)ppppppppppplVar21[2];
                pppppppppppplVar18[3] = ppppppppppplVar4;
                pppppppppppplVar18[4] = ppppppppppplVar4;
                ppppppppppplVar21[2] = (longlong **********)pppppppppppplVar18;
                if (*pppppppppppplVar18 == (longlong ***********)CHFSPlusFileNode::vftable) {
                  uVar12 = *(byte *)((longlong)pppppppppppplVar18 + 0xce) >> 1 & 1;
                }
                else {
                  uVar12 = (*(code *)(*pppppppppppplVar18)[0xd])(pppppppppppplVar18);
                }
                puVar32 = local_c0;
                if (uVar12 != 0) {
                  pppppppppppplVar20 = *ppppppppppppplVar14;
                  cVar1 = *(char *)((longlong)pppppppppppplVar20[1] + 0x19);
                  pppppppppppplVar26 = pppppppppppplVar20;
                  pppppppppppplVar25 = (longlong ************)pppppppppppplVar20[1];
                  while (cVar1 == '\0') {
                    if ((longlong)pppppppppppplVar25[4] < (longlong)ppppppppppplVar31) {
                      ppppppppppplVar21 = pppppppppppplVar25[2];
                      pppppppppppplVar25 = pppppppppppplVar26;
                    }
                    else {
                      ppppppppppplVar21 = *pppppppppppplVar25;
                    }
                    pppppppppppplVar26 = pppppppppppplVar25;
                    pppppppppppplVar25 = (longlong ************)ppppppppppplVar21;
                    cVar1 = *(char *)((longlong)ppppppppppplVar21 + 0x19);
                  }
                  if ((pppppppppppplVar26 == pppppppppppplVar20) ||
                     ((longlong)ppppppppppplVar31 < (longlong)pppppppppppplVar26[4])) {
                    pppppppppppplVar26 = pppppppppppplVar20;
                  }
                  if (pppppppppppplVar26 != pppppppppppplVar20) {
                    if (*(uint *)((longlong)pppppppppppplVar18 + 0xc4) <
                        *(uint *)((longlong)pppppppppppplVar26[5] + 0xc4)) goto LAB_1800050a4;
                    if (*(char *)((longlong)pppppppppppplVar26[2] + 0x19) == '\0') {
                      pppppppppplVar27 = *pppppppppppplVar26[2];
                      cVar1 = *(char *)((longlong)pppppppppplVar27 + 0x19);
                      while (cVar1 == '\0') {
                        pppppppppplVar27 = (longlong **********)*pppppppppplVar27;
                        cVar1 = *(char *)((longlong)pppppppppplVar27 + 0x19);
                      }
                    }
                    else {
                      cVar1 = *(char *)((longlong)pppppppppppplVar26[1] + 0x19);
                      ppppppppppplVar4 = pppppppppppplVar26[1];
                      ppppppppppplVar21 = (longlong ***********)pppppppppppplVar26;
                      while ((ppppppppppplVar9 = ppppppppppplVar4, cVar1 == '\0' &&
                             (ppppppppppplVar21 == (longlong ***********)ppppppppppplVar9[2]))) {
                        cVar1 = *(char *)((longlong)ppppppppppplVar9[1] + 0x19);
                        ppppppppppplVar4 = (longlong ***********)ppppppppppplVar9[1];
                        ppppppppppplVar21 = ppppppppppplVar9;
                      }
                    }
                    plVar22 = FUN_180006a90((longlong *)ppppppppppppplVar14,
                                            (longlong *)pppppppppppplVar26);
                    free(plVar22);
                  }
                  local_d8 = ppppppppppplVar31;
                  pppppppppppplStack_d0 = pppppppppppplVar18;
                  in_stack_ffffffffffffff18 =
                       (longlong *)FUN_180007b00(ppppppppppppplVar14,&local_d8);
                  FUN_180007b40((longlong *)ppppppppppppplVar14,local_60,'\0',
                                in_stack_ffffffffffffff18 + 4,in_stack_ffffffffffffff18);
                  puVar32 = local_c0;
                }
              }
            }
          }
        }
      }
    }
LAB_1800050a4:
    pppppplVar5 = (longlong ******)*pppppplVar5;
    param_1 = local_res8;
  } while( true );
}




void FUN_180005280(longlong *param_1)

{
  undefined8 local_res10 [3];
  
  FUN_180006870(param_1,local_res10,*(longlong **)*param_1,(longlong *)*param_1);
  free((void *)*param_1);
  return;
}




void FUN_1800052c0(longlong *param_1)

{
  FUN_1800062a0(param_1);
  free((void *)*param_1);
  return;
}




undefined8 FUN_1800052f0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) && (*(int *)(param_3 + 8) == 8)) {
    (**(code **)(*param_2 + 0x80))(param_2);
    return 1;
  }
  return 0;
}




bool FUN_180005330(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  if ((param_2 != (longlong *)0x0) && (param_3 != 0)) {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    if ((iVar1 == 8) && (*(int *)(param_3 + 8) == 8)) {
      return *(int *)(param_3 + 0x110) == (int)param_2[0x14];
    }
  }
  return false;
}




longlong FUN_180005390(longlong param_1,short *param_2,longlong param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int *_Memory;
  longlong lVar6;
  undefined8 *puVar7;
  int *piVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *local_50;
  undefined4 *local_48;
  char local_40;
  
  if ((ushort)(*param_2 - 1U) < 2) {
    uVar1 = *(uint *)(param_2 + 6);
    uVar2 = *(uint *)(param_2 + 4);
    if ((uVar2 != 0) || (uVar1 != 0)) {
      plVar9 = *(longlong **)(param_1 + 0xd8);
      plVar4 = plVar9;
      piVar8 = param_4;
      if (plVar9 != (longlong *)*plVar9) {
        do {
          lVar3 = *(longlong *)(plVar4[1] + 0x10);
          if ((((lVar3 != 0) && (lVar6 = *(longlong *)(lVar3 + 0xb0), lVar6 != 0)) &&
              ((((byte)*(undefined4 *)(lVar6 + 4) & 0xc) == 0xc ||
               (uVar2 <= *(uint *)(lVar6 + 0x40))))) &&
             ((uVar1 <= *(uint *)(lVar6 + 0x14) || (*(int *)(lVar3 + 0x110) == 0)))) {
            piVar5 = *(int **)(lVar3 + 0x98);
            if (param_3 <= *(longlong *)(lVar3 + 0x90) + (longlong)piVar5) {
              _Memory = *(int **)(lVar3 + 200);
              if ((_Memory == (int *)0x0) && (*(longlong *)(lVar3 + 0xc0) == 0)) {
                if (*(int *)(lVar3 + 0x110) == 0) {
                  lVar6 = param_3;
                  piVar5 = (int *)operator_new(0x90);
                  _Memory = FUN_18000b410(piVar5,*(longlong *)(param_1 + 0xb8),lVar6,
                                          (longlong)piVar8);
                  *(int **)(lVar3 + 200) = _Memory;
                  if (*(longlong *)(lVar3 + 0xb8) == 2) {
                    local_50 = *(longlong **)(param_1 + 0x160);
                    local_48 = (undefined4 *)0x0;
                    local_40 = '\x01';
                    local_48 = (undefined4 *)FUN_180018ba0(0x820);
                    if (local_48 != (undefined4 *)0x0) {
                      *(undefined8 *)(local_48 + 4) = 0;
                      *(undefined8 *)(local_48 + 2) = 0;
                      lVar6 = 0x20;
                      do {
                        *(undefined2 *)(lVar6 + (longlong)local_48) = 0;
                        lVar6 = lVar6 + 2;
                      } while (lVar6 < 0x820);
                    }
                    piVar8 = (int *)(lVar3 + 0xa4);
                    FUN_18000c8f0(*(longlong *)(lVar3 + 200),(longlong *)(param_1 + 0xe8),
                                  (longlong *)&local_50,piVar8);
                    *(int *)(lVar3 + 0xa4) =
                         *(int *)(lVar3 + 0xa4) + *(int *)(*(longlong *)(lVar3 + 0xb0) + 0x20);
                    *(int *)(lVar3 + 0xa8) =
                         *(int *)(lVar3 + 0xa8) + *(int *)(*(longlong *)(lVar3 + 0xb0) + 0x24);
                    if (local_40 == '\0') {
                      if (local_48 != (undefined4 *)0x0) {
                        *local_48 = 4;
                        (**(code **)(*local_50 + 8))(local_50,local_48);
                        goto LAB_180005575;
                      }
                    }
                    else {
LAB_180005575:
                      if (local_48 != (undefined4 *)0x0) {
                        free(local_48);
                        local_48 = (undefined4 *)0x0;
                      }
                    }
                    local_50 = (longlong *)0x0;
                    _Memory = *(int **)(lVar3 + 200);
                  }
                }
                else if ((0 < *(longlong *)(lVar3 + 0x90)) && (1 < (longlong)piVar5)) {
                  puVar7 = (undefined8 *)operator_new(0x50);
                  uVar10 = *(undefined8 *)(lVar3 + 0x90);
                  puVar7 = FUN_180009130(puVar7,*(longlong **)(param_1 + 0xb8),uVar10,piVar5);
                  *(undefined8 **)(lVar3 + 0xc0) = puVar7;
                  piVar8 = piVar5;
                  if (puVar7 != (undefined8 *)0x0) {
                    piVar8 = (int *)operator_new(0x90);
                    lVar6 = *(longlong *)(lVar3 + 0xc0);
                    _Memory = FUN_18000b410(piVar8,lVar6,uVar10,(longlong)piVar5);
                    *(int **)(lVar3 + 200) = _Memory;
                    piVar8 = piVar5;
                    if (*(longlong *)(_Memory + 4) == 0) goto LAB_18000559a;
                    FUN_18000c010((longlong)_Memory,lVar6,uVar10,piVar5);
                    free(_Memory);
                    *(undefined8 *)(lVar3 + 200) = 0;
                    piVar8 = piVar5;
                  }
                  goto LAB_1800055a3;
                }
              }
LAB_18000559a:
              if (_Memory != (int *)0x0) {
                *(int **)param_4 = _Memory;
                return lVar3;
              }
            }
          }
LAB_1800055a3:
          plVar4 = (longlong *)plVar4[1];
          plVar9 = *(longlong **)(param_1 + 0xd8);
        } while (plVar4 != (longlong *)*plVar9);
      }
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        return 0;
      }
      return *(longlong *)(*plVar9 + 0x10);
    }
  }
  return 0;
}




undefined8 * FUN_1800056a0(undefined8 *param_1,uint param_2)

{
  *param_1 = DetourDirectoryTree::vftable;
  FUN_1800063d0(param_1 + 2);
  free((void *)param_1[2]);
  *param_1 = IDirecotryTreeBuilder::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180005720(undefined8 *param_1)

{
  *param_1 = DetourDirectoryTree::vftable;
  FUN_1800063d0(param_1 + 2);
  free((void *)param_1[2]);
  *param_1 = IDirecotryTreeBuilder::vftable;
  return;
}




void FUN_180005780(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  return;
}




void FUN_1800057a0(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001800057ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,0,0);
  return;
}




void FUN_1800057c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800057c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return;
}




undefined8 FUN_1800057d0(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *_Str;
  char *pcVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60 [4];
  
  lVar3 = param_2[10];
  plVar10 = (longlong *)param_2[6];
  if ((plVar10 != (longlong *)0x0) &&
     (_Str = (char *)(**(code **)(*plVar10 + 0x10))(plVar10), _Str != (char *)0x0)) {
    iVar5 = (**(code **)*plVar10)(plVar10);
    if (iVar5 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   4) < DAT_18002a368) && (_Init_thread_header(&DAT_18002a368), DAT_18002a368 == -1)
         ) {
        DAT_18002a36c = 0x11;
        _Init_thread_footer(&DAT_18002a368);
      }
      if ((*_Str == '.') ||
         ((iVar5 == DAT_18002a36c &&
          (pcVar8 = strstr(_Str,"HFS+ Private Data"), pcVar8 != (char *)0x0)))) {
        (**(code **)(*param_2 + 0x30))(param_2,1);
        return 1;
      }
    }
    lVar17 = 0;
    puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x78))(plVar10);
    if (puVar9 != (undefined8 *)0x0) {
      plVar10 = (longlong *)FUN_180015220((longlong)puVar9);
      if (plVar10 != (longlong *)0x0) {
        lVar17 = *plVar10;
      }
      (**(code **)*puVar9)(puVar9,1);
    }
    bVar4 = true;
    puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x10))[1];
    cVar1 = *(char *)((longlong)puVar9 + 0x19);
    puVar14 = *(undefined8 **)(param_1 + 0x10);
    while (cVar1 == '\0') {
      if ((longlong)puVar9[4] < lVar3) {
        puVar11 = (undefined8 *)puVar9[2];
        puVar9 = puVar14;
      }
      else {
        puVar11 = (undefined8 *)*puVar9;
      }
      puVar14 = puVar9;
      puVar9 = puVar11;
      cVar1 = *(char *)((longlong)puVar11 + 0x19);
    }
    while( true ) {
      puVar9 = *(undefined8 **)(param_1 + 0x10);
      cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
      puVar11 = (undefined8 *)puVar9[1];
      while (cVar1 == '\0') {
        if (lVar3 < (longlong)puVar11[4]) {
          puVar12 = (undefined8 *)*puVar11;
          puVar9 = puVar11;
        }
        else {
          puVar12 = (undefined8 *)puVar11[2];
        }
        puVar11 = puVar12;
        cVar1 = *(char *)((longlong)puVar12 + 0x19);
      }
      if ((puVar14 == puVar9) || (!bVar4)) break;
      plVar10 = (longlong *)puVar14[5];
      if (((plVar10 != param_2) && (plVar10[10] == param_2[10])) &&
         ((int)plVar10[0x14] == (int)param_2[0x14])) {
        if ((undefined **)*plVar10 == CHFSPlusFileNode::vftable) {
          lVar15 = plVar10[0x16];
        }
        else {
          lVar15 = (*(code *)((undefined **)*plVar10)[7])(plVar10);
        }
        if (lVar15 != 0) {
          if ((undefined **)*plVar10 == CHFSPlusFileNode::vftable) {
            pcVar8 = (char *)plVar10[0x16];
          }
          else {
            pcVar8 = (char *)(*(code *)((undefined **)*plVar10)[7])(plVar10);
          }
          lVar15 = (longlong)_Str - (longlong)pcVar8;
          do {
            cVar1 = *pcVar8;
            cVar2 = pcVar8[lVar15];
            if (cVar1 != cVar2) break;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            if ((undefined **)*param_2 == CHFSPlusFileNode::vftable) {
              uVar6 = *(byte *)((longlong)param_2 + 0xce) >> 1 & 1;
            }
            else {
              uVar6 = (*(code *)((undefined **)*param_2)[0xd])(param_2);
            }
            if (uVar6 != 0) {
              if ((undefined **)*plVar10 == CHFSPlusFileNode::vftable) {
                uVar6 = *(byte *)((longlong)plVar10 + 0xce) >> 1 & 1;
              }
              else {
                uVar6 = (*(code *)((undefined **)*plVar10)[0xd])(plVar10);
              }
              if (uVar6 != 0) {
                bVar4 = false;
                goto LAB_180005acf;
              }
            }
            if (lVar17 != 0) {
              if ((undefined **)*param_2 == CHFSPlusFileNode::vftable) {
                lVar15 = param_2[0x17];
              }
              else {
                lVar15 = (*(code *)((undefined **)*param_2)[8])(param_2);
              }
              if ((undefined **)*plVar10 == CHFSPlusFileNode::vftable) {
                lVar13 = plVar10[0x17];
              }
              else {
                lVar13 = (*(code *)((undefined **)*plVar10)[8])(plVar10);
              }
              if (lVar15 == lVar13) {
                if (((longlong *)plVar10[6] != (longlong *)0x0) &&
                   (puVar9 = (undefined8 *)(**(code **)(*(longlong *)plVar10[6] + 0x78))(),
                   puVar9 != (undefined8 *)0x0)) {
                  plVar10 = (longlong *)FUN_180015220((longlong)puVar9);
                  if ((plVar10 != (longlong *)0x0) && (lVar17 == *plVar10)) {
                    bVar4 = false;
                  }
                  (**(code **)*puVar9)(puVar9,1);
                }
                goto LAB_180005acf;
              }
            }
            if (((int)plVar10[0x18] == (int)param_2[0x18]) &&
               (*(int *)((longlong)plVar10 + 0xc4) == *(int *)((longlong)param_2 + 0xc4))) {
              if ((undefined **)*plVar10 == CHFSPlusFileNode::vftable) {
                uVar6 = *(byte *)((longlong)plVar10 + 0xce) & 1;
              }
              else {
                uVar6 = (*(code *)((undefined **)*plVar10)[0xe])(plVar10);
              }
              if ((undefined **)*param_2 == CHFSPlusFileNode::vftable) {
                uVar7 = *(byte *)((longlong)param_2 + 0xce) & 1;
              }
              else {
                uVar7 = (*(code *)((undefined **)*param_2)[0xe])(param_2);
              }
              if (uVar6 == uVar7) {
                bVar4 = false;
              }
            }
          }
        }
      }
LAB_180005acf:
      puVar9 = (undefined8 *)puVar14[2];
      if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)*puVar9 + 0x19);
        puVar14 = puVar9;
        puVar9 = (undefined8 *)*puVar9;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar9 + 0x19);
          puVar14 = puVar9;
          puVar9 = (undefined8 *)*puVar9;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar11 = (undefined8 *)puVar14[1];
        puVar9 = puVar14;
        while ((puVar14 = puVar11, cVar1 == '\0' && (puVar9 == (undefined8 *)puVar14[2]))) {
          cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
          puVar11 = (undefined8 *)puVar14[1];
          puVar9 = puVar14;
        }
      }
    }
    if (bVar4) {
      uVar16 = (ulonglong)param_3;
      iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                        (*(longlong **)(param_1 + 8),param_2,uVar16,param_4);
      if (iVar5 == 1) {
        local_70 = lVar3;
        local_68 = param_2;
        plVar10 = (longlong *)FUN_180007b00((undefined8 *)(param_1 + 0x10),&local_70);
        FUN_180007fb0((longlong *)(param_1 + 0x10),local_60,uVar16,plVar10 + 4,plVar10);
        return 1;
      }
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,1);
  return 1;
}




void FUN_180005c90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  return;
}




void FUN_180005ca0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005ca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  return;
}




void FUN_180005cb0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005cb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  return;
}




void FUN_180005cc0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005cc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  return;
}




void FUN_180005cd0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005cd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x48))();
  return;
}




void FUN_180005ce0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
  return;
}




void FUN_180005cf0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
  return;
}




void FUN_180005d00(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005d07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
  return;
}




void FUN_180005d10(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005d17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
  return;
}




void FUN_180005d20(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005d27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  return;
}




void FUN_180005d30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
  return;
}




void FUN_180005d40(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
  return;
}




void FUN_180005d50(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x88))();
  return;
}




void FUN_180005d60(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180005d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  return;
}




void FUN_180005d70(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x160) = param_2;
  return;
}




void FUN_180005d80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  void *pvVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *_Memory;
  undefined **ppuVar13;
  longlong lVar14;
  size_t sVar15;
  undefined8 *puVar16;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  ulonglong local_98;
  undefined1 local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_68 = 0xfffffffffffffffe;
  local_30 = DAT_180028010 ^ (ulonglong)auStack_c8;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  lVar14 = param_1;
  puVar7 = (undefined8 *)FUN_180006f90(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  local_98 = *(ulonglong *)(param_1 + 0x158);
  puVar16 = (undefined8 *)puVar7[1];
  local_88 = puVar7;
  uVar8 = FUN_180007550(lVar14,puVar7,puVar16,&local_98);
  if (local_80 == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar14 = local_80 + 1;
  puVar7[1] = uVar8;
  *puVar16 = uVar8;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_80 = lVar14;
  local_78 = (undefined8 *)FUN_180006f50();
  puVar16 = local_88;
  while (lVar14 != 0) {
    plVar1 = (longlong *)*puVar16;
    lVar2 = plVar1[2];
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    lVar14 = lVar14 + -1;
    local_80 = lVar14;
    free(plVar1);
    if (lVar2 != 0) {
      if ((*(longlong **)(param_1 + 0x160) != (longlong *)0x0) &&
         (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x88))(), cVar6 != '\0')) break;
      local_98 = *(ulonglong *)(lVar2 + 0x10);
      while ((local_98 != 0 &&
             ((*(longlong **)(param_1 + 0x160) == (longlong *)0x0 ||
              (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x88))(), cVar6 == '\0')))))
      {
        *(undefined8 *)(local_98 + 0x48) = *(undefined8 *)(lVar2 + 0x50);
        ppuVar13 = *(undefined ***)(local_98 + 0x40);
        if (*(undefined ***)(local_98 + 0x40) == (undefined **)0x0) {
          if (*(longlong **)(local_98 + 0x30) == (longlong *)0x0) {
            ppuVar9 = &PTR_18001edc0;
          }
          else {
            ppuVar9 = (undefined **)(**(code **)(**(longlong **)(local_98 + 0x30) + 0x10))();
          }
          ppuVar13 = &PTR_18001edc0;
          if (ppuVar9 != (undefined **)0x0) {
            ppuVar13 = ppuVar9;
          }
        }
        local_40 = 0;
        local_38 = 0xf;
        local_50 = 0;
        sVar15 = 0xffffffffffffffff;
        do {
          sVar15 = sVar15 + 1;
        } while (*(char *)((longlong)ppuVar13 + sVar15) != '\0');
        FUN_180006720((longlong *)&local_50,ppuVar13,sVar15);
        puVar7 = (undefined8 *)local_78[1];
        puVar12 = local_78;
        if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar7[4] < local_98) {
              puVar10 = (undefined8 *)puVar7[2];
            }
            else {
              puVar10 = (undefined8 *)*puVar7;
              puVar12 = puVar7;
            }
            puVar7 = puVar10;
          } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
          if ((puVar12 == local_78) || (local_98 < (ulonglong)puVar12[4])) goto LAB_180005f87;
        }
        else {
LAB_180005f87:
          local_a8 = CONCAT31(local_a8._1_3_,local_90);
          FUN_1800072d0((longlong *)&local_78,local_60,local_78,&local_98);
          local_a8 = 0;
          lVar14 = lVar2;
          lVar11 = __RTDynamicCast(lVar2,0,&CFileNode::RTTI_Type_Descriptor,
                                   &CHFSPlusFileNode::RTTI_Type_Descriptor);
          if (lVar11 != 0) {
            puVar7 = *(undefined8 **)(param_1 + 0x168);
            puVar12 = (undefined8 *)puVar7[1];
            uVar8 = FUN_180007550(lVar14,puVar7,puVar12,&local_98);
            if (*(longlong *)(param_1 + 0x170) == 0xaaaaaaaaaaaaaa9) {
              std::_Xlength_error("list<T> too long");
              goto LAB_180006190;
            }
            lVar14 = *(longlong *)(param_1 + 0x170) + 1;
            *(longlong *)(param_1 + 0x170) = lVar14;
            puVar7[1] = uVar8;
            *puVar12 = uVar8;
          }
          puVar7 = (undefined8 *)puVar16[1];
          uVar8 = FUN_180007550(lVar14,puVar16,puVar7,&local_98);
          if (local_80 == 0xaaaaaaaaaaaaaa9) {
            std::_Xlength_error("list<T> too long");
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar14 = local_80 + 1;
          puVar16[1] = uVar8;
          *puVar7 = uVar8;
          puVar16 = local_88;
          local_80 = lVar14;
        }
        if (0xf < local_38) {
          pvVar5 = (void *)CONCAT71(uStack_4f,local_50);
          _Memory = pvVar5;
          if ((0xfff < local_38 + 1) &&
             (_Memory = *(void **)((longlong)pvVar5 + -8),
             0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory)))) {
LAB_180006190:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
        local_40 = 0;
        local_38 = 0xf;
        local_50 = 0;
        local_98 = *(ulonglong *)(local_98 + 0x20);
      }
    }
  }
  puVar7 = local_78;
  cVar6 = *(char *)((longlong)local_78[1] + 0x19);
  plVar1 = (longlong *)local_78[1];
  while (cVar6 == '\0') {
    FUN_180006640(&local_78,(longlong *)plVar1[2]);
    plVar3 = (longlong *)*plVar1;
    free(plVar1);
    plVar1 = plVar3;
    cVar6 = *(char *)((longlong)plVar3 + 0x19);
  }
  local_78[1] = puVar7;
  *local_78 = puVar7;
  local_78[2] = puVar7;
  uStack_70 = 0;
  free(local_78);
  puVar7 = (undefined8 *)*puVar16;
  *puVar16 = puVar16;
  puVar16[1] = puVar16;
  local_80 = 0;
  while (puVar7 != puVar16) {
    puVar12 = (undefined8 *)*puVar7;
    free(puVar7);
    puVar7 = puVar12;
  }
  free(puVar16);
  __security_check_cookie(local_30 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_1800061b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *_Memory;
  
  lVar1 = *param_1;
  _Memory = *(longlong **)(lVar1 + 8);
  lVar3 = lVar1;
  if (*(char *)((longlong)_Memory + 0x19) == '\0') {
    do {
      FUN_1800066c0(param_1,(longlong *)_Memory[2]);
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




void FUN_180006260(longlong *param_1)

{
  undefined8 local_res10 [3];
  
  FUN_180006870(param_1,local_res10,*(longlong **)*param_1,(longlong *)*param_1);
  free((void *)*param_1);
  return;
}




void FUN_1800062a0(longlong *param_1)

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
      FUN_180006640(param_1,(longlong *)_Memory[2]);
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




void FUN_180006330(longlong *param_1)

{
  FUN_1800062a0(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180006360(longlong *param_1)

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
  free((void *)*param_1);
  return;
}




void FUN_1800063d0(longlong *param_1)

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
      FUN_1800066c0(param_1,(longlong *)_Memory[2]);
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




void FUN_180006460(longlong *param_1)

{
  FUN_1800063d0(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180006490(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
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




void FUN_180006500(longlong *param_1)

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




longlong * FUN_180006570(longlong *param_1,void *param_2)

{
  size_t sVar1;
  
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar1 = 0xffffffffffffffff;
  *(undefined1 *)param_1 = 0;
  do {
    sVar1 = sVar1 + 1;
  } while (*(char *)((longlong)param_2 + sVar1) != '\0');
  FUN_180006720(param_1,param_2,sVar1);
  return param_1;
}




void FUN_1800065b0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_1800065e0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180006600(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180006620(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180006640(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180006640(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_1800066a0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_1800066c0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800066c0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




longlong * FUN_180006720(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_180007190();
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
      if (pvVar3 == (void *)0x0) goto LAB_180006863;
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
LAB_180006863:
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




undefined8 *
FUN_180006870(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar6) && (param_4 == plVar6)) {
    FUN_180006e50(param_1,(longlong *)plVar6[1],param_3,param_4);
    *(longlong **)(*param_1 + 8) = plVar6;
    *(longlong **)*param_1 = plVar6;
    *(longlong **)(*param_1 + 0x10) = plVar6;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    plVar6 = param_3;
    if (param_3 != param_4) {
      do {
        plVar2 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          param_3 = plVar2;
          plVar5 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar5 + 0x19);
            param_3 = plVar5;
            plVar5 = (longlong *)*plVar5;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar5 = plVar6;
          while ((param_3 = plVar4, cVar1 == '\0' && (plVar5 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar4 = (longlong *)param_3[1];
            plVar5 = param_3;
          }
        }
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar2 + 0x19);
          while (cVar1 == '\0') {
            plVar2 = (longlong *)*plVar2;
            cVar1 = *(char *)((longlong)plVar2 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar5 = (longlong *)plVar6[1];
          plVar2 = plVar6;
          while ((plVar4 = plVar5, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar5 = (longlong *)plVar4[1];
            plVar2 = plVar4;
          }
        }
        plVar5 = FUN_180006a90(param_1,plVar6);
        plVar6 = plVar5 + 5;
        lVar3 = *plVar6;
        cVar1 = *(char *)((longlong)*(longlong **)(lVar3 + 8) + 0x19);
        plVar2 = *(longlong **)(lVar3 + 8);
        while (cVar1 == '\0') {
          FUN_1800066c0(plVar6,(longlong *)plVar2[2]);
          plVar4 = (longlong *)*plVar2;
          free(plVar2);
          plVar2 = plVar4;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
        }
        *(longlong *)(*plVar6 + 8) = lVar3;
        *(longlong *)*plVar6 = lVar3;
        *(longlong *)(*plVar6 + 0x10) = lVar3;
        plVar5[6] = 0;
        free((void *)*plVar6);
        free(plVar5);
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




void FUN_180006a50(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




longlong * FUN_180006a90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar4 = (longlong *)param_2[2];
  plVar6 = param_2 + 2;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar5 = *(char *)(*plVar4 + 0x19);
    plVar7 = (longlong *)*plVar4;
    while (cVar5 == '\0') {
      cVar5 = *(char *)(*plVar7 + 0x19);
      plVar4 = plVar7;
      plVar7 = (longlong *)*plVar7;
    }
  }
  else {
    cVar5 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar7 = param_2;
    while ((plVar4 = plVar8, cVar5 == '\0' && (plVar7 == (longlong *)plVar4[2]))) {
      cVar5 = *(char *)(plVar4[1] + 0x19);
      plVar8 = (longlong *)plVar4[1];
      plVar7 = plVar4;
    }
  }
  plVar7 = (longlong *)*param_2;
  plVar8 = (longlong *)*plVar6;
  if (((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
      (plVar8 = plVar7, *(char *)(*plVar6 + 0x19) == '\0')) &&
     (plVar8 = (longlong *)plVar4[2], plVar4 != param_2)) {
    plVar7[1] = (longlong)plVar4;
    *plVar4 = *param_2;
    plVar7 = plVar4;
    if (plVar4 != (longlong *)*plVar6) {
      plVar7 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        plVar8[1] = (longlong)plVar7;
      }
      *plVar7 = (longlong)plVar8;
      plVar4[2] = *plVar6;
      *(longlong **)(*plVar6 + 8) = plVar4;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar4;
    }
    else {
      plVar6 = (longlong *)param_2[1];
      if ((longlong *)*plVar6 == param_2) {
        *plVar6 = (longlong)plVar4;
      }
      else {
        plVar6[2] = (longlong)plVar4;
      }
    }
    plVar4[1] = param_2[1];
    cVar5 = (char)plVar4[3];
    *(char *)(plVar4 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = cVar5;
  }
  else {
    plVar7 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar8[1] = (longlong)plVar7;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar8;
    }
    else if ((longlong *)*plVar7 == param_2) {
      *plVar7 = (longlong)plVar8;
    }
    else {
      plVar7[2] = (longlong)plVar8;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar6 = plVar7;
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar5 = *(char *)(*plVar8 + 0x19);
        plVar4 = (longlong *)*plVar8;
        plVar6 = plVar8;
        while (plVar3 = plVar4, cVar5 == '\0') {
          plVar4 = (longlong *)*plVar3;
          cVar5 = *(char *)((longlong)plVar4 + 0x19);
          plVar6 = plVar3;
        }
      }
      *(longlong **)*param_1 = plVar6;
    }
    lVar1 = *param_1;
    if (*(longlong **)(lVar1 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar8 + 0x19) != '\0') {
        *(longlong **)(lVar1 + 0x10) = plVar7;
        cVar5 = (char)param_2[3];
        goto LAB_180006c22;
      }
      cVar5 = *(char *)(plVar8[2] + 0x19);
      plVar6 = (longlong *)plVar8[2];
      plVar4 = plVar8;
      while (plVar3 = plVar6, cVar5 == '\0') {
        plVar6 = (longlong *)plVar3[2];
        cVar5 = *(char *)((longlong)plVar6 + 0x19);
        plVar4 = plVar3;
      }
      *(longlong **)(lVar1 + 0x10) = plVar4;
    }
    cVar5 = (char)param_2[3];
  }
LAB_180006c22:
  if (cVar5 == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar4 = (longlong *)*plVar6;
        if (plVar8 == plVar4) {
          plVar4 = (longlong *)plVar6[2];
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
            plVar7 = (longlong *)plVar6[2];
            *(undefined1 *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar7;
            if (*(char *)(*plVar7 + 0x19) == '\0') {
              *(longlong **)(*plVar7 + 8) = plVar6;
            }
            plVar7[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar7;
            }
            else {
              puVar2 = (undefined8 *)plVar6[1];
              if (plVar6 == (longlong *)*puVar2) {
                *puVar2 = plVar7;
              }
              else {
                puVar2[2] = plVar7;
              }
            }
            *plVar7 = (longlong)plVar6;
            plVar4 = (longlong *)plVar6[2];
            plVar6[1] = (longlong)plVar7;
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(*plVar4 + 0x18) != '\x01') || (*(char *)(plVar4[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar4[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar4 + 0x18) = 1;
                *(undefined1 *)(plVar4 + 3) = 0;
                FUN_180006ff0(param_1,plVar4);
                plVar4 = (longlong *)plVar6[2];
              }
              *(char *)(plVar4 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              FUN_180007050(param_1,(longlong)plVar6);
              break;
            }
LAB_180006d92:
            *(undefined1 *)(plVar4 + 3) = 0;
          }
        }
        else {
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
            lVar1 = *plVar6;
            *(undefined1 *)(plVar6 + 3) = 0;
            *plVar6 = *(longlong *)(lVar1 + 0x10);
            if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = plVar6;
            }
            *(longlong *)(lVar1 + 8) = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar1;
            }
            else {
              plVar4 = (longlong *)plVar6[1];
              if (plVar6 == (longlong *)plVar4[2]) {
                plVar4[2] = lVar1;
              }
              else {
                *plVar4 = lVar1;
              }
            }
            *(longlong **)(lVar1 + 0x10) = plVar6;
            plVar4 = (longlong *)*plVar6;
            plVar6[1] = lVar1;
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(plVar4[2] + 0x18) == '\x01') && (*(char *)(*plVar4 + 0x18) == '\x01'))
            goto LAB_180006d92;
            if (*(char *)(*plVar4 + 0x18) == '\x01') {
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              *(undefined1 *)(plVar4 + 3) = 0;
              FUN_180007050(param_1,(longlong)plVar4);
              plVar4 = (longlong *)*plVar6;
            }
            *(char *)(plVar4 + 3) = (char)plVar6[3];
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(*plVar4 + 0x18) = 1;
            FUN_180006ff0(param_1,plVar6);
            break;
          }
        }
        plVar7 = (longlong *)plVar6[1];
        plVar8 = plVar6;
      } while (plVar6 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}




void FUN_180006e10(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180006e50(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *_Memory;
  
  cVar2 = *(char *)((longlong)param_2 + 0x19);
  while (cVar2 == '\0') {
    FUN_180006e50(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar3 = (longlong *)*param_2;
    plVar1 = param_2 + 5;
    lVar4 = *plVar1;
    cVar2 = *(char *)((longlong)*(longlong **)(lVar4 + 8) + 0x19);
    _Memory = *(longlong **)(lVar4 + 8);
    while (cVar2 == '\0') {
      FUN_1800066c0(plVar1,(longlong *)_Memory[2]);
      plVar5 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar5;
      cVar2 = *(char *)((longlong)plVar5 + 0x19);
    }
    *(longlong *)(*plVar1 + 8) = lVar4;
    *(longlong *)*plVar1 = lVar4;
    *(longlong *)(*plVar1 + 0x10) = lVar4;
    param_2[6] = 0;
    free((void *)*plVar1);
    free(param_2);
    param_2 = plVar3;
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
  }
  return;
}




void FUN_180006f50(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180006f90(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_180006fe0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_180006ff0(longlong *param_1,longlong *param_2)

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




void FUN_180007050(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




void FUN_1800070b0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_1800070c0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_1800070d0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_1800070e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *_Memory;
  
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = *plVar1;
  lVar4 = lVar2;
  _Memory = *(longlong **)(lVar2 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19) == '\0') {
    do {
      FUN_1800066c0(plVar1,(longlong *)_Memory[2]);
      plVar3 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
    lVar4 = *plVar1;
  }
  *(longlong *)(lVar4 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  free((void *)*plVar1);
  return;
}




void FUN_180007190(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined8 *
FUN_1800071b0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 local_res8;
  
  plVar4 = (longlong *)*param_1;
  plVar1 = (longlong *)plVar4[1];
  plVar6 = plVar4;
  while (plVar2 = plVar1, *(char *)((longlong)plVar2 + 0x19) == '\0') {
    plVar6 = plVar2;
    plVar1 = (longlong *)*plVar2;
  }
  if (plVar6 == (longlong *)*plVar4) {
    puVar3 = FUN_180007580(param_1,&local_res8,'\x01',plVar6,param_4);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      lVar5 = *plVar6;
      plVar4 = plVar6;
      if (*(char *)(lVar5 + 0x19) == '\0') {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x10);
        } while (*(char *)(lVar5 + 0x19) == '\0');
      }
      else {
        do {
          plVar1 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
          bVar7 = plVar4 == (longlong *)*plVar1;
          plVar4 = plVar1;
        } while (bVar7);
      }
    }
    puVar3 = FUN_180007580(param_1,&local_res8,'\x01',plVar6,param_4);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}




undefined8 *
FUN_1800072d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 local_res8;
  
  plVar1 = (longlong *)*param_1;
  bVar6 = true;
  plVar4 = (longlong *)plVar1[1];
  plVar5 = plVar1;
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    bVar6 = *param_4 < (ulonglong)plVar4[4];
    plVar5 = plVar4;
    if (bVar6) {
      plVar4 = (longlong *)*plVar4;
    }
    else {
      plVar4 = (longlong *)plVar4[2];
    }
  }
  plVar4 = plVar5;
  if (bVar6) {
    if (plVar5 == (longlong *)*plVar1) {
      puVar3 = FUN_180007840(param_1,&local_res8,'\x01',plVar5,param_4);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      plVar2 = (longlong *)*plVar5;
      plVar1 = plVar5;
      if (*(char *)(*plVar5 + 0x19) == '\0') {
        do {
          plVar4 = plVar2;
          plVar2 = (longlong *)plVar4[2];
        } while (*(char *)(plVar4[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
        } while (plVar4 == (longlong *)*plVar1);
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          plVar4 = plVar1;
        }
      }
    }
    else {
      plVar4 = (longlong *)plVar5[2];
    }
  }
  if ((ulonglong)plVar4[4] < *param_4) {
    puVar3 = FUN_180007840(param_1,&local_res8,bVar6,plVar5,param_4);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 *
FUN_180007410(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 local_res8;
  
  plVar1 = (longlong *)*param_1;
  bVar6 = true;
  plVar4 = (longlong *)plVar1[1];
  plVar5 = plVar1;
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    bVar6 = *param_4 < (ulonglong)plVar4[4];
    plVar5 = plVar4;
    if (bVar6) {
      plVar4 = (longlong *)*plVar4;
    }
    else {
      plVar4 = (longlong *)plVar4[2];
    }
  }
  plVar4 = plVar5;
  if (bVar6) {
    if (plVar5 == (longlong *)*plVar1) {
      puVar3 = FUN_180007580(param_1,&local_res8,'\x01',plVar5,param_4);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      plVar2 = (longlong *)*plVar5;
      plVar1 = plVar5;
      if (*(char *)(*plVar5 + 0x19) == '\0') {
        do {
          plVar4 = plVar2;
          plVar2 = (longlong *)plVar4[2];
        } while (*(char *)(plVar4[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
        } while (plVar4 == (longlong *)*plVar1);
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          plVar4 = plVar1;
        }
      }
    }
    else {
      plVar4 = (longlong *)plVar5[2];
    }
  }
  if ((ulonglong)plVar4[4] < *param_4) {
    puVar3 = FUN_180007580(param_1,&local_res8,bVar6,plVar5,param_4);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_180007550(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_180006f90(param_1,param_2,param_3);
  *(undefined8 *)(lVar1 + 0x10) = *param_4;
  return;
}




undefined8 *
FUN_180007580(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  plVar5 = (longlong *)FUN_180008970(param_1,param_5);
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
        goto LAB_180007805;
      }
LAB_180007737:
      *(undefined1 *)(plVar10 + 3) = 1;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar6 + 0x18) == '\0') goto LAB_180007737;
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
LAB_180007805:
      plVar8[1] = (longlong)plVar11;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180007840(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  plVar5 = (longlong *)FUN_1800089a0(param_1,param_5);
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
        goto LAB_180007ac5;
      }
LAB_1800079f7:
      *(undefined1 *)(plVar10 + 3) = 1;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar6 + 0x18) == '\0') goto LAB_1800079f7;
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
LAB_180007ac5:
      plVar8[1] = (longlong)plVar11;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}




void FUN_180007b00(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007cc0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_2[1];
  return;
}




undefined8 *
FUN_180007b40(longlong *param_1,undefined8 *param_2,char param_3,longlong *param_4,longlong *param_5
             )

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  
  plVar1 = (longlong *)*param_1;
  bVar5 = true;
  plVar6 = plVar1;
  plVar4 = (longlong *)plVar1[1];
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar5 = *param_4 < plVar4[4];
    }
    else {
      bVar5 = *param_4 <= plVar4[4];
    }
    plVar6 = plVar4;
    if (bVar5 == false) {
      plVar4 = (longlong *)plVar4[2];
    }
    else {
      plVar4 = (longlong *)*plVar4;
    }
  }
  plVar4 = plVar6;
  if (bVar5 != false) {
    if (plVar6 == (longlong *)*plVar1) {
      puVar3 = FUN_180007d00(param_1,&local_res8,'\x01',plVar6,in_stack_ffffffffffffffc8,param_5);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar2 = (longlong *)*plVar6;
      plVar1 = plVar6;
      if (*(char *)(*plVar6 + 0x19) == '\0') {
        do {
          plVar4 = plVar2;
          plVar2 = (longlong *)plVar4[2];
        } while (*(char *)(plVar4[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
        } while (plVar4 == (longlong *)*plVar1);
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          plVar4 = plVar1;
        }
      }
    }
    else {
      plVar4 = (longlong *)plVar6[2];
    }
  }
  if (plVar4[4] < *param_4) {
    puVar3 = FUN_180007d00(param_1,&local_res8,bVar5,plVar6,in_stack_ffffffffffffffc8,param_5);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    free(param_5);
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_180007cc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




undefined8 *
FUN_180007d00(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_180006fe0(0x555555555555554,param_6);
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
      goto LAB_180007d89;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_180007d89;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_180007d89:
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
        goto LAB_180007f75;
      }
LAB_180007ea7:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_180007ea7;
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
LAB_180007f75:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180007fb0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 local_res8 [4];
  undefined8 in_stack_ffffffffffffffd8;
  
  bVar3 = true;
  puVar1 = (undefined8 *)((undefined8 *)*param_1)[1];
  puVar2 = (undefined8 *)*param_1;
  while (*(char *)((longlong)puVar1 + 0x19) == '\0') {
    bVar3 = *param_4 < (longlong)puVar1[4];
    puVar2 = puVar1;
    if (bVar3) {
      puVar1 = (undefined8 *)*puVar1;
    }
    else {
      puVar1 = (undefined8 *)puVar1[2];
    }
  }
  puVar1 = FUN_180007d00(param_1,local_res8,bVar3,puVar2,in_stack_ffffffffffffffd8,param_5);
  *param_2 = *puVar1;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




void FUN_180008030(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_180007cc0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}




undefined8 *
FUN_180008080(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4,longlong *param_5
             )

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_180007d00(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar3 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar3) {
      if (*param_4 < (int)param_3[4]) {
        FUN_180007d00(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar3) {
      if (*(int *)((undefined8 *)plVar3[2] + 4) < *param_4) {
        FUN_180007d00(param_1,param_2,'\0',(undefined8 *)plVar3[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      iVar1 = *param_4;
      iVar2 = (int)param_3[4];
      bVar8 = SBORROW4(iVar2,iVar1);
      iVar4 = iVar2 - iVar1;
      if (iVar1 < iVar2) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar3 = param_3;
          plVar7 = (longlong *)*param_3;
          if (*(char *)(*param_3 + 0x19) == '\0') {
            do {
              plVar6 = plVar7;
              plVar7 = (longlong *)plVar6[2];
            } while (*(char *)(plVar6[2] + 0x19) == '\0');
          }
          else {
            do {
              plVar6 = plVar3;
              plVar3 = (longlong *)plVar6[1];
              if (*(char *)((longlong)plVar3 + 0x19) != '\0') break;
            } while (plVar6 == (longlong *)*plVar3);
            if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
              plVar6 = plVar3;
            }
          }
        }
        else {
          plVar6 = (longlong *)param_3[2];
        }
        iVar4 = *param_4;
        if ((int)plVar6[4] < iVar4) {
          if (*(char *)(plVar6[2] + 0x19) != '\0') {
            FUN_180007d00(param_1,param_2,'\0',plVar6,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180007d00(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
        bVar8 = SBORROW4((int)param_3[4],iVar4);
        iVar4 = (int)param_3[4] - iVar4;
      }
      if (bVar8 != iVar4 < 0) {
        plVar3 = (longlong *)param_3[2];
        plVar7 = param_3;
        if (*(char *)(param_3[2] + 0x19) == '\0') {
          do {
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar6;
          } while (*(char *)(*plVar6 + 0x19) == '\0');
        }
        else {
          do {
            plVar6 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar6 + 0x19) != '\0') break;
            bVar8 = plVar7 == (longlong *)plVar6[2];
            plVar7 = plVar6;
          } while (bVar8);
        }
        if ((plVar6 == (longlong *)*param_1) || (*param_4 < (int)plVar6[4])) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            FUN_180007d00(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180007d00(param_1,param_2,'\x01',plVar6,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar5 = FUN_1800089d0(param_1,local_20,'\0',param_4,param_5);
    *param_2 = *puVar5;
  }
  return param_2;
}




longlong FUN_1800082e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_180008870(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  uVar2 = FUN_180006a50();
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  return lVar1;
}




undefined8 *
FUN_180008360(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4,longlong *param_5
             )

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_180008b50(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar3 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar3) {
      if (*param_4 < (int)param_3[4]) {
        FUN_180008b50(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar3) {
      if (*(int *)((undefined8 *)plVar3[2] + 4) < *param_4) {
        FUN_180008b50(param_1,param_2,'\0',(undefined8 *)plVar3[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      iVar1 = *param_4;
      iVar2 = (int)param_3[4];
      bVar8 = SBORROW4(iVar2,iVar1);
      iVar4 = iVar2 - iVar1;
      if (iVar1 < iVar2) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar3 = param_3;
          plVar7 = (longlong *)*param_3;
          if (*(char *)(*param_3 + 0x19) == '\0') {
            do {
              plVar6 = plVar7;
              plVar7 = (longlong *)plVar6[2];
            } while (*(char *)(plVar6[2] + 0x19) == '\0');
          }
          else {
            do {
              plVar6 = plVar3;
              plVar3 = (longlong *)plVar6[1];
              if (*(char *)((longlong)plVar3 + 0x19) != '\0') break;
            } while (plVar6 == (longlong *)*plVar3);
            if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
              plVar6 = plVar3;
            }
          }
        }
        else {
          plVar6 = (longlong *)param_3[2];
        }
        iVar4 = *param_4;
        if ((int)plVar6[4] < iVar4) {
          if (*(char *)(plVar6[2] + 0x19) != '\0') {
            FUN_180008b50(param_1,param_2,'\0',plVar6,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180008b50(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
        bVar8 = SBORROW4((int)param_3[4],iVar4);
        iVar4 = (int)param_3[4] - iVar4;
      }
      if (bVar8 != iVar4 < 0) {
        plVar3 = (longlong *)param_3[2];
        plVar7 = param_3;
        if (*(char *)(param_3[2] + 0x19) == '\0') {
          do {
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar6;
          } while (*(char *)(*plVar6 + 0x19) == '\0');
        }
        else {
          do {
            plVar6 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar6 + 0x19) != '\0') break;
            bVar8 = plVar7 == (longlong *)plVar6[2];
            plVar7 = plVar6;
          } while (bVar8);
        }
        if ((plVar6 == (longlong *)*param_1) || (*param_4 < (int)plVar6[4])) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            FUN_180008b50(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180008b50(param_1,param_2,'\x01',plVar6,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar5 = FUN_180008e00(param_1,local_20,'\0',param_4,param_5);
    *param_2 = *puVar5;
  }
  return param_2;
}




void FUN_1800085c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_180007cc0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}




undefined8 *
FUN_180008610(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_180007d00(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar1 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar1) {
      if (*param_4 < param_3[4]) {
        FUN_180007d00(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar1) {
      if ((longlong)((undefined8 *)plVar1[2])[4] < *param_4) {
        FUN_180007d00(param_1,param_2,'\0',(undefined8 *)plVar1[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      lVar2 = *param_4;
      lVar3 = param_3[4];
      bVar8 = SBORROW8(lVar3,lVar2);
      lVar4 = lVar3 - lVar2;
      if (lVar2 < lVar3) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar1 = param_3;
          plVar7 = (longlong *)*param_3;
          if (*(char *)(*param_3 + 0x19) == '\0') {
            do {
              plVar6 = plVar7;
              plVar7 = (longlong *)plVar6[2];
            } while (*(char *)(plVar6[2] + 0x19) == '\0');
          }
          else {
            do {
              plVar6 = plVar1;
              plVar1 = (longlong *)plVar6[1];
              if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
            } while (plVar6 == (longlong *)*plVar1);
            if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
              plVar6 = plVar1;
            }
          }
        }
        else {
          plVar6 = (longlong *)param_3[2];
        }
        lVar4 = *param_4;
        if (plVar6[4] < lVar4) {
          if (*(char *)(plVar6[2] + 0x19) != '\0') {
            FUN_180007d00(param_1,param_2,'\0',plVar6,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180007d00(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
        bVar8 = SBORROW8(param_3[4],lVar4);
        lVar4 = param_3[4] - lVar4;
      }
      if (bVar8 != lVar4 < 0) {
        plVar1 = (longlong *)param_3[2];
        plVar7 = param_3;
        if (*(char *)(param_3[2] + 0x19) == '\0') {
          do {
            plVar6 = plVar1;
            plVar1 = (longlong *)*plVar6;
          } while (*(char *)(*plVar6 + 0x19) == '\0');
        }
        else {
          do {
            plVar6 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar6 + 0x19) != '\0') break;
            bVar8 = plVar7 == (longlong *)plVar6[2];
            plVar7 = plVar6;
          } while (bVar8);
        }
        if ((plVar6 == (longlong *)*param_1) || (*param_4 < plVar6[4])) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            FUN_180007d00(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180007d00(param_1,param_2,'\x01',plVar6,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar5 = FUN_180007b40(param_1,local_20,'\0',param_4,param_5);
    *param_2 = *puVar5;
  }
  return param_2;
}




void FUN_180008870(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_1800088b0(undefined8 param_1,void *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *_Memory;
  
  plVar1 = (longlong *)((longlong)param_2 + 0x28);
  lVar2 = *plVar1;
  _Memory = *(longlong **)(lVar2 + 8);
  lVar4 = lVar2;
  if (*(char *)((longlong)_Memory + 0x19) == '\0') {
    do {
      FUN_1800066c0(plVar1,(longlong *)_Memory[2]);
      plVar3 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
    lVar4 = *plVar1;
  }
  *(longlong *)(lVar4 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  free((void *)*plVar1);
  free(param_2);
  return;
}




void FUN_180008970(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_180007cc0(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 0x20) = *param_2;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  return;
}




void FUN_1800089a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180008f50(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  return;
}




undefined8 *
FUN_1800089d0(longlong *param_1,undefined8 *param_2,char param_3,int *param_4,longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  
  plVar1 = (longlong *)*param_1;
  bVar5 = true;
  plVar6 = plVar1;
  plVar4 = (longlong *)plVar1[1];
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar5 = *param_4 < (int)plVar4[4];
    }
    else {
      bVar5 = *param_4 <= (int)plVar4[4];
    }
    plVar6 = plVar4;
    if (bVar5 == false) {
      plVar4 = (longlong *)plVar4[2];
    }
    else {
      plVar4 = (longlong *)*plVar4;
    }
  }
  plVar4 = plVar6;
  if (bVar5 != false) {
    if (plVar6 == (longlong *)*plVar1) {
      puVar3 = FUN_180007d00(param_1,&local_res8,'\x01',plVar6,in_stack_ffffffffffffffc8,param_5);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar1 = plVar6;
      plVar2 = (longlong *)*plVar6;
      if (*(char *)(*plVar6 + 0x19) == '\0') {
        do {
          plVar4 = plVar2;
          plVar2 = (longlong *)plVar4[2];
        } while (*(char *)(plVar4[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
        } while (plVar4 == (longlong *)*plVar1);
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          plVar4 = plVar1;
        }
      }
    }
    else {
      plVar4 = (longlong *)plVar6[2];
    }
  }
  if ((int)plVar4[4] < *param_4) {
    puVar3 = FUN_180007d00(param_1,&local_res8,bVar5,plVar6,in_stack_ffffffffffffffc8,param_5);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    free(param_5);
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 *
FUN_180008b50(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x492492492492490 < (ulonglong)param_1[1]) {
    FUN_1800088b0(0x492492492492491,param_6);
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
      goto LAB_180008bd9;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_180008bd9;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_180008bd9:
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
        goto LAB_180008dc5;
      }
LAB_180008cf7:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_180008cf7;
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
LAB_180008dc5:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180008e00(longlong *param_1,undefined8 *param_2,char param_3,int *param_4,longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  plVar1 = (longlong *)*param_1;
  bVar5 = true;
  plVar6 = plVar1;
  plVar4 = (longlong *)plVar1[1];
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar5 = *param_4 < (int)plVar4[4];
    }
    else {
      bVar5 = *param_4 <= (int)plVar4[4];
    }
    plVar6 = plVar4;
    if (bVar5 == false) {
      plVar4 = (longlong *)plVar4[2];
    }
    else {
      plVar4 = (longlong *)*plVar4;
    }
  }
  plVar4 = plVar6;
  if (bVar5 != false) {
    if (plVar6 == (longlong *)*plVar1) {
      puVar3 = FUN_180008b50(param_1,&local_res8,'\x01',plVar6,in_stack_ffffffffffffffd8,param_5);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar2 = (longlong *)*plVar6;
      plVar1 = plVar6;
      if (*(char *)(*plVar6 + 0x19) == '\0') {
        do {
          plVar4 = plVar2;
          plVar2 = (longlong *)plVar4[2];
        } while (*(char *)(plVar4[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
        } while (plVar4 == (longlong *)*plVar1);
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          plVar4 = plVar1;
        }
      }
    }
    else {
      plVar4 = (longlong *)plVar6[2];
    }
  }
  if ((int)plVar4[4] < *param_4) {
    puVar3 = FUN_180008b50(param_1,&local_res8,bVar5,plVar6,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FUN_1800088b0(param_1,param_5);
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_180008f50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180008f90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = IStorageDevice::vftable;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[4] = 0;
  }
  return;
}




void FUN_180008fd0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180008fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}




longlong FUN_180008ff0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[3];
  if (lVar1 == 0) {
    if ((undefined **)*param_1 == CPartitionVirtualVolumeDevice::vftable) {
      return param_1[9];
    }
    lVar1 = (*(code *)((undefined **)*param_1)[3])();
  }
  return lVar1;
}




undefined8 FUN_180009020(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uStack0000000000000028;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 != 0) {
    uStack0000000000000028 = 0;
                    /* WARNING: Could not recover jumptable at 0x000180009056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 8))
                      (param_1,param_2,param_3 / (longlong)iVar1,param_4 / (longlong)iVar1);
    return uVar2;
  }
  return 0;
}




longlong * FUN_180009060(undefined8 param_1,longlong *param_2)

{
  FUN_180006570(param_2,&PTR_18001edc0);
  return param_2;
}




undefined8 FUN_180009090(void)

{
  return 0xc;
}




undefined1 FUN_1800090a0(void)

{
  return 1;
}




undefined8 FUN_1800090b0(void)

{
  return 0xffffffff;
}




undefined8 * FUN_1800090c0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = IStorageDevice::vftable;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[4] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180009120(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 *
FUN_180009130(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0xe;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = CPartitionVirtualVolumeDevice::vftable;
  param_1[5] = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = 0x200;
  param_1[8] = param_3;
  param_1[9] = param_4;
  if (param_2 != (longlong *)0x0) {
    if ((undefined **)*param_2 == CPartitionVirtualVolumeDevice::vftable) {
      uVar1 = (undefined4)param_2[7];
    }
    else {
      uVar1 = (*(code *)((undefined **)*param_2)[5])(param_2);
    }
    *(undefined4 *)(param_1 + 7) = uVar1;
  }
  return param_1;
}




undefined8 * FUN_1800091b0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = IStorageDevice::vftable;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[4] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180009210(longlong param_1)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  
  ppuVar1 = (undefined **)**(longlong **)(param_1 + 0x30);
  if (ppuVar1 == CPartitionVirtualVolumeDevice::vftable) {
    *(int *)(param_1 + 0x38) = (int)(*(longlong **)(param_1 + 0x30))[7];
    return 1;
  }
  uVar2 = (*(code *)ppuVar1[5])();
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return 1;
}




undefined8 FUN_180009250(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 1;
}




undefined4 FUN_180009260(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




undefined8 FUN_180009270(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}




undefined8 FUN_180009280(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}




ulonglong FUN_180009290(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)param_1[6];
  if (plVar1 == (longlong *)0x0) {
    param_1[5] = -1;
    return 0;
  }
  if (param_2 == 0) {
    param_1[5] = -2;
    return 0;
  }
  lVar2 = param_1[9];
  param_1[5] = 0;
  if (((-1 < param_3) && (param_3 < lVar2)) && (param_4 <= lVar2)) {
    lVar6 = param_4;
    if (lVar2 < param_3 + param_4) {
      lVar6 = lVar2 - param_3;
    }
    uVar4 = (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3 + param_1[8],lVar6,0);
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 == 0) {
      param_1[5] = -3;
      uVar5 = uVar4;
    }
    else {
      if ((undefined **)*param_1 == CPartitionVirtualVolumeDevice::vftable) {
        iVar3 = (int)param_1[7];
      }
      else {
        iVar3 = (*(code *)((undefined **)*param_1)[5])(param_1);
      }
      memset((void *)(iVar3 * lVar6 + param_2),0,param_4 - lVar6);
    }
    return uVar5;
  }
  param_1[5] = -1;
  return 0;
}




undefined8 FUN_1800093c0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  return 0;
}




undefined8 * FUN_1800093d0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 2) = param_3;
  param_1[1] = 0;
  lVar1 = FUN_180018ba0(0x820);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    lVar1 = 0x22;
    do {
      *(undefined2 *)(lVar1 + -2 + param_1[1]) = 0;
      *(undefined2 *)(lVar1 + param_1[1]) = 0;
      lVar1 = lVar1 + 4;
    } while (lVar1 < 0x822);
  }
  return param_1;
}




void FUN_180009450(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(char *)(param_1 + 2) == '\0') && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    *(undefined4 *)param_1[1] = 4;
    (**(code **)(*(longlong *)*param_1 + 8))
              ((longlong *)*param_1,param_1[1],param_3,param_4,0xfffffffffffffffe);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}




undefined4 FUN_1800094c0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x10))();
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x88))();
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 1;
}




undefined4 FUN_180009510(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




undefined8 FUN_180009520(void)

{
  return 0xffffffffffffffff;
}




void FUN_180009530(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    if ((undefined **)*param_2 == HFSPlusFileDataRun::vftable) {
      *(int *)(param_1 + 8) = (int)param_2[5];
      return;
    }
    uVar1 = (*(code *)((undefined **)*param_2)[8])(param_2);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}




void FUN_180009570(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




undefined4 FUN_180009580(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_180009590(undefined8 *param_1)

{
  *param_1 = IFileProperties::vftable;
  return;
}




undefined8 * FUN_1800095a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IFileProperties::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_1800095d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}




undefined2 FUN_1800095e0(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0xcc);
}




byte FUN_1800095f0(longlong param_1)

{
  return *(byte *)(param_1 + 0xce) >> 1 & 1;
}




byte FUN_180009600(longlong param_1)

{
  return *(byte *)(param_1 + 0xce) & 1;
}




byte FUN_180009610(longlong param_1)

{
  return *(byte *)(param_1 + 0xce) >> 2 & 1;
}




void FUN_180009620(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  return;
}




longlong FUN_180009630(LPCWSTR param_1,longlong param_2,char *param_3,size_t param_4)

{
  int cchWideChar;
  int iVar1;
  char *lpMultiByteStr;
  CHAR local_res8 [8];
  BOOL local_38 [4];
  
  cchWideChar = (int)param_2;
  if ((param_1 != (LPCWSTR)0x0) && (param_2 != 0)) {
    iVar1 = WideCharToMultiByte(0xfde9,0,param_1,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (0 < iVar1) {
      lpMultiByteStr = (char *)operator_new((longlong)(iVar1 + 1));
      memset(lpMultiByteStr,0,(longlong)(iVar1 + 1));
      iVar1 = WideCharToMultiByte(0xfde9,0,param_1,cchWideChar,lpMultiByteStr,iVar1,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      if (lpMultiByteStr != (char *)0x0) {
        strncpy(param_3,lpMultiByteStr,param_4);
        free(lpMultiByteStr);
        goto LAB_180009748;
      }
    }
  }
  local_38[0] = 1;
  local_res8[0] = '_';
  local_res8[1] = '\0';
  iVar1 = WideCharToMultiByte(0,0,param_1,cchWideChar,param_3,(int)param_4,local_res8,local_38);
LAB_180009748:
  return (longlong)iVar1;
}




longlong *
FUN_180009770(longlong *param_1,longlong param_2,longlong param_3,short *param_4,int param_5)

{
  *param_1 = (longlong)CFileNode::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffff;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined2 *)((longlong)param_1 + 0x91) = 0;
  param_1[0xb] = 0;
  param_1[9] = -1;
  param_1[10] = -1;
  *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_1 + 0x72) & 0xf8;
  *(undefined1 *)((longlong)param_1 + 0x91) = 2;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_1 + 0x72) & 7;
  param_1[4] = 0;
  *(undefined1 *)((longlong)param_1 + 0x73) = 0x20;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) & 0xf8;
  *param_1 = (longlong)CHFSPlusFileNode::vftable;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  FUN_180009940(param_1,param_2,0,0,param_3,param_4,param_5);
  param_1[7] = param_2;
  return param_1;
}




undefined8 * FUN_1800098a0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = CHFSPlusFileNode::vftable;
  if ((void *)param_1[0x16] != (void *)0x0) {
    free((void *)param_1[0x16]);
    param_1[0x16] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x13];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x13] = 0;
  FUN_1800148c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180009940(longlong *param_1,longlong param_2,longlong param_3,ushort param_4,
                  longlong param_5,short *param_6,int param_7)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  short *psVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  char local_148 [272];
  ulonglong local_38;
  
  local_158 = 0xfffffffffffffffe;
  local_38 = DAT_180028010 ^ (ulonglong)auStack_178;
  memset(local_148,0,0x104);
  if ((param_5 == 0) || (param_6 == (short *)0x0)) goto LAB_180009bdb;
  if (param_7 != 0) {
    *(byte *)((longlong)param_1 + 0xce) = *(byte *)((longlong)param_1 + 0xce) | 1;
  }
  param_1[9] = (ulonglong)*(uint *)(param_5 + 2);
  iVar9 = 0;
  uVar2 = *(ushort *)(param_5 + 6);
  lVar6 = 0;
  if (uVar2 != 0) {
    psVar4 = (short *)(param_5 + 8);
    do {
      if (*psVar4 != 0) break;
      iVar9 = iVar9 + 1;
      lVar6 = lVar6 + 1;
      psVar4 = psVar4 + 1;
    } while (lVar6 < (longlong)(ulonglong)uVar2);
  }
  iVar11 = (uint)uVar2 - iVar9;
  if (0xff < iVar11) {
    iVar11 = 0xff;
  }
  FUN_180009630((LPCWSTR)(param_5 + ((longlong)iVar9 + 4) * 2),(longlong)iVar11,local_148,0x104);
  lVar6 = -1;
  do {
    lVar7 = lVar6;
    lVar6 = lVar7 + 1;
  } while (local_148[lVar7 + 1] != '\0');
  lVar6 = thunk_FUN_180018ba0(lVar7 + 2);
  param_1[0x16] = lVar6;
  if (lVar6 == 0) goto LAB_180009bdb;
  pcVar8 = local_148;
  do {
    cVar1 = *pcVar8;
    pcVar8[lVar6 - (longlong)local_148] = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (*param_6 == 1) {
    *(byte *)((longlong)param_1 + 0xce) = *(byte *)((longlong)param_1 + 0xce) | 2;
    if (*(uint *)(param_6 + 4) == 1) goto LAB_180009b89;
    param_1[10] = (ulonglong)*(uint *)(param_6 + 4);
    param_1[0xb] = param_3;
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_6 + 6);
    *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_6 + 8);
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_6 + 0xc);
    param_1[0x13] = 0;
    *(uint *)(param_1 + 0x14) = (uint)param_4;
LAB_180009b7d:
    *(undefined2 *)((longlong)param_1 + 0xcc) = 0x10;
  }
  else if (*param_6 == 2) {
    param_1[10] = (ulonglong)*(uint *)(param_6 + 4);
    param_1[0xb] = param_3;
    if ((*(byte *)((longlong)param_6 + 0x29) & 0x20) == 0) {
      plVar10 = (longlong *)(param_6 + 0x2c);
      lVar6 = *plVar10;
      if (lVar6 == 0) {
        lVar6 = (ulonglong)*(uint *)(param_6 + 0x32) << 0xc;
      }
LAB_180009acf:
      param_1[0x17] = lVar6;
      lVar6 = FUN_180009f40((longlong)param_1,param_2,(longlong)plVar10);
      param_1[0x13] = lVar6;
    }
    else {
      *(byte *)((longlong)param_1 + 0xce) = *(byte *)((longlong)param_1 + 0xce) | 4;
      plVar10 = (longlong *)(param_6 + 0x54);
      lVar6 = *plVar10;
      if (lVar6 != 0) goto LAB_180009acf;
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_6 + 6);
    *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_6 + 8);
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_6 + 0xc);
    *(uint *)(param_1 + 0x14) = (uint)param_4;
    *(undefined2 *)((longlong)param_1 + 0xcc) = 0x20;
    if (*(int *)(param_6 + 0x18) == 0x66647270) {
      *(byte *)((longlong)param_1 + 0xce) = *(byte *)((longlong)param_1 + 0xce) | 2;
      goto LAB_180009b7d;
    }
  }
LAB_180009b89:
  if ((undefined **)*param_1 == CHFSPlusFileNode::vftable) {
    uVar3 = *(byte *)((longlong)param_1 + 0xce) >> 2 & 1;
  }
  else {
    uVar3 = (*(code *)((undefined **)*param_1)[0x11])(param_1);
  }
  if (uVar3 != 0) {
    *(ushort *)((longlong)param_1 + 0xcc) = *(ushort *)((longlong)param_1 + 0xcc) | 0x800;
  }
  local_150 = (undefined8 *)operator_new(0x80);
  puVar5 = FUN_18000a510(local_150,param_1);
  param_1[6] = (longlong)puVar5;
LAB_180009bdb:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_178);
  return;
}




void FUN_180009c10(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  void *_Dst;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  short *psVar16;
  int *piVar17;
  undefined1 auStackY_288 [32];
  int *local_258;
  undefined8 local_250;
  short local_238 [2];
  uint local_234;
  undefined4 local_230;
  ushort local_22c;
  ushort auStack_22a [257];
  ulonglong local_28;
  
  local_28 = DAT_180028010 ^ (ulonglong)auStackY_288;
  if ((undefined **)*param_1 == CHFSPlusFileNode::vftable) {
    uVar8 = *(byte *)((longlong)param_1 + 0xce) >> 2 & 1;
  }
  else {
    uVar8 = (*(code *)((undefined **)*param_1)[0x11])(param_1);
  }
  if ((uVar8 != 0) && (lVar3 = param_1[0x15], lVar3 != 0)) {
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      uVar15 = 0;
      local_258 = (int *)0x0;
      local_250 = 0;
      if (*(longlong *)(lVar3 + 0x38) != 0) {
        memset(local_238,0,0x20c);
        local_234 = *(uint *)(param_1 + 10);
        cVar7 = 'c';
        local_230 = 0;
        uVar12 = uVar15;
        uVar14 = uVar15;
        do {
          uVar8 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar8;
          auStack_22a[uVar14] = (short)cVar7;
          uVar14 = (ulonglong)(int)uVar8;
          cVar7 = *(char *)(uVar14 + 0x18001f480);
        } while (cVar7 != '\0');
        local_22c = (ushort)uVar8;
        local_238[0] = (local_22c + 7) * 2;
        piVar17 = (int *)&local_250;
        psVar16 = local_238;
        FUN_18000c3a0(lVar3,8,psVar16,piVar17,(longlong *)&local_258);
        if (local_250._6_2_ == 0) {
          local_250 = local_250 & 0xffffffffffff;
          puVar11 = (undefined8 *)**(undefined8 **)(lVar3 + 0x78);
          while (_Dst = (void *)0x0, puVar11 != *(undefined8 **)(lVar3 + 0x78)) {
            lVar4 = puVar11[4];
            if ((local_234 <= *(uint *)(lVar4 + 4)) && (*(uint *)(lVar4 + 4) <= local_234)) {
              uVar13 = 0;
              if (*(ushort *)(lVar4 + 0xc) != 0) {
                do {
                  if (local_22c <= uVar13) goto LAB_180009d9a;
                  uVar1 = *(ushort *)(lVar4 + 0xe + (ulonglong)uVar13 * 2);
                  psVar16 = (short *)(ulonglong)uVar1;
                  uVar2 = auStack_22a[uVar13];
                  piVar17 = (int *)(ulonglong)uVar2;
                  if ((uVar1 < uVar2) || (uVar2 < uVar1)) goto LAB_180009d9a;
                  uVar13 = uVar13 + 1;
                } while (uVar13 < *(ushort *)(lVar4 + 0xc));
              }
              if (local_22c <= uVar13) {
                local_258 = (int *)FUN_18000e710((int *)puVar11[5]);
                local_250 = CONCAT26(1,(undefined6)local_250);
                goto LAB_180009e19;
              }
            }
LAB_180009d9a:
            puVar5 = (undefined8 *)puVar11[2];
            if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
              cVar7 = *(char *)((longlong)*puVar5 + 0x19);
              puVar11 = puVar5;
              puVar5 = (undefined8 *)*puVar5;
              while (cVar7 == '\0') {
                cVar7 = *(char *)((longlong)*puVar5 + 0x19);
                puVar11 = puVar5;
                puVar5 = (undefined8 *)*puVar5;
              }
            }
            else {
              cVar7 = *(char *)((longlong)puVar11[1] + 0x19);
              puVar6 = (undefined8 *)puVar11[1];
              puVar5 = puVar11;
              while ((puVar11 = puVar6, cVar7 == '\0' && (puVar5 == (undefined8 *)puVar11[2]))) {
                cVar7 = *(char *)((longlong)puVar11[1] + 0x19);
                puVar6 = (undefined8 *)puVar11[1];
                puVar5 = puVar11;
              }
            }
          }
        }
        else {
LAB_180009e19:
          if (*local_258 == 0x10) {
            uVar8 = local_258[3];
            uVar15 = (ulonglong)uVar8;
            _Dst = (void *)thunk_FUN_180018ba0(uVar15);
            memcpy(_Dst,local_258 + 4,(ulonglong)uVar8);
          }
          else {
            uVar9 = __acrt_iob_func(2);
            FUN_18000b3a0(uVar9,"unsupported attribute node format\n",psVar16,piVar17);
            _Dst = (void *)0x0;
          }
        }
        if (local_258 != (int *)0x0) {
          free(local_258);
        }
        if (uVar15 != 0) {
          param_1[0x17] = *(longlong *)((longlong)_Dst + 8);
          free(_Dst);
          goto LAB_180009f14;
        }
      }
    }
    pbVar10 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                            "Warn:Can\'t find file 0x");
    puVar11 = (undefined8 *)std::setbase((int)&local_250);
    (*(code *)*puVar11)(pbVar10 + *(int *)(*(longlong *)pbVar10 + 4),*(undefined4 *)(puVar11 + 1));
    pbVar10 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                        (pbVar10,param_1[10]);
    pbVar10 = FUN_180001e50(pbVar10," Attribute");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar10,FUN_180002030);
  }
LAB_180009f14:
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_288);
  return;
}




void FUN_180009f40(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  short *psVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_a8 [32];
  undefined8 *local_78;
  undefined8 local_70;
  ulonglong uStack_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  ulonglong local_40;
  
  local_58 = 0xfffffffffffffffe;
  local_40 = DAT_180028010 ^ (ulonglong)auStackY_a8;
  uVar14 = 0;
  local_60 = param_1;
  puVar8 = (undefined8 *)operator_new(0x48);
  local_70 = puVar8;
  FUN_180015020(puVar8);
  *puVar8 = HFSPlusFileDataRun::vftable;
  uVar15 = *(uint *)(param_3 + 0xc);
  puVar1 = (undefined8 *)(param_3 + 0x10);
  puVar12 = puVar1;
  while( true ) {
    lVar13 = 0;
    local_78 = puVar12;
    do {
      while( true ) {
        if (uVar15 == 0) goto LAB_18000a0e5;
        uStack_68 = 0;
        if (lVar13 == 8) break;
        local_70 = (undefined8 *)(ulonglong)*(uint *)(local_78 + lVar13);
        uVar11 = *(uint *)((longlong)local_78 + lVar13 * 8 + 4);
        uStack_68 = (ulonglong)uVar11;
        FUN_18000a320((longlong)puVar8,&local_70);
        uVar14 = uVar14 + uVar11;
        if ((ulonglong)uVar15 <= (ulonglong)uVar11) {
          uVar11 = uVar15;
        }
        uVar15 = uVar15 - uVar11;
        lVar13 = lVar13 + 1;
      }
      local_50 = 0;
      local_48 = 0;
      lVar13 = 0;
      local_70 = (undefined8 *)0x0;
      if (param_2 == 0) goto LAB_18000a0e5;
      if ((local_78 != puVar1) && (local_78 != (undefined8 *)0x0)) {
        free(local_78);
        local_78 = (undefined8 *)0x0;
      }
      local_50 = CONCAT53(local_50._3_5_,10);
      local_50 = CONCAT44(*(undefined4 *)(local_60 + 0x50),(undefined4)local_50);
      local_48 = uVar14;
      FUN_18000c3a0(param_2,3,&local_50,(int *)&local_70,(longlong *)&local_78);
    } while (local_70._6_2_ != 0);
    local_70 = (undefined8 *)((ulonglong)local_70 & 0xffffffffffff);
    plVar3 = *(longlong **)(param_2 + 0x68);
    plVar9 = (longlong *)*plVar3;
    if (plVar9 == plVar3) break;
    while( true ) {
      psVar4 = (short *)plVar9[4];
      if (((((local_50._2_1_ <= *(byte *)(psVar4 + 1)) && (*(byte *)(psVar4 + 1) <= local_50._2_1_))
           && (local_50._4_4_ <= *(uint *)(psVar4 + 2))) &&
          ((*(uint *)(psVar4 + 2) <= local_50._4_4_ && (local_48 <= *(uint *)(psVar4 + 4))))) &&
         ((*(uint *)(psVar4 + 4) <= local_48 && (*psVar4 == (short)local_50)))) break;
      plVar5 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar5 + 0x19);
        plVar9 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar5 + 0x19);
          plVar9 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar2 = *(char *)(plVar9[1] + 0x19);
        plVar7 = (longlong *)plVar9[1];
        plVar5 = plVar9;
        while ((plVar9 = plVar7, cVar2 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
          cVar2 = *(char *)(plVar9[1] + 0x19);
          plVar7 = (longlong *)plVar9[1];
          plVar5 = plVar9;
        }
      }
      if (plVar9 == plVar3) goto LAB_18000a0e5;
    }
    puVar6 = (undefined8 *)plVar9[5];
    puVar12 = (undefined8 *)0x0;
    if ((puVar6 != (undefined8 *)0x0) &&
       (puVar10 = (undefined8 *)thunk_FUN_180018ba0(0x40), puVar10 != (undefined8 *)0x0)) {
      *puVar10 = *puVar6;
      puVar10[1] = puVar6[1];
      puVar10[2] = puVar6[2];
      puVar10[3] = puVar6[3];
      puVar10[4] = puVar6[4];
      puVar10[5] = puVar6[5];
      puVar10[6] = puVar6[6];
      puVar10[7] = puVar6[7];
      puVar12 = puVar10;
    }
  }
LAB_18000a0e5:
  if ((local_78 != puVar1) && (local_78 != (undefined8 *)0x0)) {
    free(local_78);
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_a8);
  return;
}




undefined8 FUN_18000a1c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}




longlong * FUN_18000a1d0(longlong param_1,longlong *param_2)

{
  if (*(uint *)(param_1 + 0xc0) == 0) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    return param_2;
  }
  *param_2 = ((ulonglong)*(uint *)(param_1 + 0xc0) + 0x239eae080) * 10000000;
  return param_2;
}




longlong * FUN_18000a210(longlong param_1,longlong *param_2)

{
  if (*(uint *)(param_1 + 0xc4) == 0) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    return param_2;
  }
  *param_2 = ((ulonglong)*(uint *)(param_1 + 0xc4) + 0x239eae080) * 10000000;
  return param_2;
}




longlong * FUN_18000a250(longlong param_1,longlong *param_2)

{
  if (*(uint *)(param_1 + 200) == 0) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    return param_2;
  }
  *param_2 = ((ulonglong)*(uint *)(param_1 + 200) + 0x239eae080) * 10000000;
  return param_2;
}




void FUN_18000a290(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  
  *(byte *)(param_1 + 0xce) = *(byte *)(param_1 + 0xce) | 1;
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00018000a2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))(plVar1,uVar2 | 1);
    return;
  }
  return;
}




undefined8 * FUN_18000a2d0(undefined8 *param_1,uint param_2)

{
  *param_1 = HFSPlusFileDataRun::vftable;
  FUN_1800150e0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000a320(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_res8;
  
  plVar4 = (longlong *)0x0;
  plVar5 = (longlong *)0x0;
  plVar3 = *(longlong **)(param_1 + 8);
  plVar6 = plVar4;
  if ((((plVar3 != (longlong *)0x0) &&
       (plVar3 = (longlong *)*plVar3, plVar6 = plVar5, plVar3 != (longlong *)0x0)) &&
      (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)) &&
     (puVar2 = (undefined8 *)*plVar3, puVar2 != (undefined8 *)0x0)) {
    plVar6 = (longlong *)*puVar2;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar3 = plVar4;
    if ((plVar6 != (longlong *)0x0) && ((undefined8 *)*plVar6 != (undefined8 *)0x0)) {
      plVar3 = *(longlong **)*plVar6;
    }
    uVar1 = (*(longlong *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20)) - 1;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)*plVar3;
    }
    plVar3 = *(longlong **)
              (*(longlong *)(plVar4[1] + (plVar4[2] - 1U & uVar1 >> 1) * 8) +
              (ulonglong)((uint)uVar1 & 1) * 8);
    if ((-1 < *plVar3) && (*plVar3 + plVar3[1] == *param_2)) {
      plVar3[1] = plVar3[1] + param_2[1];
      return;
    }
  }
  local_res8 = (longlong *)operator_new(0x10);
  *local_res8 = *param_2;
  local_res8[1] = param_2[1];
  FUN_18000b070((longlong)(param_1 + 8),&local_res8);
  return;
}




undefined8 FUN_18000a420(void)

{
  return 7;
}




undefined8 * FUN_18000a430(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  void *_Memory;
  
  *param_1 = HFSPlusFileProperties::vftable;
  pvVar1 = (void *)param_1[0xd];
  if (pvVar1 != (void *)0x0) {
    FUN_180015670((longlong)pvVar1);
    free(pvVar1);
  }
  param_1[0xd] = 0;
  if (0xf < (ulonglong)param_1[7]) {
    pvVar1 = (void *)param_1[4];
    _Memory = pvVar1;
    if ((0xfff < param_1[7] + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = IFileProperties::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000a510(undefined8 *param_1,longlong *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  void *pvVar5;
  longlong lVar6;
  size_t sVar7;
  longlong local_res10;
  longlong local_res18 [2];
  
  *param_1 = IFileProperties::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *param_1 = HFSPlusFileProperties::vftable;
  param_1[3] = param_2;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  if ((undefined **)*param_2 == CHFSPlusFileNode::vftable) {
    uVar2 = *(byte *)((longlong)param_2 + 0xce) & 1;
  }
  else {
    uVar2 = (*(code *)((undefined **)*param_2)[0xe])(param_2);
  }
  *(ushort *)(param_1 + 0xe) = (ushort)(uVar2 != 0);
  if ((undefined **)*param_2 == CHFSPlusFileNode::vftable) {
    pvVar5 = (void *)param_2[0x16];
  }
  else {
    pvVar5 = (void *)(*(code *)((undefined **)*param_2)[7])(param_2);
  }
  sVar7 = 0xffffffffffffffff;
  do {
    sVar7 = sVar7 + 1;
  } while (*(char *)((longlong)pvVar5 + sVar7) != '\0');
  FUN_180006720(param_1 + 4,pvVar5,sVar7);
  if ((undefined **)*param_2 == CHFSPlusFileNode::vftable) {
    lVar6 = param_2[0x17];
  }
  else {
    lVar6 = (*(code *)((undefined **)*param_2)[8])(param_2);
  }
  param_1[8] = lVar6;
  if ((undefined **)*param_2 == CHFSPlusFileNode::vftable) {
    uVar1 = *(undefined2 *)((longlong)param_2 + 0xcc);
  }
  else {
    uVar1 = (*(code *)((undefined **)*param_2)[9])(param_2);
  }
  *(undefined2 *)(param_1 + 9) = uVar1;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,&local_res10);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *puVar3;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x58))(param_2,&local_res10);
  *(undefined8 *)((longlong)param_1 + 0x54) = *puVar3;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x60))(param_2,&local_res10);
  *(undefined8 *)((longlong)param_1 + 0x5c) = *puVar3;
  lVar6 = param_1[3];
  if (*(longlong **)(lVar6 + 0x98) == (longlong *)0x0) {
    param_1[0xd] = 0;
  }
  else {
    local_res10 = 0;
    puVar4 = FUN_180015ab0(*(longlong **)(lVar6 + 0x98),local_res18,&local_res10);
    param_1[0xd] = puVar4;
    lVar6 = param_1[3];
  }
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(lVar6 + 0xce);
  return param_1;
}




undefined4 FUN_18000a6c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_18000a6d0(longlong param_1,void *param_2)

{
  size_t sVar1;
  
  sVar1 = 0xffffffffffffffff;
  do {
    sVar1 = sVar1 + 1;
  } while (*(char *)((longlong)param_2 + sVar1) != '\0');
  FUN_180006720((longlong *)(param_1 + 0x20),param_2,sVar1);
  return;
}




longlong * FUN_18000a700(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}




undefined2 FUN_18000a710(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x48);
}




longlong * FUN_18000a720(undefined8 param_1,longlong *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  FUN_180006720(param_2,&PTR_18001edc0,0);
  return param_2;
}




undefined8 * FUN_18000a770(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x4c);
  return param_2;
}




undefined8 * FUN_18000a780(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x54);
  return param_2;
}




undefined8 * FUN_18000a790(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x5c);
  return param_2;
}




undefined2 FUN_18000a7a0(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x70);
}




void FUN_18000a7b0(longlong param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x70) = param_2;
  return;
}




ushort * FUN_18000a7c0(longlong param_1)

{
  ushort *puVar1;
  
  if (*(ushort **)(param_1 + 0x68) == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  puVar1 = FUN_180015b70(*(ushort **)(param_1 + 0x68));
  return puVar1;
}




undefined8 FUN_18000a7e0(void)

{
  return 0xff;
}




undefined4 FUN_18000a7f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}




undefined4 FUN_18000a800(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  return param_2;
}




void FUN_18000a810(longlong param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x48) = param_2;
  return;
}




void FUN_18000a820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x80);
  *puVar1 = IFileProperties::vftable;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = HFSPlusFileProperties::vftable;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0xf;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[8] = 0;
  *(undefined2 *)(puVar1 + 9) = 0;
  puVar1[0xd] = 0;
  *(undefined2 *)(puVar1 + 0xe) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  return;
}




undefined8 FUN_18000a8a0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *_Memory;
  ushort *puVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  longlong *plVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int local_res8 [2];
  undefined4 local_res10 [2];
  longlong local_res18;
  longlong local_38;
  
  local_res8[0] = (int)*(undefined8 *)(param_1 + 0x30);
  (**(code **)(*param_2 + 0x78))(param_2,local_res8,4,param_4,0xfffffffffffffffe);
  if (local_res8[0] != 0) {
    plVar6 = (longlong *)(param_1 + 0x20);
    if (0xf < *(ulonglong *)(param_1 + 0x38)) {
      plVar6 = (longlong *)*plVar6;
    }
    (**(code **)(*param_2 + 0x78))(param_2,plVar6);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x40,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x48,2);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x4c,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x54,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x5c,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x70,2);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x74,4);
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x78))();
    local_38 = 0;
    _Memory = (undefined8 *)FUN_180006f90(plVar6,(undefined8 *)0x0,(undefined8 *)0x0);
    if ((*(ushort **)(param_1 + 0x68) != (ushort *)0x0) &&
       (puVar4 = FUN_180015b70(*(ushort **)(param_1 + 0x68)), puVar4 != (ushort *)0x0)) {
      puVar7 = puVar4;
      local_res18 = FUN_180015220((longlong)puVar4);
      if (local_res18 == 0) {
        local_38 = 0;
        (*(code *)**(undefined8 **)puVar4)(puVar4,1);
      }
      else {
        do {
          puVar8 = (undefined8 *)_Memory[1];
          uVar5 = FUN_180007550(puVar7,_Memory,puVar8,&local_res18);
          if (local_38 == 0xaaaaaaaaaaaaaa9) {
            std::_Xlength_error("list<T> too long");
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return uVar5;
          }
          local_38 = local_38 + 1;
          _Memory[1] = uVar5;
          *puVar8 = uVar5;
          lVar10 = 0;
          uVar9 = *(longlong *)(puVar4 + 0x20) + 1;
          *(ulonglong *)(puVar4 + 0x20) = uVar9;
          puVar7 = puVar4;
          bVar3 = FUN_1800152d0((longlong)puVar4);
          if ((int)CONCAT71(extraout_var,bVar3) == 0) {
            puVar8 = *(undefined8 **)(puVar4 + 0x18);
            if (puVar8 != (undefined8 *)0x0) {
              puVar8 = (undefined8 *)*puVar8;
            }
            puVar7 = *(ushort **)(puVar8[1] + (puVar8[2] - 1 & uVar9 >> 1) * 8);
            lVar10 = *(longlong *)(puVar7 + (ulonglong)((uint)uVar9 & 1) * 4);
          }
          local_res18 = lVar10;
        } while (lVar10 != 0);
        (*(code *)**(undefined8 **)puVar4)(puVar4,1);
      }
    }
    local_res10[0] = (undefined4)local_38;
    (**(code **)(*param_2 + 0x78))(param_2,local_res10,4);
    for (puVar8 = (undefined8 *)*_Memory; puVar8 != _Memory; puVar8 = (undefined8 *)*puVar8) {
      (**(code **)(*param_2 + 0x78))(param_2,puVar8[2],0x10);
    }
    puVar8 = (undefined8 *)*_Memory;
    *_Memory = _Memory;
    _Memory[1] = _Memory;
    while (puVar8 != _Memory) {
      puVar1 = (undefined8 *)*puVar8;
      free(puVar8);
      puVar8 = puVar1;
    }
    free(_Memory);
  }
  return 1;
}




undefined8 FUN_18000ab70(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Memory;
  longlong *plVar1;
  undefined2 *puVar2;
  int iVar3;
  size_t sVar4;
  int local_res10 [2];
  int local_res18 [2];
  longlong *local_res20;
  longlong local_30 [3];
  
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,local_res10,4,param_4,0xfffffffffffffffe);
  if (local_res10[0] != 0) {
    _Memory = operator_new((longlong)(local_res10[0] + 1));
    if (_Memory == (void *)0x0) {
      return 0;
    }
    (**(code **)(*param_2 + 0x70))(param_2,_Memory,local_res10[0]);
    *(undefined1 *)((longlong)local_res10[0] + (longlong)_Memory) = 0;
    sVar4 = 0xffffffffffffffff;
    do {
      sVar4 = sVar4 + 1;
    } while (*(char *)((longlong)_Memory + sVar4) != '\0');
    FUN_180006720((longlong *)(param_1 + 0x20),_Memory,sVar4);
    free(_Memory);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x40,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x48,2);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x4c,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x54,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x5c,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x70,2);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x74,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x78,1);
    local_res18[0] = 0;
    (**(code **)(*param_2 + 0x70))(param_2,local_res18,4);
    if ((local_res18[0] != 0) && (local_res18[0] < 0x1000)) {
      plVar1 = (longlong *)operator_new(0x48);
      local_res20 = plVar1;
      FUN_180015020(plVar1);
      *plVar1 = (longlong)HFSPlusFileDataRun::vftable;
      iVar3 = 0;
      if (0 < local_res18[0]) {
        do {
          local_30[0] = 0;
          local_30[1] = 0;
          (**(code **)(*param_2 + 0x70))(param_2,local_30,0x10);
          FUN_18000a320((longlong)plVar1,local_30);
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_res18[0]);
      }
      local_res20 = (longlong *)0x0;
      puVar2 = FUN_180015ab0(plVar1,local_30,(longlong *)&local_res20);
      *(undefined2 **)(param_1 + 0x68) = puVar2;
      (**(code **)*plVar1)(plVar1,1);
    }
  }
  return 1;
}




undefined8 * FUN_18000ad80(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < (ulonglong)param_1[6]) {
    pvVar1 = (void *)param_1[3];
    _Memory = pvVar1;
    if ((0xfff < param_1[6] + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = IFileProperties::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000ae20(longlong param_1,void *param_2)

{
  size_t sVar1;
  
  sVar1 = 0xffffffffffffffff;
  do {
    sVar1 = sVar1 + 1;
  } while (*(char *)((longlong)param_2 + sVar1) != '\0');
  FUN_180006720((longlong *)(param_1 + 0x18),param_2,sVar1);
  return;
}




longlong * FUN_18000ae50(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}




undefined8 FUN_18000ae60(void)

{
  return 0x10;
}




undefined8 * FUN_18000ae70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_2;
}




undefined2 FUN_18000ae80(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x38);
}




void FUN_18000ae90(longlong param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x38) = param_2;
  return;
}




undefined8 FUN_18000aea0(void)

{
  return 199;
}




undefined4 FUN_18000aeb0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}




undefined4 FUN_18000aec0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return param_2;
}




void FUN_18000aed0(undefined8 param_1,longlong *param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x78))(param_2,local_res10,4);
  return;
}




undefined8 FUN_18000af00(undefined8 param_1,longlong *param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,local_res10,4);
  return 1;
}




void FUN_18000af30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  *puVar1 = IFileProperties::vftable;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = HFSPlusSystemNodeProperties::vftable;
  puVar1[5] = 0;
  puVar1[6] = 0xf;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined2 *)(puVar1 + 7) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  return;
}




longlong *
FUN_18000af90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_180016210();
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x40);
    *puVar2 = IFileProperties::vftable;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = HFSPlusSystemNodeProperties::vftable;
    puVar2[5] = 0;
    puVar2[6] = 0xf;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined2 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    FUN_180006720(puVar2 + 3,"HFSPlus",7);
    plVar1[6] = (longlong)puVar2;
    (**(code **)(*plVar1 + 0x40))(plVar1,8);
    plVar1[10] = 2;
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3);
  }
  return plVar1;
}




void FUN_18000b070(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  if ((((int)*(longlong *)(param_1 + 0x20) + (int)uVar3 & 1U) == 0) &&
     (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 0x20) + 2U >> 1)) {
    FUN_18000b130(param_1,param_2);
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




void FUN_18000b130(longlong param_1,undefined8 param_2)

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
      FUN_18000b370();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = uVar3 * 8;
  uVar10 = *(ulonglong *)(param_1 + 0x18) >> 1;
  if (uVar3 < 0x2000000000000000) {
    if (0xfff < uVar4) goto LAB_18000b1c3;
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar4);
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
LAB_18000b1c3:
    uVar3 = uVar4 + 0x27;
    if (uVar3 <= uVar4) {
      uVar3 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new(uVar3);
    if (pvVar2 == (void *)0x0) goto LAB_18000b323;
    _Dst = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar2;
  }
  lVar9 = *(longlong *)(param_1 + 8);
  sVar7 = uVar10 * 8;
  pvVar2 = (void *)(lVar9 + sVar7);
  FUN_1800022a0((undefined1 *)&local_res10);
  sVar5 = (*(longlong *)(param_1 + 0x10) * 8 - (longlong)pvVar2) + lVar9;
  memmove((void *)(sVar7 + (longlong)_Dst),pvVar2,sVar5);
  pvVar2 = *(void **)(param_1 + 8);
  pvVar6 = (void *)(sVar5 + (longlong)(sVar7 + (longlong)_Dst));
  FUN_1800022a0((undefined1 *)&local_res10);
  if (uVar8 < uVar10) {
    sVar5 = uVar8 * 8;
    memmove(pvVar6,pvVar2,sVar5);
    lVar9 = *(longlong *)(param_1 + 8);
    pvVar2 = (void *)(sVar5 + lVar9);
    FUN_1800022a0((undefined1 *)&local_res10);
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
LAB_18000b323:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar6);
  }
  *(void **)(param_1 + 8) = _Dst;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar8;
  return;
}




undefined8 * FUN_18000b330(undefined8 *param_1,undefined8 *param_2)

{
  param_2[2] = param_1[4] + param_1[3];
  *param_2 = *param_1;
  param_2[1] = 0;
  return param_2;
}




undefined8 * FUN_18000b350(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  param_1[2] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != (undefined8 *)0x0) {
    *param_1 = *param_3;
  }
  return param_1;
}




void FUN_18000b370(void)

{
  code *pcVar1;
  
  std::_Xlength_error("deque<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined * FUN_18000b390(void)

{
  return &DAT_18002a328;
}




void FUN_18000b3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_18000b390();
  __stdio_common_vfprintf(*puVar1,param_1,param_2,0,&local_res18);
  return;
}




undefined8 FUN_18000b3f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_18000b400(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}




int * FUN_18000b410(int *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  long lVar12;
  char *pcVar13;
  ulonglong uVar14;
  undefined1 local_40 [24];
  
  plVar10 = (longlong *)0x0;
  *param_1 = 0;
  *(longlong *)(param_1 + 2) = param_2;
  param_1[4] = 2;
  param_1[5] = 0x5001e;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  piVar1 = param_1 + 0x16;
  piVar1[0] = 0;
  piVar1[1] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar4 = FUN_180006a50();
  *(undefined8 *)piVar1 = uVar4;
  piVar1 = param_1 + 0x1a;
  piVar1[0] = 0;
  piVar1[1] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  uVar4 = FUN_180006a50();
  *(undefined8 *)piVar1 = uVar4;
  piVar1 = param_1 + 0x1e;
  piVar1[0] = 0;
  piVar1[1] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  uVar4 = FUN_180006a50();
  *(undefined8 *)piVar1 = uVar4;
  *(undefined1 *)(param_1 + 0x22) = 0;
  if (param_2 == 0) {
    param_1[4] = 5;
    param_1[5] = 0x50023;
  }
  else {
    ppuVar2 = (undefined **)**(longlong **)(param_1 + 2);
    if (ppuVar2 == CPartitionVirtualVolumeDevice::vftable) {
      iVar3 = (int)(*(longlong **)(param_1 + 2))[7];
    }
    else {
      iVar3 = (*(code *)ppuVar2[5])();
    }
    *param_1 = iVar3;
    if (iVar3 == 0) {
      param_1[4] = 6;
      param_1[5] = 0x50027;
    }
    else {
      param_1[4] = 0;
      param_1[5] = 0;
      pvVar5 = (void *)FUN_180018ba0(0x200);
      *(void **)(param_1 + 6) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        uVar14 = 0x500e700000004;
        param_1[4] = 4;
        param_1[5] = 0x500e7;
      }
      else {
        param_4 = 0x200;
        lVar11 = FUN_18000c480(param_1,0x400,pvVar5,0x200);
        if (lVar11 == 0x200) {
          FUN_18000d030(*(undefined1 **)(param_1 + 6));
          uVar14 = *(ulonglong *)(param_1 + 4);
        }
        else {
          uVar14 = 0x500ea0000000e;
          param_1[4] = 0xe;
          param_1[5] = 0x500ea;
        }
      }
      if ((uVar14 & 0xff00000000000000) == 0) {
        puVar7 = (undefined8 *)FUN_180018ba0(0x20);
        plVar8 = plVar10;
        if (puVar7 != (undefined8 *)0x0) {
          plVar8 = FUN_180010e10(puVar7,param_1);
        }
        *(longlong **)(param_1 + 0x14) = plVar8;
        if (plVar8 == (longlong *)0x0) {
          param_1[4] = 4;
          param_1[5] = 0x5002d;
          return param_1;
        }
        uVar14 = plVar8[1];
        *(ulonglong *)(param_1 + 4) = uVar14;
        if ((uVar14 & 0xff00000000000000) == 0) {
          puVar7 = (undefined8 *)FUN_180018ba0(0x28);
          plVar8 = plVar10;
          if (puVar7 != (undefined8 *)0x0) {
            param_4 = *(longlong *)(param_1 + 6) + 0xc0;
            plVar8 = (longlong *)FUN_180010850(puVar7,(longlong)param_1,3,param_4);
          }
          *(longlong **)(param_1 + 8) = plVar8;
          if (plVar8 == (longlong *)0x0) {
            param_1[4] = 4;
            param_1[5] = 0x50031;
            return param_1;
          }
          uVar14 = plVar8[2];
          *(ulonglong *)(param_1 + 4) = uVar14;
          if ((uVar14 & 0xff00000000000000) == 0) {
            puVar7 = (undefined8 *)FUN_180018ba0(0x40);
            plVar8 = plVar10;
            if (puVar7 != (undefined8 *)0x0) {
              plVar8 = FUN_18000f930(puVar7,(longlong)param_1,*(longlong **)(param_1 + 8),param_4);
            }
            *(longlong **)(param_1 + 10) = plVar8;
            if (plVar8 == (longlong *)0x0) {
              param_1[4] = 4;
              param_1[5] = 0x50035;
              return param_1;
            }
            if ((undefined **)*plVar8 == CHFSPlusExtents::vftable) {
              uVar14 = plVar8[3];
            }
            else {
              uVar14 = (*(code *)((undefined **)*plVar8)[8])();
            }
            *(ulonglong *)(param_1 + 4) = uVar14;
            if ((uVar14 & 0xff00000000000000) == 0) {
              puVar7 = (undefined8 *)FUN_180018ba0(0x28);
              plVar8 = plVar10;
              if (puVar7 != (undefined8 *)0x0) {
                param_4 = *(longlong *)(param_1 + 6) + 0x160;
                plVar8 = (longlong *)FUN_180010850(puVar7,(longlong)param_1,8,param_4);
              }
              *(longlong **)(param_1 + 0xc) = plVar8;
              if (plVar8 == (longlong *)0x0) {
                param_1[4] = 4;
                param_1[5] = 0x50039;
                return param_1;
              }
              uVar14 = plVar8[2];
              *(ulonglong *)(param_1 + 4) = uVar14;
              if ((uVar14 & 0xff00000000000000) == 0) {
                puVar7 = (undefined8 *)FUN_180018ba0(0x40);
                plVar8 = plVar10;
                if (puVar7 != (undefined8 *)0x0) {
                  plVar8 = FUN_18000dc40(puVar7,(longlong)param_1,*(longlong **)(param_1 + 0xc),
                                         param_4);
                }
                *(longlong **)(param_1 + 0xe) = plVar8;
                if (plVar8 == (longlong *)0x0) {
                  param_1[4] = 4;
                  param_1[5] = 0x5003d;
                  return param_1;
                }
                if ((undefined **)*plVar8 == CHFSPlusAttribute::vftable) {
                  uVar14 = plVar8[3];
                }
                else {
                  uVar14 = (*(code *)((undefined **)*plVar8)[8])();
                }
                *(ulonglong *)(param_1 + 4) = uVar14;
                if ((uVar14 & 0xff00000000000000) == 0) {
                  plVar9 = (longlong *)FUN_180018ba0(0x38);
                  plVar8 = plVar10;
                  if (plVar9 != (longlong *)0x0) {
                    param_4 = *(longlong *)(param_1 + 6) + 0x110;
                    FUN_180010850(plVar9,(longlong)param_1,4,param_4);
                    *plVar9 = (longlong)CHFSPlusFileCache::vftable;
                    plVar9[5] = 0;
                    plVar9[6] = 0;
                    plVar8 = plVar9;
                  }
                  *(longlong **)(param_1 + 0x10) = plVar8;
                  if (plVar8 == (longlong *)0x0) {
                    param_1[4] = 4;
                    param_1[5] = 0x50041;
                    return param_1;
                  }
                  uVar14 = plVar8[2];
                  *(ulonglong *)(param_1 + 4) = uVar14;
                  if ((uVar14 & 0xff00000000000000) == 0) {
                    puVar7 = (undefined8 *)FUN_180018ba0(0x40);
                    if (puVar7 != (undefined8 *)0x0) {
                      plVar10 = FUN_18000eb20(puVar7,(longlong)param_1,
                                              *(longlong **)(param_1 + 0x10),param_4);
                    }
                    *(longlong **)(param_1 + 0x12) = plVar10;
                    if (plVar10 == (longlong *)0x0) {
                      param_1[4] = 4;
                      param_1[5] = 0x50045;
                      return param_1;
                    }
                    if ((undefined **)*plVar10 == CHFSPlusCatalog::vftable) {
                      uVar14 = plVar10[3];
                    }
                    else {
                      uVar14 = (*(code *)((undefined **)*plVar10)[8])();
                    }
                    *(ulonglong *)(param_1 + 4) = uVar14;
                    if ((uVar14 & 0xff00000000000000) == 0) {
                      ppuVar2 = (undefined **)**(longlong **)(param_1 + 0x12);
                      if (ppuVar2 == CHFSPlusCatalog::vftable) {
                        lVar11 = (*(longlong **)(param_1 + 0x12))[6];
                      }
                      else {
                        lVar11 = (*(code *)ppuVar2[9])();
                      }
                      if (lVar11 == 0) {
                        param_1[4] = 6;
                        param_1[5] = 0x50049;
                        return param_1;
                      }
                      *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(lVar11 + 0x25);
                      param_1[4] = 0;
                      param_1[5] = 0;
                      return param_1;
                    }
                    pcVar13 = 
                    "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp";
                    iVar3 = 0x3f;
                    lVar11 = 0x3f;
                    do {
                      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                           [lVar11] == '\\') ||
                         ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                          [lVar11] == '/')) {
                        pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                                  + (iVar3 + 1);
                        break;
                      }
                      iVar3 = iVar3 + -1;
                      lVar11 = lVar11 + -1;
                    } while (-1 < lVar11);
                    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                           cout_exref,"Return Error:0x");
                    puVar7 = (undefined8 *)std::setbase((int)local_40);
                    (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                                       *(undefined4 *)(puVar7 + 1));
                    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                              (pbVar6,uVar14);
                    if (pcVar13 != (char *)0x0) {
                      pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                             cout_exref,"\tFile:");
                      FUN_180001e50(pbVar6,pcVar13);
                    }
                    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                           cout_exref,"\tLine:");
                    puVar7 = (undefined8 *)std::setbase((int)local_40);
                    (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                                       *(undefined4 *)(puVar7 + 1));
                    lVar12 = 0x46;
                  }
                  else {
                    pcVar13 = 
                    "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp";
                    iVar3 = 0x3f;
                    lVar11 = 0x3f;
                    do {
                      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                           [lVar11] == '\\') ||
                         ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                          [lVar11] == '/')) {
                        pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                                  + (iVar3 + 1);
                        break;
                      }
                      iVar3 = iVar3 + -1;
                      lVar11 = lVar11 + -1;
                    } while (-1 < lVar11);
                    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                           cout_exref,"Return Error:0x");
                    puVar7 = (undefined8 *)std::setbase((int)local_40);
                    (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                                       *(undefined4 *)(puVar7 + 1));
                    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                              (pbVar6,uVar14);
                    if (pcVar13 != (char *)0x0) {
                      pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                             cout_exref,"\tFile:");
                      FUN_180001e50(pbVar6,pcVar13);
                    }
                    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                           cout_exref,"\tLine:");
                    puVar7 = (undefined8 *)std::setbase((int)local_40);
                    (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                                       *(undefined4 *)(puVar7 + 1));
                    lVar12 = 0x42;
                  }
                }
                else {
                  pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp";
                  iVar3 = 0x3f;
                  lVar11 = 0x3f;
                  do {
                    if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                         [lVar11] == '\\') ||
                       ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                        [lVar11] == '/')) {
                      pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                                + (iVar3 + 1);
                      break;
                    }
                    iVar3 = iVar3 + -1;
                    lVar11 = lVar11 + -1;
                  } while (-1 < lVar11);
                  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                         cout_exref,"Return Error:0x");
                  puVar7 = (undefined8 *)std::setbase((int)local_40);
                  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                                     *(undefined4 *)(puVar7 + 1));
                  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar14)
                  ;
                  if (pcVar13 != (char *)0x0) {
                    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                           cout_exref,"\tFile:");
                    FUN_180001e50(pbVar6,pcVar13);
                  }
                  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                         cout_exref,"\tLine:");
                  puVar7 = (undefined8 *)std::setbase((int)local_40);
                  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                                     *(undefined4 *)(puVar7 + 1));
                  lVar12 = 0x3e;
                }
              }
              else {
                pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp";
                iVar3 = 0x3f;
                lVar11 = 0x3f;
                do {
                  if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                       [lVar11] == '\\') ||
                     ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                      [lVar11] == '/')) {
                    pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                              + (iVar3 + 1);
                    break;
                  }
                  iVar3 = iVar3 + -1;
                  lVar11 = lVar11 + -1;
                } while (-1 < lVar11);
                pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                       cout_exref,"Return Error:0x");
                puVar7 = (undefined8 *)std::setbase((int)local_40);
                (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                                   *(undefined4 *)(puVar7 + 1));
                std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar14);
                if (pcVar13 != (char *)0x0) {
                  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                         cout_exref,"\tFile:");
                  FUN_180001e50(pbVar6,pcVar13);
                }
                pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                       cout_exref,"\tLine:");
                puVar7 = (undefined8 *)std::setbase((int)local_40);
                (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                                   *(undefined4 *)(puVar7 + 1));
                lVar12 = 0x3a;
              }
            }
            else {
              pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp";
              iVar3 = 0x3f;
              lVar11 = 0x3f;
              do {
                if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"[lVar11]
                     == '\\') ||
                   ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"[lVar11]
                    == '/')) {
                  pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"
                            + (iVar3 + 1);
                  break;
                }
                iVar3 = iVar3 + -1;
                lVar11 = lVar11 + -1;
              } while (-1 < lVar11);
              pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                     cout_exref,"Return Error:0x");
              puVar7 = (undefined8 *)std::setbase((int)local_40);
              (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                                 *(undefined4 *)(puVar7 + 1));
              std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar14);
              if (pcVar13 != (char *)0x0) {
                pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                       cout_exref,"\tFile:");
                FUN_180001e50(pbVar6,pcVar13);
              }
              pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                     cout_exref,"\tLine:");
              puVar7 = (undefined8 *)std::setbase((int)local_40);
              (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                                 *(undefined4 *)(puVar7 + 1));
              lVar12 = 0x36;
            }
          }
          else {
            pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp";
            iVar3 = 0x3f;
            lVar11 = 0x3f;
            do {
              if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"[lVar11]
                   == '\\') ||
                 ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"[lVar11] ==
                  '/')) {
                pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp" +
                          (iVar3 + 1);
                break;
              }
              iVar3 = iVar3 + -1;
              lVar11 = lVar11 + -1;
            } while (-1 < lVar11);
            pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                   "Return Error:0x");
            puVar7 = (undefined8 *)std::setbase((int)local_40);
            (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                               *(undefined4 *)(puVar7 + 1));
            std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar14);
            if (pcVar13 != (char *)0x0) {
              pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                     cout_exref,"\tFile:");
              FUN_180001e50(pbVar6,pcVar13);
            }
            pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                   "\tLine:");
            puVar7 = (undefined8 *)std::setbase((int)local_40);
            (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),
                               *(undefined4 *)(puVar7 + 1));
            lVar12 = 0x32;
          }
        }
        else {
          pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp";
          iVar3 = 0x3f;
          lVar11 = 0x3f;
          do {
            if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"[lVar11] ==
                 '\\') ||
               ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"[lVar11] ==
                '/')) {
              pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp" +
                        (iVar3 + 1);
              break;
            }
            iVar3 = iVar3 + -1;
            lVar11 = lVar11 + -1;
          } while (-1 < lVar11);
          pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                 "Return Error:0x");
          puVar7 = (undefined8 *)std::setbase((int)local_40);
          (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1))
          ;
          std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar14);
          if (pcVar13 != (char *)0x0) {
            pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                   "\tFile:");
            FUN_180001e50(pbVar6,pcVar13);
          }
          pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                 "\tLine:");
          puVar7 = (undefined8 *)std::setbase((int)local_40);
          (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1))
          ;
          lVar12 = 0x2e;
        }
      }
      else {
        pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp";
        iVar3 = 0x3f;
        lVar11 = 0x3f;
        do {
          if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"[lVar11] ==
               '\\') ||
             ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp"[lVar11] == '/'
             )) {
            pcVar13 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusvolume.cpp" +
                      (iVar3 + 1);
            break;
          }
          iVar3 = iVar3 + -1;
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
        pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "Return Error:0x");
        puVar7 = (undefined8 *)std::setbase((int)local_40);
        (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar14);
        if (pcVar13 != (char *)0x0) {
          pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                 "\tFile:");
          FUN_180001e50(pbVar6,pcVar13);
        }
        pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tLine:");
        puVar7 = (undefined8 *)std::setbase((int)local_40);
        (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
        lVar12 = 0x2a;
      }
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,lVar12);
      pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar6,"CHFSPlusVolume::CHFSPlusVolume");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    }
  }
  return param_1;
}




void FUN_18000c010(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  if (puVar3 != (undefined8 *)0x0) {
    if ((void *)puVar3[3] != (void *)0x0) {
      free((void *)puVar3[3]);
      puVar3[3] = 0;
    }
    if ((void *)puVar3[2] != (void *)0x0) {
      free((void *)puVar3[2]);
      puVar3[2] = 0;
    }
    *puVar3 = 0;
    puVar3[1] = 0x5005100000002;
    free(puVar3);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1800126c0(puVar3);
    free(puVar3);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1800126c0(puVar3);
    free(puVar3);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = CHFSPlusExtents::vftable;
    FUN_1800126c0(puVar3);
    free(puVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    free(*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  plVar6 = *(longlong **)*plVar1;
  if (plVar6 != (longlong *)*plVar1) {
    do {
      free((void *)plVar6[4]);
      if ((void *)plVar6[5] != (void *)0x0) {
        free((void *)plVar6[5]);
        plVar6[5] = 0;
      }
      plVar7 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar7 + 0x19);
        plVar6 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar7 + 0x19);
          plVar6 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar2 = *(char *)(plVar6[1] + 0x19);
        plVar8 = (longlong *)plVar6[1];
        plVar7 = plVar6;
        while ((plVar6 = plVar8, cVar2 == '\0' && (plVar7 == (longlong *)plVar6[2]))) {
          cVar2 = *(char *)(plVar6[1] + 0x19);
          plVar8 = (longlong *)plVar6[1];
          plVar7 = plVar6;
        }
      }
    } while (plVar6 != (longlong *)*plVar1);
  }
  FUN_1800063d0(plVar1);
  plVar6 = (longlong *)(param_1 + 0x68);
  plVar7 = *(longlong **)*plVar6;
  if (plVar7 != (longlong *)*plVar6) {
    do {
      free((void *)plVar7[4]);
      if ((void *)plVar7[5] != (void *)0x0) {
        free((void *)plVar7[5]);
        plVar7[5] = 0;
      }
      plVar8 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar8 + 0x19);
        plVar7 = plVar8;
        plVar8 = (longlong *)*plVar8;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar8 + 0x19);
          plVar7 = plVar8;
          plVar8 = (longlong *)*plVar8;
        }
      }
      else {
        cVar2 = *(char *)(plVar7[1] + 0x19);
        plVar4 = (longlong *)plVar7[1];
        plVar8 = plVar7;
        while ((plVar7 = plVar4, cVar2 == '\0' && (plVar8 == (longlong *)plVar7[2]))) {
          cVar2 = *(char *)(plVar7[1] + 0x19);
          plVar4 = (longlong *)plVar7[1];
          plVar8 = plVar7;
        }
      }
    } while (plVar7 != (longlong *)*plVar6);
  }
  FUN_1800063d0(plVar6);
  plVar8 = (longlong *)(param_1 + 0x78);
  plVar7 = *(longlong **)*plVar8;
  if (plVar7 != (longlong *)*plVar8) {
    do {
      free((void *)plVar7[4]);
      if ((void *)plVar7[5] != (void *)0x0) {
        free((void *)plVar7[5]);
        plVar7[5] = 0;
      }
      plVar4 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar4 + 0x19);
        plVar7 = plVar4;
        plVar4 = (longlong *)*plVar4;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar4 + 0x19);
          plVar7 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar2 = *(char *)(plVar7[1] + 0x19);
        plVar5 = (longlong *)plVar7[1];
        plVar4 = plVar7;
        while ((plVar7 = plVar5, cVar2 == '\0' && (plVar4 == (longlong *)plVar7[2]))) {
          cVar2 = *(char *)(plVar7[1] + 0x19);
          plVar5 = (longlong *)plVar7[1];
          plVar4 = plVar7;
        }
      }
    } while (plVar7 != (longlong *)*plVar8);
  }
  FUN_1800063d0(plVar8);
  FUN_1800063d0(plVar8);
  free((void *)*plVar8);
  FUN_1800063d0(plVar6);
  free((void *)*plVar6);
  FUN_1800063d0(plVar1);
  free((void *)*plVar1);
  return;
}




ulonglong FUN_18000c3a0(longlong param_1,int param_2,undefined8 param_3,int *param_4,
                       longlong *param_5)

{
  BOOL BVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((*(void **)(param_1 + 0x18) == (void *)0x0) ||
     (BVar1 = IsBadReadPtr(*(void **)(param_1 + 0x18),4), BVar1 != 0)) {
    return 0x5007900000005;
  }
  if (param_2 == 3) {
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  else if (param_2 == 4) {
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  else {
    if (param_2 != 8) {
      *(undefined8 *)(param_1 + 0x10) = 0x5008b00000003;
      return 0x5008b00000003;
    }
    lVar3 = *(longlong *)(param_1 + 0x38);
  }
  if (*(longlong *)(lVar3 + 0x38) == 0) {
    *(undefined8 *)(lVar3 + 0x18) = 0x500a500000002;
    *(undefined8 *)(param_1 + 0x10) = 0x500a500000002;
    return 0x500a500000002;
  }
  uVar2 = FUN_180012d20(*(longlong *)(lVar3 + 0x38),param_3,param_4,param_5);
  *(ulonglong *)(lVar3 + 0x18) = uVar2;
  *(ulonglong *)(param_1 + 0x10) = uVar2;
  return uVar2;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18000c480(int *param_1,ulonglong param_2,void *param_3,__uint64 param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 uVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  longlong lVar7;
  size_t _Size;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_4098 [32];
  undefined1 local_4078;
  ulonglong local_4068;
  undefined1 local_4058 [8192];
  undefined1 local_2058 [8192];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x18000c497;
  local_58 = DAT_180028010 ^ (ulonglong)auStack_4098;
  plVar1 = *(longlong **)(param_1 + 2);
  if (plVar1 == (longlong *)0x0) {
    param_1[4] = 0x501;
    param_1[5] = 0x500a9;
  }
  else if (param_3 == (void *)0x0) {
    param_1[4] = 0x501;
    param_1[5] = 0x500aa;
  }
  else {
    iVar4 = *param_1;
    uVar9 = (ulonglong)iVar4;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar9;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    local_4068 = param_2 / uVar9;
    lVar7 = SUB168(auVar3 % auVar2,0);
    if (lVar7 == 0) {
LAB_18000c58b:
      uVar9 = param_4 / (ulonglong)(longlong)iVar4;
      if (uVar9 != 0) {
        local_4078 = 0;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 2) + 8))
                          (*(longlong **)(param_1 + 2),param_3,param_2 / (ulonglong)(longlong)iVar4,
                           uVar9);
        if (iVar4 == 0) {
          uVar5 = 0x500c500000501;
          goto LAB_18000c643;
        }
        iVar4 = *param_1;
        lVar7 = (longlong)iVar4 * uVar9;
        param_4 = param_4 - lVar7;
        param_2 = param_2 + lVar7;
        param_3 = (void *)((longlong)param_3 + lVar7);
      }
      if (param_4 == 0) goto LAB_18000c6b0;
      memset(local_2058,0,0x2000);
      local_4078 = 0;
      iVar4 = (**(code **)(**(longlong **)(param_1 + 2) + 8))
                        (*(longlong **)(param_1 + 2),local_2058,param_2 / (ulonglong)(longlong)iVar4
                         ,1);
      if (iVar4 != 0) {
        iVar4 = (int)param_4;
        if (*param_1 <= (int)param_4) {
          iVar4 = *param_1;
        }
        memcpy(param_3,local_2058,(longlong)iVar4);
        goto LAB_18000c6b0;
      }
      uVar5 = 0x500d400000501;
    }
    else {
      iVar8 = (int)param_4;
      if (uVar9 - lVar7 < param_4) {
        iVar8 = iVar4 - SUB164(auVar3 % auVar2,0);
      }
      memset(local_4058,0,0x2000);
      local_4078 = 0;
      iVar4 = (**(code **)(*plVar1 + 8))(plVar1,local_4058,local_4068,1);
      if (iVar4 != 0) {
        _Size = (size_t)iVar8;
        memcpy(param_3,local_4058 + param_2 % (ulonglong)(longlong)*param_1,_Size);
        iVar4 = *param_1;
        param_4 = param_4 - _Size;
        param_2 = param_2 + _Size;
        param_3 = (void *)((longlong)param_3 + _Size);
        goto LAB_18000c58b;
      }
      uVar5 = 0x500b600000501;
    }
LAB_18000c643:
    *(undefined8 *)(param_1 + 4) = uVar5;
  }
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"Location"
                        );
  pbVar6 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,param_2);
  pbVar6 = FUN_180001e50(pbVar6,"Size:");
  pbVar6 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,param_4);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,FUN_180002030);
LAB_18000c6b0:
  __security_check_cookie(local_58 ^ (ulonglong)auStack_4098);
  return;
}




void FUN_18000c6e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_238 [32];
  undefined2 local_218;
  undefined2 uStack_216;
  undefined4 uStack_20c;
  undefined1 local_1f8;
  undefined1 uStack_1f7;
  undefined1 uStack_1f6;
  undefined1 uStack_1f5;
  undefined1 uStack_1f4;
  undefined1 uStack_1f3;
  undefined1 uStack_1f2;
  undefined1 uStack_1f1;
  undefined2 uStack_1f0;
  undefined1 uStack_1ee;
  undefined1 uStack_1ed;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined8 local_108 [30];
  ulonglong local_18;
  
  local_18 = DAT_180028010 ^ (ulonglong)auStack_238;
  if (param_1 != (undefined8 *)0x0) {
    lVar12 = 4;
    puVar11 = (undefined8 *)&local_218;
    do {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *puVar11 = *param_1;
      puVar11[1] = uVar1;
      uVar1 = param_1[4];
      uVar4 = param_1[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar3;
      uVar2 = param_1[6];
      uVar3 = param_1[7];
      puVar11[4] = uVar1;
      uVar10 = uStack_1f3;
      uVar9 = uStack_1f4;
      uVar8 = uStack_1f7;
      uVar7 = local_1f8;
      puVar11[5] = uVar4;
      uVar1 = param_1[8];
      uVar4 = param_1[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar3;
      uVar2 = param_1[10];
      uVar3 = param_1[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar4;
      uVar1 = param_1[0xc];
      uVar4 = param_1[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar3;
      uVar2 = param_1[0xe];
      uVar3 = param_1[0xf];
      puVar11[0xc] = uVar1;
      puVar11[0xd] = uVar4;
      puVar11[0xe] = uVar2;
      puVar11[0xf] = uVar3;
      lVar12 = lVar12 + -1;
      puVar11 = puVar11 + 0x10;
      param_1 = param_1 + 0x10;
    } while (lVar12 != 0);
    local_218 = CONCAT11((char)local_218,local_218._1_1_);
    uStack_216 = CONCAT11((undefined1)uStack_216,uStack_216._1_1_);
    uVar5 = (undefined1)uStack_20c;
    uVar6 = uStack_20c._1_1_;
    uStack_20c._0_2_ = CONCAT11(uStack_20c._2_1_,uStack_20c._3_1_);
    uStack_20c = CONCAT13(uVar5,CONCAT12(uVar6,(undefined2)uStack_20c));
    uVar5 = (undefined1)uStack_1f0;
    uVar6 = uStack_1f0._1_1_;
    uStack_1f0 = CONCAT11(uStack_1ee,uStack_1ed);
    _uStack_1f0 = CONCAT13(uVar5,CONCAT12(uVar6,uStack_1f0));
    uVar5 = (undefined1)uStack_1ec;
    uVar6 = uStack_1ec._1_1_;
    uStack_1ec._0_2_ = CONCAT11(uStack_1ec._2_1_,uStack_1ec._3_1_);
    uStack_1ec = CONCAT13(uVar5,CONCAT12(uVar6,(undefined2)uStack_1ec));
    uVar5 = (undefined1)local_1e8;
    uVar6 = local_1e8._1_1_;
    local_1e8._0_2_ = CONCAT11(local_1e8._2_1_,local_1e8._3_1_);
    local_1e8 = CONCAT13(uVar5,CONCAT12(uVar6,(undefined2)local_1e8));
    local_1f8 = uStack_1f5;
    uStack_1f5 = uVar7;
    uStack_1f7 = uStack_1f6;
    uStack_1f6 = uVar8;
    uStack_1f4 = uStack_1f1;
    uStack_1f1 = uVar9;
    uStack_1f3 = uStack_1f2;
    uStack_1f2 = uVar10;
    if ((((local_218 == 0x482b) || (local_218 == 0x4858)) && ((uStack_1f0 & 0x1ff) == 0)) &&
       (((uStack_216 < 0x11 && (local_1e8 <= uStack_1ec)) && (uStack_20c <= uStack_1ec)))) {
      FUN_18000cf90((undefined1 *)local_108);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_238);
  return;
}




ulonglong FUN_18000c8f0(longlong param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 local_res8;
  
  if (*(longlong **)(param_1 + 0x50) == (longlong *)0x0) {
    uVar4 = 0x5017900000002;
  }
  else {
    FUN_180011300(*(longlong **)(param_1 + 0x50),param_3,(longlong *)(param_1 + 0x58),
                  (longlong *)(param_1 + 0x68),(longlong *)(param_1 + 0x78));
    if (param_3 != (longlong *)0x0) {
      *(ulonglong *)(param_3[1] + 8) =
           (ulonglong)
           (uint)((int)*(undefined8 *)(param_1 + 0x60) + 1 +
                 *(int *)(*(longlong *)(param_1 + 0x18) + 0x24) +
                 *(int *)(*(longlong *)(param_1 + 0x18) + 0x20));
    }
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + (int)*(undefined8 *)(param_1 + 0x60);
    }
    iVar8 = 1;
    if ((param_3 != (longlong *)0x0) && ((longlong *)*param_3 != (longlong *)0x0)) {
      iVar8 = (**(code **)(*(longlong *)*param_3 + 0x10))();
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
      if (cVar2 != '\0') {
        iVar8 = 0;
      }
    }
    plVar7 = (longlong *)**(longlong **)(param_1 + 0x58);
    if (plVar7 != *(longlong **)(param_1 + 0x58)) {
      do {
        if (iVar8 == 0) break;
        iVar8 = 1;
        if ((param_3 != (longlong *)0x0) && ((longlong *)*param_3 != (longlong *)0x0)) {
          iVar8 = (**(code **)(*(longlong *)*param_3 + 0x10))();
          cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
          if (cVar2 != '\0') {
            iVar8 = 0;
          }
        }
        plVar5 = (longlong *)FUN_180018ba0(0xd0);
        plVar6 = (longlong *)0x0;
        if (plVar5 != (longlong *)0x0) {
          plVar6 = FUN_180009770(plVar5,param_1,plVar7[4],(short *)plVar7[5],1);
        }
        free((void *)plVar7[4]);
        if ((void *)plVar7[5] != (void *)0x0) {
          free((void *)plVar7[5]);
          plVar7[5] = 0;
        }
        if (plVar6 != (longlong *)0x0) {
          if (plVar6[10] == -1) {
LAB_18000caaa:
            (**(code **)(*plVar6 + 0x30))(plVar6,1);
          }
          else if (param_2 != (longlong *)0x0) {
            local_res8 = 0;
            iVar3 = (**(code **)(*param_2 + 0x28))(param_2,plVar6,5,&local_res8);
            if (iVar3 == 0) goto LAB_18000caaa;
            if (((param_3 != (longlong *)0x0) && ((char)param_3[2] == '\0')) && (param_3[1] != 0)) {
              plVar6 = (longlong *)(param_3[1] + 0x10);
              *plVar6 = *plVar6 + 1;
              (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,param_3[1]);
            }
          }
        }
        plVar6 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar6 + 0x19);
          plVar7 = plVar6;
          plVar6 = (longlong *)*plVar6;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar6 + 0x19);
            plVar7 = plVar6;
            plVar6 = (longlong *)*plVar6;
          }
        }
        else {
          cVar2 = *(char *)(plVar7[1] + 0x19);
          plVar5 = (longlong *)plVar7[1];
          plVar6 = plVar7;
          while ((plVar7 = plVar5, cVar2 == '\0' && (plVar6 == (longlong *)plVar7[2]))) {
            cVar2 = *(char *)(plVar7[1] + 0x19);
            plVar5 = (longlong *)plVar7[1];
            plVar6 = plVar7;
          }
        }
      } while (plVar7 != *(longlong **)(param_1 + 0x58));
    }
    FUN_1800063d0((longlong *)(param_1 + 0x58));
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (*(longlong **)(lVar1 + 0x38) == (longlong *)0x0) {
      uVar4 = 0x500af00000002;
      *(undefined8 *)(lVar1 + 0x18) = 0x500af00000002;
    }
    else {
      uVar4 = FUN_180013a70(*(longlong **)(lVar1 + 0x38),param_2,param_3);
      *(ulonglong *)(lVar1 + 0x18) = uVar4;
    }
    *(ulonglong *)(param_1 + 0x10) = uVar4;
  }
  return uVar4;
}




void FUN_18000cb70(longlong param_1,int param_2,longlong param_3,ulonglong param_4)

{
  void *pvVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  void *_Memory;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStackY_98 [32];
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_180028010 ^ (ulonglong)auStackY_98;
  iVar5 = *(int *)(param_3 + 0xc);
  pvVar1 = (void *)(param_3 + 0x10);
  uVar8 = 0;
  _Memory = pvVar1;
  local_68 = pvVar1;
  uVar3 = uVar8;
  uVar6 = uVar8;
  do {
    while( true ) {
      if (iVar5 == 0) goto LAB_18000cc8b;
      if (uVar3 == 8) break;
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28);
      uVar7 = (ulonglong)(uint)(iVar2 * *(int *)((longlong)_Memory + uVar3 * 8));
      if ((uVar7 <= param_4) &&
         (param_4 < (uint)(iVar2 * *(int *)((longlong)_Memory + uVar3 * 8 + 4)) + uVar7))
      goto LAB_18000cc9f;
      uVar6 = (ulonglong)(uint)((int)uVar6 + *(int *)((longlong)_Memory + uVar3 * 8 + 4));
      iVar5 = iVar5 - *(int *)((longlong)_Memory + uVar3 * 8 + 4);
      uVar3 = uVar3 + 1;
    }
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    if (param_2 == 3) {
      uVar4 = 0x501db00000006;
      goto LAB_18000cc87;
    }
    if ((_Memory != pvVar1) && (_Memory != (void *)0x0)) {
      free(_Memory);
      local_68 = (void *)0x0;
    }
    local_58 = CONCAT53(local_58._3_5_,10);
    local_58 = CONCAT44(param_2,(undefined4)local_58);
    local_50 = (int)uVar6;
    uVar3 = FUN_18000c3a0(param_1,3,&local_58,(int *)&local_60,(longlong *)&local_68);
    *(ulonglong *)(param_1 + 0x10) = uVar3;
    _Memory = local_68;
    uVar3 = uVar8;
  } while (local_60._6_2_ != 0);
  uVar4 = 0x501e800000006;
LAB_18000cc87:
  *(undefined8 *)(param_1 + 0x10) = uVar4;
LAB_18000cc8b:
  if (_Memory != pvVar1) {
    free(_Memory);
  }
LAB_18000cc9f:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_98);
  return;
}




undefined2 * FUN_18000cce0(undefined2 *param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    free(*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (*(void **)(param_1 + 8) != (void *)0x0)) {
    free(*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0x5002300000002;
  *(undefined4 *)(param_1 + 0xc) = 0;
  free(param_1);
  return param_1;
}




void FUN_18000cd50(undefined1 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  uVar1 = param_1[0x1c];
  param_1[0x1c] = param_1[0x1f];
  param_1[0x1f] = uVar1;
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1e] = uVar1;
  uVar1 = param_1[0x20];
  param_1[0x20] = param_1[0x23];
  param_1[0x23] = uVar1;
  uVar1 = param_1[0x21];
  param_1[0x21] = param_1[0x22];
  param_1[0x22] = uVar1;
  uVar1 = param_1[0x24];
  param_1[0x24] = param_1[0x27];
  param_1[0x27] = uVar1;
  uVar1 = param_1[0x25];
  param_1[0x25] = param_1[0x26];
  param_1[0x26] = uVar1;
  uVar1 = param_1[0x28];
  param_1[0x28] = param_1[0x2b];
  param_1[0x2b] = uVar1;
  uVar1 = param_1[0x29];
  param_1[0x29] = param_1[0x2a];
  param_1[0x2a] = uVar1;
  uVar1 = param_1[0x2c];
  param_1[0x2c] = param_1[0x2f];
  param_1[0x2f] = uVar1;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = param_1[0x2e];
  param_1[0x2e] = uVar1;
  uVar1 = param_1[0x30];
  param_1[0x30] = param_1[0x33];
  param_1[0x33] = uVar1;
  uVar1 = param_1[0x31];
  param_1[0x31] = param_1[0x32];
  param_1[0x32] = uVar1;
  uVar1 = param_1[0x34];
  param_1[0x34] = param_1[0x37];
  param_1[0x37] = uVar1;
  uVar1 = param_1[0x35];
  param_1[0x35] = param_1[0x36];
  param_1[0x36] = uVar1;
  uVar1 = param_1[0x38];
  param_1[0x38] = param_1[0x3b];
  param_1[0x3b] = uVar1;
  uVar1 = param_1[0x39];
  param_1[0x39] = param_1[0x3a];
  param_1[0x3a] = uVar1;
  uVar1 = param_1[0x3c];
  param_1[0x3c] = param_1[0x3f];
  param_1[0x3f] = uVar1;
  uVar1 = param_1[0x3d];
  param_1[0x3d] = param_1[0x3e];
  param_1[0x3e] = uVar1;
  return;
}




void FUN_18000cf90(undefined1 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[6];
  param_1[6] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[5];
  param_1[5] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_1[4];
  param_1[4] = uVar1;
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  FUN_18000cd50(param_1 + 0x10);
  return;
}




undefined8 FUN_18000d030(undefined1 *param_1)

{
  undefined1 uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0x5004000000005;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  uVar1 = param_1[0x1c];
  param_1[0x1c] = param_1[0x1f];
  param_1[0x1f] = uVar1;
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1e] = uVar1;
  uVar1 = param_1[0x20];
  param_1[0x20] = param_1[0x23];
  param_1[0x23] = uVar1;
  uVar1 = param_1[0x21];
  param_1[0x21] = param_1[0x22];
  param_1[0x22] = uVar1;
  uVar1 = param_1[0x24];
  param_1[0x24] = param_1[0x27];
  param_1[0x27] = uVar1;
  uVar1 = param_1[0x25];
  param_1[0x25] = param_1[0x26];
  param_1[0x26] = uVar1;
  uVar1 = param_1[0x28];
  param_1[0x28] = param_1[0x2b];
  param_1[0x2b] = uVar1;
  uVar1 = param_1[0x29];
  param_1[0x29] = param_1[0x2a];
  param_1[0x2a] = uVar1;
  uVar1 = param_1[0x2c];
  param_1[0x2c] = param_1[0x2f];
  param_1[0x2f] = uVar1;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = param_1[0x2e];
  param_1[0x2e] = uVar1;
  uVar1 = param_1[0x30];
  param_1[0x30] = param_1[0x33];
  param_1[0x33] = uVar1;
  uVar1 = param_1[0x31];
  param_1[0x31] = param_1[0x32];
  param_1[0x32] = uVar1;
  uVar1 = param_1[0x34];
  param_1[0x34] = param_1[0x37];
  param_1[0x37] = uVar1;
  uVar1 = param_1[0x35];
  param_1[0x35] = param_1[0x36];
  param_1[0x36] = uVar1;
  uVar1 = param_1[0x38];
  param_1[0x38] = param_1[0x3b];
  param_1[0x3b] = uVar1;
  uVar1 = param_1[0x39];
  param_1[0x39] = param_1[0x3a];
  param_1[0x3a] = uVar1;
  uVar1 = param_1[0x3c];
  param_1[0x3c] = param_1[0x3f];
  param_1[0x3f] = uVar1;
  uVar1 = param_1[0x3d];
  param_1[0x3d] = param_1[0x3e];
  param_1[0x3e] = uVar1;
  uVar1 = param_1[0x40];
  param_1[0x40] = param_1[0x43];
  param_1[0x43] = uVar1;
  uVar1 = param_1[0x41];
  param_1[0x41] = param_1[0x42];
  param_1[0x42] = uVar1;
  uVar1 = param_1[0x44];
  param_1[0x44] = param_1[0x47];
  param_1[0x47] = uVar1;
  uVar1 = param_1[0x45];
  param_1[0x45] = param_1[0x46];
  param_1[0x46] = uVar1;
  uVar1 = param_1[0x48];
  param_1[0x48] = param_1[0x4f];
  param_1[0x4f] = uVar1;
  uVar1 = param_1[0x49];
  param_1[0x49] = param_1[0x4e];
  param_1[0x4e] = uVar1;
  uVar1 = param_1[0x4a];
  param_1[0x4a] = param_1[0x4d];
  param_1[0x4d] = uVar1;
  uVar1 = param_1[0x4b];
  param_1[0x4b] = param_1[0x4c];
  param_1[0x4c] = uVar1;
  FUN_18000cf90(param_1 + 0x70);
  FUN_18000cf90(param_1 + 0xc0);
  FUN_18000cf90(param_1 + 0x110);
  FUN_18000cf90(param_1 + 0x160);
  FUN_18000cf90(param_1 + 0x1b0);
  return 0;
}




undefined8 FUN_18000d360(undefined1 *param_1)

{
  undefined1 uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0x5006600000005;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return 0;
}




undefined8 FUN_18000d3d0(undefined1 *param_1)

{
  undefined1 uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0x5007400000005;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[5];
  param_1[5] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_1[4];
  param_1[4] = uVar1;
  uVar1 = param_1[6];
  param_1[6] = param_1[9];
  param_1[9] = uVar1;
  uVar1 = param_1[7];
  param_1[7] = param_1[8];
  param_1[8] = uVar1;
  uVar1 = param_1[10];
  param_1[10] = param_1[0xd];
  param_1[0xd] = uVar1;
  uVar1 = param_1[0xb];
  param_1[0xb] = param_1[0xc];
  param_1[0xc] = uVar1;
  uVar1 = param_1[0xe];
  param_1[0xe] = param_1[0x11];
  param_1[0x11] = uVar1;
  uVar1 = param_1[0xf];
  param_1[0xf] = param_1[0x10];
  param_1[0x10] = uVar1;
  uVar1 = param_1[0x12];
  param_1[0x12] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x15];
  param_1[0x15] = uVar1;
  uVar1 = param_1[0x16];
  param_1[0x16] = param_1[0x19];
  param_1[0x19] = uVar1;
  uVar1 = param_1[0x17];
  param_1[0x17] = param_1[0x18];
  param_1[0x18] = uVar1;
  uVar1 = param_1[0x1a];
  param_1[0x1a] = param_1[0x1d];
  param_1[0x1d] = uVar1;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = param_1[0x1c];
  param_1[0x1c] = uVar1;
  uVar1 = param_1[0x20];
  param_1[0x20] = param_1[0x23];
  param_1[0x23] = uVar1;
  uVar1 = param_1[0x21];
  param_1[0x21] = param_1[0x22];
  param_1[0x22] = uVar1;
  uVar1 = param_1[0x26];
  param_1[0x26] = param_1[0x29];
  param_1[0x29] = uVar1;
  uVar1 = param_1[0x27];
  param_1[0x27] = param_1[0x28];
  param_1[0x28] = uVar1;
  return 0;
}




undefined8 FUN_18000d540(undefined1 *param_1)

{
  undefined1 uVar1;
  short sVar2;
  short *psVar3;
  ushort uVar4;
  ulonglong uVar5;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0x5009b00000005;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[5];
  param_1[5] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_1[4];
  param_1[4] = uVar1;
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  uVar4 = *(ushort *)(param_1 + 6);
  if (uVar4 < 0xfe) {
    if (uVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar4 = 0xfe;
  }
  psVar3 = (short *)(param_1 + 8);
  uVar5 = (ulonglong)uVar4;
  do {
    sVar2 = *psVar3;
    *(undefined1 *)psVar3 = *(undefined1 *)((longlong)psVar3 + 1);
    *(char *)((longlong)psVar3 + 1) = (char)sVar2;
    if (*psVar3 == 0x2f) {
      *psVar3 = 0x3a;
    }
    psVar3 = psVar3 + 1;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return 0;
}




undefined8 FUN_18000d600(undefined1 *param_1)

{
  undefined1 uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0x500e700000005;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  uVar1 = param_1[0x1c];
  param_1[0x1c] = param_1[0x1f];
  param_1[0x1f] = uVar1;
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1e] = uVar1;
  uVar1 = param_1[0x20];
  param_1[0x20] = param_1[0x23];
  param_1[0x23] = uVar1;
  uVar1 = param_1[0x21];
  param_1[0x21] = param_1[0x22];
  param_1[0x22] = uVar1;
  uVar1 = param_1[0x24];
  param_1[0x24] = param_1[0x27];
  param_1[0x27] = uVar1;
  uVar1 = param_1[0x25];
  param_1[0x25] = param_1[0x26];
  param_1[0x26] = uVar1;
  uVar1 = param_1[0x2a];
  param_1[0x2a] = param_1[0x2b];
  param_1[0x2b] = uVar1;
  uVar1 = param_1[0x2c];
  param_1[0x2c] = param_1[0x2f];
  param_1[0x2f] = uVar1;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = param_1[0x2e];
  param_1[0x2e] = uVar1;
  uVar1 = param_1[0x30];
  param_1[0x30] = param_1[0x31];
  param_1[0x31] = uVar1;
  uVar1 = param_1[0x32];
  param_1[0x32] = param_1[0x33];
  param_1[0x33] = uVar1;
  uVar1 = param_1[0x34];
  param_1[0x34] = param_1[0x35];
  param_1[0x35] = uVar1;
  uVar1 = param_1[0x36];
  param_1[0x36] = param_1[0x37];
  param_1[0x37] = uVar1;
  uVar1 = param_1[0x38];
  param_1[0x38] = param_1[0x39];
  param_1[0x39] = uVar1;
  uVar1 = param_1[0x3a];
  param_1[0x3a] = param_1[0x3b];
  param_1[0x3b] = uVar1;
  uVar1 = param_1[0x3c];
  param_1[0x3c] = param_1[0x3d];
  param_1[0x3d] = uVar1;
  uVar1 = param_1[0x40];
  param_1[0x40] = param_1[0x41];
  param_1[0x41] = uVar1;
  uVar1 = param_1[0x42];
  param_1[0x42] = param_1[0x43];
  param_1[0x43] = uVar1;
  uVar1 = param_1[0x48];
  param_1[0x48] = param_1[0x49];
  param_1[0x49] = uVar1;
  uVar1 = param_1[0x4c];
  param_1[0x4c] = param_1[0x4f];
  param_1[0x4f] = uVar1;
  uVar1 = param_1[0x4d];
  param_1[0x4d] = param_1[0x4e];
  param_1[0x4e] = uVar1;
  uVar1 = param_1[0x50];
  param_1[0x50] = param_1[0x53];
  param_1[0x53] = uVar1;
  uVar1 = param_1[0x51];
  param_1[0x51] = param_1[0x52];
  param_1[0x52] = uVar1;
  uVar1 = param_1[0x54];
  param_1[0x54] = param_1[0x57];
  param_1[0x57] = uVar1;
  uVar1 = param_1[0x55];
  param_1[0x55] = param_1[0x56];
  param_1[0x56] = uVar1;
  return 0;
}




undefined8 FUN_18000d8e0(undefined1 *param_1)

{
  undefined1 uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0x5010200000005;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  uVar1 = param_1[0x1c];
  param_1[0x1c] = param_1[0x1f];
  param_1[0x1f] = uVar1;
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1e] = uVar1;
  uVar1 = param_1[0x20];
  param_1[0x20] = param_1[0x23];
  param_1[0x23] = uVar1;
  uVar1 = param_1[0x21];
  param_1[0x21] = param_1[0x22];
  param_1[0x22] = uVar1;
  uVar1 = param_1[0x24];
  param_1[0x24] = param_1[0x27];
  param_1[0x27] = uVar1;
  uVar1 = param_1[0x25];
  param_1[0x25] = param_1[0x26];
  param_1[0x26] = uVar1;
  uVar1 = param_1[0x2a];
  param_1[0x2a] = param_1[0x2b];
  param_1[0x2b] = uVar1;
  uVar1 = param_1[0x2c];
  param_1[0x2c] = param_1[0x2f];
  param_1[0x2f] = uVar1;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = param_1[0x2e];
  param_1[0x2e] = uVar1;
  uVar1 = param_1[0x30];
  param_1[0x30] = param_1[0x33];
  param_1[0x33] = uVar1;
  uVar1 = param_1[0x31];
  param_1[0x31] = param_1[0x32];
  param_1[0x32] = uVar1;
  uVar1 = param_1[0x34];
  param_1[0x34] = param_1[0x37];
  param_1[0x37] = uVar1;
  uVar1 = param_1[0x35];
  param_1[0x35] = param_1[0x36];
  param_1[0x36] = uVar1;
  uVar1 = param_1[0x38];
  param_1[0x38] = param_1[0x39];
  param_1[0x39] = uVar1;
  uVar1 = param_1[0x3a];
  param_1[0x3a] = param_1[0x3b];
  param_1[0x3b] = uVar1;
  uVar1 = param_1[0x3c];
  param_1[0x3c] = param_1[0x3d];
  param_1[0x3d] = uVar1;
  uVar1 = param_1[0x48];
  param_1[0x48] = param_1[0x49];
  param_1[0x49] = uVar1;
  uVar1 = param_1[0x4c];
  param_1[0x4c] = param_1[0x4f];
  param_1[0x4f] = uVar1;
  uVar1 = param_1[0x4d];
  param_1[0x4d] = param_1[0x4e];
  param_1[0x4e] = uVar1;
  uVar1 = param_1[0x50];
  param_1[0x50] = param_1[0x53];
  param_1[0x53] = uVar1;
  uVar1 = param_1[0x51];
  param_1[0x51] = param_1[0x52];
  param_1[0x52] = uVar1;
  FUN_18000cf90(param_1 + 0x58);
  FUN_18000cf90(param_1 + 0xa8);
  return 0;
}




undefined8 FUN_18000db70(undefined1 *param_1)

{
  undefined1 uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0x5015200000005;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  uVar1 = param_1[0x24];
  param_1[0x24] = param_1[0x2b];
  param_1[0x2b] = uVar1;
  uVar1 = param_1[0x25];
  param_1[0x25] = param_1[0x2a];
  param_1[0x2a] = uVar1;
  uVar1 = param_1[0x26];
  param_1[0x26] = param_1[0x29];
  param_1[0x29] = uVar1;
  uVar1 = param_1[0x27];
  param_1[0x27] = param_1[0x28];
  param_1[0x28] = uVar1;
  uVar1 = param_1[0x2c];
  param_1[0x2c] = param_1[0x33];
  param_1[0x33] = uVar1;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = param_1[0x32];
  param_1[0x32] = uVar1;
  uVar1 = param_1[0x2e];
  param_1[0x2e] = param_1[0x31];
  param_1[0x31] = uVar1;
  uVar1 = param_1[0x2f];
  param_1[0x2f] = param_1[0x30];
  param_1[0x30] = uVar1;
  return 0;
}




undefined8 *
FUN_18000dc40(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  char *pcVar8;
  undefined1 local_30 [24];
  
  FUN_180012160(param_1,param_2,param_3);
  *param_1 = CHFSPlusAttribute::vftable;
  plVar2 = (longlong *)FUN_180018ba0(0x18);
  plVar6 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_2;
    plVar2[1] = (longlong)param_1;
    if (param_2 == 0) {
      plVar6 = (longlong *)0x5000b00000005;
    }
    plVar2[2] = (longlong)plVar6;
    plVar6 = plVar2;
  }
  param_1[7] = plVar6;
  if (plVar6 == (longlong *)0x0) {
    param_1[3] = 0x5001400000004;
  }
  else {
    uVar1 = plVar6[2];
    param_1[3] = uVar1;
    if ((uVar1 & 0xff00000000000000) != 0) {
      pcVar8 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp";
      iVar7 = 0x42;
      lVar3 = 0x42;
      do {
        if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp"[lVar3] ==
             '\\') ||
           ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp"[lVar3] == '/'
           )) {
          pcVar8 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp" +
                   (iVar7 + 1);
          break;
        }
        iVar7 = iVar7 + -1;
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar5 = (undefined8 *)std::setbase((int)local_30);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,uVar1);
      if (pcVar8 != (char *)0x0) {
        pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar4,pcVar8);
      }
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar5 = (undefined8 *)std::setbase((int)local_30);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,0x16);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar4,"CHFSPlusAttribute::CHFSPlusAttribute");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    }
  }
  return param_1;
}




void FUN_18000de10(undefined8 param_1,longlong param_2,longlong param_3)

{
  FUN_18000de20(param_2,param_3);
  return;
}




undefined8 FUN_18000de20(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (*(uint *)(param_2 + 4) <= *(uint *)(param_1 + 4)) {
    if (*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4)) {
      return 1;
    }
    uVar2 = 0;
    uVar3 = 0;
    if (*(ushort *)(param_1 + 0xc) != 0) {
      do {
        if (*(ushort *)(param_2 + 0xc) <= uVar2) {
          return 1;
        }
        uVar3 = *(ushort *)(param_1 + 0xe + (ulonglong)uVar2 * 2);
        uVar1 = *(ushort *)(param_2 + 0xe + (ulonglong)uVar2 * 2);
        if (uVar3 < uVar1) {
          return 0xffffffff;
        }
        if (uVar3 >= uVar1 && uVar3 != uVar1) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar2;
      } while (uVar2 < *(ushort *)(param_1 + 0xc));
    }
    if (*(ushort *)(param_2 + 0xc) <= uVar3) {
      return 0;
    }
  }
  return 0xffffffff;
}




undefined8 FUN_18000dea0(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  uVar1 = FUN_18000dee0(param_2,param_3,local_res8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return local_res8[0];
}




ulonglong FUN_18000dee0(short *param_1,ushort param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  ushort uVar4;
  longlong lVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined8 *puVar7;
  undefined1 *_Dst;
  short *psVar8;
  int iVar9;
  undefined2 *_Src;
  char *pcVar10;
  size_t _Size;
  ulonglong uVar11;
  undefined2 local_res8;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    param_1[4] = 2;
    param_1[5] = 0;
    param_1[6] = 0x3b;
    param_1[7] = 5;
LAB_18000df6b:
    uVar11 = *(ulonglong *)(param_1 + 4);
    if ((uVar11 & 0xff00000000000000) != 0) {
      iVar9 = 0x42;
      pcVar10 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp";
      lVar5 = 0x42;
      do {
        if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp"[lVar5] ==
             '\\') ||
           ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp"[lVar5] == '/'
           )) {
          pcVar10 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp" +
                    (iVar9 + 1);
          break;
        }
        iVar9 = iVar9 + -1;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
      pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar7 = (undefined8 *)std::setbase((int)local_38);
      (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar11);
      if (pcVar10 != (char *)0x0) {
        pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar6,pcVar10);
      }
      pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar7 = (undefined8 *)std::setbase((int)local_28);
      (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,100);
      pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar6,"CHFSPlusAttribute::ReadKey");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    }
    return uVar11;
  }
  if (*(ushort *)(*(longlong *)(param_1 + 0x10) + 10) <= param_2) {
    param_1[4] = 5;
    param_1[5] = 0;
    param_1[6] = 0x3c;
    param_1[7] = 5;
    goto LAB_18000df6b;
  }
  uVar2 = *(undefined2 *)
           ((ulonglong)(ushort)((*param_1 + param_2 * -2) - 2) + *(longlong *)(param_1 + 8));
  local_res8._1_1_ = (undefined1)((ushort)uVar2 >> 8);
  local_res8 = CONCAT11((char)uVar2,local_res8._1_1_);
  _Src = (undefined2 *)((ulonglong)local_res8 + *(longlong *)(param_1 + 8));
  if (_Src == (undefined2 *)0x0) goto LAB_18000df6b;
  _Size = 0x20c;
  _Dst = (undefined1 *)FUN_180018ba0(0x20c);
  if (_Dst == (undefined1 *)0x0) {
    return 0x5006700000004;
  }
  local_res8._1_1_ = (undefined1)((ushort)*_Src >> 8);
  local_res8 = CONCAT11((char)*_Src,local_res8._1_1_);
  if ((ushort)(local_res8 + 2) < 0x20c) {
    _Size = (size_t)(ushort)(local_res8 + 2);
  }
  memcpy(_Dst,_Src,_Size);
  uVar1 = *_Dst;
  *_Dst = _Dst[1];
  _Dst[1] = uVar1;
  uVar1 = _Dst[4];
  _Dst[4] = _Dst[7];
  _Dst[7] = uVar1;
  uVar1 = _Dst[5];
  _Dst[5] = _Dst[6];
  _Dst[6] = uVar1;
  uVar1 = _Dst[8];
  _Dst[8] = _Dst[0xb];
  _Dst[0xb] = uVar1;
  uVar1 = _Dst[9];
  _Dst[9] = _Dst[10];
  _Dst[10] = uVar1;
  uVar1 = _Dst[0xc];
  _Dst[0xc] = _Dst[0xd];
  _Dst[0xd] = uVar1;
  uVar4 = *(ushort *)(_Dst + 0xc);
  if (uVar4 < 0xfe) {
    if (uVar4 == 0) goto LAB_18000e1a0;
  }
  else {
    uVar4 = 0xfe;
  }
  psVar8 = (short *)(_Dst + 0xe);
  uVar11 = (ulonglong)uVar4;
  do {
    sVar3 = *psVar8;
    *(undefined1 *)psVar8 = *(undefined1 *)((longlong)psVar8 + 1);
    *(char *)((longlong)psVar8 + 1) = (char)sVar3;
    if (*psVar8 == 0x2f) {
      *psVar8 = 0x3a;
    }
    psVar8 = psVar8 + 1;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
LAB_18000e1a0:
  *param_3 = _Dst;
  return 0;
}




undefined8 FUN_18000e1c0(longlong param_1,ushort *param_2,ushort param_3)

{
  ulonglong uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  uVar1 = FUN_18000e200(param_2,param_3,local_res8);
  *(ulonglong *)(param_1 + 0x18) = uVar1;
  return local_res8[0];
}




ulonglong FUN_18000e200(ushort *param_1,ushort param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *_Dst;
  longlong lVar9;
  long lVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined2 *puVar13;
  undefined4 local_res8;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *param_3 = 0;
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (lVar9 == 0) {
    uVar11 = *(ulonglong *)(param_1 + 4);
    if ((uVar11 & 0xff00000000000000) == 0) {
      return uVar11;
    }
    iVar5 = 0x42;
    pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp";
    lVar9 = 0x42;
    do {
      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp"[lVar9] == '\\'
          ) || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp"[lVar9] ==
                '/')) {
        pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp" +
                  (iVar5 + 1);
        break;
      }
      iVar5 = iVar5 + -1;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar7 = (undefined8 *)std::setbase((int)local_38);
    (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar11);
    if (pcVar12 != (char *)0x0) {
      pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar6,pcVar12);
    }
    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar7 = (undefined8 *)std::setbase((int)local_28);
    (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
    lVar10 = 0x89;
  }
  else {
    if (*(char *)(lVar9 + 8) != -1) {
      return 0x5008b00000006;
    }
    if (lVar9 == 0) {
      param_1[4] = 2;
      param_1[5] = 0;
      param_1[6] = 0x3b;
      param_1[7] = 5;
    }
    else if (param_2 < *(ushort *)(lVar9 + 10)) {
      uVar2 = *(undefined2 *)
               ((ulonglong)(ushort)((*param_1 + param_2 * -2) - 2) + *(longlong *)(param_1 + 8));
      local_res8._1_1_ = (undefined1)((ushort)uVar2 >> 8);
      local_res8._0_2_ = CONCAT11((char)uVar2,local_res8._1_1_);
      puVar13 = (undefined2 *)((ulonglong)(ushort)local_res8 + *(longlong *)(param_1 + 8));
      if (puVar13 != (undefined2 *)0x0) {
        local_res8._1_1_ = (undefined1)((ushort)*puVar13 >> 8);
        local_res8._0_2_ = CONCAT11((char)*puVar13,local_res8._1_1_);
        local_res8._0_2_ = (ushort)local_res8 + 2;
        if (((ushort)local_res8 == 0) || (*param_1 <= (ushort)local_res8)) {
          return 0x5009200000006;
        }
        puVar7 = (undefined8 *)((ulonglong)(ushort)local_res8 + (longlong)puVar13);
        uVar3 = *(undefined4 *)puVar7;
        local_res8._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
        local_res8._2_1_ = (undefined1)((uint)uVar3 >> 0x10);
        local_res8._1_1_ = (undefined1)((uint)uVar3 >> 8);
        uVar1 = local_res8._1_1_;
        local_res8._0_2_ = CONCAT11(local_res8._2_1_,local_res8._3_1_);
        local_res8._0_3_ = CONCAT12(uVar1,(ushort)local_res8);
        local_res8 = CONCAT13((char)uVar3,(undefined3)local_res8);
        if (local_res8 == 0x10) {
          uVar3 = *(undefined4 *)((longlong)puVar7 + 0xc);
          local_res8._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
          local_res8._2_1_ = (undefined1)((uint)uVar3 >> 0x10);
          local_res8._1_1_ = (undefined1)((uint)uVar3 >> 8);
          uVar1 = local_res8._1_1_;
          local_res8._0_2_ = CONCAT11(local_res8._2_1_,local_res8._3_1_);
          local_res8._0_3_ = CONCAT12(uVar1,(ushort)local_res8);
          local_res8 = CONCAT13((char)uVar3,(undefined3)local_res8);
          _Dst = (undefined1 *)thunk_FUN_180018ba0((ulonglong)(local_res8 + 0x10U));
          if (_Dst != (undefined1 *)0x0) {
            memcpy(_Dst,puVar7,(ulonglong)(local_res8 + 0x10U));
            uVar1 = *_Dst;
            *_Dst = _Dst[3];
            _Dst[3] = uVar1;
            uVar1 = _Dst[1];
            _Dst[1] = _Dst[2];
            _Dst[2] = uVar1;
            uVar1 = _Dst[0xc];
            _Dst[0xc] = _Dst[0xf];
            _Dst[0xf] = uVar1;
            uVar1 = _Dst[0xd];
            _Dst[0xd] = _Dst[0xe];
            _Dst[0xe] = uVar1;
            *param_3 = _Dst;
            return 0;
          }
          return 0x500a400000004;
        }
        if (local_res8 != 0x20) {
          if (local_res8 != 0x30) {
            return 0;
          }
          puVar8 = (undefined8 *)thunk_FUN_180018ba0(0x48);
          if (puVar8 == (undefined8 *)0x0) {
            return 0x500bc00000004;
          }
          uVar4 = puVar7[1];
          *puVar8 = *puVar7;
          puVar8[1] = uVar4;
          uVar4 = puVar7[3];
          puVar8[2] = puVar7[2];
          puVar8[3] = uVar4;
          uVar4 = puVar7[5];
          puVar8[4] = puVar7[4];
          puVar8[5] = uVar4;
          uVar4 = puVar7[7];
          puVar8[6] = puVar7[6];
          puVar8[7] = uVar4;
          puVar8[8] = puVar7[8];
          uVar1 = *(undefined1 *)puVar8;
          *(undefined1 *)puVar8 = *(undefined1 *)((longlong)puVar8 + 3);
          *(undefined1 *)((longlong)puVar8 + 3) = uVar1;
          uVar1 = *(undefined1 *)((longlong)puVar8 + 1);
          *(undefined1 *)((longlong)puVar8 + 1) = *(undefined1 *)((longlong)puVar8 + 2);
          *(undefined1 *)((longlong)puVar8 + 2) = uVar1;
          FUN_18000cd50((undefined1 *)(puVar8 + 1));
          *param_3 = puVar8;
          return 0;
        }
        puVar8 = (undefined8 *)thunk_FUN_180018ba0(0x58);
        if (puVar8 == (undefined8 *)0x0) {
          return 0x500b000000004;
        }
        uVar4 = puVar7[1];
        *puVar8 = *puVar7;
        puVar8[1] = uVar4;
        uVar4 = puVar7[3];
        puVar8[2] = puVar7[2];
        puVar8[3] = uVar4;
        uVar4 = puVar7[5];
        puVar8[4] = puVar7[4];
        puVar8[5] = uVar4;
        uVar4 = puVar7[7];
        puVar8[6] = puVar7[6];
        puVar8[7] = uVar4;
        uVar4 = puVar7[9];
        puVar8[8] = puVar7[8];
        puVar8[9] = uVar4;
        puVar8[10] = puVar7[10];
        uVar1 = *(undefined1 *)puVar8;
        *(undefined1 *)puVar8 = *(undefined1 *)((longlong)puVar8 + 3);
        *(undefined1 *)((longlong)puVar8 + 3) = uVar1;
        uVar1 = *(undefined1 *)((longlong)puVar8 + 1);
        *(undefined1 *)((longlong)puVar8 + 1) = *(undefined1 *)((longlong)puVar8 + 2);
        *(undefined1 *)((longlong)puVar8 + 2) = uVar1;
        FUN_18000cf90((undefined1 *)(puVar8 + 1));
        *param_3 = puVar8;
        return 0;
      }
    }
    else {
      param_1[4] = 5;
      param_1[5] = 0;
      param_1[6] = 0x3c;
      param_1[7] = 5;
    }
    uVar11 = *(ulonglong *)(param_1 + 4);
    if ((uVar11 & 0xff00000000000000) == 0) {
      return uVar11;
    }
    iVar5 = 0x42;
    pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp";
    lVar9 = 0x42;
    do {
      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp"[lVar9] == '\\'
          ) || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp"[lVar9] ==
                '/')) {
        pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusattribute.cpp" +
                  (iVar5 + 1);
        break;
      }
      iVar5 = iVar5 + -1;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar7 = (undefined8 *)std::setbase((int)local_28);
    (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar11);
    if (pcVar12 != (char *)0x0) {
      pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar6,pcVar12);
    }
    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar7 = (undefined8 *)std::setbase((int)local_38);
    (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
    lVar10 = 0x8e;
  }
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,lVar10);
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "\tFuction:");
  FUN_180001e50(pbVar6,"CHFSPlusAttribute::ReadData");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
  return uVar11;
}




undefined8 * FUN_18000e710(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 0x10) {
      iVar1 = param_1[3];
      puVar3 = (undefined8 *)thunk_FUN_180018ba0((ulonglong)(iVar1 + 0x10U));
      if (puVar3 != (undefined8 *)0x0) {
        memcpy(puVar3,param_1,(ulonglong)(iVar1 + 0x10U));
        return puVar3;
      }
      return (undefined8 *)0x0;
    }
    if (iVar1 == 0x20) {
      puVar3 = (undefined8 *)thunk_FUN_180018ba0(0x58);
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *(undefined8 *)(param_1 + 2);
        *puVar3 = *(undefined8 *)param_1;
        puVar3[1] = uVar2;
        uVar2 = *(undefined8 *)(param_1 + 6);
        puVar3[2] = *(undefined8 *)(param_1 + 4);
        puVar3[3] = uVar2;
        uVar2 = *(undefined8 *)(param_1 + 10);
        puVar3[4] = *(undefined8 *)(param_1 + 8);
        puVar3[5] = uVar2;
        uVar2 = *(undefined8 *)(param_1 + 0xe);
        puVar3[6] = *(undefined8 *)(param_1 + 0xc);
        puVar3[7] = uVar2;
        uVar2 = *(undefined8 *)(param_1 + 0x12);
        puVar3[8] = *(undefined8 *)(param_1 + 0x10);
        puVar3[9] = uVar2;
        puVar3[10] = *(undefined8 *)(param_1 + 0x14);
        return puVar3;
      }
    }
    else if (iVar1 == 0x30) {
      puVar3 = (undefined8 *)thunk_FUN_180018ba0(0x48);
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *(undefined8 *)(param_1 + 2);
        *puVar3 = *(undefined8 *)param_1;
        puVar3[1] = uVar2;
        uVar2 = *(undefined8 *)(param_1 + 6);
        puVar3[2] = *(undefined8 *)(param_1 + 4);
        puVar3[3] = uVar2;
        uVar2 = *(undefined8 *)(param_1 + 10);
        puVar3[4] = *(undefined8 *)(param_1 + 8);
        puVar3[5] = uVar2;
        uVar2 = *(undefined8 *)(param_1 + 0xe);
        puVar3[6] = *(undefined8 *)(param_1 + 0xc);
        puVar3[7] = uVar2;
        puVar3[8] = *(undefined8 *)(param_1 + 0x10);
        return puVar3;
      }
    }
  }
  return (undefined8 *)0x0;
}




void FUN_18000e830(undefined8 param_1,ushort *param_2)

{
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar1;
  int iVar2;
  ushort *puVar3;
  
  pbVar1 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "keyLength:");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,*param_2);
  pbVar1 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "\tfileID:");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,*(uint *)(param_2 + 2))
  ;
  pbVar1 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "\tstartBlock:");
  pbVar1 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                     (pbVar1,*(uint *)(param_2 + 4));
  FUN_180001e50(pbVar1,"\tName:");
  if (param_2[6] == 0) {
    FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"\t");
  }
  else {
    iVar2 = 0;
    if (param_2[6] != 0) {
      puVar3 = param_2 + 7;
      do {
        if ((char)*puVar3 != '\r') {
          FUN_18000e940((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                        (char)*puVar3);
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < (int)(uint)param_2[6]);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018000e90f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,struct_std::char_traits<char>_>::flush
            ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref);
  return;
}




void FUN_18000e920(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018000e933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
              ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    return;
  }
  return;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_18000e940(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char param_2)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  lVar4 = *(longlong *)param_1;
  if (((*(int *)(param_1 + (longlong)*(int *)(lVar4 + 4) + 0x10) == 0) &&
      (this = *(basic_ostream<char,struct_std::char_traits<char>_> **)
               (param_1 + (longlong)*(int *)(lVar4 + 4) + 0x50),
      this != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0)) && (this != param_1)) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::flush(this);
    lVar4 = *(longlong *)param_1;
  }
  if (*(int *)(param_1 + (longlong)*(int *)(lVar4 + 4) + 0x10) == 0) {
    if (*(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) < 2) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) + -1;
    }
    lVar3 = *(longlong *)param_1;
    iVar6 = 4;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x18) & 0x1c0) == 0x40) {
LAB_18000ea41:
      iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x48),param_2);
      if (iVar2 == -1) {
        iVar5 = iVar6;
      }
      for (; (iVar5 == 0 && (0 < lVar4)); lVar4 = lVar4 + -1) {
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) {
          iVar5 = iVar6;
        }
      }
    }
    else {
      while (iVar5 == 0) {
        if (lVar4 < 1) {
          lVar3 = *(longlong *)param_1;
          goto LAB_18000ea41;
        }
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) {
          iVar5 = iVar6;
        }
        lVar4 = lVar4 + -1;
      }
    }
  }
  *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}




undefined8 *
FUN_18000eb20(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  char *pcVar8;
  undefined1 local_30 [24];
  
  FUN_180012160(param_1,param_2,param_3);
  *param_1 = CHFSPlusCatalog::vftable;
  plVar2 = (longlong *)FUN_180018ba0(0x18);
  plVar6 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_2;
    plVar2[1] = (longlong)param_1;
    if (param_2 == 0) {
      plVar6 = (longlong *)0x5000b00000005;
    }
    plVar2[2] = (longlong)plVar6;
    plVar6 = plVar2;
  }
  param_1[7] = plVar6;
  if (plVar6 == (longlong *)0x0) {
    param_1[3] = 0x5002400000004;
  }
  else {
    uVar1 = plVar6[2];
    param_1[3] = uVar1;
    if ((uVar1 & 0xff00000000000000) != 0) {
      pcVar8 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp";
      iVar7 = 0x40;
      lVar3 = 0x40;
      do {
        if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp"[lVar3] == '\\'
            ) || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp"[lVar3] ==
                  '/')) {
          pcVar8 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp" +
                   (iVar7 + 1);
          break;
        }
        iVar7 = iVar7 + -1;
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar5 = (undefined8 *)std::setbase((int)local_30);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,uVar1);
      if (pcVar8 != (char *)0x0) {
        pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar4,pcVar8);
      }
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar5 = (undefined8 *)std::setbase((int)local_30);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,0x26);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar4,"CHFSPlusCatalog::CHFSPlusCatalog");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    }
  }
  return param_1;
}




undefined8 FUN_18000ecf0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  short sVar5;
  short sVar6;
  
  if (*(uint *)(param_1 + 2) < *(uint *)(param_2 + 2)) {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 2) <= *(uint *)(param_2 + 2)) {
    sVar5 = *(short *)(param_2 + 6);
    sVar6 = *(short *)(param_1 + 6);
    puVar3 = (ushort *)(param_2 + 8);
    puVar4 = (ushort *)(param_1 + 8);
    while( true ) {
      uVar1 = 0;
      uVar2 = 0;
      while ((sVar6 != 0 && (uVar1 == 0))) {
        uVar1 = *puVar4;
        sVar6 = sVar6 + -1;
        puVar4 = puVar4 + 1;
        if (*(ushort *)(&DAT_180028040 + (ulonglong)(uVar1 >> 8) * 2) != 0) {
          uVar1 = *(ushort *)
                   (&DAT_180028040 +
                   ((ulonglong)(byte)uVar1 +
                   (ulonglong)*(ushort *)(&DAT_180028040 + (ulonglong)(uVar1 >> 8) * 2)) * 2);
        }
      }
      while ((sVar5 != 0 && (uVar2 == 0))) {
        uVar2 = *puVar3;
        sVar5 = sVar5 + -1;
        puVar3 = puVar3 + 1;
        if (*(ushort *)(&DAT_180028040 + (ulonglong)(uVar2 >> 8) * 2) != 0) {
          uVar2 = *(ushort *)
                   (&DAT_180028040 +
                   ((ulonglong)(byte)uVar2 +
                   (ulonglong)*(ushort *)(&DAT_180028040 + (ulonglong)(uVar2 >> 8) * 2)) * 2);
        }
      }
      if (uVar1 == 0x3a) {
        uVar1 = 0x2f;
      }
      if (uVar2 == 0x3a) {
        uVar2 = 0x2f;
      }
      if (uVar1 != uVar2) break;
      if (uVar1 == 0) {
        return 0;
      }
    }
    if (uVar2 <= uVar1) {
      return 1;
    }
    return 0xffffffff;
  }
  return 1;
}




undefined8 FUN_18000ee30(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (*(uint *)(param_2 + 2) <= *(uint *)(param_1 + 2)) {
    if (*(uint *)(param_2 + 2) < *(uint *)(param_1 + 2)) {
      return 1;
    }
    uVar1 = 0;
    uVar2 = 0;
    if (*(ushort *)(param_1 + 6) != 0) {
      do {
        if (*(ushort *)(param_2 + 6) <= uVar1) {
          return 1;
        }
        uVar2 = *(ushort *)(param_1 + 8 + (ulonglong)uVar1 * 2);
        uVar3 = *(ushort *)(param_2 + 8 + (ulonglong)uVar1 * 2);
        if (uVar2 == 0x3a) {
          uVar2 = 0x2f;
        }
        if (uVar3 == 0x3a) {
          uVar3 = 0x2f;
        }
        if (uVar2 < uVar3) {
          return 0xffffffff;
        }
        if (uVar2 >= uVar3 && uVar2 != uVar3) {
          return 1;
        }
        uVar1 = uVar1 + 1;
        uVar2 = uVar1;
      } while (uVar1 < *(ushort *)(param_1 + 6));
    }
    if (*(ushort *)(param_2 + 6) <= uVar2) {
      return 0;
    }
  }
  return 0xffffffff;
}




undefined8 FUN_18000eed0(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  short sVar6;
  short sVar7;
  
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x25) != -0x31) {
    uVar2 = FUN_18000ee30(param_2,param_3);
    return uVar2;
  }
  if (*(uint *)(param_3 + 2) <= *(uint *)(param_2 + 2)) {
    if (*(uint *)(param_3 + 2) < *(uint *)(param_2 + 2)) {
      return 1;
    }
    sVar6 = *(short *)(param_3 + 6);
    sVar7 = *(short *)(param_2 + 6);
    puVar4 = (ushort *)(param_3 + 8);
    puVar5 = (ushort *)(param_2 + 8);
    while( true ) {
      uVar1 = 0;
      uVar3 = 0;
      while ((sVar7 != 0 && (uVar1 == 0))) {
        uVar1 = *puVar5;
        sVar7 = sVar7 + -1;
        puVar5 = puVar5 + 1;
        if (*(ushort *)(&DAT_180028040 + (ulonglong)(uVar1 >> 8) * 2) != 0) {
          uVar1 = *(ushort *)
                   (&DAT_180028040 +
                   ((ulonglong)(byte)uVar1 +
                   (ulonglong)*(ushort *)(&DAT_180028040 + (ulonglong)(uVar1 >> 8) * 2)) * 2);
        }
      }
      while ((sVar6 != 0 && (uVar3 == 0))) {
        uVar3 = *puVar4;
        sVar6 = sVar6 + -1;
        puVar4 = puVar4 + 1;
        if (*(ushort *)(&DAT_180028040 + (ulonglong)(uVar3 >> 8) * 2) != 0) {
          uVar3 = *(ushort *)
                   (&DAT_180028040 +
                   ((ulonglong)(byte)uVar3 +
                   (ulonglong)*(ushort *)(&DAT_180028040 + (ulonglong)(uVar3 >> 8) * 2)) * 2);
        }
      }
      if (uVar1 == 0x3a) {
        uVar1 = 0x2f;
      }
      if (uVar3 == 0x3a) {
        uVar3 = 0x2f;
      }
      if (uVar1 != uVar3) break;
      if (uVar1 == 0) {
        return 0;
      }
    }
    if (uVar3 <= uVar1) {
      return 1;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}




undefined8 FUN_18000eef0(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  uVar1 = FUN_18000ef30(param_2,param_3,local_res8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return local_res8[0];
}




ulonglong FUN_18000ef30(ushort *param_1,ushort param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  longlong lVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined8 *puVar6;
  undefined1 *_Dst;
  undefined1 uVar7;
  int iVar8;
  size_t _Size;
  char *pcVar9;
  undefined2 *_Src;
  undefined2 local_res8;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    param_1[4] = 2;
    param_1[5] = 0;
    param_1[6] = 0x3b;
    param_1[7] = 5;
  }
  else if (param_2 < *(ushort *)(*(longlong *)(param_1 + 0x10) + 10)) {
    uVar1 = *(undefined2 *)
             ((ulonglong)(ushort)((*param_1 + param_2 * -2) - 2) + *(longlong *)(param_1 + 8));
    local_res8._1_1_ = (undefined1)((ushort)uVar1 >> 8);
    local_res8 = CONCAT11((char)uVar1,local_res8._1_1_);
    _Src = (undefined2 *)((ulonglong)local_res8 + *(longlong *)(param_1 + 8));
    if (_Src != (undefined2 *)0x0) {
      _Size = 0x206;
      _Dst = (undefined1 *)FUN_180018ba0(0x206);
      if (_Dst == (undefined1 *)0x0) {
        return 0x500af00000004;
      }
      local_res8._1_1_ = (undefined1)((ushort)*_Src >> 8);
      uVar3 = local_res8._1_1_;
      uVar7 = (undefined1)*_Src;
      local_res8 = CONCAT11(uVar7,local_res8._1_1_);
      if ((ushort)(local_res8 + 2) < 0x206) {
        local_res8 = CONCAT11(uVar7,uVar3);
        _Size = (size_t)(ushort)(local_res8 + 2);
      }
      if (((ushort)_Size <= *param_1) && ((ushort)_Size != 0)) {
        memcpy(_Dst,_Src,_Size);
        FUN_18000d540(_Dst);
        *param_3 = _Dst;
        return 0;
      }
      return 0x500b300000006;
    }
  }
  else {
    param_1[4] = 5;
    param_1[5] = 0;
    param_1[6] = 0x3c;
    param_1[7] = 5;
  }
  uVar2 = *(ulonglong *)(param_1 + 4);
  if ((uVar2 & 0xff00000000000000) != 0) {
    iVar8 = 0x40;
    pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp";
    lVar4 = 0x40;
    do {
      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp"[lVar4] == '\\')
         || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp"[lVar4] == '/')
         ) {
        pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp" +
                 (iVar8 + 1);
        break;
      }
      iVar8 = iVar8 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
    pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar6 = (undefined8 *)std::setbase((int)local_38);
    (*(code *)*puVar6)(pbVar5 + *(int *)(*(longlong *)pbVar5 + 4),*(undefined4 *)(puVar6 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,uVar2);
    if (pcVar9 != (char *)0x0) {
      pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar5,pcVar9);
    }
    pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar6 = (undefined8 *)std::setbase((int)local_28);
    (*(code *)*puVar6)(pbVar5 + *(int *)(*(longlong *)pbVar5 + 4),*(undefined4 *)(puVar6 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,0xac);
    pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFuction:");
    FUN_180001e50(pbVar5,"CHFSPlusCatalog::ReadKey");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
              ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
  }
  return uVar2;
}




void FUN_18000f1b0(undefined8 param_1,longlong param_2)

{
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar1;
  char *pcVar2;
  undefined1 auStack_138 [32];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_180028010 ^ (ulonglong)auStack_138;
  memset(local_118,0,0xff);
  pbVar1 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "ParentID:");
  pbVar1 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                     (pbVar1,*(uint *)(param_2 + 2));
  FUN_180001e50(pbVar1,"\tName:");
  if (*(ushort *)(param_2 + 6) == 0) {
    pcVar2 = "\t";
  }
  else {
    FUN_180009630((LPCWSTR)(param_2 + 8),(ulonglong)*(ushort *)(param_2 + 6) * 2,local_118,0xff);
    pcVar2 = local_118;
  }
  FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,pcVar2);
  std::basic_ostream<char,struct_std::char_traits<char>_>::flush
            ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_138);
  return;
}




undefined8 FUN_18000f290(longlong param_1,ushort *param_2,ushort param_3)

{
  ulonglong uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  uVar1 = FUN_18000f2d0(param_2,param_3,local_res8);
  *(ulonglong *)(param_1 + 0x18) = uVar1;
  return local_res8[0];
}




ulonglong FUN_18000f2d0(ushort *param_1,ushort param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  long lVar9;
  char *pcVar10;
  undefined2 *puVar11;
  undefined2 local_res8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *param_3 = 0;
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (lVar8 == 0) {
    uVar7 = *(ulonglong *)(param_1 + 4);
    if ((uVar7 & 0xff00000000000000) == 0) {
      return uVar7;
    }
    iVar3 = 0x40;
    pcVar10 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp";
    lVar8 = 0x40;
    do {
      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp"[lVar8] == '\\')
         || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp"[lVar8] == '/')
         ) {
        pcVar10 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp" +
                  (iVar3 + 1);
        break;
      }
      iVar3 = iVar3 + -1;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar5 = (undefined8 *)std::setbase((int)local_28);
    (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,uVar7);
    if (pcVar10 != (char *)0x0) {
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar4,pcVar10);
    }
    pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar5 = (undefined8 *)std::setbase((int)local_18);
    (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
    lVar9 = 0xec;
  }
  else {
    if (*(char *)(lVar8 + 8) != -1) {
      return 0x500ee00000006;
    }
    if (lVar8 == 0) {
      param_1[4] = 2;
      param_1[5] = 0;
      param_1[6] = 0x3b;
      param_1[7] = 5;
    }
    else if (param_2 < *(ushort *)(lVar8 + 10)) {
      uVar1 = *(undefined2 *)
               ((ulonglong)(ushort)((*param_1 + param_2 * -2) - 2) + *(longlong *)(param_1 + 8));
      local_res8._1_1_ = (undefined1)((ushort)uVar1 >> 8);
      local_res8 = CONCAT11((char)uVar1,local_res8._1_1_);
      puVar11 = (undefined2 *)((ulonglong)local_res8 + *(longlong *)(param_1 + 8));
      if (puVar11 != (undefined2 *)0x0) {
        local_res8._1_1_ = (undefined1)((ushort)*puVar11 >> 8);
        local_res8 = CONCAT11((char)*puVar11,local_res8._1_1_);
        local_res8 = local_res8 + 2;
        if ((*param_1 < local_res8) || (local_res8 == 0)) {
          return 0x500f500000006;
        }
        puVar5 = (undefined8 *)((ulonglong)local_res8 + (longlong)puVar11);
        local_res8._1_1_ = (undefined1)((ushort)*(undefined2 *)puVar5 >> 8);
        local_res8 = CONCAT11((char)*(undefined2 *)puVar5,local_res8._1_1_);
        if (local_res8 == 1) {
          puVar6 = (undefined8 *)thunk_FUN_180018ba0(0x58);
          if (puVar6 != (undefined8 *)0x0) {
            uVar2 = puVar5[1];
            *puVar6 = *puVar5;
            puVar6[1] = uVar2;
            uVar2 = puVar5[3];
            puVar6[2] = puVar5[2];
            puVar6[3] = uVar2;
            uVar2 = puVar5[5];
            puVar6[4] = puVar5[4];
            puVar6[5] = uVar2;
            uVar2 = puVar5[7];
            puVar6[6] = puVar5[6];
            puVar6[7] = uVar2;
            uVar2 = puVar5[9];
            puVar6[8] = puVar5[8];
            puVar6[9] = uVar2;
            puVar6[10] = puVar5[10];
            uVar7 = FUN_18000d600((undefined1 *)puVar6);
            *param_3 = puVar6;
            return uVar7;
          }
          return 0x500ff00000004;
        }
        if (local_res8 != 2) {
          if (local_res8 - 3 < 2) {
            return 0;
          }
          return 0x5012700000006;
        }
        puVar6 = (undefined8 *)thunk_FUN_180018ba0(0xf8);
        if (puVar6 == (undefined8 *)0x0) {
          return 0x5010c00000004;
        }
        uVar2 = puVar5[1];
        *puVar6 = *puVar5;
        puVar6[1] = uVar2;
        uVar2 = puVar5[3];
        puVar6[2] = puVar5[2];
        puVar6[3] = uVar2;
        uVar2 = puVar5[5];
        puVar6[4] = puVar5[4];
        puVar6[5] = uVar2;
        uVar2 = puVar5[7];
        puVar6[6] = puVar5[6];
        puVar6[7] = uVar2;
        uVar2 = puVar5[9];
        puVar6[8] = puVar5[8];
        puVar6[9] = uVar2;
        uVar2 = puVar5[0xb];
        puVar6[10] = puVar5[10];
        puVar6[0xb] = uVar2;
        uVar2 = puVar5[0xd];
        puVar6[0xc] = puVar5[0xc];
        puVar6[0xd] = uVar2;
        uVar2 = puVar5[0xf];
        puVar6[0xe] = puVar5[0xe];
        puVar6[0xf] = uVar2;
        uVar2 = puVar5[0x11];
        puVar6[0x10] = puVar5[0x10];
        puVar6[0x11] = uVar2;
        uVar2 = puVar5[0x13];
        puVar6[0x12] = puVar5[0x12];
        puVar6[0x13] = uVar2;
        uVar2 = puVar5[0x15];
        puVar6[0x14] = puVar5[0x14];
        puVar6[0x15] = uVar2;
        uVar2 = puVar5[0x17];
        puVar6[0x16] = puVar5[0x16];
        puVar6[0x17] = uVar2;
        uVar2 = puVar5[0x19];
        puVar6[0x18] = puVar5[0x18];
        puVar6[0x19] = uVar2;
        uVar2 = puVar5[0x1b];
        puVar6[0x1a] = puVar5[0x1a];
        puVar6[0x1b] = uVar2;
        uVar2 = puVar5[0x1d];
        puVar6[0x1c] = puVar5[0x1c];
        puVar6[0x1d] = uVar2;
        puVar6[0x1e] = puVar5[0x1e];
        uVar7 = FUN_18000d8e0((undefined1 *)puVar6);
        *param_3 = puVar6;
        return uVar7;
      }
    }
    else {
      param_1[4] = 5;
      param_1[5] = 0;
      param_1[6] = 0x3c;
      param_1[7] = 5;
    }
    uVar7 = *(ulonglong *)(param_1 + 4);
    if ((uVar7 & 0xff00000000000000) == 0) {
      return uVar7;
    }
    iVar3 = 0x40;
    pcVar10 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp";
    lVar8 = 0x40;
    do {
      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp"[lVar8] == '\\')
         || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp"[lVar8] == '/')
         ) {
        pcVar10 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfspluscatalog.cpp" +
                  (iVar3 + 1);
        break;
      }
      iVar3 = iVar3 + -1;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar5 = (undefined8 *)std::setbase((int)local_18);
    (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,uVar7);
    if (pcVar10 != (char *)0x0) {
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar4,pcVar10);
    }
    pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar5 = (undefined8 *)std::setbase((int)local_28);
    (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
    lVar9 = 0xf1;
  }
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,lVar9);
  pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "\tFuction:");
  FUN_180001e50(pbVar4,"CHFSPlusCatalog::ReadData");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
  return uVar7;
}




void FUN_18000f7b0(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  undefined1 auStack_138 [32];
  char local_118 [256];
  ulonglong local_18;
  
  if (param_2 != (ushort *)0x0) {
    local_18 = DAT_180028010 ^ (ulonglong)auStack_138;
    uVar1 = *param_2;
    if (uVar1 == 1) {
      FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"\tType:Folder"
                   );
      pbVar2 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFolderID:");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                (pbVar2,*(uint *)(param_2 + 4));
    }
    else if (uVar1 == 2) {
      FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"\tType:File");
      pbVar2 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFileID:");
      pbVar2 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                         (pbVar2,*(uint *)(param_2 + 4));
      pbVar2 = FUN_180001e50(pbVar2,"\tFileSize:");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                (pbVar2,*(__uint64 *)(param_2 + 0x2c));
    }
    else if ((2 < uVar1) && (uVar1 < 5)) {
      memset(local_118,0,0xff);
      pbVar2 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tParentID:");
      pbVar2 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                         (pbVar2,*(uint *)(param_2 + 2));
      FUN_180001e50(pbVar2,"\tName:");
      FUN_180009630((LPCWSTR)(param_2 + 5),(ulonglong)param_2[4] * 2,local_118,0xff);
      FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,local_118);
    }
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
              ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    __security_check_cookie(local_18 ^ (ulonglong)auStack_138);
  }
  return;
}




undefined8 *
FUN_18000f930(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  char *pcVar8;
  undefined1 local_30 [24];
  
  FUN_180012160(param_1,param_2,param_3);
  *param_1 = CHFSPlusExtents::vftable;
  plVar2 = (longlong *)FUN_180018ba0(0x18);
  plVar6 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_2;
    plVar2[1] = (longlong)param_1;
    if (param_2 == 0) {
      plVar6 = (longlong *)0x5000b00000005;
    }
    plVar2[2] = (longlong)plVar6;
    plVar6 = plVar2;
  }
  param_1[7] = plVar6;
  if (plVar6 == (longlong *)0x0) {
    param_1[3] = 0x5002000000004;
  }
  else {
    uVar1 = plVar6[2];
    param_1[3] = uVar1;
    if ((uVar1 & 0xff00000000000000) != 0) {
      pcVar8 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp";
      iVar7 = 0x40;
      lVar3 = 0x40;
      do {
        if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp"[lVar3] == '\\'
            ) || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp"[lVar3] ==
                  '/')) {
          pcVar8 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp" +
                   (iVar7 + 1);
          break;
        }
        iVar7 = iVar7 + -1;
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar5 = (undefined8 *)std::setbase((int)local_30);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,uVar1);
      if (pcVar8 != (char *)0x0) {
        pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar4,pcVar8);
      }
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar5 = (undefined8 *)std::setbase((int)local_30);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,0x22);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar4,"CHFSPlusExtents::CHFSPlusExtents");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    }
  }
  return param_1;
}




undefined8 FUN_18000fb00(undefined8 param_1,ushort *param_2,ushort *param_3)

{
  undefined8 uVar1;
  
  if ((byte)param_2[1] < (byte)param_3[1]) {
    return 0xffffffff;
  }
  if ((byte)param_2[1] <= (byte)param_3[1]) {
    if (*(uint *)(param_2 + 2) < *(uint *)(param_3 + 2)) {
      return 0xffffffff;
    }
    if (*(uint *)(param_2 + 2) <= *(uint *)(param_3 + 2)) {
      if (*(uint *)(param_2 + 4) < *(uint *)(param_3 + 4)) {
        return 0xffffffff;
      }
      if (*(uint *)(param_2 + 4) <= *(uint *)(param_3 + 4)) {
        if (*param_2 != *param_3) {
          uVar1 = 1;
          if (*param_2 < *param_3) {
            uVar1 = 0xffffffff;
          }
          return uVar1;
        }
        return 0;
      }
    }
  }
  return 1;
}




undefined8 FUN_18000fb60(ushort *param_1,ushort *param_2)

{
  if ((byte)param_1[1] < (byte)param_2[1]) {
    return 0xffffffff;
  }
  if ((byte)param_1[1] <= (byte)param_2[1]) {
    if (*(uint *)(param_1 + 2) < *(uint *)(param_2 + 2)) {
      return 0xffffffff;
    }
    if (*(uint *)(param_1 + 2) <= *(uint *)(param_2 + 2)) {
      if (*(uint *)(param_1 + 4) < *(uint *)(param_2 + 4)) {
        return 0xffffffff;
      }
      if (*(uint *)(param_1 + 4) <= *(uint *)(param_2 + 4)) {
        if (*param_1 == *param_2) {
          return 0;
        }
        if (*param_1 < *param_2) {
          return 0xffffffff;
        }
      }
    }
  }
  return 1;
}




undefined8 FUN_18000fba0(longlong param_1,short *param_2,ushort param_3)

{
  ulonglong uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  uVar1 = FUN_18000fbe0(param_2,param_3,local_res8);
  *(ulonglong *)(param_1 + 0x18) = uVar1;
  return local_res8[0];
}




ulonglong FUN_18000fbe0(short *param_1,ushort param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined2 local_res8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    param_1[4] = 2;
    param_1[5] = 0;
    param_1[6] = 0x3b;
    param_1[7] = 5;
  }
  else if (param_2 < *(ushort *)(*(longlong *)(param_1 + 0x10) + 10)) {
    uVar2 = *(undefined2 *)
             ((ulonglong)(ushort)((*param_1 + param_2 * -2) - 2) + *(longlong *)(param_1 + 8));
    local_res8._1_1_ = (undefined1)((ushort)uVar2 >> 8);
    local_res8 = CONCAT11((char)uVar2,local_res8._1_1_);
    puVar6 = (undefined8 *)((ulonglong)local_res8 + *(longlong *)(param_1 + 8));
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_180018ba0(0xc);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = *puVar6;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
        uVar1 = *(undefined1 *)puVar7;
        *(undefined1 *)puVar7 = *(undefined1 *)((longlong)puVar7 + 1);
        *(undefined1 *)((longlong)puVar7 + 1) = uVar1;
        uVar1 = *(undefined1 *)((longlong)puVar7 + 4);
        *(undefined1 *)((longlong)puVar7 + 4) = *(undefined1 *)((longlong)puVar7 + 7);
        *(undefined1 *)((longlong)puVar7 + 7) = uVar1;
        uVar1 = *(undefined1 *)((longlong)puVar7 + 5);
        *(undefined1 *)((longlong)puVar7 + 5) = *(undefined1 *)((longlong)puVar7 + 6);
        *(undefined1 *)((longlong)puVar7 + 6) = uVar1;
        uVar1 = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)(puVar7 + 1) = *(undefined1 *)((longlong)puVar7 + 0xb);
        *(undefined1 *)((longlong)puVar7 + 0xb) = uVar1;
        uVar1 = *(undefined1 *)((longlong)puVar7 + 9);
        *(undefined1 *)((longlong)puVar7 + 9) = *(undefined1 *)((longlong)puVar7 + 10);
        *(undefined1 *)((longlong)puVar7 + 10) = uVar1;
        *param_3 = puVar7;
        return 0;
      }
      return 0x5007200000004;
    }
  }
  else {
    param_1[4] = 5;
    param_1[5] = 0;
    param_1[6] = 0x3c;
    param_1[7] = 5;
  }
  uVar3 = *(ulonglong *)(param_1 + 4);
  if ((uVar3 & 0xff00000000000000) != 0) {
    iVar8 = 0x40;
    pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp";
    lVar4 = 0x40;
    do {
      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp"[lVar4] == '\\')
         || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp"[lVar4] == '/')
         ) {
        pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp" +
                 (iVar8 + 1);
        break;
      }
      iVar8 = iVar8 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
    pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar6 = (undefined8 *)std::setbase((int)local_28);
    (*(code *)*puVar6)(pbVar5 + *(int *)(*(longlong *)pbVar5 + 4),*(undefined4 *)(puVar6 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,uVar3);
    if (pcVar9 != (char *)0x0) {
      pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar5,pcVar9);
    }
    pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar6 = (undefined8 *)std::setbase((int)local_18);
    (*(code *)*puVar6)(pbVar5 + *(int *)(*(longlong *)pbVar5 + 4),*(undefined4 *)(puVar6 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,0x6f);
    pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFuction:");
    FUN_180001e50(pbVar5,"CHFSPlusExtents::ReadKey");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
              ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
  }
  return uVar3;
}




undefined8 FUN_18000fe50(longlong param_1,short *param_2,ushort param_3)

{
  ulonglong uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  uVar1 = FUN_18000fe90(param_2,param_3,local_res8);
  *(ulonglong *)(param_1 + 0x18) = uVar1;
  return local_res8[0];
}




ulonglong FUN_18000fe90(short *param_1,ushort param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined8 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined2 local_res8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *param_3 = 0;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    return 0x5009000000501;
  }
  if (*(char *)(lVar3 + 8) != -1) {
    return 0x5009200000501;
  }
  if (lVar3 == 0) {
    param_1[4] = 2;
    param_1[5] = 0;
    param_1[6] = 0x3b;
    param_1[7] = 5;
  }
  else if (param_2 < *(ushort *)(lVar3 + 10)) {
    uVar1 = *(undefined2 *)
             ((ulonglong)(ushort)((*param_1 + param_2 * -2) - 2) + *(longlong *)(param_1 + 8));
    local_res8._1_1_ = (undefined1)((ushort)uVar1 >> 8);
    local_res8 = CONCAT11((char)uVar1,local_res8._1_1_);
    lVar3 = (ulonglong)local_res8 + *(longlong *)(param_1 + 8);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)thunk_FUN_180018ba0(0x40);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = *(undefined8 *)(lVar3 + 0xc);
        puVar5[1] = *(undefined8 *)(lVar3 + 0x14);
        puVar5[2] = *(undefined8 *)(lVar3 + 0x1c);
        puVar5[3] = *(undefined8 *)(lVar3 + 0x24);
        puVar5[4] = *(undefined8 *)(lVar3 + 0x2c);
        puVar5[5] = *(undefined8 *)(lVar3 + 0x34);
        puVar5[6] = *(undefined8 *)(lVar3 + 0x3c);
        puVar5[7] = *(undefined8 *)(lVar3 + 0x44);
        FUN_18000cd50((undefined1 *)puVar5);
        *param_3 = puVar5;
        return 0;
      }
      return 0x5009800000004;
    }
  }
  else {
    param_1[4] = 5;
    param_1[5] = 0;
    param_1[6] = 0x3c;
    param_1[7] = 5;
  }
  uVar2 = *(ulonglong *)(param_1 + 4);
  if ((uVar2 & 0xff00000000000000) != 0) {
    iVar6 = 0x40;
    pcVar7 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp";
    lVar3 = 0x40;
    do {
      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp"[lVar3] == '\\')
         || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp"[lVar3] == '/')
         ) {
        pcVar7 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusextents.cpp" +
                 (iVar6 + 1);
        break;
      }
      iVar6 = iVar6 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
    pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar5 = (undefined8 *)std::setbase((int)local_28);
    (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,uVar2);
    if (pcVar7 != (char *)0x0) {
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar4,pcVar7);
    }
    pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar5 = (undefined8 *)std::setbase((int)local_18);
    (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,0x95);
    pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFuction:");
    FUN_180001e50(pbVar4,"CHFSPlusExtents::ReadData");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
              ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
  }
  return uVar2;
}




ushort * FUN_180010110(ushort *param_1,longlong param_2,ushort param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *param_1 = param_3;
  param_1[4] = 2;
  param_1[5] = 0;
  param_1[6] = 9;
  param_1[7] = 5;
  *(longlong *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  iVar2 = FUN_180010720(param_2,param_3);
  if (iVar2 == 0) {
    param_1[4] = 6;
    param_1[5] = 0;
    param_1[6] = 0xc;
    param_1[7] = 5;
    return param_1;
  }
  puVar3 = (undefined8 *)FUN_180018ba0(0xe);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    param_1[4] = 4;
    param_1[5] = 0;
    param_1[6] = 0xf;
    param_1[7] = 5;
    return param_1;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar3 = *puVar1;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined2 *)((longlong)puVar3 + 0xc) = *(undefined2 *)((longlong)puVar1 + 0xc);
  FUN_18000d360(*(undefined1 **)(param_1 + 0x10));
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}




void FUN_1800101d0(undefined2 *param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    free(*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (*(void **)(param_1 + 8) != (void *)0x0)) {
    free(*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0x5002300000002;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}




longlong FUN_180010230(short *param_1,ushort param_2,short *param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined2 local_res8;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    param_1[4] = 2;
    param_1[5] = 0;
    param_1[6] = 0x3b;
    param_1[7] = 5;
    return 0;
  }
  if (*(ushort *)(*(longlong *)(param_1 + 0x10) + 10) <= param_2) {
    param_1[4] = 5;
    param_1[5] = 0;
    param_1[6] = 0x3c;
    param_1[7] = 5;
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  uVar4 = (ulonglong)(ushort)((*param_1 + param_2 * -2) - 2);
  uVar1 = *(undefined2 *)(uVar4 + lVar2);
  local_res8._1_1_ = (undefined1)((ushort)uVar1 >> 8);
  local_res8 = CONCAT11((char)uVar1,local_res8._1_1_);
  uVar3 = local_res8;
  uVar5 = (ulonglong)local_res8;
  if (param_3 != (short *)0x0) {
    uVar1 = *(undefined2 *)((uVar4 - 2) + lVar2);
    local_res8._1_1_ = (undefined1)((ushort)uVar1 >> 8);
    local_res8 = CONCAT11((char)uVar1,local_res8._1_1_);
    *param_3 = local_res8 - uVar3;
  }
  return lVar2 + uVar5;
}




void FUN_1800102d0(ushort *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  short *psVar6;
  longlong lVar7;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar8;
  undefined8 *puVar9;
  ushort uVar10;
  int iVar11;
  undefined2 *puVar12;
  ushort uVar13;
  short sVar14;
  char *pcVar15;
  size_t _Size;
  ulonglong uVar16;
  ushort uVar17;
  ushort uVar18;
  undefined1 auStack_298 [32];
  undefined2 local_278;
  undefined1 local_270 [16];
  undefined1 local_260 [24];
  undefined2 local_248;
  undefined1 local_244;
  undefined1 local_243;
  undefined1 local_242;
  undefined1 local_241;
  undefined2 local_240;
  undefined2 local_23e;
  ulonglong local_38;
  
  local_38 = DAT_180028010 ^ (ulonglong)auStack_298;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 == 0) {
    param_1[4] = 2;
    param_1[5] = 0;
    param_1[6] = 0x95;
    param_1[7] = 5;
  }
  else {
    uVar17 = *(ushort *)(lVar7 + 10);
    uVar18 = 0;
    if (uVar17 != 0) {
      do {
        if (*(ushort *)(lVar7 + 10) <= uVar18) {
          param_1[4] = 5;
          param_1[5] = 0;
          param_1[6] = 0x3c;
          param_1[7] = 5;
LAB_1800105b0:
          uVar16 = *(ulonglong *)(param_1 + 4);
          if ((uVar16 & 0xff00000000000000) == 0) goto LAB_1800106dd;
          iVar11 = 0x3f;
          pcVar15 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtnode.cpp";
          lVar7 = 0x3f;
          goto LAB_1800105d5;
        }
        puVar12 = (undefined2 *)
                  ((ulonglong)(ushort)((*param_1 + uVar18 * -2) - 2) + *(longlong *)(param_1 + 8));
        uVar1 = *puVar12;
        local_278._1_1_ = (undefined1)((ushort)uVar1 >> 8);
        uVar2 = puVar12[-1];
        uVar10 = CONCAT11((char)uVar1,local_278._1_1_);
        local_278._1_1_ = (undefined1)((ushort)uVar2 >> 8);
        local_278 = CONCAT11((char)uVar2,local_278._1_1_);
        uVar13 = local_278 - uVar10;
        puVar12 = (undefined2 *)((ulonglong)uVar10 + *(longlong *)(param_1 + 8));
        if (puVar12 == (undefined2 *)0x0) goto LAB_1800105b0;
        local_278._1_1_ = (undefined1)((ushort)*puVar12 >> 8);
        local_278 = CONCAT11((char)*puVar12,local_278._1_1_);
        uVar10 = local_278 + 2;
        if (((*param_1 <= uVar10) || (0x3ff < uVar10)) || (0x3ff < uVar13)) break;
        sVar14 = uVar13 - uVar10;
        local_278._1_1_ =
             (undefined1)((ushort)*(undefined2 *)((ulonglong)uVar10 + (longlong)puVar12) >> 8);
        local_278 = CONCAT11((char)*(undefined2 *)((ulonglong)uVar10 + (longlong)puVar12),
                             local_278._1_1_);
        memset(&local_248,0,0x208);
        if (9 < sVar14) {
          _Size = 0x208;
          if ((ulonglong)(longlong)sVar14 < 0x208) {
            _Size = (longlong)sVar14;
          }
          memcpy(&local_248,(void *)((ulonglong)uVar10 + (longlong)puVar12),_Size);
          uVar5 = local_241;
          uVar4 = local_242;
          local_248 = CONCAT11((char)local_248,local_248._1_1_);
          local_241 = local_244;
          local_244 = uVar5;
          local_242 = local_243;
          local_243 = uVar4;
          local_240 = CONCAT11((undefined1)local_240,local_240._1_1_);
          if (local_240 < 0xfe) {
            uVar10 = local_240;
            if (local_240 != 0) goto LAB_1800104be;
          }
          else {
            uVar10 = 0xfe;
LAB_1800104be:
            psVar6 = &local_23e;
            uVar16 = (ulonglong)uVar10;
            do {
              sVar3 = *psVar6;
              *(undefined1 *)psVar6 = *(undefined1 *)((longlong)psVar6 + 1);
              *(char *)((longlong)psVar6 + 1) = (char)sVar3;
              if (*psVar6 == 0x2f) {
                *psVar6 = 0x3a;
              }
              psVar6 = psVar6 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            uVar17 = *(ushort *)(lVar7 + 10);
          }
          if (((ushort)(local_248 - 3U) < 2) && ((ushort)((local_240 + 5) * 2) == sVar14)) break;
        }
        if (sVar14 == 0x58) {
          if (local_278 == 1) break;
        }
        else if ((sVar14 == 0xf8) && (local_278 == 2)) break;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar17);
    }
  }
  goto LAB_180010701;
  while( true ) {
    iVar11 = iVar11 + -1;
    lVar7 = lVar7 + -1;
    if (lVar7 < 0) break;
LAB_1800105d5:
    if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtnode.cpp"[lVar7] == '\\') ||
       ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtnode.cpp"[lVar7] == '/')) {
      pcVar15 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtnode.cpp" +
                (iVar11 + 1);
      break;
    }
  }
  pbVar8 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "Return Error:0x");
  puVar9 = (undefined8 *)std::setbase((int)local_270);
  (*(code *)*puVar9)(pbVar8 + *(int *)(*(longlong *)pbVar8 + 4),*(undefined4 *)(puVar9 + 1));
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar8,uVar16);
  if (pcVar15 != (char *)0x0) {
    pbVar8 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFile:");
    FUN_180001e50(pbVar8,pcVar15);
  }
  pbVar8 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"\tLine:")
  ;
  puVar9 = (undefined8 *)std::setbase((int)local_260);
  (*(code *)*puVar9)(pbVar8 + *(int *)(*(longlong *)pbVar8 + 4),*(undefined4 *)(puVar9 + 1));
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar8,0x9a);
  pbVar8 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "\tFuction:");
  FUN_180001e50(pbVar8,"CHFSPlusBTNode::TestNodeBelongToFile");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
LAB_1800106dd:
  *(ulonglong *)(param_1 + 4) = uVar16;
LAB_180010701:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_298);
  return;
}




void FUN_180010720(longlong param_1,ushort param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  uint uVar9;
  bool bVar10;
  undefined2 local_28;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180028010 ^ (ulonglong)&local_28;
  uVar4 = local_18;
  if (((param_1 == 0) || (param_2 < 0x200)) || ((param_2 & 0x1ff) != 0)) goto LAB_18001082f;
  uVar2 = *(undefined4 *)(param_1 + 8);
  local_18._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
  uVar3 = local_18._2_1_;
  local_18._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
  local_18 = CONCAT13(uVar3,CONCAT12(local_18._3_1_,(short)uVar2));
  uVar4 = local_18;
  local_18._0_1_ = (char)uVar2;
  if (3 < (byte)((char)local_18 + 1U)) goto LAB_18001082f;
  local_18._1_1_ = (char)((uint)uVar2 >> 8);
  if ((char)local_18 == '\x01') {
    bVar10 = local_18._1_1_ == '\0';
LAB_18001079e:
    if (!bVar10) goto LAB_18001082f;
  }
  else if ((char)local_18 == -1) {
    bVar10 = local_18._1_1_ == '\x01';
    goto LAB_18001079e;
  }
  uVar1 = *(undefined2 *)(((ulonglong)param_2 - 2) + param_1);
  local_28._1_1_ = (undefined1)((ushort)uVar1 >> 8);
  local_28 = CONCAT11((char)uVar1,local_28._1_1_);
  if (local_28 == 0xe) {
    uVar7 = 2;
    uVar9 = (uVar4 >> 0x10) + 1;
    uVar8 = 0xe;
    if (1 < uVar9) {
      do {
        uVar5 = (ulonglong)param_2 + uVar7 * -2;
        uVar1 = *(undefined2 *)(uVar5 + param_1);
        local_28._1_1_ = (undefined1)((ushort)uVar1 >> 8);
        local_28 = CONCAT11((char)uVar1,local_28._1_1_);
        if ((uVar5 < local_28) || (local_28 <= uVar8)) break;
        uVar6 = (short)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar8 = local_28;
      } while (uVar6 <= uVar9);
    }
  }
LAB_18001082f:
  local_18 = uVar4;
  __security_check_cookie(local_10 ^ (ulonglong)&local_28);
  return;
}




void FUN_180010850(undefined8 *param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStackY_98 [32];
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_180028010 ^ (ulonglong)auStackY_98;
  puVar7 = (undefined4 *)0x0;
  *param_1 = CHFSPlusRawfile::vftable;
  param_1[2] = 0x5000900000002;
  local_68 = (void *)0x0;
  param_1[1] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  if (param_2 == 0) {
    param_1[2] = 0x5001100000005;
  }
  else {
    iVar6 = *(int *)(param_4 + 0xc);
    local_68 = (void *)(param_4 + 0x10);
    puVar1 = puVar7;
    puVar2 = puVar7;
    puVar8 = puVar7;
    do {
      while( true ) {
        if (iVar6 == 0) {
          param_1[2] = 0;
          goto LAB_180010a03;
        }
        if (puVar2 == (undefined4 *)0x8) break;
        puVar4 = (undefined4 *)FUN_180018ba0(0x10);
        if (puVar4 == (undefined4 *)0x0) {
          param_1[2] = 0x5003100000004;
          goto LAB_180010a03;
        }
        *puVar4 = *(undefined4 *)((longlong)local_68 + (longlong)puVar2 * 8);
        iVar5 = *(int *)((longlong)local_68 + (longlong)puVar2 * 8 + 4);
        puVar8 = (undefined4 *)(ulonglong)(uint)((int)puVar8 + iVar5);
        iVar6 = iVar6 - iVar5;
        puVar4[1] = iVar5;
        *(undefined8 *)(puVar4 + 2) = 0;
        if (puVar1 == (undefined4 *)0x0) {
          param_1[1] = puVar4;
          puVar1 = puVar4;
          puVar2 = (undefined4 *)((longlong)puVar2 + 1);
        }
        else {
          *(undefined4 **)(puVar1 + 2) = puVar4;
          puVar1 = puVar4;
          puVar2 = (undefined4 *)((longlong)puVar2 + 1);
        }
      }
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      iVar5 = *(int *)(param_1 + 4);
      if (iVar5 == 3) {
        param_1[2] = 0x5001d00000006;
        goto LAB_180010a03;
      }
      if ((local_68 != (void *)(param_4 + 0x10)) && (local_68 != (void *)0x0)) {
        free(local_68);
        iVar5 = *(int *)(param_1 + 4);
        local_68 = (void *)0x0;
      }
      local_58 = CONCAT44(iVar5,(undefined4)local_58);
      local_58 = CONCAT53(local_58._3_5_,10);
      local_50 = (int)puVar8;
      uVar3 = FUN_18000c3a0(param_1[3],3,&local_58,(int *)&local_60,(longlong *)&local_68);
      param_1[2] = uVar3;
      puVar2 = puVar7;
    } while (local_60._6_2_ != 0);
    param_1[2] = 0x5002a00000006;
  }
LAB_180010a03:
  if (local_68 != (void *)(param_4 + 0x10)) {
    free(local_68);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_98);
  return;
}




undefined8 * FUN_180010a90(undefined8 *param_1,uint param_2)

{
  FUN_180010ad0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180010ad0(undefined8 *param_1)

{
  void *_Memory;
  
  *param_1 = CHFSPlusRawfile::vftable;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  if (param_1[1] != 0) {
    do {
      _Memory = (void *)param_1[1];
      param_1[1] = *(undefined8 *)((longlong)_Memory + 8);
      free(_Memory);
    } while (param_1[1] != 0);
    param_1[2] = 0x5005e00000002;
    return;
  }
  param_1[2] = 0x5005e00000002;
  return;
}




longlong FUN_180010b40(longlong param_1,ulonglong param_2,void *param_3,__uint64 param_4)

{
  longlong lVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar12;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  longlong lVar11;
  
  lVar11 = 0;
  lVar10 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
  if (lVar1 == 0) {
    uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    lVar10 = lVar11;
    if ((uVar9 & 0xff00000000000000) != 0) {
      iVar5 = 0x40;
      pcVar8 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusrawfile.cpp";
      lVar1 = 0x40;
      do {
        if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusrawfile.cpp"[lVar1] == '\\'
            ) || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusrawfile.cpp"[lVar1] ==
                  '/')) {
          pcVar8 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusrawfile.cpp" +
                   (iVar5 + 1);
          break;
        }
        iVar5 = iVar5 + -1;
        lVar1 = lVar1 + -1;
      } while (-1 < lVar1);
      pbVar2 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar3 = (undefined8 *)std::setbase((int)local_48);
      (*(code *)*puVar3)(pbVar2 + *(int *)(*(longlong *)pbVar2 + 4),*(undefined4 *)(puVar3 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar2,uVar9);
      if (pcVar8 != (char *)0x0) {
        pbVar2 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar2,pcVar8);
      }
      pbVar2 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar3 = (undefined8 *)std::setbase((int)local_38);
      (*(code *)*puVar3)(pbVar2 + *(int *)(*(longlong *)pbVar2 + 4),*(undefined4 *)(puVar3 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar2,0x6a);
      pbVar2 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar2,"CHFSPlusRawfile::Read");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    }
  }
  else {
    puVar7 = *(uint **)(param_1 + 8);
    if (puVar7 == (uint *)0x0) {
      uVar9 = 0x5006c00000002;
      lVar10 = lVar11;
    }
    else {
      uVar12 = (ulonglong)*(uint *)(lVar1 + 0x28);
      uVar4 = puVar7[1] * uVar12;
      uVar9 = param_2;
      uVar6 = uVar4;
      if (uVar4 < param_2 || uVar4 - param_2 == 0) {
        do {
          puVar7 = *(uint **)(puVar7 + 2);
          uVar9 = uVar9 - uVar4;
          if (puVar7 == (uint *)0x0) {
            uVar9 = 0x5007700000006;
            goto LAB_180010d98;
          }
          uVar4 = puVar7[1] * uVar12;
          uVar6 = uVar6 + uVar4;
        } while (uVar6 <= param_2);
      }
      lVar10 = lVar11;
      if (param_4 == 0) {
        return 0;
      }
      while( true ) {
        uVar6 = puVar7[1] * uVar12 - uVar9;
        uVar9 = *puVar7 * uVar12 + uVar9;
        if (param_4 <= uVar6) break;
        uVar9 = FUN_18000c480(*(int **)(param_1 + 0x18),uVar9,param_3,uVar6);
        if (uVar9 != uVar6) {
          uVar9 = 0x500840000000e;
          goto LAB_180010d98;
        }
        puVar7 = *(uint **)(puVar7 + 2);
        lVar10 = lVar10 + uVar6;
        param_4 = param_4 - uVar6;
        param_3 = (void *)((longlong)param_3 + uVar6);
        if (puVar7 == (uint *)0x0) {
          uVar9 = 0x5008900000006;
          goto LAB_180010d98;
        }
        uVar9 = 0;
        if (param_4 == 0) {
          return lVar10;
        }
      }
      uVar9 = FUN_18000c480(*(int **)(param_1 + 0x18),uVar9,param_3,param_4);
      if (uVar9 == param_4) {
        return lVar10 + param_4;
      }
      uVar9 = 0x5008e0000000e;
    }
  }
LAB_180010d98:
  *(ulonglong *)(param_1 + 0x10) = uVar9;
  pbVar2 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"Location"
                        );
  pbVar2 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar2,param_2);
  pbVar2 = FUN_180001e50(pbVar2,"Size");
  pbVar2 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar2,param_4);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar2,FUN_180002030);
  return lVar10;
}




undefined8 * FUN_180010e10(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  puVar9 = (undefined8 *)0x0;
  *param_1 = param_2;
  param_1[1] = 0x5001300000002;
  param_1[2] = 0;
  puVar8 = (undefined8 *)0x0;
  param_1[3] = 0;
  puVar5 = puVar9;
  if (param_2 == (int *)0x0) {
    puVar6 = puVar9;
    puVar10 = (undefined8 *)0x5001a00000005;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 6);
    puVar6 = puVar8;
    if (lVar3 == 0) {
      puVar10 = *(undefined8 **)(param_2 + 4);
      puVar6 = puVar9;
      if (((ulonglong)puVar10 & 0xff00000000000000) != 0) {
        iVar7 = 0x40;
        pcVar11 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusjournal.cpp";
        lVar3 = 0x40;
        do {
          if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusjournal.cpp"[lVar3] ==
               '\\') ||
             ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusjournal.cpp"[lVar3] == '/'
             )) {
            pcVar11 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusjournal.cpp" +
                      (iVar7 + 1);
            break;
          }
          iVar7 = iVar7 + -1;
          lVar3 = lVar3 + -1;
        } while (-1 < lVar3);
        pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "Return Error:0x");
        puVar5 = (undefined8 *)std::setbase((int)local_38);
        (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,(__int64)puVar10)
        ;
        if (pcVar11 != (char *)0x0) {
          pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                 "\tFile:");
          FUN_180001e50(pbVar4,pcVar11);
        }
        pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tLine:");
        puVar5 = (undefined8 *)std::setbase((int)local_28);
        (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,0x1d);
        pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFuction:");
        FUN_180001e50(pbVar4,"CHFSPlusJournal::CHFSPlusJournal");
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                  ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
        puVar6 = puVar8;
        puVar5 = (undefined8 *)0x0;
      }
    }
    else if ((*(uint *)(lVar3 + 4) & 0x2000) == 0) {
      puVar10 = (undefined8 *)0x5001f00000501;
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)thunk_FUN_180018ba0((longlong)*param_2);
      if (puVar5 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x5002200000004;
      }
      else {
        lVar3 = FUN_18000c480((int *)*param_1,
                              (ulonglong)*(uint *)(lVar3 + 0x28) * (ulonglong)*(uint *)(lVar3 + 0xc)
                              ,puVar5,(longlong)*param_2);
        if (lVar3 == *param_2) {
          puVar8 = (undefined8 *)FUN_180018ba0(0xb4);
          param_1[2] = puVar8;
          if (puVar8 == (undefined8 *)0x0) {
            puVar10 = (undefined8 *)0x5002800000004;
          }
          else {
            uVar2 = puVar5[1];
            *puVar8 = *puVar5;
            puVar8[1] = uVar2;
            uVar2 = puVar5[3];
            puVar8[2] = puVar5[2];
            puVar8[3] = uVar2;
            uVar2 = puVar5[5];
            puVar8[4] = puVar5[4];
            puVar8[5] = uVar2;
            uVar2 = puVar5[7];
            puVar8[6] = puVar5[6];
            puVar8[7] = uVar2;
            uVar2 = puVar5[9];
            puVar8[8] = puVar5[8];
            puVar8[9] = uVar2;
            uVar2 = puVar5[0xb];
            puVar8[10] = puVar5[10];
            puVar8[0xb] = uVar2;
            uVar2 = puVar5[0xd];
            puVar8[0xc] = puVar5[0xc];
            puVar8[0xd] = uVar2;
            uVar2 = puVar5[0xf];
            puVar8[0xe] = puVar5[0xe];
            puVar8[0xf] = uVar2;
            uVar2 = puVar5[0x11];
            puVar8[0x10] = puVar5[0x10];
            puVar8[0x11] = uVar2;
            uVar2 = puVar5[0x13];
            puVar8[0x12] = puVar5[0x12];
            puVar8[0x13] = uVar2;
            uVar2 = puVar5[0x15];
            puVar8[0x14] = puVar5[0x14];
            puVar8[0x15] = uVar2;
            *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(puVar5 + 0x16);
            FUN_18000db70((undefined1 *)param_1[2]);
            free(puVar5);
            puVar5 = (undefined8 *)0x0;
            if ((*(byte *)param_1[2] & 1) == 0) {
              puVar10 = (undefined8 *)0x5003100000501;
            }
            else {
              puVar6 = (undefined8 *)operator_new((longlong)*param_2);
              if (puVar6 == (undefined8 *)0x0) {
                puVar10 = (undefined8 *)0x5003500000004;
              }
              else {
                lVar3 = FUN_18000c480((int *)*param_1,*(ulonglong *)(param_1[2] + 0x24),puVar6,
                                      (longlong)*param_2);
                if (lVar3 == *param_2) {
                  puVar8 = (undefined8 *)FUN_180018ba0(0x2c);
                  param_1[3] = puVar8;
                  if (puVar8 == (undefined8 *)0x0) {
                    puVar10 = (undefined8 *)0x5003b00000004;
                  }
                  else {
                    uVar2 = puVar6[1];
                    *puVar8 = *puVar6;
                    puVar8[1] = uVar2;
                    uVar2 = puVar6[3];
                    puVar8[2] = puVar6[2];
                    puVar8[3] = uVar2;
                    puVar8[4] = puVar6[4];
                    *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar6 + 5);
                    free(puVar6);
                    piVar1 = (int *)param_1[3];
                    puVar6 = (undefined8 *)0x0;
                    if (*piVar1 == 0x4a4e4c78) {
                      if (piVar1[1] == 0x12345678) {
                        puVar10 = puVar9;
                        if (*(longlong *)(piVar1 + 6) != *(longlong *)(param_1[2] + 0x2c)) {
                          puVar10 = (undefined8 *)0x5004200000501;
                        }
                      }
                      else {
                        puVar10 = (undefined8 *)0x5004100000501;
                      }
                    }
                    else {
                      puVar10 = (undefined8 *)0x5004000000501;
                    }
                  }
                }
                else {
                  puVar10 = (undefined8 *)0x5003800000501;
                }
              }
            }
          }
        }
        else {
          puVar10 = (undefined8 *)0x500250000000e;
        }
      }
    }
  }
  param_1[1] = puVar10;
  if (puVar5 != (undefined8 *)0x0) {
    free(puVar5);
  }
  if (puVar6 != (undefined8 *)0x0) {
    free(puVar6);
  }
  return param_1;
}




longlong FUN_180011220(undefined8 *param_1,ulonglong param_2,void *param_3,__uint64 param_4)

{
  ulonglong uVar1;
  __uint64 _Var2;
  __uint64 _Var3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1[2];
  lVar5 = 0;
  if (lVar4 != 0) {
    uVar1 = *(ulonglong *)(lVar4 + 0x2c);
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar1 <= param_2) {
        param_2 = param_2 % uVar1;
      }
      if (param_4 != 0) {
        do {
          _Var3 = *(longlong *)(lVar4 + 0x2c) - param_2;
          if (param_2 + param_4 <= *(ulonglong *)(lVar4 + 0x2c)) {
            _Var3 = param_4;
          }
          if (_Var3 == 0) {
            return lVar5;
          }
          _Var2 = FUN_18000c480((int *)*param_1,*(longlong *)(lVar4 + 0x24) + param_2,param_3,_Var3)
          ;
          if (_Var2 != _Var3) {
            return lVar5;
          }
          lVar4 = param_1[2];
          lVar5 = lVar5 + _Var2;
          param_2 = param_2 + _Var2;
          uVar1 = *(ulonglong *)(lVar4 + 0x2c);
          if ((uVar1 != 0) && (uVar1 <= param_2)) {
            param_2 = param_2 % uVar1;
          }
          param_3 = (void *)((longlong)param_3 + _Var2);
          param_4 = param_4 - _Var2;
        } while (param_4 != 0);
      }
    }
  }
  return lVar5;
}




longlong FUN_180011300(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Memory;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  void *pvVar15;
  undefined8 uVar16;
  longlong lVar17;
  __uint64 _Var18;
  longlong *plVar19;
  char *pcVar20;
  void *pvVar21;
  ushort *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  ushort *puVar25;
  int local_124;
  void *local_118;
  ushort *local_110;
  ushort local_108;
  __uint64 local_100;
  ushort local_f8 [4];
  ulonglong local_f0;
  void *local_e8;
  int local_e0;
  void *local_d8;
  ushort *local_d0;
  ushort *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ushort *local_b0;
  void *local_a8;
  void *local_a0;
  ushort *local_98;
  void *local_90;
  ushort *local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58 [3];
  
  local_70 = 0xfffffffffffffffe;
  lVar17 = param_1[3];
  if (lVar17 == 0) {
    param_1[1] = 0;
    return 0;
  }
  uVar2 = *(uint *)(lVar17 + 0x28);
  if (*(uint *)(lVar17 + 0x28) <= *(uint *)(lVar17 + 0x20)) {
    uVar2 = *(uint *)(lVar17 + 0x20);
  }
  local_c8 = (ushort *)thunk_FUN_180018ba0((ulonglong)uVar2);
  if (local_c8 == (ushort *)0x0) {
    param_1[1] = 0x5008000000004;
    return 0x5008000000004;
  }
  _Var18 = *(__uint64 *)(param_1[3] + 0x10);
  local_100 = _Var18;
  pbVar12 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                          "Journal Start Offset:0x");
  puVar13 = (undefined8 *)std::setbase((int)&local_b0);
  (*(code *)*puVar13)(pbVar12 + *(int *)(*(longlong *)pbVar12 + 4),*(undefined4 *)(puVar13 + 1));
  pbVar12 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar12,_Var18);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar12,FUN_180002030);
  _Var18 = local_100;
  if (param_2 != (longlong *)0x0) {
    FUN_1800094c0(param_2);
    _Var18 = local_100;
  }
  while( true ) {
    local_124 = 1;
    if ((param_2 != (longlong *)0x0) && ((longlong *)*param_2 != (longlong *)0x0)) {
      local_124 = (**(code **)(*(longlong *)*param_2 + 0x10))();
      cVar9 = (**(code **)(*(longlong *)*param_2 + 0x88))();
      if (cVar9 != '\0') {
        local_124 = 0;
      }
    }
    uVar14 = FUN_180011220(param_1,_Var18,local_c8,(ulonglong)*(uint *)(param_1[3] + 0x28));
    uVar2 = *(uint *)(param_1[3] + 0x28);
    if (uVar2 == 0) break;
    if (uVar14 != uVar2) {
      lVar17 = 0x5008c00000501;
      goto LAB_1800120b2;
    }
    uVar3 = *(uint *)(param_1[3] + 0x20);
    if ((uint)*local_c8 == (uVar3 >> 4) - 1) {
      uVar14 = FUN_180011220(param_1,_Var18,local_c8,(ulonglong)uVar3);
      if (uVar14 != *(uint *)(param_1[3] + 0x20)) {
        lVar17 = 0x5009700000501;
        goto LAB_1800120b2;
      }
      local_100 = _Var18 + *(uint *)(param_1[3] + 0x20);
      uVar14 = *(ulonglong *)(param_1[2] + 0x2c);
      if ((uVar14 != 0) && (uVar14 <= local_100)) {
        local_100 = local_100 % uVar14;
      }
      local_d0 = local_c8 + 0x10;
      local_108 = 1;
      _Var18 = local_100;
      if (1 < local_c8[1]) {
        do {
          if (param_2 == (longlong *)0x0) {
            local_124 = 1;
          }
          else {
            local_124 = 1;
            if ((longlong *)*param_2 != (longlong *)0x0) {
              local_124 = (**(code **)(*(longlong *)*param_2 + 0x10))();
              cVar9 = (**(code **)(*(longlong *)*param_2 + 0x88))();
              if (cVar9 != '\0') {
                local_124 = 0;
              }
            }
            _Var18 = local_100;
            if (local_124 == 0) break;
          }
          pvVar15 = (void *)thunk_FUN_180018ba0((ulonglong)*(uint *)(local_d0 + 4));
          if (pvVar15 == (void *)0x0) {
            lVar17 = 0x500a500000004;
            goto LAB_1800120b2;
          }
          uVar14 = FUN_180011220(param_1,local_100,pvVar15,(ulonglong)*(uint *)(local_d0 + 4));
          uVar2 = *(uint *)(local_d0 + 4);
          if (uVar14 != uVar2) {
            lVar17 = 0x500a800000501;
            goto LAB_1800120b2;
          }
          local_100 = local_100 + uVar2;
          uVar14 = *(ulonglong *)(param_1[2] + 0x2c);
          if ((uVar14 != 0) && (uVar14 <= local_100)) {
            local_100 = local_100 % uVar14;
          }
          iVar11 = FUN_180010720((longlong)pvVar15,(ushort)uVar2);
          if (iVar11 == 0) {
            free(pvVar15);
          }
          else {
            FUN_180010110(local_f8,(longlong)pvVar15,local_d0[4],1);
            pvVar15 = local_d8;
            uVar14 = local_f0;
            param_1[1] = local_f0;
            if ((local_f0 & 0xff00000000000000) != 0) {
              pcVar20 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusjournal.cpp";
              iVar11 = 0x40;
              lVar17 = 0x40;
              goto LAB_180011f21;
            }
            if (*(char *)((longlong)local_d8 + 8) == -1) {
              lVar17 = *param_1;
              uVar14 = (ulonglong)*(uint *)(param_1[3] + 0x28) * *(longlong *)local_d0;
              if (*(longlong *)(lVar17 + 0x18) == 0) {
                *(undefined8 *)(lVar17 + 0x10) = 0x501ab00000002;
LAB_1800116ab:
                free(pvVar15);
                local_d8 = (void *)0x0;
              }
              else {
                iVar11 = FUN_18000cb70(lVar17,4,*(longlong *)(lVar17 + 0x18) + 0x110,uVar14);
                if (iVar11 == 0) {
                  iVar11 = FUN_18000cb70(lVar17,3,*(longlong *)(lVar17 + 0x18) + 0xc0,uVar14);
                  if (iVar11 == 0) {
                    iVar11 = FUN_18000cb70(lVar17,8,*(longlong *)(lVar17 + 0x18) + 0x160,uVar14);
                    if (iVar11 == 0) {
                      iVar11 = FUN_18000cb70(lVar17,6,*(longlong *)(lVar17 + 0x18) + 0x70,uVar14);
                      if (iVar11 == 0) {
                        iVar11 = FUN_18000cb70(lVar17,7,*(longlong *)(lVar17 + 0x18) + 0x1b0,uVar14)
                        ;
                        if (iVar11 == 0) goto LAB_1800116ab;
                        iVar11 = 7;
                      }
                      else {
                        iVar11 = 6;
                      }
                    }
                    else {
                      iVar11 = 8;
                    }
                  }
                  else {
                    iVar11 = 3;
                  }
                }
                else {
                  iVar11 = 4;
                }
                if (iVar11 == 3) {
                  uVar10 = 0;
                  while (pvVar15 != (void *)0x0) {
                    local_f0 = 0;
                    if (*(ushort *)((longlong)pvVar15 + 10) <= uVar10) goto LAB_180011eee;
                    local_110 = (ushort *)0x0;
                    local_118 = (void *)0x0;
                    local_b8 = 0;
                    uVar14 = FUN_18000fbe0((short *)local_f8,uVar10,&local_110);
                    param_1[1] = uVar14;
                    if ((uVar14 & 0xff00000000000000) == 0) {
                      uVar14 = FUN_18000fe90((short *)local_f8,uVar10,&local_118);
                      puVar25 = local_110;
                      param_1[1] = uVar14;
                      if ((uVar14 & 0xff00000000000000) != 0) {
                        param_1[1] = 0;
                        if (local_118 != (void *)0x0) {
                          free(local_118);
                        }
                        goto LAB_180011d3a;
                      }
                      puVar22 = local_110;
                      uVar14 = FUN_18000c3a0(*param_1,3,local_110,(int *)&local_b8,(longlong *)0x0);
                      pvVar15 = local_118;
                      param_1[1] = uVar14;
                      if (local_b8._6_2_ == 0) {
                        plVar23 = (longlong *)*param_4;
                        plVar19 = (longlong *)*plVar23;
                        plVar24 = param_4;
                        if (plVar19 != plVar23) {
                          do {
                            uVar16 = FUN_18000fb60((ushort *)plVar19[4],puVar25);
                            if ((int)uVar16 == 0) {
                              if ((void *)plVar19[5] != (void *)0x0) {
                                free((void *)plVar19[5]);
                                plVar19[5] = 0;
                              }
                              if (puVar25 != (ushort *)0x0) {
                                free(puVar25);
                                puVar25 = (ushort *)0x0;
                              }
                              plVar19[5] = (longlong)pvVar15;
                              plVar24 = param_4;
                              break;
                            }
                            plVar6 = (longlong *)plVar19[2];
                            if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
                              cVar9 = *(char *)(*plVar6 + 0x19);
                              plVar19 = plVar6;
                              plVar6 = (longlong *)*plVar6;
                              while (cVar9 == '\0') {
                                cVar9 = *(char *)(*plVar6 + 0x19);
                                plVar19 = plVar6;
                                plVar6 = (longlong *)*plVar6;
                              }
                            }
                            else {
                              cVar9 = *(char *)(plVar19[1] + 0x19);
                              plVar7 = (longlong *)plVar19[1];
                              plVar6 = plVar19;
                              while ((plVar19 = plVar7, cVar9 == '\0' &&
                                     (plVar6 == (longlong *)plVar19[2]))) {
                                cVar9 = *(char *)(plVar19[1] + 0x19);
                                plVar7 = (longlong *)plVar19[1];
                                plVar6 = plVar19;
                              }
                            }
                          } while (plVar19 != plVar23);
                        }
                        if (plVar19 == (longlong *)*plVar24) {
                          local_a8 = pvVar15;
                          local_b0 = puVar25;
                          FUN_1800071b0(plVar24,local_80,puVar22,&local_b0);
                        }
                        goto LAB_180011ece;
                      }
                      param_1[1] = 0;
                      if (local_118 != (void *)0x0) {
                        free(local_118);
                      }
                      if (puVar25 == (ushort *)0x0) goto LAB_180011ece;
                      free(puVar25);
                      uVar10 = uVar10 + 1;
                      pvVar15 = local_d8;
                    }
                    else {
                      param_1[1] = 0;
LAB_180011d3a:
                      if (local_110 == (ushort *)0x0) {
LAB_180011ece:
                        uVar10 = uVar10 + 1;
                        pvVar15 = local_d8;
                      }
                      else {
                        free(local_110);
                        uVar10 = uVar10 + 1;
                        pvVar15 = local_d8;
                      }
                    }
                  }
                  local_f0 = 0x5002c00000002;
                }
                else if (iVar11 == 4) {
                  uVar10 = 0;
                  while (pvVar15 != (void *)0x0) {
                    local_f0 = 0;
                    if (*(ushort *)((longlong)pvVar15 + 10) <= uVar10) goto LAB_180011eee;
                    local_c0 = (void *)0x0;
                    local_118 = (void *)0x0;
                    local_110 = (ushort *)0x0;
                    local_b8 = 0;
                    uVar14 = FUN_18000ef30(local_f8,uVar10,&local_c0);
                    pvVar15 = local_c0;
                    param_1[1] = uVar14;
                    if (((uVar14 & 0xff00000000000000) == 0) && (local_c0 != (void *)0x0)) {
                      uVar14 = FUN_18000f2d0(local_f8,uVar10,&local_110);
                      puVar25 = local_110;
                      param_1[1] = uVar14;
                      if (((uVar14 & 0xff00000000000000) == 0) && (local_110 != (ushort *)0x0)) {
                        if (1 < (ushort)(*local_110 - 3)) {
                          pvVar21 = pvVar15;
                          uVar14 = FUN_18000c3a0(*param_1,4,pvVar15,(int *)&local_b8,
                                                 (longlong *)&local_118);
                          param_1[1] = uVar14;
                          if ((local_b8._6_2_ == 0) ||
                             (*(int *)((longlong)local_118 + 8) != *(int *)(puVar25 + 4))) {
                            if (local_118 != (void *)0x0) {
                              free(local_118);
                              local_118 = (void *)0x0;
                            }
                            plVar23 = (longlong *)*param_3;
                            plVar19 = (longlong *)*plVar23;
                            if (plVar19 != plVar23) {
                              cVar9 = *(char *)(*param_1 + 0x88);
                              do {
                                if (cVar9 == -0x31) {
                                  uVar16 = FUN_18000ecf0(plVar19[4],(longlong)pvVar15);
                                  iVar11 = (int)uVar16;
                                }
                                else {
                                  uVar16 = FUN_18000ee30(plVar19[4],(longlong)pvVar15);
                                  iVar11 = (int)uVar16;
                                }
                                if ((iVar11 == 0) &&
                                   (_Memory = (void *)plVar19[5],
                                   *(int *)((longlong)_Memory + 8) == *(int *)(puVar25 + 4))) {
                                  if (_Memory != (void *)0x0) {
                                    free(_Memory);
                                    plVar19[5] = 0;
                                  }
                                  free(pvVar15);
                                  pvVar15 = (void *)0x0;
                                  plVar19[5] = (longlong)puVar25;
                                  break;
                                }
                                plVar24 = (longlong *)plVar19[2];
                                if (*(char *)((longlong)plVar24 + 0x19) == '\0') {
                                  cVar1 = *(char *)(*plVar24 + 0x19);
                                  plVar19 = plVar24;
                                  plVar24 = (longlong *)*plVar24;
                                  while (cVar1 == '\0') {
                                    cVar1 = *(char *)(*plVar24 + 0x19);
                                    plVar19 = plVar24;
                                    plVar24 = (longlong *)*plVar24;
                                  }
                                }
                                else {
                                  cVar1 = *(char *)(plVar19[1] + 0x19);
                                  plVar6 = (longlong *)plVar19[1];
                                  plVar24 = plVar19;
                                  while ((plVar19 = plVar6, cVar1 == '\0' &&
                                         (plVar24 == (longlong *)plVar19[2]))) {
                                    cVar1 = *(char *)(plVar19[1] + 0x19);
                                    plVar6 = (longlong *)plVar19[1];
                                    plVar24 = plVar19;
                                  }
                                }
                              } while (plVar19 != plVar23);
                            }
                            if (plVar19 == (longlong *)*param_3) {
                              local_88 = puVar25;
                              local_90 = pvVar15;
                              FUN_1800071b0(param_3,local_58,pvVar21,&local_90);
                              if (((param_2 != (longlong *)0x0) && ((char)param_2[2] == '\0')) &&
                                 (param_2[1] != 0)) {
                                plVar23 = (longlong *)(param_2[1] + 0x10);
                                *plVar23 = *plVar23 + 1;
                                (**(code **)(*(longlong *)*param_2 + 8))
                                          ((longlong *)*param_2,param_2[1]);
                              }
                            }
                            goto LAB_180011c6b;
                          }
                          param_1[1] = 0;
                          free(puVar25);
                          if (local_118 != (void *)0x0) {
                            free(local_118);
                            local_118 = (void *)0x0;
                          }
                          goto LAB_180011b06;
                        }
                        param_1[1] = 0;
LAB_180011c84:
                        free(local_110);
                      }
                      else {
                        param_1[1] = 0;
                        if (local_110 != (ushort *)0x0) goto LAB_180011c84;
                      }
                      free(pvVar15);
                      uVar10 = uVar10 + 1;
                      pvVar15 = local_d8;
                    }
                    else {
                      param_1[1] = 0;
                      if (local_c0 == (void *)0x0) {
LAB_180011c6b:
                        uVar10 = uVar10 + 1;
                        pvVar15 = local_d8;
                      }
                      else {
LAB_180011b06:
                        free(pvVar15);
                        uVar10 = uVar10 + 1;
                        pvVar15 = local_d8;
                      }
                    }
                  }
LAB_180011cca:
                  local_f0 = 0x5002c00000002;
                }
                else if (iVar11 == 8) {
                  uVar10 = 0;
LAB_180011807:
                  do {
                    if (pvVar15 == (void *)0x0) goto LAB_180011cca;
                    local_f0 = 0;
                    if (*(ushort *)((longlong)pvVar15 + 10) <= uVar10) break;
                    local_118 = (void *)0x0;
                    local_110 = (ushort *)0x0;
                    local_c0 = (void *)0x0;
                    uVar14 = FUN_18000dee0(local_f8,uVar10,&local_118);
                    param_1[1] = uVar14;
                    if ((uVar14 & 0xff00000000000000) == 0) {
                      uVar14 = FUN_18000e200(local_f8,uVar10,&local_110);
                      pvVar15 = local_118;
                      param_1[1] = uVar14;
                      if ((uVar14 & 0xff00000000000000) != 0) {
                        param_1[1] = 0;
                        if (local_110 != (ushort *)0x0) {
                          free(local_110);
                          pvVar15 = local_118;
                        }
                        goto joined_r0x0001800118f3;
                      }
                      pvVar21 = local_118;
                      uVar14 = FUN_18000c3a0(*param_1,8,local_118,(int *)&local_c0,(longlong *)0x0);
                      puVar25 = local_110;
                      param_1[1] = uVar14;
                      if (local_c0._6_2_ != 0) {
                        param_1[1] = 0;
                        if (local_110 != (ushort *)0x0) {
                          free(local_110);
                        }
                        goto joined_r0x0001800118f3;
                      }
                      puVar13 = (undefined8 *)*param_5;
                      puVar4 = (undefined8 *)*puVar13;
                      while (puVar4 != puVar13) {
                        uVar16 = FUN_18000de20(puVar4[4],(longlong)pvVar15);
                        if ((int)uVar16 == 0) {
                          if ((void *)puVar4[5] != (void *)0x0) {
                            free((void *)puVar4[5]);
                            puVar4[5] = 0;
                          }
                          if (pvVar15 != (void *)0x0) {
                            free(pvVar15);
                            pvVar15 = (void *)0x0;
                          }
                          puVar4[5] = puVar25;
                          break;
                        }
                        puVar5 = (undefined8 *)puVar4[2];
                        if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
                          cVar9 = *(char *)((longlong)*puVar5 + 0x19);
                          puVar4 = puVar5;
                          puVar5 = (undefined8 *)*puVar5;
                          while (cVar9 == '\0') {
                            cVar9 = *(char *)((longlong)*puVar5 + 0x19);
                            puVar4 = puVar5;
                            puVar5 = (undefined8 *)*puVar5;
                          }
                        }
                        else {
                          cVar9 = *(char *)((longlong)puVar4[1] + 0x19);
                          puVar8 = (undefined8 *)puVar4[1];
                          puVar5 = puVar4;
                          while ((puVar4 = puVar8, cVar9 == '\0' &&
                                 (puVar5 == (undefined8 *)puVar4[2]))) {
                            cVar9 = *(char *)((longlong)puVar4[1] + 0x19);
                            puVar8 = (undefined8 *)puVar4[1];
                            puVar5 = puVar4;
                          }
                        }
                      }
                      if (puVar4 == (undefined8 *)*param_5) {
                        local_98 = puVar25;
                        local_a0 = pvVar15;
                        FUN_1800071b0(param_5,local_68,pvVar21,&local_a0);
                      }
                    }
                    else {
                      param_1[1] = 0;
                      pvVar15 = local_118;
joined_r0x0001800118f3:
                      if (pvVar15 != (void *)0x0) {
                        free(pvVar15);
                        uVar10 = uVar10 + 1;
                        pvVar15 = local_d8;
                        goto LAB_180011807;
                      }
                    }
                    uVar10 = uVar10 + 1;
                    pvVar15 = local_d8;
                  } while( true );
                }
LAB_180011eee:
                if (pvVar15 != (void *)0x0) {
                  free(pvVar15);
                  local_d8 = (void *)0x0;
                }
              }
              if ((local_e0 != 0) && (local_e8 != (void *)0x0)) {
                free(local_e8);
                local_e8 = (void *)0x0;
              }
            }
            else {
              free(local_d8);
              local_d8 = (void *)0x0;
              if ((local_e0 != 0) && (local_e8 != (void *)0x0)) {
                free(local_e8);
                local_e8 = (void *)0x0;
              }
            }
            local_f0 = 0x5002300000002;
            local_f8[0] = 0;
            local_e0 = 0;
          }
          local_108 = local_108 + 1;
          local_d0 = local_d0 + 8;
          _Var18 = local_100;
        } while (local_108 < local_c8[1]);
      }
    }
    else {
      _Var18 = _Var18 + uVar2;
      uVar14 = *(ulonglong *)(param_1[2] + 0x2c);
      if ((uVar14 != 0) && (uVar14 <= _Var18)) {
        _Var18 = _Var18 % uVar14;
      }
    }
    if ((_Var18 == *(__uint64 *)(param_1[3] + 0x10)) || (local_124 != 1)) goto LAB_1800120b6;
  }
  lVar17 = 0x5008b00000501;
LAB_1800120b2:
  param_1[1] = lVar17;
  goto LAB_1800120b6;
  while( true ) {
    iVar11 = iVar11 + -1;
    lVar17 = lVar17 + -1;
    if (lVar17 < 0) break;
LAB_180011f21:
    if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusjournal.cpp"[lVar17] == '\\')
       || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusjournal.cpp"[lVar17] == '/'))
    {
      pcVar20 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusjournal.cpp" +
                (iVar11 + 1);
      break;
    }
  }
  pbVar12 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                          "Return Error:0x");
  puVar13 = (undefined8 *)std::setbase((int)local_80);
  (*(code *)*puVar13)(pbVar12 + *(int *)(*(longlong *)pbVar12 + 4),*(undefined4 *)(puVar13 + 1));
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar12,uVar14);
  if (pcVar20 != (char *)0x0) {
    pbVar12 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                            "\tFile:");
    FUN_180001e50(pbVar12,pcVar20);
  }
  pbVar12 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"\tLine:"
                         );
  puVar13 = (undefined8 *)std::setbase((int)local_80);
  (*(code *)*puVar13)(pbVar12 + *(int *)(*(longlong *)pbVar12 + 4),*(undefined4 *)(puVar13 + 1));
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar12,0xb3);
  pbVar12 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                          "\tFuction:");
  FUN_180001e50(pbVar12,"CHFSPlusJournal::GetDeleteRecord");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
  if (local_d8 != (void *)0x0) {
    free(local_d8);
    local_d8 = (void *)0x0;
  }
  if ((local_e0 != 0) && (local_e8 != (void *)0x0)) {
    free(local_e8);
    local_e8 = (void *)0x0;
  }
  local_f0 = 0x5002300000002;
  local_f8[0] = 0;
  local_e0 = 0;
LAB_1800120b6:
  free(local_c8);
  return param_1[1];
}




undefined8 * FUN_1800120e0(undefined8 *param_1,uint param_2)

{
  *param_1 = CHFSPlusFileCache::vftable;
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
    param_1[5] = 0;
  }
  FUN_180010ad0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180012160(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  void *_Memory;
  undefined8 uVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  long lVar8;
  short sVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180028010 ^ (ulonglong)auStack_d8;
  uVar2 = 0;
  uVar10 = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = CHFSPlusBTreeOptionBase::vftable;
  param_1[3] = 0x5000e00000002;
  sVar9 = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2 == 0) {
    uVar10 = 0x5001500000005;
  }
  else if (param_3 == (longlong *)0x0) {
    uVar10 = 0x5001600000005;
  }
  else {
    _Memory = (void *)thunk_FUN_180018ba0(0x2000);
    if (_Memory == (void *)0x0) {
      param_1[3] = 0x5004200000004;
    }
    else {
      lVar7 = (**(code **)(*param_3 + 8))(param_3,0,_Memory,0x200);
      if (lVar7 == 0x200) {
        local_98 = *(undefined8 *)((longlong)_Memory + 0xe);
        uStack_90 = *(undefined8 *)((longlong)_Memory + 0x16);
        local_30 = *(undefined2 *)((longlong)_Memory + 0x76);
        local_88 = *(undefined8 *)((longlong)_Memory + 0x1e);
        uStack_80 = *(undefined8 *)((longlong)_Memory + 0x26);
        local_78 = *(undefined8 *)((longlong)_Memory + 0x2e);
        uStack_70 = *(undefined8 *)((longlong)_Memory + 0x36);
        local_68 = *(undefined8 *)((longlong)_Memory + 0x3e);
        uStack_60 = *(undefined8 *)((longlong)_Memory + 0x46);
        local_58 = *(undefined8 *)((longlong)_Memory + 0x4e);
        uStack_50 = *(undefined8 *)((longlong)_Memory + 0x56);
        local_48 = *(undefined8 *)((longlong)_Memory + 0x5e);
        uStack_40 = *(undefined8 *)((longlong)_Memory + 0x66);
        local_38 = *(undefined8 *)((longlong)_Memory + 0x6e);
        FUN_18000d3d0((undefined1 *)&local_98);
        sVar9 = local_88._2_2_;
      }
      else {
        uVar2 = 0x500450000000e;
      }
      param_1[3] = uVar2;
      free(_Memory);
    }
    *(short *)(param_1 + 4) = sVar9;
    if (sVar9 == 0) {
      uVar10 = param_1[3];
      if ((uVar10 & 0xff00000000000000) == 0) goto LAB_180012690;
      iVar1 = 0x44;
      pcVar11 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp";
      lVar7 = 0x44;
      do {
        if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"[lVar7] ==
             '\\') ||
           ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"[lVar7] ==
            '/')) {
          pcVar11 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp" +
                    (iVar1 + 1);
          break;
        }
        iVar1 = iVar1 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar4 = (undefined8 *)std::setbase((int)local_b8);
      (*(code *)*puVar4)(pbVar3 + *(int *)(*(longlong *)pbVar3 + 4),*(undefined4 *)(puVar4 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar3,uVar10);
      if (pcVar11 != (char *)0x0) {
        pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar3,pcVar11);
      }
      pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar4 = (undefined8 *)std::setbase((int)local_a8);
      (*(code *)*puVar4)(pbVar3 + *(int *)(*(longlong *)pbVar3 + 4),*(undefined4 *)(puVar4 + 1));
      lVar8 = 0x19;
    }
    else {
      puVar5 = FUN_180012750((longlong)param_1,0);
      param_1[5] = puVar5;
      if (puVar5 == (ushort *)0x0) {
        uVar10 = param_1[3];
        if ((uVar10 & 0xff00000000000000) == 0) goto LAB_180012690;
        iVar1 = 0x44;
        pcVar11 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp";
        lVar7 = 0x44;
        do {
          if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"[lVar7]
               == '\\') ||
             ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"[lVar7] ==
              '/')) {
            pcVar11 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp" +
                      (iVar1 + 1);
            break;
          }
          iVar1 = iVar1 + -1;
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
        pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "Return Error:0x");
        puVar4 = (undefined8 *)std::setbase((int)local_a8);
        (*(code *)*puVar4)(pbVar3 + *(int *)(*(longlong *)pbVar3 + 4),*(undefined4 *)(puVar4 + 1));
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar3,uVar10);
        if (pcVar11 != (char *)0x0) {
          pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                 "\tFile:");
          FUN_180001e50(pbVar3,pcVar11);
        }
        pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tLine:");
        puVar4 = (undefined8 *)std::setbase((int)local_b8);
        (*(code *)*puVar4)(pbVar3 + *(int *)(*(longlong *)pbVar3 + 4),*(undefined4 *)(puVar4 + 1));
        lVar8 = 0x1c;
      }
      else {
        puVar4 = (undefined8 *)FUN_180010230((short *)puVar5,0,(short *)0x0);
        if (puVar4 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)FUN_180018ba0(0x6a);
          param_1[6] = puVar6;
          if (puVar6 == (undefined8 *)0x0) {
            uVar10 = 0x5002200000004;
          }
          else {
            uVar2 = puVar4[1];
            *puVar6 = *puVar4;
            puVar6[1] = uVar2;
            uVar2 = puVar4[3];
            puVar6[2] = puVar4[2];
            puVar6[3] = uVar2;
            uVar2 = puVar4[5];
            puVar6[4] = puVar4[4];
            puVar6[5] = uVar2;
            uVar2 = puVar4[7];
            puVar6[6] = puVar4[6];
            puVar6[7] = uVar2;
            uVar2 = puVar4[9];
            puVar6[8] = puVar4[8];
            puVar6[9] = uVar2;
            uVar2 = puVar4[0xb];
            puVar6[10] = puVar4[10];
            puVar6[0xb] = uVar2;
            puVar6[0xc] = puVar4[0xc];
            *(undefined2 *)(puVar6 + 0xd) = *(undefined2 *)(puVar4 + 0xd);
            FUN_18000d3d0((undefined1 *)param_1[6]);
          }
          goto LAB_180012690;
        }
        uVar10 = *(ulonglong *)(param_1[5] + 8);
        if ((uVar10 & 0xff00000000000000) == 0) goto LAB_180012690;
        iVar1 = 0x44;
        pcVar11 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp";
        lVar7 = 0x44;
        do {
          if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"[lVar7]
               == '\\') ||
             ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"[lVar7] ==
              '/')) {
            pcVar11 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp" +
                      (iVar1 + 1);
            break;
          }
          iVar1 = iVar1 + -1;
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
        pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "Return Error:0x");
        puVar4 = (undefined8 *)std::setbase((int)local_a8);
        (*(code *)*puVar4)(pbVar3 + *(int *)(*(longlong *)pbVar3 + 4),*(undefined4 *)(puVar4 + 1));
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar3,uVar10);
        if (pcVar11 != (char *)0x0) {
          pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                 "\tFile:");
          FUN_180001e50(pbVar3,pcVar11);
        }
        pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tLine:");
        puVar4 = (undefined8 *)std::setbase((int)local_b8);
        (*(code *)*puVar4)(pbVar3 + *(int *)(*(longlong *)pbVar3 + 4),*(undefined4 *)(puVar4 + 1));
        lVar8 = 0x1f;
      }
    }
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar3,lVar8);
    pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFuction:");
    FUN_180001e50(pbVar3,"CHFSPlusBTreeOptionBase::CHFSPlusBTreeOptionBase");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
              ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
  }
LAB_180012690:
  param_1[3] = uVar10;
  __security_check_cookie(local_28 ^ (ulonglong)auStack_d8);
  return;
}




void FUN_1800126c0(undefined8 *param_1)

{
  void *_Memory;
  
  *param_1 = CHFSPlusBTreeOptionBase::vftable;
  _Memory = (void *)param_1[7];
  if (_Memory != (void *)0x0) {
    *(undefined8 *)((longlong)_Memory + 8) = 0;
    *(undefined8 *)((longlong)_Memory + 0x10) = 0x5001600000002;
    free(_Memory);
    param_1[7] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    free((void *)param_1[6]);
    param_1[6] = 0;
  }
  if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
    FUN_18000cce0((undefined2 *)param_1[5]);
    param_1[5] = 0;
  }
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[3] = 0x5003300000002;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}




ushort * FUN_180012750(longlong param_1,uint param_2)

{
  void *_Memory;
  ulonglong uVar1;
  longlong lVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined8 *puVar4;
  int iVar5;
  ushort *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 local_30 [24];
  
  uVar8 = 0xfffffffffffffffe;
  puVar6 = (ushort *)0x0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0x5005900000002;
    puVar6 = (ushort *)0x0;
  }
  else if (*(ushort *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0x5005a00000002;
  }
  else {
    _Memory = (void *)thunk_FUN_180018ba0((ulonglong)*(ushort *)(param_1 + 0x20));
    if (_Memory == (void *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0x5005d00000004;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                        (*(longlong **)(param_1 + 0x10),
                         (ulonglong)param_2 * (ulonglong)*(ushort *)(param_1 + 0x20),_Memory,
                         (ulonglong)*(ushort *)(param_1 + 0x20),uVar8);
      if (uVar1 == *(ushort *)(param_1 + 0x20)) {
        puVar6 = (ushort *)operator_new(0x28);
        puVar6 = FUN_180010110(puVar6,(longlong)_Memory,*(ushort *)(param_1 + 0x20),1);
        if (puVar6 == (ushort *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = 0x5006300000004;
          free(_Memory);
        }
        else {
          uVar1 = *(ulonglong *)(puVar6 + 4);
          *(ulonglong *)(param_1 + 0x18) = uVar1;
          if ((uVar1 & 0xff00000000000000) == 0) {
            *(undefined8 *)(param_1 + 0x18) = 0;
          }
          else {
            pcVar7 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp";
            iVar5 = 0x44;
            lVar2 = 0x44;
            do {
              if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"
                   [lVar2] == '\\') ||
                 ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"
                  [lVar2] == '/')) {
                pcVar7 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"
                         + (iVar5 + 1);
                break;
              }
              iVar5 = iVar5 + -1;
              lVar2 = lVar2 + -1;
            } while (-1 < lVar2);
            pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                   "Return Error:0x");
            puVar4 = (undefined8 *)std::setbase((int)local_30);
            (*(code *)*puVar4)(pbVar3 + *(int *)(*(longlong *)pbVar3 + 4),
                               *(undefined4 *)(puVar4 + 1));
            std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar3,uVar1);
            if (pcVar7 != (char *)0x0) {
              pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)
                                     cout_exref,"\tFile:");
              FUN_180001e50(pbVar3,pcVar7);
            }
            pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                   "\tLine:");
            puVar4 = (undefined8 *)std::setbase((int)local_30);
            (*(code *)*puVar4)(pbVar3 + *(int *)(*(longlong *)pbVar3 + 4),
                               *(undefined4 *)(puVar4 + 1));
            std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar3,0x67);
            pbVar3 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                   "\tFuction:");
            FUN_180001e50(pbVar3,"CHFSPlusBTreeOptionBase::CreateNode");
            std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                      ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                       FUN_180002030);
            FUN_18000cce0(puVar6);
            puVar6 = (ushort *)0x0;
          }
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0x500600000000e;
        free(_Memory);
      }
    }
  }
  return puVar6;
}




undefined4 FUN_1800129c0(longlong param_1,short *param_2,ushort param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined8 *puVar6;
  longlong lVar7;
  long lVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined2 *puVar11;
  undefined4 local_res10;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  lVar7 = *(longlong *)(param_2 + 0x10);
  if (lVar7 == 0) {
    uVar9 = *(ulonglong *)(param_2 + 4);
    if ((uVar9 & 0xff00000000000000) == 0) goto LAB_180012b0d;
    iVar4 = 0x44;
    pcVar10 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp";
    lVar7 = 0x44;
    do {
      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"[lVar7] ==
           '\\') ||
         ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"[lVar7] == '/'
         )) {
        pcVar10 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp" +
                  (iVar4 + 1);
        break;
      }
      iVar4 = iVar4 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar6 = (undefined8 *)std::setbase((int)local_28);
    (*(code *)*puVar6)(pbVar5 + *(int *)(*(longlong *)pbVar5 + 4),*(undefined4 *)(puVar6 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,uVar9);
    if (pcVar10 != (char *)0x0) {
      pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar5,pcVar10);
    }
    pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar6 = (undefined8 *)std::setbase((int)local_18);
    (*(code *)*puVar6)(pbVar5 + *(int *)(*(longlong *)pbVar5 + 4),*(undefined4 *)(puVar6 + 1));
    lVar8 = 0x84;
  }
  else {
    if (*(char *)(lVar7 + 8) != '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0x5008600000006;
      return 0;
    }
    if (lVar7 == 0) {
      param_2[4] = 2;
      param_2[5] = 0;
      param_2[6] = 0x3b;
      param_2[7] = 5;
    }
    else if (param_3 < *(ushort *)(lVar7 + 10)) {
      uVar1 = *(undefined2 *)
               ((ulonglong)(ushort)((*param_2 + param_3 * -2) - 2) + *(longlong *)(param_2 + 8));
      local_res10._1_1_ = (undefined1)((ushort)uVar1 >> 8);
      local_res10._0_2_ = CONCAT11((char)uVar1,local_res10._1_1_);
      puVar11 = (undefined2 *)((ulonglong)(ushort)local_res10 + *(longlong *)(param_2 + 8));
      if (puVar11 != (undefined2 *)0x0) {
        local_res10._1_1_ = (undefined1)((ushort)*puVar11 >> 8);
        local_res10._0_2_ = CONCAT11((char)*puVar11,local_res10._1_1_);
        uVar2 = *(undefined4 *)((ulonglong)(ushort)((ushort)local_res10 + 2) + (longlong)puVar11);
        local_res10._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
        local_res10._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
        local_res10._1_1_ = (undefined1)((uint)uVar2 >> 8);
        uVar3 = local_res10._1_1_;
        local_res10._0_2_ = CONCAT11(local_res10._2_1_,local_res10._3_1_);
        local_res10 = CONCAT13((char)uVar2,CONCAT12(uVar3,(ushort)local_res10));
        *(undefined8 *)(param_1 + 0x18) = 0;
        return local_res10;
      }
    }
    else {
      param_2[4] = 5;
      param_2[5] = 0;
      param_2[6] = 0x3c;
      param_2[7] = 5;
    }
    uVar9 = *(ulonglong *)(param_2 + 4);
    if ((uVar9 & 0xff00000000000000) == 0) goto LAB_180012b0d;
    iVar4 = 0x44;
    pcVar10 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp";
    lVar7 = 0x44;
    do {
      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"[lVar7] ==
           '\\') ||
         ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp"[lVar7] == '/'
         )) {
        pcVar10 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtreeoption.cpp" +
                  (iVar4 + 1);
        break;
      }
      iVar4 = iVar4 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar6 = (undefined8 *)std::setbase((int)local_18);
    (*(code *)*puVar6)(pbVar5 + *(int *)(*(longlong *)pbVar5 + 4),*(undefined4 *)(puVar6 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,uVar9);
    if (pcVar10 != (char *)0x0) {
      pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar5,pcVar10);
    }
    pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar6 = (undefined8 *)std::setbase((int)local_28);
    (*(code *)*puVar6)(pbVar5 + *(int *)(*(longlong *)pbVar5 + 4),*(undefined4 *)(puVar6 + 1));
    lVar8 = 0x89;
  }
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar5,lVar8);
  pbVar5 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "\tFuction:");
  FUN_180001e50(pbVar5,"CHFSPlusBTreeOptionBase::GetChild");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
LAB_180012b0d:
  *(ulonglong *)(param_1 + 0x18) = uVar9;
  return 0;
}




ulonglong FUN_180012cf0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = (ulonglong)*(uint *)(lVar1 + 2);
  }
  uVar3 = 0x5009a00000002;
  if (lVar1 != 0) {
    uVar3 = 0;
  }
  *(ulonglong *)(param_1 + 0x18) = uVar3;
  return uVar2;
}




ulonglong FUN_180012d20(longlong param_1,undefined8 param_2,int *param_3,longlong *param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  char *pcVar9;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  plVar8 = *(longlong **)(param_1 + 8);
  iVar2 = 0;
  if (*(code **)(*plVar8 + 0x30) == FUN_180012cf0) {
    lVar7 = plVar8[6];
    if (lVar7 != 0) {
      iVar2 = *(int *)(lVar7 + 2);
    }
    lVar3 = 0x5009a00000002;
    if (lVar7 != 0) {
      lVar3 = 0;
    }
    plVar8[3] = lVar3;
  }
  else {
    iVar2 = (**(code **)(*plVar8 + 0x30))();
  }
  if (iVar2 == 0) {
    plVar8 = *(longlong **)(param_1 + 8);
    if (*(code **)(*plVar8 + 0x40) == FUN_18000b3f0) {
      uVar6 = plVar8[3];
    }
    else {
      uVar6 = (**(code **)(*plVar8 + 0x40))(plVar8);
      plVar8 = *(longlong **)(param_1 + 8);
    }
    pcVar1 = *(code **)(*plVar8 + 0x40);
    if ((uVar6 & 0xff00000000000000) == 0) {
      if (pcVar1 == FUN_18000b3f0) {
        uVar6 = plVar8[3];
        *(ulonglong *)(param_1 + 0x10) = uVar6;
      }
      else {
        uVar6 = (*pcVar1)(plVar8);
        *(ulonglong *)(param_1 + 0x10) = uVar6;
      }
    }
    else {
      if (pcVar1 == FUN_18000b3f0) {
        uVar6 = plVar8[3];
      }
      else {
        uVar6 = (*pcVar1)(plVar8);
      }
      iVar2 = 0x3e;
      pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
      lVar7 = 0x3e;
      do {
        if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar7] == '\\')
           || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar7] == '/')
           ) {
          pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" +
                   (iVar2 + 1);
          break;
        }
        iVar2 = iVar2 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar5 = (undefined8 *)std::setbase((int)local_28);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,uVar6);
      if (pcVar9 != (char *)0x0) {
        pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar4,pcVar9);
      }
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar5 = (undefined8 *)std::setbase((int)local_18);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,0x1e);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar4,"CHFSPlusBTree::Search");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
      *(ulonglong *)(param_1 + 0x10) = uVar6;
    }
  }
  else {
    param_3[0] = 0;
    param_3[1] = 0;
    uVar6 = FUN_1800130b0(param_1,iVar2,param_2,param_3,param_4);
    *(ulonglong *)(param_1 + 0x10) = uVar6;
    if ((uVar6 & 0xff00000000000000) != 0) {
      iVar2 = 0x3e;
      pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
      lVar7 = 0x3e;
      do {
        if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar7] == '\\')
           || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar7] == '/')
           ) {
          pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" +
                   (iVar2 + 1);
          break;
        }
        iVar2 = iVar2 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar5 = (undefined8 *)std::setbase((int)local_18);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,uVar6);
      if (pcVar9 != (char *)0x0) {
        pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar4,pcVar9);
      }
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar5 = (undefined8 *)std::setbase((int)local_18);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,0x24);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar4,"CHFSPlusBTree::Search");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
      uVar6 = *(ulonglong *)(param_1 + 0x10);
    }
  }
  return uVar6;
}




undefined8
FUN_1800130b0(longlong param_1,int param_2,undefined8 param_3,int *param_4,longlong *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  long lVar9;
  longlong lVar10;
  ushort uVar11;
  char *pcVar12;
  code *pcVar13;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  plVar5 = *(longlong **)(param_1 + 8);
  while (puVar3 = (undefined2 *)(**(code **)(*plVar5 + 0x38))(), puVar3 != (undefined2 *)0x0) {
    lVar10 = *(longlong *)(puVar3 + 0x10);
    if (lVar10 == 0) {
      uVar8 = *(ulonglong *)(puVar3 + 4);
      if ((uVar8 & 0xff00000000000000) == 0) goto LAB_180013983;
      iVar2 = 0x3e;
      pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
      lVar10 = 0x3e;
      goto LAB_180013754;
    }
    uVar1 = *(ushort *)(lVar10 + 10);
    if (*(char *)(lVar10 + 8) != '\0') {
      if (*(char *)(lVar10 + 8) == -1) {
        uVar11 = 0;
        if (uVar1 == 0) goto LAB_180013987;
        goto LAB_180013400;
      }
      *(undefined8 *)(param_1 + 0x10) = 0x5003900000006;
      goto LAB_180013987;
    }
    uVar11 = 0;
    if (uVar1 != 0) {
      do {
        pvVar4 = (void *)(**(code **)(**(longlong **)(param_1 + 8) + 8))
                                   (*(longlong **)(param_1 + 8),puVar3,uVar11);
        plVar5 = *(longlong **)(param_1 + 8);
        if (pvVar4 == (void *)0x0) {
          pcVar13 = (code *)((undefined8 *)*plVar5)[8];
          if (pcVar13 == FUN_18000b3f0) {
            uVar8 = plVar5[3];
          }
          else {
            uVar8 = (*pcVar13)(plVar5);
            plVar5 = *(longlong **)(param_1 + 8);
          }
          pcVar13 = *(code **)(*plVar5 + 0x40);
          if ((uVar8 & 0xff00000000000000) == 0) {
            if (pcVar13 == FUN_18000b3f0) {
              uVar8 = plVar5[3];
            }
            else {
              uVar8 = (*pcVar13)(plVar5);
            }
            goto LAB_180013983;
          }
          if (pcVar13 == FUN_18000b3f0) {
            uVar8 = plVar5[3];
          }
          else {
            uVar8 = (*pcVar13)(plVar5);
          }
          iVar2 = 0x3e;
          pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
          lVar10 = 0x3e;
          goto LAB_1800131f0;
        }
        iVar2 = (**(code **)*plVar5)(plVar5,pvVar4,param_3);
        free(pvVar4);
        if (-1 < iVar2) {
          if (iVar2 == 0) {
            uVar11 = uVar11 + 1;
          }
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar1);
    }
    param_2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                        (*(longlong **)(param_1 + 8),puVar3,uVar11 - 1);
    if (param_2 == 0) {
      plVar5 = *(longlong **)(param_1 + 8);
      if (*(code **)(*plVar5 + 0x40) == FUN_18000b3f0) {
        uVar8 = plVar5[3];
      }
      else {
        uVar8 = (**(code **)(*plVar5 + 0x40))(plVar5);
        plVar5 = *(longlong **)(param_1 + 8);
      }
      pcVar13 = *(code **)(*plVar5 + 0x40);
      if ((uVar8 & 0xff00000000000000) == 0) goto LAB_180013973;
      if (pcVar13 == FUN_18000b3f0) {
        uVar8 = plVar5[3];
      }
      else {
        uVar8 = (*pcVar13)(plVar5);
      }
      iVar2 = 0x3e;
      pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
      lVar10 = 0x3e;
      goto LAB_180013320;
    }
    FUN_18000cce0(puVar3);
    plVar5 = *(longlong **)(param_1 + 8);
  }
  plVar5 = *(longlong **)(param_1 + 8);
  if (*(code **)(*plVar5 + 0x40) == FUN_18000b3f0) {
    uVar8 = plVar5[3];
  }
  else {
    uVar8 = (**(code **)(*plVar5 + 0x40))(plVar5);
    plVar5 = *(longlong **)(param_1 + 8);
  }
  pcVar13 = *(code **)(*plVar5 + 0x40);
  if ((uVar8 & 0xff00000000000000) != 0) {
    if (pcVar13 == FUN_18000b3f0) {
      uVar8 = plVar5[3];
    }
    else {
      uVar8 = (*pcVar13)(plVar5);
    }
    iVar2 = 0x3e;
    pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
    lVar10 = 0x3e;
    do {
      if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '\\')
         || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '/'))
      {
        pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" +
                  (iVar2 + 1);
        break;
      }
      iVar2 = iVar2 + -1;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar7 = (undefined8 *)std::setbase((int)local_38);
    (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar8);
    if (pcVar12 != (char *)0x0) {
      pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar6,pcVar12);
    }
    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar7 = (undefined8 *)std::setbase((int)local_48);
    (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
    lVar9 = 0x32;
    goto LAB_180013932;
  }
LAB_180013973:
  if (pcVar13 == FUN_18000b3f0) {
    uVar8 = plVar5[3];
  }
  else {
    uVar8 = (*pcVar13)(plVar5);
  }
  goto LAB_180013983;
  while( true ) {
    iVar2 = iVar2 + -1;
    lVar10 = lVar10 + -1;
    if (lVar10 < 0) break;
LAB_180013754:
    if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '\\') ||
       ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '/')) {
      pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" + (iVar2 + 1)
      ;
      break;
    }
  }
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "Return Error:0x");
  puVar7 = (undefined8 *)std::setbase((int)local_38);
  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar8);
  if (pcVar12 != (char *)0x0) {
    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFile:");
    FUN_180001e50(pbVar6,pcVar12);
  }
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"\tLine:")
  ;
  puVar7 = (undefined8 *)std::setbase((int)local_48);
  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
  lVar9 = 0x35;
  goto LAB_180013932;
  while (uVar11 = uVar11 + 1, uVar11 < uVar1) {
LAB_180013400:
    pvVar4 = (void *)(**(code **)(**(longlong **)(param_1 + 8) + 8))
                               (*(longlong **)(param_1 + 8),puVar3,uVar11);
    plVar5 = *(longlong **)(param_1 + 8);
    if (pvVar4 == (void *)0x0) {
      pcVar13 = (code *)((undefined8 *)*plVar5)[8];
      if (pcVar13 == FUN_18000b3f0) {
        uVar8 = plVar5[3];
      }
      else {
        uVar8 = (*pcVar13)(plVar5);
        plVar5 = *(longlong **)(param_1 + 8);
      }
      pcVar13 = *(code **)(*plVar5 + 0x40);
      if ((uVar8 & 0xff00000000000000) == 0) {
        if (pcVar13 == FUN_18000b3f0) {
          uVar8 = plVar5[3];
        }
        else {
          uVar8 = (*pcVar13)(plVar5);
        }
        goto LAB_180013983;
      }
      if (pcVar13 == FUN_18000b3f0) {
        uVar8 = plVar5[3];
      }
      else {
        uVar8 = (*pcVar13)(plVar5);
      }
      iVar2 = 0x3e;
      pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
      lVar10 = 0x3e;
      goto LAB_180013643;
    }
    iVar2 = (**(code **)*plVar5)(plVar5,pvVar4,param_3);
    free(pvVar4);
    if (-1 < iVar2) {
      if (iVar2 == 0) {
        if (param_5 != (longlong *)0x0) {
          lVar10 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                             (*(longlong **)(param_1 + 8),puVar3,uVar11);
          *param_5 = lVar10;
          if (lVar10 == 0) {
            plVar5 = *(longlong **)(param_1 + 8);
            if (*(code **)(*plVar5 + 0x40) == FUN_18000b3f0) {
              uVar8 = plVar5[3];
            }
            else {
              uVar8 = (**(code **)(*plVar5 + 0x40))(plVar5);
              plVar5 = *(longlong **)(param_1 + 8);
            }
            pcVar13 = *(code **)(*plVar5 + 0x40);
            if ((uVar8 & 0xff00000000000000) == 0) goto LAB_180013973;
            if (pcVar13 == FUN_18000b3f0) {
              uVar8 = plVar5[3];
            }
            else {
              uVar8 = (*pcVar13)(plVar5);
            }
            iVar2 = 0x3e;
            pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
            lVar10 = 0x3e;
            goto LAB_1800134e0;
          }
        }
        *(undefined2 *)((longlong)param_4 + 6) = 1;
        *param_4 = param_2;
        *(ushort *)(param_4 + 1) = uVar11;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        *param_4 = param_2;
        *(ushort *)(param_4 + 1) = uVar11;
        *(undefined2 *)((longlong)param_4 + 6) = 0;
        if (param_5 != (longlong *)0x0) {
          *param_5 = 0;
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      break;
    }
  }
  goto LAB_180013987;
  while( true ) {
    iVar2 = iVar2 + -1;
    lVar10 = lVar10 + -1;
    if (lVar10 < 0) break;
LAB_180013643:
    if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '\\') ||
       ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '/')) {
      pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" + (iVar2 + 1)
      ;
      break;
    }
  }
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "Return Error:0x");
  puVar7 = (undefined8 *)std::setbase((int)local_38);
  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar8);
  if (pcVar12 != (char *)0x0) {
    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFile:");
    FUN_180001e50(pbVar6,pcVar12);
  }
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"\tLine:")
  ;
  puVar7 = (undefined8 *)std::setbase((int)local_48);
  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
  lVar9 = 0x5f;
  goto LAB_180013932;
  while( true ) {
    iVar2 = iVar2 + -1;
    lVar10 = lVar10 + -1;
    if (lVar10 < 0) break;
LAB_1800134e0:
    if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '\\') ||
       ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '/')) {
      pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" + (iVar2 + 1)
      ;
      break;
    }
  }
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "Return Error:0x");
  puVar7 = (undefined8 *)std::setbase((int)local_38);
  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar8);
  if (pcVar12 != (char *)0x0) {
    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFile:");
    FUN_180001e50(pbVar6,pcVar12);
  }
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"\tLine:")
  ;
  puVar7 = (undefined8 *)std::setbase((int)local_48);
  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
  lVar9 = 0x6e;
  goto LAB_180013932;
  while( true ) {
    iVar2 = iVar2 + -1;
    lVar10 = lVar10 + -1;
    if (lVar10 < 0) break;
LAB_1800131f0:
    if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '\\') ||
       ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '/')) {
      pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" + (iVar2 + 1)
      ;
      break;
    }
  }
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "Return Error:0x");
  puVar7 = (undefined8 *)std::setbase((int)local_48);
  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar8);
  if (pcVar12 != (char *)0x0) {
    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFile:");
    FUN_180001e50(pbVar6,pcVar12);
  }
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"\tLine:")
  ;
  puVar7 = (undefined8 *)std::setbase((int)local_38);
  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
  lVar9 = 0x41;
  goto LAB_180013932;
  while( true ) {
    iVar2 = iVar2 + -1;
    lVar10 = lVar10 + -1;
    if (lVar10 < 0) break;
LAB_180013320:
    if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '\\') ||
       ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar10] == '/')) {
      pcVar12 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" + (iVar2 + 1)
      ;
      break;
    }
  }
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "Return Error:0x");
  puVar7 = (undefined8 *)std::setbase((int)local_38);
  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,uVar8);
  if (pcVar12 != (char *)0x0) {
    pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFile:");
    FUN_180001e50(pbVar6,pcVar12);
  }
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"\tLine:")
  ;
  puVar7 = (undefined8 *)std::setbase((int)local_48);
  (*(code *)*puVar7)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4),*(undefined4 *)(puVar7 + 1));
  lVar9 = 0x55;
LAB_180013932:
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar6,lVar9);
  pbVar6 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "\tFuction:");
  FUN_180001e50(pbVar6,"CHFSPlusBTree::SearchNode");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
LAB_180013983:
  *(ulonglong *)(param_1 + 0x10) = uVar8;
LAB_180013987:
  if (puVar3 != (undefined2 *)0x0) {
    FUN_18000cce0(puVar3);
  }
  return *(undefined8 *)(param_1 + 0x10);
}




ulonglong FUN_180013a70(longlong *param_1,longlong *param_2,longlong *param_3)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  char *pcVar9;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  plVar8 = (longlong *)param_1[1];
  if (*(code **)(*plVar8 + 0x30) == FUN_180012cf0) {
    lVar7 = plVar8[6];
    iVar2 = 0;
    if (lVar7 != 0) {
      iVar2 = *(int *)(lVar7 + 2);
    }
    lVar3 = 0x5009a00000002;
    if (lVar7 != 0) {
      lVar3 = 0;
    }
    plVar8[3] = lVar3;
  }
  else {
    iVar2 = (**(code **)(*plVar8 + 0x30))();
  }
  if (iVar2 == 0) {
    plVar8 = (longlong *)param_1[1];
    if (*(code **)(*plVar8 + 0x40) == FUN_18000b3f0) {
      uVar6 = plVar8[3];
    }
    else {
      uVar6 = (**(code **)(*plVar8 + 0x40))(plVar8);
      plVar8 = (longlong *)param_1[1];
    }
    pcVar1 = *(code **)(*plVar8 + 0x40);
    if ((uVar6 & 0xff00000000000000) == 0) {
      if (pcVar1 == FUN_18000b3f0) {
        uVar6 = plVar8[3];
        param_1[2] = uVar6;
      }
      else {
        uVar6 = (*pcVar1)(plVar8);
        param_1[2] = uVar6;
      }
    }
    else {
      if (pcVar1 == FUN_18000b3f0) {
        uVar6 = plVar8[3];
      }
      else {
        uVar6 = (*pcVar1)(plVar8);
      }
      iVar2 = 0x3e;
      pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
      lVar7 = 0x3e;
      do {
        if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar7] == '\\')
           || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar7] == '/')
           ) {
          pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" +
                   (iVar2 + 1);
          break;
        }
        iVar2 = iVar2 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar5 = (undefined8 *)std::setbase((int)local_28);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,uVar6);
      if (pcVar9 != (char *)0x0) {
        pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar4,pcVar9);
      }
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar5 = (undefined8 *)std::setbase((int)local_18);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,0x90);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar4,"CHFSPlusBTree::Traverse");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
      param_1[2] = uVar6;
    }
  }
  else {
    uVar6 = FUN_180013de0(param_1,iVar2,param_2,param_3);
    param_1[2] = uVar6;
    if ((uVar6 & 0xff00000000000000) != 0) {
      iVar2 = 0x3e;
      pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
      lVar7 = 0x3e;
      do {
        if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar7] == '\\')
           || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar7] == '/')
           ) {
          pcVar9 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" +
                   (iVar2 + 1);
          break;
        }
        iVar2 = iVar2 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar5 = (undefined8 *)std::setbase((int)local_18);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,uVar6);
      if (pcVar9 != (char *)0x0) {
        pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar4,pcVar9);
      }
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar5 = (undefined8 *)std::setbase((int)local_18);
      (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),*(undefined4 *)(puVar5 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar4,0x93);
      pbVar4 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar4,"CHFSPlusBTree::Traverse");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
      uVar6 = param_1[2];
    }
  }
  return uVar6;
}




longlong FUN_180013de0(longlong *param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined2 *puVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  undefined8 *puVar8;
  short *_Memory;
  short *_Memory_00;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ushort uVar13;
  char *pcVar14;
  undefined8 local_50 [2];
  undefined8 local_40;
  longlong *local_38 [2];
  short *psVar15;
  
  local_40 = 0xfffffffffffffffe;
  psVar15 = (short *)0x0;
  if ((param_4 != (longlong *)0x0) && ((longlong *)*param_4 != (longlong *)0x0)) {
    iVar5 = (**(code **)(*(longlong *)*param_4 + 0x10))();
    cVar4 = (**(code **)(*(longlong *)*param_4 + 0x88))();
    if ((cVar4 != '\0') || (iVar5 == 0)) {
      return 0x500a30000000d;
    }
  }
  puVar6 = (undefined2 *)
           (**(code **)(*(longlong *)param_1[1] + 0x38))((longlong *)param_1[1],param_2);
  if (puVar6 != (undefined2 *)0x0) {
    lVar11 = *(longlong *)(puVar6 + 0x10);
    if (lVar11 != 0) {
      uVar2 = *(ushort *)(lVar11 + 10);
      cVar4 = *(char *)(lVar11 + 8);
      if (1 < (byte)(cVar4 + 1U)) {
        param_1[2] = 0x500ad00000006;
        FUN_18000cce0(puVar6);
        return param_1[2];
      }
      if (cVar4 == '\0') {
        if (uVar2 != 0) {
          do {
            if ((param_4 == (longlong *)0x0) || (iVar5 = FUN_1800094c0(param_4), iVar5 == 0)) break;
            iVar5 = (**(code **)(*(longlong *)param_1[1] + 0x28))
                              ((longlong *)param_1[1],puVar6,psVar15);
            if (iVar5 == 0) {
              pcVar3 = *(code **)(*(longlong *)param_1[1] + 0x40);
              if (pcVar3 == FUN_18000b3f0) {
                uVar10 = ((longlong *)param_1[1])[3];
              }
              else {
                uVar10 = (*pcVar3)();
              }
              plVar9 = (longlong *)param_1[1];
              pcVar3 = *(code **)(*plVar9 + 0x40);
              if ((uVar10 & 0xff00000000000000) == 0) {
                if (pcVar3 == FUN_18000b3f0) {
                  param_1[2] = plVar9[3];
                  FUN_18000cce0(puVar6);
                  return param_1[2];
                }
                lVar11 = (*pcVar3)();
                param_1[2] = lVar11;
                FUN_18000cce0(puVar6);
                return param_1[2];
              }
              if (pcVar3 == FUN_18000b3f0) {
                lVar11 = plVar9[3];
              }
              else {
                lVar11 = (*pcVar3)();
              }
              pcVar14 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
              iVar5 = 0x3e;
              lVar12 = 0x3e;
              goto LAB_180014383;
            }
            uVar10 = FUN_180013de0(param_1,iVar5,param_3,param_4);
            param_1[2] = uVar10;
            if ((uVar10 & 0xff00000000000000) != 0) {
              pcVar14 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
              iVar5 = 0x3e;
              lVar11 = 0x3e;
              goto LAB_180014215;
            }
            uVar13 = (short)psVar15 + 1;
            psVar15 = (short *)(ulonglong)uVar13;
          } while (uVar13 < uVar2);
        }
      }
      else if ((cVar4 == -1) && (uVar13 = 0, _Memory = psVar15, _Memory_00 = psVar15, uVar2 != 0)) {
        do {
          if ((param_4 == (longlong *)0x0) || (iVar5 = FUN_1800094c0(param_4), iVar5 == 0)) break;
          _Memory = (short *)(**(code **)(*(longlong *)param_1[1] + 8))
                                       ((longlong *)param_1[1],puVar6,uVar13);
          plVar9 = (longlong *)param_1[1];
          if (_Memory == (short *)0x0) {
            if (*(code **)(*plVar9 + 0x40) == FUN_18000b3f0) {
              uVar10 = plVar9[3];
            }
            else {
              uVar10 = (**(code **)(*plVar9 + 0x40))();
            }
            plVar9 = (longlong *)param_1[1];
            pcVar3 = *(code **)(*plVar9 + 0x40);
            if ((uVar10 & 0xff00000000000000) == 0) {
              if (pcVar3 == FUN_18000b3f0) {
                lVar11 = plVar9[3];
              }
              else {
                lVar11 = (*pcVar3)();
              }
              goto LAB_1800147eb;
            }
            if (pcVar3 == FUN_18000b3f0) {
              lVar11 = plVar9[3];
            }
            else {
              lVar11 = (*pcVar3)();
            }
            pcVar14 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
            iVar5 = 0x3e;
            lVar12 = 0x3e;
            goto LAB_1800146e0;
          }
          _Memory_00 = (short *)(**(code **)(*plVar9 + 0x18))(plVar9,puVar6,uVar13);
          if (_Memory_00 != (short *)0x0) {
            if (param_3 == (longlong *)0x0) {
              (**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],_Memory);
              (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],_Memory_00);
              free(_Memory_00);
              free(_Memory);
              _Memory = psVar15;
              _Memory_00 = psVar15;
            }
            else {
              local_38[0] = (longlong *)operator_new(0xd0);
              plVar9 = FUN_180009770(local_38[0],*param_1,(longlong)_Memory,_Memory_00,0);
              free(_Memory_00);
              free(_Memory);
              if (plVar9[10] == -1) {
                (**(code **)(*plVar9 + 0x30))(plVar9,1);
                _Memory = psVar15;
                _Memory_00 = psVar15;
              }
              else {
                if (((char)param_4[2] == '\0') && (param_4[1] != 0)) {
                  plVar1 = (longlong *)(param_4[1] + 0x10);
                  *plVar1 = *plVar1 + 1;
                  (**(code **)(*(longlong *)*param_4 + 8))((longlong *)*param_4,param_4[1]);
                }
                local_50[0] = 0;
                iVar5 = (**(code **)(*param_3 + 0x28))(param_3,plVar9,5,local_50);
                _Memory = psVar15;
                _Memory_00 = psVar15;
                if (iVar5 == 0) {
                  (**(code **)(*plVar9 + 0x30))(plVar9,1);
                }
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar2);
        if (_Memory_00 != (short *)0x0) {
          free(_Memory_00);
        }
        if (_Memory != (short *)0x0) {
          free(_Memory);
        }
      }
      FUN_18000cce0(puVar6);
      return param_1[2];
    }
    uVar10 = *(ulonglong *)(puVar6 + 4);
    if ((uVar10 & 0xff00000000000000) != 0) {
      pcVar14 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
      iVar5 = 0x3e;
      lVar11 = 0x3e;
      do {
        if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar11] == '\\')
           || ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar11] == '/'
              )) {
          pcVar14 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" +
                    (iVar5 + 1);
          break;
        }
        iVar5 = iVar5 + -1;
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
      pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar8 = (undefined8 *)std::setbase((int)local_38);
      (*(code *)*puVar8)(pbVar7 + *(int *)(*(longlong *)pbVar7 + 4),*(undefined4 *)(puVar8 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,uVar10);
      if (pcVar14 != (char *)0x0) {
        pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar7,pcVar14);
      }
      pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar8 = (undefined8 *)std::setbase((int)local_50);
      (*(code *)*puVar8)(pbVar7 + *(int *)(*(longlong *)pbVar7 + 4),*(undefined4 *)(puVar8 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,0xa9);
      pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar7,"CHFSPlusBTree::TraverseNode");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    }
    param_1[2] = uVar10;
    FUN_18000cce0(puVar6);
    return param_1[2];
  }
  pcVar3 = *(code **)(*(longlong *)param_1[1] + 0x40);
  if (pcVar3 == FUN_18000b3f0) {
    uVar10 = ((longlong *)param_1[1])[3];
  }
  else {
    uVar10 = (*pcVar3)();
  }
  plVar9 = (longlong *)param_1[1];
  pcVar3 = *(code **)(*plVar9 + 0x40);
  if ((uVar10 & 0xff00000000000000) == 0) {
    if (pcVar3 == FUN_18000b3f0) {
      lVar11 = plVar9[3];
      param_1[2] = lVar11;
      return lVar11;
    }
    lVar11 = (*pcVar3)();
    param_1[2] = lVar11;
    return lVar11;
  }
  if (pcVar3 == FUN_18000b3f0) {
    lVar11 = plVar9[3];
  }
  else {
    lVar11 = (*pcVar3)();
  }
  pcVar14 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp";
  iVar5 = 0x3e;
  lVar12 = 0x3e;
  while (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar12] != '\\' &&
         ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar12] != '/'))) {
    iVar5 = iVar5 + -1;
    lVar12 = lVar12 + -1;
    if (lVar12 < 0) {
LAB_180013ee6:
      pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "Return Error:0x");
      puVar8 = (undefined8 *)std::setbase((int)local_38);
      (*(code *)*puVar8)(pbVar7 + *(int *)(*(longlong *)pbVar7 + 4),*(undefined4 *)(puVar8 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,lVar11);
      if (pcVar14 != (char *)0x0) {
        pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                               "\tFile:");
        FUN_180001e50(pbVar7,pcVar14);
      }
      pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tLine:");
      puVar8 = (undefined8 *)std::setbase((int)local_50);
      (*(code *)*puVar8)(pbVar7 + *(int *)(*(longlong *)pbVar7 + 4),*(undefined4 *)(puVar8 + 1));
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,0xa6);
      pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFuction:");
      FUN_180001e50(pbVar7,"CHFSPlusBTree::TraverseNode");
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
      param_1[2] = lVar11;
      return lVar11;
    }
  }
  pcVar14 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" + (iVar5 + 1);
  goto LAB_180013ee6;
LAB_1800146e0:
  if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar12] == '\\') ||
     ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar12] == '/')) {
    pcVar14 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" + (iVar5 + 1);
    goto LAB_180014700;
  }
  iVar5 = iVar5 + -1;
  lVar12 = lVar12 + -1;
  if (lVar12 < 0) {
LAB_180014700:
    pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar8 = (undefined8 *)std::setbase((int)local_38);
    (*(code *)*puVar8)(pbVar7 + *(int *)(*(longlong *)pbVar7 + 4),*(undefined4 *)(puVar8 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,lVar11);
    if (pcVar14 != (char *)0x0) {
      pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar7,pcVar14);
    }
    pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar8 = (undefined8 *)std::setbase((int)local_50);
    (*(code *)*puVar8)(pbVar7 + *(int *)(*(longlong *)pbVar7 + 4),*(undefined4 *)(puVar8 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,0xbf);
    pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFuction:");
    FUN_180001e50(pbVar7,"CHFSPlusBTree::TraverseNode");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
              ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
LAB_1800147eb:
    param_1[2] = lVar11;
    if (_Memory_00 != (short *)0x0) {
      free(_Memory_00);
    }
    FUN_18000cce0(puVar6);
    return param_1[2];
  }
  goto LAB_1800146e0;
LAB_180014383:
  if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar12] == '\\') ||
     ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar12] == '/')) {
    pcVar14 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" + (iVar5 + 1);
    goto LAB_1800143a3;
  }
  iVar5 = iVar5 + -1;
  lVar12 = lVar12 + -1;
  if (lVar12 < 0) {
LAB_1800143a3:
    pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar8 = (undefined8 *)std::setbase((int)local_38);
    (*(code *)*puVar8)(pbVar7 + *(int *)(*(longlong *)pbVar7 + 4),*(undefined4 *)(puVar8 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,lVar11);
    if (pcVar14 != (char *)0x0) {
      pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar7,pcVar14);
    }
    pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar8 = (undefined8 *)std::setbase((int)local_50);
    (*(code *)*puVar8)(pbVar7 + *(int *)(*(longlong *)pbVar7 + 4),*(undefined4 *)(puVar8 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,0xb4);
    pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFuction:");
    FUN_180001e50(pbVar7,"CHFSPlusBTree::TraverseNode");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
              ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    param_1[2] = lVar11;
    FUN_18000cce0(puVar6);
    return param_1[2];
  }
  goto LAB_180014383;
LAB_180014215:
  if (("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar11] == '\\') ||
     ("e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp"[lVar11] == '/')) {
    pcVar14 = "e:\\drw\\_drw_main\\drwintelligentscan\\hfspluslib\\hfsplusbtree.cpp" + (iVar5 + 1);
    goto LAB_180014235;
  }
  iVar5 = iVar5 + -1;
  lVar11 = lVar11 + -1;
  if (lVar11 < 0) {
LAB_180014235:
    pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "Return Error:0x");
    puVar8 = (undefined8 *)std::setbase((int)local_38);
    (*(code *)*puVar8)(pbVar7 + *(int *)(*(longlong *)pbVar7 + 4),*(undefined4 *)(puVar8 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,uVar10);
    if (pcVar14 != (char *)0x0) {
      pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                             "\tFile:");
      FUN_180001e50(pbVar7,pcVar14);
    }
    pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tLine:");
    puVar8 = (undefined8 *)std::setbase((int)local_38);
    (*(code *)*puVar8)(pbVar7 + *(int *)(*(longlong *)pbVar7 + 4),*(undefined4 *)(puVar8 + 1));
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar7,0xb7);
    pbVar7 = FUN_180001e50((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "\tFuction:");
    FUN_180001e50(pbVar7,"CHFSPlusBTree::TraverseNode");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
              ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,FUN_180002030);
    FUN_18000cce0(puVar6);
    return param_1[2];
  }
  goto LAB_180014215;
}




undefined8 * FUN_180014880(undefined8 *param_1,uint param_2)

{
  FUN_1800148c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800148c0(undefined8 *param_1)

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




ulonglong FUN_180014940(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001800149d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)ppuVar3[3])(plVar5);
        return uVar4;
      }
      plVar5 = (longlong *)plVar5[1];
    } while (plVar5 != (longlong *)0x0);
  }
  return 0xe;
}




void FUN_1800149e0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

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




undefined8 FUN_180014a80(longlong param_1,longlong *param_2)

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




undefined8 FUN_180014c30(longlong param_1,longlong *param_2)

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




undefined8 * FUN_180014e10(longlong param_1)

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




undefined8 * FUN_180015020(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = IDataRunList::vftable;
  puVar1 = param_1 + 1;
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
  FUN_18000b350(param_1 + 6,param_1[4],puVar1);
  return param_1;
}




undefined8 * FUN_1800150a0(undefined8 *param_1,uint param_2)

{
  FUN_1800150e0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800150e0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *local_40 [2];
  ulonglong local_30;
  undefined8 local_28 [4];
  
  *param_1 = IDataRunList::vftable;
  FUN_18000b350(local_40,param_1[4],param_1 + 1);
  puVar2 = FUN_18000b330(param_1 + 1,local_28);
  plVar1 = local_40[0];
  uVar4 = local_30;
  if (local_30 != puVar2[2]) {
    do {
      if (plVar1 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar1;
      }
      free(*(void **)(*(longlong *)
                       (*(longlong *)(lVar3 + 8) +
                       (*(longlong *)(lVar3 + 0x10) - 1U & uVar4 >> 1) * 8) +
                     (ulonglong)((uint)uVar4 & 1) * 8));
      uVar4 = uVar4 + 1;
      puVar2 = FUN_18000b330(param_1 + 1,local_28);
    } while (uVar4 != puVar2[2]);
  }
  FUN_1800155b0((longlong)(param_1 + 1));
  FUN_18000b350(local_40,param_1[4],param_1 + 1);
  if ((((longlong *)param_1[6] != local_40[0]) && (local_40[0] != (longlong *)0x0)) &&
     ((undefined8 *)*local_40[0] != (undefined8 *)0x0)) {
    param_1[6] = *(undefined8 *)*local_40[0];
  }
  param_1[8] = local_30;
  FUN_1800155b0((longlong)(param_1 + 1));
  free((void *)param_1[1]);
  param_1[1] = 0;
  return;
}




longlong FUN_180015220(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *local_20 [2];
  ulonglong local_10;
  
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  FUN_18000b350(local_20,*(undefined8 *)(param_1 + 0x20),(undefined8 *)(param_1 + 8));
  if (((*(longlong **)(param_1 + 0x30) != local_20[0]) && (local_20[0] != (longlong *)0x0)) &&
     ((undefined8 *)*local_20[0] != (undefined8 *)0x0)) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)*local_20[0];
  }
  *(ulonglong *)(param_1 + 0x40) = local_10;
  puVar1 = FUN_18000b330((undefined8 *)(param_1 + 8),local_20);
  if (local_10 != puVar1[2]) {
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      lVar2 = **(longlong **)(param_1 + 0x30);
    }
    lVar2 = *(longlong *)
             (*(longlong *)
               (*(longlong *)(lVar2 + 8) + (local_10 >> 1 & *(longlong *)(lVar2 + 0x10) - 1U) * 8) +
             (ulonglong)((uint)local_10 & 1) * 8);
  }
  return lVar2;
}




bool FUN_1800152d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_28 [5];
  
  puVar1 = FUN_18000b330((undefined8 *)(param_1 + 8),local_28);
  return *(longlong *)(param_1 + 0x40) == puVar1[2];
}




void FUN_180015300(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 local_res8 [2];
  longlong *local_20 [2];
  ulonglong local_10;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  local_res8[0] = (undefined4)*(undefined8 *)(param_1 + 0x28);
  (**(code **)(*param_2 + 0x78))(param_2,local_res8,4,param_4,0xfffffffffffffffe);
  FUN_18000b350(local_20,*(undefined8 *)(param_1 + 0x20),puVar1);
  plVar4 = (longlong *)0x0;
  if ((local_20[0] != (longlong *)0x0) && ((undefined8 *)*local_20[0] != (undefined8 *)0x0)) {
    plVar4 = *(longlong **)*local_20[0];
  }
  puVar2 = FUN_18000b330(puVar1,local_20);
  if (local_10 != puVar2[2]) {
    do {
      if (plVar4 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar4;
      }
      (**(code **)(*param_2 + 0x78))
                (param_2,*(undefined8 *)
                          (*(longlong *)
                            (*(longlong *)(lVar3 + 8) +
                            (local_10 >> 1 & *(longlong *)(lVar3 + 0x10) - 1U) * 8) +
                          (ulonglong)((uint)local_10 & 1) * 8),0x10);
      local_10 = local_10 + 1;
      puVar2 = FUN_18000b330(puVar1,local_20);
    } while (local_10 != puVar2[2]);
  }
  return;
}




void FUN_1800153f0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint local_res10 [2];
  undefined8 *local_res18;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar6 = 0;
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,local_res10,4,param_4,0xfffffffffffffffe);
  if (local_res10[0] != 0) {
    do {
      local_40 = 0;
      uStack_38 = 0;
      (**(code **)(*param_2 + 0x70))(param_2,&local_40,0x10);
      puVar2 = (undefined8 *)operator_new(0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      *puVar2 = local_40;
      puVar2[1] = uStack_38;
      uVar5 = *(ulonglong *)(param_1 + 0x20);
      local_res18 = puVar2;
      if ((((int)*(longlong *)(param_1 + 0x28) + (int)uVar5 & 1U) == 0) &&
         (*(ulonglong *)(param_1 + 0x18) <= *(longlong *)(param_1 + 0x28) + 2U >> 1)) {
        FUN_18000b130(param_1 + 8,uVar5);
        uVar5 = *(ulonglong *)(param_1 + 0x20);
      }
      uVar5 = *(longlong *)(param_1 + 0x18) * 2 - 1U & uVar5;
      *(ulonglong *)(param_1 + 0x20) = uVar5;
      uVar5 = *(longlong *)(param_1 + 0x28) + uVar5;
      lVar1 = (*(longlong *)(param_1 + 0x18) - 1U & uVar5 >> 1) * 8;
      lVar4 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(lVar4 + lVar1) == 0) {
        pvVar3 = operator_new(0x10);
        *(void **)(lVar1 + *(longlong *)(param_1 + 0x10)) = pvVar3;
        lVar4 = *(longlong *)(param_1 + 0x10);
      }
      *(undefined8 **)(*(longlong *)(lVar1 + lVar4) + (ulonglong)((uint)uVar5 & 1) * 8) = puVar2;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res10[0]);
  }
  return;
}




void FUN_180015540(undefined8 *param_1)

{
  FUN_1800155b0((longlong)param_1);
  free((void *)*param_1);
  *param_1 = 0;
  return;
}




void FUN_180015580(undefined8 *param_1)

{
  free((void *)*param_1);
  *param_1 = 0;
  return;
}




void FUN_1800155b0(longlong param_1)

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




void FUN_180015670(longlong param_1)

{
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180019b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(*(void **)(param_1 + 8));
  return;
}




void FUN_180015680(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong local_58 [11];
  
  local_58[8] = DAT_180028010 ^ (ulonglong)local_58;
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




void * FUN_1800157a0(longlong param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  undefined7 extraout_var;
  undefined8 *puVar8;
  undefined7 extraout_var_00;
  void *_Dst;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte local_res20 [8];
  byte local_88 [8];
  longlong local_80;
  undefined8 local_78;
  byte *local_70;
  byte *pbStack_68;
  byte *pbStack_60;
  undefined8 local_58 [4];
  
  local_78 = 0xfffffffffffffffe;
  local_70 = (byte *)0x0;
  pbStack_68 = (byte *)0x0;
  pbStack_60 = (byte *)0x0;
  FUN_180015e80((longlong *)&local_70,param_2);
  lVar10 = 0;
  local_80 = 0;
  *param_3 = 0;
  *param_2 = 0;
  plVar7 = (longlong *)FUN_180015220(param_1);
  if (plVar7 != (longlong *)0x0) {
    *param_2 = *plVar7;
    bVar1 = false;
    bVar3 = FUN_1800152d0(param_1);
    pbVar9 = pbStack_68;
    if ((int)CONCAT71(extraout_var,bVar3) == 0) {
      do {
        lVar12 = *plVar7;
        uVar13 = lVar12 - lVar10;
        bVar4 = FUN_180015680(uVar13);
        uVar11 = plVar7[1];
        bVar5 = FUN_180015680(uVar11);
        if (lVar12 == -1) {
          bVar1 = true;
        }
        bVar2 = 0;
        if (lVar12 != -1) {
          local_80 = lVar12;
          bVar2 = bVar4;
        }
        *param_3 = *param_3 + uVar11;
        lVar10 = plVar7[1];
        local_res20[0] = bVar2 << 4 | bVar5 & 0xf;
        if (pbStack_60 == pbVar9) {
          FUN_1800160b0((longlong *)&local_70,pbVar9,local_res20);
        }
        else {
          *pbVar9 = local_res20[0];
          pbStack_68 = pbStack_68 + 1;
        }
        uVar6 = 0;
        if (bVar5 != 0) {
          do {
            local_88[0] = (byte)(lVar10 >> ((byte)(uVar6 << 3) & 0x3f));
            if (pbStack_60 == pbStack_68) {
              FUN_1800160b0((longlong *)&local_70,pbStack_68,local_88);
            }
            else {
              *pbStack_68 = local_88[0];
              pbStack_68 = pbStack_68 + 1;
            }
            bVar4 = (char)uVar6 + 1;
            uVar6 = (uint)bVar4;
          } while (bVar4 < bVar5);
        }
        uVar6 = 0;
        if (bVar2 != 0) {
          do {
            local_88[0] = (byte)((longlong)uVar13 >> ((byte)(uVar6 << 3) & 0x3f));
            if (pbStack_60 == pbStack_68) {
              FUN_1800160b0((longlong *)&local_70,pbStack_68,local_88);
            }
            else {
              *pbStack_68 = local_88[0];
              pbStack_68 = pbStack_68 + 1;
            }
            bVar4 = (char)uVar6 + 1;
            uVar6 = (uint)bVar4;
          } while (bVar4 < bVar2);
        }
        plVar7 = (longlong *)0x0;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
        lVar10 = *(longlong *)(param_1 + 0x40);
        pbVar9 = pbStack_68;
        puVar8 = FUN_18000b330((undefined8 *)(param_1 + 8),local_58);
        if (lVar10 != puVar8[2]) {
          puVar8 = *(undefined8 **)(param_1 + 0x30);
          if (puVar8 != (undefined8 *)0x0) {
            puVar8 = (undefined8 *)*puVar8;
          }
          plVar7 = *(longlong **)
                    (*(longlong *)
                      (puVar8[1] + (puVar8[2] - 1 & *(ulonglong *)(param_1 + 0x40) >> 1) * 8) +
                    (ulonglong)((uint)*(ulonglong *)(param_1 + 0x40) & 1) * 8);
        }
        bVar3 = FUN_1800152d0(param_1);
        lVar10 = local_80;
      } while ((int)CONCAT71(extraout_var_00,bVar3) == 0);
      if (bVar1) {
        *param_3 = 0;
      }
    }
    if (local_70 != pbVar9) {
      local_res20[0] = 0;
      if (pbStack_60 == pbVar9) {
        FUN_1800160b0((longlong *)&local_70,pbVar9,local_res20);
      }
      else {
        *pbVar9 = 0;
        pbStack_68 = pbStack_68 + 1;
      }
      uVar6 = (int)pbStack_68 - (int)local_70;
      _Dst = operator_new((ulonglong)uVar6);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,local_70,(ulonglong)uVar6);
      }
      goto LAB_180015a43;
    }
  }
  _Dst = (void *)0x0;
LAB_180015a43:
  if (local_70 != (byte *)0x0) {
    pbVar9 = local_70;
    if ((0xfff < (ulonglong)((longlong)pbStack_60 - (longlong)local_70)) &&
       (pbVar9 = *(byte **)(local_70 + -8), (byte *)0x1f < local_70 + (-8 - (longlong)pbVar9))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pbVar9);
  }
  return _Dst;
}




undefined2 * FUN_180015ab0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *_Memory;
  void *pvVar3;
  
  if (param_1 == (longlong *)0x0) {
    _Memory = (undefined2 *)0x0;
  }
  else {
    _Memory = (undefined2 *)operator_new(0x10);
    *_Memory = 0;
    *(undefined8 *)(_Memory + 4) = 0;
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if ((iVar2 == 1) || (iVar2 = (**(code **)(*param_1 + 0x28))(param_1), iVar2 == 0xe)) {
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
      *_Memory = uVar1;
    }
    pvVar3 = FUN_1800157a0((longlong)param_1,param_2,param_3);
    *(void **)(_Memory + 4) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      FUN_180015670((longlong)_Memory);
      free(_Memory);
      _Memory = (undefined2 *)0x0;
    }
  }
  return _Memory;
}




ushort * FUN_180015b70(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  undefined8 *_Memory;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar10;
  ushort *puVar11;
  longlong *plVar12;
  ushort *local_res8;
  longlong *local_30;
  longlong local_28;
  ushort *puVar9;
  
  pcVar3 = *(char **)(param_1 + 4);
  if (pcVar3 == (char *)0x0) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)0x0;
    uVar8 = 0;
    cVar1 = *pcVar3;
    puVar11 = param_1;
    puVar7 = puVar10;
    puVar9 = puVar10;
    while (cVar1 != '\0') {
      uVar8 = (int)puVar9 + (*(byte *)((longlong)puVar7 + (longlong)pcVar3) & 0xf) +
              (*(byte *)((longlong)puVar7 + (longlong)pcVar3) >> 4) + 1;
      puVar9 = (ushort *)(ulonglong)uVar8;
      puVar11 = (ushort *)(longlong)(int)uVar8;
      puVar7 = puVar11;
      cVar1 = *(char *)((longlong)puVar11 + (longlong)pcVar3);
    }
    if (*param_1 == 0) {
      puVar10 = (ushort *)operator_new(0x48);
      local_res8 = puVar10;
      FUN_180015020((undefined8 *)puVar10);
      *(undefined ***)puVar10 = CNoneResidentNTFSDataRunList::vftable;
      FUN_180017bf0((longlong)puVar10,*(longlong *)(param_1 + 4),uVar8 + 1);
    }
    else {
      local_30 = (longlong *)0x0;
      local_28 = 0;
      local_30 = (longlong *)FUN_180016000(puVar11,(void *)0x0,(undefined8 *)0x0);
      FUN_180019c10(*(longlong *)(param_1 + 4),uVar8 + 1,(longlong)&local_30);
      if (local_28 != 0) {
        _Memory = *(undefined8 **)(*local_30 + 0x10);
        puVar10 = (ushort *)operator_new(0x50);
        local_res8 = puVar10;
        FUN_180015020((undefined8 *)puVar10);
        *(undefined ***)puVar10 = CResidentNTFSDataRunList::vftable;
        puVar10[0x24] = 0;
        puVar10[0x25] = 0;
        uVar2 = *param_1;
        uVar4 = _Memory[2];
        uVar5 = *_Memory;
        local_res8 = (ushort *)operator_new(0x10);
        local_res8[0] = 0;
        local_res8[1] = 0;
        local_res8[2] = 0;
        local_res8[3] = 0;
        local_res8[4] = 0;
        local_res8[5] = 0;
        local_res8[6] = 0;
        local_res8[7] = 0;
        *(undefined8 *)local_res8 = uVar5;
        *(undefined8 *)(local_res8 + 4) = uVar4;
        FUN_18000b070((longlong)(puVar10 + 4),&local_res8);
        *(uint *)(puVar10 + 0x24) = (uint)uVar2;
        free(_Memory);
        plVar12 = (longlong *)*local_30;
        *local_30 = (longlong)local_30;
        local_30[1] = (longlong)local_30;
        local_28 = 0;
        if (plVar12 != local_30) {
          do {
            plVar6 = (longlong *)*plVar12;
            free(plVar12);
            plVar12 = plVar6;
          } while (plVar6 != local_30);
        }
      }
      plVar12 = (longlong *)*local_30;
      *local_30 = (longlong)local_30;
      local_30[1] = (longlong)local_30;
      local_28 = 0;
      if (plVar12 != local_30) {
        do {
          plVar6 = (longlong *)*plVar12;
          free(plVar12);
          plVar12 = plVar6;
        } while (plVar6 != local_30);
      }
      free(local_30);
    }
  }
  return puVar10;
}




void FUN_180015d80(longlong *param_1)

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




void FUN_180015df0(longlong *param_1)

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
  free((void *)*param_1);
  return;
}




void FUN_180015e60(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180015e80(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  void *_Src;
  longlong lVar3;
  undefined8 local_res10;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  local_res10 = param_2;
  _Dst = operator_new(0x80);
  lVar3 = param_1[1];
  _Src = (void *)*param_1;
  FUN_1800022a0((undefined1 *)&local_res10);
  memmove(_Dst,_Src,lVar3 - (longlong)_Src);
  FUN_180015f20(param_1,(longlong)_Dst,lVar1 - lVar2,0x80);
  return;
}




longlong FUN_180015f00(longlong param_1)

{
  return param_1 + 8;
}




undefined8 FUN_180015f10(undefined8 param_1)

{
  return param_1;
}




void FUN_180015f20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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




void FUN_180015fb0(undefined8 param_1,void *param_2,ulonglong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < param_3) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




undefined8 * FUN_180015ff0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}




void * FUN_180016000(undefined8 param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *local_res10;
  undefined8 *local_res18;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_2 == (void *)0x0) {
    local_res10 = puVar1;
    local_res18 = puVar1;
  }
  *puVar1 = local_res10;
  puVar1[1] = local_res18;
  return puVar1;
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




longlong FUN_1800160b0(longlong *param_1,void *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  size_t _Size;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  void *local_res10;
  ulonglong local_res20;
  
  lVar5 = *param_1;
  lVar8 = (longlong)param_2 - lVar5;
  if (param_1[1] - lVar5 == 0x7fffffffffffffff) {
    FUN_180002230();
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  uVar1 = (param_1[1] - lVar5) + 1;
  uVar3 = param_1[2] - lVar5;
  uVar6 = uVar1;
  if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) && (uVar6 = (uVar3 >> 1) + uVar3, uVar6 < uVar1))
  {
    uVar6 = uVar1;
  }
  local_res20 = uVar6;
  if (uVar6 < 0x1000) {
    if (uVar6 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar6);
    }
  }
  else {
    uVar3 = uVar6 + 0x27;
    if (uVar3 <= uVar6) {
      uVar3 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new(uVar3);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar4;
  }
  *(undefined1 *)((longlong)_Dst + lVar8) = *param_3;
  pvVar4 = (void *)param_1[1];
  local_res10 = _Dst;
  if (param_2 == pvVar4) {
    param_2 = (void *)*param_1;
    FUN_1800022a0(local_res8);
    _Size = (longlong)pvVar4 - (longlong)param_2;
    pvVar4 = _Dst;
  }
  else {
    pvVar4 = (void *)*param_1;
    FUN_1800022a0(local_res8);
    memmove(_Dst,pvVar4,(longlong)param_2 - (longlong)pvVar4);
    lVar7 = param_1[1];
    lVar5 = lVar8 + 1;
    FUN_1800022a0(local_res8);
    _Size = lVar7 - (longlong)param_2;
    pvVar4 = (void *)(lVar5 + (longlong)_Dst);
  }
  memmove(pvVar4,param_2,_Size);
  FUN_180015f20(param_1,(longlong)_Dst,uVar1,uVar6);
  return *param_1 + lVar8;
}




void FUN_180016210(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x290);
  FUN_180016230(puVar1);
  return;
}




undefined8 * FUN_180016230(undefined8 *param_1)

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




undefined8 * FUN_180016380(undefined8 *param_1,uint param_2)

{
  FUN_1800163c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800163c0(undefined8 *param_1)

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
    if ((0xfff < (ulonglong)((param_1[0x44] - (longlong)pvVar4 >> 3) * 8)) &&
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
  *param_1 = CFileNode::vftable;
  plVar7 = (longlong *)param_1[6];
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




void FUN_180016590(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1d0) = param_3;
  *(undefined8 *)(param_1 + 0x1c8) = param_2;
  return;
}




undefined8 FUN_1800165a0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined8 *)(param_1 + 0x1c8);
  *param_3 = *(undefined4 *)(param_1 + 0x1d0);
  return 1;
}




void FUN_1800165c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1d4) = param_2;
  return;
}




undefined4 FUN_1800165d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1d4);
}




undefined8 FUN_1800165e0(longlong param_1,void *param_2)

{
  memmove(param_2,(void *)(param_1 + 0xc0),0x108);
  return 1;
}




undefined8 FUN_180016610(longlong param_1,void *param_2)

{
  memmove((void *)(param_1 + 0xc0),param_2,0x108);
  return 1;
}




undefined8 FUN_180016630(longlong param_1,void *param_2)

{
  memmove(param_2,(void *)(param_1 + 0x98),0x28);
  return 1;
}




void FUN_180016660(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180028010 ^ (ulonglong)auStack_78;
  bVar2 = 0;
  bVar6 = *(byte *)(param_2 + 0xe) & 3;
  if (bVar6 != 2) {
    bVar2 = 2;
  }
  if (param_3 == 0) {
    FUN_1800168a0((longlong)param_2,&local_58,1,bVar2);
    iVar3 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar3 != 0) {
      iVar3 = *(int *)((longlong)param_2 + 0x9c) - local_54;
      lVar4 = param_2[0x15] - local_48;
      iVar5 = *(int *)((longlong)param_2 + 0xb4) - local_3c;
      iVar7 = *(int *)((longlong)param_2 + 0xbc) - local_34;
      if (bVar6 != 2) {
        iVar3 = iVar3 + local_58;
        iVar5 = iVar5 + local_40;
        lVar4 = lVar4 + local_50;
        iVar7 = iVar7 + local_38;
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
LAB_1800167c6:
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
        if ((iVar3 == 0) && (iVar5 == 0)) goto LAB_1800167c6;
        if (iVar3 < iVar7) {
          *(byte *)(plVar1 + 0xe) = *(byte *)(plVar1 + 0xe) & 0xfd | 1;
        }
        else {
          *(byte *)(plVar1 + 0xe) = *(byte *)(plVar1 + 0xe) & 0xfe | 2;
        }
      }
      iVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      if (iVar3 != 0) {
        iVar3 = *(int *)((longlong)plVar1 + 0x9c) - local_54;
        lVar4 = plVar1[0x15] - local_48;
        iVar5 = *(int *)((longlong)plVar1 + 0xb4) - local_3c;
        iVar7 = *(int *)((longlong)plVar1 + 0xbc) - local_34;
        if (bVar6 != 2) {
          iVar3 = iVar3 + local_58;
          iVar5 = iVar5 + local_40;
          lVar4 = lVar4 + local_50;
          iVar7 = iVar7 + local_38;
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
  __security_check_cookie(local_30 ^ (ulonglong)auStack_78);
  return;
}




undefined8 FUN_180016880(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x30), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000180016894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,param_3);
    return uVar2;
  }
  return 0;
}




void FUN_1800168a0(longlong param_1,void *param_2,int param_3,byte param_4)

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
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_e8 [32];
  byte local_c8;
  longlong *local_c0;
  void *pvStack_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  int local_98;
  void *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  int local_68;
  int iStack_64;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  byte local_3c;
  ulonglong local_38;
  
  local_88 = 0xfffffffffffffffe;
  local_38 = DAT_180028010 ^ (ulonglong)auStack_e8;
  lVar12 = 0;
  local_68 = 0;
  iStack_64 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_c8 = param_4;
  local_98 = param_3;
  local_90 = param_2;
  local_40 = param_3;
  local_3c = param_4;
  if (param_1 != 0) {
    local_c0 = (longlong *)0x0;
    pvStack_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_c0 = (longlong *)operator_new(0x10);
    *local_c0 = 0;
    local_c0[1] = 0;
    *local_c0 = (longlong)&local_c0;
    if ((((int)local_a0 + (int)local_a8 & 1U) == 0) && (local_b0 <= local_a0 + 2U >> 1)) {
      FUN_18000b130((longlong)&local_c0,local_a8);
    }
    local_a8 = local_a8 & local_b0 * 2 - 1;
    uVar9 = local_a0 + local_a8;
    lVar7 = (local_b0 - 1 & uVar9 >> 1) * 8;
    if (*(longlong *)((longlong)pvStack_b8 + lVar7) == 0) {
      pvVar6 = operator_new(0x10);
      *(void **)((longlong)pvStack_b8 + lVar7) = pvVar6;
    }
    *(longlong *)(*(longlong *)((longlong)pvStack_b8 + lVar7) + (ulonglong)((uint)uVar9 & 1) * 8) =
         param_1;
    local_a0 = local_a0 + 1;
    if (local_a0 != 0) {
      iVar13 = local_48._4_4_;
      iVar11 = (int)local_48;
      do {
        uStack_78 = 0;
        local_70 = local_a8;
        local_80 = local_c0;
        if (local_c0 == (longlong *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = *local_c0;
        }
        plVar2 = *(longlong **)
                  (*(longlong *)
                    (*(longlong *)(lVar7 + 8) +
                    (*(longlong *)(lVar7 + 0x10) - 1U & local_a8 >> 1) * 8) +
                  (ulonglong)((uint)local_a8 & 1) * 8);
        local_a0 = local_a0 + -1;
        if (local_a0 == 0) {
          local_a8 = 0;
        }
        else {
          local_a8 = local_a8 + 1;
        }
        plVar3 = (longlong *)plVar2[6];
        if (plVar3 != (longlong *)0x0) {
          bVar10 = *(byte *)(plVar2 + 0xe) & 3;
          uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
          if ((uVar4 & 0x10) == 0) {
            iVar5 = (**(code **)(*plVar2 + 8))(plVar2);
            if (iVar5 == 0) {
              local_68 = local_68 + 1;
            }
            lVar7 = (**(code **)(*plVar3 + 0x18))(plVar3);
            lVar12 = lVar12 + lVar7;
            local_60 = lVar12;
            if (bVar10 == 2) {
              iVar5 = (**(code **)(*plVar2 + 8))(plVar2);
              if (iVar5 == 0) {
                iStack_64 = iStack_64 + 1;
              }
              lVar7 = (**(code **)(*plVar3 + 0x18))(plVar3);
              local_58 = local_58 + lVar7;
            }
            if ((uVar4 & 0x800) != 0) {
              iVar5 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar5);
              if (bVar10 == 2) {
                local_50 = CONCAT44(local_50._4_4_ + 1,iVar5);
              }
            }
            if (((uVar4 & 0x40) != 0) && (iVar11 = iVar11 + 1, bVar10 == 2)) {
              iVar13 = iVar13 + 1;
            }
          }
          if (local_98 != 0) {
            *(byte *)(plVar2 + 0xe) = *(byte *)(plVar2 + 0xe) & 0xfc;
            *(byte *)(plVar2 + 0xe) = *(byte *)(plVar2 + 0xe) | local_c8;
          }
        }
        param_2 = local_90;
        for (lVar7 = plVar2[2]; local_90 = param_2, lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x18))
        {
          if ((((int)local_a0 + (int)local_a8 & 1U) == 0) && (local_b0 <= local_a0 + 2U >> 1)) {
            FUN_18000b130((longlong)&local_c0,local_a8);
          }
          local_a8 = local_a8 & local_b0 * 2 - 1;
          uVar9 = local_a0 + local_a8;
          lVar1 = (local_b0 - 1 & uVar9 >> 1) * 8;
          if (*(longlong *)(lVar1 + (longlong)pvStack_b8) == 0) {
            pvVar6 = operator_new(0x10);
            *(void **)(lVar1 + (longlong)pvStack_b8) = pvVar6;
          }
          *(longlong *)
           (*(longlong *)(lVar1 + (longlong)pvStack_b8) + (ulonglong)((uint)uVar9 & 1) * 8) = lVar7;
          local_a0 = local_a0 + 1;
          param_2 = local_90;
        }
      } while (local_a0 != 0);
      local_48 = CONCAT44(iVar13,iVar11);
      local_a0 = 0;
    }
    while (local_a0 != 0) {
      local_a0 = local_a0 + -1;
      if (local_a0 == 0) {
        local_a8 = 0;
      }
    }
    local_a0 = 0;
    pvVar6 = pvStack_b8;
    uVar9 = local_b0;
    while (uVar9 != 0) {
      uVar9 = uVar9 - 1;
      pvVar8 = *(void **)((longlong)pvVar6 + uVar9 * 8);
      if (pvVar8 != (void *)0x0) {
        free(pvVar8);
        pvVar6 = pvStack_b8;
      }
    }
    if (pvVar6 != (void *)0x0) {
      pvVar8 = pvVar6;
      if ((0xfff < local_b0 * 8) &&
         (pvVar8 = *(void **)((longlong)pvVar6 + -8),
         0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar8);
    }
    local_b0 = 0;
    pvStack_b8 = (void *)0x0;
    free(local_c0);
    local_c0 = (longlong *)0x0;
  }
  memmove(param_2,&local_68,0x28);
  __security_check_cookie(local_38 ^ (ulonglong)auStack_e8);
  return;
}




void FUN_180016cd0(longlong param_1)

{
  FUN_1800168a0(param_1,(void *)(param_1 + 0x98),0,0);
  return;
}




void FUN_180016cf0(longlong param_1,longlong *param_2)

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
  
  local_28 = DAT_180028010 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    uStack_48 = *(undefined8 *)(param_1 + 0xa0);
    uVar4 = 0;
    local_50 = *(ulonglong *)(param_1 + 0x98) & 0xffffffff;
    local_40 = 0;
    local_30 = *(ulonglong *)(param_1 + 0xb8) & 0xffffffff;
    uStack_38 = *(ulonglong *)(param_1 + 0xb0) & 0xffffffff;
    FUN_180014a80(param_1,param_2);
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




undefined8 FUN_180016f30(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint local_res10 [2];
  longlong *local_res18;
  undefined8 *local_res20;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  FUN_180014c30(param_1,param_2);
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
  uVar3 = 0;
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
      local_res20 = (undefined8 *)operator_new(0x290);
      local_res18 = FUN_180016230(local_res20);
      (**(code **)(*local_res18 + 0x28))(local_res18,param_2);
      puVar1 = *(undefined8 **)(param_1 + 0x218);
      if (*(undefined8 **)(param_1 + 0x220) == puVar1) {
        FUN_180017630((longlong *)(param_1 + 0x210),puVar1,&local_res18);
      }
      else {
        *puVar1 = local_res18;
        *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 8;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_res10[0]);
  }
  return 1;
}




undefined8 *
FUN_180017190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

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
  puVar6 = FUN_180016230(puVar6);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xb] = *(undefined8 *)(param_1 + 0x58);
    plVar7 = FUN_1800173b0(param_1);
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
      FUN_180017900(puVar6 + 0x42,*(void **)(param_1 + 0x210),*(longlong *)(param_1 + 0x218),param_4
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




longlong * FUN_1800173b0(longlong param_1)

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
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001fd98);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 4:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001fdb0);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 5:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001fda8);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 6:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001fdd0);
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
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001fdc0);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 10:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001fdb8);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    }
  }
  return (longlong *)0x0;
}




longlong FUN_180017630(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Memory;
  ulonglong uVar8;
  void *_Dst;
  longlong lVar9;
  size_t _Size;
  undefined1 local_res8 [8];
  void *local_res10;
  ulonglong local_res20;
  
  lVar5 = *param_1;
  lVar9 = (longlong)param_2 - lVar5 >> 3;
  lVar3 = param_1[1] - lVar5 >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
    FUN_180002230();
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  uVar1 = lVar3 + 1;
  uVar6 = param_1[2] - lVar5 >> 3;
  local_res20 = uVar1;
  if ((uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) &&
     (local_res20 = (uVar6 >> 1) + uVar6, local_res20 < uVar1)) {
    local_res20 = uVar1;
  }
  uVar6 = local_res20 * 8;
  if (local_res20 < 0x2000000000000000) {
    uVar8 = uVar6;
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = operator_new(uVar6);
      }
      goto LAB_18001771f;
    }
  }
  else {
    uVar8 = 0xffffffffffffffff;
  }
  uVar7 = uVar8 + 0x27;
  if (uVar7 <= uVar8) {
    uVar7 = 0xffffffffffffffff;
  }
  pvVar4 = operator_new(uVar7);
  if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
  *(void **)((longlong)_Dst - 8) = pvVar4;
LAB_18001771f:
  *(undefined8 *)((longlong)_Dst + lVar9 * 8) = *param_3;
  pvVar4 = (void *)param_1[1];
  local_res10 = _Dst;
  if (param_2 == pvVar4) {
    param_2 = (void *)*param_1;
    FUN_1800022a0(local_res8);
    _Size = (longlong)pvVar4 - (longlong)param_2;
    pvVar4 = _Dst;
  }
  else {
    pvVar4 = (void *)*param_1;
    FUN_1800022a0(local_res8);
    memmove(_Dst,pvVar4,(longlong)param_2 - (longlong)pvVar4);
    lVar5 = param_1[1];
    pvVar4 = (void *)((longlong)_Dst + (lVar9 + 1) * 8);
    FUN_1800022a0(local_res8);
    _Size = lVar5 - (longlong)param_2;
  }
  memmove(pvVar4,param_2,_Size);
  pvVar4 = (void *)*param_1;
  if (pvVar4 != (void *)0x0) {
    _Memory = pvVar4;
    if ((0xfff < (param_1[2] - (longlong)pvVar4 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + uVar1 * 8);
  param_1[2] = (longlong)((longlong)_Dst + uVar6);
  return *param_1 + lVar9 * 8;
}




void FUN_180017800(void)

{
  return;
}




void FUN_180017820(undefined8 *param_1)

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
    if ((0xfff < (ulonglong)(param_1[2] * 8)) &&
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




void FUN_180017900(ulonglong *param_1,void *param_2,longlong param_3,undefined1 param_4)

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
LAB_180017ac3:
      FUN_180002230();
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
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar3)))) goto LAB_180017a16;
      free(pvVar3);
    }
    pvVar4 = (void *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (uVar2 != 0) {
      if (0x1fffffffffffffff < uVar2) goto LAB_180017ac3;
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
LAB_180017a16:
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
    FUN_1800022a0(local_res20);
    memmove(pvVar4,param_2,sVar7);
    pvVar4 = (void *)(sVar7 + (longlong)pvVar4);
  }
  else if (uVar2 < uVar6) {
    sVar7 = uVar2 * 8;
    memmove(pvVar4,param_2,sVar7);
    pvVar3 = (void *)(sVar7 + (longlong)param_2);
    pvVar4 = (void *)param_1[1];
    FUN_1800022a0(local_res20);
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




undefined8 FUN_180017ad0(void)

{
  return 2;
}




undefined8 * FUN_180017ae0(undefined8 *param_1,uint param_2)

{
  *param_1 = CResidentNTFSDataRunList::vftable;
  FUN_1800150e0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined4 FUN_180017b20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




void FUN_180017b30(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180015300(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x000180017b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x48,4);
  return;
}




void FUN_180017b70(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800153f0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x000180017b9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x48,4);
  return;
}




undefined8 * FUN_180017bb0(undefined8 *param_1,uint param_2)

{
  *param_1 = CNoneResidentNTFSDataRunList::vftable;
  FUN_1800150e0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180017bf0(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong local_res20;
  longlong local_58 [2];
  longlong *local_48;
  
  local_58[1] = 0xfffffffffffffffe;
  uVar7 = 0;
  uVar13 = uVar7;
  while( true ) {
    iVar9 = (int)uVar7;
    if (param_3 <= iVar9) {
      return 1;
    }
    lVar11 = (longlong)iVar9;
    bVar1 = *(byte *)(lVar11 + param_2);
    if (bVar1 == 0) {
      return 1;
    }
    bVar8 = bVar1 >> 4;
    uVar5 = bVar1 & 0xf;
    local_58[0] = 0;
    local_res20 = 0;
    uVar10 = iVar9 + 1 + bVar8 + uVar5;
    uVar7 = (ulonglong)uVar10;
    if (param_3 < (int)uVar10) {
      return 1;
    }
    if (8 < (ulonglong)uVar5) break;
    if (8 < bVar8) {
      return 1;
    }
    memcpy(local_58,(void *)(param_2 + 1 + lVar11),(ulonglong)uVar5);
    memcpy(&local_res20,(void *)((ulonglong)uVar5 + 1 + lVar11 + param_2),(ulonglong)bVar8);
    uVar12 = local_res20;
    switch((uint)bVar8) {
    case 1:
      uVar12 = (longlong)(char)local_res20;
      break;
    case 2:
      uVar12 = (longlong)(short)local_res20;
      break;
    case 3:
      if (0x800000 < (longlong)local_res20) {
        uVar12 = local_res20 - 0x1000000;
      }
      break;
    case 4:
      uVar12 = (longlong)(int)local_res20;
      break;
    case 5:
      if ((local_res20 & 0x8000000000) != 0) {
        uVar12 = local_res20 - 0x10000000000;
      }
      break;
    case 6:
      if ((local_res20 & 0x800000000000) != 0) {
        uVar12 = local_res20 - 0x1000000000000;
      }
      break;
    case 7:
      if ((local_res20 & 0x80000000000000) != 0) {
        uVar12 = local_res20 + 0xff00000000000000;
      }
    }
    plVar2 = (longlong *)operator_new(0x10);
    *plVar2 = 0;
    plVar2[1] = 0;
    if (bVar1 >> 4 == 0) {
      *plVar2 = -1;
    }
    else {
      *plVar2 = uVar12 + uVar13;
    }
    plVar2[1] = local_58[0];
    uVar6 = *(ulonglong *)(param_1 + 0x20);
    local_48 = plVar2;
    if ((((int)*(longlong *)(param_1 + 0x28) + (int)uVar6 & 1U) == 0) &&
       (*(ulonglong *)(param_1 + 0x18) <= *(longlong *)(param_1 + 0x28) + 2U >> 1)) {
      FUN_18000b130(param_1 + 8,uVar6);
      uVar6 = *(ulonglong *)(param_1 + 0x20);
    }
    uVar6 = *(longlong *)(param_1 + 0x18) * 2 - 1U & uVar6;
    *(ulonglong *)(param_1 + 0x20) = uVar6;
    uVar6 = *(longlong *)(param_1 + 0x28) + uVar6;
    lVar11 = (uVar6 >> 1 & *(longlong *)(param_1 + 0x18) - 1U) * 8;
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(lVar4 + lVar11) == 0) {
      pvVar3 = operator_new(0x10);
      *(void **)(lVar11 + *(longlong *)(param_1 + 0x10)) = pvVar3;
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
    *(longlong **)(*(longlong *)(lVar11 + lVar4) + (ulonglong)((uint)uVar6 & 1) * 8) = plVar2;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    uVar13 = uVar13 + uVar12;
    if ((int)uVar10 < 0) {
      return 1;
    }
  }
  return 1;
}




void FUN_180017ec0(longlong param_1,undefined8 *param_2)

{
  undefined8 *local_res8;
  
  local_res8 = (undefined8 *)operator_new(0x10);
  *local_res8 = *param_2;
  local_res8[1] = param_2[1];
  FUN_18000b070(param_1 + 8,&local_res8);
  return;
}




void FUN_180017f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puVar2 = (undefined8 *)FUN_18000b390();
  __stdio_common_vfprintf(*puVar2,uVar1,param_1,0,&local_res10);
  return;
}




void FUN_180017f90(longlong *param_1)

{
  longlong *local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_180018010(param_1,(longlong *)local_res8,(longlong *)*DAT_18002a358,DAT_18002a358);
  free(DAT_18002a358);
  return;
}




void FUN_180017fd0(void)

{
  free(DAT_18002a358);
  return;
}




undefined8 FUN_180018000(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(longlong *)(param_1 + 0x10) != *(longlong *)(param_1 + 8));
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_180018010(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = DAT_18002a358;
  if ((param_3 == (longlong *)*DAT_18002a358) && (param_4 == DAT_18002a358)) {
    cVar1 = *(char *)(DAT_18002a358[1] + 0x19);
    plVar2 = (longlong *)DAT_18002a358[1];
    while (plVar5 = plVar2, cVar1 == '\0') {
      FUN_180018230(param_1,(longlong *)plVar5[2],param_3,param_4);
      plVar2 = (longlong *)*plVar5;
      FUN_180006500(plVar5 + 5);
      free(plVar5);
      cVar1 = *(char *)((longlong)plVar2 + 0x19);
      param_1 = plVar5;
    }
    DAT_18002a358[1] = (longlong)plVar4;
    *DAT_18002a358 = (longlong)plVar4;
    DAT_18002a358[2] = (longlong)plVar4;
    _DAT_18002a360 = 0;
    *param_2 = *DAT_18002a358;
  }
  else {
    plVar4 = param_3;
    if (param_3 != param_4) {
      do {
        plVar2 = (longlong *)plVar4[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          param_3 = plVar2;
          plVar5 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar5 + 0x19);
            param_3 = plVar5;
            plVar5 = (longlong *)*plVar5;
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar5 = plVar4;
          while ((param_3 = plVar3, cVar1 == '\0' && (plVar5 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar3 = (longlong *)param_3[1];
            plVar5 = param_3;
          }
        }
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar2 + 0x19);
          while (cVar1 == '\0') {
            plVar2 = (longlong *)*plVar2;
            cVar1 = *(char *)((longlong)plVar2 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar5 = (longlong *)plVar4[1];
          plVar2 = plVar4;
          while ((plVar3 = plVar5, cVar1 == '\0' && (plVar2 == (longlong *)plVar3[2]))) {
            cVar1 = *(char *)(plVar3[1] + 0x19);
            plVar5 = (longlong *)plVar3[1];
            plVar2 = plVar3;
          }
        }
        plVar4 = FUN_180006a90((longlong *)&DAT_18002a358,plVar4);
        FUN_180006500(plVar4 + 5);
        free(plVar4);
        plVar4 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = (longlong)param_3;
  }
  return param_2;
}




void * FUN_1800181d0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined1 *)((longlong)pvVar1 + 0x18) = 1;
  *(undefined1 *)((longlong)pvVar1 + 0x19) = 1;
  return pvVar1;
}




void FUN_180018230(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180018230(&DAT_18002a358,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_180006500(param_2 + 5);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180018290(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




undefined8 * FUN_1800182a0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *_Dst;
  void *pvVar9;
  undefined8 *puVar10;
  size_t _Size;
  longlong lVar11;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  ulonglong local_res20;
  
  lVar11 = *param_1;
  lVar4 = param_1[1] - lVar11 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
    FUN_180002230();
    pcVar3 = (code *)swi(3);
    puVar10 = (undefined8 *)(*pcVar3)();
    return puVar10;
  }
  uVar1 = lVar4 + 1;
  uVar7 = param_1[2] - lVar11 >> 3;
  uVar5 = uVar1;
  if ((uVar7 <= 0x1fffffffffffffff - (uVar7 >> 1)) && (uVar5 = (uVar7 >> 1) + uVar7, uVar5 < uVar1))
  {
    uVar5 = uVar1;
  }
  uVar7 = uVar5 * 8;
  local_res20 = uVar5;
  if (uVar5 < 0x2000000000000000) {
    if (uVar7 < 0x1000) {
      if (uVar7 == 0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)operator_new(uVar7);
      }
      goto LAB_18001838f;
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
  puVar10 = (undefined8 *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
  puVar10[-1] = pvVar6;
LAB_18001838f:
  puVar2 = puVar10 + ((longlong)param_2 - lVar11 >> 3);
  *puVar2 = *param_3;
  pvVar6 = (void *)param_1[1];
  pvVar9 = (void *)*param_1;
  local_res10 = puVar10;
  FUN_1800022a0(local_res8);
  if (param_2 == pvVar6) {
    _Size = (longlong)pvVar6 - (longlong)pvVar9;
    _Dst = puVar10;
    param_2 = pvVar9;
  }
  else {
    memmove(puVar10,pvVar9,(longlong)param_2 - (longlong)pvVar9);
    lVar11 = param_1[1];
    FUN_1800022a0(local_res8);
    _Size = lVar11 - (longlong)param_2;
    _Dst = puVar2 + 1;
  }
  memmove(_Dst,param_2,_Size);
  pvVar6 = (void *)*param_1;
  if (pvVar6 != (void *)0x0) {
    pvVar9 = pvVar6;
    if ((0xfff < (param_1[2] - (longlong)pvVar6 & 0xfffffffffffffff8U)) &&
       (pvVar9 = *(void **)((longlong)pvVar6 + -8),
       0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar9);
  }
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1);
  param_1[2] = (longlong)(puVar10 + uVar5);
  return puVar2;
}




byte FUN_180018460(longlong *param_1,longlong param_2)

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




undefined * FUN_1800184b0(void)

{
  return &DAT_18002a338;
}




void FUN_1800184c0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_10 [2];
  
  puVar1 = FUN_180018500(param_1,local_10);
  FUN_180018580(param_1,(void *)*puVar1,param_2);
  return;
}




undefined8 * FUN_180018500(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180015f10(param_1);
  FUN_180018540(param_2,*puVar1);
  return param_2;
}




undefined8 * FUN_180018540(undefined8 *param_1,undefined8 param_2)

{
  FUN_180015ff0(param_1,param_2);
  return param_1;
}




void FUN_180018580(longlong param_1,void *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  puVar1 = *(undefined8 **)((longlong)param_2 + 8);
  uVar2 = FUN_1800186d0(param_3);
  pvVar3 = FUN_1800186e0(param_1,param_2,puVar1,uVar2);
  FUN_180018600(param_1,1);
  *(void **)((longlong)param_2 + 8) = pvVar3;
  *puVar1 = pvVar3;
  return;
}




void FUN_180018600(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_180018680(param_1);
  plVar2 = (longlong *)FUN_180015f00(param_1);
  if ((lVar1 - *plVar2) - 1U < param_2) {
    std::_Xlength_error("list<T> too long");
  }
  plVar2 = (longlong *)FUN_180015f00(param_1);
  *plVar2 = *plVar2 + param_2;
  return;
}




void FUN_180018680(undefined8 param_1)

{
  FUN_1800186b0(param_1);
  FUN_1800186a0();
  return;
}




undefined8 FUN_1800186a0(void)

{
  return 0xaaaaaaaaaaaaaaa;
}




void FUN_1800186b0(undefined8 param_1)

{
  FUN_1800186d0(param_1);
  return;
}




undefined8 FUN_1800186d0(undefined8 param_1)

{
  return param_1;
}




void * FUN_1800186e0(undefined8 param_1,void *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pvVar1 = FUN_180016000(param_1,param_2,param_3);
  uVar2 = FUN_180015f10(param_1);
  uVar3 = FUN_1800186d0(param_4);
  uVar4 = FUN_180015f10((longlong)pvVar1 + 0x10);
  construct<>(uVar2,uVar4,uVar3);
  return pvVar1;
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
  
  puVar1 = (undefined8 *)FUN_180001170(8,param_2);
  puVar2 = (undefined8 *)FUN_1800186d0(param_3);
  *puVar1 = *puVar2;
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180028010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
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
    if (DAT_180029c94 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_180029c94 = DAT_180029c94 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18002a260 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_18001917c();
      FID_conflict__RTC_Initialize();
      DAT_18002a260 = 0;
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
    if (DAT_18002a260 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18002a260 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_18001916c();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_18001c2f0,&DAT_18001c300);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_18001c2d0,&DAT_18001c2e8);
        DAT_18002a260 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180019588();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180029c94 = DAT_180029c94 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180018ab4) */
/* WARNING: Removing unreachable block (ram,0x000180018a43) */
/* WARNING: Removing unreachable block (ram,0x000180018af7) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_180029c94 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_180001050();
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_180001050();
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
    FUN_1800198cc();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_1800198ac();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




void FUN_180018ba0(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




undefined8 * FUN_180018bc8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_180018bf4(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_180029c98,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180018d46;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_180029cc8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_180029cc8 != (HANDLE)0x0) goto LAB_180018ce4;
  }
  else {
    DAT_180029cc8 = (HANDLE)0x0;
    (*pFVar3)(&DAT_180029cc0);
    bVar7 = 0x40 - ((byte)DAT_180028010 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_180029cd0 = DAT_180028010 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_180029cd8 = DAT_180028010 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180018ce4:
    uVar6 = FUN_18001935c(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180018d54);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180018d46:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180018d54(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180029c98);
  if (DAT_180029cc8 != (HANDLE)0x0) {
    CloseHandle(DAT_180029cc8);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180029c98);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180029c98);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180029c98);
  uVar1 = (ulonglong)_tls_index;
  DAT_180028000 = DAT_180028000 + 1;
  *param_1 = DAT_180028000;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_180028000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180029c98);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180029c98);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180018e60:
                    /* WARNING: Could not recover jumptable at 0x000180018e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180029c98);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_180028000;
      goto LAB_180018e60;
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
  
  if (DAT_180029cc8 != (HANDLE)0x0) {
    SetEvent(DAT_180029cc8);
                    /* WARNING: Could not recover jumptable at 0x000180018ebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_180029cc8);
    return;
  }
  bVar1 = (byte)DAT_180028010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018001a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180028010 ^ _DAT_180029cd8) >> bVar1 |
            (DAT_180028010 ^ _DAT_180029cd8) << 0x40 - bVar1))(&DAT_180029cc0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_180029cc8 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180029c98);
    WaitForSingleObjectEx(DAT_180029cc8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180018f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180029c98);
    return;
  }
  bVar1 = (byte)DAT_180028010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018001a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180028010 ^ _DAT_180029cd0) >> bVar1 |
            (DAT_180028010 ^ _DAT_180029cd0) << 0x40 - bVar1))
            (&DAT_180029cc0,&DAT_180029c98,param_1);
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
                    /* WARNING: Could not recover jumptable at 0x000180018f71. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180018fa2;
  capture_previous_context((PCONTEXT)&DAT_180029d80);
  _DAT_180029cf0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180029e18 = puVar3 + 0x40;
  _DAT_180029e00 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180029ce0 = 0xc0000409;
  _DAT_180029ce4 = 1;
  _DAT_180029cf8 = 1;
  DAT_180029d00 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180028010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180028008;
  *(undefined8 *)(puVar3 + -8) = 0x180019044;
  DAT_180029e78 = _DAT_180029cf0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18001c478);
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
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18;
  
  if (DAT_180028010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180028010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180028010 == 0x2b992ddfa232) {
      DAT_180028010 = 0x2b992ddfa233;
    }
  }
  DAT_180028008 = ~DAT_180028010;
  return;
}




void FUN_18001916c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180019173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18002a250);
  return;
}




void FUN_18001917c(void)

{
  __std_type_info_destroy_list(&DAT_18002a250);
  return;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_18000b390();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_1800184b0();
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
LAB_1800191d2:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18002a268 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18002a268;
        pvVar1 = DAT_18002a268;
      }
      DAT_18002a268 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_1800191d2;
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
    uVar3 = FUN_180001050();
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
  
  uVar1 = FUN_18001935c(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_1800090a0();
  if (cVar1 != '\0') {
    cVar1 = FUN_1800090a0();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1800090a0();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_1800090a0();
  FUN_1800090a0();
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
    _execute_onexit_table(&DAT_18002a278);
    return;
  }
  uVar2 = FUN_180001230();
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
  FUN_1800090a0();
  FUN_1800090a0();
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
    DAT_18002a270 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_1800090a0();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_1800090a0();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_1800090a0();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18001935c(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18002a271 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180028010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180028010;
      _DAT_18002a278 = in_RAX;
      uRam000000018002a280 = in_RAX;
      _DAT_18002a288 = in_RAX;
      _DAT_18002a290 = in_RAX;
      uRam000000018002a298 = in_RAX;
      _DAT_18002a2a0 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18002a278);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18002a290), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18002a271 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x0001800194c2) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000218; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000308;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_1800194ab;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1800194ab:
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
    DAT_18002a268 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18002a270 == '\0') || (param_2 == '\0')) {
    FUN_1800090a0();
    FUN_1800090a0();
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
  
  bVar2 = (byte)DAT_180028010 & 0x3f;
  if (((DAT_180028010 ^ _DAT_18002a278) >> bVar2 | (DAT_180028010 ^ _DAT_18002a278) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18002a278,_Func);
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




undefined * FUN_180019588(void)

{
  return &DAT_18002a370;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019590(void)

{
  _DAT_18002a2a8 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x1800195cb;
  FUN_180019590();
  *(undefined8 *)(puVar4 + -8) = 0x1800195dc;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1800195e6;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180019600;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180019641;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180019673;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180019695;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800196b6;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1800196c1;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1800196d1;
    FUN_180019590();
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
  
  for (puVar1 = &DAT_1800230f0; puVar1 < &DAT_1800230f0; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180023100; puVar1 < &DAT_180023100; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined8 * FUN_18001979c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800197bc(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_1800197fc(undefined8 *param_1)

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




undefined8 * FUN_180019868(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800198ac(void)

{
  undefined8 local_28 [5];
  
  FUN_18001979c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180026da0);
}




void FUN_1800198cc(void)

{
  undefined8 local_28 [5];
  
  FUN_1800197fc(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180026e28);
}




char * FUN_1800198ec(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x0001800199d6) */
/* WARNING: Removing unreachable block (ram,0x000180019954) */
/* WARNING: Removing unreachable block (ram,0x00018001992f) */
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
  
  DAT_180028024 = 2;
  _DAT_180028020 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180028028 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18002a2b0 = DAT_18002a2b0 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18002a2b0 = DAT_18002a2b0 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180028020 = 2;
    DAT_180028024 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_180028024 = 0xe;
      _DAT_180028020 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180028020 = 5;
        DAT_180028024 = 0x2e;
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
  return DAT_180028030 != 0;
}




/* Library Function - Single Match
    public: __cdecl ATL::CAtlBaseModule::CAtlBaseModule(void) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

CAtlBaseModule * __thiscall ATL::CAtlBaseModule::CAtlBaseModule(CAtlBaseModule *this)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar3;
  
  memset(this + 0x28,0,0x28);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x10) = 0x180000000;
  *(undefined8 *)(this + 8) = 0x180000000;
  *(undefined **)(this + 0x20) = &DAT_18001c510;
  *(undefined4 *)this = 0x60;
  *(undefined4 *)(this + 0x18) = 0xe00;
  BVar2 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(this + 0x28),0,0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    DVar1 = DVar3 & 0xffff | 0x80070000;
    if ((int)DVar3 < 1) {
      DVar1 = DVar3;
    }
    if ((int)DVar1 < 0) {
      BVar2 = IsDebuggerPresent();
      if (BVar2 != 0) {
        OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
      }
      DAT_18002a330 = 1;
    }
  }
  return this;
}




/* Library Function - Single Match
    public: __cdecl ATL::CAtlBaseModule::~CAtlBaseModule(void) __ptr64
   
   Library: Visual Studio */

void __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(CAtlBaseModule *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x28));
  if (*(void **)(this + 0x50) != (void *)0x0) {
    free(*(void **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180019d26) */
/* WARNING: Removing unreachable block (ram,0x000180019e30) */
/* WARNING: Removing unreachable block (ram,0x000180019e4a) */
/* WARNING: Removing unreachable block (ram,0x000180019de7) */
/* WARNING: Removing unreachable block (ram,0x000180019e01) */
/* WARNING: Removing unreachable block (ram,0x000180019e2e) */
/* WARNING: Removing unreachable block (ram,0x000180019d9b) */
/* WARNING: Removing unreachable block (ram,0x000180019db5) */
/* WARNING: Removing unreachable block (ram,0x000180019de2) */
/* WARNING: Removing unreachable block (ram,0x000180019d8c) */
/* WARNING: Removing unreachable block (ram,0x000180019d5e) */
/* WARNING: Removing unreachable block (ram,0x000180019d69) */
/* WARNING: Removing unreachable block (ram,0x000180019d87) */
/* WARNING: Removing unreachable block (ram,0x000180019d4e) */
/* WARNING: Removing unreachable block (ram,0x000180019d3e) */
/* WARNING: Removing unreachable block (ram,0x000180019ea7) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_180019c10(longlong param_1,int param_2,longlong param_3)

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
    FUN_1800184c0(param_3,&local_30);
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
  
                    /* WARNING: Could not recover jumptable at 0x00018001a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_18001a0e0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_18001a100(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001590(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18001a110(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001680(*(longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18001a120(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001550((longlong *)(*(longlong *)(param_2 + 0x40) + 0x30),param_2,param_3,param_4);
  return;
}




void Unwind_18001a130(undefined8 param_1,longlong param_2)

{
  FUN_180001bc0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_18001a140(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001550(*(longlong **)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_18001a150(undefined8 param_1,longlong param_2)

{
  FUN_180001bc0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18001a160(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18001a180(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18001a1a0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x68));
  return;
}




void Unwind_18001a1c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001550((longlong *)(param_2 + 0x30),param_2,param_3,param_4);
  return;
}




void Unwind_18001a1d0(undefined8 param_1,longlong param_2)

{
  FUN_180001bc0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18001a1e0(undefined8 param_1,longlong param_2)

{
  FUN_180001bc0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_18001a1f0(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(*(longlong **)(param_2 + 0x40));
  return;
}




undefined * Catch_18001a200(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) +
             (longlong)*(longlong **)(param_2 + 0x70)),4,true);
  return &DAT_180001fb6;
}




void Unwind_18001a240(undefined8 param_1,longlong param_2)

{
  FUN_180001d60((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18001a250(undefined8 param_1,longlong param_2)

{
  FUN_180001db0((longlong *)(param_2 + 0x38));
  return;
}




void Catch_18001a260(undefined8 param_1,longlong param_2)

{
  deallocate(param_1,*(void **)(param_2 + 0x78),*(longlong *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18001a290(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001550((longlong *)(*(longlong *)(param_2 + 0x40) + 0x78),param_2,param_3,param_4);
  return;
}




void Unwind_18001a2a0(undefined8 param_1,longlong param_2)

{
  FUN_180001210(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_18001a2b0(undefined8 param_1,longlong param_2)

{
  FUN_180001210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001a2c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800022f0(*(undefined8 **)(param_2 + 0x60),param_2,param_3,param_4);
  return;
}




void Unwind_18001a2d0(undefined8 param_1,longlong param_2)

{
  FUN_180006360((longlong *)(*(longlong *)(param_2 + 0x60) + 0xd8));
  return;
}




void Unwind_18001a2f0(undefined8 param_1,longlong param_2)

{
  FUN_180005720((undefined8 *)(*(longlong *)(param_2 + 0x60) + 0xe8));
  return;
}




void Unwind_18001a310(undefined8 param_1,longlong param_2)

{
  FUN_180002890((longlong *)(*(longlong *)(param_2 + 0x60) + 0x110));
  return;
}




void Unwind_18001a330(undefined8 param_1,longlong param_2)

{
  FUN_180002890((longlong *)(*(longlong *)(param_2 + 0x60) + 0x120));
  return;
}




void Unwind_18001a350(undefined8 param_1,longlong param_2)

{
  FUN_1800028c0((longlong *)(*(longlong *)(param_2 + 0x60) + 0x140));
  return;
}




void Unwind_18001a370(undefined8 param_1,longlong param_2)

{
  FUN_180006360((longlong *)(*(longlong *)(param_2 + 0x60) + 0x168));
  return;
}




void Unwind_18001a390(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001680(*(longlong *)(param_2 + 0x60),param_2,param_3,param_4);
  return;
}




void Unwind_18001a3a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001550((longlong *)(*(longlong *)(param_2 + 0x60) + 0x78),param_2,param_3,param_4);
  return;
}




void Unwind_18001a3b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001550((longlong *)(*(longlong *)(param_2 + 0x60) + 0x30),param_2,param_3,param_4);
  return;
}




void Unwind_18001a3c0(undefined8 param_1,longlong param_2)

{
  FUN_180001bc0(*(longlong **)(param_2 + 0x68));
  return;
}




void Unwind_18001a3d0(undefined8 param_1,longlong param_2)

{
  FUN_1800065b0(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_18001a3e0(undefined8 param_1,longlong param_2)

{
  FUN_1800066a0(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_18001a3f0(undefined8 param_1,longlong param_2)

{
  FUN_1800022b0(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_18001a400(undefined8 param_1,longlong param_2)

{
  FUN_180002890((longlong *)(*(longlong *)(param_2 + 0x68) + 0x10));
  return;
}




void Unwind_18001a410(undefined8 param_1,longlong param_2)

{
  FUN_180006460(*(longlong **)(param_2 + 0x70));
  return;
}




void Unwind_18001a420(undefined8 param_1,longlong param_2)

{
  FUN_1800065e0(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_18001a430(undefined8 param_1,longlong param_2)

{
  FUN_180006460(*(longlong **)(param_2 + 0x68));
  return;
}




void Unwind_18001a440(undefined8 param_1,longlong param_2)

{
  FUN_1800065e0(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_18001a450(undefined8 param_1,longlong param_2)

{
  FUN_1800061b0(*(longlong **)(param_2 + 0x68));
  return;
}




void Unwind_18001a460(undefined8 param_1,longlong param_2)

{
  FUN_180006460(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18001a470(undefined8 param_1,longlong param_2)

{
  FUN_1800065e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001a480(undefined8 param_1,longlong param_2)

{
  FUN_1800061b0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18001a490(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_18001a4b0(undefined8 param_1,longlong param_2)

{
  FUN_1800101d0((undefined2 *)(param_2 + 0x50));
  return;
}




void Unwind_18001a4c0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x78));
  return;
}




void Unwind_18001a4e0(undefined8 param_1,longlong param_2)

{
  FUN_1800148c0(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_18001a4f0(undefined8 param_1,longlong param_2)

{
  FUN_180005280((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_18001a500(undefined8 param_1,longlong param_2)

{
  FUN_1800028c0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_18001a510(undefined8 param_1,longlong param_2)

{
  FUN_1800028c0((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_18001a520(undefined8 param_1,longlong param_2)

{
  FUN_1800052c0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_18001a530(undefined8 param_1,longlong param_2)

{
  FUN_180006260((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_18001a540(undefined8 param_1,longlong param_2)

{
  FUN_180006600((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_18001a550(undefined8 param_1,longlong param_2)

{
  FUN_1800061b0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_18001a560(undefined8 param_1,longlong param_2)

{
  FUN_1800065e0((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_18001a570(undefined8 param_1,longlong param_2)

{
  FUN_1800061b0((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_18001a580(undefined8 param_1,longlong param_2)

{
  FUN_1800065e0((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_18001a590(undefined8 param_1,longlong param_2)

{
  FUN_180006330((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_18001a5a0(undefined8 param_1,longlong param_2)

{
  FUN_180006620((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_18001a5b0(undefined8 param_1,longlong param_2)

{
  FUN_180006490((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18001a5c0(undefined8 param_1,longlong param_2)

{
  FUN_180006260(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18001a5d0(undefined8 param_1,longlong param_2)

{
  FUN_180006600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001a5e0(undefined8 param_1,longlong param_2)

{
  FUN_180006330(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18001a5f0(undefined8 param_1,longlong param_2)

{
  FUN_180006620(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001a600(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x98));
  return;
}




void Unwind_18001a620(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180009450((undefined8 *)(param_2 + 0x38),param_2,param_3,param_4);
  return;
}




void Unwind_18001a630(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_18001a650(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}




void Unwind_18001a670(undefined8 param_1,longlong param_2)

{
  FUN_1800022b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001a680(undefined8 param_1,longlong param_2)

{
  FUN_180002890((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_18001a690(undefined8 param_1,longlong param_2)

{
  FUN_180006460(*(longlong **)(param_2 + 0x50));
  return;
}




void Unwind_18001a6a0(undefined8 param_1,longlong param_2)

{
  FUN_1800065e0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_18001a6b0(undefined8 param_1,longlong param_2)

{
  FUN_180006460(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_18001a6c0(undefined8 param_1,longlong param_2)

{
  FUN_1800065e0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_18001a6d0(void)

{
  _Init_thread_abort(&DAT_18002a368);
  return;
}




void Unwind_18001a6e0(undefined8 param_1,longlong param_2)

{
  FUN_180006360((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_18001a6f0(undefined8 param_1,longlong param_2)

{
  FUN_1800052c0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18001a700(undefined8 param_1,longlong param_2)

{
  FUN_180006500((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_18001a710(undefined8 param_1,longlong param_2)

{
  FUN_1800065b0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_18001a720(undefined8 param_1,longlong param_2)

{
  FUN_1800066a0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_18001a730(undefined8 param_1,longlong param_2)

{
  FUN_180006330((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18001a740(undefined8 param_1,longlong param_2)

{
  FUN_180006620((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_18001a750(undefined8 param_1,longlong param_2)

{
  FUN_1800065b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001a760(undefined8 param_1,longlong param_2)

{
  FUN_1800066a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001a770(undefined8 param_1,longlong param_2)

{
  FUN_1800028c0((longlong *)(*(longlong *)(param_2 + 0x70) + 8));
  return;
}




void Unwind_18001a780(undefined8 param_1,longlong param_2)

{
  FUN_1800061b0(*(longlong **)(param_2 + 0x70));
  return;
}




void Catch_18001a790(undefined8 param_1,longlong param_2)

{
  FUN_180006fe0(param_1,*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a7e0(undefined8 param_1,longlong param_2)

{
  FUN_1800070c0(param_1,*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a830(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a850(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a870(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a890(undefined8 param_1,longlong param_2)

{
  FUN_1800070d0(param_1,*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a900(undefined8 param_1,longlong param_2)

{
  FUN_180006fe0(param_1,*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a990(undefined8 param_1,longlong param_2)

{
  FUN_1800070b0(param_1,*(void **)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18001a9c0(undefined8 param_1,longlong param_2)

{
  FUN_1800028c0((longlong *)(*(longlong *)(param_2 + 0x58) + 8));
  return;
}




void Unwind_18001a9d0(undefined8 param_1,longlong param_2)

{
  FUN_1800061b0(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_18001a9e0(undefined8 param_1,longlong param_2)

{
  FUN_1800065e0(*(undefined8 **)(param_2 + 0x30));
  return;
}




void Catch_18001a9f0(undefined8 param_1,longlong param_2)

{
  FUN_1800088b0(param_1,*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001aa20(undefined8 param_1,longlong param_2)

{
  FUN_180006fe0(param_1,*(void **)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001aa70(undefined8 param_1,longlong param_2)

{
  FUN_1800070b0(param_1,*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18001aaa0(undefined8 param_1,longlong param_2)

{
  FUN_1800061b0(*(longlong **)(param_2 + 0x50));
  return;
}




void Catch_18001aab0(undefined8 param_1,longlong param_2)

{
  FUN_180006fe0(param_1,*(void **)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001ab20(undefined8 param_1,longlong param_2)

{
  FUN_1800088b0(param_1,*(void **)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18001ab70(undefined8 param_1,longlong param_2)

{
  FUN_1800148c0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_18001ab80(undefined8 param_1,longlong param_2)

{
  FUN_1800148c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001ab90(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_18001abb0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_18001abd0(undefined8 param_1,longlong param_2)

{
  FUN_1800150e0(*(undefined8 **)(param_2 + 0x38));
  return;
}




void Unwind_18001abe0(undefined8 param_1,longlong param_2)

{
  FUN_1800150e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001abf0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18001ac10(undefined8 param_1,longlong param_2)

{
  FUN_180009590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001ac20(undefined8 param_1,longlong param_2)

{
  FUN_180006500((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_18001ac30(undefined8 param_1,longlong param_2)

{
  FUN_180009590(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_18001ac40(undefined8 param_1,longlong param_2)

{
  FUN_180006500((longlong *)(*(longlong *)(param_2 + 0x60) + 0x20));
  return;
}




void Unwind_18001ac50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180006500(*(longlong **)(param_2 + 0x48));
  }
  return;
}




void Unwind_18001ac80(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_18001aca0(undefined8 param_1,longlong param_2)

{
  FUN_180009590(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_18001acb0(undefined8 param_1,longlong param_2)

{
  FUN_180006500((longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




void Unwind_18001acc0(undefined8 param_1,longlong param_2)

{
  FUN_180006360((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18001acd0(undefined8 param_1,longlong param_2)

{
  FUN_1800065b0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18001ace0(undefined8 param_1,longlong param_2)

{
  FUN_1800066a0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18001acf0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x78));
  return;
}




void Unwind_18001ad10(undefined8 param_1,longlong param_2)

{
  FUN_1800150e0(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_18001ad20(undefined8 param_1,longlong param_2)

{
  FUN_180006500((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_18001ad30(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_18001ad50(undefined8 param_1,longlong param_2)

{
  FUN_180006500((longlong *)(*(longlong *)(param_2 + 0x48) + 0x18));
  return;
}




void Unwind_18001ad60(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_18001ad80(undefined8 param_1,longlong param_2)

{
  FUN_180002890((longlong *)(*(longlong *)(param_2 + 0x70) + 0x58));
  return;
}




void Unwind_18001ad90(undefined8 param_1,longlong param_2)

{
  FUN_180002890((longlong *)(*(longlong *)(param_2 + 0x70) + 0x68));
  return;
}




void Unwind_18001ada0(undefined8 param_1,longlong param_2)

{
  FUN_180002890((longlong *)(*(longlong *)(param_2 + 0x70) + 0x78));
  return;
}




void Unwind_18001adb0(undefined8 param_1,longlong param_2)

{
  FUN_180006460(*(longlong **)(param_2 + 0x78));
  return;
}




void Unwind_18001adc0(undefined8 param_1,longlong param_2)

{
  FUN_1800065e0(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_18001add0(undefined8 param_1,longlong param_2)

{
  FUN_180010ad0(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_18001ade0(undefined8 param_1,longlong param_2)

{
  FUN_180002890((longlong *)(*(longlong *)(param_2 + 0x50) + 0x58));
  return;
}




void Unwind_18001adf0(undefined8 param_1,longlong param_2)

{
  FUN_180002890((longlong *)(*(longlong *)(param_2 + 0x50) + 0x68));
  return;
}




void Unwind_18001ae00(undefined8 param_1,longlong param_2)

{
  FUN_180002890((longlong *)(*(longlong *)(param_2 + 0x50) + 0x78));
  return;
}




void Unwind_18001ae10(undefined8 param_1,longlong param_2)

{
  FUN_1800126c0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_18001ae20(undefined8 param_1,longlong param_2)

{
  FUN_180006460(*(longlong **)(param_2 + 0x58));
  return;
}




void Unwind_18001ae30(undefined8 param_1,longlong param_2)

{
  FUN_1800065e0(*(undefined8 **)(param_2 + 0x58));
  return;
}




undefined * Catch_18001ae40(void)

{
  return &DAT_18000c453;
}




void Unwind_18001ae60(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_18001ae80(undefined8 param_1,longlong param_2)

{
  FUN_1800126c0(*(undefined8 **)(param_2 + 0x60));
  return;
}




undefined * Catch_18001ae90(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) +
             (longlong)*(longlong **)(param_2 + 0x70)),4,true);
  return &DAT_18000ea97;
}




void Unwind_18001aed0(undefined8 param_1,longlong param_2)

{
  FUN_1800101d0((undefined2 *)(param_2 + 0x60));
  return;
}




void Unwind_18001aee0(undefined8 param_1,longlong param_2)

{
  FUN_180010ad0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001aef0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_18001af10(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18001af30(undefined8 param_1,longlong param_2)

{
  FUN_180015540((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_18001af40(undefined8 param_1,longlong param_2)

{
  FUN_180015580(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_18001af50(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}




void Unwind_18001af70(undefined8 param_1,longlong param_2)

{
  FUN_180015d80((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18001af80(undefined8 param_1,longlong param_2)

{
  FUN_180015df0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18001af90(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_18001afb0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_18001afd0(undefined8 param_1,longlong param_2)

{
  FUN_180015e60((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18001afe0(undefined8 param_1,longlong param_2)

{
  FUN_1800150e0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_18001aff0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Catch_All_18001b010(undefined8 param_1,longlong param_2)

{
  FUN_180015fb0(param_1,*(void **)(param_2 + 0x40),0x80);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18001b040(undefined8 param_1,longlong param_2)

{
  deallocate(param_1,*(void **)(param_2 + 0x40),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18001b070(undefined8 param_1,longlong param_2)

{
  FUN_180015fb0(param_1,*(void **)(param_2 + 0x78),*(ulonglong *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18001b0a0(undefined8 param_1,longlong param_2)

{
  FUN_180017820((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18001b0b0(void)

{
  FUN_180017800();
  return;
}




void Unwind_18001b0c0(undefined8 param_1,longlong param_2)

{
  FUN_180015580((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18001b0d0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x68));
  return;
}




void Catch_All_18001b0f0(undefined8 param_1,longlong param_2)

{
  deallocate(param_1,*(void **)(param_2 + 0x78),*(longlong *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18001b120(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}




void Unwind_18001b140(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_18001b160(void)

{
  FUN_180017f90(&DAT_18002a358);
  return;
}




void Unwind_18001b170(void)

{
  FUN_180017fd0();
  return;
}




void Catch_All_18001b180(undefined8 param_1,longlong param_2)

{
  FUN_180018290(param_1,*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined8
FUN_18001b1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180017f20("Exception occurred.GetErrorCode\n",param_2,param_3,param_4);
  return 1;
}




void Catch_All_18001b200(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_18001b238(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18001b24f(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18001b26b(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




undefined * Catch_All_18001b2a1(void)

{
  return &DAT_180018bb5;
}




void FUN_18001b2e0(longlong *param_1)

{
  longlong local_res8 [4];
  
  FUN_180018010(param_1,local_res8,(longlong *)*DAT_18002a358,DAT_18002a358);
  free(DAT_18002a358);
  return;
}



