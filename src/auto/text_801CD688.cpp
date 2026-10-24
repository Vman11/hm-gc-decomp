// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

class C801CDA60 { public: f32 x, y, z, w; C801CDA60(); };
struct E28 { u32 f0, f4, f8, f12, f16, f20, f24; };
class O { public: u8 p0[4]; E28 *f4; u32 f8; C801CDA60 *f12; C801CDA60 *f16; u32 *f20; u32 *f24; u32 *f28; u8 p32[16]; s32 f48;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void free(); };
extern "C" {
extern void *lbl_8035B024;
extern f32 lbl_80365088;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
#define HNEW(dst, expr) \
    if (!lbl_8035B024) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(lbl_8035B024); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);

extern "C" int fn_801CD688(O *o, u32 n) {
    u32 i;
    if (o->f48) o->free();
    o->f48 = 1;
    o->f8 = n;
    HNEW(o->f4, new E28[o->f8]);
    HNEW(o->f24, new u32[o->f8]);
    HNEW(o->f28, new u32[o->f8]);
    HNEW(o->f12, new C801CDA60[o->f8]);
    HNEW(o->f16, new C801CDA60[o->f8]);
    HNEW(o->f20, new u32[o->f8]);
    for (i = 0; i < o->f8; i++) {
        f32 v;
        o->f4[i].f0 = 0;
        o->f4[i].f8 = 1;
        o->f4[i].f4 = 0;
        o->f4[i].f20 = 0;
        o->f4[i].f12 = 0;
        o->f4[i].f16 = 0;
        o->f4[i].f24 = 0;
        o->f24[i] = 0x4000;
        o->f28[i] = 0;
        v = lbl_80365088;
        o->f12[i].y = v; o->f12[i].z = v; o->f12[i].x = v; o->f12[i].w = v;
        v = lbl_80365088;
        o->f16[i].y = v; o->f16[i].z = v; o->f16[i].x = v; o->f16[i].w = v;
        o->f20[i] = 0;
    }
    return 0;
}

} /* extern "C" */
