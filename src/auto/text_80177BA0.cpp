/* Functions from 0x80177BA0 to 0x80177BD4, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    f32 x, y, z;
} Vec3f;

typedef struct {
    f32 x, y, z, w;
} Vec4f;

extern volatile f32 lbl_8032F718[];
extern volatile f32 lbl_80364790;

void fn_80177BA0(void *arg0, s32 arg1, f32 *__restrict arg2) {
    f32 x = arg2[0];
    f32 y = arg2[1];
    f32 z = arg2[2];
    lbl_8032F718[arg1 * 4 + 0] = x;
    lbl_8032F718[arg1 * 4 + 1] = y;
    lbl_8032F718[arg1 * 4 + 2] = z;
    lbl_8032F718[arg1 * 4 + 3] = lbl_80364790;
}

} /* extern "C" */
