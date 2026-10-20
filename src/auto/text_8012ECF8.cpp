// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8012ECF8 { u8 pad[0x38]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m9(); };
struct E_8012ECF8 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual u32 m5(); };
extern "C" { extern u32 lbl_80363F20; void fn_800F6E88(void *, void *); void fn_800FAEF8(void *); void fn_8012E7A0(void *, void *, void *, u32); }

void fn_8012ECF8(V_8012ECF8 *q, void *b, u8 *c, void *d, E_8012ECF8 *e) {
    u32 t;
    if (*(u32 *)((u8 *)q + 8) & 1) {
        q->m9();
    }
    *(u8 **)((u8 *)q + 48) = c;
    *(u8 **)((u8 *)q + 20) = c + 20;
    fn_800F6E88(q, d);
    fn_800FAEF8(e);
    while ((t = e->m5()) != 6) {
        fn_8012E7A0(q, b, e, t);
    }
    *(u32 *)((u8 *)q + 8) |= lbl_80363F20;
}

} /* extern "C" */
