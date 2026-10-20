// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80219D48 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(void *, void *, void *, ...); };

void fn_80219D48(V_80219D48 *q, void *a, void *b, u32 c, u32 d, void *e, ...) {
    u8 *p = (u8 *)q;
    *(u32 *)(p + 28) = c;
    *(u32 *)(p + 32) = d;
    q->m(a, b, e);
    *(u32 *)(p + 28) = 0xFFFFFFFF;
    *(u32 *)(p + 32) = 0xFF000000;
}

} /* extern "C" */
