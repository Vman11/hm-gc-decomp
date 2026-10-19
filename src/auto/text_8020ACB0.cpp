// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C8020A1A4Fv[];
extern u8 lbl_802EF9E8[];
void __dl__FPv(int);
void __dt__9C8021151CFv(int, int);
void fn_800E1E88(int, int);
void fn_802114B4(int);

s32 fn_8020ACB0(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x6b8) = lbl_802EF9E8;
        if (*(u32 *)(param_1 + 0x6bc) != 0) {
            fn_800E1E88((int)(*(u32 *)(param_1 + 0x6bc)), (int)(__dt__9C8020A1A4Fv));
            fn_802114B4((int)(param_1));
        }
        *(u32 *)(param_1 + 0x6bc) = 0;
        __dt__9C8021151CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
