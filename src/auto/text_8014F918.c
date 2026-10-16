/* Functions from 0x8014F918 to 0x8014FA70, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } Vec3;

void fn_8014F918(f32 *a, f32 *b) {
    f32 x = a[2];
    f32 y = a[6];
    f32 z = a[10];
    b[0] = x;
    b[1] = y;
    b[2] = z;
}

void fn_8014F934(f32 *a, f32 *b) {
    f32 x = a[1];
    f32 y = a[5];
    f32 z = a[9];
    b[0] = x;
    b[1] = y;
    b[2] = z;
}

void fn_8014F950(f32 *a, f32 *b) {
    f32 x = a[0];
    f32 y = a[4];
    f32 z = a[8];
    b[0] = x;
    b[1] = y;
    b[2] = z;
}

void fn_8014F96C(f32 *a, f32 *b, f32 *c) {
    f32 x = a[0];
    f32 y = a[4];
    f32 z = a[8];
    f32 x2 = a[1];
    f32 y2 = a[5];
    f32 z2 = a[9];
    b[0] = x;
    b[1] = y;
    b[2] = z;
    c[0] = x2;
    c[1] = y2;
    c[2] = z2;
}

