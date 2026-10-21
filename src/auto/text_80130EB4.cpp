// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct El { u8 pad[0x2C]; u32 flags; };
struct P { u8 pad[0x10]; virtual void p0(); virtual void clr(); virtual void init(void *); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual El *get(u32); u32 n; u32 na; u32 pad1C; u32 *a; u32 nb; u32 pad28; u32 *b; };
extern "C" { void fn_800F8E38(P *, u32); void fn_8012FE8C(El *, void *, P *, El *); void fn_80135FB0(void *, P *, void *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *memset(void *, int, u32); extern void *lbl_8035AC00; }
void *__nwa__FUl(u32);

extern "C" void fn_80130EB4(P *p, void *x, P *src, void *y) {
    u32 i;
    El *e;
    if (p->n != 0) {
        p->clr();
    }
    p->na = src->na;
    p->nb = src->nb;
    p->n = src->n;
    fn_800F8E38(p, p->n);
    if (p->na != 0) {
        if (!lbl_8035AC00) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AC00);
        p->a = (u32 *)__nwa__FUl(p->na * 4);
        fn_800F7E98();
        if (!p->a) fn_800604C4(-4, 0, 0, 0);
        memset(p->a, 0, p->na * 4);
    }
    if (p->nb != 0) {
        if (!lbl_8035AC00) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AC00);
        p->b = (u32 *)__nwa__FUl(p->nb * 4);
        fn_800F7E98();
        if (!p->b) fn_800604C4(-4, 0, 0, 0);
        memset(p->b, 0, p->nb * 4);
    }
    p->init(x);
    for (i = 0; i < p->n; i++) {
        e = src->get(i);
        if (e->flags & 1) {
            fn_8012FE8C(p->get(i), x, p, e);
        }
    }
    fn_80135FB0(x, p, y);
}

} /* extern "C" */
