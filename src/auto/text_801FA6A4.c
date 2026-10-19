// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_800F6E88();
void fn_800F9324();
void fn_800F96F0();

void fn_801FA6A4(s32 param_1, u32 param_2, s8 *param_3, u32 param_4) {
    fn_800F9324(param_1 + 0x84);
    if (*param_3 == '\0') {
        fn_800F6E88(param_4,*(u32 *)(param_1 + 0xa8));
        fn_800F96F0(param_1 + 0x9c,param_4,param_2,param_3);
    }
    else {
        fn_800F6E88(param_4,param_1 + 0x84);
    }
}
