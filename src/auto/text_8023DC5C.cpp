// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F6FBC(int, int);
void fn_8023BC68(int);

u32 * fn_8023DC5C(u32 *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5) {
    fn_800F6FBC((int)(param_2), (int)(param_1 + 1));
    fn_800F6FBC((int)(param_3), (int)(param_1 + 3));
    *param_1 = param_4;
    param_1[7] = param_5;
    fn_8023BC68((int)(param_1));
    param_1[6] = 0;
    return param_1;
}

} /* extern "C" */
