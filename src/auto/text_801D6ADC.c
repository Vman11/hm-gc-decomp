// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802ECB70[];
extern u32 lbl_8035AFCC;
void fn_800604C4();
void fn_800F7E98();
void fn_800F7EC0();
u32 __nw__FUl();
void fn_801B31A4();
void fn_801D6910();
void __ct__9C801DDC8CFv();

u32 fn_801D6ADC(void) {
    u32 iVar1;

    if (lbl_8035AFCC == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    iVar1 = __nw__FUl(0x364);
    if (iVar1 != 0) {
        fn_801B31A4();
        *(u8 **)(iVar1 + 0x80) = lbl_802ECB70;
        __ct__9C801DDC8CFv(iVar1 + 0x178);
        fn_801D6910(iVar1);
    }
    fn_800F7E98();
    if (iVar1 == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    return iVar1;
}
