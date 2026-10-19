// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_800F9654();
void fn_800F994C();
void fn_801124D8();
void fn_801127AC();

void fn_80207388(u32 param_1, u32 param_2, u32 param_3) {
    u8 local_18 [8];

    local_18[0] = 0;
    fn_800F9654(param_1 + 4,local_18);
    fn_801124D8(param_1 + 0x40,local_18);
    if (param_2 != 0) {
        fn_800F994C(param_1 + 0x1c,param_2);
    }
    if (param_3 != 0) {
        fn_801127AC(param_1 + 0x54,param_3);
    }
}
