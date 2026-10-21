// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C800F930C { public: u8 d[12]; C800F930C(); };
struct P { C800F930C *arr; u32 n; u8 pad8[8]; virtual void p0(); virtual void clr(); };
extern "C" { void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035A9F8; extern u32 lbl_8029CA70[]; }

extern "C" void fn_800F8E38(P *p, u32 n) {
    u32 i;
    if (p->arr != 0) {
        p->clr();
    }
    for (i = 0; i < 18; i++) {
        if (n < lbl_8029CA70[i]) {
            break;
        }
    }
    if (i < 18) {
        p->n = lbl_8029CA70[i];
    } else {
        p->n = n;
    }
    if (!lbl_8035A9F8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F8);
    p->arr = new C800F930C[p->n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
}

} /* extern "C" */
