// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802EFCB8[];
extern u8 lbl_802F01F0[];
void fn_802128BC(int);
struct VCall_fn_8021AE88_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };

s32 * __ct__9C8021AE88Fv(s32 *param_1) {
    *param_1 = (s32)lbl_802EFCB8;
    *param_1 = (s32)lbl_802F01F0;
    fn_802128BC((int)(param_1 + 1));
    ((VCall_fn_8021AE88_0 *)(param_1))->m();
    return param_1;
}
}
