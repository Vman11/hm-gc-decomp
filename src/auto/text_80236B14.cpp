// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80236B14 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m13(void *, s32, s32, s32, s32); virtual void m14(void *, s32, s32, s32, s32); };
extern "C" { extern f32 lbl_80365EF8; }

void fn_80236B14(V_80236B14 *q) {
    u8 *p = (u8 *)q;
    if (*(s32 *)(p + 592) == 0) {
        f32 v[3];
        *(s32 *)(p + 592) = 1;
        v[0] = lbl_80365EF8;
        v[1] = lbl_80365EF8;
        v[2] = lbl_80365EF8;
        q->m13(p + 580, 0, 0, 0, 0);
        q->m14(v, 0, 0, 0, 0);
    }
}

} /* extern "C" */
