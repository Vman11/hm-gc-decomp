// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8018C450 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void *g(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(void *, void *); };
void fn_8018C450(V_8018C450 *p, void *a, void *b) {
    u8 *q = (u8 *)p;
    V_8018C450 *r;
    if (b == NULL) {
        b = p->g();
    }
    if (*(void **)(q + 0x98) != NULL && (*(u32 *)(r = **(V_8018C450 ***)(q + 0x9C)) & 0x200)) {
        *(f32 *)((u8 *)r + 0x18) = *(f32 *)(q + 0x18);
        *(f32 *)((u8 *)r + 0x1C) = *(f32 *)(q + 0x1C);
        *(f32 *)((u8 *)r + 0x20) = *(f32 *)(q + 0x20);
        *(f32 *)((u8 *)r + 0x24) = *(f32 *)(q + 0x24);
        **(u32 **)*(void ***)(q + 0x9C) &= ~4;
        (**(V_8018C450 ***)(q + 0x9C))->m(a, b);
    }
}

} /* extern "C" */
