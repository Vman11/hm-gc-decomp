// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801551F8 { u8 pad[0x20]; virtual void p0(); virtual void m(); };
extern "C" { void fn_801482DC(void *, void *); void fn_80160F40(void *, void *, s32); }

void fn_801551F8(V_801551F8 *q, void *b, u16 c, u16 d, void *e, u16 f, void *g) {
    if (*(u16 *)((u8 *)q + 26) & 1) {
        q->m();
    }
    *(void **)((u8 *)q + 68) = b;
    *(u16 *)((u8 *)q + 28) = c;
    *(u16 *)((u8 *)q + 30) = d;
    fn_801482DC(q, e);
    *(u16 *)((u8 *)q + 24) = f;
    *(u16 *)((u8 *)q + 26) = 1;
    *(void **)((u8 *)q + 64) = g;
    if (*(u16 *)q & 4) {
        fn_80160F40((u8 *)q + 36, q, 0);
    }
}

} /* extern "C" */
