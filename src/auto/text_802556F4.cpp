// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802F2388[];
extern s32 lbl_8035B65C;
void __dl__FPv(int);
void __dt__9C80109410Fv(int, int);
void __dt__9C80111028Fv(int, int);
struct VCall_dtor_802556F4_0 { char vptr_pad[0x2f0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(); };

s32 __dt__9C8025577CFv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x2f0) = lbl_802F2388;
        lbl_8035B65C = 0;
        ((VCall_dtor_802556F4_0 *)(param_1))->m();
        __dt__9C80111028Fv((int)(param_1 + 0x90), (int)(0xffffffff));
        __dt__9C80109410Fv((int)(param_1 + 0x38), (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
