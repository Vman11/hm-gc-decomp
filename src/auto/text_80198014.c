/* Functions from 0x80198014 to 0x80198038, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x, y, z, w;
} Vec4f;

void fn_80198014(void* arg0, Vec4f* arg1) {
    Vec4f* src = (Vec4f*)((u8*)arg0 + 0x14);
    f32 a;
    f32 b;
    f32 c;
    b = src->y;
    c = src->x;
    arg1->x = c;
    a = src->z;
    arg1->y = b;
    b = src->w;
    arg1->z = a;
    arg1->w = b;
}
