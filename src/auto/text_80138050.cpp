// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80138050 { u8 pad[0x10]; virtual void p0(); virtual void m1(); virtual void m2(void *); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); };
extern "C" { void fn_800F8E38(void *, s32); void fn_80135FF4(void *, void *, void *); }

void fn_80138050(V_80138050 *q, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, void *h) {
    u32 *p = (u32 *)q;
    if (p[5] + p[6] != 0) {
        q->m1();
    }
    p[5] = c;
    p[6] = d;
    p[7] = e;
    p[8] = f;
    p[9] = g;
    fn_800F8E38(q, p[7] + p[8] + p[9]);
    q->m2(b);
    if (p[5] != 0) {
        q->m3();
    }
    if (p[6] != 0) {
        q->m4();
    }
    if (p[7] != 0) {
        q->m5();
    }
    if (p[8] != 0) {
        q->m6();
    }
    if (p[9] != 0) {
        q->m7();
    }
    fn_80135FF4(b, q, h);
}

} /* extern "C" */
