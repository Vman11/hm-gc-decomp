/* Functions from 0x801753B8 to 0x801756D8, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80364750;
extern s32 lbl_80364754;
extern s32 lbl_80364758;
extern s32 lbl_8036475C;
extern s32 lbl_80364760;
extern s32 lbl_80364764;
extern s32 lbl_80364768;
extern s32 lbl_8036476C;
void fn_801753B8(void *arg0, void *arg1, s32 arg2, s8 arg3) {
    s32 temp_r4;
    s32 temp_r7;
    u32 temp_r0;

    if (!(M2C_FIELD(arg1, s32 *, 8) & 0x30)) {
        M2C_FIELD(arg0, s32 *, 0x1C) |= lbl_80364750;
    }
    temp_r7 = M2C_FIELD(arg1, s32 *, 8);
    if (temp_r7 & 0x200) {
        M2C_FIELD(arg0, s32 *, 0x1C) |= lbl_80364754;
    } else if (temp_r7 & 0x1C00) {
        if (temp_r7 & 0x400) {
            M2C_FIELD(arg0, s32 *, 0x1C) |= lbl_80364758;
        } else if (temp_r7 & 0x800) {
            M2C_FIELD(arg0, s32 *, 0x1C) |= lbl_8036475C;
        } else if (temp_r7 & 0x1000) {
            M2C_FIELD(arg0, s32 *, 0x1C) |= lbl_80364760;
        }
        M2C_FIELD(arg0, s8 *, 0x20) = M2C_FIELD(arg1, u16 *, 0xE);
    }
    if (M2C_FIELD(arg1, s32 *, 8) & 0x1C0) {
        M2C_FIELD(arg0, s8 *, 0x22) = 0;
        temp_r0 = M2C_FIELD(arg1, s32 *, 8) & 0x1C0;
        if (temp_r0 == 0x100) {
            M2C_FIELD(arg0, s32 *, 0x1C) |= lbl_80364764;
        } else if (temp_r0 == 0x140) {
            M2C_FIELD(arg0, s32 *, 0x1C) |= 0x110;
        } else if (temp_r0 == 0xC0) {
            M2C_FIELD(arg0, s32 *, 0x1C) |= lbl_80364768;
        } else if (temp_r0 == 0x80) {
            M2C_FIELD(arg0, s32 *, 0x1C) |= 0x140;
        } else if (temp_r0 == 0x40) {
            M2C_FIELD(arg0, s32 *, 0x1C) |= lbl_8036476C;
        }
    } else {
        M2C_FIELD(arg0, s8 *, 0x22) = M2C_FIELD(arg1, u16 *, 0xC);
    }
    temp_r4 = M2C_FIELD(arg1, s32 *, 8);
    if (temp_r4 & 0x10000) {
        if (temp_r4 & 1) {
            M2C_FIELD(arg0, s32 *, 0x28) = 5;
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x28) = 4;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
    } else if (temp_r4 & 1) {
        M2C_FIELD(arg0, s32 *, 0x28) = 3;
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x28) = 2;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s8 *, 0x23) = arg3;
}

void fn_80175570(u8 *__restrict arg0, u8 *__restrict arg1) {
    *(s32 *)(arg0 + 0) = *(s32 *)(arg1 + 0);
    *(s32 *)(arg0 + 0x1C) = *(s32 *)(arg1 + 0x1C);
    arg0[0x20] = arg1[0x20];
    arg0[0x21] = arg1[0x21];
    arg0[0x22] = arg1[0x22];
    arg0[0x23] = arg1[0x23];
    arg0[4] = arg1[4];
    arg0[5] = arg1[5];
    arg0[6] = arg1[6];
    arg0[7] = arg1[7];
    arg0[8] = arg1[8];
    arg0[9] = arg1[9];
    arg0[10] = arg1[10];
    arg0[11] = arg1[11];
    arg0[12] = arg1[12];
    arg0[13] = arg1[13];
    arg0[14] = arg1[14];
    arg0[15] = arg1[15];
    arg0[16] = arg1[16];
    arg0[17] = arg1[17];
    arg0[18] = arg1[18];
    arg0[19] = arg1[19];
    *(s32 *)(arg0 + 0x28) = *(s32 *)(arg1 + 0x28);
    *(s32 *)(arg0 + 0x2C) = *(s32 *)(arg1 + 0x2C);
}

void fn_80175634(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x21) = arg1;
}

void fn_8017563C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, u8 *, 4) = 0xF;
    M2C_FIELD(arg0, u8 *, 5) = 0xF;
    M2C_FIELD(arg0, u8 *, 6) = 0xF;
    M2C_FIELD(arg0, u8 *, 7) = 0xF;
    M2C_FIELD(arg0, u8 *, 8) = 0xFF;
    M2C_FIELD(arg0, u8 *, 9) = 0;
    M2C_FIELD(arg0, u8 *, 0xA) = 0;
    M2C_FIELD(arg0, u8 *, 0xB) = 1;
    M2C_FIELD(arg0, u8 *, 0xC) = 7;
    M2C_FIELD(arg0, u8 *, 0xD) = 7;
    M2C_FIELD(arg0, u8 *, 0xE) = 7;
    M2C_FIELD(arg0, u8 *, 0xF) = 7;
    M2C_FIELD(arg0, u8 *, 0x10) = 0xFF;
    M2C_FIELD(arg0, u8 *, 0x11) = 0;
    M2C_FIELD(arg0, u8 *, 0x12) = 0;
    M2C_FIELD(arg0, u8 *, 0x13) = 1;
    M2C_FIELD(arg0, u8 *, 0x14) = 0;
    M2C_FIELD(arg0, u8 *, 0x15) = 0;
    M2C_FIELD(arg0, u8 *, 0x16) = 0;
    M2C_FIELD(arg0, u8 *, 0x17) = 0;
    M2C_FIELD(arg0, u8 *, 0x18) = 0;
    M2C_FIELD(arg0, u8 *, 0x19) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u8 *, 0x20) = 0;
    M2C_FIELD(arg0, u8 *, 0x21) = 0;
    M2C_FIELD(arg0, u8 *, 0x22) = 0;
    M2C_FIELD(arg0, u8 *, 0x23) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 4;
    M2C_FIELD(arg0, s32 *, 0x28) = 5;
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
}

