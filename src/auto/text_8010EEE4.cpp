/* Functions from 0x8010EEE4 to 0x8010EF9C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_8010EEE4(void *arg0, u32 arg1) {
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0xC);
    if (arg1 > temp_r0) {
        M2C_FIELD(arg0, u32 *, 0xC) = 0U;
        return;
    }
    M2C_FIELD(arg0, u32 *, 0xC) = (u32) (temp_r0 - arg1);
}

void fn_8010EF08(void *arg0, s32 arg1) {
    long temp_r4;
    unsigned temp_r5;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x20) > M2C_FIELD(arg0, u32 *, 0x10)) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + arg1);
        temp_r5 = M2C_FIELD(arg0, u32 *, 0x10);
        temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x20);
        if ((u32) (M2C_FIELD(arg0, s32 *, 0xC) + temp_r5) > temp_r4) {
            M2C_FIELD((int)arg0, s32 *, 0xC) = (s32) (temp_r4 - temp_r5);
        }
    }
}

s32 fn_8010EF50(void *arg0, u32 arg1, s32 arg2, s32 arg3) {
    if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, u32 *, 4) = 0U;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    M2C_FIELD(arg0, u32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = arg3;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    return 0;
}

void fn_8010EF84(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

} /* extern "C" */
