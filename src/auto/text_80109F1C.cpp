// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB9D4(int, int, int);
void fn_8010C3BC(void);

u32 fn_80109F1C(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    fn_8010C3BC();
    fn_800FB9D4((int)(param_1 + 0xc), (int)(param_3), (int)(param_4));
    *(u32 *)(param_1 + 0x34) = 0;
    return 0;
}

} /* extern "C" */
