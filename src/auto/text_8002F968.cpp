// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802AF7D0[];
void dtor_8003C59C(int, int);
void __dl__FPv(int);
void dtor_8010946C(int, int);
void __dt__9C8023D65CFv(int, int);
struct VCall_dtor_8002F968_0 { virtual void p0(); virtual void m(); };

s32 * __dt__9C8002F9F4Fv(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802AF7D0;
        ((VCall_dtor_8002F968_0 *)(param_1))->m();
        __dt__9C8023D65CFv((int)(param_1 + 0xae), (int)(0xffffffff));
        dtor_8003C59C((int)(param_1 + 0x27), (int)(0xffffffff));
        dtor_8010946C((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
