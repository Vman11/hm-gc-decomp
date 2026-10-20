// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8012D414 { u8 pad[0x34]; virtual void m0(void *, void *, u32); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m8(); };
struct E_8012D414 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual u32 m5(); };
extern "C" { void fn_800F6E88(void *, void *); void fn_800FAEF8(void *); }

void fn_8012D414(V_8012D414 *q, void *b, u8 *c, void *d, E_8012D414 *e) {
    u32 t;
    if (*(u32 *)((u8 *)q + 12) != 0) {
        q->m8();
    }
    *(u8 **)((u8 *)q + 20) = c;
    *(u8 **)((u8 *)q + 24) = c + 20;
    fn_800F6E88(q, d);
    fn_800FAEF8(e);
    while ((t = e->m5()) != 6) {
        q->m0(b, e, t);
    }
}

} /* extern "C" */
