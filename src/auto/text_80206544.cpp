// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802EF810[];
void __dl__FPv(int);
void fn_801FA47C(int, int);
struct VCall_fn_80206544_0 { char vptr_pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(); };

s32 __dt__9C802065B8Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x58) = lbl_802EF810;
        ((VCall_fn_80206544_0 *)(param_1))->m();
        fn_801FA47C((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
