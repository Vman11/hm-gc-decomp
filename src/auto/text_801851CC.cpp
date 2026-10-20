// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801851CC { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void *g(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(void *, void *); };

void fn_801851CC(V_801851CC *q, void *a, void *c) {
    u32 off;
    u32 i;
    if (c == NULL) {
        c = q->g();
    }
    for (i = 0, off = 0; i < *(u32 *)((u8 *)q + 152); i++) {
        V_801851CC *o = *(V_801851CC **)(*(u8 **)((u8 *)q + 156) + off);
        if (*(u32 *)o & 0x200) {
            o->m(a, c);
        }
        off += 4;
    }
}

} /* extern "C" */
