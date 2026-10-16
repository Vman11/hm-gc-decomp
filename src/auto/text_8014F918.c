/* Functions from 0x8014F918 to 0x8014FA70, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } Vec3;

void fn_8014F918(f32 (*__restrict m)[4], f32 *__restrict v) {
    v[0] = m[0][2];
    v[1] = m[1][2];
    v[2] = m[2][2];
}

void fn_8014F934(f32 (*m)[4], f32 *v) {
    int i;
    for (i = 0; i < 3; i++) v[i] = m[i][1];
}

void fn_8014F950(f32 (*m)[4], f32 *v) {
    v[0] = m[0][0];
    v[1] = m[1][0];
    v[2] = m[2][0];
}

void fn_8014F96C(f32 (*m)[4], f32 *v, f32 *w) {
    int i;
    for (i = 0; i < 3; i++) v[i] = m[i][0];
    for (i = 0; i < 3; i++) w[i] = m[i][1];
}

void fn_8014F9A0(f32 (*m)[4], f32 *c, f32 *b) {
    int i;
    for (i = 0; i < 3; i++) b[i] = m[i][1];
    for (i = 0; i < 3; i++) c[i] = m[i][2];
}

void fn_8014F9D4(f32 (*m)[4], f32 *a, f32 *c) {
    int i;
    for (i = 0; i < 3; i++) a[i] = m[i][0];
    for (i = 0; i < 3; i++) c[i] = m[i][2];
}

void fn_8014FA08(f32 (*m)[4], f32 *a, f32 *b, f32 *c) {
    int i;
    for (i = 0; i < 3; i++) a[i] = m[i][0];
    for (i = 0; i < 3; i++) b[i] = m[i][1];
    for (i = 0; i < 3; i++) c[i] = m[i][2];
}

void fn_8014FA54(f32 (*m)[4], f32 *v) {
    int i;
    for (i = 0; i < 3; i++) v[i] = m[i][3];
}

