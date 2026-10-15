/* Functions from 0x8020B850 to 0x8020B894, found by decomp-toolkit. */
#include "common.h"

void *fn_8020B850(u8 *arg0) {
    u32 flags = *(u32 *)(arg0 + 8);
    u8 result = 0;

    if (!(flags & 8) && (flags & 0x20) && (flags & 2) && (flags & 4)) {
        result = 1;
    }
    if (result != 0) {
        return arg0 + 0x64;
    }
    return NULL;
}
