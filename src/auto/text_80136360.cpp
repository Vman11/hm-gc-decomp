// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E52D8[];
void __dl__FPv(int);
void __dt__9C800F9B64Fv(int, int);
void __dt__9C8012C5A0Fv(int, int);
struct VCall_dtor_80136360_0 { char vptr_pad[0x30]; virtual void p0(); virtual void m(); };

s32 __dt__9C8013644CFv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x30) = lbl_802E52D8;
        ((VCall_dtor_80136360_0 *)(param_1))->m();
        __dt__9C800F9B64Fv((int)(param_1 + 0x270), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0x234), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0x1f8), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0x1bc), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0x180), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0x144), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0x108), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0xcc), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0x90), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0x54), (int)(0xffffffff));
        __dt__9C8012C5A0Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
