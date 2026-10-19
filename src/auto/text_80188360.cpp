// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E8C10[];
void __dl__FPv(int);
void __dt__9C8017AB98Fv(int, int);
void __dt__9C8018E150Fv(int, int);
struct VCall_fn_80188360_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };

s32 __dt__9C801883E0Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x68) = lbl_802E8C10;
        ((VCall_fn_80188360_0 *)(param_1))->m();
        __dt__9C8017AB98Fv((int)(param_1 + 0xa8), (int)(0xffffffff));
        __dt__9C8018E150Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
