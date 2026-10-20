// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct X_8026079C { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m13(void *, void *, void *, void *, s32); virtual void m14(void *, void *, void *, void *, s32); };
struct P_8026079C { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m13(void *, void *); };

void fn_8026079C(u8 *p, f32 *v) {
    u8 *q;
    (*(X_8026079C **)(p + 156))->m13(p + 20, p + 32, p + 44, p + 56, 0);
    q = *(u8 **)(p + 156);
    *(f32 *)(p + 68) = *(f32 *)(q + 280);
    *(f32 *)(p + 72) = *(f32 *)(q + 284);
    *(f32 *)(p + 76) = *(f32 *)(q + 288);
    *(f32 *)(p + 144) = *(f32 *)(q + 340);
    *(f32 *)(p + 80) = v[0];
    *(f32 *)(p + 84) = v[1];
    *(f32 *)(p + 88) = v[2];
    *(f32 *)(p + 92) = *(f32 *)(p + 32);
    *(f32 *)(p + 96) = *(f32 *)(p + 36);
    *(f32 *)(p + 100) = *(f32 *)(p + 40);
    *(f32 *)(p + 104) = *(f32 *)(p + 44);
    *(f32 *)(p + 108) = *(f32 *)(p + 48);
    *(f32 *)(p + 112) = *(f32 *)(p + 52);
    *(f32 *)(p + 116) = *(f32 *)(p + 56);
    *(f32 *)(p + 120) = *(f32 *)(p + 60);
    *(f32 *)(p + 124) = *(f32 *)(p + 64);
    *(f32 *)(p + 128) = *(f32 *)(p + 68);
    *(f32 *)(p + 132) = *(f32 *)(p + 72);
    *(f32 *)(p + 136) = *(f32 *)(p + 76);
    *(f32 *)(p + 148) = *(f32 *)(p + 144);
    if (*(s32 **)(p + 164) == 0 || **(s32 **)(p + 164) == 0) {
        ((P_8026079C *)p)->m13(p + 20, p + 80);
    }
    (*(X_8026079C **)(p + 156))->m14(p + 80, p + 92, p + 104, p + 116, 0);
    {
        f32 s = *(f32 *)(p + 148);
        q = *(u8 **)(p + 156);
        *(f32 *)(q + 280) = *(f32 *)(p + 128);
        *(f32 *)(q + 284) = *(f32 *)(p + 132);
        *(f32 *)(q + 288) = *(f32 *)(p + 136);
        *(f32 *)(q + 340) = s;
    }
}

} /* extern "C" */
