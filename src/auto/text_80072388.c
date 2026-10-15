/* Functions from 0x80072388 to 0x800724AC, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035A238;
f32 fn_80072388(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x20C), void **, 0xC0), void **, 0x14), f32 *, 0xE0);
}

s32 fn_8007239C(void *arg0) {
    s32 count;
    s32 i;
    u32 flags;

    count = 0;
    flags = *M2C_FIELD(arg0, u32 **, 0x50C);
    if (flags == 0x40) {
        return 7;
    }
    for (i = 0; i < 6; i++) {
        if (flags & (1 << i)) {
            count++;
        }
    }
    return count;
}

void fn_80072438(void *arg0, u32 arg1) {
    extern s32 lbl_8035F3E8;
    s32 *temp_r3;
    s32 *temp_r4;
    u32 *temp_r5;
    u32 temp_r0;

    if (arg1 == 0x40) {
        *M2C_FIELD(arg0, u32 **, 0x50C) = arg1;
        temp_r4 = M2C_FIELD(arg0, s32 **, 0x62C);
        if (temp_r4 != NULL) {
            *temp_r4 |= lbl_8035F3E8;
        }
    } else {
        temp_r5 = M2C_FIELD(arg0, u32 **, 0x50C);
        temp_r0 = *temp_r5;
        if (temp_r0 != 0x40) {
            *temp_r5 = temp_r0 | arg1;
            temp_r3 = M2C_FIELD(arg0, s32 **, 0x62C);
            if (temp_r3 != NULL) {
                *temp_r3 &= 0xFFFFF7FF;
            }
        }
    }
}

void fn_8007249C(void *arg0, s32 arg1) {
    lbl_8035A238 = arg1;
}

s32 fn_800724A4(void) {
    return lbl_8035A238;
}
