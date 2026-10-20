// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern void *lbl_8035B530;
extern u8 __vt__10CV802B2C18[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nw__FUl(u32);
void __ct__9C80040F68Fv(void *);
void fn_800435EC(void *);

void *fn_80043820(void) {
    void *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = __nw__FUl(436);
    if (r != NULL) {
        __ct__9C80040F68Fv(r);
        *(void **)r = __vt__10CV802B2C18;
        fn_800435EC(r);
    }
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
