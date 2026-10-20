// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct X_80261978 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void m13(void *, void *, void *, void *, s32);
    virtual void m14(void *, void *, void *, void *, s32);
};
struct V_80261978 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void m6(f32);
    virtual void m7();
    virtual void m8(f32);
};

void fn_80261978(u8 *p, f32 f) {
    u8 *q;
    u8 *r;
    (*(X_80261978 **)(p + 156))->m13(p + 20, p + 32, p + 44, p + 56, 0);
    q = *(u8 **)(p + 156);
    *(f32 *)(p + 68) = *(f32 *)(q + 280);
    *(f32 *)(p + 72) = *(f32 *)(q + 284);
    *(f32 *)(p + 76) = *(f32 *)(q + 288);
    *(f32 *)(p + 144) = *(f32 *)(q + 340);
    ((V_80261978 *)p)->m6(f);
    r = *(u8 **)(p + 164);
    if (r == 0 || *(s32 *)r == 0) {
        ((V_80261978 *)p)->m7();
        ((V_80261978 *)p)->m8(f);
    }
    (*(X_80261978 **)(p + 156))->m14(p + 80, p + 92, p + 104, p + 116, 0);
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
