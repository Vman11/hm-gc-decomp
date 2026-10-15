/* Functions from 0x80198014 to 0x80198038, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x, y, z, w;
} Vec4f;

void fn_80198014(void* arg0, f32* arg1) {
    f32 a, b;
    a = *(f32*)((u8*)arg0 + 0x14);
    b = *(f32*)((u8*)arg0 + 0x18);
    arg1[0] = a;
    a = *(f32*)((u8*)arg0 + 0x1C);
    arg1[1] = b;
    b = *(f32*)((u8*)arg0 + 0x20);
    arg1[2] = a;
    arg1[3] = b;
}
