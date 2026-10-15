/* Functions from 0x8002B26C to 0x8002B42C, found by decomp-toolkit. */
#include "common.h"

void fn_8002B26C(void *arg0, s32 arg1) {
    extern s32 lbl_8035B9A0;
    s32 *temp_r3;
    s32 *temp_r4;
    s32 *temp_r4_10;
    s32 *temp_r4_11;
    s32 *temp_r4_12;
    s32 *temp_r4_2;
    s32 *temp_r4_3;
    s32 *temp_r4_4;
    s32 *temp_r4_5;
    s32 *temp_r4_6;
    s32 *temp_r4_7;
    s32 *temp_r4_8;
    s32 *temp_r4_9;
    s32 *temp_r5;
    s32 *temp_r5_10;
    s32 *temp_r5_11;
    s32 *temp_r5_2;
    s32 *temp_r5_3;
    s32 *temp_r5_4;
    s32 *temp_r5_5;
    s32 *temp_r5_6;
    s32 *temp_r5_7;
    s32 *temp_r5_8;
    s32 *temp_r5_9;

    if (arg1 != 0) {
        temp_r5 = M2C_FIELD(arg0, s32 **, 0x11C);
        *temp_r5 |= lbl_8035B9A0;
        temp_r5_2 = M2C_FIELD(arg0, s32 **, 0x134);
        *temp_r5_2 |= lbl_8035B9A0;
        temp_r5_3 = M2C_FIELD(arg0, s32 **, 0x120);
        *temp_r5_3 |= lbl_8035B9A0;
        temp_r5_4 = M2C_FIELD(arg0, s32 **, 0x138);
        *temp_r5_4 |= lbl_8035B9A0;
        temp_r5_5 = M2C_FIELD(arg0, s32 **, 0x124);
        *temp_r5_5 |= lbl_8035B9A0;
        temp_r5_6 = M2C_FIELD(arg0, s32 **, 0x13C);
        *temp_r5_6 |= lbl_8035B9A0;
        temp_r5_7 = M2C_FIELD(arg0, s32 **, 0x128);
        *temp_r5_7 |= lbl_8035B9A0;
        temp_r5_8 = M2C_FIELD(arg0, s32 **, 0x140);
        *temp_r5_8 |= lbl_8035B9A0;
        temp_r5_9 = M2C_FIELD(arg0, s32 **, 0x12C);
        *temp_r5_9 |= lbl_8035B9A0;
        temp_r5_10 = M2C_FIELD(arg0, s32 **, 0x144);
        *temp_r5_10 |= lbl_8035B9A0;
        temp_r5_11 = M2C_FIELD(arg0, s32 **, 0x130);
        *temp_r5_11 |= lbl_8035B9A0;
        temp_r4 = M2C_FIELD(arg0, s32 **, 0x148);
        *temp_r4 |= lbl_8035B9A0;
        return;
    }
    temp_r4_2 = M2C_FIELD(arg0, s32 **, 0x11C);
    *temp_r4_2 &= 0xFFFFF7FF;
    temp_r4_3 = M2C_FIELD(arg0, s32 **, 0x134);
    *temp_r4_3 &= 0xFFFFF7FF;
    temp_r4_4 = M2C_FIELD(arg0, s32 **, 0x120);
    *temp_r4_4 &= 0xFFFFF7FF;
    temp_r4_5 = M2C_FIELD(arg0, s32 **, 0x138);
    *temp_r4_5 &= 0xFFFFF7FF;
    temp_r4_6 = M2C_FIELD(arg0, s32 **, 0x124);
    *temp_r4_6 &= 0xFFFFF7FF;
    temp_r4_7 = M2C_FIELD(arg0, s32 **, 0x13C);
    *temp_r4_7 &= 0xFFFFF7FF;
    temp_r4_8 = M2C_FIELD(arg0, s32 **, 0x128);
    *temp_r4_8 &= 0xFFFFF7FF;
    temp_r4_9 = M2C_FIELD(arg0, s32 **, 0x140);
    *temp_r4_9 &= 0xFFFFF7FF;
    temp_r4_10 = M2C_FIELD(arg0, s32 **, 0x12C);
    *temp_r4_10 &= 0xFFFFF7FF;
    temp_r4_11 = M2C_FIELD(arg0, s32 **, 0x144);
    *temp_r4_11 &= 0xFFFFF7FF;
    temp_r4_12 = M2C_FIELD(arg0, s32 **, 0x130);
    *temp_r4_12 &= 0xFFFFF7FF;
    temp_r3 = M2C_FIELD(arg0, s32 **, 0x148);
    *temp_r3 &= 0xFFFFF7FF;
}
