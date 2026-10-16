/* Functions from 0x800379AC to 0x80037E64, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_8035BFC0;

void fn_800379AC(void) {

}

void fn_800379B0(void) {

}

void fn_800379B4(void *arg0) {
    s32 temp = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 8) = lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0xC) = lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x10) = lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x14) = lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x18) = lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_8035BFC0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 4) = temp;
}

void fn_80037A34(void) {

}

f32 fn_80037A38(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0x5E: return M2C_FIELD(arg0, f32 *, 8);
    case 0x5F: return M2C_FIELD(arg0, f32 *, 0xC);
    case 0x60: return M2C_FIELD(arg0, f32 *, 0x10);
    case 0x61: return M2C_FIELD(arg0, f32 *, 0x14);
    case 0x62: return M2C_FIELD(arg0, f32 *, 0x18);
    case 0x63: return M2C_FIELD(arg0, f32 *, 0x1C);
    case 0x64: return M2C_FIELD(arg0, f32 *, 0x20);
    case 0x65: return M2C_FIELD(arg0, f32 *, 0x24);
    default: return lbl_8035BFC0;
    }
}

s32 fn_80037AA4(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0x67: return M2C_FIELD(arg0, s32 *, 0x28);
    case 0x68: return M2C_FIELD(arg0, s32 *, 0x2C);
    case 0x69: return M2C_FIELD(arg0, s32 *, 0x30);
    case 0x6A: return M2C_FIELD(arg0, s32 *, 0x34);
    case 0x6B: return M2C_FIELD(arg0, s32 *, 0x38);
    case 0x6C: return M2C_FIELD(arg0, s32 *, 0x3C);
    case 0x6D: return M2C_FIELD(arg0, s32 *, 0x40);
    case 0x6E: return M2C_FIELD(arg0, s32 *, 0x44);
    case 0x6F: return M2C_FIELD(arg0, s32 *, 0x48);
    case 0x70: return M2C_FIELD(arg0, s32 *, 0x4C);
    case 0x71: return M2C_FIELD(arg0, s32 *, 0x50);
    default: return 0;
    }
}

void fn_80037B28(void *arg0, void *arg1) {
    switch (M2C_FIELD(arg1, s32 *, 0xC)) {
    case 0x5E: M2C_FIELD(arg0, f32 *, 8) = M2C_FIELD(arg1, f32 *, 0x10); break;
    case 0x5F: M2C_FIELD(arg0, f32 *, 0xC) = M2C_FIELD(arg1, f32 *, 0x10); break;
    case 0x60: M2C_FIELD(arg0, f32 *, 0x10) = M2C_FIELD(arg1, f32 *, 0x10); break;
    case 0x61: M2C_FIELD(arg0, f32 *, 0x14) = M2C_FIELD(arg1, f32 *, 0x10); break;
    case 0x62: M2C_FIELD(arg0, f32 *, 0x20) = M2C_FIELD(arg1, f32 *, 0x10); break;
    case 0x63: M2C_FIELD(arg0, f32 *, 0x24) = M2C_FIELD(arg1, f32 *, 0x10); break;
    case 0x64:
        if (M2C_FIELD(arg1, f32 *, 0x10) > 0.0) {
            if (M2C_FIELD(arg0, s32 *, 0x54) == 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = 1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x34) = 0;
            M2C_FIELD(arg0, s32 *, 0x54) = 0;
        }
        break;
    case 0x65:
    case 0x66:
        break;
    }
}

void fn_80037BD0(void *arg0, void *arg1) {
    switch (M2C_FIELD(arg1, s32 *, 0xC)) {
    case 0x67: M2C_FIELD(arg0, s32 *, 0x28) = 0; break;
    case 0x68: M2C_FIELD(arg0, s32 *, 0x2C) = 0; break;
    case 0x69: M2C_FIELD(arg0, s32 *, 0x30) = 0; break;
    case 0x6A: M2C_FIELD(arg0, s32 *, 0x34) = 0; break;
    case 0x6B: M2C_FIELD(arg0, s32 *, 0x38) = 0; break;
    case 0x6C: M2C_FIELD(arg0, s32 *, 0x3C) = 0; break;
    case 0x6D: M2C_FIELD(arg0, s32 *, 0x40) = 0; break;
    case 0x6E: M2C_FIELD(arg0, s32 *, 0x44) = 0; break;
    case 0x6F: M2C_FIELD(arg0, s32 *, 0x48) = 0; break;
    case 0x70: M2C_FIELD(arg0, s32 *, 0x4C) = 0; break;
    case 0x71: M2C_FIELD(arg0, s32 *, 0x50) = 0; break;
    }
}

void fn_80037C7C(void *arg0, void *arg1) {
    switch (M2C_FIELD(arg1, s32 *, 0xC)) {
    case 0x67: M2C_FIELD(arg0, s32 *, 0x28) = 1; break;
    case 0x68: M2C_FIELD(arg0, s32 *, 0x2C) = 1; break;
    case 0x69: M2C_FIELD(arg0, s32 *, 0x30) = 1; break;
    case 0x6A:
        M2C_FIELD(arg0, s32 *, 0x54) = 1;
        M2C_FIELD(arg0, s32 *, 0x34) = 1;
        break;
    case 0x6B: M2C_FIELD(arg0, s32 *, 0x38) = 1; break;
    case 0x6C: M2C_FIELD(arg0, s32 *, 0x3C) = 1; break;
    case 0x6D: M2C_FIELD(arg0, s32 *, 0x40) = 1; break;
    case 0x6E: M2C_FIELD(arg0, s32 *, 0x44) = 1; break;
    case 0x6F: M2C_FIELD(arg0, s32 *, 0x48) = 1; break;
    case 0x70: M2C_FIELD(arg0, s32 *, 0x4C) = 1; break;
    case 0x71: M2C_FIELD(arg0, s32 *, 0x50) = 1; break;
    }
}

void fn_80037D2C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}

void fn_80037D60(void *arg0) {
    extern f32 lbl_8035BFC0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}

void fn_80037DD8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_8035BFC0;
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_8035BFC0;
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8035BFC0;
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8035BFC0;
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8035BFC0;
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8035BFC0;
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_8035BFC0;
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_8035BFC0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 1;
}

