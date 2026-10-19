// auto/text_80040ABC fn_80040ABC 95.6061
extern u32 lbl_8035B460;
extern u32 lbl_8035B530;
extern u32 lbl_8035B65C;
extern char lbl_8035C33C[0x6];
void fn_800604C4();
void fn_800F7E98();
void fn_800F7EC0();
u32 __nwa__FUl();
u32 __nw__FUl();
u32 fn_800F9398();
void fn_8018DFAC();
void __ct__9C8018E150Fv();
void fn_8019B7E8();
void fn_802416D4();

void fn_80040ABC(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 iVar2;
    u32 uVar3;

    iVar1 = fn_800F9398(*(u32 *)(lbl_8035B460 + 8) + 0x90,(void *)lbl_8035C33C); /* "Bshad" */
    if (lbl_8035B530 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035B530);
    iVar2 = __nw__FUl(0xa8);
    if (iVar2 != 0) {
        if (iVar2 != 0) {
            if (iVar2 != 0) {
                __ct__9C8018E150Fv(iVar2);
            }
        }
    }
    *(u32 *)(param_1 + 0x154) = iVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x154) == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    if ((*(u32 *)(param_1 + 0x154) != 0) && (iVar1 != 0)) {
        fn_8018DFAC(*(u32 *)(param_1 + 0x154),*(u32 *)(lbl_8035B460 + 8),iVar1);
        fn_8019B7E8(*(u32 *)(lbl_8035B65C + 0xc),*(u32 *)(param_1 + 0x154));
    }
    if (lbl_8035B530 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035B530);
    uVar3 = __nwa__FUl(0x18);
    *(u32 *)(param_1 + 0x174) = uVar3;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x174) == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    **(u32 **)(param_1 + 0x174) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x174) + 4) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x174) + 8) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x174) + 0xc) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x174) + 0x10) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x174) + 0x14) = 0;
    fn_802416D4(param_1,param_2);
}
