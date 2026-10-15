/* Functions from 0x80177BA0 to 0x80177BD4, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_8032F718[];
extern f32 lbl_80364790;

typedef struct {
    f32 x, y, z;
} Vec3f;

void fn_80177BA0(void *arg0, s32 arg1, f32 *arg2) {
    setVec4f(arg1, arg2[0], arg2[1], arg2[2]);
}
