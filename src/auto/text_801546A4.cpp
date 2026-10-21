// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V801546A4 { char vptr_pad[32]; virtual void p0(); virtual void p1(); virtual s32 m2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m9(s32 *, s32 *, s32); virtual void m10(); };

extern s32 lbl_8035AC30;
extern s32 lbl_8035AC34;
extern u8 lbl_8032C2D0[];
void fn_8014721C(void *, V801546A4 *, V801546A4 *, s32);
void fn_80144CEC(void *, s32, s32, s32, s32, s32, s32);
void fn_801471FC(void *);

void fn_801546A4(V801546A4 *a, s32 b, V801546A4 *c, s32 d) {
    s32 x;
    s32 y;
    c->m9(&x, &y, 1);
    a->m9(&lbl_8035AC30, &lbl_8035AC34, 2);
    fn_8014721C(lbl_8032C2D0, c, a, a->m2());
    fn_80144CEC(lbl_8032C2D0, lbl_8035AC30, lbl_8035AC34, b, x, y, d);
    fn_801471FC(lbl_8032C2D0);
    lbl_8035AC30 = 0;
    a->m10();
    c->m10();
}

} /* extern "C" */
