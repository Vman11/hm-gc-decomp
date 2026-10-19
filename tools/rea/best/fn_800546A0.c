// auto/text_800546A0 fn_800546A0 98.5000
extern u8 lbl_802BAEB8[];
extern s32 lbl_8035B530;
void __ct__9C8024262CFv();
s32 __nw__FUl();
void fn_8005425C();
void fn_800604C4();
void fn_800F7E98();
void fn_800F7EC0();
void fn_8023C398();

u32 * fn_800546A0(void) {
    u32 *puVar1;

    if (lbl_8035B530 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035B530);
    puVar1 = (u32 *)__nw__FUl(0x1cc);
    if (puVar1 != (u32 *)0x0) {
        __ct__9C8024262CFv();
        *puVar1 = (u32)lbl_802BAEB8;
        fn_8023C398(puVar1 + 0x61);
        fn_8005425C(puVar1);
    }
    fn_800F7E98();
    if (puVar1 == (u32 *)0x0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    return puVar1;
}
