// auto/text_8007EA38 fn_8007EA38 95.6556
extern u32 lbl_8035B460;
extern u32 lbl_8035B530;
extern char lbl_8035F980[0x8];
void fn_800604C4();
void fn_800F7E98();
void fn_800F7EC0();
u32 __nwa__FUl();
u32 __nw__FUl();
u32 fn_800F9398();
void fn_80188144();
void __ct__9C801883E0Fv();
void fn_802416D4();

void fn_8007EA38(u32 param_1, u32 param_2) {
    u32 uVar1;
    u32 iVar2;

    uVar1 = fn_800F9398(*(u32 *)(lbl_8035B460 + 8) + 0x90,(void *)lbl_8035F980); /* "srchdum" */
    if (lbl_8035B530 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035B530);
    iVar2 = __nw__FUl(0xcc);
    if (iVar2 != 0) {
        if (iVar2 != 0) {
            __ct__9C801883E0Fv(iVar2);
        }
    }
    *(u32 *)(param_1 + 0x154) = iVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x154) == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    if (*(u32 *)(param_1 + 0x154) != 0) {
        fn_80188144(*(u32 *)(param_1 + 0x154),*(u32 *)(lbl_8035B460 + 8),uVar1,0);
    }
    if (lbl_8035B530 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035B530);
    uVar1 = __nwa__FUl(0x10);
    *(u32 *)(param_1 + 0x198) = uVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x198) == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    **(u32 **)(param_1 + 0x198) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x198) + 4) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x198) + 8) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x198) + 0xc) = 0;
    fn_802416D4(param_1,param_2);
}
