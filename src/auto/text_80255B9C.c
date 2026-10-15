/* Functions from 0x80255B9C to 0x80255BD4, found by decomp-toolkit. */
#include "common.h"

void fn_80255B9C(u8 *arg0, f32 *arg1) {
    if (arg1 != NULL) {
        *(f32 *)(arg0 + 0xB0) = arg1[0];
        *(f32 *)(arg0 + 0xB4) = arg1[1];
        *(f32 *)(arg0 + 0xB8) = arg1[2];
        *(s32 *)(arg0 + 0xBC) = 1;
    } else {
        *(s32 *)(arg0 + 0xBC) = 0;
    }
}
