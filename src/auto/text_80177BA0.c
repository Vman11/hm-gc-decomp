/* Functions from 0x80177BA0 to 0x80177BD4, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x, y, z;
} Vec3f;

typedef struct {
    f32 x, y, z, w;
} Vec4f;

extern f32 lbl_8032F718[];
extern f32 lbl_80364790;

void fn_80177BA0(void *arg0, s32 arg1, Vec3f *arg2) {
    volatile f32 *src = (volatile f32 *)arg2;
    f32 x = src[0];
    f32 y = src[1];
    volatile f32 *dst = (volatile f32 *)lbl_8032F718 + arg1 * 4;
    f32 z = src[2];
    dst[0] = x;
    dst[1] = y;
    dst[2] = z;
    dst[3] = lbl_80364790;
}
