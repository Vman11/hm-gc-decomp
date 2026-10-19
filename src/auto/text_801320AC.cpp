// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern char lbl_8029E818[];
void fn_80060568(int, int, int, int);
struct VCall_fn_801320AC_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };
struct VCall_fn_801320AC_1 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(int); };

void fn_801320AC(u32 *param_1, u32 param_2) {
    if (*param_1 != 0) {
        if (param_2 >= *param_1) {
            fn_80060568((int)(lbl_8029E818), (int)(0), (int)(0), (int)(0)); /* "Atlas Graphics: vertex array reference out of bounds" */
        }
        ((VCall_fn_801320AC_1 *)(param_1))->m((s32)(param_2));
    }
    else {
        ((VCall_fn_801320AC_0 *)(param_1[6]))->m();
    }
}
}
