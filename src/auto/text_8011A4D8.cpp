// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E3BE8[];
void __dl__FPv(int);
void fn_80216440(int, int);
struct VCall_dtor_8011A4D8_0 { char vptr_pad[0x74]; virtual void p0(); virtual void p1(); virtual void m(); };

s32 __dt__9C8011A54CFv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x74) = lbl_802E3BE8;
        ((VCall_dtor_8011A4D8_0 *)(param_1))->m();
        fn_80216440((int)(param_1 + 8), (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
