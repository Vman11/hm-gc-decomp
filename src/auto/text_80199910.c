/* Functions from 0x80199910 to 0x80199A98, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x, y, z, w;
} Plane;

s32 fn_80199910(void *arg0, f32 *arg1) {
    f32 *p = *(f32 **)((u8 *)arg0 + 0);
    f32 *end = p + *(s32 *)((u8 *)arg0 + 4) * 4;
    f32 x = arg1[0];
    f32 y = arg1[1];
    f32 z = arg1[2];
    f32 r = -arg1[3];
    for (; p < end; p += 4) {
        f32 d = x * p[0] + y * p[1] + z * p[2] + p[3];
        if (d < r) {
            return 0;
        }
    }
    return 1;
}

void fn_8019998C(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 0) = arg1;
    *(s32 *)((u8 *)arg0 + 4) = arg2;
}

void fn_80199A84(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0) = 0;
    *(u32 *)((u8 *)arg0 + 4) = 0;
    *(u32 *)((u8 *)arg0 + 8) = 0;
}

