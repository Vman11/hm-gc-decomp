// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801B341C { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };
struct S_801B341C { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800FAEF8(void *); void fn_800FB064(void *, void *); void fn_800FB0F8(void *, void *); void fn_800F87F0(void *, void *, void *); void fn_80121CE8(void *, void *); u32 fn_800FB33C(void *); f32 fn_800FB2E0(void *); void *fn_800F8274(void *, void *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, void *, void *); void fn_8018E20C(void *, void *, u32); void fn_80101124(void *, void *); void fn_80101820(void *); void *fn_80207198(void *, void *, void *); void __dla__FPv(void *); }

#pragma push
#pragma opt_loop_invariants off
s32 fn_801B341C(V_801B341C *p, u8 *q, S_801B341C *s, void *x) {
    u8 b16[8];
    char b8[8];
    u32 t;
    if (*(s32 *)((u8 *)p + 4) != 0) {
        p->m();
    }
    *(void **)p = q;
    *(void **)((u8 *)p + 8) = *(void **)(q + 16);
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        switch (t) {
        case 57:
            fn_800FB064(s, b16);
            fn_800F87F0(x, b16, p);
            break;
        case 77: {
            u8 *o;
            fn_800FB064(s, b16);
            fn_800FB064(s, b8);
            o = *(u8 **)((u8 *)p + 8);
            if (o != 0) {
                void *r;
                if (b8 == 0 || b8[0] == 0) {
                    r = fn_800F9398(o + 600, b16);
                } else {
                    r = fn_800F9788(o + 624, b8, b16);
                }
                *(void **)((u8 *)p + 36) = r;
            }
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
