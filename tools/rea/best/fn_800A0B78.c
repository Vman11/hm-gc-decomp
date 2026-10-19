// auto/text_800A0B78 fn_800A0B78 98.5366
extern u8 lbl_802CFAA4[];
extern s32 lbl_8035B530;
void __ct__9C8024262CFv();
s32 __nw__FUl();
void fn_800604C4();
void fn_800A0920();
void fn_800F7E98();
void fn_800F7EC0();

u32 * fn_800A0B78(void) {
    u32 *puVar1;

    if (lbl_8035B530 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035B530);
    puVar1 = (u32 *)__nw__FUl(0x194);
    if (puVar1 != (u32 *)0x0) {
        __ct__9C8024262CFv();
        *puVar1 = (u32)lbl_802CFAA4;
        puVar1[0x61] = 0;
        puVar1[0x62] = 0;
        fn_800A0920(puVar1);
    }
    fn_800F7E98();
    if (puVar1 == (u32 *)0x0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    return puVar1;
}
