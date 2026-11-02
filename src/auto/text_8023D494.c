/* Functions from 0x8023D494 to 0x8023D5C4, found by decomp-toolkit. */
#include "common.h"


typedef struct { int on; f32 tgt, x, v, k, fs, d, fd, a, im; } S;
extern f32 lbl_803660DC;
f32 fn_8023D494(S *s, f32 dt, f32 t) {
    f32 dv; f32 f;
    s->tgt = t;
    s->fs = s->k * (t - s->x);
    s->fd = s->v * s->d;
    f = s->fs + s->fd;
    s->a = f * s->im;
    dv = s->a * dt;
#if 6==5
    f = lbl_803660DC * dv + s->v;
    s->v = s->v + dv;
    s->x = f * dt + s->x;
#elif 6==6
    f = s->v + lbl_803660DC * dv;
    s->v += dv;
    s->x += f * dt;
#else
    f = lbl_803660DC * dv + s->v;
    s->v += dv;
    s->x = f * dt + s->x;
#endif
    return s->x;
}

s32 fn_8023D504(void *arg0) {
    extern f32 lbl_803660D8;
    extern f32 lbl_803660E0;
    extern f32 lbl_803660E4;

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, f32 *, 0x10) = lbl_803660D8;
        M2C_FIELD(arg0, f32 *, 8) = lbl_803660E0;
        M2C_FIELD(arg0, f32 *, 4) = lbl_803660E0;
        M2C_FIELD(arg0, f32 *, 0xC) = lbl_803660E0;
        M2C_FIELD(arg0, f32 *, 0x14) = lbl_803660E0;
        M2C_FIELD(arg0, f32 *, 0x18) = lbl_803660E4;
        M2C_FIELD(arg0, f32 *, 0x1C) = lbl_803660D8;
        M2C_FIELD(arg0, f32 *, 0x20) = lbl_803660E0;
        M2C_FIELD(arg0, f32 *, 0x24) = lbl_803660D8;
    }
    M2C_FIELD(arg0, s32 *, 0) = 1;
    return 0;
}

void fn_8023D570(void *arg0) {
    extern f32 lbl_803660D8;
    extern f32 lbl_803660E0;
    extern f32 lbl_803660E4;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_803660D8;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_803660E0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_803660E0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_803660E0;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_803660E0;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_803660E4;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_803660D8;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_803660E0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_803660D8;
}
