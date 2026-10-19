// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __vt__9C80128EF4[];
extern u8 lbl_802E6900[];
void __dl__FPv(int);
void __dt__9C8013499CFv(int, int);
void fn_80161108(int, int);
struct VCall_dtor_801553CC_0 { char vptr_pad[0x20]; virtual void p0(); virtual void m(); };

u32 __dt__9C80155460Fv(u32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x20) = lbl_802E6900;
        ((VCall_dtor_801553CC_0 *)(param_1))->m();
        fn_80161108((int)(param_1 + 0x24), (int)(0xffffffff));
        if (param_1 != 0) {
            *(u8 **)(param_1 + 0x20) = __vt__9C80128EF4;
            __dt__9C8013499CFv((int)(param_1), (int)(0));
        }
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
