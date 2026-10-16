/* Functions from 0x8014F918 to 0x8014FA70, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } Vec3;

void fn_8014F918(f32 (*__restrict m)[4], f32 *__restrict v) {
    v[0] = m[0][2];
    v[1] = m[1][2];
    v[2] = m[2][2];
}

void fn_8014F934(f32 (*__restrict m)[4], f32 *__restrict v) {
    v[0] = m[0][1];
    v[1] = m[1][1];
    v[2] = m[2][1];
}

void fn_8014F950(f32 (*__restrict m)[4], f32 *__restrict v) {
    v[0] = m[0][0];
    v[1] = m[1][0];
    v[2] = m[2][0];
}

void fn_8014F96C(f32 (*__restrict m)[4], f32 *__restrict v, f32 *__restrict w) {
    v[0] = m[0][0];
    v[1] = m[1][0];
    v[2] = m[2][0];
    w[0] = m[0][1];
    w[1] = m[1][1];
    w[2] = m[2][1];
}

void fn_8014F9A0(f32 (*__restrict m)[4], f32 *__restrict c, f32 *__restrict b) {
    b[0] = m[0][1];
    b[1] = m[1][1];
    b[2] = m[2][1];
    c[0] = m[0][2];
    c[1] = m[1][2];
    c[2] = m[2][2];
}

void fn_8014F9D4(f32 (*__restrict m)[4], f32 *__restrict a, f32 *__restrict c) {
    a[0] = m[0][0];
    a[1] = m[1][0];
    a[2] = m[2][0];
    c[0] = m[0][2];
    c[1] = m[1][2];
    c[2] = m[2][2];
}

void fn_8014FA08(f32 (*__restrict m)[4], f32 *a, f32 *b, f32 *c) {
    a[0] = m[0][0];
    a[1] = m[1][0];
    a[2] = m[2][0];
    b[0] = m[0][1];
    b[1] = m[1][1];
    b[2] = m[2][1];
    c[0] = m[0][2];
    c[1] = m[1][2];
    c[2] = m[2][2];
}

void fn_8014FA54(f32 (*__restrict m)[4], f32 *__restrict v) {
    v[0] = m[0][3];
    v[1] = m[1][3];
    v[2] = m[2][3];
}

