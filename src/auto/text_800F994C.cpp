// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C800F9688 { public: u8 d[16]; C800F9688 *next; u32 x; C800F9688(); };
struct P { u8 pad[0x10]; virtual void p0(); virtual void clr(); C800F9688 *arr; u32 n; C800F9688 *free; };
extern "C" { void fn_800F8E38(P *, u32); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AA00; }

extern "C" void fn_800F994C(P *p, u32 n) {
    C800F9688 *last;
    C800F9688 *e;
    if (p->arr != 0) {
        p->clr();
    }
    fn_800F8E38(p, n);
    p->n = n;
    if (!lbl_8035AA00) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AA00);
    p->arr = new C800F9688[n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    p->free = p->arr;
    for (e = p->arr, last = e + p->n - 1; e < last; e++) {
        e->next = e + 1;
    }
    e->next = 0;
}

} /* extern "C" */
