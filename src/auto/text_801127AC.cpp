// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C801124F8 { public: u8 d[12]; C801124F8 *next; u32 x; C801124F8(); };
struct P { u8 pad[0x10]; virtual void p0(); virtual void clr(); C801124F8 *arr; u32 n; C801124F8 *free; };
extern "C" { void fn_800F8E38(P *, u32); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AAE0; }

extern "C" void fn_801127AC(P *p, u32 n) {
    C801124F8 *last;
    C801124F8 *e;
    if (p->arr != 0) {
        p->clr();
    }
    fn_800F8E38(p, n);
    p->n = n;
    if (!lbl_8035AAE0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AAE0);
    p->arr = new C801124F8[n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    p->free = p->arr;
    for (e = p->arr, last = e + p->n - 1; e < last; e++) {
        e->next = e + 1;
    }
    e->next = 0;
}

} /* extern "C" */
