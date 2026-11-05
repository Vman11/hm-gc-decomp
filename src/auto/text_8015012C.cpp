#include "common.h"

// NonMatching draft (wA_80247CF0): out = a * (b * a^T) on the 3x3 part, rest identity. SDIFF 98 / DIFF 156: same length,
// only scheduling/regs differ. M34 temp read back through a cast pointer keeps it on the stack like the target.
extern "C" {
struct M34 { f32 m[3][4]; };
extern f32 lbl_8036453C;
extern f32 lbl_80364544;
static inline void mulT(f32 b[4][4], f32 a[4][4], M34 *t) {
    f32 b00 = b[0][0], b01 = b[0][1], b02 = b[0][2];
    f32 b10 = b[1][0], b11 = b[1][1], b12 = b[1][2];
    f32 b20 = b[2][0], b21 = b[2][1], b22 = b[2][2];
    f32 a00 = a[0][0], a01 = a[0][1], a02 = a[0][2];
    f32 a10 = a[1][0], a11 = a[1][1], a12 = a[1][2];
    f32 a20 = a[2][0], a21 = a[2][1], a22 = a[2][2];
    t->m[0][0] = b00 * a00 + b01 * a01 + b02 * a02;
    t->m[0][1] = b00 * a10 + b01 * a11 + b02 * a12;
    t->m[0][2] = b00 * a20 + b01 * a21 + b02 * a22;
    t->m[1][0] = b10 * a00 + b11 * a01 + b12 * a02;
    t->m[1][1] = b10 * a10 + b11 * a11 + b12 * a12;
    t->m[1][2] = b10 * a20 + b11 * a21 + b12 * a22;
    t->m[2][0] = b20 * a00 + b21 * a01 + b22 * a02;
    t->m[2][1] = b20 * a10 + b21 * a11 + b22 * a12;
    t->m[2][2] = b20 * a20 + b21 * a21 + b22 * a22;
}
static inline void mul(f32 a[4][4], f32 t[3][4], f32 o[4][4]) {
    f32 a00 = a[0][0], a01 = a[0][1], a02 = a[0][2];
    f32 a10 = a[1][0], a11 = a[1][1], a12 = a[1][2];
    f32 a20 = a[2][0], a21 = a[2][1], a22 = a[2][2];
    f32 t00 = t[0][0], t01 = t[0][1], t02 = t[0][2];
    f32 t10 = t[1][0], t11 = t[1][1], t12 = t[1][2];
    f32 t20 = t[2][0], t21 = t[2][1], t22 = t[2][2];
    o[0][0] = a00 * t00 + a01 * t10 + a02 * t20;
    o[0][1] = a00 * t01 + a01 * t11 + a02 * t21;
    o[0][2] = a00 * t02 + a01 * t12 + a02 * t22;
    o[1][0] = a10 * t00 + a11 * t10 + a12 * t20;
    o[1][1] = a10 * t01 + a11 * t11 + a12 * t21;
    o[1][2] = a10 * t02 + a11 * t12 + a12 * t22;
    o[2][0] = a20 * t00 + a21 * t10 + a22 * t20;
    o[2][1] = a20 * t01 + a21 * t11 + a22 * t21;
    o[2][2] = a20 * t02 + a21 * t12 + a22 * t22;
}
void fn_8015012C(f32 o[4][4], f32 a[4][4], f32 b[4][4]) {
    M34 t;
    mulT(b, a, &t);
    mul(a, (f32 (*)[4])&t, o);
    o[0][3] = lbl_80364544;
    o[1][3] = lbl_80364544;
    o[2][3] = lbl_80364544;
    o[3][0] = lbl_80364544;
    o[3][1] = lbl_80364544;
    o[3][2] = lbl_80364544;
    o[3][3] = lbl_8036453C;
}
}
