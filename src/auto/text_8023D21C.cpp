// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802F19D4[];
void __dl__FPv(int);
void dtor_8010946C(int, int);
struct VCall_dtor_8023D21C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_dtor_8023D21C_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * __dt__9C8023D2ACFv(s32 *param_1, s16 param_2) {
    s32 iVar1;

    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802F19D4;
        iVar1 = ((VCall_dtor_8023D21C_0 *)(param_1))->m();
        if (iVar1 != 0) {
            ((VCall_dtor_8023D21C_1 *)(param_1))->m();
        }
        dtor_8010946C((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
