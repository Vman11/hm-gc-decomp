/* Functions from 0x80243FC8 to 0x80243FD8, found by decomp-toolkit. */
#include "common.h"

void *fn_80243FC8(void *arg0, s32 arg1) {
    return *(u8 **)((u8 *)arg0 + 0x18) + arg1 * 0x2C;
}
