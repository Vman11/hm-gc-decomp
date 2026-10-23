// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8036604C;
extern f32 lbl_80366050;
extern f32 lbl_80366054;
extern f32 lbl_80366044;
extern f32 lbl_80366058;
extern f32 lbl_8036605C;
u32 rand(void);
f64 fn_800EFDA4(f64);

typedef struct { f32 x0; f32 x4; f32 x8; f32 xC; } S;

static inline u32 RandN(u32 n) {
    u32 r = 0;
    if (n != 0) {
        r = rand() % n;
    }
    return r;
}

static inline f32 RandF(f32 range) {
    s32 n = (s32)(lbl_8036604C * range);
    if (n < 0) {
        n = -n;
        return lbl_80366050 * (f32)(-(s32)RandN(n));
    }
    return lbl_80366050 * (f32)(s32)RandN(n);
}

f32 fn_8023C1BC(S *p, f32 dt) {
    f32 s = p->x8 * dt;
    f32 v;
    p->xC += RandF(s) - lbl_80366054 * s;
    if (p->xC > lbl_80366044) {
        p->xC -= lbl_80366058;
    } else if (p->xC < lbl_8036605C) {
        p->xC += lbl_80366058;
    }
    v = (f32)fn_800EFDA4(p->xC);
    v = lbl_80366054 * v + lbl_80366054;
    return v * p->x4 + p->x0;
}

void fn_8023C314(f32 *p, f32 a, f32 b, f32 c) {
    p[0] = a;
    p[1] = b - a;
    p[2] = c;
    p[3] = lbl_80366050 * (f32)(s32)RandN(62831);
}

} /* extern "C" */
