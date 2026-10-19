// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F8410(void);
void fn_801124C0(int);

void fn_80112510(s32 param_1, s32 param_2) {
    fn_800F8410();
    fn_801124C0((int)(param_2));
    *(u32 *)(param_2 + 0xc) = *(u32 *)(param_1 + 0x1c);
    *(s32 *)(param_1 + 0x1c) = param_2;
}

} /* extern "C" */
