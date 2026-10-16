/* Functions from 0x8018467C to 0x80184A24, found by decomp-toolkit. */
#include "common.h"

void fn_8018467C(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f7_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;

    temp_f7 = M2C_FIELD(arg0, f32 *, 0x88);
    temp_f7 += M2C_FIELD(arg0, f32 *, 0xF8);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x8C);
    temp_f0 += M2C_FIELD(arg0, f32 *, 0xFC);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x90);
    temp_f1 += M2C_FIELD(arg0, f32 *, 0x100);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x94);
    temp_f2 += M2C_FIELD(arg0, f32 *, 0x104);
    if (M2C_FIELD(arg0, s32 *, 0xC) & 0x80) {
        temp_f9 = M2C_FIELD(arg0, f32 *, 0x144);
        temp_f8 = M2C_FIELD(arg0, f32 *, 0x164);
        M2C_FIELD(arg0, f32 *, 0x118) = (f32) ((temp_f7 + (((temp_f8 * M2C_FIELD(arg0, f32 *, 0x134)) - (temp_f9 * M2C_FIELD(arg0, f32 *, 0x154))) / (temp_f9 - temp_f8))) / (temp_f9 * temp_f8));
        temp_f6 = M2C_FIELD(arg0, f32 *, 0x144);
        M2C_FIELD(arg0, f32 *, 0x108) = (f32) (-((M2C_FIELD(arg0, f32 *, 0x118) * (temp_f6 * temp_f6)) - (M2C_FIELD(arg0, f32 *, 0x134) - temp_f7)) / temp_f6);
        temp_f8_2 = M2C_FIELD(arg0, f32 *, 0x148);
        temp_f7_2 = M2C_FIELD(arg0, f32 *, 0x168);
        M2C_FIELD(arg0, f32 *, 0x11C) = (f32) ((temp_f0 + (((temp_f7_2 * M2C_FIELD(arg0, f32 *, 0x138)) - (temp_f8_2 * M2C_FIELD(arg0, f32 *, 0x158))) / (temp_f8_2 - temp_f7_2))) / (temp_f8_2 * temp_f7_2));
        temp_f6_2 = M2C_FIELD(arg0, f32 *, 0x148);
        M2C_FIELD(arg0, f32 *, 0x10C) = (f32) (-((M2C_FIELD(arg0, f32 *, 0x11C) * (temp_f6_2 * temp_f6_2)) - (M2C_FIELD(arg0, f32 *, 0x138) - temp_f0)) / temp_f6_2);
        temp_f7_3 = M2C_FIELD(arg0, f32 *, 0x14C);
        temp_f6_3 = M2C_FIELD(arg0, f32 *, 0x16C);
        M2C_FIELD(arg0, f32 *, 0x120) = (f32) ((temp_f1 + (((temp_f6_3 * M2C_FIELD(arg0, f32 *, 0x13C)) - (temp_f7_3 * M2C_FIELD(arg0, f32 *, 0x15C))) / (temp_f7_3 - temp_f6_3))) / (temp_f7_3 * temp_f6_3));
        temp_f5 = M2C_FIELD(arg0, f32 *, 0x14C);
        M2C_FIELD(arg0, f32 *, 0x110) = (f32) (-((M2C_FIELD(arg0, f32 *, 0x120) * (temp_f5 * temp_f5)) - (M2C_FIELD(arg0, f32 *, 0x13C) - temp_f1)) / temp_f5);
        temp_f6_4 = M2C_FIELD(arg0, f32 *, 0x150);
        temp_f5_2 = M2C_FIELD(arg0, f32 *, 0x170);
        M2C_FIELD(arg0, f32 *, 0x124) = (f32) ((temp_f2 + (((temp_f5_2 * M2C_FIELD(arg0, f32 *, 0x140)) - (temp_f6_4 * M2C_FIELD(arg0, f32 *, 0x160))) / (temp_f6_4 - temp_f5_2))) / (temp_f6_4 * temp_f5_2));
        temp_f4 = M2C_FIELD(arg0, f32 *, 0x150);
        M2C_FIELD(arg0, f32 *, 0x114) = (f32) (-((M2C_FIELD(arg0, f32 *, 0x124) * (temp_f4 * temp_f4)) - (M2C_FIELD(arg0, f32 *, 0x140) - temp_f2)) / temp_f4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x108) = (f32) ((M2C_FIELD(arg0, f32 *, 0x134) - temp_f7) / M2C_FIELD(arg0, f32 *, 0x144));
    M2C_FIELD(arg0, f32 *, 0x10C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x138) - temp_f0) / M2C_FIELD(arg0, f32 *, 0x148));
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) ((M2C_FIELD(arg0, f32 *, 0x13C) - temp_f1) / M2C_FIELD(arg0, f32 *, 0x14C));
    M2C_FIELD(arg0, f32 *, 0x114) = (f32) ((M2C_FIELD(arg0, f32 *, 0x140) - temp_f2) / M2C_FIELD(arg0, f32 *, 0x150));
}

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
