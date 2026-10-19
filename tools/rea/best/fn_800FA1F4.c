// auto/text_800FA1F4 fn_800FA1F4 95.1316
extern u32 lbl_8035AA08;
void __dla__FPv();
void fn_800604C4();
void fn_800F7E98();
void fn_800F7EC0();
u32 __nwa__FUl();

void fn_800FA1F4(u32 *param_1, u32 param_2) {
    u32 uVar1;
    u32 iVar2;

    if (*param_1 != 0) {
        __dla__FPv(*param_1, *param_1);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
    }
    if (*(u32 *)(lbl_8035AA08 + 0x18) < 5) {
        *(u32 *)(lbl_8035AA08 + 0x1c) = 5;
    }
    else {
        *(u32 *)(lbl_8035AA08 + 0x1c) = *(u32 *)(lbl_8035AA08 + 0x18);
    }
    uVar1 = param_2 + 4U & 0xfffffffb;
    if (lbl_8035AA08 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035AA08);
    iVar2 = __nwa__FUl(uVar1);
    *param_1 = iVar2;
    fn_800F7E98();
    if (*param_1 == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    *(u32 *)(lbl_8035AA08 + 0x1c) = *(u32 *)(lbl_8035AA08 + 0x18);
    if (*param_1 == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    param_1[1] = *param_1;
    param_1[2] = uVar1;
    param_1[3] = param_1[1];
    param_1[4] = param_1[1];
    param_1[5] = 1;
}
