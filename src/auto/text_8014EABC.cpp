// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802E67C0[];
void __dl__FPv(int);
void fn_8011FC24(int, int);
struct VCall_fn_8014EABC_0 { virtual void p0(); virtual void p1(); virtual void m(); };

s32 * fn_8014EABC(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802E67C0;
        ((VCall_fn_8014EABC_0 *)(param_1))->m();
        fn_8011FC24((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
