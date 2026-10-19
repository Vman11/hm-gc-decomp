// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_8025F808(int);

void fn_8025F8A4(s32 param_1) {
    if (*(void **)(param_1 + 0x70) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x70)));
    }
    fn_8025F808((int)(param_1));
}

} /* extern "C" */
