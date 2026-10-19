// auto/text_8004B61C fn_8004B61C 96.9231
void __dl__FPv();
void __dla__FPv();
void fn_80242210();

void fn_8004B61C(s32 param_1) {
    s32 iVar1;
    u32 uVar2;

    if ((*(u32 *)(param_1 + 0x1a0) == 0) && (*(u32 *)(param_1 + 0x1c4) != 0)) {
        __dl__FPv(*(u32 *)(param_1 + 0x1c4));
        *(u32 *)(param_1 + 0x1c4) = 0;
    }
    if (*(u32 *)(param_1 + 400) != 0) {
        iVar1 = 0;
        for (uVar2 = 0; uVar2 < *(u32 *)(param_1 + 0x1d4); uVar2 = uVar2 + 1) {
            *(u32 *)(*(u32 *)(param_1 + 400) + iVar1) = 0;
            iVar1 = iVar1 + 4;
        }
        __dla__FPv(*(u32 *)(param_1 + 400));
        *(u32 *)(param_1 + 400) = 0;
    }
    fn_80242210(param_1);
}
