/* Functions from 0x801FE500 to 0x801FE510, found by decomp-toolkit. */
#include "common.h"

s32 fn_801FE500(void *arg0) {
    return *(s32 *)((char *)arg0 + 8);
}

void fn_801FE508(void *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 8) = arg1;
}
