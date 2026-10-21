// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct E { u32 type; u32 pad4[2]; s32 v; };
struct P { u16 n; u16 pad2; E *arr; };
extern "C" { u16 fn_800FADA8(R *); s32 fn_800FB33C(R *); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AC20; }
void *__nwa__FUl(u32);

extern "C" void fn_8013410C(P *p, R *r) {
    E *e;
    E *end;
    if (p->n != 0) {
        r->err(39);
    }
    p->n = fn_800FADA8(r);
    if (p->n < 1) {
        r->err(35);
    }
    if (!lbl_8035AC20) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC20);
    p->arr = (E *)__nwa__FUl(p->n * sizeof(E));
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    e = p->arr;
    end = e + p->n;
    for (; e < end; e++) {
        switch (r->next()) {
        case 62: e->type = 0; break;
        case 63: e->type = 1; break;
        case 64: e->type = 2; break;
        case 65: e->type = 3; break;
        case 66: e->type = 4; break;
        case 67: e->type = 5; break;
        case 68: e->type = 6; break;
        case 69: e->type = 7; break;
        case 70: e->type = 8; break;
        case 71: e->type = 9; break;
        case 72: e->type = 10; break;
        case 73: e->type = 11; break;
        case 74: e->type = 12; break;
        case 75: e->type = 13; break;
        default: r->err(30); break;
        }
        e->v = fn_800FB33C(r);
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
