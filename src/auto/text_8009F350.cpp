// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802CF058[];
extern u32 lbl_8035AFCC;
void fn_800F7E98(void);
void fn_801BBC04(void);

extern "C" {
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(int);
}
struct Pod_18c { char b[0x18c]; };

extern "C" u32 fn_8009F350(void) {
    u32 iVar1;

    if (lbl_8035AFCC == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AFCC));
    iVar1 = (u32) new Pod_18c;
    if (iVar1 != 0) {
        fn_801BBC04();
        *(u8 **)(iVar1 + 0x80) = lbl_802CF058;
        *(u8 *)(iVar1 + 0x174) = 0;
        *(u8 *)(iVar1 + 0x17c) = 0;
    }
    fn_800F7E98();
    if (iVar1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    return iVar1;
}

} /* extern "C" */
