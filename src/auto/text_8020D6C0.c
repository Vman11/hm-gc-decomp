/* Functions from 0x8020D6C0 to 0x8020D6DC, found by decomp-toolkit. */
#include "common.h"

u8* fn_8020D6C0(u8* arg0) {
    if (*(s32*)(arg0 + 0x87C) != 0) {
        return arg0 + 0x6C0;
    }
    return NULL;
}
