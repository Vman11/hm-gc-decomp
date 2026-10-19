// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_801C05EC(int, int, int);
void fn_801DBE0C(void);

u32 fn_801B2804(s32 param_1, u32 param_2) {
    u32 uVar1;

    fn_801DBE0C();
    if (*(u32 *)(param_1 + 0x194) != 0) {
        uVar1 = fn_801C05EC((int)(param_1), (int)(param_2), (int)(*(u32 *)(param_1 + 0x194)));
        *(u32 *)(param_1 + 0x194) = uVar1;
    }
    return 0;
}

} /* extern "C" */
