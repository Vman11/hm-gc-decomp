// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF5C0[];
void __dt__9C801FE9ECFv(void);
void __dl__FPv(int);
void __dt__9C801FB7F8Fv(int, int);
void fn_800E1F04(int, int, int, int);

u32 * fn_801FE970(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802EF5C0;
        fn_800E1F04((int)(param_1 + 1), (int)(__dt__9C801FE9ECFv), (int)(0xc0), (int)(1));
        __dt__9C801FB7F8Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
