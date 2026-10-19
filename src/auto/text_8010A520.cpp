// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_800FB6D8(int);
void fn_800FB9AC(int);
void fn_8010C3AC(int);

void fn_8010A520(s32 param_1) {
    if (*(u32 *)(param_1 + 0xc) != 0) {
        fn_800FB9AC((int)(param_1 + 0xc));
    }
    if (*(u32 *)(param_1 + 0x20) != 0) {
        fn_800FB6D8((int)(param_1 + 0x20));
    }
    if (*(void **)(param_1 + 0x38) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x38)));
    }
    *(u32 *)(param_1 + 0x34) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    fn_8010C3AC((int)(param_1));
}

} /* extern "C" */
