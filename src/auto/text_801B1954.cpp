// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801B1D54(int, int);
void fn_801DBF24(void);

void fn_801B1954(s32 param_1) {
    fn_801DBF24();
    fn_801B1D54((int)(param_1), (int)(*(u32 *)(param_1 + 0x170)));
}

} /* extern "C" */
