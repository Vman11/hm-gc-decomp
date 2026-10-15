/* Functions from 0x8017025C to 0x8017042C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80364728;
void fn_8017025C(s32 *arg0) {
    arg0[1] |= lbl_80364728;
    arg0[1] &= ~0x1C0;
}

void fn_8017027C(void *arg0, void *arg1, s32 arg2) {
    extern s32 lbl_8036472C;
    extern s32 lbl_80364730;
    extern s32 lbl_80364734;
    s32 temp_r5;
    s32 var_r5;

    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | lbl_8036472C);
    if (arg2 & 1) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | lbl_80364730);
    } else if (arg2 & 0xE) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | lbl_80364734);
    } else {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x180);
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x4C);
    M2C_FIELD(arg1, s32 *, 0) = temp_r5;
    var_r5 = temp_r5 + 0xC;
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    if (M2C_FIELD(arg0, s32 *, 8) & 2) {
        M2C_FIELD(arg1, s32 *, 8) = var_r5;
        var_r5 += 4;
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    }
    if (M2C_FIELD(arg0, s32 *, 8) & 4) {
        M2C_FIELD(arg1, s32 *, 0x10) = var_r5;
        var_r5 += 8;
        M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    }
    if (M2C_FIELD(arg0, s32 *, 8) & 8) {
        M2C_FIELD(arg1, s32 *, 0x18) = var_r5;
        var_r5 += 4;
        M2C_FIELD(arg1, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    }
    if (M2C_FIELD(arg0, s32 *, 8) & 0x10) {
        M2C_FIELD(arg1, s32 *, 0x20) = var_r5;
        M2C_FIELD(arg1, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    }
}

