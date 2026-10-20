// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801BD5B8 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };
struct S_801BD5B8 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800FAEF8(void *); void fn_800FB064(void *, void *); void fn_800F87F0(void *, void *, void *); void fn_80121CE8(void *, void *); u32 fn_800FB33C(void *); f32 fn_800FB2E0(void *); void *fn_800F8274(void *, void *); }

#pragma push
#pragma opt_loop_invariants off
s32 fn_801BD5B8(V_801BD5B8 *p, void *q, S_801BD5B8 *s, void *x) {
    u8 b16[8];
    u8 b8[8];
    u32 t;
    if (*(s32 *)((u8 *)p + 4) != 0) {
        p->m();
    }
    *(void **)p = q;
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        switch (t) {
        case 57: {
            fn_800FB064(s, b16);
            fn_800F87F0(x, b16, p);
            break;
        }
        case 84: {
            fn_800FB064(s, b16);
            fn_800FB064(s, b8);
            break;
        }
        case 85: {
            fn_800FB064(s, b16);
            fn_800FB064(s, b8);
            break;
        }
        case 58:
            fn_80121CE8((u8 *)p + 20, s);
            break;
        default:
            s->err(30);
            break;
        }
    }
    *(s32 *)((u8 *)p + 4) = 1;
    return 0;
}
#pragma pop

} /* extern "C" */
