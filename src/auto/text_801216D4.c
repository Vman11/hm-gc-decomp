/* Functions from 0x801216D4 to 0x801217EC, found by decomp-toolkit. */
#include "common.h"

u8 fn_801216D4(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 ret = 0;
    if ((arg1[0] >> arg2) == (arg0[0] >> arg2) && (arg1[1] >> arg2) == (arg0[1] >> arg2) &&
        (arg1[2] >> arg2) == (arg0[2] >> arg2)) {
        ret = 1;
    }
    return ret;
}

u8 fn_8012172C(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 ret = 0;
    if ((arg1[0] >> arg2) == (arg0[0] >> arg2) && (arg1[1] >> arg2) == (arg0[1] >> arg2) &&
        (arg1[2] >> arg2) == (arg0[2] >> arg2) && (arg1[3] >> arg2) == (arg0[3] >> arg2)) {
        ret = 1;
    }
    return ret;
}

s32 fn_8012179C(u8 *arg0, u8 *arg1) {
    s32 d1 = arg1[1] - arg0[1];
    s32 d2 = arg1[2] - arg0[2];
    s32 d3 = arg1[3] - arg0[3];
    s32 d0 = arg1[0] - arg0[0];
    return d0 * d0 + (d1 * d1 + d2 * d2 + d3 * d3);
}
