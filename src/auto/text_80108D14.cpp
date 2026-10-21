// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C80108CF0 { public: u32 a; u32 b; u32 c; C80108CF0(); ~C80108CF0(); };
struct P { C80108CF0 *arr; u32 n; };
extern "C" { void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AA80; }

extern "C" void fn_80108D14(P *p, u32 n) {
    u32 i;
    p->n = n;
    if (!lbl_8035AA80) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AA80);
    p->arr = new C80108CF0[n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    for (i = 0; i < n; i++) {
        p->arr[i].b = 2;
    }
}

} /* extern "C" */
