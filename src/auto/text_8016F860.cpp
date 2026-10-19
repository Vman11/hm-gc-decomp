// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80175748Fv[];
void fn_800E1E88(int, int);

void fn_8016F860(u16 *param_1) {
    if (*(u32 *)(param_1 + 2) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 2)), (int)(__dt__9C80175748Fv));
    }
    *param_1 = 0;
    *(u32 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 1;
    param_1[0xb] = 1;
    param_1[0xc] = 0;
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 6) = 0;
}

} /* extern "C" */
