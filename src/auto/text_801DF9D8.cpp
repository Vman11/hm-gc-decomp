// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80103870(int, int);
void fn_801EB5F4(void);

void fn_801DF9D8(s32 param_1) {
    fn_801EB5F4();
    fn_80103870((int)(param_1 + 0x34), (int)(*(u32 *)(param_1 + 0x30)));
}

} /* extern "C" */
