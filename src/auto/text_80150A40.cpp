// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8036453C;
extern f32 lbl_80364540;
void fn_800FFE84(f32 *q);
void fn_80150B38(void *p, f32 (*m)[4]);

#pragma fp_contract off
typedef struct S80150A40 { f32 q[4]; f32 m[3][4]; } S80150A40;
void fn_80150A40(void *p) {
    S80150A40 st;
    const f32 *q;
    f32 xy;
    f32 yz;
    f32 wx;
    f32 zz;
    f32 zs;
    f32 xs;
    f32 wz;
    f32 z;
    f32 yy;
    f32 ys;
    f32 x;
    f32 s;
    f32 w;
    f32 y;
    f32 xx;
    f32 wy;
    f32 xz;
    fn_800FFE84(st.q);
    q = st.q;
    x = q[0];
    y = q[1];
    z = q[2];
    w = q[3];
    s = lbl_80364540 / (w * w + (z * z + (x * x + y * y)));
    ys = y * s;
    xs = x * s;
    wx = w * xs;
    zs = z * s;
    yy = y * ys;
    wy = w * ys;
    xz = x * zs;
    wz = w * zs;
    xy = x * ys;
    zz = z * zs;
    xx = x * xs;
    st.m[0][1] = xy + wz;
    st.m[1][0] = xy - wz;
    st.m[0][0] = lbl_8036453C - (yy + zz);
    st.m[1][1] = lbl_8036453C - (xx + zz);
    yz = y * zs;
    st.m[1][2] = yz + wx;
    st.m[2][1] = yz - wx;
    st.m[0][2] = xz - wy;
    st.m[2][0] = xz + wy;
    st.m[2][2] = lbl_8036453C - (xx + yy);
    fn_80150B38(p, st.m);
}
#pragma fp_contract reset

} /* extern "C" */
