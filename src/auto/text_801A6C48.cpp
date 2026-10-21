// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C801A6A24 { public: u8 d[12]; C801A6A24 *next; u32 x; C801A6A24(); };
struct P { u8 pad[0x10]; virtual void p0(); virtual void clr(); C801A6A24 *arr; u32 n; C801A6A24 *free; };
extern "C" { void fn_800F8E38(P *, u32); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AEF4; }

extern "C" void fn_801A6C48(P *p, u32 n) {
    C801A6A24 *last;
    C801A6A24 *e;
    if (p->arr != 0) {
        p->clr();
    }
    fn_800F8E38(p, n);
    p->n = n;
    if (!lbl_8035AEF4) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AEF4);
    p->arr = new C801A6A24[n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    p->free = p->arr;
    for (e = p->arr, last = e + p->n - 1; e < last; e++) {
        e->next = e + 1;
    }
    e->next = 0;
}

} /* extern "C" */
