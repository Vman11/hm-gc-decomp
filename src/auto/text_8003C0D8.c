/* Functions from 0x8003C0D8 to 0x8003C0EC, found by decomp-toolkit. */
#include "common.h"

void fn_8003C0D8(s32* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    arg0[0x44 / 4] = arg3;
    arg0[0x48 / 4] = arg4;
    arg0[0x4C / 4] = arg5;
    arg0[0] = arg2;
}
