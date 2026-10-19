// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(int);

u32 * __dt__9C8014AAC8Fv(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        if (param_1[1] != 0) {
            *(u32 *)(param_1[1] + 8) = param_1[2];
        }
        if ((u32 *)param_1[2] != (u32 *)0x0) {
            *(u32 *)param_1[2] = param_1[1];
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *(u16 *)(param_1 + 3) = 0;
        *(u16 *)((s32)param_1 + 0xe) = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
