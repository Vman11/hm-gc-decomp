// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_800FBCB8(int);
void fn_800FC150(int);
void fn_8013E8C0(int);

void fn_80131ED4(s32 param_1) {
    if (*(void **)(param_1 + 0x10) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x10)));
        *(u32 *)(param_1 + 0x10) = 0;
    }
    fn_8013E8C0((int)(param_1 + 0x1c));
    fn_800FBCB8((int)(param_1 + 0x24));
    fn_800FC150((int)(param_1));
}

} /* extern "C" */
