/* Functions from 0x8010344C to 0x80103464, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802E2380[];

void fn_8010344C(u32 *arg0) {
    arg0[1] = (u32)&lbl_802E2380;
    arg0[0] = 1;
}
