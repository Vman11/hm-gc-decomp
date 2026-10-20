/* Functions from 0x801E5FE8 to 0x801E5FF0, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_801E5CC4(s32);


asm void fn_801E5FE8(void) {
    nofralloc
    addi r3, r3, -24
    b fn_801E5CC4
}

} /* extern "C" */
