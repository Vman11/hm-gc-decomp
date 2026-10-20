// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800FC804 { u8 pad[0x8C]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
extern "C" { extern u32 lbl_8036370C; }

void fn_800FC804(V_800FC804 *q, void *a, void *b, void *c) {
    u8 *p = (u8 *)q;
    if (*(void **)(p + 116) != NULL) {
        q->m();
    }
    *(void **)(p + 116) = a;
    *(void **)(p + 124) = b;
    *(void **)(p + 128) = c;
    *(u32 *)p |= lbl_8036370C;
}

} /* extern "C" */
