// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

struct M20 { u8 d[20]; };
struct It { f32 *p0; s32 s0; f32 *p1; s32 s1; f32 *p2; s32 s2; u32 *p3; s32 s3; u32 *p4; s32 s4; };
class O { public: u32 f0; u32 f4; u32 f8; u8 p12[44]; f32 f56, f60, f64;
    virtual void o0(); virtual void o1(); virtual void o2(); virtual void o3(); virtual void o4(); virtual void lock(It *, int); virtual void unlock(); virtual void mat(M20 *); };
struct S;
extern "C" {
extern f32 lbl_80364150;
extern f32 lbl_80364154;
void fn_80148310(M20 *);
u32 fn_80147F68(M20 *);
u32 fn_80147F38(M20 *);
u32 fn_80147F08(M20 *);
u32 fn_80147ED8(M20 *);
f32 fn_800FB2E0(S *);
u32 fn_800FB33C(S *);
}
inline u32 Pack(S *s, u32 a, u32 b, u32 c, u32 d) {
    u32 r = fn_800FB33C(s);
    u32 g = fn_800FB33C(s);
    u32 bl = fn_800FB33C(s);
    u32 al = fn_800FB33C(s);
    return r << a | g << b | bl << c | al << d;
}
extern "C" void fn_80136ED0(O *o, S *s) {
    M20 m;
    It it;
    u32 sr, sg, sb, sa;
    u32 i;
    u32 *q;
    fn_80148310(&m);
    o->mat(&m);
    sr = fn_80147F68(&m);
    sg = fn_80147F38(&m);
    sb = fn_80147F08(&m);
    sa = fn_80147ED8(&m);
    o->lock(&it, 0);
    o->f56 = lbl_80364150;
    o->f60 = lbl_80364150;
    o->f64 = lbl_80364150;
    for (i = 0; i < o->f0; i++) {
        if (o->f8 & 1) {
            f32 *p = it.p0;
            p[0] = fn_800FB2E0(s);
            o->f56 = o->f56 + p[0];
            p[1] = fn_800FB2E0(s);
            o->f60 = o->f60 + p[1];
            p[2] = fn_800FB2E0(s);
            o->f64 = o->f64 + p[2];
            it.p0 = (f32 *)((u8 *)it.p0 + it.s0);
        }
        if (o->f8 & 2) {
            f32 *p = it.p1;
            p[0] = fn_800FB2E0(s);
            it.p1 = (f32 *)((u8 *)it.p1 + it.s1);
        }
        if (o->f8 & 4) {
            f32 *p = it.p2;
            p[0] = fn_800FB2E0(s);
            p[1] = fn_800FB2E0(s);
            it.p2 = (f32 *)((u8 *)it.p2 + it.s2);
        }
        if (o->f8 & 8) {
            q = it.p3;
            q[0] = Pack(s, sr, sg, sb, sa);
            it.p3 = (u32 *)((u8 *)it.p3 + it.s3);
        }
        if (o->f8 & 0x10) {
            q = it.p4;
            q[0] = Pack(s, sr, sg, sb, sa);
            q[1] = Pack(s, sr, sg, sb, sa);
            q[2] = Pack(s, sr, sg, sb, sa);
            q[3] = Pack(s, sr, sg, sb, sa);
            it.p4 = (u32 *)((u8 *)it.p4 + it.s4);
        }
    }
    {
        f32 f = lbl_80364154 / (f32)(s32)o->f0;
        o->f56 *= f;
        o->f60 *= f;
        o->f64 *= f;
    }
    o->unlock();
}

} /* extern "C" */
