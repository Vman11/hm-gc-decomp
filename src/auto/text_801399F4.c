/* Functions from 0x801399F4 to 0x80139B38, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_803641D0;
extern f32 lbl_803641D4;
void fn_801399F4(void *arg0, s32 arg1, void *arg2, void *arg3) {
    f32 *src;
    u32 i;

    M2C_FIELD(arg2, u32 *, 0x0) = M2C_FIELD(arg0, u32 *, 0x10);
    M2C_FIELD(arg2, u32 *, 0x4) = M2C_FIELD(arg0, u32 *, 0x14);
    if (M2C_FIELD(arg0, u32 *, 0x10) & 0x40) {
        src = (f32 *)(M2C_FIELD(arg3, u8 **, 0x0) + arg1 * M2C_FIELD(arg3, s32 *, 0x4));
        M2C_FIELD(arg2, f32 *, 0x8) = src[0];
        M2C_FIELD(arg2, f32 *, 0xC) = src[1];
        M2C_FIELD(arg2, f32 *, 0x10) = lbl_803641D0;
        M2C_FIELD(arg2, f32 *, 0x14) = lbl_803641D4;
    } else if (M2C_FIELD(arg0, u32 *, 0x10) & 0x80) {
        src = (f32 *)(M2C_FIELD(arg3, u8 **, 0x0) + arg1 * M2C_FIELD(arg3, s32 *, 0x4));
        M2C_FIELD(arg2, f32 *, 0x8) = src[0];
        M2C_FIELD(arg2, f32 *, 0xC) = src[1];
        M2C_FIELD(arg2, f32 *, 0x10) = src[2];
        M2C_FIELD(arg2, f32 *, 0x14) = lbl_803641D4;
    } else if (M2C_FIELD(arg0, u32 *, 0x10) & 0x100) {
        src = (f32 *)(M2C_FIELD(arg3, u8 **, 0x0) + arg1 * M2C_FIELD(arg3, s32 *, 0x4));
        M2C_FIELD(arg2, f32 *, 0x8) = src[0];
        M2C_FIELD(arg2, f32 *, 0xC) = src[1];
        M2C_FIELD(arg2, f32 *, 0x10) = src[2];
        M2C_FIELD(arg2, f32 *, 0x14) = src[3];
    }
    if (M2C_FIELD(arg0, u32 *, 0x10) & 0x200) {
        src = (f32 *)(M2C_FIELD(arg3, u8 **, 0x8) + arg1 * M2C_FIELD(arg3, s32 *, 0xC));
        for (i = 0; i < M2C_FIELD(arg0, u32 *, 0x14); i++) {
            M2C_FIELD((f32 *)arg2 + i, f32 *, 0x18) = src[i];
        }
    }
    if (M2C_FIELD(arg0, u32 *, 0x10) & 0x800) {
        src = (f32 *)(M2C_FIELD(arg3, u8 **, 0x18) + arg1 * M2C_FIELD(arg3, s32 *, 0x1C));
        M2C_FIELD(arg2, f32 *, 0x28) = src[0];
        M2C_FIELD(arg2, f32 *, 0x2C) = src[1];
        M2C_FIELD(arg2, f32 *, 0x30) = src[2];
    }
}
