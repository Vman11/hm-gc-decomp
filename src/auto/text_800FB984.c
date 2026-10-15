/* Functions from 0x800FB984 to 0x800FB9AC, found by decomp-toolkit. */
#include "common.h"

void fn_800FB984(void *arg0, s32 arg1, s8 arg2) {
    (*(u8 **)((u8 *)arg0 + 0x10))[*(s32 *)((u8 *)arg0 + 4) + arg1] = arg2;
}
