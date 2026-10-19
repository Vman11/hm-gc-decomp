// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800B0C58 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void a(f32 *, s32, s32, s32, s32); virtual void b(f32 *, s32, s32, s32, s32); };
extern u32 lbl_80362D34;
s32 fn_800F6CD0(void *, void *);
void fn_8023FE08(void *, f32);

void fn_800B0C58(u8 *p, f32 f) {
    if (*(void **)(p + 0x124) != NULL && fn_800F6CD0(*(void **)(p + 0x11C), &lbl_80362D34) != 0) {
        f32 v[3];
        f32 *q;
        (*(V_800B0C58 **)(p + 0x124))->a(v, 0, 0, 0, 0);
        q = *(f32 **)(*(u8 **)(p + 0x120) + 0xC);
        v[0] = v[0] + q[0];
        v[1] = v[1] + q[1];
        v[2] = v[2] + q[2];
        (*(V_800B0C58 **)(p + 0xE0))->b(v, 0, 0, 0, 0);
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
