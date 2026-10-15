/* Functions from 0x80076974 to 0x80076990, found by decomp-toolkit. */
#include "common.h"

void fn_80076974(u8* arg0, f32* arg1) {
    f32 x = arg1[0];
    f32 y = arg1[1];
    ((f32*)(arg0 + 0x24))[0] = x;
    x = arg1[2];
    ((f32*)(arg0 + 0x24))[1] = y;
    ((f32*)(arg0 + 0x24))[2] = x;
}
