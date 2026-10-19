// auto/text_80254990 fn_80254990 95.0737
s32 fn_80180E7C();
s32 fn_80180E9C();
s32 fn_80253E30();
void fn_80254640();
s32 fn_80254C88();

void fn_80254990(u32 param_1, s32 param_2, u32 param_3) {
    u16 uVar1;
    u16 uVar2;
    u16 uVar3;
    u16 uVar4;
    u16 uVar5;
    u16 uVar6;
    s32 iVar7;
    s32 iVar8;
    s32 iVar9;
    s32 iVar10;
    s32 iVar11;
    u32 uVar12;
    u32 uVar13;
    u32 uVar14;
    u32 uVar15;
    u32 uVar16;
    u32 uVar17;
    u32 uVar18;
    u32 uVar19;
    u32 uVar20;
    u32 local_64;

    uVar1 = *(u16 *)(param_2 + 0x6c);
    for (local_64 = 0; local_64 < uVar1; local_64 = local_64 + 1) {
        iVar7 = fn_80180E7C(param_2,local_64);
        uVar2 = *(u16 *)(iVar7 + 0x6c);
        for (uVar16 = 0; uVar16 < uVar2; uVar16 = uVar16 + 1) {
            iVar8 = fn_80180E7C(iVar7,uVar16);
            uVar3 = *(u16 *)(iVar8 + 0x6c);
            for (uVar20 = 0; uVar20 < uVar3; uVar20 = uVar20 + 1) {
                iVar9 = fn_80180E7C(iVar8,uVar20);
                uVar4 = *(u16 *)(iVar9 + 0x6c);
                for (uVar19 = 0; uVar19 < uVar4; uVar19 = uVar19 + 1) {
                    iVar10 = fn_80180E7C(iVar9,uVar19);
                    uVar5 = *(u16 *)(iVar10 + 0x6c);
                    for (uVar18 = 0; uVar18 < uVar5; uVar18 = uVar18 + 1) {
                        iVar11 = fn_80180E7C(iVar10,uVar18);
                        uVar6 = *(u16 *)(iVar11 + 0x6c);
                        for (uVar17 = 0; uVar17 < uVar6; uVar17 = uVar17 + 1) {
                            uVar14 = fn_80180E7C(iVar11,uVar17);
                            uVar12 = fn_80253E30();
                            for (uVar15 = 0; uVar15 < uVar12; uVar15 = uVar15 + 1) {
                                uVar13 = fn_80180E7C(uVar14,uVar15);
                                fn_80254990(param_1,uVar13,param_3);
                            }
                            uVar12 = fn_80254C88(uVar14);
                            for (uVar15 = 0; uVar15 < uVar12; uVar15 = uVar15 + 1) {
                                uVar13 = fn_80180E9C(uVar14,uVar15);
                                fn_80254640(param_1,uVar13,param_3);
                            }
                        }
                        uVar6 = *(u16 *)(iVar11 + 0x58);
                        for (uVar17 = 0; uVar17 < uVar6; uVar17 = uVar17 + 1) {
                            uVar14 = fn_80180E9C(iVar11,uVar17);
                            fn_80254640(param_1,uVar14,param_3);
                        }
                    }
                    uVar5 = *(u16 *)(iVar10 + 0x58);
                    for (uVar18 = 0; uVar18 < uVar5; uVar18 = uVar18 + 1) {
                        uVar14 = fn_80180E9C(iVar10,uVar18);
                        fn_80254640(param_1,uVar14,param_3);
                    }
                }
                uVar4 = *(u16 *)(iVar9 + 0x58);
                for (uVar19 = 0; uVar19 < uVar4; uVar19 = uVar19 + 1) {
                    uVar14 = fn_80180E9C(iVar9,uVar19);
                    fn_80254640(param_1,uVar14,param_3);
                }
            }
            uVar3 = *(u16 *)(iVar8 + 0x58);
            for (uVar20 = 0; uVar20 < uVar3; uVar20 = uVar20 + 1) {
                uVar14 = fn_80180E9C(iVar8,uVar20);
                fn_80254640(param_1,uVar14,param_3);
            }
        }
        uVar2 = *(u16 *)(iVar7 + 0x58);
        for (uVar16 = 0; uVar16 < uVar2; uVar16 = uVar16 + 1) {
            uVar14 = fn_80180E9C(iVar7,uVar16);
            fn_80254640(param_1,uVar14,param_3);
        }
    }
    uVar1 = *(u16 *)(param_2 + 0x58);
    for (uVar16 = 0; uVar16 < uVar1; uVar16 = uVar16 + 1) {
        uVar14 = fn_80180E9C(param_2,uVar16);
        fn_80254640(param_1,uVar14,param_3);
    }
}
