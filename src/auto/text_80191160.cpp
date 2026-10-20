// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80191160 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void *m(); };
extern "C" void fn_80104004(void *, void *, void *);

void fn_80191160(V_80191160 *q) {
    u8 *p = (u8 *)q;
    void *r = q->m();
    if (r != NULL) {
        fn_80104004(r, p + 8, p + 24);
    } else {
        *(f32 *)(p + 24) = *(f32 *)(p + 8);
        *(f32 *)(p + 28) = *(f32 *)(p + 12);
        *(f32 *)(p + 32) = *(f32 *)(p + 16);
    }
    *(f32 *)(p + 36) = *(f32 *)(p + 20);
    *(u32 *)p &= ~4;
}

} /* extern "C" */
