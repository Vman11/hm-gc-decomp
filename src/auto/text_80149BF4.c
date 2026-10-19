// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801F2F54();
void fn_801F5F94();

u32 * fn_80149BF4(u32 *param_1) {
    fn_801F5F94(param_1 + 1,1);
    fn_801F2F54(param_1 + 0x28);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x13] = 0;
    param_1[0x24] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x25] = 0;
    param_1[0x24f6] = 0;
    *param_1 = 0;
    return param_1;
}
