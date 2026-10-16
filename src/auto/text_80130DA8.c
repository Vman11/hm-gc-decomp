/* Functions from 0x80130DA8 to 0x80130E40, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802E4910[];
extern f32 lbl_803596E0[];
extern s32 lbl_8035ABF8;
extern f32 lbl_80363F84;

static inline void fn_80130DA8_init(void *arg0) {
    M2C_FIELD(arg0, s32 *, 20) = 0;
    M2C_FIELD(arg0, s32 *, 24) = 0;
    M2C_FIELD(arg0, s32 *, 28) = 0;
    if (lbl_8035ABF8 != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0x2000;
    } else {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    M2C_FIELD(arg0, s8 *, 52) = 0;
    M2C_FIELD(arg0, s32 *, 36) = 0;
    M2C_FIELD(arg0, f32 *, 40) = lbl_803596E0[0];
    M2C_FIELD(arg0, s8 *, 48) = 0;
    M2C_FIELD(arg0, s8 *, 53) = 0;
    M2C_FIELD(arg0, s8 *, 54) = 0;
    M2C_FIELD(arg0, s8 *, 55) = 0;
    M2C_FIELD(arg0, s8 *, 49) = 2;
    M2C_FIELD(arg0, s8 *, 56) = 0;
    M2C_FIELD(arg0, s8 *, 57) = 0;
    M2C_FIELD(arg0, s8 *, 58) = 0;
    M2C_FIELD(arg0, s8 *, 59) = 0;
    M2C_FIELD(arg0, s32 *, 32) = -1;
    M2C_FIELD(arg0, f32 *, 16) = M2C_FIELD(arg0, f32 *, 60) = lbl_80363F84;
    M2C_FIELD(arg0, s32 *, 64) = 0;
}

extern u8 lbl_802E4910[];
extern f32 lbl_803596E0[];
extern s32 lbl_8035ABF8;
extern f32 lbl_80363F84;
void fn_80130DA8(void *arg0) {
    M2C_FIELD(arg0, void **, 0x44) = lbl_802E4910;
    M2C_FIELD(arg0, s32 *, 20) = 0;
    M2C_FIELD(arg0, s32 *, 24) = 0;
    M2C_FIELD(arg0, s32 *, 28) = 0;
    if (lbl_8035ABF8 != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0x2000;
    } else {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    M2C_FIELD(arg0, s8 *, 52) = 0;
    M2C_FIELD(arg0, s32 *, 36) = 0;
    M2C_FIELD(arg0, f32 *, 40) = lbl_803596E0[0];
    M2C_FIELD(arg0, s8 *, 48) = 0;
    M2C_FIELD(arg0, s8 *, 53) = 0;
    M2C_FIELD(arg0, s8 *, 54) = 0;
    M2C_FIELD(arg0, s8 *, 55) = 0;
    M2C_FIELD(arg0, s8 *, 49) = 2;
    M2C_FIELD(arg0, s8 *, 56) = 0;
    M2C_FIELD(arg0, s8 *, 57) = 0;
    M2C_FIELD(arg0, s8 *, 58) = 0;
    M2C_FIELD(arg0, s8 *, 59) = 0;
    M2C_FIELD(arg0, s32 *, 32) = -1;
    M2C_FIELD(arg0, f32 *, 16) = M2C_FIELD(arg0, f32 *, 60) = lbl_80363F84;
    M2C_FIELD(arg0, s32 *, 64) = 0;
}
