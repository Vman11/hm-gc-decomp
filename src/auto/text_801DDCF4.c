// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802ED228[];
extern u32 lbl_8035AFCC;
void fn_800604C4();
void fn_800F7E98();
void fn_800F7EC0();
u32 __nw__FUl();
void __ct__9C801C0BB4Fv();
void fn_801DD938();

u32 fn_801DDCF4(void) {
    u32 iVar1;

    if (lbl_8035AFCC == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    iVar1 = __nw__FUl(0x164);
    if (iVar1 != 0) {
        __ct__9C801C0BB4Fv();
        *(u8 **)(iVar1 + 0x80) = lbl_802ED228;
        fn_801DD938(iVar1);
    }
    fn_800F7E98();
    if (iVar1 == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    return iVar1;
}
