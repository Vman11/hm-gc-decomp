/* Functions from 0x8010EEE4 to 0x8010EF9C, found by decomp-toolkit. */
#include "common.h"

void fn_8010EEE4(void *arg0, u32 arg1) {
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0xC);
    if (arg1 > temp_r0) {
        M2C_FIELD(arg0, u32 *, 0xC) = 0U;
        return;
    }
    M2C_FIELD(arg0, u32 *, 0xC) = (u32) (temp_r0 - arg1);
}

void fn_8010EF84(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}
