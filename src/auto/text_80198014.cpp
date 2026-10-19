/* Functions from 0x80198014 to 0x80198038, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    f32 x, y, z, w;
} Vec4f;

void fn_80198014(u8 *__restrict arg0, Vec4f *__restrict arg1) {
    Vec4f *src = (Vec4f *)(arg0 + 0x14);
    arg1->x = src->x;
    arg1->y = src->y;
    arg1->z = src->z;
    arg1->w = src->w;
}

} /* extern "C" */
