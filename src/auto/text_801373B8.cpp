// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801373B8 { u8 pad[0x44]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(void *); };
extern "C" { extern u32 lbl_80364170; void fn_80148310(void *); u32 fn_80147CD8(void *, void *); }

void fn_801373B8(V_801373B8 *q, void *a) {
    u8 *p = (u8 *)q;
    u8 buf[24];
    fn_80148310(buf);
    q->m(buf);
    *(u32 *)(p + 16) = fn_80147CD8(buf, a);
    *(u32 *)(p + 20) = *(u32 *)(p + 16);
    *(u32 *)(p + 24) = *(u32 *)(p + 16);
    *(u32 *)(p + 28) = *(u32 *)(p + 16);
    *(u32 *)(p + 4) |= lbl_80364170;
}

} /* extern "C" */
