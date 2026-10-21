// auto/text_8009C44C fn_8009C44C 98.5000
extern u8 lbl_802CDD64[];
extern s32 lbl_8035B530;
void __ct__9C80214C34Fv();
s32 __nw__FUl();
void fn_800604C4();
void fn_8009C2B0();
void fn_800F7E98();
void fn_800F7EC0();
void __ct__9C80273018Fv();

u32 * fn_8009C44C(void) {
    u32 *puVar1;

    if (lbl_8035B530 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035B530);
    puVar1 = (u32 *)__nw__FUl(0x310);
    if (puVar1 != (u32 *)0x0) {
        __ct__9C80273018Fv();
        *puVar1 = (u32)lbl_802CDD64;
        __ct__9C80214C34Fv(puVar1 + 0x3e);
        fn_8009C2B0(puVar1);
    }
    fn_800F7E98();
    if (puVar1 == (u32 *)0x0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    return puVar1;
}
