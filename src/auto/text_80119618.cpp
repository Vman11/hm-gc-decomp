// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E3A50[];
void __dl__FPv(int);
void dtor_801192BC(int, int);
void fn_80119890(int, int);
struct VCall_dtor_80119618_0 { char vptr_pad[0x2a0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

s32 dtor_80119618(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x2a0) = lbl_802E3A50;
        ((VCall_dtor_80119618_0 *)(param_1))->m();
        fn_80119890((int)(param_1 + 0x2a4), (int)(0xffffffff));
        dtor_801192BC((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
