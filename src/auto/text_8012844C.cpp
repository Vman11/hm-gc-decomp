// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8012844C { u8 pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m2(void *, void *); virtual void m1(void *, void *, void *); };
extern "C" { void fn_80148310(void *); void fn_80127940(void *, void *, void *); void fn_80127658(void *, void *, void *); }

void fn_8012844C(V_8012844C *q, void *a, void *b) {
    u8 buf[24];
    fn_80148310(buf);
    q->m1(a, b, buf);
    fn_80127940(q, a, buf);
    q->m2(a, buf);
    fn_80127658(q, a, b);
}

} /* extern "C" */
