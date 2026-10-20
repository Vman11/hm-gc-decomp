// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C801180F8 { C801180F8(); u8 pad[32]; };
extern "C" { extern void *lbl_8035B5E0; extern void *lbl_8035B1C0; void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *fn_8021616C(void *); void fn_80207BF4(void *, void *); void fn_80117FE4(void *, void *, void *, s32); void fn_802079F0(void *, s32); }

void fn_802514F0(u8 *p, void *a, void *b) {
    void *u;
    if (lbl_8035B5E0 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B5E0);
    *(C801180F8 **)(p + 32) = new C801180F8;
    fn_800F7E98();
    if (*(void **)(p + 32) == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    u = fn_8021616C(lbl_8035B1C0);
    fn_80207BF4(u, a);
    fn_80117FE4(*(void **)(p + 32), *(void **)(p + 36), b, 0);
    fn_802079F0(u, 0);
}

} /* extern "C" */
