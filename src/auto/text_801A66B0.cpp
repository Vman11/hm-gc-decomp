// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802EA628[];
void __dl__FPv(int);
void __dt__9C800F92E8Fv(int, int);
struct VCall_fn_801A66B0_0 { char vptr_pad[0x168]; virtual void p0(); virtual void m(); };

s32 fn_801A66B0(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x168) = lbl_802EA628;
        ((VCall_fn_801A66B0_0 *)(param_1))->m();
        __dt__9C800F92E8Fv((int)(param_1 + 0x154), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0x140), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 300), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0x118), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0x104), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0xf0), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0xdc), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 200), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0xb4), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0xa0), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0x8c), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0x78), (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
