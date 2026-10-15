/* Functions from 0x8015C310 to 0x8015C40C, found by decomp-toolkit. */
#include "common.h"

void fn_8015C38C(void *arg0) {
    extern u16 lbl_803645E8;
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | lbl_803645E8);
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) & 0xFFFFFFF1);
}

void fn_8015C3AC(void *arg0, s32 *arg1, s32 arg2) {
    extern u16 lbl_803645EA;
    extern u16 lbl_803645EC;
    extern u16 lbl_803645EE;
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | lbl_803645EA);
    if (arg2 & 1) {
        M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | lbl_803645EC);
    } else if (arg2 & 2) {
        M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | lbl_803645EE);
    } else {
        M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | 0xC);
    }
    *arg1 = M2C_FIELD(arg0, s32 *, 0x18);
}

