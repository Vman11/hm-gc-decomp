/* Functions from 0x8010D2A8 to 0x8010D2D4, found by decomp-toolkit. */
#include "common.h"

s32 fn_8010D2A8(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0[3] != 0) {
        arg0[1] = 0;
        arg0[3] = 0;
    }
    arg0[0] = arg1;
    arg0[1] = arg2;
    arg0[2] = arg3;
    return 0;
}
