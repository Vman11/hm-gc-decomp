// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class T { u8 d[44]; };
struct E8 { u32 a, b; };
struct P { u32 n; u32 b; u32 m; E8 *e; T *t; u32 u; u32 flags; u32 v; f32 f[4]; virtual void init(); virtual void clr(); };
extern "C" { void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AA28; extern f32 lbl_80363714; }
void *__nwa__FUl(u32);

extern "C" void fn_800FD050(P *p, u32 n, u32 m) {
    if (p->flags & 1) {
        if (p->t) delete[] p->t;
        if (p->e) delete[] p->e;
        p->clr();
        p->n = 0;
        p->b = 0;
        p->u = 0;
        p->flags = 0;
        p->m = 0;
        p->e = 0;
        p->t = 0;
        p->f[0] = lbl_80363714;
        p->f[1] = lbl_80363714;
        p->f[2] = lbl_80363714;
        p->f[3] = lbl_80363714;
        p->v = 0;
    }
    p->n = n;
    p->u = 0;
    p->m = m;
    if (p->m < 1) {
        p->m = 1;
    }
    if (!lbl_8035AA28) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AA28);
    p->e = (E8 *)__nwa__FUl(p->n * p->m * sizeof(E8));
    fn_800F7E98();
    if (!p->e) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035AA28) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AA28);
    p->t = new T[p->n * p->m];
    fn_800F7E98();
    if (!p->t) fn_800604C4(-4, 0, 0, 0);
    p->init();
    p->flags = 1;
}

} /* extern "C" */
