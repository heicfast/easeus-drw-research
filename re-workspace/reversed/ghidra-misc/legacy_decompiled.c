
/* WARNING: Removing unreachable block (ram,0x0001800011ba) */
/* WARNING: Removing unreachable block (ram,0x0001800010e2) */
/* WARNING: Removing unreachable block (ram,0x0001800010d4) */
/* WARNING: Removing unreachable block (ram,0x000180001130) */
/* WARNING: Removing unreachable block (ram,0x00018000111b) */
/* WARNING: Removing unreachable block (ram,0x0001800010ba) */
/* WARNING: Removing unreachable block (ram,0x0001800010a9) */
/* WARNING: Removing unreachable block (ram,0x00018000104d) */

ulonglong FUN_180001030(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  longlong in_RCX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint in_XCR0;
  
  *(undefined8 *)(in_RCX + 8) = 0;
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar10 = (uint)((puVar1[1] != 0x756e6547 || puVar1[2] != 0x49656e69) || puVar1[3] != 0x6c65746e);
  if ((uVar10 != 0) &&
     ((puVar1[1] == 0x68747541 && puVar1[2] == 0x69746e65) && puVar1[3] == 0x444d4163)) {
    puVar2 = (uint *)cpuid(0x80000000);
    if (0x80000000 < *puVar2) {
      lVar3 = cpuid(0x80000001);
      uVar10 = uVar10 | *(uint *)(lVar3 + 0xc) & 0x801;
      if (0x80000007 < *puVar2) {
        lVar3 = cpuid(0x80000008);
        lVar4 = cpuid_Version_info(1);
        uVar8 = *(uint *)(lVar4 + 8);
        uVar7 = *(uint *)(lVar4 + 0xc);
        if (((uVar8 >> 0x1c & 1) != 0) &&
           ((byte)((uint)*(undefined4 *)(lVar4 + 4) >> 0x10) <=
            (byte)((char)*(undefined4 *)(lVar3 + 0xc) + 1U))) {
          uVar8 = uVar8 & 0xefffffff;
        }
        goto LAB_18000119a;
      }
    }
  }
  uVar12 = 0xffffffff;
  if (3 < *puVar1) {
    puVar2 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
    uVar12 = *puVar2 >> 0xe & 0xfff;
  }
  puVar2 = (uint *)cpuid_Version_info(1);
  param_1 = *puVar2;
  uVar7 = puVar2[3];
  uVar8 = puVar2[2] & 0xbfefffff;
  if (uVar10 == 0) {
    bVar6 = (byte)(param_1 >> 8) & 0xf;
    uVar9 = uVar8 | 0x40000000;
    if (bVar6 == 0xf) {
      uVar9 = uVar8 | 0x40100000;
    }
    uVar8 = uVar9;
    if ((bVar6 == 6) && (((param_1 & 0xfff0ff0) == 0x50670 || ((param_1 & 0xfff0ff0) == 0x80650))))
    {
      uVar7 = uVar7 & 0xfbffffff;
    }
  }
  if ((((uVar8 >> 0x1c & 1) != 0) && (uVar9 = uVar8 & 0xefffffff, uVar8 = uVar9, uVar12 != 0)) &&
     (uVar8 = uVar9 | 0x10000000, (byte)(puVar2[1] >> 0x10) < 2)) {
    uVar8 = uVar9;
  }
LAB_18000119a:
  uVar11 = (ulonglong)(uVar10 & 0x800 | uVar7 & 0xfffff7ff);
  if (6 < *puVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar10 = *(uint *)(lVar3 + 4);
    uVar5 = *(undefined4 *)(lVar3 + 0xc);
    if ((uVar7 & 0x4000000) == 0) {
      uVar10 = uVar10 & 0xfff7ffff;
    }
    if ((param_1 & 0xfff0ff0) == 0x50650) {
      uVar10 = uVar10 & 0xfffeffff;
    }
    *(uint *)(in_RCX + 8) = uVar10;
    *(undefined4 *)(in_RCX + 0xc) = uVar5;
  }
  if (((uVar7 & 0x8000000) == 0) ||
     (((in_XCR0 & 0xe6) != 0xe6 &&
      (*(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) & 0x3fdeffff, (in_XCR0 & 6) != 6)))) {
    uVar11 = (ulonglong)(uVar7 & 0xefffe7ff);
    *(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) & 0x3fdeffdf;
  }
  return (ulonglong)uVar8 | uVar11 << 0x20;
}




void FUN_180001240(undefined8 *param_1,ulonglong param_2)

{
  if (param_2 < 0xf) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    for (; ((ulonglong)param_1 & 7) != 0; param_1 = (undefined8 *)((longlong)param_1 + 1)) {
      *(undefined1 *)param_1 = 0;
      param_2 = param_2 - 1;
    }
    do {
      *param_1 = 0;
      param_2 = param_2 - 8;
      param_1 = param_1 + 1;
    } while ((param_2 & 0xfffffffffffffff8) != 0);
    if (param_2 == 0) {
      return;
    }
  }
  do {
    *(undefined1 *)param_1 = 0;
    param_2 = param_2 - 1;
    param_1 = (undefined8 *)((longlong)param_1 + 1);
  } while (param_2 != 0);
  return;
}




ulonglong FUN_1800012b0(byte *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if (param_3 == 0x10) {
      return (ulonglong)
             (*(longlong *)param_1 != *(longlong *)param_2 ||
             *(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8));
    }
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = (ulonglong)(byte)((byte)uVar3 | bVar1 ^ bVar2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar3 = -uVar3 >> 0x3f;
  }
  return uVar3;
}




void FUN_180001500(uint *param_1,ulonglong param_2,ulonglong *param_3,uint *param_4)

{
  undefined2 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint3 uVar8;
  uint3 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  char cVar21;
  char cVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint *puVar26;
  uint7 uVar27;
  ulonglong uVar28;
  longlong lVar29;
  
  if (param_2 == 0) {
    return;
  }
  bVar19 = (byte)param_1[1];
  uVar20 = (ulonglong)bVar19;
  if (param_1[0x42] == 0xffffffff) {
    uVar28 = (ulonglong)(byte)((char)*param_1 + 1);
    cVar16 = *(char *)((longlong)param_1 + uVar28 + 8);
    if ((param_2 & 0xfffffffffffffff8) != 0) {
      do {
        uVar4 = (undefined4)*param_3;
        uVar5 = *(undefined4 *)((longlong)param_3 + 4);
        bVar19 = (char)uVar20 + cVar16;
        uVar20 = (ulonglong)bVar19;
        cVar21 = *(char *)((longlong)param_1 + uVar20 + 8);
        uVar18 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((longlong)param_1 + uVar18 + 8);
        *(char *)((longlong)param_1 + uVar20 + 8) = cVar16;
        *(char *)((longlong)param_1 + uVar28 + 8) = cVar21;
        if (uVar20 == uVar18) {
          cVar22 = cVar16;
        }
        uVar8 = (uint3)(((uint)(byte)((byte)uVar4 ^
                                     *(byte *)((longlong)param_1 +
                                              (ulonglong)(byte)(cVar21 + cVar16) + 8)) << 0x18) >> 8
                       );
        bVar19 = bVar19 + cVar22;
        uVar20 = (ulonglong)bVar19;
        cVar16 = *(char *)((longlong)param_1 + uVar20 + 8);
        uVar28 = uVar18 + 1 & 0xff;
        cVar21 = *(char *)((longlong)param_1 + uVar28 + 8);
        *(char *)((longlong)param_1 + uVar20 + 8) = cVar22;
        *(char *)((longlong)param_1 + uVar18 + 8) = cVar16;
        if (uVar20 == uVar28) {
          cVar21 = cVar22;
        }
        uVar8 = uVar8 >> 8 |
                (uint3)((uint)(CONCAT31(uVar8,(byte)((uint)uVar4 >> 8) ^
                                              *(byte *)((longlong)param_1 +
                                                       (ulonglong)(byte)(cVar16 + cVar22) + 8)) <<
                              0x18) >> 8);
        bVar19 = bVar19 + cVar21;
        uVar20 = (ulonglong)bVar19;
        cVar16 = *(char *)((longlong)param_1 + uVar20 + 8);
        uVar18 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((longlong)param_1 + uVar18 + 8);
        *(char *)((longlong)param_1 + uVar20 + 8) = cVar21;
        *(char *)((longlong)param_1 + uVar28 + 8) = cVar16;
        if (uVar20 == uVar18) {
          cVar22 = cVar21;
        }
        uVar8 = uVar8 >> 8 |
                (uint3)((uint)(CONCAT31(uVar8,(byte)((uint)uVar4 >> 0x10) ^
                                              *(byte *)((longlong)param_1 +
                                                       (ulonglong)(byte)(cVar16 + cVar21) + 8)) <<
                              0x18) >> 8);
        bVar19 = bVar19 + cVar22;
        uVar20 = (ulonglong)bVar19;
        cVar16 = *(char *)((longlong)param_1 + uVar20 + 8);
        uVar28 = uVar18 + 1 & 0xff;
        cVar21 = *(char *)((longlong)param_1 + uVar28 + 8);
        *(char *)((longlong)param_1 + uVar20 + 8) = cVar22;
        *(char *)((longlong)param_1 + uVar18 + 8) = cVar16;
        if (uVar20 == uVar28) {
          cVar21 = cVar22;
        }
        bVar2 = *(byte *)((longlong)param_1 + (ulonglong)(byte)(cVar16 + cVar22) + 8);
        bVar19 = bVar19 + cVar21;
        uVar20 = (ulonglong)bVar19;
        cVar16 = *(char *)((longlong)param_1 + uVar20 + 8);
        uVar18 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((longlong)param_1 + uVar18 + 8);
        *(char *)((longlong)param_1 + uVar20 + 8) = cVar21;
        *(char *)((longlong)param_1 + uVar28 + 8) = cVar16;
        if (uVar20 == uVar18) {
          cVar22 = cVar21;
        }
        uVar9 = (uint3)(((uint)(byte)((byte)uVar5 ^
                                     *(byte *)((longlong)param_1 +
                                              (ulonglong)(byte)(cVar16 + cVar21) + 8)) << 0x18) >> 8
                       );
        bVar19 = bVar19 + cVar22;
        uVar20 = (ulonglong)bVar19;
        cVar16 = *(char *)((longlong)param_1 + uVar20 + 8);
        uVar28 = uVar18 + 1 & 0xff;
        cVar21 = *(char *)((longlong)param_1 + uVar28 + 8);
        *(char *)((longlong)param_1 + uVar20 + 8) = cVar22;
        *(char *)((longlong)param_1 + uVar18 + 8) = cVar16;
        if (uVar20 == uVar28) {
          cVar21 = cVar22;
        }
        uVar9 = uVar9 >> 8 |
                (uint3)((uint)(CONCAT31(uVar9,(byte)((uint)uVar5 >> 8) ^
                                              *(byte *)((longlong)param_1 +
                                                       (ulonglong)(byte)(cVar16 + cVar22) + 8)) <<
                              0x18) >> 8);
        bVar19 = bVar19 + cVar21;
        uVar20 = (ulonglong)bVar19;
        cVar16 = *(char *)((longlong)param_1 + uVar20 + 8);
        uVar18 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((longlong)param_1 + uVar18 + 8);
        *(char *)((longlong)param_1 + uVar20 + 8) = cVar21;
        *(char *)((longlong)param_1 + uVar28 + 8) = cVar16;
        if (uVar20 == uVar18) {
          cVar22 = cVar21;
        }
        uVar9 = uVar9 >> 8 |
                (uint3)((uint)(CONCAT31(uVar9,(byte)((uint)uVar5 >> 0x10) ^
                                              *(byte *)((longlong)param_1 +
                                                       (ulonglong)(byte)(cVar16 + cVar21) + 8)) <<
                              0x18) >> 8);
        uVar20 = (ulonglong)(byte)(bVar19 + cVar22);
        cVar21 = *(char *)((longlong)param_1 + uVar20 + 8);
        uVar28 = uVar18 + 1 & 0xff;
        cVar16 = *(char *)((longlong)param_1 + uVar28 + 8);
        *(char *)((longlong)param_1 + uVar20 + 8) = cVar22;
        *(char *)((longlong)param_1 + uVar18 + 8) = cVar21;
        if (uVar20 == uVar28) {
          cVar16 = cVar22;
        }
        bVar19 = *(byte *)((longlong)param_1 + (ulonglong)(byte)(cVar21 + cVar22) + 8);
        param_2 = param_2 - 8;
        *param_4 = (uint)uVar8 | CONCAT31(uVar8,(byte)((uint)uVar4 >> 0x18) ^ bVar2) << 0x18;
        param_3 = param_3 + 1;
        param_4[1] = (uint)uVar9 | CONCAT31(uVar9,(byte)((uint)uVar5 >> 0x18) ^ bVar19) << 0x18;
        param_4 = param_4 + 2;
      } while ((param_2 & 0xfffffffffffffff8) != 0);
      if (param_2 == 0) goto LAB_180001b70;
    }
    do {
      uVar20 = (ulonglong)(byte)((char)uVar20 + cVar16);
      cVar21 = *(char *)((longlong)param_1 + uVar20 + 8);
      *(char *)((longlong)param_1 + uVar20 + 8) = cVar16;
      *(char *)((longlong)param_1 + uVar28 + 8) = cVar21;
      bVar19 = cVar21 + cVar16;
      uVar28 = (ulonglong)(byte)((char)uVar28 + 1);
      cVar16 = *(char *)((longlong)param_1 + uVar28 + 8);
      uVar18 = *param_3;
      param_3 = (ulonglong *)((longlong)param_3 + 1);
      *(byte *)param_4 = *(byte *)((longlong)param_1 + (ulonglong)bVar19 + 8) ^ (byte)uVar18;
      param_4 = (uint *)((longlong)param_4 + 1);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    goto LAB_180001b70;
  }
  uVar28 = (ulonglong)(byte)((char)*param_1 + 1);
  lVar29 = (longlong)param_4 - (longlong)param_3;
  uVar17 = param_1[uVar28 + 2];
  uVar18 = (ulonglong)uVar17;
  if ((param_2 & 0xfffffffffffffff0) != 0) {
    if ((DAT_180019710 >> 0x1e & 1) == 0) {
      uVar24 = -uVar28 & 7;
      lVar25 = uVar28 + 1;
      if (uVar24 != 0) {
        param_2 = param_2 - uVar24;
        do {
          cVar16 = (char)uVar18;
          uVar20 = (ulonglong)(byte)((char)uVar20 + cVar16);
          uVar17 = param_1[uVar20 + 2];
          param_1[uVar20 + 2] = (uint)uVar18;
          param_1[uVar28 + 2] = uVar17;
          uVar6 = uVar18 >> 8;
          uVar28 = (ulonglong)(byte)((char)uVar28 + 1);
          uVar18 = (ulonglong)param_1[uVar28 + 2];
          *(byte *)((longlong)param_3 + lVar29) =
               (byte)param_1[CONCAT71((int7)uVar6,cVar16 + (char)uVar17) + 2] ^ (byte)*param_3;
          param_3 = (ulonglong *)((longlong)param_3 + 1);
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
        lVar25 = uVar28 + 1;
      }
      do {
        bVar19 = (char)uVar20 + (char)uVar18;
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = (uint)uVar18;
        uVar3 = param_1[lVar25 + 2];
        param_1[uVar28 + 2] = uVar17;
        uVar23 = param_1[(ulonglong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + (char)uVar18) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 3];
        uVar27 = (uint7)(((ulonglong)(byte)uVar23 << 0x38) >> 8);
        param_1[uVar28 + 3] = uVar17;
        uVar23 = param_1[(ulonglong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 4];
        uVar27 = uVar27 >> 8 | (uint7)((ulonglong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 4] = uVar17;
        uVar23 = param_1[(ulonglong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 5];
        uVar27 = uVar27 >> 8 | (uint7)((ulonglong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 5] = uVar17;
        uVar23 = param_1[(ulonglong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 6];
        uVar27 = uVar27 >> 8 | (uint7)((ulonglong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 6] = uVar17;
        uVar23 = param_1[(ulonglong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 7];
        uVar27 = uVar27 >> 8 | (uint7)((ulonglong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 7] = uVar17;
        uVar23 = param_1[(ulonglong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        cVar16 = (char)uVar3;
        bVar19 = bVar19 + cVar16;
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = uVar3;
        uVar3 = param_1[lVar25 + 8];
        uVar27 = uVar27 >> 8 | (uint7)((ulonglong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 8] = uVar17;
        uVar23 = param_1[(ulonglong)CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2];
        lVar25 = CONCAT71((int7)((ulonglong)lVar25 >> 8),(char)lVar25 + '\b');
        cVar16 = (char)uVar3;
        uVar20 = (ulonglong)(byte)(bVar19 + cVar16);
        uVar17 = param_1[uVar20 + 2];
        param_1[uVar20 + 2] = uVar3;
        uVar18 = (ulonglong)param_1[lVar25 + 1];
        uVar27 = uVar27 >> 8 | (uint7)((ulonglong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        param_1[uVar28 + 9] = uVar17;
        uVar28 = (ulonglong)(byte)((char)uVar28 + 8);
        param_2 = param_2 - 8;
        *(ulonglong *)((longlong)param_3 + lVar29) =
             ((ulonglong)uVar27 |
             CONCAT71(uVar27,(char)param_1[(ulonglong)
                                           CONCAT31((int3)(uVar17 >> 8),(char)uVar17 + cVar16) + 2])
             << 0x38) ^ *param_3;
        param_3 = param_3 + 1;
      } while ((param_2 & 0xfffffffffffffff8) != 0);
    }
    else {
      if ((param_2 & 0xffffffffffffffe0) == 0) goto LAB_180001950;
      uVar24 = -uVar28 & 0xf;
      if (uVar24 != 0) {
        param_2 = param_2 - uVar24;
        do {
          cVar16 = (char)uVar18;
          bVar19 = (char)uVar20 + cVar16;
          uVar20 = (ulonglong)bVar19;
          uVar3 = param_1[uVar20 + 2];
          param_1[uVar20 + 2] = (uint)uVar18;
          param_1[uVar28 + 2] = uVar3;
          uVar6 = uVar18 >> 8;
          uVar28 = (ulonglong)(byte)((char)uVar28 + 1);
          uVar17 = param_1[uVar28 + 2];
          uVar18 = (ulonglong)uVar17;
          *(byte *)((longlong)param_3 + lVar29) =
               (byte)param_1[CONCAT71((int7)uVar6,cVar16 + (char)uVar3) + 2] ^ (byte)*param_3;
          param_3 = (ulonglong *)((longlong)param_3 + 1);
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      puVar26 = param_1 + uVar28 + 2;
      bVar19 = bVar19 + (char)uVar17;
      uVar3 = param_1[(ulonglong)bVar19 + 2];
      param_1[(ulonglong)bVar19 + 2] = uVar17;
      uVar23 = puVar26[1];
      *puVar26 = uVar3;
      bVar19 = bVar19 + (char)uVar23;
      uVar1 = (undefined2)param_1[(ulonglong)(byte)((char)uVar17 + (char)uVar3) + 2];
      while( true ) {
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = uVar23;
        puVar26[1] = uVar17;
        cVar16 = (char)puVar26[2];
        bVar19 = bVar19 + cVar16;
        uVar3 = param_1[(ulonglong)(byte)((char)uVar23 + (char)uVar17) + 2];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[2];
        puVar26[2] = uVar17;
        cVar21 = (char)puVar26[3];
        bVar19 = bVar19 + cVar21;
        uVar23 = param_1[(ulonglong)(byte)(cVar16 + (char)uVar17) + 2];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[3];
        puVar26[3] = uVar17;
        cVar16 = (char)puVar26[4];
        bVar19 = bVar19 + cVar16;
        uVar12 = param_1[(ulonglong)(byte)(cVar21 + (char)uVar17) + 2];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[4];
        puVar26[4] = uVar17;
        cVar21 = (char)puVar26[5];
        bVar19 = bVar19 + cVar21;
        uVar13 = param_1[(ulonglong)(byte)(cVar16 + (char)uVar17) + 2];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[5];
        puVar26[5] = uVar17;
        cVar16 = (char)puVar26[6];
        bVar19 = bVar19 + cVar16;
        uVar14 = param_1[(ulonglong)(byte)(cVar21 + (char)uVar17) + 2];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[6];
        puVar26[6] = uVar17;
        cVar21 = (char)puVar26[7];
        bVar19 = bVar19 + cVar21;
        uVar24 = CONCAT26((short)param_1[(ulonglong)(byte)(cVar16 + (char)uVar17) + 2],
                          CONCAT24((short)uVar13,CONCAT22((short)uVar23,uVar1)));
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[7];
        puVar26[7] = uVar17;
        cVar16 = (char)puVar26[8];
        bVar19 = bVar19 + cVar16;
        lVar25 = CONCAT26((short)param_1[(ulonglong)(byte)(cVar21 + (char)uVar17) + 2],
                          CONCAT24((short)uVar14,CONCAT22((short)uVar12,(short)uVar3)));
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[8];
        puVar26[8] = uVar17;
        cVar21 = (char)puVar26[9];
        bVar19 = bVar19 + cVar21;
        uVar3 = param_1[(ulonglong)(byte)(cVar16 + (char)uVar17) + 2];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[9];
        puVar26[9] = uVar17;
        cVar16 = (char)puVar26[10];
        bVar19 = bVar19 + cVar16;
        uVar23 = param_1[(ulonglong)(byte)(cVar21 + (char)uVar17) + 2];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[10];
        puVar26[10] = uVar17;
        cVar21 = (char)puVar26[0xb];
        bVar19 = bVar19 + cVar21;
        uVar12 = param_1[(ulonglong)(byte)(cVar16 + (char)uVar17) + 2];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[0xb];
        puVar26[0xb] = uVar17;
        cVar16 = (char)puVar26[0xc];
        bVar19 = bVar19 + cVar16;
        uVar13 = param_1[(ulonglong)(byte)(cVar21 + (char)uVar17) + 2];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[0xc];
        puVar26[0xc] = uVar17;
        cVar21 = (char)puVar26[0xd];
        bVar19 = bVar19 + cVar21;
        uVar14 = param_1[(ulonglong)(byte)(cVar16 + (char)uVar17) + 2];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[0xd];
        puVar26[0xd] = uVar17;
        cVar16 = (char)puVar26[0xe];
        bVar19 = bVar19 + cVar16;
        uVar15 = param_1[(ulonglong)(byte)(cVar21 + (char)uVar17) + 2];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[0xe];
        puVar26[0xe] = uVar17;
        cVar21 = (char)puVar26[0xf];
        bVar19 = bVar19 + cVar21;
        uVar6 = CONCAT26((short)param_1[(ulonglong)(byte)(cVar16 + (char)uVar17) + 2],
                         CONCAT24((short)uVar14,CONCAT22((short)uVar12,(short)uVar3)));
        uVar28 = (ulonglong)(byte)((char)uVar28 + 0x10);
        uVar10 = *param_3;
        uVar11 = param_3[1];
        uVar17 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = puVar26[0xf];
        puVar26[0xf] = uVar17;
        puVar26 = param_1 + uVar28 + 2;
        lVar7 = CONCAT26((short)param_1[(ulonglong)(byte)(cVar21 + (char)uVar17) + 2],
                         CONCAT24((short)uVar15,CONCAT22((short)uVar13,(short)uVar23)));
        uVar17 = *puVar26;
        uVar18 = (ulonglong)uVar17;
        param_2 = param_2 - 0x10;
        uVar20 = (ulonglong)bVar19;
        if ((param_2 & 0xfffffffffffffff0) == 0) break;
        bVar19 = bVar19 + (char)uVar17;
        uVar3 = param_1[(ulonglong)bVar19 + 2];
        param_1[(ulonglong)bVar19 + 2] = uVar17;
        uVar23 = puVar26[1];
        *puVar26 = uVar3;
        bVar19 = bVar19 + (char)uVar23;
        uVar1 = (undefined2)param_1[(ulonglong)(byte)((char)uVar17 + (char)uVar3) + 2];
        *(ulonglong *)((longlong)param_3 + lVar29) = uVar10 ^ uVar24 ^ lVar25 * 0x100;
        ((ulonglong *)((longlong)param_3 + lVar29))[1] = uVar11 ^ uVar6 ^ lVar7 << 8;
        param_3 = param_3 + 2;
      }
      *(ulonglong *)((longlong)param_3 + lVar29) = uVar10 ^ uVar24 ^ lVar25 * 0x100;
      ((ulonglong *)((longlong)param_3 + lVar29))[1] = uVar11 ^ uVar6 ^ lVar7 << 8;
      param_3 = param_3 + 2;
    }
    if (param_2 == 0) goto LAB_180001b70;
  }
LAB_180001950:
  do {
    cVar16 = (char)uVar18;
    uVar20 = (ulonglong)(byte)((char)uVar20 + cVar16);
    uVar17 = param_1[uVar20 + 2];
    param_1[uVar20 + 2] = (uint)uVar18;
    param_1[uVar28 + 2] = uVar17;
    uVar24 = uVar18 >> 8;
    uVar28 = (ulonglong)(byte)((char)uVar28 + 1);
    uVar18 = (ulonglong)param_1[uVar28 + 2];
    *(byte *)((longlong)param_3 + lVar29) =
         (byte)param_1[CONCAT71((int7)uVar24,cVar16 + (char)uVar17) + 2] ^ (byte)*param_3;
    param_3 = (ulonglong *)((longlong)param_3 + 1);
    param_2 = param_2 - 1;
  } while (param_2 != 0);
LAB_180001b70:
  *param_1 = (uint)(byte)((char)uVar28 - 1);
  param_1[1] = (uint)uVar20;
  return;
}




void FUN_180001ba0(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar4 = -param_2;
  uVar6 = 0;
  if ((DAT_180019710 >> 0x14 & 1) == 0) {
    do {
      param_1[uVar6 + 2] = (int)uVar6;
      cVar3 = (char)uVar6;
      uVar6 = (ulonglong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    uVar7 = 0;
    uVar6 = 0;
    lVar5 = lVar4;
    do {
      uVar6 = (ulonglong)
              (byte)((char)uVar6 + *(char *)(param_3 + param_2 + lVar5) + (char)param_1[uVar7 + 2]);
      lVar5 = lVar5 + 1;
      uVar2 = param_1[uVar6 + 2];
      if (lVar5 == 0) {
        lVar5 = lVar4;
      }
      param_1[uVar6 + 2] = param_1[uVar7 + 2];
      param_1[uVar7 + 2] = uVar2;
      cVar3 = (char)uVar7;
      uVar7 = (ulonglong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
  }
  else {
    do {
      cVar3 = (char)uVar6;
      *(char *)((longlong)param_1 + uVar6 + 8) = cVar3;
      uVar6 = (ulonglong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    uVar7 = 0;
    uVar6 = 0;
    lVar5 = lVar4;
    do {
      cVar3 = *(char *)((longlong)param_1 + uVar7 + 8);
      uVar6 = (ulonglong)(byte)((char)uVar6 + *(char *)(param_3 + param_2 + lVar5) + cVar3);
      lVar5 = lVar5 + 1;
      uVar1 = *(undefined1 *)((longlong)param_1 + uVar6 + 8);
      if (lVar5 == 0) {
        lVar5 = lVar4;
      }
      *(char *)((longlong)param_1 + uVar6 + 8) = cVar3;
      *(undefined1 *)((longlong)param_1 + uVar7 + 8) = uVar1;
      cVar3 = (char)uVar7;
      uVar7 = (ulonglong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    param_1[0x42] = 0xffffffff;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_180001e80(uint *param_1,ulonglong *param_2,longlong param_3,int *param_4,int *param_5,
                  longlong param_6)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
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
  uint uVar46;
  char cVar47;
  uint uVar48;
  byte bVar49;
  char cVar50;
  char cVar51;
  ulonglong uVar52;
  uint *puVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  int iVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  int *piVar90;
  longlong lVar91;
  
  if (param_6 != 0) {
    uVar52 = (ulonglong)(byte)((char)*param_1 + 1);
    lVar91 = param_3 - (longlong)param_2;
    uVar48 = param_1[uVar52 + 2];
    bVar49 = (char)param_1[1] + (char)uVar48;
    piVar90 = param_5 + param_6 * 0x10;
    iVar57 = *param_4;
    uVar62 = param_4[1];
    uVar70 = param_4[2];
    uVar89 = param_4[3];
    do {
      puVar53 = param_1 + uVar52 + 2;
      uVar2 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = uVar48;
      iVar3 = *param_5;
      *puVar53 = uVar2;
      uVar54 = iVar57 + iVar3 + -0x28955b88 + ((uVar89 ^ uVar70) & uVar62 ^ uVar89);
      cVar50 = (char)puVar53[1];
      bVar49 = bVar49 + cVar50;
      uVar2 = param_1[(ulonglong)(byte)((char)uVar48 + (char)uVar2) + 2];
      uVar55 = (uVar54 * 0x80 | uVar54 >> 0x19) + uVar62;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[1];
      iVar3 = param_5[1];
      puVar53[1] = uVar48;
      uVar71 = uVar89 + iVar3 + -0x173848aa + ((uVar70 ^ uVar62) & uVar55 ^ uVar70);
      cVar47 = (char)puVar53[2];
      bVar49 = bVar49 + cVar47;
      uVar54 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar72 = (uVar71 * 0x1000 | uVar71 >> 0x14) + uVar55;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[2];
      iVar3 = param_5[2];
      puVar53[2] = uVar48;
      uVar71 = uVar70 + iVar3 + 0x242070db + ((uVar62 ^ uVar55) & uVar72 ^ uVar62);
      cVar50 = (char)puVar53[3];
      bVar49 = bVar49 + cVar50;
      uVar12 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar63 = (uVar71 * 0x20000 | uVar71 >> 0xf) + uVar72;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[3];
      iVar3 = param_5[3];
      puVar53[3] = uVar48;
      uVar71 = uVar62 + iVar3 + -0x3e423112 + ((uVar55 ^ uVar72) & uVar63 ^ uVar55);
      cVar47 = (char)puVar53[4];
      bVar49 = bVar49 + cVar47;
      uVar13 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar71 = (uVar71 * 0x400000 | uVar71 >> 10) + uVar63;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[4];
      iVar3 = param_5[4];
      puVar53[4] = uVar48;
      uVar55 = uVar55 + iVar3 + -0xa83f051 + ((uVar72 ^ uVar63) & uVar71 ^ uVar72);
      cVar50 = (char)puVar53[5];
      bVar49 = bVar49 + cVar50;
      uVar14 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar55 = (uVar55 * 0x80 | uVar55 >> 0x19) + uVar71;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[5];
      iVar3 = param_5[5];
      puVar53[5] = uVar48;
      uVar72 = uVar72 + iVar3 + 0x4787c62a + ((uVar63 ^ uVar71) & uVar55 ^ uVar63);
      cVar47 = (char)puVar53[6];
      bVar49 = bVar49 + cVar47;
      uVar15 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar72 = (uVar72 * 0x1000 | uVar72 >> 0x14) + uVar55;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[6];
      iVar3 = param_5[6];
      puVar53[6] = uVar48;
      uVar63 = uVar63 + iVar3 + -0x57cfb9ed + ((uVar71 ^ uVar55) & uVar72 ^ uVar71);
      cVar50 = (char)puVar53[7];
      bVar49 = bVar49 + cVar50;
      uVar16 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar63 = (uVar63 * 0x20000 | uVar63 >> 0xf) + uVar72;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[7];
      iVar3 = param_5[7];
      puVar53[7] = uVar48;
      uVar71 = uVar71 + iVar3 + -0x2b96aff + ((uVar55 ^ uVar72) & uVar63 ^ uVar55);
      cVar47 = (char)puVar53[8];
      bVar49 = bVar49 + cVar47;
      uVar17 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar71 = (uVar71 * 0x400000 | uVar71 >> 10) + uVar63;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[8];
      iVar3 = param_5[8];
      puVar53[8] = uVar48;
      uVar55 = uVar55 + iVar3 + 0x698098d8 + ((uVar72 ^ uVar63) & uVar71 ^ uVar72);
      cVar50 = (char)puVar53[9];
      bVar49 = bVar49 + cVar50;
      uVar18 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar55 = (uVar55 * 0x80 | uVar55 >> 0x19) + uVar71;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[9];
      iVar3 = param_5[9];
      puVar53[9] = uVar48;
      uVar72 = uVar72 + iVar3 + -0x74bb0851 + ((uVar63 ^ uVar71) & uVar55 ^ uVar63);
      cVar47 = (char)puVar53[10];
      bVar49 = bVar49 + cVar47;
      uVar19 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar72 = (uVar72 * 0x1000 | uVar72 >> 0x14) + uVar55;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[10];
      iVar3 = param_5[10];
      puVar53[10] = uVar48;
      uVar63 = uVar63 + iVar3 + -0xa44f + ((uVar71 ^ uVar55) & uVar72 ^ uVar71);
      cVar50 = (char)puVar53[0xb];
      bVar49 = bVar49 + cVar50;
      uVar20 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar63 = (uVar63 * 0x20000 | uVar63 >> 0xf) + uVar72;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0xb];
      iVar3 = param_5[0xb];
      puVar53[0xb] = uVar48;
      uVar71 = uVar71 + iVar3 + -0x76a32842 + ((uVar55 ^ uVar72) & uVar63 ^ uVar55);
      cVar47 = (char)puVar53[0xc];
      bVar49 = bVar49 + cVar47;
      uVar21 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar71 = (uVar71 * 0x400000 | uVar71 >> 10) + uVar63;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0xc];
      iVar3 = param_5[0xc];
      puVar53[0xc] = uVar48;
      uVar55 = uVar55 + iVar3 + 0x6b901122 + ((uVar72 ^ uVar63) & uVar71 ^ uVar72);
      cVar50 = (char)puVar53[0xd];
      bVar49 = bVar49 + cVar50;
      uVar22 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar55 = (uVar55 * 0x80 | uVar55 >> 0x19) + uVar71;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0xd];
      iVar3 = param_5[0xd];
      puVar53[0xd] = uVar48;
      uVar72 = uVar72 + iVar3 + -0x2678e6d + ((uVar63 ^ uVar71) & uVar55 ^ uVar63);
      cVar47 = (char)puVar53[0xe];
      bVar49 = bVar49 + cVar47;
      uVar23 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar73 = (uVar72 * 0x1000 | uVar72 >> 0x14) + uVar55;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0xe];
      iVar3 = param_5[0xe];
      puVar53[0xe] = uVar48;
      uVar63 = uVar63 + iVar3 + -0x5986bc72 + ((uVar71 ^ uVar55) & uVar73 ^ uVar71);
      cVar50 = (char)puVar53[0xf];
      bVar49 = bVar49 + cVar50;
      uVar24 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar64 = (uVar63 * 0x20000 | uVar63 >> 0xf) + uVar73;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0xf];
      iVar3 = param_5[0xf];
      puVar53[0xf] = uVar48;
      uVar71 = uVar71 + iVar3 + 0x49b40821 + ((uVar55 ^ uVar73) & uVar64 ^ uVar55);
      cVar47 = (char)puVar53[0x10];
      bVar49 = bVar49 + cVar47;
      uVar25 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar72 = (uVar71 * 0x400000 | uVar71 >> 10) + uVar64;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x10];
      iVar3 = param_5[1];
      puVar53[0x10] = uVar48;
      uVar71 = uVar55 + iVar3 + -0x9e1da9e + ((uVar64 ^ uVar72) & uVar73 ^ uVar64);
      cVar50 = (char)puVar53[0x11];
      bVar49 = bVar49 + cVar50;
      uVar55 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar63 = (uVar71 * 0x20 | uVar71 >> 0x1b) + uVar72;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x11];
      iVar3 = param_5[6];
      puVar53[0x11] = uVar48;
      uVar73 = uVar73 + iVar3 + -0x3fbf4cc0 + ((uVar72 ^ uVar63) & uVar64 ^ uVar72);
      cVar47 = (char)puVar53[0x12];
      bVar49 = bVar49 + cVar47;
      uVar71 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar73 = (uVar73 * 0x200 | uVar73 >> 0x17) + uVar63;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x12];
      iVar3 = param_5[0xb];
      puVar53[0x12] = uVar48;
      uVar64 = uVar64 + iVar3 + 0x265e5a51 + ((uVar63 ^ uVar73) & uVar72 ^ uVar63);
      cVar50 = (char)puVar53[0x13];
      bVar49 = bVar49 + cVar50;
      uVar26 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar64 = (uVar64 * 0x4000 | uVar64 >> 0x12) + uVar73;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x13];
      iVar3 = *param_5;
      puVar53[0x13] = uVar48;
      uVar72 = uVar72 + iVar3 + -0x16493856 + ((uVar73 ^ uVar64) & uVar63 ^ uVar73);
      cVar47 = (char)puVar53[0x14];
      bVar49 = bVar49 + cVar47;
      uVar27 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar72 = (uVar72 * 0x100000 | uVar72 >> 0xc) + uVar64;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x14];
      iVar3 = param_5[5];
      puVar53[0x14] = uVar48;
      uVar63 = uVar63 + iVar3 + -0x29d0efa3 + ((uVar64 ^ uVar72) & uVar73 ^ uVar64);
      cVar50 = (char)puVar53[0x15];
      bVar49 = bVar49 + cVar50;
      uVar28 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar63 = (uVar63 * 0x20 | uVar63 >> 0x1b) + uVar72;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x15];
      iVar3 = param_5[10];
      puVar53[0x15] = uVar48;
      uVar73 = uVar73 + iVar3 + 0x2441453 + ((uVar72 ^ uVar63) & uVar64 ^ uVar72);
      cVar47 = (char)puVar53[0x16];
      bVar49 = bVar49 + cVar47;
      uVar29 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar73 = (uVar73 * 0x200 | uVar73 >> 0x17) + uVar63;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x16];
      iVar3 = param_5[0xf];
      puVar53[0x16] = uVar48;
      uVar64 = uVar64 + iVar3 + -0x275e197f + ((uVar63 ^ uVar73) & uVar72 ^ uVar63);
      cVar50 = (char)puVar53[0x17];
      bVar49 = bVar49 + cVar50;
      uVar30 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar64 = (uVar64 * 0x4000 | uVar64 >> 0x12) + uVar73;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x17];
      iVar3 = param_5[4];
      puVar53[0x17] = uVar48;
      uVar72 = uVar72 + iVar3 + -0x182c0438 + ((uVar73 ^ uVar64) & uVar63 ^ uVar73);
      cVar47 = (char)puVar53[0x18];
      bVar49 = bVar49 + cVar47;
      uVar31 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar72 = (uVar72 * 0x100000 | uVar72 >> 0xc) + uVar64;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x18];
      iVar3 = param_5[9];
      puVar53[0x18] = uVar48;
      uVar63 = uVar63 + iVar3 + 0x21e1cde6 + ((uVar64 ^ uVar72) & uVar73 ^ uVar64);
      cVar50 = (char)puVar53[0x19];
      bVar49 = bVar49 + cVar50;
      uVar32 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar63 = (uVar63 * 0x20 | uVar63 >> 0x1b) + uVar72;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x19];
      iVar3 = param_5[0xe];
      puVar53[0x19] = uVar48;
      uVar73 = uVar73 + iVar3 + -0x3cc8f82a + ((uVar72 ^ uVar63) & uVar64 ^ uVar72);
      cVar47 = (char)puVar53[0x1a];
      bVar49 = bVar49 + cVar47;
      uVar33 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar74 = (uVar73 * 0x200 | uVar73 >> 0x17) + uVar63;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1a];
      iVar3 = param_5[3];
      puVar53[0x1a] = uVar48;
      uVar64 = uVar64 + iVar3 + -0xb2af279 + ((uVar63 ^ uVar74) & uVar72 ^ uVar63);
      cVar50 = (char)puVar53[0x1b];
      bVar49 = bVar49 + cVar50;
      uVar34 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar73 = (uVar64 * 0x4000 | uVar64 >> 0x12) + uVar74;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1b];
      iVar3 = param_5[8];
      puVar53[0x1b] = uVar48;
      uVar72 = uVar72 + iVar3 + 0x455a14ed + ((uVar74 ^ uVar73) & uVar63 ^ uVar74);
      cVar47 = (char)puVar53[0x1c];
      bVar49 = bVar49 + cVar47;
      uVar35 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar64 = (uVar72 * 0x100000 | uVar72 >> 0xc) + uVar73;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1c];
      iVar3 = param_5[0xd];
      puVar53[0x1c] = uVar48;
      uVar63 = uVar63 + iVar3 + -0x561c16fb + ((uVar73 ^ uVar64) & uVar74 ^ uVar73);
      cVar50 = (char)puVar53[0x1d];
      bVar49 = bVar49 + cVar50;
      uVar36 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar72 = (uVar63 * 0x20 | uVar63 >> 0x1b) + uVar64;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1d];
      iVar3 = param_5[2];
      puVar53[0x1d] = uVar48;
      uVar63 = uVar74 + iVar3 + -0x3105c08 + ((uVar64 ^ uVar72) & uVar73 ^ uVar64);
      cVar47 = (char)puVar53[0x1e];
      bVar49 = bVar49 + cVar47;
      uVar37 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar75 = (uVar63 * 0x200 | uVar63 >> 0x17) + uVar72;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1e];
      iVar3 = param_5[7];
      puVar53[0x1e] = uVar48;
      uVar63 = uVar73 + iVar3 + 0x676f02d9 + ((uVar72 ^ uVar75) & uVar64 ^ uVar72);
      cVar50 = (char)puVar53[0x1f];
      bVar49 = bVar49 + cVar50;
      uVar38 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar74 = (uVar63 * 0x4000 | uVar63 >> 0x12) + uVar75;
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      cVar51 = (char)uVar52;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1f];
      iVar3 = param_5[0xc];
      uVar63 = param_1[(ulonglong)(byte)(cVar51 + 0x20) + 2];
      puVar53[0x1f] = uVar48;
      uVar64 = uVar64 + iVar3 + -0x72d5b376 + ((uVar75 ^ uVar74) & uVar72 ^ uVar75);
      cVar47 = (char)uVar63;
      bVar49 = bVar49 + cVar47;
      uVar39 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar73 = (uVar64 * 0x100000 | uVar64 >> 0xc) + uVar74;
      puVar53 = param_1 + (ulonglong)(byte)(cVar51 + 0x20) + 2;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = uVar63;
      uVar72 = uVar72 + param_5[5] + -0x5c6be + (uVar75 ^ uVar74 ^ uVar73);
      *puVar53 = uVar48;
      cVar50 = (char)puVar53[1];
      bVar49 = bVar49 + cVar50;
      uVar63 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar64 = (uVar72 * 0x10 | uVar72 >> 0x1c) + uVar73;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[1];
      uVar75 = uVar75 + param_5[8] + -0x788e097f + (uVar74 ^ uVar73 ^ uVar64);
      puVar53[1] = uVar48;
      cVar47 = (char)puVar53[2];
      bVar49 = bVar49 + cVar47;
      uVar72 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar76 = (uVar75 * 0x800 | uVar75 >> 0x15) + uVar64;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[2];
      uVar74 = uVar74 + param_5[0xb] + 0x6d9d6122 + (uVar73 ^ uVar64 ^ uVar76);
      puVar53[2] = uVar48;
      cVar50 = (char)puVar53[3];
      bVar49 = bVar49 + cVar50;
      uVar75 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar74 = (uVar74 * 0x10000 | uVar74 >> 0x10) + uVar76;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[3];
      uVar73 = uVar73 + param_5[0xe] + -0x21ac7f4 + (uVar64 ^ uVar76 ^ uVar74);
      puVar53[3] = uVar48;
      cVar47 = (char)puVar53[4];
      bVar49 = bVar49 + cVar47;
      uVar40 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar73 = (uVar73 * 0x800000 | uVar73 >> 9) + uVar74;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[4];
      uVar64 = uVar64 + param_5[1] + -0x5b4115bc + (uVar76 ^ uVar74 ^ uVar73);
      puVar53[4] = uVar48;
      cVar50 = (char)puVar53[5];
      bVar49 = bVar49 + cVar50;
      uVar41 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar64 = (uVar64 * 0x10 | uVar64 >> 0x1c) + uVar73;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[5];
      uVar77 = uVar76 + param_5[4] + 0x4bdecfa9 + (uVar74 ^ uVar73 ^ uVar64);
      puVar53[5] = uVar48;
      cVar47 = (char)puVar53[6];
      bVar49 = bVar49 + cVar47;
      uVar76 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar78 = (uVar77 * 0x800 | uVar77 >> 0x15) + uVar64;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[6];
      uVar74 = uVar74 + param_5[7] + -0x944b4a0 + (uVar73 ^ uVar64 ^ uVar78);
      puVar53[6] = uVar48;
      cVar50 = (char)puVar53[7];
      bVar49 = bVar49 + cVar50;
      uVar77 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar74 = (uVar74 * 0x10000 | uVar74 >> 0x10) + uVar78;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[7];
      uVar73 = uVar73 + param_5[10] + -0x41404390 + (uVar64 ^ uVar78 ^ uVar74);
      puVar53[7] = uVar48;
      cVar47 = (char)puVar53[8];
      bVar49 = bVar49 + cVar47;
      uVar42 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar73 = (uVar73 * 0x800000 | uVar73 >> 9) + uVar74;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[8];
      uVar64 = uVar64 + param_5[0xd] + 0x289b7ec6 + (uVar78 ^ uVar74 ^ uVar73);
      puVar53[8] = uVar48;
      cVar50 = (char)puVar53[9];
      bVar49 = bVar49 + cVar50;
      uVar43 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar64 = (uVar64 * 0x10 | uVar64 >> 0x1c) + uVar73;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[9];
      uVar79 = uVar78 + *param_5 + -0x155ed806 + (uVar74 ^ uVar73 ^ uVar64);
      puVar53[9] = uVar48;
      cVar47 = (char)puVar53[10];
      bVar49 = bVar49 + cVar47;
      uVar78 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar80 = (uVar79 * 0x800 | uVar79 >> 0x15) + uVar64;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[10];
      uVar74 = uVar74 + param_5[3] + -0x2b10cf7b + (uVar73 ^ uVar64 ^ uVar80);
      puVar53[10] = uVar48;
      cVar50 = (char)puVar53[0xb];
      bVar49 = bVar49 + cVar50;
      uVar79 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar74 = (uVar74 * 0x10000 | uVar74 >> 0x10) + uVar80;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0xb];
      uVar73 = uVar73 + param_5[6] + 0x4881d05 + (uVar64 ^ uVar80 ^ uVar74);
      puVar53[0xb] = uVar48;
      cVar47 = (char)puVar53[0xc];
      bVar49 = bVar49 + cVar47;
      uVar44 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar73 = (uVar73 * 0x800000 | uVar73 >> 9) + uVar74;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0xc];
      uVar64 = uVar64 + param_5[9] + -0x262b2fc7 + (uVar80 ^ uVar74 ^ uVar73);
      puVar53[0xc] = uVar48;
      cVar50 = (char)puVar53[0xd];
      bVar49 = bVar49 + cVar50;
      uVar45 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar64 = (uVar64 * 0x10 | uVar64 >> 0x1c) + uVar73;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0xd];
      uVar81 = uVar80 + param_5[0xc] + -0x1924661b + (uVar74 ^ uVar73 ^ uVar64);
      puVar53[0xd] = uVar48;
      cVar47 = (char)puVar53[0xe];
      bVar49 = bVar49 + cVar47;
      uVar80 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar82 = (uVar81 * 0x800 | uVar81 >> 0x15) + uVar64;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0xe];
      uVar74 = uVar74 + param_5[0xf] + 0x1fa27cf8 + (uVar73 ^ uVar64 ^ uVar82);
      puVar53[0xe] = uVar48;
      cVar50 = (char)puVar53[0xf];
      bVar49 = bVar49 + cVar50;
      uVar81 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar65 = (uVar74 * 0x10000 | uVar74 >> 0x10) + uVar82;
      uVar8 = param_2[4];
      uVar9 = param_2[5];
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0xf];
      uVar73 = uVar73 + param_5[2] + -0x3b53a99b + (uVar64 ^ uVar82 ^ uVar65);
      puVar53[0xf] = uVar48;
      cVar47 = (char)puVar53[0x10];
      bVar49 = bVar49 + cVar47;
      uVar46 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar58 = (uVar73 * 0x800000 | uVar73 >> 9) + uVar65;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x10];
      iVar3 = *param_5;
      puVar53[0x10] = uVar48;
      uVar73 = uVar64 + iVar3 + -0xbd6ddbc + ((uVar82 ^ 0xffffffff | uVar58) ^ uVar65);
      cVar50 = (char)puVar53[0x11];
      bVar49 = bVar49 + cVar50;
      uVar64 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar74 = (uVar73 * 0x40 | uVar73 >> 0x1a) + uVar58;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x11];
      iVar3 = param_5[7];
      puVar53[0x11] = uVar48;
      uVar82 = uVar82 + iVar3 + 0x432aff97 + ((uVar65 ^ 0xffffffff | uVar74) ^ uVar58);
      cVar47 = (char)puVar53[0x12];
      bVar49 = bVar49 + cVar47;
      uVar73 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar83 = (uVar82 * 0x400 | uVar82 >> 0x16) + uVar74;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x12];
      iVar3 = param_5[0xe];
      puVar53[0x12] = uVar48;
      uVar82 = uVar65 + iVar3 + -0x546bdc59 + ((uVar58 ^ 0xffffffff | uVar83) ^ uVar74);
      cVar50 = (char)puVar53[0x13];
      bVar49 = bVar49 + cVar50;
      uVar65 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar66 = (uVar82 * 0x8000 | uVar82 >> 0x11) + uVar83;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x13];
      iVar3 = param_5[5];
      puVar53[0x13] = uVar48;
      uVar82 = uVar58 + iVar3 + -0x36c5fc7 + ((uVar74 ^ 0xffffffff | uVar66) ^ uVar83);
      cVar47 = (char)puVar53[0x14];
      bVar49 = bVar49 + cVar47;
      uVar58 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar59 = (uVar82 * 0x200000 | uVar82 >> 0xb) + uVar66;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x14];
      iVar3 = param_5[0xc];
      puVar53[0x14] = uVar48;
      uVar74 = uVar74 + iVar3 + 0x655b59c3 + ((uVar83 ^ 0xffffffff | uVar59) ^ uVar66);
      cVar50 = (char)puVar53[0x15];
      bVar49 = bVar49 + cVar50;
      uVar82 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar74 = (uVar74 * 0x40 | uVar74 >> 0x1a) + uVar59;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x15];
      iVar3 = param_5[3];
      puVar53[0x15] = uVar48;
      uVar84 = uVar83 + iVar3 + -0x70f3336e + ((uVar66 ^ 0xffffffff | uVar74) ^ uVar59);
      cVar47 = (char)puVar53[0x16];
      bVar49 = bVar49 + cVar47;
      uVar83 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar85 = (uVar84 * 0x400 | uVar84 >> 0x16) + uVar74;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x16];
      iVar3 = param_5[10];
      puVar53[0x16] = uVar48;
      uVar84 = uVar66 + iVar3 + -0x100b83 + ((uVar59 ^ 0xffffffff | uVar85) ^ uVar74);
      cVar50 = (char)puVar53[0x17];
      bVar49 = bVar49 + cVar50;
      uVar66 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar67 = (uVar84 * 0x8000 | uVar84 >> 0x11) + uVar85;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x17];
      iVar3 = param_5[1];
      puVar53[0x17] = uVar48;
      uVar84 = uVar59 + iVar3 + -0x7a7ba22f + ((uVar74 ^ 0xffffffff | uVar67) ^ uVar85);
      cVar47 = (char)puVar53[0x18];
      bVar49 = bVar49 + cVar47;
      uVar59 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar60 = (uVar84 * 0x200000 | uVar84 >> 0xb) + uVar67;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x18];
      iVar3 = param_5[8];
      puVar53[0x18] = uVar48;
      uVar74 = uVar74 + iVar3 + 0x6fa87e4f + ((uVar85 ^ 0xffffffff | uVar60) ^ uVar67);
      cVar50 = (char)puVar53[0x19];
      bVar49 = bVar49 + cVar50;
      uVar84 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar74 = (uVar74 * 0x40 | uVar74 >> 0x1a) + uVar60;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x19];
      iVar3 = param_5[0xf];
      puVar53[0x19] = uVar48;
      uVar86 = uVar85 + iVar3 + -0x1d31920 + ((uVar67 ^ 0xffffffff | uVar74) ^ uVar60);
      cVar47 = (char)puVar53[0x1a];
      bVar49 = bVar49 + cVar47;
      uVar85 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar87 = (uVar86 * 0x400 | uVar86 >> 0x16) + uVar74;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1a];
      iVar3 = param_5[6];
      puVar53[0x1a] = uVar48;
      uVar86 = uVar67 + iVar3 + -0x5cfebcec + ((uVar60 ^ 0xffffffff | uVar87) ^ uVar74);
      cVar50 = (char)puVar53[0x1b];
      bVar49 = bVar49 + cVar50;
      uVar67 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar68 = (uVar86 * 0x8000 | uVar86 >> 0x11) + uVar87;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1b];
      iVar3 = param_5[0xd];
      puVar53[0x1b] = uVar48;
      uVar86 = uVar60 + iVar3 + 0x4e0811a1 + ((uVar74 ^ 0xffffffff | uVar68) ^ uVar87);
      cVar47 = (char)puVar53[0x1c];
      bVar49 = bVar49 + cVar47;
      uVar60 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar61 = (uVar86 * 0x200000 | uVar86 >> 0xb) + uVar68;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1c];
      iVar3 = param_5[4];
      puVar53[0x1c] = uVar48;
      uVar74 = uVar74 + iVar3 + -0x8ac817e + ((uVar87 ^ 0xffffffff | uVar61) ^ uVar68);
      cVar50 = (char)puVar53[0x1d];
      bVar49 = bVar49 + cVar50;
      uVar86 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar56 = (uVar74 * 0x40 | uVar74 >> 0x1a) + uVar61;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1d];
      iVar3 = param_5[0xb];
      puVar53[0x1d] = uVar48;
      uVar74 = uVar87 + iVar3 + -0x42c50dcb + ((uVar68 ^ 0xffffffff | uVar56) ^ uVar61);
      cVar47 = (char)puVar53[0x1e];
      bVar49 = bVar49 + cVar47;
      uVar87 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar48) + 2];
      uVar88 = (uVar74 * 0x400 | uVar74 >> 0x16) + uVar56;
      uVar48 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1e];
      iVar3 = param_5[2];
      puVar53[0x1e] = uVar48;
      uVar74 = uVar68 + iVar3 + 0x2ad7d2bb + ((uVar61 ^ 0xffffffff | uVar88) ^ uVar56);
      cVar50 = (char)puVar53[0x1f];
      bVar49 = bVar49 + cVar50;
      uVar68 = param_1[(ulonglong)(byte)(cVar47 + (char)uVar48) + 2];
      uVar69 = (uVar74 * 0x8000 | uVar74 >> 0x11) + uVar88;
      uVar10 = param_2[6];
      uVar11 = param_2[7];
      uVar74 = param_1[(ulonglong)bVar49 + 2];
      param_1[(ulonglong)bVar49 + 2] = puVar53[0x1f];
      iVar3 = param_5[9];
      uVar48 = param_1[(ulonglong)(byte)(cVar51 + 0x40U) + 2];
      puVar53[0x1f] = uVar74;
      uVar61 = uVar61 + iVar3 + -0x14792c6f + ((uVar56 ^ 0xffffffff | uVar69) ^ uVar88);
      bVar49 = bVar49 + (char)uVar48;
      uVar74 = param_1[(ulonglong)(byte)(cVar50 + (char)uVar74) + 2];
      uVar52 = (ulonglong)(byte)(cVar51 + 0x40U);
      iVar57 = uVar56 + iVar57;
      uVar62 = (uVar61 * 0x200000 | uVar61 >> 0xb) + uVar69 + uVar62;
      uVar70 = uVar69 + uVar70;
      uVar89 = uVar88 + uVar89;
      *(ulonglong *)(lVar91 + (longlong)param_2) =
           uVar4 ^ ((ulonglong)uVar2 & 0xffffffff0000ffff | (ulonglong)(ushort)uVar12 << 0x10 |
                    (ulonglong)(ushort)uVar14 << 0x20 | (ulonglong)(ushort)uVar16 << 0x30) ^
           ((ulonglong)uVar54 & 0xffffffff0000ffff | (ulonglong)(ushort)uVar13 << 0x10 |
            (ulonglong)(ushort)uVar15 << 0x20 | (ulonglong)(ushort)uVar17 << 0x30) * 0x100;
      ((ulonglong *)(lVar91 + (longlong)param_2))[1] =
           uVar5 ^ CONCAT26((short)uVar24,
                            CONCAT24((short)uVar22,CONCAT22((short)uVar20,(short)uVar18))) ^
           CONCAT26((short)uVar25,CONCAT24((short)uVar23,CONCAT22((short)uVar21,(short)uVar19))) <<
           8;
      puVar1 = (ulonglong *)(lVar91 + 0x10 + (longlong)param_2);
      *puVar1 = uVar6 ^ ((ulonglong)uVar55 & 0xffffffff0000ffff | (ulonglong)(ushort)uVar26 << 0x10
                         | (ulonglong)(ushort)uVar28 << 0x20 | (ulonglong)(ushort)uVar30 << 0x30) ^
                ((ulonglong)uVar71 & 0xffffffff0000ffff | (ulonglong)(ushort)uVar27 << 0x10 |
                 (ulonglong)(ushort)uVar29 << 0x20 | (ulonglong)(ushort)uVar31 << 0x30) * 0x100;
      puVar1[1] = uVar7 ^ CONCAT26((short)uVar38,
                                   CONCAT24((short)uVar36,CONCAT22((short)uVar34,(short)uVar32))) ^
                  CONCAT26((short)uVar39,
                           CONCAT24((short)uVar37,CONCAT22((short)uVar35,(short)uVar33))) << 8;
      puVar1 = (ulonglong *)(lVar91 + 0x20 + (longlong)param_2);
      *puVar1 = uVar8 ^ ((ulonglong)uVar63 & 0xffffffff0000ffff | (ulonglong)(ushort)uVar75 << 0x10
                         | (ulonglong)(ushort)uVar41 << 0x20 | (ulonglong)(ushort)uVar77 << 0x30) ^
                ((ulonglong)uVar72 & 0xffffffff0000ffff | (ulonglong)(ushort)uVar40 << 0x10 |
                 (ulonglong)(ushort)uVar76 << 0x20 | (ulonglong)(ushort)uVar42 << 0x30) * 0x100;
      puVar1[1] = uVar9 ^ CONCAT26((short)uVar81,
                                   CONCAT24((short)uVar45,CONCAT22((short)uVar79,(short)uVar43))) ^
                  CONCAT26((short)uVar46,
                           CONCAT24((short)uVar80,CONCAT22((short)uVar44,(short)uVar78))) << 8;
      puVar1 = (ulonglong *)(lVar91 + 0x30 + (longlong)param_2);
      *puVar1 = uVar10 ^ ((ulonglong)uVar64 & 0xffffffff0000ffff | (ulonglong)(ushort)uVar65 << 0x10
                          | (ulonglong)(ushort)uVar82 << 0x20 | (ulonglong)(ushort)uVar66 << 0x30) ^
                ((ulonglong)uVar73 & 0xffffffff0000ffff | (ulonglong)(ushort)uVar58 << 0x10 |
                 (ulonglong)(ushort)uVar83 << 0x20 | (ulonglong)(ushort)uVar59 << 0x30) * 0x100;
      puVar1[1] = uVar11 ^ CONCAT26((short)uVar68,
                                    CONCAT24((short)uVar86,CONCAT22((short)uVar67,(short)uVar84))) ^
                  CONCAT26((short)uVar74,
                           CONCAT24((short)uVar87,CONCAT22((short)uVar60,(short)uVar85))) << 8;
      param_5 = param_5 + 0x10;
      param_2 = param_2 + 8;
    } while (param_5 < piVar90);
    *param_4 = iVar57;
    param_4[1] = uVar62;
    param_4[2] = uVar70;
    param_4[3] = uVar89;
    *param_1 = (uint)(byte)(cVar51 + 0x3f);
    param_1[1] = (uint)(byte)(bVar49 - (char)uVar48);
  }
  return;
}




void FUN_180003000(int *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  piVar1 = param_2 + param_3 * 0x10;
  iVar3 = *param_1;
  uVar9 = param_1[1];
  uVar4 = param_1[2];
  uVar7 = param_1[3];
  if (param_2 != piVar1) {
    do {
      uVar2 = iVar3 + -0x28955b88 + *param_2 + ((uVar7 ^ uVar4) & uVar9 ^ uVar7);
      uVar2 = (uVar2 * 0x80 | uVar2 >> 0x19) + uVar9;
      uVar5 = uVar7 + 0xe8c7b756 + param_2[1] + ((uVar4 ^ uVar9) & uVar2 ^ uVar4);
      uVar6 = (uVar5 * 0x1000 | uVar5 >> 0x14) + uVar2;
      uVar5 = uVar4 + 0x242070db + param_2[2] + ((uVar9 ^ uVar2) & uVar6 ^ uVar9);
      uVar5 = (uVar5 * 0x20000 | uVar5 >> 0xf) + uVar6;
      uVar8 = uVar9 + 0xc1bdceee + param_2[3] + ((uVar2 ^ uVar6) & uVar5 ^ uVar2);
      uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar5;
      uVar2 = uVar2 + 0xf57c0faf + param_2[4] + ((uVar6 ^ uVar5) & uVar8 ^ uVar6);
      uVar2 = (uVar2 * 0x80 | uVar2 >> 0x19) + uVar8;
      uVar6 = uVar6 + 0x4787c62a + param_2[5] + ((uVar5 ^ uVar8) & uVar2 ^ uVar5);
      uVar6 = (uVar6 * 0x1000 | uVar6 >> 0x14) + uVar2;
      uVar5 = uVar5 + 0xa8304613 + param_2[6] + ((uVar8 ^ uVar2) & uVar6 ^ uVar8);
      uVar5 = (uVar5 * 0x20000 | uVar5 >> 0xf) + uVar6;
      uVar8 = uVar8 + 0xfd469501 + param_2[7] + ((uVar2 ^ uVar6) & uVar5 ^ uVar2);
      uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar5;
      uVar2 = uVar2 + 0x698098d8 + param_2[8] + ((uVar6 ^ uVar5) & uVar8 ^ uVar6);
      uVar2 = (uVar2 * 0x80 | uVar2 >> 0x19) + uVar8;
      uVar6 = uVar6 + 0x8b44f7af + param_2[9] + ((uVar5 ^ uVar8) & uVar2 ^ uVar5);
      uVar6 = (uVar6 * 0x1000 | uVar6 >> 0x14) + uVar2;
      uVar5 = (uVar5 - 0xa44f) + param_2[10] + ((uVar8 ^ uVar2) & uVar6 ^ uVar8);
      uVar5 = (uVar5 * 0x20000 | uVar5 >> 0xf) + uVar6;
      uVar8 = uVar8 + 0x895cd7be + param_2[0xb] + ((uVar2 ^ uVar6) & uVar5 ^ uVar2);
      uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar5;
      uVar2 = uVar2 + 0x6b901122 + param_2[0xc] + ((uVar6 ^ uVar5) & uVar8 ^ uVar6);
      uVar2 = (uVar2 * 0x80 | uVar2 >> 0x19) + uVar8;
      uVar6 = uVar6 + 0xfd987193 + param_2[0xd] + ((uVar5 ^ uVar8) & uVar2 ^ uVar5);
      uVar6 = (uVar6 * 0x1000 | uVar6 >> 0x14) + uVar2;
      uVar5 = uVar5 + 0xa679438e + param_2[0xe] + ((uVar8 ^ uVar2) & uVar6 ^ uVar8);
      uVar5 = (uVar5 * 0x20000 | uVar5 >> 0xf) + uVar6;
      uVar8 = uVar8 + 0x49b40821 + param_2[0xf] + ((uVar2 ^ uVar6) & uVar5 ^ uVar2);
      uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar5;
      uVar2 = uVar2 + 0xf61e2562 + param_2[1] + (uVar6 & uVar8 | ~uVar6 & uVar5);
      uVar2 = (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar8;
      uVar6 = uVar6 + 0xc040b340 + param_2[6] + (uVar5 & uVar2 | ~uVar5 & uVar8);
      uVar6 = (uVar6 * 0x200 | uVar6 >> 0x17) + uVar2;
      uVar5 = uVar5 + 0x265e5a51 + param_2[0xb] + (uVar8 & uVar6 | ~uVar8 & uVar2);
      uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar6;
      uVar8 = uVar8 + 0xe9b6c7aa + *param_2 + (uVar2 & uVar5 | ~uVar2 & uVar6);
      uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar5;
      uVar2 = uVar2 + 0xd62f105d + param_2[5] + (uVar6 & uVar8 | ~uVar6 & uVar5);
      uVar2 = (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar8;
      uVar6 = uVar6 + 0x2441453 + param_2[10] + (uVar5 & uVar2 | ~uVar5 & uVar8);
      uVar6 = (uVar6 * 0x200 | uVar6 >> 0x17) + uVar2;
      uVar5 = uVar5 + 0xd8a1e681 + param_2[0xf] + (uVar8 & uVar6 | ~uVar8 & uVar2);
      uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar6;
      uVar8 = uVar8 + 0xe7d3fbc8 + param_2[4] + (uVar2 & uVar5 | ~uVar2 & uVar6);
      uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar5;
      uVar2 = uVar2 + 0x21e1cde6 + param_2[9] + (uVar6 & uVar8 | ~uVar6 & uVar5);
      uVar2 = (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar8;
      uVar6 = uVar6 + 0xc33707d6 + param_2[0xe] + (uVar5 & uVar2 | ~uVar5 & uVar8);
      uVar6 = (uVar6 * 0x200 | uVar6 >> 0x17) + uVar2;
      uVar5 = uVar5 + 0xf4d50d87 + param_2[3] + (uVar8 & uVar6 | ~uVar8 & uVar2);
      uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar6;
      uVar8 = uVar8 + 0x455a14ed + param_2[8] + (uVar2 & uVar5 | ~uVar2 & uVar6);
      uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar5;
      uVar2 = uVar2 + 0xa9e3e905 + param_2[0xd] + (uVar6 & uVar8 | ~uVar6 & uVar5);
      uVar2 = (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar8;
      uVar6 = uVar6 + 0xfcefa3f8 + param_2[2] + (uVar5 & uVar2 | ~uVar5 & uVar8);
      uVar6 = (uVar6 * 0x200 | uVar6 >> 0x17) + uVar2;
      uVar5 = uVar5 + 0x676f02d9 + param_2[7] + (uVar8 & uVar6 | ~uVar8 & uVar2);
      uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar6;
      uVar8 = uVar8 + 0x8d2a4c8a + param_2[0xc] + (uVar2 & uVar5 | ~uVar2 & uVar6);
      uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar5;
      uVar2 = (uVar2 - 0x5c6be) + param_2[5] + (uVar5 ^ uVar6 ^ uVar8);
      uVar2 = (uVar2 * 0x10 | uVar2 >> 0x1c) + uVar8;
      uVar6 = uVar6 + 0x8771f681 + param_2[8] + (uVar8 ^ uVar5 ^ uVar2);
      uVar6 = (uVar6 * 0x800 | uVar6 >> 0x15) + uVar2;
      uVar5 = uVar5 + 0x6d9d6122 + param_2[0xb] + (uVar2 ^ uVar8 ^ uVar6);
      uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar6;
      uVar8 = uVar8 + 0xfde5380c + param_2[0xe] + (uVar6 ^ uVar2 ^ uVar5);
      uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar5;
      uVar2 = uVar2 + 0xa4beea44 + param_2[1] + (uVar5 ^ uVar6 ^ uVar8);
      uVar2 = (uVar2 * 0x10 | uVar2 >> 0x1c) + uVar8;
      uVar6 = uVar6 + 0x4bdecfa9 + param_2[4] + (uVar8 ^ uVar5 ^ uVar2);
      uVar6 = (uVar6 * 0x800 | uVar6 >> 0x15) + uVar2;
      uVar5 = uVar5 + 0xf6bb4b60 + param_2[7] + (uVar2 ^ uVar8 ^ uVar6);
      uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar6;
      uVar8 = uVar8 + 0xbebfbc70 + param_2[10] + (uVar6 ^ uVar2 ^ uVar5);
      uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar5;
      uVar2 = uVar2 + 0x289b7ec6 + param_2[0xd] + (uVar5 ^ uVar6 ^ uVar8);
      uVar2 = (uVar2 * 0x10 | uVar2 >> 0x1c) + uVar8;
      uVar6 = uVar6 + 0xeaa127fa + *param_2 + (uVar8 ^ uVar5 ^ uVar2);
      uVar6 = (uVar6 * 0x800 | uVar6 >> 0x15) + uVar2;
      uVar5 = uVar5 + 0xd4ef3085 + param_2[3] + (uVar2 ^ uVar8 ^ uVar6);
      uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar6;
      uVar8 = uVar8 + 0x4881d05 + param_2[6] + (uVar6 ^ uVar2 ^ uVar5);
      uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar5;
      uVar2 = uVar2 + 0xd9d4d039 + param_2[9] + (uVar5 ^ uVar6 ^ uVar8);
      uVar2 = (uVar2 * 0x10 | uVar2 >> 0x1c) + uVar8;
      uVar6 = uVar6 + 0xe6db99e5 + param_2[0xc] + (uVar8 ^ uVar5 ^ uVar2);
      uVar6 = (uVar6 * 0x800 | uVar6 >> 0x15) + uVar2;
      uVar5 = uVar5 + 0x1fa27cf8 + param_2[0xf] + (uVar2 ^ uVar8 ^ uVar6);
      uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar6;
      uVar8 = uVar8 + 0xc4ac5665 + param_2[2] + (uVar6 ^ uVar2 ^ uVar5);
      uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar5;
      uVar2 = uVar2 + 0xf4292244 + *param_2 + ((uVar6 ^ 0xffffffff | uVar8) ^ uVar5);
      uVar2 = (uVar2 * 0x40 | uVar2 >> 0x1a) + uVar8;
      uVar6 = uVar6 + 0x432aff97 + param_2[7] + ((uVar5 ^ 0xffffffff | uVar2) ^ uVar8);
      uVar6 = (uVar6 * 0x400 | uVar6 >> 0x16) + uVar2;
      uVar5 = uVar5 + 0xab9423a7 + param_2[0xe] + ((uVar8 ^ 0xffffffff | uVar6) ^ uVar2);
      uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar6;
      uVar8 = uVar8 + 0xfc93a039 + param_2[5] + ((uVar2 ^ 0xffffffff | uVar5) ^ uVar6);
      uVar8 = (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar5;
      uVar2 = uVar2 + 0x655b59c3 + param_2[0xc] + ((uVar6 ^ 0xffffffff | uVar8) ^ uVar5);
      uVar2 = (uVar2 * 0x40 | uVar2 >> 0x1a) + uVar8;
      uVar6 = uVar6 + 0x8f0ccc92 + param_2[3] + ((uVar5 ^ 0xffffffff | uVar2) ^ uVar8);
      uVar6 = (uVar6 * 0x400 | uVar6 >> 0x16) + uVar2;
      uVar5 = (uVar5 - 0x100b83) + param_2[10] + ((uVar8 ^ 0xffffffff | uVar6) ^ uVar2);
      uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar6;
      uVar8 = uVar8 + 0x85845dd1 + param_2[1] + ((uVar2 ^ 0xffffffff | uVar5) ^ uVar6);
      uVar8 = (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar5;
      uVar2 = uVar2 + 0x6fa87e4f + param_2[8] + ((uVar6 ^ 0xffffffff | uVar8) ^ uVar5);
      uVar2 = (uVar2 * 0x40 | uVar2 >> 0x1a) + uVar8;
      uVar6 = uVar6 + 0xfe2ce6e0 + param_2[0xf] + ((uVar5 ^ 0xffffffff | uVar2) ^ uVar8);
      uVar6 = (uVar6 * 0x400 | uVar6 >> 0x16) + uVar2;
      uVar5 = uVar5 + 0xa3014314 + param_2[6] + ((uVar8 ^ 0xffffffff | uVar6) ^ uVar2);
      uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar6;
      uVar8 = uVar8 + 0x4e0811a1 + param_2[0xd] + ((uVar2 ^ 0xffffffff | uVar5) ^ uVar6);
      uVar8 = (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar5;
      uVar2 = uVar2 + 0xf7537e82 + param_2[4] + ((uVar6 ^ 0xffffffff | uVar8) ^ uVar5);
      uVar2 = (uVar2 * 0x40 | uVar2 >> 0x1a) + uVar8;
      uVar6 = uVar6 + 0xbd3af235 + param_2[0xb] + ((uVar5 ^ 0xffffffff | uVar2) ^ uVar8);
      uVar6 = (uVar6 * 0x400 | uVar6 >> 0x16) + uVar2;
      uVar5 = uVar5 + 0x2ad7d2bb + param_2[2] + ((uVar8 ^ 0xffffffff | uVar6) ^ uVar2);
      uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar6;
      uVar8 = uVar8 + 0xeb86d391 + param_2[9] + ((uVar2 ^ 0xffffffff | uVar5) ^ uVar6);
      iVar3 = uVar2 + iVar3;
      uVar9 = (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar5 + uVar9;
      uVar4 = uVar5 + uVar4;
      uVar7 = uVar6 + uVar7;
      param_2 = param_2 + 0x10;
    } while (param_2 < piVar1);
  }
  *param_1 = iVar3;
  param_1[1] = uVar9;
  param_1[2] = uVar4;
  param_1[3] = uVar7;
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180003ba0(ushort *param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  ushort *puVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = 0;
  uVar6 = 10;
  puVar5 = param_1;
  if (*param_1 == 0x30) {
    puVar5 = param_1 + 1;
    uVar6 = 8;
    uVar3 = FUN_180003c90((uint)param_1[1]);
    if (uVar3 == 0x78) {
      uVar6 = 0x10;
      puVar5 = param_1 + 2;
    }
  }
  while( true ) {
    uVar1 = *puVar5;
    uVar3 = (uint)uVar1;
    bVar2 = FUN_180003c80(uVar3);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) {
      uVar4 = FUN_180003c60((uint)uVar1,0x10);
      if ((int)uVar4 == 0) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = FUN_180003c90(uVar3);
        uVar3 = uVar3 - 0x57;
      }
    }
    else {
      uVar3 = uVar3 - 0x30;
    }
    puVar5 = puVar5 + 1;
    if (uVar6 <= uVar3) break;
    lVar7 = (ulonglong)uVar3 + (ulonglong)uVar6 * lVar7;
  }
  return lVar7;
}




undefined8 FUN_180003c60(uint param_1,ushort param_2)

{
  if ((param_1 < 0x80) &&
     ((param_2 & *(ushort *)(&DAT_180011460 + (longlong)(int)param_1 * 2)) != 0)) {
    return 1;
  }
  return 0;
}




bool FUN_180003c80(int param_1)

{
  return param_1 - 0x30U < 10;
}




uint FUN_180003c90(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 ^ 0x20;
  if (0x19 < param_1 - 0x41) {
    uVar1 = param_1;
  }
  return uVar1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180003df0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180003e03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180019108)(0);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180003e10(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180003e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1800190e8)(0);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180003e30(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180003e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180019110)(0);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180003e50(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000180003e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1800190f0)(0,param_1,param_2,param_3);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180003e80(uint param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  (*DAT_1800190f8)(0,(param_1 & 0xff) << 0x17 | param_2 & 0x7fffff,param_3,&local_res20,0x180003e94)
  ;
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180003ec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180003ed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180019100)(0);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OSSL_provider_init(undefined8 param_1,int *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  
                    /* 0x3ee0  1  OSSL_provider_init */
  iVar1 = *param_2;
  lVar3 = 0;
  if (iVar1 != 0) {
    plVar9 = (longlong *)(param_2 + 2);
    lVar5 = DAT_180019100;
    lVar6 = DAT_180019110;
    lVar7 = DAT_180019108;
    lVar8 = DAT_1800190f8;
    lVar2 = DAT_1800190e8;
    lVar10 = DAT_1800190f0;
    do {
      switch(iVar1) {
      case 5:
        if (lVar2 == 0) {
          lVar2 = *plVar9;
          DAT_1800190e8 = lVar2;
        }
        else {
          bVar11 = lVar2 == *plVar9;
LAB_180003fef:
          if (!bVar11) goto LAB_180004077;
        }
        break;
      case 6:
        if (lVar10 != 0) {
          bVar11 = lVar10 == *plVar9;
          goto LAB_180003fef;
        }
        lVar10 = *plVar9;
        DAT_1800190f0 = lVar10;
        break;
      case 7:
        if (lVar8 != 0) {
          bVar11 = lVar8 == *plVar9;
          goto LAB_180003fef;
        }
        lVar8 = *plVar9;
        DAT_1800190f8 = lVar8;
        break;
      case 8:
        if (lVar5 != 0) {
          bVar11 = lVar5 == *plVar9;
          goto LAB_180003fef;
        }
        lVar5 = *plVar9;
        DAT_180019100 = lVar5;
        break;
      case 9:
        if (lVar7 != 0) {
          bVar11 = lVar7 == *plVar9;
          goto LAB_180003fef;
        }
        lVar7 = *plVar9;
        DAT_180019108 = lVar7;
        break;
      case 10:
        if (lVar6 != 0) {
          bVar11 = lVar6 == *plVar9;
          goto LAB_180003fef;
        }
        lVar6 = *plVar9;
        DAT_180019110 = lVar6;
      }
      iVar1 = (int)plVar9[1];
      plVar9 = plVar9 + 2;
    } while (iVar1 != 0);
  }
  lVar2 = FUN_18000cc00();
  *param_4 = lVar2;
  if ((lVar2 == 0) || (lVar3 = OSSL_LIB_CTX_new_child(param_1,param_2), lVar3 == 0)) {
    OSSL_LIB_CTX_free(lVar3);
    lVar3 = *param_4;
    uVar4 = FUN_18000cbf0(lVar3);
    OSSL_LIB_CTX_free(uVar4);
    FUN_18000cbc0(lVar3);
    *param_4 = 0;
LAB_180004077:
    uVar4 = 0;
  }
  else {
    FUN_18000cc40(*param_4,lVar3);
    FUN_18000cc30((undefined8 *)*param_4,param_1);
    *param_3 = &DAT_180011b60;
    uVar4 = 1;
  }
  return uVar4;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1800041f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_180008440();
  if ((((int)uVar2 != 0) && (0xf < param_4)) && (iVar1 = MD4_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x10;
    return 1;
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180004290(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_180008440();
  if ((((int)uVar2 == 0) || (iVar1 = MDC2_Init(param_1), iVar1 == 0)) || (param_1 == 0)) {
    return 0;
  }
  if (((param_2 != 0) && (lVar3 = OSSL_PARAM_locate_const(param_2,"pad-type"), lVar3 != 0)) &&
     (iVar1 = OSSL_PARAM_get_uint(lVar3,param_1 + 0x1c), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\digests\\mdc2_prov.c",0x33,"mdc2_set_ctx_params");
    FUN_180003e80(0x39,0x67,0,param_4);
    return 0;
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_180004410(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_180008440();
  if ((((int)uVar2 != 0) && (0xf < param_4)) && (iVar1 = MDC2_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x10;
    return 1;
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1800046c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_180008440();
  if ((((int)uVar2 != 0) && (0x3f < param_4)) &&
     (iVar1 = WHIRLPOOL_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x40;
    return 1;
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_180004890(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_180008440();
  if ((((int)uVar2 != 0) && (0x13 < param_4)) &&
     (iVar1 = RIPEMD160_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x14;
    return 1;
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_180004970(void *param_1)

{
  undefined8 uVar1;
  void *_Dst;
  
  uVar1 = FUN_180008440();
  if ((int)uVar1 != 0) {
    _Dst = (void *)CRYPTO_malloc(0x1108,"providers\\implementations\\ciphers\\cipher_blowfish.c",
                                 0x2b);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_1,0x1108);
      return _Dst;
    }
  }
  return (void *)0x0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180005b50(void *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  int local_38 [2];
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x180005b60;
  local_18 = DAT_180019000 ^ (ulonglong)auStack_58;
  if ((param_2 == 0) ||
     (uVar2 = FUN_18000e5f0((longlong)param_1,param_2,param_3,param_4), (int)uVar2 == 0))
  goto LAB_180005d47;
  lVar3 = OSSL_PARAM_locate_const(param_2,"keybits");
  if ((lVar3 != 0) && (iVar1 = OSSL_PARAM_get_size_t(lVar3,(longlong)param_1 + 0x1c0), iVar1 == 0))
  {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc2.c",0xad,"rc2_set_ctx_params");
    FUN_180003e80(0x39,0x67,0,param_4);
    goto LAB_180005d47;
  }
  lVar3 = OSSL_PARAM_locate_const(param_2,"alg_id_param");
  if (lVar3 == 0) goto LAB_180005d47;
  local_30 = *(undefined8 *)(lVar3 + 0x10);
  lVar4 = 0;
  local_38[0] = 0;
  if (((*(int *)(lVar3 + 8) == 5) && (*(ulonglong *)((longlong)param_1 + 0x50) < 0x11)) &&
     (lVar4 = d2i_ASN1_TYPE(0,&local_30,*(undefined4 *)(lVar3 + 0x18)), lVar4 != 0)) {
    param_4 = (ulonglong)*(uint *)((longlong)param_1 + 0x50);
    iVar1 = ASN1_TYPE_get_int_octetstring(lVar4,local_38,local_28);
    if (((longlong)iVar1 == *(size_t *)((longlong)param_1 + 0x50)) &&
       (uVar2 = FUN_18000e020(param_1,local_28,*(size_t *)((longlong)param_1 + 0x50),param_4),
       (int)uVar2 != 0)) {
      if (local_38[0] == 0x3a) {
        *(undefined8 *)((longlong)param_1 + 0x1c0) = 0x80;
      }
      else if (local_38[0] == 0x78) {
        *(undefined8 *)((longlong)param_1 + 0x1c0) = 0x40;
      }
      else {
        if (local_38[0] != 0xa0) {
          FUN_180003e10();
          FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc2.c",0x54,
                        "rc2_magic_to_keybits");
          FUN_180003e80(0x39,0x99,0,param_4);
          *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
          goto LAB_180005ccb;
        }
        *(undefined8 *)((longlong)param_1 + 0x1c0) = 0x28;
      }
      ASN1_TYPE_free(lVar4);
      *(ulonglong *)((longlong)param_1 + 0x48) = *(ulonglong *)((longlong)param_1 + 0x1c0) >> 3;
      goto LAB_180005d47;
    }
  }
LAB_180005ccb:
  FUN_180003e10();
  FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc2.c",0xc1,"rc2_set_ctx_params");
  FUN_180003e80(0x39,0x68,0,param_4);
  ASN1_TYPE_free(lVar4);
LAB_180005d47:
  FUN_18000f5b0(local_18 ^ (ulonglong)auStack_58);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1800064e0(void *param_1,longlong param_2,size_t param_3,void *param_4,size_t param_5,
             longlong param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Size = param_3;
  pvVar4 = param_4;
  uVar3 = FUN_180008440();
  if ((int)uVar3 == 0) {
LAB_180006546:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0x6c);
    *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x60) = 0;
    *(uint *)((longlong)param_1 + 0x6c) = uVar1 | 2;
    if (param_4 == (void *)0x0) {
      if ((uVar1 & 4) != 0) {
        _Size = *(size_t *)((longlong)param_1 + 0x50);
        memcpy((void *)((longlong)param_1 + 0x20),param_1,_Size);
      }
    }
    else {
      uVar3 = FUN_18000e020(param_1,param_4,param_5,pvVar4);
      _Size = param_5;
      if ((int)uVar3 == 0) goto LAB_180006546;
    }
    if (param_2 != 0) {
      if (param_3 != *(size_t *)((longlong)param_1 + 0x48)) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_des.c",0x5e,"des_init");
        FUN_180003e80(0x39,0x69,0,pvVar4);
        return 0;
      }
      iVar2 = (*(code *)**(undefined8 **)((longlong)param_1 + 0xa8))(param_1,param_2);
      if (iVar2 == 0) goto LAB_180006546;
      *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 8;
      _Size = param_3;
    }
    uVar3 = FUN_18000e190((longlong)param_1,param_6,_Size,pvVar4);
  }
  return uVar3;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1800065e0(void *param_1,longlong param_2,size_t param_3,void *param_4,size_t param_5,
             longlong param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Size = param_3;
  pvVar4 = param_4;
  uVar3 = FUN_180008440();
  if ((int)uVar3 == 0) {
LAB_180006646:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0x6c);
    *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x60) = 0;
    *(uint *)((longlong)param_1 + 0x6c) = uVar1 & 0xfffffffd;
    if (param_4 == (void *)0x0) {
      if ((uVar1 & 4) != 0) {
        _Size = *(size_t *)((longlong)param_1 + 0x50);
        memcpy((void *)((longlong)param_1 + 0x20),param_1,_Size);
      }
    }
    else {
      uVar3 = FUN_18000e020(param_1,param_4,param_5,pvVar4);
      _Size = param_5;
      if ((int)uVar3 == 0) goto LAB_180006646;
    }
    if (param_2 != 0) {
      if (param_3 != *(size_t *)((longlong)param_1 + 0x48)) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_des.c",0x5e,"des_init");
        FUN_180003e80(0x39,0x69,0,pvVar4);
        return 0;
      }
      iVar2 = (*(code *)**(undefined8 **)((longlong)param_1 + 0xa8))(param_1,param_2);
      if (iVar2 == 0) goto LAB_180006646;
      *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 8;
      _Size = param_3;
    }
    uVar3 = FUN_18000e190((longlong)param_1,param_6,_Size,pvVar4);
  }
  return uVar3;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1800066e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_18000d960(param_1,param_2,param_3,param_4);
  if ((int)uVar2 != 0) {
    lVar3 = OSSL_PARAM_locate(param_2,"randkey");
    if (lVar3 == 0) {
      return 1;
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uVar2 = *(undefined8 *)(lVar3 + 0x10);
      param_4 = 0;
      iVar1 = RAND_priv_bytes_ex(*(undefined8 *)(param_1 + 0xb8),uVar2);
      if (0 < iVar1) {
        DES_set_odd_parity(uVar2);
        return 1;
      }
    }
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\cipher_des.c",0x90,"des_get_ctx_params");
    FUN_180003e80(0x39,0x79,0,param_4);
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1800067a0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180008440();
  if ((int)uVar1 != 0) {
    lVar2 = CRYPTO_malloc(0x148,"providers\\implementations\\ciphers\\cipher_des.c",0x37);
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0xa8) + 0x10))(lVar2,param_1);
      return lVar2;
    }
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180006af0(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                      undefined4 param_5,ulonglong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180008440();
  if ((int)uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CRYPTO_zalloc(0x148,"providers\\implementations\\ciphers\\cipher_des.c",0x28);
    if (lVar2 != 0) {
      FUN_18000e0c0(lVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_1);
    }
  }
  return lVar2;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1800070b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x48));
    if (iVar1 == 0) {
      FUN_180003e10();
      FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0x79,
                    "rc4_hmac_md5_get_ctx_params");
      FUN_180003e80(0x39,0x68,0,param_4);
      return 0;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x50));
    if (iVar1 == 0) {
      FUN_180003e10();
      FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0x7f,
                    "rc4_hmac_md5_get_ctx_params");
      FUN_180003e80(0x39,0x68,0,param_4);
      return 0;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tlsaadpad");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x5e8));
    if (iVar1 == 0) {
      FUN_180003e10();
      FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0x84,
                    "rc4_hmac_md5_get_ctx_params");
      FUN_180003e80(0x39,0x68,0,param_4);
      return 0;
    }
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180007210(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8;
  
  if (param_2 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_res8);
      if (iVar1 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0xa2,
                      "rc4_hmac_md5_set_ctx_params");
        FUN_180003e80(0x39,0x67,0,param_4);
        return 0;
      }
      if (*(longlong *)(param_1 + 0x48) != local_res8) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0xa6,
                      "rc4_hmac_md5_set_ctx_params");
        FUN_180003e80(0x39,0x69,0,param_4);
        return 0;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"ivlen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_res8);
      if (iVar1 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0xae,
                      "rc4_hmac_md5_set_ctx_params");
        FUN_180003e80(0x39,0x67,0,param_4);
        return 0;
      }
      if (*(longlong *)(param_1 + 0x50) != local_res8) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0xb2,
                      "rc4_hmac_md5_set_ctx_params");
        FUN_180003e80(0x39,0x6d,0,param_4);
        return 0;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"tlsaad");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 5) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0xba,
                      "rc4_hmac_md5_set_ctx_params");
        FUN_180003e80(0x39,0x67,0,param_4);
        return 0;
      }
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 0x18))
                        (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
      local_res8 = (longlong)iVar1;
      if (iVar1 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0xbf,
                      "rc4_hmac_md5_set_ctx_params");
        FUN_180003e80(0x39,0x73,0,param_4);
        return 0;
      }
      *(longlong *)(param_1 + 0x5e8) = local_res8;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"mackey");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 5) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",199,
                      "rc4_hmac_md5_set_ctx_params");
        FUN_180003e80(0x39,0x67,0,param_4);
        return 0;
      }
      (**(code **)(*(longlong *)(param_1 + 0xa8) + 0x20))
                (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"tls-version");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 0x70);
      if (iVar1 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0xcf,
                      "rc4_hmac_md5_set_ctx_params");
        FUN_180003e80(0x39,0x67,0,param_4);
        return 0;
      }
    }
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1800075d0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  uVar2 = FUN_180008440();
  if ((int)uVar2 != 0) {
    puVar3 = (undefined8 *)CRYPTO_zalloc(0x48,"providers\\implementations\\kdfs\\pbkdf1.c",0x68);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar4;
      iVar1 = FUN_18000afd0(param_1[6],param_1[7],puVar3 + 6,puVar3 + 7);
      if (iVar1 != 0) {
        iVar1 = FUN_18000afd0(param_1[4],param_1[5],puVar3 + 4,puVar3 + 5);
        if (iVar1 != 0) {
          uVar4 = FUN_18000ae00(puVar3 + 1,param_1 + 1);
          if ((int)uVar4 != 0) {
            puVar3[8] = param_1[8];
            return puVar3;
          }
        }
      }
      FUN_180007a00(puVar3);
      CRYPTO_free(puVar3,"providers\\implementations\\kdfs\\pbkdf1.c",0x7d);
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180007700(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_180007a00(param_1);
  *param_1 = uVar1;
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180007730(longlong *param_1,void *param_2,ulonglong param_3,longlong param_4)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  longlong lVar5;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = param_4;
  uVar4 = FUN_180008440();
  if ((int)uVar4 != 0) {
    uVar4 = FUN_18000cbf0(*param_1);
    bVar2 = FUN_18000ae80(param_1 + 1,param_4,uVar4);
    if ((int)CONCAT71(extraout_var,bVar2) != 0) {
      lVar5 = OSSL_PARAM_locate_const(param_4,&DAT_180014ad0);
      plVar1 = param_1 + 4;
      if ((((lVar5 == 0) ||
           (bVar2 = FUN_180007c50(plVar1,param_1 + 5,lVar5),
           (int)CONCAT71(extraout_var_00,bVar2) != 0)) &&
          ((lVar5 = OSSL_PARAM_locate_const(param_4,&DAT_180014ad8), lVar5 == 0 ||
           (bVar2 = FUN_180007c50(param_1 + 6,param_1 + 7,lVar5),
           (int)CONCAT71(extraout_var_01,bVar2) != 0)))) &&
         ((lVar5 = OSSL_PARAM_locate_const(param_4,&DAT_180014ae0), lVar5 == 0 ||
          (iVar3 = OSSL_PARAM_get_uint64(lVar5,param_1 + 8), iVar3 != 0)))) {
        if (*plVar1 == 0) {
          FUN_180003e10();
          FUN_180003e50("providers\\implementations\\kdfs\\pbkdf1.c",0xbb,"kdf_pbkdf1_derive");
          uVar6 = 0x82;
        }
        else {
          if (param_1[6] != 0) {
            uVar4 = FUN_18000af70(param_1 + 1);
            uVar4 = FUN_180007a70(*plVar1,param_1[5],param_1[6],param_1[7],param_1[8],uVar4,param_2,
                                  param_3);
            return uVar4;
          }
          FUN_180003e10();
          FUN_180003e50("providers\\implementations\\kdfs\\pbkdf1.c",0xc0,"kdf_pbkdf1_derive");
          uVar6 = 0x83;
        }
        FUN_180003e80(0x39,uVar6,0,lVar7);
      }
    }
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1800078d0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  longlong lVar4;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  
  uVar3 = FUN_18000cbf0(*param_1);
  bVar1 = FUN_18000ae80(param_1 + 1,param_2,uVar3);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    return false;
  }
  lVar4 = OSSL_PARAM_locate_const(param_2,&DAT_180014ad0);
  if ((lVar4 != 0) &&
     (bVar1 = FUN_180007c50(param_1 + 4,param_1 + 5,lVar4),
     (int)CONCAT71(extraout_var_00,bVar1) == 0)) {
    return false;
  }
  lVar4 = OSSL_PARAM_locate_const(param_2,&DAT_180014ad8);
  if ((lVar4 != 0) &&
     (bVar1 = FUN_180007c50(param_1 + 6,param_1 + 7,lVar4),
     (int)CONCAT71(extraout_var_01,bVar1) == 0)) {
    return false;
  }
  lVar4 = OSSL_PARAM_locate_const(param_2,&DAT_180014ae0);
  if (lVar4 == 0) {
    return true;
  }
  iVar2 = OSSL_PARAM_get_uint64(lVar4,param_1 + 8);
  return iVar2 != 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180007a00(undefined8 *param_1)

{
  FUN_18000af80(param_1 + 1);
  CRYPTO_free(param_1[6],"providers\\implementations\\kdfs\\pbkdf1.c",0x72);
  CRYPTO_clear_free(param_1[4],param_1[5],"providers\\implementations\\kdfs\\pbkdf1.c",0x73);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180007a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,void *param_7,ulonglong param_8)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [8];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x180007a87;
  local_58 = DAT_180019000 ^ (ulonglong)auStack_b8;
  uVar4 = param_4;
  lVar2 = EVP_MD_CTX_new();
  if (lVar2 == 0) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\kdfs\\pbkdf1.c",0x3f,"kdf_pbkdf1_do_derive");
    FUN_180003e80(0x39,0x80006,0,uVar4);
  }
  else {
    iVar1 = EVP_DigestInit_ex(lVar2,param_6,0);
    if ((((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(lVar2,param_1,param_2), iVar1 != 0)) &&
        (iVar1 = EVP_DigestUpdate(lVar2,param_3,param_4), iVar1 != 0)) &&
       ((iVar1 = EVP_DigestFinal_ex(lVar2,local_98,0), iVar1 != 0 &&
        (iVar1 = EVP_MD_get_size(param_6), -1 < iVar1)))) {
      if ((ulonglong)(longlong)iVar1 < param_8) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\kdfs\\pbkdf1.c",0x4c,"kdf_pbkdf1_do_derive");
        FUN_180003e80(0x39,0xca,0,uVar4);
      }
      else {
        uVar3 = 1;
        if (1 < param_5) {
          do {
            iVar1 = EVP_DigestInit_ex(lVar2,param_6,0);
            if (((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(lVar2,local_98), iVar1 == 0)) ||
               (iVar1 = EVP_DigestFinal_ex(lVar2,local_98), iVar1 == 0)) goto LAB_180007c18;
            uVar3 = uVar3 + 1;
          } while (uVar3 < param_5);
        }
        memcpy(param_7,local_98,param_8);
      }
    }
  }
LAB_180007c18:
  FUN_180001240(local_98,0x40);
  EVP_MD_CTX_free(lVar2);
  FUN_18000f5b0(local_58 ^ (ulonglong)auStack_b8);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_180007c50(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  CRYPTO_clear_free(*param_1,*param_2,"providers\\implementations\\kdfs\\pbkdf1.c",0xa3);
  *param_1 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_3 + 0x18) == 0) {
    lVar2 = CRYPTO_malloc(1,"providers\\implementations\\kdfs\\pbkdf1.c",0xa8);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  else if (*(longlong *)(param_3 + 0x10) != 0) {
    iVar1 = OSSL_PARAM_get_octet_string(param_3,param_1,0,param_2);
    return iVar1 != 0;
  }
  return true;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_180007d00(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_180008440();
  if ((int)uVar1 != 0) {
    plVar2 = (longlong *)CRYPTO_zalloc(0x40,"providers\\implementations\\kdfs\\pvkkdf.c",0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = param_1;
      FUN_1800082c0(plVar2);
      return plVar2;
    }
  }
  return (longlong *)0x0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_180007d70(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  uVar3 = FUN_180008440();
  if ((int)uVar3 != 0) {
    plVar4 = (longlong *)CRYPTO_zalloc(0x40,"providers\\implementations\\kdfs\\pvkkdf.c",0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = lVar1;
      FUN_1800082c0(plVar4);
      iVar2 = FUN_18000afd0(param_1[3],param_1[4],plVar4 + 3,plVar4 + 4);
      if (iVar2 != 0) {
        iVar2 = FUN_18000afd0(param_1[1],param_1[2],plVar4 + 1,plVar4 + 2);
        if (iVar2 != 0) {
          uVar3 = FUN_18000ae00(plVar4 + 5,param_1 + 5);
          if ((int)uVar3 != 0) {
            return plVar4;
          }
        }
      }
      FUN_180008260(plVar4);
      CRYPTO_free(plVar4,"providers\\implementations\\kdfs\\pvkkdf.c",0x46);
      return (longlong *)0x0;
    }
  }
  return (longlong *)0x0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180007ea0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_18000af80(param_1 + 5);
  CRYPTO_free(param_1[3],"providers\\implementations\\kdfs\\pvkkdf.c",0x3b);
  CRYPTO_clear_free(param_1[1],param_1[2],"providers\\implementations\\kdfs\\pvkkdf.c",0x3c);
  FUN_180001240(param_1,0x40);
  *param_1 = lVar1;
  FUN_1800082c0(param_1);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180007f20(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  longlong lVar4;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = param_4;
  uVar3 = FUN_180008440();
  if (((int)uVar3 != 0) &&
     ((uVar3 = FUN_18000cbf0(*param_1), param_4 == 0 ||
      (((bVar1 = FUN_18000ae80(param_1 + 5,param_4,uVar3), (int)CONCAT71(extraout_var,bVar1) != 0 &&
        ((lVar4 = OSSL_PARAM_locate_const(param_4,&DAT_180014ad0), lVar4 == 0 ||
         (bVar1 = FUN_180008390(param_1 + 1,param_1 + 2,lVar4),
         (int)CONCAT71(extraout_var_00,bVar1) != 0)))) &&
       ((lVar4 = OSSL_PARAM_locate_const(param_4,&DAT_180014ad8), lVar4 == 0 ||
        (bVar1 = FUN_180008390(param_1 + 3,param_1 + 4,lVar4),
        (int)CONCAT71(extraout_var_01,bVar1) != 0)))))))) {
    if (param_1[1] == 0) {
      FUN_180003e10();
      FUN_180003e50("providers\\implementations\\kdfs\\pvkkdf.c",0x91,"kdf_pvk_derive");
      uVar6 = 0x82;
    }
    else if (param_1[3] == 0) {
      FUN_180003e10();
      FUN_180003e50("providers\\implementations\\kdfs\\pvkkdf.c",0x96,"kdf_pvk_derive");
      uVar6 = 0x83;
    }
    else {
      lVar4 = FUN_18000af70(param_1 + 5);
      if (lVar4 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\kdfs\\pvkkdf.c",0x9c,"kdf_pvk_derive");
        uVar6 = 0x7a;
      }
      else {
        iVar2 = EVP_MD_get_size(lVar4);
        if (iVar2 < 1) {
          FUN_180003e10();
          FUN_180003e50("providers\\implementations\\kdfs\\pvkkdf.c",0xa1,"kdf_pvk_derive");
          uVar6 = 0x8e;
        }
        else {
          if ((ulonglong)(longlong)iVar2 <= param_3) {
            lVar5 = EVP_MD_CTX_new();
            if ((((lVar5 != 0) && (iVar2 = EVP_DigestInit_ex(lVar5,lVar4,0), iVar2 != 0)) &&
                (iVar2 = EVP_DigestUpdate(lVar5,param_1[3],param_1[4]), iVar2 != 0)) &&
               ((iVar2 = EVP_DigestUpdate(lVar5,param_1[1],param_1[2]), iVar2 != 0 &&
                (iVar2 = EVP_DigestFinal_ex(lVar5,param_2,0), iVar2 != 0)))) {
              EVP_MD_CTX_free(lVar5);
              return 1;
            }
            EVP_MD_CTX_free(lVar5);
            return 0;
          }
          FUN_180003e10();
          FUN_180003e50("providers\\implementations\\kdfs\\pvkkdf.c",0xa5,"kdf_pvk_derive");
          uVar6 = 0xca;
        }
      }
    }
    FUN_180003e80(0x39,uVar6,0,lVar5);
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_180008190(longlong *param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined7 extraout_var;
  longlong lVar3;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  
  uVar2 = FUN_18000cbf0(*param_1);
  if (param_2 != 0) {
    bVar1 = FUN_18000ae80(param_1 + 5,param_2,uVar2);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&DAT_180014ad0);
    if ((lVar3 != 0) &&
       (bVar1 = FUN_180008390(param_1 + 1,param_1 + 2,lVar3),
       (int)CONCAT71(extraout_var_00,bVar1) == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&DAT_180014ad8);
    if (lVar3 != 0) {
      bVar1 = FUN_180008390(param_1 + 3,param_1 + 4,lVar3);
      return (int)CONCAT71(extraout_var_01,bVar1) != 0;
    }
  }
  return true;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180008260(undefined8 *param_1)

{
  FUN_18000af80(param_1 + 5);
  CRYPTO_free(param_1[3],"providers\\implementations\\kdfs\\pvkkdf.c",0x3b);
  CRYPTO_clear_free(param_1[1],param_1[2],"providers\\implementations\\kdfs\\pvkkdf.c",0x3c);
  FUN_180001240(param_1,0x40);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1800082c0(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  undefined1 local_88 [48];
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = 0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  uVar2 = FUN_18000cbf0(*param_1);
  puVar3 = (undefined8 *)OSSL_PARAM_construct_utf8_string(local_88,"digest",&DAT_180014d48,0);
  local_58 = *puVar3;
  uStack_50 = puVar3[1];
  local_48 = puVar3[2];
  uStack_40 = puVar3[3];
  local_38 = puVar3[4];
  bVar1 = FUN_18000ae80(param_1 + 5,(longlong)&local_58,uVar2);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    FUN_18000af80(param_1 + 5);
  }
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_180008390(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  CRYPTO_clear_free(*param_1,*param_2,"providers\\implementations\\kdfs\\pvkkdf.c",0x77);
  *param_1 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_3 + 0x18) == 0) {
    lVar2 = CRYPTO_malloc(1,"providers\\implementations\\kdfs\\pvkkdf.c",0x7c);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  else if (*(longlong *)(param_3 + 0x10) != 0) {
    iVar1 = OSSL_PARAM_get_octet_string(param_3,param_1,0,param_2);
    return iVar1 != 0;
  }
  return true;
}




undefined8 FUN_180008440(void)

{
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180008480(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar2 = 0x18000849f;
  uVar3 = 1;
  if (0x3fffffff < param_4) {
    uVar1 = param_4 >> 0x1e;
    param_4 = param_4 + uVar1 * -0x40000000;
    do {
      uVar2 = CONCAT44((int)(uVar2 >> 0x20),*(uint *)(param_1 + 0x6c) >> 1) & 0xffffffff00000001;
      BF_cbc_encrypt(param_3,param_2,0x40000000,param_1 + 0xc0,param_1 + 0x20,uVar2);
      uVar3 = (undefined4)(uVar2 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    BF_cbc_encrypt(param_3,param_2,param_4 & 0xffffffff,param_1 + 0xc0,param_1 + 0x20,
                   CONCAT44(uVar3,*(uint *)(param_1 + 0x6c) >> 1) & 0xffffffff00000001);
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180008600(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0xa0);
  if (0x3fffffff < param_4) {
    uVar1 = param_4 >> 0x1e;
    param_4 = param_4 + uVar1 * -0x40000000;
    do {
      BF_ofb64_encrypt(param_3,param_2,0x40000000,param_1 + 0xc0,param_1 + 0x20,local_res8);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    BF_ofb64_encrypt(param_3,param_2,param_4 & 0xffffffff,param_1 + 0xc0,param_1 + 0x20,local_res8);
  }
  *(undefined4 *)(param_1 + 0xa0) = local_res8[0];
  return 1;
}




undefined ** FUN_1800087d0(void)

{
  return &PTR_LAB_180014d60;
}




undefined ** FUN_1800087e0(void)

{
  return &PTR_LAB_180014da8;
}




undefined ** FUN_1800087f0(void)

{
  return &PTR_LAB_180014d78;
}




undefined ** FUN_180008800(void)

{
  return &PTR_LAB_180014d90;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180008b50(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  if (uVar1 <= param_4) {
    lVar2 = param_3;
    do {
      IDEA_ecb_encrypt(lVar2,(param_2 - param_3) + lVar2,param_1 + 0xc0);
      lVar2 = lVar2 + uVar1;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar1);
  }
  return 1;
}




undefined ** FUN_180008be0(void)

{
  return &PTR_LAB_180014dc0;
}




undefined ** FUN_180008bf0(void)

{
  return &PTR_LAB_180014df0;
}




undefined ** FUN_180008c00(void)

{
  return &PTR_LAB_180014e08;
}




undefined ** FUN_180008c10(void)

{
  return &PTR_LAB_180014dd8;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180008c50(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar2 = 0x180008c6f;
  uVar3 = 1;
  if (0x3fffffff < param_4) {
    uVar1 = param_4 >> 0x1e;
    param_4 = param_4 + uVar1 * -0x40000000;
    do {
      uVar2 = CONCAT44((int)(uVar2 >> 0x20),*(uint *)(param_1 + 0x6c) >> 1) & 0xffffffff00000001;
      CAST_cbc_encrypt(param_3,param_2,0x40000000,param_1 + 0xc0,param_1 + 0x20,uVar2);
      uVar3 = (undefined4)(uVar2 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    CAST_cbc_encrypt(param_3,param_2,param_4 & 0xffffffff,param_1 + 0xc0,param_1 + 0x20,
                     CONCAT44(uVar3,*(uint *)(param_1 + 0x6c) >> 1) & 0xffffffff00000001);
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180008dd0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0xa0);
  if (0x3fffffff < param_4) {
    uVar1 = param_4 >> 0x1e;
    param_4 = param_4 + uVar1 * -0x40000000;
    do {
      CAST_ofb64_encrypt(param_3,param_2,0x40000000,param_1 + 0xc0,param_1 + 0x20,local_res8);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    CAST_ofb64_encrypt(param_3,param_2,param_4 & 0xffffffff,param_1 + 0xc0,param_1 + 0x20,local_res8
                      );
  }
  *(undefined4 *)(param_1 + 0xa0) = local_res8[0];
  return 1;
}




undefined ** FUN_180008fa0(void)

{
  return &PTR_LAB_180014e20;
}




undefined ** FUN_180008fb0(void)

{
  return &PTR_LAB_180014e68;
}




undefined ** FUN_180008fc0(void)

{
  return &PTR_LAB_180014e38;
}




undefined ** FUN_180008fd0(void)

{
  return &PTR_LAB_180014e50;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180009010(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar2 = 0x18000902f;
  uVar3 = 1;
  if (0x3fffffff < param_4) {
    uVar1 = param_4 >> 0x1e;
    param_4 = param_4 + uVar1 * -0x40000000;
    do {
      uVar2 = CONCAT44((int)(uVar2 >> 0x20),*(uint *)(param_1 + 0x6c) >> 1) & 0xffffffff00000001;
      SEED_cbc_encrypt(param_3,param_2,0x40000000,param_1 + 0xc0,param_1 + 0x20,uVar2);
      uVar3 = (undefined4)(uVar2 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    SEED_cbc_encrypt(param_3,param_2,(longlong)(int)param_4,param_1 + 0xc0,param_1 + 0x20,
                     CONCAT44(uVar3,*(uint *)(param_1 + 0x6c) >> 1) & 0xffffffff00000001);
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180009190(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0xa0);
  if (0x3fffffff < param_4) {
    uVar1 = param_4 >> 0x1e;
    param_4 = param_4 + uVar1 * -0x40000000;
    do {
      SEED_ofb128_encrypt(param_3,param_2,0x40000000,param_1 + 0xc0,param_1 + 0x20,local_res8);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    SEED_ofb128_encrypt(param_3,param_2,(longlong)(int)param_4,param_1 + 0xc0,param_1 + 0x20,
                        local_res8);
  }
  *(undefined4 *)(param_1 + 0xa0) = local_res8[0];
  return 1;
}




undefined ** FUN_180009360(void)

{
  return &PTR_LAB_180014e80;
}




undefined ** FUN_180009370(void)

{
  return &PTR_LAB_180014ec8;
}




undefined ** FUN_180009380(void)

{
  return &PTR_LAB_180014e98;
}




undefined ** FUN_180009390(void)

{
  return &PTR_LAB_180014eb0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1800093e0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar2 = 0x1800093ff;
  uVar3 = 1;
  if (0x3fffffff < param_4) {
    uVar1 = param_4 >> 0x1e;
    param_4 = param_4 + uVar1 * -0x40000000;
    do {
      uVar2 = CONCAT44((int)(uVar2 >> 0x20),*(uint *)(param_1 + 0x6c) >> 1) & 0xffffffff00000001;
      RC2_cbc_encrypt(param_3,param_2,0x40000000,param_1 + 0xc0,param_1 + 0x20,uVar2);
      uVar3 = (undefined4)(uVar2 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    RC2_cbc_encrypt(param_3,param_2,param_4 & 0xffffffff,param_1 + 0xc0,param_1 + 0x20,
                    CONCAT44(uVar3,*(uint *)(param_1 + 0x6c) >> 1) & 0xffffffff00000001);
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180009560(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0xa0);
  if (0x3fffffff < param_4) {
    uVar1 = param_4 >> 0x1e;
    param_4 = param_4 + uVar1 * -0x40000000;
    do {
      RC2_ofb64_encrypt(param_3,param_2,0x40000000,param_1 + 0xc0,param_1 + 0x20,local_res8);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    RC2_ofb64_encrypt(param_3,param_2,param_4 & 0xffffffff,param_1 + 0xc0,param_1 + 0x20,local_res8)
    ;
  }
  *(undefined4 *)(param_1 + 0xa0) = local_res8[0];
  return 1;
}




undefined ** FUN_180009730(void)

{
  return &PTR_LAB_180014ee0;
}




undefined ** FUN_180009740(void)

{
  return &PTR_LAB_180014f28;
}




undefined ** FUN_180009750(void)

{
  return &PTR_LAB_180014ef8;
}




undefined ** FUN_180009760(void)

{
  return &PTR_LAB_180014f10;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_180009770(void *param_1,longlong param_2,size_t param_3,void *param_4,size_t param_5,
             longlong param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Size = param_3;
  pvVar4 = param_4;
  uVar3 = FUN_180008440();
  if ((int)uVar3 == 0) {
LAB_1800097d6:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0x6c);
    *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x60) = 0;
    *(uint *)((longlong)param_1 + 0x6c) = uVar1 & 0xfffffffd;
    if (param_4 == (void *)0x0) {
      if (((uVar1 & 4) != 0) && (*(int *)((longlong)param_1 + 0x40) - 2U < 3)) {
        _Size = *(size_t *)((longlong)param_1 + 0x50);
        memcpy((void *)((longlong)param_1 + 0x20),param_1,_Size);
      }
    }
    else {
      uVar3 = FUN_18000e020(param_1,param_4,param_5,pvVar4);
      _Size = param_5;
      if ((int)uVar3 == 0) goto LAB_1800097d6;
    }
    if (param_2 != 0) {
      _Size = *(size_t *)((longlong)param_1 + 0x48);
      if (param_3 != _Size) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_tdes_common.c",0x58,"tdes_init");
        FUN_180003e80(0x39,0x69,0,pvVar4);
        return 0;
      }
      iVar2 = (*(code *)**(undefined8 **)((longlong)param_1 + 0xa8))(param_1,param_2);
      if (iVar2 == 0) goto LAB_1800097d6;
      *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 8;
    }
    uVar3 = FUN_18000e190((longlong)param_1,param_6,_Size,pvVar4);
  }
  return uVar3;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180009880(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180008440();
  if ((int)uVar1 != 0) {
    lVar2 = CRYPTO_malloc(0x248,"providers\\implementations\\ciphers\\cipher_tdes_common.c",0x2e);
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0xa8) + 0x10))(lVar2,param_1);
      return lVar2;
    }
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1800098f0(void *param_1,longlong param_2,size_t param_3,void *param_4,size_t param_5,
             longlong param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Size = param_3;
  pvVar4 = param_4;
  uVar3 = FUN_180008440();
  if ((int)uVar3 == 0) {
LAB_180009956:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0x6c);
    *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x60) = 0;
    *(uint *)((longlong)param_1 + 0x6c) = uVar1 | 2;
    if (param_4 == (void *)0x0) {
      if (((uVar1 & 4) != 0) && (*(int *)((longlong)param_1 + 0x40) - 2U < 3)) {
        _Size = *(size_t *)((longlong)param_1 + 0x50);
        memcpy((void *)((longlong)param_1 + 0x20),param_1,_Size);
      }
    }
    else {
      uVar3 = FUN_18000e020(param_1,param_4,param_5,pvVar4);
      _Size = param_5;
      if ((int)uVar3 == 0) goto LAB_180009956;
    }
    if (param_2 != 0) {
      _Size = *(size_t *)((longlong)param_1 + 0x48);
      if (param_3 != _Size) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\cipher_tdes_common.c",0x58,"tdes_init");
        FUN_180003e80(0x39,0x69,0,pvVar4);
        return 0;
      }
      iVar2 = (*(code *)**(undefined8 **)((longlong)param_1 + 0xa8))(param_1,param_2);
      if (iVar2 == 0) goto LAB_180009956;
      *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 8;
    }
    uVar3 = FUN_18000e190((longlong)param_1,param_6,_Size,pvVar4);
  }
  return uVar3;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180009a40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_18000d960(param_1,param_2,param_3,param_4);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar4 = OSSL_PARAM_locate(param_2,"randkey");
  if (lVar4 == 0) {
    return 1;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x48);
  lVar4 = *(longlong *)(lVar4 + 0x10);
  if (uVar1 != 0) {
    param_4 = 0;
    iVar2 = RAND_priv_bytes_ex(*(undefined8 *)(param_1 + 0xb8),lVar4,uVar1);
    if (0 < iVar2) {
      DES_set_odd_parity(lVar4);
      if (uVar1 < 0x10) {
        return 1;
      }
      DES_set_odd_parity(lVar4 + 8);
      if (uVar1 < 0x18) {
        return 1;
      }
      DES_set_odd_parity(lVar4 + 0x10);
      return 1;
    }
  }
  FUN_180003e10();
  FUN_180003e50("providers\\implementations\\ciphers\\cipher_tdes_common.c",0x8f,
                "ossl_tdes_get_ctx_params");
  FUN_180003e80(0x39,0x79,0,param_4);
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180009b40(longlong param_1,undefined4 param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,ulonglong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180008440();
  if ((int)uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CRYPTO_zalloc(0x248,"providers\\implementations\\ciphers\\cipher_tdes_common.c",0x1f);
    if (lVar2 != 0) {
      FUN_18000e0c0(lVar2,param_3,param_4,param_5,param_2,param_6,param_7,param_1);
    }
  }
  return lVar2;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180009bf0(longlong param_1,longlong param_2)

{
  DES_set_key_unchecked(param_2,param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x10);
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180009ce0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar2 = 0x180009cfd;
  uVar3 = 1;
  if (0x3fffffff < param_4) {
    uVar1 = param_4 >> 0x1e;
    param_4 = param_4 + uVar1 * -0x40000000;
    do {
      uVar2 = CONCAT44((int)(uVar2 >> 0x20),*(uint *)(param_1 + 0x6c) >> 1) & 0xffffffff00000001;
      DES_xcbc_encrypt(param_3,param_2,0x40000000,param_1 + 0xc0,param_1 + 0x20,param_1 + 0x140,
                       param_1 + 0x1c0,uVar2);
      uVar3 = (undefined4)(uVar2 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    DES_xcbc_encrypt(param_3,param_2,param_4 & 0xffffffff,param_1 + 0xc0,param_1 + 0x20,
                     param_1 + 0x140,param_1 + 0x1c0,
                     CONCAT44(uVar3,*(uint *)(param_1 + 0x6c) >> 1) & 0xffffffff00000001);
  }
  return 1;
}




undefined ** FUN_180009e00(void)

{
  return &PTR_FUN_1800150e8;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180009ef0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  if (uVar1 <= param_4) {
    lVar2 = param_3;
    do {
      DES_ecb_encrypt(lVar2,(param_2 - param_3) + lVar2,param_1 + 0xc0,
                      *(uint *)(param_1 + 0x6c) >> 1 & 1);
      lVar2 = lVar2 + uVar1;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar1);
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180009f90(longlong param_1,undefined1 *param_2,uint *param_3,ulonglong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  
  puVar1 = (uint *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x140) == (code *)0x0) {
    if (0x3fffffff < param_4) {
      uVar2 = param_4 >> 0x1e;
      param_4 = param_4 + uVar2 * -0x40000000;
      do {
        FUN_18000c3d0(param_3,param_2,0x40000000,(uint *)(param_1 + 0xc0),puVar1,
                      *(uint *)(param_1 + 0x6c) >> 1 & 1);
        param_3 = param_3 + 0x10000000;
        param_2 = param_2 + 0x40000000;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (param_4 != 0) {
      FUN_18000c3d0(param_3,param_2,(uint)param_4,(uint *)(param_1 + 0xc0),puVar1,
                    *(uint *)(param_1 + 0x6c) >> 1 & 1);
    }
  }
  else {
    (**(code **)(param_1 + 0x140))(param_3,param_2,param_4,param_1 + 0xc0,puVar1,0x180009faf);
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000a410(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x18000a42f;
  if (0x3fffffff < param_4) {
    uVar1 = param_4 >> 0x1e;
    param_4 = param_4 + uVar1 * -0x40000000;
    do {
      DES_cfb_encrypt(param_3,param_2,8,0x40000000,param_1 + 0xc0,param_1 + 0x20,
                      *(uint *)(param_1 + 0x6c) >> 1 & 1,uVar2);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    DES_cfb_encrypt(param_3,param_2,8,param_4 & 0xffffffff,param_1 + 0xc0,param_1 + 0x20,
                    *(uint *)(param_1 + 0x6c) >> 1 & 1,uVar2);
  }
  return 1;
}




undefined ** FUN_18000a510(void)

{
  return &PTR_LAB_180015118;
}




undefined ** FUN_18000a520(void)

{
  return &PTR_LAB_180015160;
}




undefined ** FUN_18000a530(void)

{
  return &PTR_LAB_180015148;
}




undefined ** FUN_18000a540(void)

{
  return &PTR_LAB_180015178;
}




undefined ** FUN_18000a550(void)

{
  return &PTR_LAB_180015100;
}




undefined ** FUN_18000a560(void)

{
  return &PTR_LAB_180015130;
}




undefined ** FUN_18000a5d0(void)

{
  return &PTR_LAB_180015190;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000a5e0(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  
  FUN_180001ba0((undefined4 *)(param_1 + 0xc0),(ulonglong)param_3,param_2);
  puVar1 = (undefined8 *)(param_1 + 0x4c8);
  FUN_18000ca40((undefined4 *)puVar1);
  *(undefined8 *)(param_1 + 0x5e0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x98) = 0x10;
  *(undefined8 *)(param_1 + 0x524) = *puVar1;
  *(undefined8 *)(param_1 + 0x52c) = *(undefined8 *)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x534) = *(undefined8 *)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x53c) = *(undefined8 *)(param_1 + 0x4e0);
  *(undefined8 *)(param_1 + 0x544) = *(undefined8 *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x54c) = *(undefined8 *)(param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x554) = *(undefined8 *)(param_1 + 0x4f8);
  *(undefined8 *)(param_1 + 0x55c) = *(undefined8 *)(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x564) = *(undefined8 *)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x56c) = *(undefined8 *)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x574) = *(undefined8 *)(param_1 + 0x518);
  *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(param_1 + 0x520);
  *(undefined8 *)(param_1 + 0x580) = *puVar1;
  *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_1 + 0x4e0);
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_1 + 0x4f8);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(param_1 + 0x518);
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_1 + 0x520);
  return 1;
}




undefined ** FUN_18000ad20(void)

{
  return &PTR_FUN_1800151a8;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000ad30(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  lVar2 = OSSL_PARAM_locate_const(param_1,"properties");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 4) {
      return 0;
    }
    *param_2 = *(undefined8 *)(lVar2 + 0x10);
  }
  ENGINE_finish(*param_3);
  *param_3 = 0;
  lVar2 = OSSL_PARAM_locate_const(param_1,"engine");
  if (lVar2 == 0) {
    return 1;
  }
  if (*(int *)(lVar2 + 8) == 4) {
    lVar2 = ENGINE_by_id(*(undefined8 *)(lVar2 + 0x10));
    *param_3 = lVar2;
    if (lVar2 != 0) {
      iVar1 = ENGINE_init(lVar2);
      if (iVar1 != 0) {
        ENGINE_free(*param_3);
        return 1;
      }
      ENGINE_free(*param_3);
      *param_3 = 0;
    }
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000ae00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((param_2[1] != 0) && (iVar1 = EVP_MD_up_ref(), iVar1 == 0)) {
    return 0;
  }
  if ((param_2[2] != 0) && (iVar1 = ENGINE_init(), iVar1 == 0)) {
    EVP_MD_free(param_2[1]);
    return 0;
  }
  param_1[2] = param_2[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_18000ae80(longlong *param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res10;
  
  if (param_2 == 0) {
LAB_18000af52:
    bVar1 = true;
  }
  else {
    uVar2 = FUN_18000ad30(param_2,&local_res10,param_1 + 2);
    if ((int)uVar2 != 0) {
      lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
      if (lVar3 == 0) goto LAB_18000af52;
      if (*(int *)(lVar3 + 8) == 4) {
        FUN_180003ec0();
        uVar2 = *(undefined8 *)(lVar3 + 0x10);
        EVP_MD_free(param_1[1]);
        lVar4 = EVP_MD_fetch(param_3,uVar2,local_res10);
        param_1[1] = lVar4;
        *param_1 = lVar4;
        if (((lVar4 == 0) &&
            (lVar3 = EVP_get_digestbyname(*(undefined8 *)(lVar3 + 0x10)), lVar3 != 0)) &&
           (*(int *)(lVar3 + 0x10) != 1)) {
          *param_1 = lVar3;
        }
        if (*param_1 != 0) {
          FUN_180003e30();
          return *param_1 != 0;
        }
        FUN_180003df0();
        return *param_1 != 0;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}




undefined8 FUN_18000af70(undefined8 *param_1)

{
  return *param_1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18000af80(undefined8 *param_1)

{
  EVP_MD_free(param_1[1]);
  param_1[1] = 0;
  *param_1 = 0;
  ENGINE_finish(param_1[2]);
  param_1[2] = 0;
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000afd0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    param_2 = 0;
    *param_3 = 0;
  }
  else {
    lVar1 = CRYPTO_memdup(param_1,param_2,"providers\\common\\provider_util.c",0x167);
    *param_3 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  *param_4 = param_2;
  return 1;
}




void FUN_18000b040(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar1;
  uVar4 = param_1[1] ^ uVar1 << 4;
  uVar1 = (uVar2 >> 0x10 ^ uVar4) & 0xffff;
  uVar4 = uVar4 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar4 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 * 4;
  uVar1 = (uVar2 >> 8 ^ uVar4) & 0xff00ff;
  uVar4 = uVar4 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar4 >> 1 ^ uVar2) & 0x55555555;
  uVar2 = uVar1 ^ uVar2;
  uVar2 = uVar2 >> 0x1d | uVar2 << 3;
  uVar4 = uVar1 * 2 ^ uVar4;
  uVar1 = uVar4 >> 0x1d | uVar4 << 3;
  if (param_3 == 0) {
    uVar4 = (uVar2 ^ param_2[0x1f]) >> 4;
    uVar3 = param_2[0x1e] ^ uVar2;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[0x1f]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1c] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[0x1d]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1a] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[0x1b]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x18] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[0x19]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x16] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[0x17]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x14] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[0x15]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x12] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[0x13]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x10] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[0x11]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0xe] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[0xf]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0xc] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[0xd]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[10] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[0xb]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[8] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[9]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[9]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[6] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[7]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[7]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[4] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[5]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[5]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[2] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[3]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[3]) << 0x1c) >> 0x1a) * 4);
    uVar3 = (uVar1 ^ param_2[1]) >> 4 | (uVar1 ^ param_2[1]) << 0x1c;
    uVar4 = uVar1 ^ *param_2;
  }
  else {
    uVar4 = (uVar2 ^ param_2[1]) >> 4;
    uVar3 = uVar2 ^ *param_2;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[1]) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4);
    uVar3 = param_2[2] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[3]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[3]) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4);
    uVar3 = param_2[4] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[5]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[5]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[6] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[7]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[7]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[8] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[9]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[9]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[10] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[0xb]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0xc] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[0xd]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0xe] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[0xf]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x10] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[0x11]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4);
    uVar3 = param_2[0x12] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[0x13]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x14] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[0x15]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x16] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[0x17]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x18] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[0x19]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1a] ^ uVar1;
    uVar4 = (uVar1 ^ param_2[0x1b]) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar1 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1c] ^ uVar2;
    uVar4 = (uVar2 ^ param_2[0x1d]) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015420 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015220 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180015720 + (ulonglong)((uVar4 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180015520 + (ulonglong)((uVar4 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180015320 + (ulonglong)((uVar4 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180015820 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180015920 +
                             (ulonglong)((uVar4 | (uVar2 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4);
    uVar3 = (uVar1 ^ param_2[0x1f]) >> 4 | (uVar1 ^ param_2[0x1f]) << 0x1c;
    uVar4 = param_2[0x1e] ^ uVar1;
  }
  uVar5 = uVar1 >> 3 | uVar1 << 0x1d;
  uVar2 = uVar2 ^ *(uint *)(&DAT_180015620 + (ulonglong)(uVar4 >> 0x12 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180015420 + (ulonglong)(uVar4 >> 10 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180015220 + (ulonglong)(uVar4 >> 2 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180015720 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180015520 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180015320 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180015820 + (ulonglong)(uVar4 >> 0x1a) * 4) ^
                  *(uint *)(&DAT_180015920 + (ulonglong)(uVar3 >> 0x1a) * 4);
  uVar2 = uVar2 >> 3 | uVar2 << 0x1d;
  uVar1 = (uVar2 >> 1 ^ uVar5) & 0x55555555;
  uVar5 = uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 * 2;
  uVar1 = (uVar5 >> 8 ^ uVar2) & 0xff00ff;
  uVar2 = uVar2 ^ uVar1;
  uVar5 = uVar5 ^ uVar1 << 8;
  uVar1 = (uVar2 >> 2 ^ uVar5) & 0x33333333;
  uVar5 = uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 * 4;
  uVar1 = (uVar5 >> 0x10 ^ uVar2) & 0xffff;
  uVar2 = uVar2 ^ uVar1;
  uVar5 = uVar5 ^ uVar1 << 0x10;
  uVar1 = (uVar2 >> 4 ^ uVar5) & 0xf0f0f0f;
  param_1[1] = uVar1 << 4 ^ uVar2;
  *param_1 = uVar1 ^ uVar5;
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18000c3d0(uint *param_1,undefined1 *param_2,uint param_3,uint *param_4,uint *param_5,
                  int param_6)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint local_38;
  uint local_34;
  undefined8 uStack_30;
  
  uStack_30 = 0x18000c3f1;
  iVar7 = param_3 - 8;
  uVar3 = *param_5;
  uVar4 = param_5[1];
  if (param_6 == 0) {
    if (-1 < iVar7) {
      uVar8 = (ulonglong)(param_3 >> 3);
      iVar7 = iVar7 + (param_3 >> 3) * -8;
      uVar9 = uVar3;
      uVar10 = uVar4;
      do {
        uVar3 = *param_1;
        uVar4 = param_1[1];
        param_1 = param_1 + 2;
        local_38 = uVar3;
        local_34 = uVar4;
        FUN_18000b040(&local_38,param_4,0);
        local_38 = local_38 ^ uVar9;
        *param_2 = (char)local_38;
        local_34 = local_34 ^ uVar10;
        param_2[4] = (char)local_34;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2 = param_2 + 8;
        uVar8 = uVar8 - 1;
        uVar9 = uVar3;
        uVar10 = uVar4;
      } while (uVar8 != 0);
    }
    uVar9 = uVar3;
    uVar10 = uVar4;
    if (iVar7 != -8) {
      uVar9 = *param_1;
      uVar10 = param_1[1];
      local_38 = uVar9;
      local_34 = uVar10;
      FUN_18000b040(&local_38,param_4,0);
      local_38 = local_38 ^ uVar3;
      local_34 = local_34 ^ uVar4;
      puVar5 = param_2 + (iVar7 + 8);
      switch(iVar7) {
      case 0:
        puVar5 = puVar5 + -1;
        *puVar5 = (char)(local_34 >> 0x18);
      case -1:
        puVar5 = puVar5 + -1;
        *puVar5 = (char)(local_34 >> 0x10);
      case -2:
        puVar5 = puVar5 + -1;
        *puVar5 = (char)(local_34 >> 8);
      case -3:
        puVar5 = puVar5 + -1;
        *puVar5 = (char)local_34;
      case -4:
        puVar5 = puVar5 + -1;
        *puVar5 = (char)(local_38 >> 0x18);
      case -5:
        puVar5 = puVar5 + -1;
        *puVar5 = (char)(local_38 >> 0x10);
      case -6:
        puVar5 = puVar5 + -1;
        *puVar5 = (char)(local_38 >> 8);
      case -7:
        puVar5[-1] = (char)local_38;
      }
    }
  }
  else {
    local_38 = uVar3;
    local_34 = uVar4;
    if (-1 < iVar7) {
      uVar8 = (ulonglong)(param_3 >> 3);
      iVar7 = iVar7 + (param_3 >> 3) * -8;
      do {
        puVar1 = param_1 + 1;
        local_38 = *param_1 ^ local_38;
        param_1 = param_1 + 2;
        local_34 = *puVar1 ^ local_34;
        FUN_18000b040(&local_38,param_4,1);
        *param_2 = (char)local_38;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2[4] = (char)local_34;
        param_2 = param_2 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar9 = local_38;
    uVar10 = local_34;
    if (iVar7 != -8) {
      lVar6 = (longlong)param_1 + (longlong)(iVar7 + 8);
      uVar3 = 0;
      uVar4 = 0;
      switch(iVar7) {
      case 0:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar3 = (uint)*pbVar2 << 0x18;
      case -1:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar3 = uVar3 | (uint)*pbVar2 << 0x10;
      case -2:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar3 = uVar3 | (uint)*pbVar2 << 8;
      case -3:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar3 = uVar3 | *pbVar2;
      case -4:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar4 = (uint)*pbVar2 << 0x18;
      case -5:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar4 = uVar4 | (uint)*pbVar2 << 0x10;
      case -6:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar4 = uVar4 | (uint)*pbVar2 << 8;
      case -7:
        uVar4 = uVar4 | *(byte *)(lVar6 + -1);
      default:
        local_38 = uVar4 ^ local_38;
        local_34 = uVar3 ^ local_34;
        FUN_18000b040(&local_38,param_4,1);
        *param_2 = (char)local_38;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2[4] = (char)local_34;
        uVar9 = local_38;
        uVar10 = local_34;
      }
    }
  }
  *(char *)param_5 = (char)uVar9;
  *(char *)((longlong)param_5 + 1) = (char)(uVar9 >> 8);
  *(char *)((longlong)param_5 + 2) = (char)(uVar9 >> 0x10);
  *(char *)((longlong)param_5 + 3) = (char)(uVar9 >> 0x18);
  *(char *)(param_5 + 1) = (char)uVar10;
  *(char *)((longlong)param_5 + 5) = (char)(uVar10 >> 8);
  *(char *)((longlong)param_5 + 6) = (char)(uVar10 >> 0x10);
  *(char *)((longlong)param_5 + 7) = (char)(uVar10 >> 0x18);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000c8d0(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x16];
  piVar1 = param_2 + 6;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)piVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    memset((void *)(uVar4 + (longlong)piVar1),0,0x40 - uVar4);
    uVar4 = 0;
    FUN_180003000(param_2,piVar1,1);
  }
  memset((void *)(uVar4 + (longlong)piVar1),0,0x38 - uVar4);
  *(char *)(param_2 + 0x14) = (char)param_2[4];
  *(undefined1 *)((longlong)param_2 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined1 *)((longlong)param_2 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined1 *)((longlong)param_2 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x13);
  *(char *)(param_2 + 0x15) = (char)param_2[5];
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x17);
  FUN_180003000(param_2,piVar1,1);
  param_2[0x16] = 0;
  FUN_180001240((undefined8 *)piVar1,0x40);
  iVar3 = *param_2;
  *param_1 = (char)iVar3;
  param_1[1] = (char)((uint)iVar3 >> 8);
  param_1[2] = (char)((uint)iVar3 >> 0x10);
  param_1[3] = (char)((uint)iVar3 >> 0x18);
  iVar3 = param_2[1];
  param_1[5] = (char)((uint)iVar3 >> 8);
  param_1[4] = (char)iVar3;
  param_1[7] = (char)((uint)iVar3 >> 0x18);
  param_1[6] = (char)((uint)iVar3 >> 0x10);
  iVar3 = param_2[2];
  param_1[8] = (char)iVar3;
  param_1[9] = (char)((uint)iVar3 >> 8);
  param_1[0xb] = (char)((uint)iVar3 >> 0x18);
  param_1[10] = (char)((uint)iVar3 >> 0x10);
  iVar3 = param_2[3];
  param_1[0xd] = (char)((uint)iVar3 >> 8);
  param_1[0xc] = (char)iVar3;
  param_1[0xf] = (char)((uint)iVar3 >> 0x18);
  param_1[0xe] = (char)((uint)iVar3 >> 0x10);
  return 1;
}




undefined8 FUN_18000ca40(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000ca80(int *param_1,int *param_2,size_t param_3)

{
  uint *puVar1;
  int *_Dst;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = param_1[4] + (int)param_3 * 8;
    if (uVar2 < (uint)param_1[4]) {
      param_1[5] = param_1[5] + 1;
    }
    puVar1 = (uint *)(param_1 + 0x16);
    param_1[4] = uVar2;
    uVar3 = (ulonglong)*puVar1;
    _Dst = param_1 + 6;
    param_1[5] = param_1[5] + (int)(param_3 >> 0x1d);
    if (uVar3 != 0) {
      if ((param_3 < 0x40) && (uVar3 + param_3 < 0x40)) {
        memcpy((void *)((longlong)_Dst + uVar3),param_2,param_3);
        *puVar1 = *puVar1 + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar3;
      memcpy((void *)((longlong)_Dst + uVar3),param_2,_Size);
      FUN_180003000(param_1,_Dst,1);
      *puVar1 = 0;
      _Dst[0] = 0;
      _Dst[1] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_2 = (int *)((longlong)param_2 + _Size);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_3 = param_3 - _Size;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      FUN_180003000(param_1,param_2,uVar3);
      param_2 = param_2 + uVar3 * 0x10;
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      param_1[0x16] = (int)param_3;
      memcpy(_Dst,param_2,param_3);
    }
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18000cbc0(undefined8 param_1)

{
  CRYPTO_free(param_1,"providers\\common\\provider_ctx.c",0x15);
  return;
}




undefined8 FUN_18000cbf0(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 8);
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18000cc00(void)

{
  CRYPTO_zalloc(0x18,"providers\\common\\provider_ctx.c",0x10);
  return;
}




void FUN_18000cc30(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = param_2;
  }
  return;
}




void FUN_18000cc40(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
  }
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18000cc50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = (uint)param_4;
  lVar2 = OSSL_PARAM_locate(param_1,"blocksize");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_size_t(lVar2,param_2), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\digests\\digestcommon.c",0x15,
                  "ossl_digest_default_get_params");
    FUN_180003e80(0x39,0x68,0,param_4);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_1,&DAT_180014afc);
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_size_t(lVar2,param_3), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\digests\\digestcommon.c",0x1a,
                  "ossl_digest_default_get_params");
    FUN_180003e80(0x39,0x68,0,param_4);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_1,&DAT_180015a4c);
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,uVar3 & 1), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\digests\\digestcommon.c",0x20,
                  "ossl_digest_default_get_params");
    FUN_180003e80(0x39,0x68,0,param_4);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_1,"algid-absent");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,uVar3 >> 1 & 1), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\digests\\digestcommon.c",0x26,
                  "ossl_digest_default_get_params");
    FUN_180003e80(0x39,0x68,0,param_4);
    return 0;
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18000ce10(void *param_1,longlong param_2,size_t param_3,void *param_4,size_t param_5,
             longlong param_6,int param_7)

{
  int iVar1;
  undefined8 uVar2;
  void *_Dst;
  uint uVar3;
  size_t sVar4;
  void *pvVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(uint *)((longlong)param_1 + 0x6c) =
       -(uint)(param_7 != 0) & 2 | *(uint *)((longlong)param_1 + 0x6c) & 0xffffffed;
  sVar4 = param_3;
  pvVar5 = param_4;
  uVar2 = FUN_180008440();
  if ((int)uVar2 == 0) {
    return 0;
  }
  if (param_4 == (void *)0x0) {
    if (((*(byte *)((longlong)param_1 + 0x6c) & 4) != 0) &&
       (*(int *)((longlong)param_1 + 0x40) - 2U < 3)) {
      param_5 = *(size_t *)((longlong)param_1 + 0x50);
      _Dst = (void *)((longlong)param_1 + 0x20);
      param_4 = param_1;
LAB_18000cf16:
      memcpy(_Dst,param_4,param_5);
      sVar4 = param_5;
    }
LAB_18000cf1b:
    if (param_2 == 0) goto LAB_18000cf7b;
    if ((*(byte *)((longlong)param_1 + 0x6c) & 0x20) == 0) {
      sVar4 = *(size_t *)((longlong)param_1 + 0x48);
      if (param_3 != *(size_t *)((longlong)param_1 + 0x48)) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0xd7,
                      "cipher_generic_init_internal");
        uVar3 = 0x69;
        goto LAB_18000ced3;
      }
    }
    else {
      *(size_t *)((longlong)param_1 + 0x48) = param_3;
      sVar4 = param_3;
    }
    iVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 0xa8))(param_1,param_2);
    if (iVar1 != 0) {
      *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 8;
LAB_18000cf7b:
      uVar2 = FUN_18000e190((longlong)param_1,param_6,sVar4,pvVar5);
      return uVar2;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x40) == 1) goto LAB_18000cf1b;
    if ((param_5 == *(size_t *)((longlong)param_1 + 0x50)) && (param_5 < 0x11)) {
      *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 4;
      memcpy((void *)((longlong)param_1 + 0x20),param_4,param_5);
      _Dst = param_1;
      goto LAB_18000cf16;
    }
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x2aa,
                  "ossl_cipher_generic_initiv");
    uVar3 = 0x6d;
LAB_18000ced3:
    FUN_180003e80(0x39,uVar3,0,pvVar5);
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000cf90(longlong param_1,void *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar2 = *(ulonglong *)(param_1 + 0x58);
  uVar7 = param_4;
  uVar4 = FUN_180008440();
  if ((int)uVar4 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 0x6c);
  if ((uVar5 & 8) == 0) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x193,
                  "ossl_cipher_generic_block_final");
    uVar5 = 0x72;
    goto LAB_18000d023;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    puVar1 = (ulonglong *)(param_1 + 0x60);
    if ((uVar5 & 2) == 0) {
      if (*puVar1 != uVar2) {
        if ((*puVar1 == 0) && ((uVar5 & 1) == 0)) goto LAB_18000d136;
        FUN_180003e10();
        uVar6 = 0x1bb;
LAB_18000d090:
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",uVar6,
                      "ossl_cipher_generic_block_final");
        uVar5 = 0x6b;
        goto LAB_18000d023;
      }
      uVar7 = uVar2;
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 8))
                        (param_1,param_1 + 0x10,param_1 + 0x10);
      if (iVar3 != 0) {
        if (((*(byte *)(param_1 + 0x6c) & 1) != 0) &&
           (uVar4 = FUN_18000e900(param_1 + 0x10,puVar1,uVar2), (int)uVar4 == 0)) {
          return 0;
        }
        if (*puVar1 <= param_4) {
          memcpy(param_2,(void *)(param_1 + 0x10),*puVar1);
          *param_3 = *puVar1;
          *puVar1 = 0;
          return 1;
        }
        FUN_180003e10();
        uVar6 = 0x1ca;
        goto LAB_18000d0c4;
      }
      FUN_180003e10();
      uVar6 = 0x1c0;
    }
    else {
      if ((uVar5 & 1) == 0) {
        if (*puVar1 == 0) {
LAB_18000d136:
          *param_3 = 0;
          return 1;
        }
        if (*puVar1 != uVar2) {
          FUN_180003e10();
          uVar6 = 0x1a4;
          goto LAB_18000d090;
        }
      }
      else {
        FUN_18000e730(param_1 + 0x10,puVar1,uVar2);
      }
      if (param_4 < uVar2) {
        FUN_180003e10();
        uVar6 = 0x1a9;
LAB_18000d0c4:
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",uVar6,
                      "ossl_cipher_generic_block_final");
        uVar5 = 0x6a;
        goto LAB_18000d023;
      }
      uVar7 = uVar2;
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 8))(param_1,param_2,param_1 + 0x10);
      if (iVar3 != 0) {
        *(undefined8 *)(param_1 + 0x60) = 0;
        *param_3 = uVar2;
        return 1;
      }
      FUN_180003e10();
      uVar6 = 0x1ad;
    }
  }
  else {
    FUN_180003e10();
    uVar6 = 0x199;
  }
  FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",uVar6,
                "ossl_cipher_generic_block_final");
  uVar5 = 0x66;
LAB_18000d023:
  FUN_180003e80(0x39,uVar5,0,uVar7);
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18000d7b0(longlong param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4,
             undefined8 param_5,ulonglong param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = param_4;
  uVar2 = FUN_180008440();
  if ((int)uVar2 != 0) {
    if ((*(byte *)(param_1 + 0x6c) & 8) != 0) {
      if (param_4 < param_6) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x231,
                      "ossl_cipher_generic_cipher");
        FUN_180003e80(0x39,0x6a,0,uVar3);
        return 0;
      }
      uVar3 = param_6;
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5);
      if (iVar1 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x236,
                      "ossl_cipher_generic_cipher");
        FUN_180003e80(0x39,0x66,0,uVar3);
        return 0;
      }
      *param_3 = param_6;
      return 1;
    }
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x22c,
                  "ossl_cipher_generic_cipher");
    FUN_180003e80(0x39,0x72,0,uVar3);
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18000d8e0(void *param_1,longlong param_2,size_t param_3,void *param_4,size_t param_5,
                  longlong param_6)

{
  FUN_18000ce10(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18000d920(void *param_1,longlong param_2,size_t param_3,void *param_4,size_t param_5,
                  longlong param_6)

{
  FUN_18000ce10(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000d960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if ((lVar2 != 0) &&
     (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x50)), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x245,
                  "ossl_cipher_generic_get_ctx_params");
    FUN_180003e80(0x39,0x68,0,param_4);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"padding");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_uint(lVar2,*(uint *)(param_1 + 0x6c) & 1), iVar1 == 0)
     ) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x24a,
                  "ossl_cipher_generic_get_ctx_params");
    FUN_180003e80(0x39,0x68,0,param_4);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_2,&DAT_180013b24);
  if (((lVar2 == 0) ||
      (iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1,*(undefined8 *)(param_1 + 0x50)), iVar1 != 0))
     || (iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1,*(undefined8 *)(param_1 + 0x50)),
        iVar1 != 0)) {
    lVar2 = OSSL_PARAM_locate(param_2,"updated-iv");
    if (((lVar2 == 0) ||
        (iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50)),
        iVar1 != 0)) ||
       (iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50)),
       iVar1 != 0)) {
      lVar2 = OSSL_PARAM_locate(param_2,&DAT_180013b20);
      if ((lVar2 == 0) ||
         (iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0xa0)), iVar1 != 0)) {
        lVar2 = OSSL_PARAM_locate(param_2,"keylen");
        if ((lVar2 == 0) ||
           (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x48)), iVar1 != 0)) {
          lVar2 = OSSL_PARAM_locate(param_2,"tls-mac");
          if ((lVar2 == 0) ||
             (iVar1 = OSSL_PARAM_set_octet_ptr
                                (lVar2,*(undefined8 *)(param_1 + 0x78),
                                 *(undefined8 *)(param_1 + 0x88)), iVar1 != 0)) {
            uVar3 = 1;
          }
          else {
            FUN_180003e10();
            FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x268,
                          "ossl_cipher_generic_get_ctx_params");
            FUN_180003e80(0x39,0x68,0,param_4);
            uVar3 = 0;
          }
        }
        else {
          FUN_180003e10();
          FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x262,
                        "ossl_cipher_generic_get_ctx_params");
          FUN_180003e80(0x39,0x68,0,param_4);
          uVar3 = 0;
        }
      }
      else {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x25d,
                      "ossl_cipher_generic_get_ctx_params");
        FUN_180003e80(0x39,0x68,0,param_4);
        uVar3 = 0;
      }
    }
    else {
      FUN_180003e10();
      FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",600,
                    "ossl_cipher_generic_get_ctx_params");
      FUN_180003e80(0x39,0x68,0,param_4);
      uVar3 = 0;
    }
  }
  else {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x251,
                  "ossl_cipher_generic_get_ctx_params");
    FUN_180003e80(0x39,0x68,0,param_4);
    uVar3 = 0;
  }
  return uVar3;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18000dc70(undefined8 param_1,undefined4 param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5,ulonglong param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = param_4;
  lVar2 = OSSL_PARAM_locate(param_1,&DAT_180016240);
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_uint(lVar2,param_2), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x31,
                  "ossl_cipher_generic_get_params");
    FUN_180003e80(0x39,0x68,0,uVar3);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_1,&DAT_180016248);
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,(uint)param_3 & 1), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x37,
                  "ossl_cipher_generic_get_params");
    FUN_180003e80(0x39,0x68,0,uVar3);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_1,"custom-iv");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 1) & 1), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x3d,
                  "ossl_cipher_generic_get_params");
    FUN_180003e80(0x39,0x68,0,uVar3);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_1,&DAT_18001625c);
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 2) & 1), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x43,
                  "ossl_cipher_generic_get_params");
    FUN_180003e80(0x39,0x68,0,uVar3);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_1,"tls-multi");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 3) & 1), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x49,
                  "ossl_cipher_generic_get_params");
    FUN_180003e80(0x39,0x68,0,uVar3);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_1,"has-randkey");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 4) & 1), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x4f,
                  "ossl_cipher_generic_get_params");
    FUN_180003e80(0x39,0x68,0,uVar3);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_1,"keylen");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_size_t(lVar2,param_4 >> 3), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x54,
                  "ossl_cipher_generic_get_params");
    FUN_180003e80(0x39,0x68,0,uVar3);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_1,"blocksize");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_size_t(lVar2,param_5 >> 3), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x59,
                  "ossl_cipher_generic_get_params");
    FUN_180003e80(0x39,0x68,0,uVar3);
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_1,"ivlen");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_size_t(lVar2,param_6 >> 3), iVar1 == 0)) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x5e,
                  "ossl_cipher_generic_get_params");
    FUN_180003e80(0x39,0x68,0,uVar3);
    return 0;
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000e020(void *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  if ((param_3 == *(size_t *)((longlong)param_1 + 0x50)) && (param_3 < 0x11)) {
    *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 4;
    memcpy((void *)((longlong)param_1 + 0x20),param_2,param_3);
    memcpy(param_1,param_2,param_3);
    return 1;
  }
  FUN_180003e10();
  FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x2aa,
                "ossl_cipher_generic_initiv");
  FUN_180003e80(0x39,0x6d,0,param_4);
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18000e0c0(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  undefined4 param_5,ulonglong param_6,undefined8 param_7,longlong param_8)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x6c);
  if ((param_6 >> 9 & 1) != 0) {
    uVar1 = uVar1 | 0x40;
  }
  if ((param_6 >> 8 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  *(uint *)(param_1 + 0x6c) = uVar1 | 1;
  *(undefined8 *)(param_1 + 0xa8) = param_7;
  *(undefined4 *)(param_1 + 0x40) = param_5;
  *(ulonglong *)(param_1 + 0x48) = param_2 >> 3;
  *(ulonglong *)(param_1 + 0x50) = param_4 >> 3;
  *(ulonglong *)(param_1 + 0x58) = param_3 >> 3;
  if (param_8 != 0) {
    uVar2 = FUN_18000cbf0(param_8);
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
  }
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18000e140(longlong param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x80) != 0)) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x78),
                "providers\\implementations\\ciphers\\ciphercommon.c",0xb6);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000e190(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  
  if (param_2 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"padding");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,local_res8);
      if (iVar1 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x27b,
                      "ossl_cipher_generic_set_ctx_params");
        FUN_180003e80(0x39,0x67,0,param_4);
        return 0;
      }
      *(uint *)(param_1 + 0x6c) =
           (uint)(local_res8[0] != 0) | *(uint *)(param_1 + 0x6c) & 0xfffffffe;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"use-bits");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,local_res8);
      if (iVar1 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x285,
                      "ossl_cipher_generic_set_ctx_params");
        FUN_180003e80(0x39,0x67,0,param_4);
        return 0;
      }
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffff7f;
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | -(uint)(local_res8[0] != 0) & 0x80;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"tls-version");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 0x70);
      if (iVar1 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x28d,
                      "ossl_cipher_generic_set_ctx_params");
        FUN_180003e80(0x39,0x67,0,param_4);
        return 0;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"tls-mac-size");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x88);
      if (iVar1 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x294,
                      "ossl_cipher_generic_set_ctx_params");
        FUN_180003e80(0x39,0x67,0,param_4);
        return 0;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&DAT_180013b20);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,local_res8);
      if (iVar1 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x29d,
                      "ossl_cipher_generic_set_ctx_params");
        FUN_180003e80(0x39,0x67,0,param_4);
        return 0;
      }
      *(int *)(param_1 + 0xa0) = local_res8[0];
    }
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000e3f0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180008440();
  if ((int)uVar1 != 0) {
    if ((*(byte *)(param_1 + 0x6c) & 8) != 0) {
      *param_3 = 0;
      return 1;
    }
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x21a,
                  "ossl_cipher_generic_stream_final");
    FUN_180003e80(0x39,0x72,0,param_4);
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18000e470(longlong param_1,longlong param_2,ulonglong *param_3,ulonglong param_4,
             undefined8 param_5,ulonglong param_6)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x6c) & 8) == 0) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x1da,
                  "ossl_cipher_generic_stream_update");
    FUN_180003e80(0x39,0x72,0,param_4);
    return 0;
  }
  if (param_6 == 0) {
    *param_3 = 0;
  }
  else {
    if (param_4 < param_6) {
      FUN_180003e10();
      FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x1e4,
                    "ossl_cipher_generic_stream_update");
      FUN_180003e80(0x39,0x6a,0,param_4);
      return 0;
    }
    uVar2 = param_6;
    iVar1 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5);
    if (iVar1 == 0) {
      FUN_180003e10();
      FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x1e9,
                    "ossl_cipher_generic_stream_update");
      FUN_180003e80(0x39,0x66,0,uVar2);
      return 0;
    }
    *param_3 = param_6;
    if (((*(byte *)(param_1 + 0x6c) & 2) == 0) && (*(int *)(param_1 + 0x70) != 0)) {
      if (*(int *)(param_1 + 0x90) != 0) {
        uVar2 = (ulonglong)*(byte *)((param_6 - 1) + param_2) + 1;
        if (param_6 < uVar2) {
          return 0;
        }
        param_6 = param_6 - uVar2;
        *param_3 = param_6;
      }
      if (param_6 < *(ulonglong *)(param_1 + 0x98)) {
        return 0;
      }
      uVar3 = param_6 - *(ulonglong *)(param_1 + 0x98);
      *param_3 = uVar3;
      uVar2 = *(ulonglong *)(param_1 + 0x88);
      if (uVar2 != 0) {
        if (uVar3 < uVar2) {
          return 0;
        }
        *(ulonglong *)(param_1 + 0x78) = (uVar3 - uVar2) + param_2;
        *param_3 = *param_3 - uVar2;
      }
    }
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000e5f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  
  if (param_2 != 0) {
    uVar2 = FUN_18000e190(param_1,param_2,param_3,param_4);
    if ((int)uVar2 == 0) {
      return 0;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar3,&local_res8);
      if (iVar1 == 0) {
        FUN_180003e10();
        FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon.c",0x80,
                      "ossl_cipher_var_keylen_set_ctx_params");
        FUN_180003e80(0x39,0x67,0,param_4);
        return 0;
      }
      if (*(longlong *)(param_1 + 0x48) != local_res8) {
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7;
        *(longlong *)(param_1 + 0x48) = local_res8;
      }
    }
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_18000e6b0(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                       ulonglong *param_5)

{
  ulonglong _Size;
  
  _Size = *param_5;
  if ((ulonglong)(param_3 - *param_2) <= *param_5) {
    _Size = param_3 - *param_2;
  }
  memcpy((void *)(param_1 + *param_2),(void *)*param_4,_Size);
  *param_4 = *param_4 + _Size;
  *param_5 = *param_5 - _Size;
  *param_2 = *param_2 + _Size;
  return ~(param_3 - 1U) & *param_5;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18000e730(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < param_3) {
    memset((void *)(param_1 + uVar1),(uint)(byte)((char)param_3 - (char)*param_2),param_3 - uVar1);
    return;
  }
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18000e770(undefined8 param_1,uint param_2,longlong param_3,ulonglong *param_4,ulonglong param_5,
             longlong *param_6,undefined4 *param_7,ulonglong param_8,int param_9)

{
  undefined8 uVar1;
  
  if (param_2 < 0x303) {
    if ((param_2 != 0x302) && (param_2 != 0x100)) {
      if (param_2 == 0x300) {
        uVar1 = FUN_18000ecc0(param_4,*param_4,param_3,param_6,param_7,param_5,param_8,param_1);
        return uVar1;
      }
      if (param_2 != 0x301) {
        return 0;
      }
      goto LAB_18000e80c;
    }
  }
  else if (((param_2 != 0x303) && (param_2 != 0xfefd)) && (param_2 != 0xfeff)) {
    return 0;
  }
  param_3 = param_3 + param_5;
  *param_4 = *param_4 - param_5;
LAB_18000e80c:
  uVar1 = FUN_18000edb0(param_4,*param_4,param_3,param_6,param_7,param_5,param_8,param_9,param_1);
  return uVar1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18000e860(longlong param_1,longlong *param_2,ulonglong param_3,undefined8 *param_4,
             size_t *param_5)

{
  size_t _Size;
  
  _Size = *param_5;
  if (_Size != 0) {
    if (param_3 < *param_2 + _Size) {
      FUN_180003e10();
      FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon_block.c",0x46,
                    "ossl_cipher_trailingdata");
      FUN_180003e80(0x39,0xc0103,0,param_4);
      return 0;
    }
    memcpy((void *)(*param_2 + param_1),(void *)*param_4,_Size);
    *param_2 = *param_2 + *param_5;
    *param_5 = 0;
  }
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18000e900(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = *param_2;
  if (uVar5 != param_3) {
    FUN_180003e10();
    FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon_block.c",0x61,
                  "ossl_cipher_unpadblock");
    FUN_180003e80(0x39,0xc0103,0,uVar5);
    return 0;
  }
  uVar4 = (ulonglong)*(byte *)(param_1 + -1 + param_3);
  if ((uVar4 != 0) && (uVar4 <= param_3)) {
    uVar2 = 0;
    if (uVar4 != 0) {
      do {
        lVar1 = uVar5 - 1;
        uVar5 = uVar5 - 1;
        if (*(byte *)(lVar1 + param_1) != uVar4) {
          FUN_180003e10();
          uVar3 = 0x70;
          goto LAB_18000e9a9;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    *param_2 = uVar5;
    return 1;
  }
  FUN_180003e10();
  uVar3 = 0x6b;
LAB_18000e9a9:
  FUN_180003e50("providers\\implementations\\ciphers\\ciphercommon_block.c",uVar3,
                "ossl_cipher_unpadblock");
  FUN_180003e80(0x39,100,0,uVar5);
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18000e9e0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong *param_4,
                  undefined4 *param_5,longlong param_6,ulonglong param_7,byte param_8,
                  undefined8 param_9)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *_Dst;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  longlong local_120;
  byte *local_118;
  byte local_108 [64];
  byte local_c8 [128];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x18000e9fa;
  local_48 = DAT_180019000 ^ (ulonglong)auStack_148;
  local_128 = *param_1;
  uVar6 = 0;
  uVar10 = local_128 - param_7;
  local_120 = param_3;
  if (((param_7 <= param_2) && (param_7 < 0x41)) && (param_7 != 0)) {
    *param_1 = uVar10;
    if (param_6 == 1) {
      if (param_4 != (longlong *)0x0) {
        *param_4 = param_3 + uVar10;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
    }
    else {
      iVar3 = RAND_bytes_ex(param_9,local_108,param_7,0);
      if (((0 < iVar3) && (param_4 != (longlong *)0x0)) && (param_5 != (undefined4 *)0x0)) {
        pbVar4 = (byte *)CRYPTO_malloc(param_7,"ssl\\record\\methods\\tls_pad.c",0xf5);
        *param_4 = (longlong)pbVar4;
        local_118 = pbVar4;
        if (pbVar4 != (byte *)0x0) {
          *param_5 = 1;
          _Dst = local_c8 + (-(int)local_c8 & 0x3f);
          uVar7 = uVar6;
          if (param_7 + 0x100 < param_2) {
            uVar7 = (param_2 - param_7) - 0x100;
          }
          memset(_Dst,0,param_7);
          uVar8 = uVar6;
          if (uVar7 < param_2) {
            uVar9 = uVar6;
            do {
              pbVar4 = (byte *)(uVar7 + local_120);
              uVar1 = (longlong)((uVar7 ^ uVar10) - 1 & ~(uVar7 ^ uVar10)) >> 0x3f;
              uVar5 = ((longlong)pbVar4 - (local_128 + local_120) ^ local_128 | uVar7 ^ local_128) ^
                      uVar7;
              uVar8 = uVar8 | uVar1 & uVar9;
              uVar7 = uVar7 + 1;
              uVar6 = (longlong)uVar5 >> 0x3f & (uVar1 | uVar6);
              _Dst[uVar9] = _Dst[uVar9] | *pbVar4 & (byte)uVar6;
              uVar9 = uVar9 + 1;
              uVar9 = uVar9 & (longlong)((uVar9 - param_7 ^ param_7 | param_7 ^ uVar9) ^ uVar9) >>
                              0x3f;
              pbVar4 = local_118;
            } while (uVar7 < param_2);
          }
          if (param_7 != 0) {
            uVar6 = param_7;
            pbVar11 = pbVar4;
            do {
              bVar2 = (byte)((int)(((uint)uVar8 & 0x20) - 1) >> 0x1f);
              uVar10 = uVar8 + 1;
              local_128 = CONCAT44(local_128._4_4_,~(uint)param_8);
              *pbVar11 = (pbVar11 + 1)[(longlong)(local_108 + (-1 - (longlong)pbVar4))] &
                         (byte)~(uint)param_8 |
                         param_8 & (_Dst[uVar8 | 0x20] & ~bVar2 |
                                   _Dst[uVar8 & 0xffffffffffffffdf] & bVar2);
              uVar8 = uVar10 & (longlong)((uVar10 - param_7 ^ param_7 | param_7 ^ uVar10) ^ uVar10)
                               >> 0x3f;
              uVar6 = uVar6 - 1;
              pbVar11 = pbVar11 + 1;
            } while (uVar6 != 0);
          }
        }
      }
    }
  }
  FUN_18000f5b0(local_48 ^ (ulonglong)auStack_148);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18000ecc0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong *param_4,
             undefined4 *param_5,ulonglong param_6,ulonglong param_7,undefined8 param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  if (uVar1 < param_7 + 1) {
    uVar3 = 0;
  }
  else {
    uVar2 = (ulonglong)*(byte *)((uVar1 - 1) + param_3);
    uVar4 = param_7 + 1 + uVar2;
    uVar2 = uVar2 + 1;
    uVar4 = 0xffffffffffffffffU -
            ((longlong)((uVar1 - uVar4 ^ uVar4 | uVar1 ^ uVar4) ^ uVar1) >> 0x3f) &
            0xffffffffffffffffU -
            ((longlong)((param_6 - uVar2 | uVar2 ^ param_6) ^ param_6) >> 0x3f);
    *param_1 = uVar1 - (uVar2 & uVar4);
    uVar3 = FUN_18000e9e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(byte)uVar4,
                          param_8);
  }
  return uVar3;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18000edb0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong *param_4,
             undefined4 *param_5,longlong param_6,ulonglong param_7,int param_8,undefined8 param_9)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  uVar2 = *param_1;
  uVar3 = (param_6 != 1) + param_7;
  uVar7 = 0xffffffffffffffff;
  if (uVar2 < uVar3) {
    return 0;
  }
  if (param_6 != 1) {
    pbVar8 = (byte *)(param_3 + -1 + uVar2);
    bVar1 = *pbVar8;
    uVar5 = (ulonglong)bVar1;
    if (param_8 != 0) {
      *param_1 = ((uVar2 - uVar5) - param_7) - 1;
      return 1;
    }
    uVar3 = uVar5 + uVar3;
    uVar7 = 0xffffffffffffffff -
            ((longlong)((uVar2 - uVar3 ^ uVar3 | uVar2 ^ uVar3) ^ uVar2) >> 0x3f);
    bVar6 = (byte)uVar7;
    uVar3 = 0x100;
    if (uVar2 < 0x100) {
      uVar3 = uVar2;
    }
    if (uVar3 != 0) {
      do {
        uVar10 = uVar9 + 1;
        bVar6 = (byte)(uVar9 >> 0x38);
        uVar7 = uVar7 & ~(ulonglong)
                         (byte)(0xffU - ((char)((byte)(uVar5 - uVar9 >> 0x38) ^ bVar6 | bVar6) >> 7)
                               & (*pbVar8 ^ bVar1));
        bVar6 = (byte)uVar7;
        pbVar8 = pbVar8 + -1;
        uVar9 = uVar10;
      } while (uVar10 < uVar3);
    }
    uVar7 = (longlong)((ulonglong)(byte)~bVar6 - 1) >> 0x3f;
    *param_1 = uVar2 - (uVar5 + 1 & uVar7);
  }
  uVar4 = FUN_18000e9e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(byte)uVar7,param_9)
  ;
  return uVar4;
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




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    int __cdecl dllmain_crt_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

int __cdecl dllmain_crt_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    uVar9 = FUN_18000f338(CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != (void *)0x0));
    return (int)uVar9;
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
  uVar6 = FUN_18000f854(0);
  if ((char)uVar6 != '\0') {
    uVar6 = __scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_180019140 != 0) {
      FUN_18000fa14(7);
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    DAT_180019140 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      _RTC_Initialize();
      FUN_18000f6a0();
      __scrt_initialize_default_local_stdio_options();
      iVar5 = _initterm_e(&DAT_180011408,&DAT_180011410);
      if ((iVar5 == 0) && (uVar7 = __scrt_dllmain_after_initialize_c(), (char)uVar7 != '\0')) {
        _initterm(&DAT_1800113f0,&DAT_180011400);
        DAT_180019140 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar6);
    if (!bVar2) {
      plVar8 = (longlong *)FUN_18000fa04();
      if ((*plVar8 != 0) && (uVar9 = FUN_18000f91c((longlong)plVar8), (char)uVar9 != '\0')) {
        (*(code *)*plVar8)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180019118 = DAT_180019118 + 1;
      return 1;
    }
  }
  return 0;
}




ulonglong FUN_18000f338(undefined8 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  
  uVar2 = (undefined1)param_1;
  if (DAT_180019118 < 1) {
    uVar5 = 0;
  }
  else {
    DAT_180019118 = DAT_180019118 + -1;
    uVar4 = __scrt_acquire_startup_lock();
    if (DAT_180019140 != 2) {
      FUN_18000fa14(7);
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    __scrt_dllmain_uninitialize_c();
    FUN_18000f6b0();
    FUN_18000fb98();
    DAT_180019140 = 0;
    uVar6 = (undefined7)((ulonglong)param_1 >> 8);
    __scrt_release_startup_lock((char)uVar4);
    bVar3 = __scrt_uninitialize_crt(CONCAT71(uVar6,uVar2),'\0');
    uVar5 = (ulonglong)bVar3;
    FUN_18000f840();
  }
  return uVar5;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x00018000f475) */
/* WARNING: Removing unreachable block (ram,0x00018000f406) */
/* WARNING: Removing unreachable block (ram,0x00018000f4b4) */

int FUN_18000f3b8(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  HINSTANCE__ *pHVar3;
  
  if ((param_2 == 0) && (DAT_180019118 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_18000f67c(param_1,param_2);
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      pHVar3 = param_1;
      FUN_18000f67c(param_1,0);
      FUN_18000f338(CONCAT71((int7)((ulonglong)pHVar3 >> 8),param_3 != (void *)0x0));
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
  FUN_18000f3b8(param_1,param_2,param_3);
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
  FUN_18000f5b0(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}




void FUN_18000f5b0(longlong param_1)

{
  if ((param_1 == DAT_180019000) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_18000fc0c();
  return;
}




/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_180019000 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_180019000 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_180019000 == 0x2b992ddfa232) {
      DAT_180019000 = 0x2b992ddfa233;
    }
  }
  DAT_180019040 = ~DAT_180019000;
  return;
}




undefined8 FUN_18000f67c(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}




void FUN_18000f6a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000f6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180019120);
  return;
}




void FUN_18000f6b0(void)

{
  __std_type_info_destroy_list(&DAT_180019120);
  return;
}




undefined * FUN_18000f6bc(void)

{
  return &DAT_180019130;
}




undefined * FUN_18000f6c4(void)

{
  return &DAT_180019138;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2019 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_18000f6bc();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_18000f6c4();
  *puVar1 = *puVar1 | 2;
  return;
}




/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Library: Visual Studio 2019 Release */

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
LAB_18000f716:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180019148 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180019148;
        pvVar1 = DAT_180019148;
      }
      DAT_180019148 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18000f716;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}




/* Library Function - Single Match
    __scrt_dllmain_after_initialize_c
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = FUN_180008440();
    uVar3 = _configure_narrow_argv(uVar3 & 0xffffffff);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = _initialize_narrow_environment();
  }
  else {
    uVar2 = FUN_18000fd54();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




/* Library Function - Single Match
    __scrt_dllmain_before_initialize_c
   
   Library: Visual Studio 2019 Release */

bool __scrt_dllmain_before_initialize_c(void)

{
  undefined8 uVar1;
  
  uVar1 = __scrt_initialize_onexit_tables(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180010078();
  if (cVar1 != '\0') {
    cVar1 = FUN_180010078();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180010078();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180010078();
  FUN_180010078();
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
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_180019158);
    return;
  }
  uVar2 = FUN_18001007c();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}




void FUN_18000f840(void)

{
  FUN_180010078();
  FUN_180010078();
  return;
}




longlong FUN_18000f854(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_180019150 = 1;
  }
  FUN_18000fd54();
  cVar1 = FUN_180010078();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180010078();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180010078();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_180019151 == '\0') {
    if (1 < param_1) {
      FUN_18000fa14(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      _DAT_180019158 = 0xffffffffffffffff;
      uRam0000000180019160 = 0xffffffffffffffff;
      _DAT_180019168 = 0xffffffffffffffff;
      _DAT_180019170 = 0xffffffffffffffff;
      uRam0000000180019178 = 0xffffffffffffffff;
      _DAT_180019180 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180019158);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180019170), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180019151 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018000f9a9) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

ulonglong FUN_18000f91c(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000210; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000300;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_18000f992;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18000f992:
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
   
   Library: Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180019148 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180019150 == '\0') || (param_2 == '\0')) {
    FUN_180010078();
    FUN_180010078();
  }
  return 1;
}




undefined * FUN_18000fa04(void)

{
  return &DAT_180019720;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000fa0c(void)

{
  _DAT_180019188 = 0;
  return;
}




void FUN_18000fa14(undefined4 param_1)

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
  *(undefined8 *)(puVar4 + -8) = 0x18000fa48;
  FUN_18000fa0c();
  *(undefined8 *)(puVar4 + -8) = 0x18000fa59;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18000fa63;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x18000fa7d;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18000fabe;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18000faf0;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18000fb12;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18000fb2f;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18000fb3a;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18000fb4b;
    FUN_18000fa0c();
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    _RTC_Initialize
   
   Library: Visual Studio 2019 Release */

void _RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180016b10; puVar1 < &DAT_180016b10; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000fb98(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180016b20; puVar1 < &DAT_180016b20; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void _guard_check_icall(void)

{
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
                    /* WARNING: Could not recover jumptable at 0x00018000fc05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(pvVar1,0xc0000409);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000fc0c(void)

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
  *(undefined8 *)(puVar3 + -8) = 0x18000fc37;
  capture_previous_context((PCONTEXT)&DAT_180019230);
  _DAT_1800191a0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_1800192c8 = puVar3 + 0x40;
  _DAT_1800192b0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180019190 = 0xc0000409;
  _DAT_180019194 = 1;
  _DAT_1800191a8 = 1;
  DAT_1800191b0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180019000;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180019040;
  *(undefined8 *)(puVar3 + -8) = 0x18000fcd9;
  DAT_180019328 = _DAT_1800191a0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180016560);
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




/* WARNING: Removing unreachable block (ram,0x00018000fe77) */
/* WARNING: Removing unreachable block (ram,0x00018000fe5a) */
/* WARNING: Removing unreachable block (ram,0x00018000fe29) */
/* WARNING: Removing unreachable block (ram,0x00018000fd90) */
/* WARNING: Removing unreachable block (ram,0x00018000fd6d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000fd54(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    _DAT_180019068 = 0xffffffffffffffff;
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_180019060 = 0x8000;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180019704 = DAT_180019704 | 1;
    }
  }
  uVar10 = 0;
  uVar8 = uVar10;
  uVar9 = uVar10;
  uVar11 = uVar10;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar9 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_180019704 = DAT_180019704 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar10 = *(uint *)(lVar4 + 4);
    }
  }
  _DAT_180019058 = 1;
  DAT_18001905c = 2;
  uVar6 = DAT_180019050 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_180019058 = 2;
    DAT_18001905c = 6;
    uVar6 = DAT_180019050 & 0xffffffffffffffee;
  }
  DAT_180019050 = uVar6;
  if ((uVar5 >> 0x1b & 1) != 0) {
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)in_XCR0, (bVar7 & 6) == 6)) {
      _DAT_180019058 = 3;
      uVar6 = DAT_180019050;
      uVar5 = DAT_18001905c | 8;
      if ((uVar8 & 0x20) != 0) {
        _DAT_180019058 = 5;
        uVar6 = DAT_180019050 & 0xfffffffffffffffd;
        uVar5 = DAT_18001905c | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_18001905c = DAT_18001905c | 0x68;
          _DAT_180019058 = 6;
          uVar6 = DAT_180019050 & 0xffffffffffffffd9;
          uVar5 = DAT_18001905c;
        }
      }
      DAT_18001905c = uVar5;
      DAT_180019050 = uVar6;
      if ((uVar9 >> 0x17 & 1) != 0) {
        DAT_180019050 = DAT_180019050 & 0xfffffffffeffffff;
      }
      if (((uVar11 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_180019700 = uVar10 & 0x400ff;
        DAT_180019050 = ~((ulonglong)(uVar10 >> 0x10 & 7) | 0x1000028) & DAT_180019050;
        if (1 < _DAT_180019700) {
          DAT_180019050 = DAT_180019050 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar11 >> 0x15 & 1) != 0) && ((in_XCR0 >> 0x13 & 1) != 0)) {
      DAT_180019050 = DAT_180019050 & 0xffffffffffffff7f;
    }
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180019070 != 0;
}




undefined1 FUN_180010078(void)

{
  return 1;
}




undefined8 FUN_18001007c(void)

{
  return 0;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180010090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void FUN_1800100cd(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x20));
  return;
}




void FUN_1800100e6(void)

{
  FUN_18000f840();
  return;
}




void FUN_1800100fa(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}



