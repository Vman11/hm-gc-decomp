/* Functions from 0x8024D7E4 to 0x8024D814, found by decomp-toolkit. */
#include "common.h"

void fn_8024D7E4(u8 *arg0) {
    s32 i;

    for (i = 0; i < *(u32 *)(arg0 + 0x348); i++) {
        *(s32 *)(*(u32 *)(arg0 + 0x34C) + i * 4) = 0;
    }
}
