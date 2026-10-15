/* Functions from 0x800377B4 to 0x800378AC, found by decomp-toolkit. */
#include "common.h"

void fn_800377B4(void) {

}

void fn_800377B8(void) {

}

void fn_800377BC(void) {

}

void fn_800377C0(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = temp_r4;
}

void fn_800377DC(void) {

}

s32 fn_800377E0(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0x7D:
        return M2C_FIELD(arg0, s32 *, 8);
    case 0x7E:
        return M2C_FIELD(arg0, s32 *, 0xC);
    default:
        return 0;
    }
}

void fn_80037870(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void fn_80037884(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 1;
}

