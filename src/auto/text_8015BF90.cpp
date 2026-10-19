// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 fn_8016F8D0[];
extern u8 lbl_802E6E98[];
void __dl__FPv(int);
void __dt__9C80130DA8Fv(int, int);
void fn_800E1F04(int, int, int, int);

s32 __dt__9C8015D9A4Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x44) = lbl_802E6E98;
        fn_800E1F04((int)(param_1 + 0x48), (int)(fn_8016F8D0), (int)(0x1c), (int)(8));
        __dt__9C80130DA8Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
