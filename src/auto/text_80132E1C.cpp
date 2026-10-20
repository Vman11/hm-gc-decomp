// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80132E1C { u8 pad[0x30]; virtual void p0(); virtual void m(void *); };

void fn_80132E1C(V_80132E1C *q, void *x, u16 a, void *b, u16 c, void *d, u16 e) {
    u8 *p = (u8 *)q;
    *(u16 *)(p + 36) = a & ~0xFC;
    *(u16 *)(p + 36) |= 5;
    *(u16 *)(p + 32) = 1;
    *(void **)(p + 0) = b;
    *(void **)(p + 20) = d;
    *(u16 *)(p + 34) = e;
    *(u16 *)(p + 40) = *(u16 *)(p + 34) / 3;
    *(u16 *)(p + 38) = c;
    *(u16 *)(p + 42) = 0;
    q->m(x);
}

} /* extern "C" */
