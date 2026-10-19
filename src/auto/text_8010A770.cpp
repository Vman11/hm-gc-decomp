// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(int, int);
void fn_8010C3BC(void);

u32 fn_8010A770(s32 param_1, u32 param_2, u32 param_3) {
    fn_8010C3BC();
    fn_800FB064((int)(param_3), (int)(param_1 + 0xc));
    return 0;
}

} /* extern "C" */
