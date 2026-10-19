// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E28C8[];
extern u8 __vt__9C80111028[];
void __dl__FPv(int);
void fn_8010CDAC(int, int);
void fn_80110E5C(int);

s32 __dt__9C80111028Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x1ec) = __vt__9C80111028;
        if (*(s32 *)(param_1 + 0x1e8) != 0) {
            fn_80110E5C((int)(param_1));
        }
        if (param_1 + 8 != 0) {
            *(u8 **)(param_1 + 0x20) = lbl_802E28C8;
            fn_8010CDAC((int)(param_1 + 8), (int)(0));
        }
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
