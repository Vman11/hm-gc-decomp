// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801EF9A0(s32 *, s32 *);
struct VCall_fn_801E85F8_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_801E85F8(s32 *__restrict p, s32 *__restrict q) {
    ((VCall_fn_801E85F8_0 *)p)->m();
    if (p[2] != 0) {
        ((VCall_fn_801E85F8_0 *)p)->m();
    }
    fn_801EF9A0(p, q);
    p[22] = q[6];
    ((f32 *)p)[14] = ((f32 *)q)[2];
    ((f32 *)p)[15] = ((f32 *)q)[3];
    ((f32 *)p)[16] = ((f32 *)q)[4];
    ((f32 *)p)[17] = ((f32 *)q)[5];
    p[23] = q[8];
    ((f32 *)p)[24] = ((f32 *)q)[7];
}

} /* extern "C" */
