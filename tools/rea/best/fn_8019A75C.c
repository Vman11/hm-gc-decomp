// auto/text_8019A75C fn_8019A75C 95.0000
extern "C" {
}


extern "C" void fn_8019A75C(s32 param_1, u32 param_2) {
    u32 uVar2;
    u32 uVar1;

    fn_8019A7D0((int)(param_1), (int)(1), (int)(1));
    uVar2 = *(u32 *)(param_1 + 0x3c);
    uVar1 = uVar2 + *(s32 *)(param_1 + 0x38) * 0x2c;
    for (; uVar2 < uVar1; uVar2 = uVar2 + 0x2c) {
        fn_80188B44((int)(uVar2), (int)(param_2));
    }
}
