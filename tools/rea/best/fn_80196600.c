// auto/text_80196600 fn_80196600 96.4516
void fn_8017F368();
u32 fn_801A1538();

u32 fn_80196600(u32 param_1, u32 param_2, u32 param_3) {
    u32 iVar1;

    iVar1 = fn_801A1538();
    if (iVar1 == 0x40) {
        iVar1 = 0x40;
    }
    else if ((*(u32 *)(*(u32 *)(param_1 + 0x90) + 0xc) & 0x2000) == 0) {
        *(u32 *)(param_1 + 0xdc) = param_3;
        fn_8017F368(param_2,param_1);
        iVar1 = 0x40;
    }
    return iVar1;
}
