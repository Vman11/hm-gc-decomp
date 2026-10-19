// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_801FBEE8 { u8 pad[0x58]; virtual void x(void *, void *, u32); virtual void y(void *); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void z(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void a(f32, s32); virtual void b(f32, s32); virtual void c(f32); };
struct V2_801FBEE8 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual u32 m(); };
void fn_800FAEF8(void *);

void fn_801FBEE8(V1_801FBEE8 *p, void *a, V2_801FBEE8 *b) {
    u8 *q = (u8 *)p;
    u32 r;
    if (*(void **)(q + 4) != NULL) {
        p->z();
    }
    *(void **)(q + 4) = a;
    fn_800FAEF8(b);
    while ((r = b->m()) != 6) {
        p->x(a, b, r);
    }
    p->y(a);
    p->a(*(f32 *)(q + 0x10), 0);
    p->b(*(f32 *)(q + 0x14), 0);
    p->c(*(f32 *)(q + 0x18));
}

} /* extern "C" */
