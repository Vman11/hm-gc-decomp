// auto/text_80051F28 fn_80051F28 98.4210
extern u8 lbl_802BA100[];
extern s32 lbl_8035B530;
void __ct__9C800A3008Fv();
s32 __nw__FUl();
void fn_80051B50();
void fn_800604C4();
void fn_800F7E98();
void fn_800F7EC0();

u32 * fn_80051F28(void) {
    u32 *puVar1;

    if (lbl_8035B530 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035B530);
    puVar1 = (u32 *)__nw__FUl(0x27c);
    if (puVar1 != (u32 *)0x0) {
        __ct__9C800A3008Fv();
        *puVar1 = (u32)lbl_802BA100;
        fn_80051B50(puVar1);
    }
    fn_800F7E98();
    if (puVar1 == (u32 *)0x0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    return puVar1;
}
