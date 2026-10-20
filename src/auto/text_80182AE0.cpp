// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T_80182AE0 { u8 pad[20]; f32 a, b, c, d; };
struct V_80182AE0 { u8 pad[0x50]; virtual void m0(void *, u32); virtual void p1(); virtual void p2(); virtual void m3(); };
struct G_80182AE0 { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void m(void *); };
struct S_80182AE0 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800FAEF8(void *); void fn_800FB064(void *, void *); void fn_800F87F0(void *, void *, void *); void fn_80121CE8(void *, void *); u32 fn_800FB33C(void *); f32 fn_800FB2E0(void *); void *fn_800F8274(void *, void *); }

void fn_80182AE0(V_80182AE0 *p, u8 *q, S_80182AE0 *s) {
    u32 t;
    if (*(void **)((u8 *)p + 44) != 0) {
        p->m3();
    }
    *(void **)((u8 *)p + 44) = q;
    (*(G_80182AE0 **)(q + 4))->m((u8 *)p + 28);
    ((T_80182AE0 *)p)->a = ((T_80182AE0 *)p)->c;
    ((T_80182AE0 *)p)->b = ((T_80182AE0 *)p)->d;
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        p->m0(s, t);
    }
}

} /* extern "C" */
