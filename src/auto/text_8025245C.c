/* Functions from 0x8025245C to 0x8025248C, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802AFC68[];
extern u8 lbl_802AFC48[];
extern u8 lbl_802F2300[];

void fn_8025245C(volatile unsigned int *arg0) {
    arg0[0] = (unsigned int)lbl_802AFC68;
    arg0[0] = (unsigned int)lbl_802AFC48;
    arg0[0] = (unsigned int)lbl_802F2300;
    arg0[1] = 0;
}
