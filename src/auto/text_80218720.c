/* Functions from 0x80218720 to 0x802194C0, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B228;
void fn_80218720(void *arg0) {
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

