// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class T { u8 d[44]; };
struct E8 { u32 a, b; };
struct P { u8 pad[0x74]; u32 n; u32 pad78; E8 *e; T *t; u8 pad84[8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void clr(); };
extern "C" { void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *memset(void *, int, u32); extern void *lbl_8035AA20; }
void *__nwa__FUl(u32);

extern "C" void fn_800FC6A8(P *p, u32 n) {
    if (p->n != 0) {
        p->clr();
    }
    p->n = n;
    if (!lbl_8035AA20) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AA20);
    p->e = (E8 *)__nwa__FUl(p->n * sizeof(E8));
    fn_800F7E98();
    if (!p->e) fn_800604C4(-4, 0, 0, 0);
    memset(p->e, 0, p->n * sizeof(E8));
    if (!lbl_8035AA20) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AA20);
    p->t = new T[p->n];
    fn_800F7E98();
    if (!p->t) fn_800604C4(-4, 0, 0, 0);
}

} /* extern "C" */
