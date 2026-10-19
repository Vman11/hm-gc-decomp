// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E8530[];
void __dl__FPv(int);
void __dt__9C80128E3CFv(int, int);
void __dt__9C80155460Fv(int, int);
void __dt__9C801717DCFv(int, int);
struct VCall_fn_8017958C_0 { char vptr_pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(); };

s32 __dt__9C80179618Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x34) = lbl_802E8530;
        ((VCall_fn_8017958C_0 *)(param_1))->m();
        __dt__9C80155460Fv((int)(param_1 + 0x9c), (int)(0xffffffff));
        __dt__9C801717DCFv((int)(param_1 + 0x5c), (int)(0xffffffff));
        __dt__9C80128E3CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
