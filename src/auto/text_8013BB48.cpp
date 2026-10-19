/* Functions from 0x8013BB48 to 0x8013BBCC, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_8013BB48(void *arg0, void *arg1, s32 *arg2) {
    u32 i;
    for (i = 0; i < 16; i++) {
        arg2[i] = i;
    }
}

} /* extern "C" */
