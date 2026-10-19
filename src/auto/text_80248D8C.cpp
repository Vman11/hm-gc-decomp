// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802F1CE8[];
void __dl__FPv(int);
void __dt__9C8023D2ACFv(int, int);
struct VCall_fn_80248D8C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_80248D8C(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802F1CE8;
        ((VCall_fn_80248D8C_0 *)(param_1))->m();
        __dt__9C8023D2ACFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
