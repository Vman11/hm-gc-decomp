// auto/text_80212A28 fn_80212A28 95.8276
void __dt__9C80213428Fv();
void __dla__FPv();
void fn_800E1E88();

void fn_80212A28(u32 *param_1) {
    u32 uVar1;
    u32 iVar2;
    u32 *piVar3;

    if (*param_1 != 0) {
        uVar1 = 0;
        iVar2 = 0;        for (; uVar1 < *(u16 *)(param_1 + 3); uVar1 = uVar1 + 1) {
            piVar3 = (u32 *)(*param_1 + iVar2);
            if (piVar3[1] != 0) {
                __dla__FPv(piVar3[1] + -0x10);
            }
            if (*piVar3 != 0) {
                fn_800E1E88(*piVar3,__dt__9C80213428Fv);
            }
            iVar2 = iVar2 + 0x14;
            *piVar3 = 0;
            piVar3[1] = 0;
            piVar3[2] = 0;
            *(u16 *)(piVar3 + 3) = 0;
            *(u16 *)((u32)piVar3 + 0xe) = 0;
            *(u16 *)(piVar3 + 4) = 0;
            *(u16 *)((u32)piVar3 + 0x12) = 0;
        }
        fn_800E1E88(*param_1,__dt__9C80213428Fv);
        *param_1 = 0;
    }
    *(u16 *)((u32)param_1 + 0x12) = *(u16 *)((u32)param_1 + 0x12) & 0xfffd;
}
