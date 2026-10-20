// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C8020AD3C { C8020AD3C(); u8 pad[1728]; };
extern "C" { extern void *lbl_8035B1C8; void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_8020ABA0(void *, void *, void *); }

void *fn_8020AE50(void *x, void *a, void *b) {
    C8020AD3C *o;
    if (lbl_8035B1C8 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B1C8);
    o = new C8020AD3C;
    fn_800F7E98();
    if (o == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_8020ABA0(o, a, b);
    return o;
}

} /* extern "C" */
