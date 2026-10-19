// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_800F8DD0();
void fn_80108F44();
void fn_80108F90();

void fn_80109344(s32 param_1) {
    if (*(u32 *)(param_1 + 0x14) != 0) {
        fn_80108F44(param_1 + 0x14);
        fn_80108F90(param_1 + 0x14);
        fn_800F8DD0(param_1);
    }
}
