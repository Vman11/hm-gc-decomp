// auto/text_80103870 fn_80103870 97.2414
extern "C" {
extern u32 lbl_8035AA38;
void __dla__FPv(int);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);

void fn_80103870(u32 param_1, u32 param_2) {
    u32 uVar1;
    u32 iVar2;
    u32 uVar3;

    if (*(u32 *)(param_1 + 0x10) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 0x10)));
        *(u32 *)(param_1 + 0x10) = 0;
        *(u32 *)(param_1 + 0x14) = 0;
        *(u32 *)(param_1 + 8) = 0;
        *(u32 *)(param_1 + 0xc) = 0;
    }
    *(u32 *)(param_1 + 0xc) = param_2;
    if (lbl_8035AA38 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AA38));
    uVar1 = (u32) new u8[*(u32 *)(param_1 + 0xc) << 2];
    *(u32 *)(param_1 + 0x10) = uVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x10) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < *(u32 *)(param_1 + 0xc); uVar3 = uVar3 + 1) {
        *(u32 *)(*(u32 *)(param_1 + 0x10) + iVar2) = 0;
        iVar2 = iVar2 + 4;
    }
}
}
