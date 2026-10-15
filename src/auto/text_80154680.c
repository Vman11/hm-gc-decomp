/* Functions from 0x80154680 to 0x801546A4, found by decomp-toolkit. */
#include "common.h"

void *fn_80154680(u8 *arg0) {
    if (*(u16 *)arg0 & 4) {
        return arg0 + 0x24;
    }
    return NULL;
}

s32 fn_8015469C(void) {
    return 0;
}
