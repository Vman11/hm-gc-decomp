// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8019A3B0 { u8 pad[0x8]; virtual void m(void *, void *, void *, u32); };
struct S_8019A3B0 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual u32 n(); };
extern "C" void fn_800FAEF8(void *);

void fn_8019A3B0(V_8019A3B0 *p, void *a, void *b, S_8019A3B0 *s) {
    u32 t;
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        p->m(a, b, s, t);
    }
}

} /* extern "C" */
