// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802ED228[];
void __dl__FPv(int);
void __dt__9C801C0BB4Fv(int, int);
struct VCall_dtor_801DDC18_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

s32 dtor_801DDC18(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x80) = lbl_802ED228;
        ((VCall_dtor_801DDC18_0 *)(param_1))->m();
        __dt__9C801C0BB4Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
