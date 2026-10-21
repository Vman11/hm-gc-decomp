// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E7028[];
void __dl__FPv(int);
void __dt__9C8013352CFv(int, int);
void fn_8021814C(int, int);
struct VCall_dtor_8015FD80_0 { char vptr_pad[0x30];  virtual void m(); };

s32 __dt__9C8015FE00Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x30) = lbl_802E7028;
        ((VCall_dtor_8015FD80_0 *)(param_1))->m();
        fn_8021814C((int)(param_1 + 0x3c), (int)(0xffffffff));
        __dt__9C8013352CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
