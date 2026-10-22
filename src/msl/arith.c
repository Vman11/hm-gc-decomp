/* MSL_C arith.c */
#include "common.h"

s32 abs(s32 arg0);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
s32 abs(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 >> 0x1F;
    return (temp_r4 ^ arg0) - temp_r4;
}
#pragma pop
