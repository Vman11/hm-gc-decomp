/* Functions from 0x8002A97C to 0x8002A9AC, found by decomp-toolkit. */
#include "common.h"

s32 fn_8002A97C(void) {
    return 1;
}

void fn_8002A984(u32 *arg0, s32 arg1) {
    if (arg1 != 0) {
        arg0[0x1B] |= 1;
    } else {
        arg0[0x1B] &= ~1;
    }
}

