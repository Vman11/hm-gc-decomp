// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8021EDC4(int, int);
void fn_8021EFD8(void);
void fn_8021EFE4(int);

void fn_800FBC6C(s32 param_1, u32 param_2) {
    fn_8021EFE4((int)(*(u32 *)(param_1 + 0xc)));
    fn_8021EFD8();
    fn_8021EDC4((int)(*(u32 *)(param_1 + 8)), (int)(param_2));
}

} /* extern "C" */
