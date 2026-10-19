// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __vt__9C8006458C[];
extern u8 lbl_802F0058[];
void __dl__FPv(int);
void dtor_801A3A0C(int, int);
void __dt__9C80216FC8Fv(int, int);
struct VCall_dtor_80216D0C_0 { char vptr_pad[0x2a0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

s32 __dt__9C80064530Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x2a0) = lbl_802F0058;
        ((VCall_dtor_80216D0C_0 *)(param_1))->m();
        if (param_1 + 0x3024 != 0) {
            *(u8 **)(param_1 + 0x3030) = __vt__9C8006458C;
            __dt__9C80216FC8Fv((int)(param_1 + 0x3024), (int)(0));
        }
        dtor_801A3A0C((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
