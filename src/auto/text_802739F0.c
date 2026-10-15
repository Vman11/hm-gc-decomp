/* Functions from 0x802739F0 to 0x80273A20, found by decomp-toolkit. */
#include "common.h"

void fn_802739F0(volatile u32 *arg0) {
    extern u8 lbl_802AFC68[];
    extern u8 lbl_802AFC48[];
    extern u8 lbl_802F3758[];
    *arg0 = (u32)lbl_802AFC68;
    *arg0 = (u32)lbl_802AFC48;
    *arg0 = (u32)lbl_802F3758;
    arg0[1] = 0;
}
