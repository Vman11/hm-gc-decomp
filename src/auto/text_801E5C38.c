// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802EDB10[];
void __dl__FPv();
void dtor_8010946C();

u32 * fn_801E5C38(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802EDB10;
        param_1[1] = 0;
        dtor_8010946C(param_1,0);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
