// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E3D30[];
void __dl__FPv(int);
void __dt__9C80114FC8Fv(int, int);
struct VCall_fn_8011ADA8_0 { char vptr_pad[0x27bc]; virtual void p0(); virtual void p1(); virtual void m(); };

s32 fn_8011ADA8(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x27bc) = lbl_802E3D30;
        ((VCall_fn_8011ADA8_0 *)(param_1))->m();
        __dt__9C80114FC8Fv((int)(param_1 + 8), (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
