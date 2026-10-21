// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual s32 next(); };
struct E { union { f32 f[4]; s32 i[4]; } u; s32 type; };
struct P { u8 pad0[4]; u16 n; u8 pad6[10]; E *arr; };
extern "C" { u16 fn_800FADA8(R *); f32 fn_800FB2E0(R *); s32 fn_800FB33C(R *); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AC60; }
void *__nwa__FUl(u32);

extern "C" void fn_8013B978(P *p, R *r) {
    E *e;
    E *end;
    if (p->n != 0) {
        r->err(39);
    }
    p->n = fn_800FADA8(r);
    if (p->n < 1) {
        r->err(35);
    }
    if (!lbl_8035AC60) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC60);
    p->arr = (E *)__nwa__FUl(p->n * sizeof(E));
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    e = p->arr;
    end = e + p->n;
    for (; e < end; e++) {
        switch (r->next()) {
        case 91:
            e->type = 0;
            e->u.f[0] = fn_800FB2E0(r);
            e->u.f[1] = fn_800FB2E0(r);
            e->u.f[2] = fn_800FB2E0(r);
            e->u.f[3] = fn_800FB2E0(r);
            break;
        case 92:
            e->type = 1;
            e->u.i[0] = fn_800FB33C(r);
            e->u.i[1] = fn_800FB33C(r);
            e->u.i[2] = fn_800FB33C(r);
            e->u.i[3] = fn_800FB33C(r);
            break;
        default:
            r->err(30);
            break;
        }
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
