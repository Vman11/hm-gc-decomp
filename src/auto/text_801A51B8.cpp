// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_801A51B8 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
struct V_801A51B8 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };
extern "C" { void fn_800FAEF8(void *); void fn_800FB064(void *, void *); void fn_800F87F0(void *, void *, void *); }

s32 fn_801A51B8(V_801A51B8 *q0, u8 *q, S_801A51B8 *s, void *x) {
    u32 t;
    if (*(s32 *)((u8 *)q0 + 4) != 0) {
        q0->m();
    }
    *(void **)((u8 *)q0 + 8) = *(void **)(q + 16);
    *(void **)q0 = q;
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        switch (t) {
        case 57: {
            u8 buf[8];
            fn_800FB064(s, buf);
            fn_800F87F0(x, buf, q0);
            break;
        }
        default:
            s->err(30);
            break;
        }
    }
    *(s32 *)((u8 *)q0 + 4) = 1;
    return 0;
}

} /* extern "C" */
