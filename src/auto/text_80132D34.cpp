// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80132D34 { u8 pad[0x30]; virtual void p0(); virtual void m(void *); };

void fn_80132D34(V_80132D34 *q, void *x, u16 a, void *b, void *c, u16 d, void *e, u32 f) {
    u8 *p = (u8 *)q;
    *(u16 *)(p + 36) = a & ~0xFC;
    *(u16 *)(p + 36) |= 17;
    *(u16 *)(p + 32) = 1;
    *(void **)(p + 0) = b;
    *(void **)(p + 16) = c;
    *(void **)(p + 24) = e;
    *(u32 *)(p + 28) = f;
    *(u16 *)(p + 40) = *(u32 *)(p + 28) / 3;
    *(u16 *)(p + 38) = d;
    *(u16 *)(p + 42) = 0;
    q->m(x);
}

} /* extern "C" */
