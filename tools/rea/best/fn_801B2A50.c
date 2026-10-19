// auto/text_801B2A50 fn_801B2A50 96.9811
extern u8 lbl_802EACC8[];
extern u32 lbl_8035AFCC;
void __ct__9C801DDC8CFv();
u32 __nw__FUl();
void fn_800604C4();
void fn_800F7E98();
void fn_800F7EC0();

u32 fn_801B2A50(void) {
    u32 iVar1;

    if (lbl_8035AFCC == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    iVar1 = __nw__FUl(0x1a4);
    if (iVar1 != 0) {
        __ct__9C801DDC8CFv(iVar1);
        *(u8 **)(iVar1 + 0x80) = (u8 *)lbl_802EACC8;
        *(u32 *)(iVar1 + 0x16c) = 0;
        *(u32 *)(iVar1 + 0x188) = 0;
        *(u32 *)(iVar1 + 0x18c) = 0;
        *(u32 *)(iVar1 + 0x194) = 0;
        *(u32 *)(iVar1 + 0x170) = 0;
        *(u32 *)(iVar1 + 0x174) = 0;
        *(u32 *)(iVar1 + 0x178) = 0;
        *(u32 *)(iVar1 + 0x17c) = 0;
        *(u32 *)(iVar1 + 0x19c) = 0;
        *(u32 *)(iVar1 + 0x168) = 0;
        *(u32 *)(iVar1 + 0x198) = 0xd;
        *(u32 *)(iVar1 + 0x180) = 0;
        *(u32 *)(iVar1 + 0x184) = 0;
        *(u32 *)(iVar1 + 0x1a0) = 0;
    }
    fn_800F7E98();
    if (iVar1 == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    return iVar1;
}
