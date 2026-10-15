/* Functions from 0x80177BA0 to 0x80177BD4, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_8032F718[];
extern f32 lbl_80364790;

typedef struct {
    f32 x, y, z, w;
} Vec4f;

static inline void setVec4f(s32 i, f32 x, f32 y, f32 z) {
    Vec4f *p = (Vec4f *)lbl_8032F718;
    p[i].x = x;
    p[i].y = y;
    p[i].z = z;
    p[i].w = lbl_80364790;
}

void fn_80177BA0(void *arg0, s32 arg1, f32 *arg2) {
    typedef struct {
        f32 x, y, z, w;
    } Vec4;
    Vec4 *p = (Vec4 *)lbl_8032F718;
    f32 x, y, z;

    x = arg2[0];
    y = arg2[1];
    z = arg2[2];
    p[arg1].x = x;
    p[arg1].y = y;
    p[arg1].z = z;
    p[arg1].w = lbl_80364790;
}
