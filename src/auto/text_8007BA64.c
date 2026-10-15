/* Functions from 0x8007BA64 to 0x8007BAA4, found by decomp-toolkit. */
#include "common.h"

s32 fn_8007BA64(void) {
    return 1;
}

s32 fn_8007BA6C(void* arg0, s32 arg1) {
    void* obj = *(void**)((u8*)arg0 + 0x98);
    if (obj != NULL) {
        s32* data = *(s32**)((u8*)obj + 0xC);
        return data[arg1];
    }
    if (arg1 == 0) {
        return 1;
    }
    return 1;
}

