/* Functions from 0x8023C720 to 0x8023C774, found by decomp-toolkit. */
#include "common.h"

s32 fn_8023C720(u32 *arg0, u32 arg1) {
    if (arg0[0] != 0) {
        arg0[0] = 0;
        arg0[1] = 0;
        arg0[2] = 0;
        arg0[3] = 0;
        arg0[4] = 0;
        ((u8 *)arg0)[0x14] = 0;
    }
    arg0[0] = arg1;
    return 0;
}

void fn_8023C754(u32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    ((u8 *)arg0)[0x14] = 0;
}
