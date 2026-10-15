/* Functions from 0x8010344C to 0x80103464, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802E2380;

extern u8 lbl_802E2380;

void fn_8010344C(u8 *arg0) {
    *(u8 **)(arg0 + 4) = &lbl_802E2380;
    *(s32 *)arg0 = 1;
}
