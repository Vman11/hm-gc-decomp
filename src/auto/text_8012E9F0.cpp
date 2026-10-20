// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8012E9F0 { u8 pad[0x38]; virtual void p0(); virtual void p1(); virtual void m2(void *, void *); virtual void p3(); virtual void p4(); virtual void m1(void *, void *, void *); };
extern "C" { void fn_80148310(void *); void fn_8012E3F4(void *, void *, void *); void fn_8012E15C(void *, void *, void *); }

void fn_8012E9F0(V_8012E9F0 *q, void *a, void *b) {
    u8 buf[24];
    fn_80148310(buf);
    q->m1(a, b, buf);
    fn_8012E3F4(q, a, buf);
    q->m2(a, buf);
    fn_8012E15C(q, a, b);
}

} /* extern "C" */
