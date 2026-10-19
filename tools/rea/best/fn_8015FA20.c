// auto/text_8015FA20 fn_8015FA20 99.6364

void fn_8015FA20(s32 param_1, u32 param_2, s32 param_3) {
    u32 uVar1;

    uVar1 = *(u32 *)(param_3 + 0x5c);
    *(u32 *)(param_1 + 0x58) = *(u32 *)(param_3 + 0x58);
    *(u32 *)(param_1 + 0x5c) = uVar1;
    *(u32 *)(param_1 + 0x60) = *(u32 *)(param_3 + 0x60);
    *(u16 *)(param_1 + 0x4c) = *(u16 *)(param_3 + 0x4c);
    *(u32 *)(param_1 + 0x50) = *(u32 *)(param_3 + 0x50);
    fn_80217880(param_1 + 0x3c,param_3 + 0x3c);
    fn_80132BC0(param_1,param_2,param_3);
}
