// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80249A18(void);

void fn_80241DD0(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6) {
    if (*(s32 *)(param_1 + 0xb8) != 0) {
        *(u32 *)(param_1 + 0xe4) = param_3;
        *(u32 *)(param_1 + 0xe8) = param_4;
        *(u32 *)(param_1 + 0xec) = param_5;
        *(u32 *)(param_1 + 0xf0) = param_6;
        fn_80249A18();
    }
}

} /* extern "C" */
