// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_8032C2D0[];
extern s32 lbl_8035AC30;
extern s32 lbl_8035AC34;
void fn_801471FC(int);
struct VCall_fn_80128F54_0 { char vptr_pad[0x20]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };

void fn_80128F54(s32 param_1) {
    ((VCall_fn_80128F54_0 *)(param_1))->m();
    fn_801471FC((int)(lbl_8032C2D0));
    lbl_8035AC30 = 0;
    lbl_8035AC34 = 0;
}
}
