/* Functions from 0x80177BA0 to 0x80177BD4, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x, y, z;
} Vec3f;

typedef struct {
    f32 x, y, z, w;
} Vec4f;

extern Vec4f lbl_8032F718[];
extern f32 lbl_80364790;

void fn_80177BA0(void *arg0, s32 arg1, Vec3f arg2) {
    f32 (*p)[4] = (f32 (*)[4])lbl_8032F718;
    f32 x = arg2.x;
    f32 y = arg2.y;
    f32 z = arg2.z;

    p[arg1][0] = x;
    p[arg1][1] = y;
    p[arg1][2] = z;
    p[arg1][3] = lbl_80364790;
}
