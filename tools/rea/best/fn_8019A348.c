// auto/text_8019A348 fn_8019A348 95.0000
void __dl__FPv();

void fn_8019A348(u32 *param_1) {
    u32 iVar1;

    iVar1 = param_1[1];
    while (iVar1 != 0) {
        iVar1 = *(u32 *)(iVar1 + 0xc);
        __dl__FPv();
    }
    param_1[1] = 0;
    *param_1 = 0;
    param_1[1] = 0;
}
