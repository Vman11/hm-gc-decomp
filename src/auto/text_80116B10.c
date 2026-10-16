/* Functions from 0x80116B10 to 0x80116B64, found by decomp-toolkit. */
#include "common.h"

s32 fn_80116B10(u8* arg0, s32 arg1, u8** arg2) {
    u8* base = *(u8**)arg0;

    if ((arg1 >= *(s32*)(arg0 + 0x14) && arg1 < *(s32*)(arg0 + 0x18)) || arg1 >= *(s32*)(arg0 + 0x1C)) {
        return 5;
    }
    *arg2 = (base + arg1) + *(s32*)(base + 0x10);
    return 0;
}

s32 fn_80116B58(u8* arg0, s32 arg1) {
    *(s32*)(arg0 + 0x5C) = arg1;
    return 0;
}
