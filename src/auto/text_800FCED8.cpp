// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800FCED8 { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual u8 *m(); };
extern "C" { extern u32 lbl_80363738; void fn_800FC408(void *, void *, void *); }

void fn_800FCED8(V_800FCED8 *q, void *a, void *b, void *c, void *d) {
    u8 *p = (u8 *)q;
    if (*(u32 *)(p + 20) < *(u32 *)p) {
        u8 *r = q->m();
        fn_800FC408(r, a, b);
        *(void **)(r + 108) = c;
        *(void **)(r + 112) = d;
        *(u32 *)(p + 24) |= lbl_80363738;
    }
}

} /* extern "C" */
