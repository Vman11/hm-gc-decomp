/* Functions from 0x8018467C to 0x80184A24, found by decomp-toolkit. */
#include "common.h"

void fn_80184850(void *arg0) {
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f5_3;
    f32 temp_f5_4;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;

    if (M2C_FIELD(arg0, s32 *, 0xC) & 0x10) {
        temp_f6 = M2C_FIELD(arg0, f32 *, 0xC8);
        temp_f5 = M2C_FIELD(arg0, f32 *, 0xE8);
        M2C_FIELD(arg0, f32 *, 0xA8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x88) + (((temp_f5 * M2C_FIELD(arg0, f32 *, 0xB8)) - (temp_f6 * M2C_FIELD(arg0, f32 *, 0xD8))) / (temp_f6 - temp_f5))) / (temp_f6 * temp_f5));
        temp_f4 = M2C_FIELD(arg0, f32 *, 0xC8);
        M2C_FIELD(arg0, f32 *, 0x98) = (f32) (-((M2C_FIELD(arg0, f32 *, 0xA8) * (temp_f4 * temp_f4)) - (M2C_FIELD(arg0, f32 *, 0xB8) - M2C_FIELD(arg0, f32 *, 0x88))) / temp_f4);
        temp_f6_2 = M2C_FIELD(arg0, f32 *, 0xCC);
        temp_f5_2 = M2C_FIELD(arg0, f32 *, 0xEC);
        M2C_FIELD(arg0, f32 *, 0xAC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x8C) + (((temp_f5_2 * M2C_FIELD(arg0, f32 *, 0xBC)) - (temp_f6_2 * M2C_FIELD(arg0, f32 *, 0xDC))) / (temp_f6_2 - temp_f5_2))) / (temp_f6_2 * temp_f5_2));
        temp_f4_2 = M2C_FIELD(arg0, f32 *, 0xCC);
        M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (-((M2C_FIELD(arg0, f32 *, 0xAC) * (temp_f4_2 * temp_f4_2)) - (M2C_FIELD(arg0, f32 *, 0xBC) - M2C_FIELD(arg0, f32 *, 0x8C))) / temp_f4_2);
        temp_f6_3 = M2C_FIELD(arg0, f32 *, 0xD0);
        temp_f5_3 = M2C_FIELD(arg0, f32 *, 0xF0);
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x90) + (((temp_f5_3 * M2C_FIELD(arg0, f32 *, 0xC0)) - (temp_f6_3 * M2C_FIELD(arg0, f32 *, 0xE0))) / (temp_f6_3 - temp_f5_3))) / (temp_f6_3 * temp_f5_3));
        temp_f4_3 = M2C_FIELD(arg0, f32 *, 0xD0);
        M2C_FIELD(arg0, f32 *, 0xA0) = (f32) (-((M2C_FIELD(arg0, f32 *, 0xB0) * (temp_f4_3 * temp_f4_3)) - (M2C_FIELD(arg0, f32 *, 0xC0) - M2C_FIELD(arg0, f32 *, 0x90))) / temp_f4_3);
        temp_f6_4 = M2C_FIELD(arg0, f32 *, 0xD4);
        temp_f5_4 = M2C_FIELD(arg0, f32 *, 0xF4);
        M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((M2C_FIELD(arg0, f32 *, 0x94) + (((temp_f5_4 * M2C_FIELD(arg0, f32 *, 0xC4)) - (temp_f6_4 * M2C_FIELD(arg0, f32 *, 0xE4))) / (temp_f6_4 - temp_f5_4))) / (temp_f6_4 * temp_f5_4));
        temp_f4_4 = M2C_FIELD(arg0, f32 *, 0xD4);
        M2C_FIELD(arg0, f32 *, 0xA4) = (f32) (-((M2C_FIELD(arg0, f32 *, 0xB4) * (temp_f4_4 * temp_f4_4)) - (M2C_FIELD(arg0, f32 *, 0xC4) - M2C_FIELD(arg0, f32 *, 0x94))) / temp_f4_4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) ((M2C_FIELD(arg0, f32 *, 0xB8) - M2C_FIELD(arg0, f32 *, 0x88)) / M2C_FIELD(arg0, f32 *, 0xC8));
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) ((M2C_FIELD(arg0, f32 *, 0xBC) - M2C_FIELD(arg0, f32 *, 0x8C)) / M2C_FIELD(arg0, f32 *, 0xCC));
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) ((M2C_FIELD(arg0, f32 *, 0xC0) - M2C_FIELD(arg0, f32 *, 0x90)) / M2C_FIELD(arg0, f32 *, 0xD0));
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) ((M2C_FIELD(arg0, f32 *, 0xC4) - M2C_FIELD(arg0, f32 *, 0x94)) / M2C_FIELD(arg0, f32 *, 0xD4));
}
