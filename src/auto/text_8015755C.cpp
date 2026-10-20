// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8015755C { u8 pad[0x20]; virtual void p0(); virtual void m(); };
extern "C" { void fn_801482DC(void *, void *); void fn_8016CC28(void *, void *); }

void fn_8015755C(V_8015755C *q, void *b, u16 c, u16 d, void *e) {
    if (*(u16 *)((u8 *)q + 26) & 1) {
        q->m();
    }
    *(u16 *)((u8 *)q + 28) = c;
    *(u16 *)((u8 *)q + 30) = d;
    fn_801482DC(q, e);
    *(u16 *)((u8 *)q + 24) = 2;
    *(u16 *)((u8 *)q + 26) = 1;
    *(void **)((u8 *)q + 80) = b;
    fn_8016CC28(*(void **)((u8 *)q + 80), q);
}

} /* extern "C" */
