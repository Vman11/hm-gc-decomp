// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801374B8 { u8 pad[0x44]; virtual void m0(void *); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m4(); };

void fn_801374B8(V_801374B8 *q, void *b, void *c, void *d, void *e) {
    u8 *p = (u8 *)q;
    if (*(u32 *)(p + 4) & 1) {
        q->m4();
    }
    *(void **)p = c;
    *(void **)(p + 8) = d;
    *(void **)(p + 12) = e;
    q->m0(b);
}

} /* extern "C" */
