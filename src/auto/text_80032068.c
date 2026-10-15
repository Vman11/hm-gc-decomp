/* Functions from 0x80032068 to 0x80032078, found by decomp-toolkit. */
#include "common.h"

s16 fn_80032068(void *arg0) {
    return *(s16 *)((u8 *)arg0 + 0x9A);
}

void fn_80032070(void *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x24) = arg1;
}

