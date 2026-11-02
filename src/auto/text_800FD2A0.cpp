// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct E8_D2A0 { u32 a, b; };
struct E44_D2A0 { u8 d[44]; };
struct B_C800FC8F0 { u8 pad[140]; };
struct C800FC8F0 : B_C800FC8F0 { virtual void f(u32, E8_D2A0 *, E44_D2A0 *); C800FC8F0(); ~C800FC8F0(); };
struct P_D2A0 { u32 n; C800FC8F0 *arr; u32 step; E8_D2A0 *e8; E44_D2A0 *e44; };
extern "C" {
extern void *lbl_8035AA28;
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
extern "C" void fn_800FD2A0(P_D2A0 *p) {
    u32 i;
    C800FC8F0 *e;
    C800FC8F0 *end;
    if (lbl_8035AA28 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AA28);
    p->arr = new C800FC8F0[p->n];
    fn_800F7E98();
    if (p->arr == 0) fn_800604C4(-4, 0, 0, 0);
    i = 0;
    for (e = p->arr, end = e + p->n; e < end; e++) {
        e->f(p->step, p->e8 + i, p->e44 + i);
        i += p->step;
    }
}
extern "C" {

} /* extern "C" */
