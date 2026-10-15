/* Functions from 0x80047CD0 to 0x80047D30, found by decomp-toolkit. */
#include "common.h"

s32 fn_80047CD0(void* arg0, s32 arg1) {
    s32** p = *(s32***)((u8*)arg0 + 0x98);
    if (p != NULL) {
        return p[3][arg1];
    }
    switch (arg1) {
    case 0:
        return 1;
    case 1:
        return 0;
    case 2:
        return 0;
    default:
        return 1;
    }
}
