// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __vt__9C80064A58[];
extern u8 lbl_802E3A10[];
void __dl__FPv(int);
void __dt__9C8011B190Fv(int, int);
struct VCall_dtor_801192BC_0 { char vptr_pad[0x2a0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

u32 __dt__9C801192BCFv(u32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x2a0) = lbl_802E3A10;
        ((VCall_dtor_801192BC_0 *)(param_1))->m();
        if (param_1 != 0) {
            *(u8 **)(param_1 + 0x298) = __vt__9C80064A58;
            __dt__9C8011B190Fv((int)(param_1), (int)(0));
        }
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
