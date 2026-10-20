// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8017C6A0 { u8 pad[0x18]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m6(); virtual void m7(void *, void *, void *, void *); };

void fn_8017C6A0(V_8017C6A0 *q, void *a, void *b, void *c, void *d) {
    V_8017C6A0 *p = q;
    if (*(V_8017C6A0 **)((u8 *)p + 20) == 0) {
        p->m6();
        return;
    }
    p->m6();
    p = *(V_8017C6A0 **)((u8 *)p + 20);
    do {
        p->m7(a, b, c, d);
        p = *(V_8017C6A0 **)((u8 *)p + 16);
    } while (p != 0);
}

} /* extern "C" */
