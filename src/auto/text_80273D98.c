/* Functions from 0x80273D98 to 0x80273DD8, found by decomp-toolkit. */
#include "common.h"

void fn_80273D98(volatile u32 *arg0) {
    extern u8 lbl_802AFC68[];
    extern u8 lbl_802AFC48[];
    extern u8 lbl_802F37B8[];

    arg0[0] = (u32)lbl_802AFC68;
    arg0[0] = (u32)lbl_802AFC48;
    arg0[0] = (u32)lbl_802F37B8;
    arg0[1] = 0;
    arg0[4] = 0;
    arg0[2] = 0;
    arg0[3] = 7;
}
