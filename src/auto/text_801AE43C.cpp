// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801AE43C { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };
struct S_801AE43C { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800FAEF8(void *); void fn_800FB064(void *, void *); void fn_800FB0F8(void *, void *); void fn_800F87F0(void *, void *, void *); void fn_80121CE8(void *, void *); u32 fn_800FB33C(void *); f32 fn_800FB2E0(void *); void *fn_800F8274(void *, void *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, void *, void *); void fn_8018E20C(void *, void *, u32); void fn_80101124(void *, void *); void fn_80101820(void *); void *fn_80207198(void *, void *, void *); void __dla__FPv(void *); }

#pragma push
#pragma opt_loop_invariants off
s32 fn_801AE43C(V_801AE43C *p, void *q, S_801AE43C *s, void *x) {
    u8 b20[8];
    u8 b12[8];
    void *a8;
    u32 t;
    if (*(s32 *)((u8 *)p + 4) != 0) {
        p->m();
    }
    a8 = 0;
    *(void **)p = q;
    b20[0] = 0;
    b12[0] = 0;
    s->n();
    fn_800FB064(s, b20);
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        switch (t) {
        case 57:
            fn_800FB0F8(s, &a8);
            fn_800FB064(s, b12);
            break;
        case 58:
            fn_80121CE8((u8 *)p + 20, s);
            break;
        case 92:
            *(u32 *)((u8 *)p + 188) = fn_800FB33C(s);
            break;
        case 93:
            *(u32 *)((u8 *)p + 192) = fn_800FB33C(s);
            break;
        case 103:
            *(s32 *)((u8 *)p + 200) = 1;
            break;
        }
    }
    *(void **)((u8 *)p + 40) = fn_80207198(*(void **)(*(u8 **)p + 8), a8, b12);
    __dla__FPv(a8);
    fn_800F87F0(x, b20, p);
    *(s32 *)((u8 *)p + 4) = 1;
    return 0;
}
#pragma pop

} /* extern "C" */
