/* Functions from 0x80185A54 to 0x80185A78, found by decomp-toolkit. */
#include "common.h"

void* fn_80185A54(void* arg0, s32 arg1) {
    if (*(u32*)((u8*)arg0 + 0x10) != 0) {
        return (*(void***)((u8*)arg0 + 0x18))[arg1];
    }
    return NULL;
}
