// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8020BB10 { u8 pad[0x60]; virtual void p0(); virtual void p1(); virtual void m(); };
extern "C" { void fn_8020E450(void *, void *, void *); void fn_8021164C(void *); }

void fn_8020BB10(V_8020BB10 *q, void *a, void *b, void *c, void *d) {
    if (*(u32 *)((u8 *)q + 8) & 1) {
        q->m();
    }
    *(void **)((u8 *)q + 2332) = a;
    *(void **)((u8 *)q + 4) = c;
    *(void **)q = d;
    *(s32 *)((u8 *)q + 8) = 1;
    fn_8020E450((u8 *)q + 100, b, q);
    fn_8021164C(q);
}

} /* extern "C" */
