/* Functions from 0x8016C9E0 to 0x8016CC50, found by decomp-toolkit. */
#include "common.h"

s32 fn_8016C9E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x33C);
}

s32 fn_8016C9E8(s32 arg0) {
    return arg0 + 0x2998;
}

s32 fn_8016C9F0(s32 arg0) {
    return arg0 + 0x27B8;
}

void fn_8016C9F8(u8 *arg0, u8 *arg1) {
    u8 **pp = (u8 **)(arg0 + 0x1F40);
    u8 *p = *pp;
    while (p != NULL) {
        if (p == arg1) {
            *pp = *(u8 **)(arg1 + 0x20);
            return;
        }
        pp = (u8 **)(p + 0x20);
        p = *pp;
    }
}

void fn_8016CA28(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x20) = (void *) M2C_FIELD(arg0, void **, 0x1F40);
    M2C_FIELD(arg0, void **, 0x1F40) = arg1;
}

void fn_8016CA68(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x20) = (void *) M2C_FIELD(arg0, void **, 0x1F3C);
    M2C_FIELD(arg0, void **, 0x1F3C) = arg1;
}

void fn_8016CAA8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x30) = (void *) M2C_FIELD(arg0, void **, 0x1F38);
    M2C_FIELD(arg0, void **, 0x1F38) = arg1;
}

void fn_8016CAE8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x38) = (void *) M2C_FIELD(arg0, void **, 0x1F34);
    M2C_FIELD(arg0, void **, 0x1F34) = arg1;
}

void fn_8016CB28(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x44) = (void *) M2C_FIELD(arg0, void **, 0x1F30);
    M2C_FIELD(arg0, void **, 0x1F30) = arg1;
}

void fn_8016CB68(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x1F2C);
    M2C_FIELD(arg0, void **, 0x1F2C) = arg1;
}

void fn_8016CBA8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x1F28);
    M2C_FIELD(arg0, void **, 0x1F28) = arg1;
}

void fn_8016CBE8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x1AFC) = (void *) M2C_FIELD(arg0, void **, 0x1F24);
    M2C_FIELD(arg0, void **, 0x1F24) = arg1;
}

void fn_8016CC28(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x54) = (void *) M2C_FIELD(arg0, void **, 0x1F20);
    M2C_FIELD(arg0, void **, 0x1F20) = arg1;
}

s32 fn_8016CC38(s32 arg0) {
    return arg0 + 0x410;
}

s32 fn_8016CC40(s32 arg0) {
    return arg0 + 0x3B8;
}

s32 fn_8016CC48(s32 arg0) {
    return arg0 + 0x348;
}

