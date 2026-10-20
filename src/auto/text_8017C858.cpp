// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8017C858 { u8 pad[0x18]; virtual void m0(void *, u32); };
struct S_8017C858 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800FAEF8(void *); void fn_800FB064(void *, void *); void fn_800F87F0(void *, void *, void *); void fn_80121CE8(void *, void *); u32 fn_800FB33C(void *); f32 fn_800FB2E0(void *); void *fn_800F8274(void *, void *); }

void fn_8017C858(V_8017C858 *p, void *q, S_8017C858 *s) {
    u32 t;
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        switch (t) {
        case 67:
            *(u32 *)((u8 *)p + 4) = fn_800FB33C(s);
            break;
        case 68: {
            u8 buf[8];
            u8 *r;
            fn_800FB064(s, buf);
            r = (u8 *)fn_800F8274(q, buf);
            if (r == 0) {
                s->err(37);
            }
            if (*(u8 **)((u8 *)p + 12) != r) {
                *(u8 **)((u8 *)p + 12) = r;
                *(void **)((u8 *)p + 16) = *(void **)(r + 20);
                *(void **)(r + 20) = p;
            }
            break;
        }
        default:
            p->m0(s, t);
            break;
        }
    }
}

} /* extern "C" */
