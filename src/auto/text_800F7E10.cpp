// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 fn_800F75B0[];
extern u8 fn_800F7614[];
void __construct_array(int, int, int, int, int);

u32 * fn_800F7E10(u32 *param_1) {
    __construct_array((int)(param_1 + 3), (int)(fn_800F7614), (int)(fn_800F75B0), (int)(0x28), (int)(0x10));
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[0xa3] = 0;
    return param_1;
}

} /* extern "C" */
