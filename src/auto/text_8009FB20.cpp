// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern char lbl_8029A83C[];
struct VCall_fn_8009FB20_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_8009FB20(s32 *param_1) {
    s32 iVar1;

    if ((s32 *)param_1[0x60] != (s32 *)0x0) {
        iVar1 = *(s32 *)param_1[0x60];
    }
    else {
        iVar1 = 0;
    }
    if (iVar1 != 0) {
        ((VCall_fn_8009FB20_0 *)(param_1))->m((s32)(lbl_8029A83C)); /* "C_UNSPRT" */
    }
}
}
