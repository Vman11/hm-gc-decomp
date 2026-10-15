/* Functions from 0x80038DDC to 0x80039060, found by decomp-toolkit. */
#include "common.h"

void fn_80038DDC(void) {

}

void fn_80038DE0(void) {

}

void fn_80038DE4(void *arg0) {
    extern f32 lbl_8035C020;
    s32 temp = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 4) = temp;
}

void fn_80038E40(void) {

}

void fn_80038E44(void *arg0, void *arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg1, s32 *, 0xC);
    switch (temp_r0) {                              /* irregular */
    case 0x3A:
        M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
        return;
    case 0x3B:
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
        return;
    case 0x39:
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
        return;
    case 0x3C:
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
        return;
    case 0x3D:
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
        return;
    case 0x3E:
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
        return;
    }
}

void fn_80038EC4(void *arg0, void *arg1) {
    switch (M2C_FIELD(arg1, s32 *, 0xC)) {
    case 0x3F: M2C_FIELD(arg0, s32 *, 0x20) = 0; break;
    case 0x42: M2C_FIELD(arg0, s32 *, 0x24) = 0; break;
    case 0x43: M2C_FIELD(arg0, s32 *, 0x28) = 0; break;
    case 0x44: M2C_FIELD(arg0, s32 *, 0x2C) = 0; break;
    case 0x45: M2C_FIELD(arg0, s32 *, 0x30) = 0; break;
    case 0x46: M2C_FIELD(arg0, s32 *, 0x34) = 0; break;
    }
}

void fn_80038F34(void *arg0, void *arg1) {
    switch (M2C_FIELD(arg1, s32 *, 0xC)) {
    case 0x3F: M2C_FIELD(arg0, s32 *, 0x20) = 1; break;
    case 0x42: M2C_FIELD(arg0, s32 *, 0x24) = 1; break;
    case 0x43: M2C_FIELD(arg0, s32 *, 0x28) = 1; break;
    case 0x44: M2C_FIELD(arg0, s32 *, 0x2C) = 1; break;
    case 0x45: M2C_FIELD(arg0, s32 *, 0x30) = 1; break;
    case 0x46: M2C_FIELD(arg0, s32 *, 0x34) = 1; break;
    }
}

void fn_80038FA4(void *arg0) {
    extern f32 lbl_8035C020;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8035C020;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}

void fn_80038FF8(void *arg0) {
    extern f32 lbl_8035C020;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_8035C020;
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_8035C020;
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8035C020;
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8035C020;
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8035C020;
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8035C020;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 1;
}

