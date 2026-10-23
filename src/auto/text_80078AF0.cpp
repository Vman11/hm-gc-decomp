// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 __vt__9C80078B94[];
void __dl__FPv(int);
void __dt__9C80226E64Fv(int, int);
void __dt__9C8022F98CFv(int, int);
void __dt__9C8023D0CCFv(int, int);
void __dt__9C8023D65CFv(int, int);
struct VCall_fn_80078AF0_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * __dt__9C80078B94Fv(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)__vt__9C80078B94;
        ((VCall_fn_80078AF0_0 *)(param_1))->m();
        __dt__9C8023D0CCFv((int)(param_1 + 0x18c), (int)(0xffffffff));
        __dt__9C8023D65CFv((int)(param_1 + 0x125), (int)(0xffffffff));
        __dt__9C8023D65CFv((int)(param_1 + 0x11a), (int)(0xffffffff));
        __dt__9C80226E64Fv((int)(param_1 + 0xd0), (int)(0xffffffff));
        __dt__9C8022F98CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
