// auto/text_8015B06C fn_8015B06C 95.3704
extern s32 lbl_8035ACE8;
void fn_800C1364();
s32 fn_800C2600();

u32 fn_8015B06C(s32 param_1) {
    s32 iVar1;

    iVar1 = fn_800C2600();
    if (iVar1 == *(u32 *)(param_1 + 0x68)) {
        if (*(u32 *)(param_1 + 0x58) == 1) {
            lbl_8035ACE8 = 2;
        }
        fn_800C1364();
        *(u32 *)(param_1 + 0x68) = *(u32 *)(param_1 + 0x68) + 1;
    }
    return *(u32 *)(param_1 + *(u32 *)(param_1 + 100) * 4 + 0x50);
}
