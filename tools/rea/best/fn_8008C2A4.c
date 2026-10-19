// auto/text_8008C2A4 fn_8008C2A4 98.4210
extern u8 lbl_802C70F0[];
extern s32 lbl_8035B530;
void __ct__9C8024262CFv();
s32 __nw__FUl();
void fn_800604C4();
void fn_8008C094();
void fn_800F7E98();
void fn_800F7EC0();

u32 * fn_8008C2A4(void) {
    u32 *puVar1;

    if (lbl_8035B530 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035B530);
    puVar1 = (u32 *)__nw__FUl(0x140);
    if (puVar1 != (u32 *)0x0) {
        __ct__9C8024262CFv();
        *puVar1 = (u32)lbl_802C70F0;
        fn_8008C094(puVar1);
    }
    fn_800F7E98();
    if (puVar1 == (u32 *)0x0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    return puVar1;
}
