// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8005E77C(void);
void fn_80233030(int, int);

void fn_8005FF48(s32 param_1, u32 param_2) {
    *(u32 *)(param_1 + 0x2d0) = 2;
    *(u32 *)(param_1 + 0x2d4) = 1;
    fn_8005E77C();
    fn_80233030((int)(param_1), (int)(param_2));
}

} /* extern "C" */
