// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(void *);

u32 * __dt__26__partial_array_destructorFv(u32 *param_1, s16 param_2) {
    u32 iVar1;

    if (param_1 != (u32 *)0x0) {
        if (((u32)param_1[4] < (u32)param_1[2]) && (param_1[3] != 0)) {
            iVar1 = *param_1 + param_1[1] * param_1[4];
            while (param_1[4] != 0) {
                iVar1 = iVar1 - param_1[1];
                ((void (*)(int, int))param_1[3])(iVar1,0xffffffff);
                param_1[4] = param_1[4] + -1;
            }
        }
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
