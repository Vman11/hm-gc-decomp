// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_80357600[];
void fn_80116794(int, int);
void fn_80116B10(int, int, int);

u32 fn_80242750(u32 param_1, u32 param_2, s32 param_3) {
    u32 local_18 [1];

    fn_80116B10((int)(param_2), (int)(*(u32 *)(param_3 + 4)), (int)(local_18));
    fn_80116794((int)(lbl_80357600), (int)(local_18[0]));
    return *(u32 *)(param_3 + 4);
}

} /* extern "C" */
