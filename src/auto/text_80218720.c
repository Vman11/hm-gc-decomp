/* Functions from 0x80218720 to 0x802194C0, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B228;
void __ct__9C80218720Fv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
    M2C_FIELD(arg0, s16 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s16 *, 0x1B2) = 0;
}

void fn_80218750(s32 arg0) {
    lbl_8035B228 = arg0;
}

void fn_802194B8(void *arg0, s32 arg1) { *(s32 *)((char *)arg0 + 0x18) = arg1; }

asm void fn_80218758(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f) {
    nofralloc
    slwi r4, r4, 8
    add r4, r4, r3
    slwi r3, r4, 16
    add r3, r3, r4
    mtspr 916, r3
    slwi r6, r6, 8
    add r6, r6, r5
    slwi r5, r6, 16
    add r5, r5, r6
    mtspr 917, r5
    slwi r8, r8, 8
    add r8, r8, r7
    slwi r7, r8, 16
    add r7, r7, r8
    mtspr 918, r7
    blr
}
