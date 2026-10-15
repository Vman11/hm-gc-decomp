/* Functions from 0x8019626C to 0x8019628C, found by decomp-toolkit. */
#include "common.h"

void fn_8019626C(u8 *arg0) {
    *(s32 *)(arg0 + 0x0C) = *(s32 *)(arg0 + 0x14) - 1;
    *(s32 *)(arg0 + 0x10) = *(s32 *)(arg0 + 0x0C);
    *(s32 *)(arg0 + 0x18) = 0;
}
