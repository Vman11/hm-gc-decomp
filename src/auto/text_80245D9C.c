/* Functions from 0x80245D9C to 0x80245F9C, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80366250;
void fn_80245D9C(void *arg0, u32 arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    f32 *p;

    if (arg2 != NULL && (M2C_FIELD(arg0, u16 *, 0x4) & 4)) {
        p = (f32 *)(M2C_FIELD(arg0, u8 **, 0x1C) + arg1 * 0xC);
        arg2[0] = p[0];
        arg2[1] = p[1];
        arg2[2] = p[2];
    }
    if (arg3 != NULL && (M2C_FIELD(arg0, u16 *, 0x4) & 8)) {
        p = (f32 *)(M2C_FIELD(arg0, u8 **, 0x20) + arg1 * 0xC);
        arg3[0] = p[0];
        arg3[1] = p[1];
        arg3[2] = p[2];
    }
    if (arg4 != NULL && (M2C_FIELD(arg0, u16 *, 0x4) & 0x10)) {
        *arg4 = M2C_FIELD(arg0, f32 **, 0x24)[arg1];
    }
    if (arg5 != NULL && (M2C_FIELD(arg0, u16 *, 0x4) & 0x20)) {
        *arg5 = M2C_FIELD(arg0, f32 **, 0x28)[arg1];
    }
}

void fn_80245E58(void *arg0, u32 arg1, f32 *arg2) {
    u32 count = M2C_FIELD(arg0, u32 *, 0xC);
    f32 *p;

    if (count == 0 && arg1 == 0) {
        arg2[0] = lbl_80366250;
        arg2[1] = lbl_80366250;
        arg2[2] = lbl_80366250;
        return;
    }
    if (arg1 == 0) {
        p = M2C_FIELD(arg0, f32 **, 0x18);
        arg2[0] = p[0];
        arg2[1] = p[1];
        arg2[2] = p[2];
        return;
    }
    if (arg1 > count) {
        p = (f32 *)(M2C_FIELD(arg0, u8 **, 0x18) + count * 0xC);
        arg2[0] = p[0];
        arg2[1] = p[1];
        arg2[2] = p[2];
        return;
    }
    p = (f32 *)(M2C_FIELD(arg0, u8 **, 0x18) + arg1 * 0xC);
    arg2[0] = p[0];
    arg2[1] = p[1];
    arg2[2] = p[2];
}

s32 fn_80245F8C(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x18) + (arg1 * 0xC);
}
