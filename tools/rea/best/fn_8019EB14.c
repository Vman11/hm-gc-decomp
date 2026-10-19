// auto/text_8019EB14 fn_8019EB14 96.8571
void fn_8017F2A8();
u32 fn_801A1538();

u32 fn_8019EB14(u32 param_1, u32 param_2, u32 param_3) {
    u32 iVar1;

    iVar1 = fn_801A1538();
    if (iVar1 == 0x40) {
        iVar1 = 0x40;
    }
    else if ((*(u32 *)(*(u32 *)(*(u32 *)(*(u32 *)(param_1 + 0x6c) + 4) + *(u32 *)(param_1 + 0xcc) * 4
                                                            ) + 0x2c) & 0x380) != 0) {
        *(u32 *)(param_1 + 0x108) = param_3;
        fn_8017F2A8(param_2,param_1);
        iVar1 = 0x40;
    }
    return iVar1;
}
