// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m4(s32); };
struct T32 { f32 a, b, c, d; u32 e, f; T32 *g, *h; };
extern "C" { void fn_800FAEF8(void *); void fn_800FB000(void *, s32); u32 fn_800FADA8(void *); void fn_800FBDA4(void *, void *, u32); f32 fn_800FB2E0(void *); s32 fn_800FB33C(void *); void fn_800FAEA0(void *); }

void fn_80120FF8(u8 *p, u8 *b, E *q) {
    T32 *e;
    T32 *end;
    fn_800FAEF8(q);
    fn_800FB000(q, 109);
    *(u32 *)(p + 4) = fn_800FADA8(q);
    fn_800FBDA4(p, b, *(u32 *)(p + 4));
    e = *(T32 **)(p + 8);
    end = e + *(u32 *)(p + 4);
    for (; e < end; e++) {
        s32 k;
        e->a = fn_800FB2E0(q);
        e->b = fn_800FB2E0(q);
        e->c = fn_800FB2E0(q);
        e->d = fn_800FB2E0(q);
        e->e = fn_800FB33C(q);
        e->f = fn_800FB33C(q);
        if (e->e + e->f > *(u32 *)(b + 12)) {
            q->m4(35);
        }
        k = fn_800FB33C(q);
        if (k < 0) {
            e->g = 0;
        } else {
            e->g = &(*(T32 **)(p + 8))[k];
        }
        k = fn_800FB33C(q);
        if (k < 0) {
            e->h = 0;
        } else {
            e->h = &(*(T32 **)(p + 8))[k];
        }
    }
    fn_800FAEA0(q);
    fn_800FAEA0(q);
}

} /* extern "C" */
