/* Functions from 0x80071E34 to 0x80071E68, found by decomp-toolkit. */
#include "common.h"

void fn_80071E34(u8* arg0, f32* arg1) {
    *(f32*)(arg0 + 0x724) += arg1[0];
    *(f32*)(arg0 + 0x728) += arg1[1];
    *(f32*)(arg0 + 0x72C) += arg1[2];
}
