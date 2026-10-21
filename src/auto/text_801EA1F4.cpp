// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801EF9A0(s32 *, s32 *);
struct VCall_fn_801EA1F4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
struct H_801EA1F4 { s32 a; s32 b; void set(s32 x) { b = 0; a = 0; a = x; } };

void fn_801EA1F4(s32 *__restrict p, s32 *__restrict q) {
    s32 v;
    ((VCall_fn_801EA1F4_0 *)p)->m();
    fn_801EF9A0(p, q);
    v = q[10];
    ((H_801EA1F4 *)(p + 10))->set(q[2]);
    ((f32 *)p)[18] = ((f32 *)q)[3];
    ((f32 *)p)[19] = ((f32 *)q)[4];
    ((f32 *)p)[20] = ((f32 *)q)[5];
    ((f32 *)p)[14] = ((f32 *)q)[6];
    ((f32 *)p)[15] = ((f32 *)q)[7];
    ((f32 *)p)[16] = ((f32 *)q)[8];
    ((f32 *)p)[17] = ((f32 *)q)[9];
    p[27] = 0;
    if ((u32)v != 0) {
        ((H_801EA1F4 *)(p + 12))->set(v);
    }
}

} /* extern "C" */
