// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 __dt__9C8014E1E0Fv[];
extern u8 lbl_802E6758[];
void __dl__FPv(int);
void __dt__9C8011FBC8Fv(int, int);
void fn_800E1F04(int, int, int, int);
struct VCall_fn_8014E8D4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(); };

s32 * fn_8014E8D4(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802E6758;
        ((VCall_fn_8014E8D4_0 *)(param_1))->m();
        fn_800E1F04((int)(param_1 + 0x18), (int)(__dt__9C8014E1E0Fv), (int)(0x2fc), (int)(4));
        __dt__9C8011FBC8Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
