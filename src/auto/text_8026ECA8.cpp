// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F3480[];
extern s32 lbl_8035B7BC;
void __dl__FPv(int);
void __dt__9C800F92E8Fv(int, int);
void __dt__9C8023D2ACFv(int, int);

u32 * fn_8026ECA8(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802F3480;
        lbl_8035B7BC = 0;
        __dt__9C800F92E8Fv((int)(param_1 + 0x65), (int)(0xffffffff));
        __dt__9C8023D2ACFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
