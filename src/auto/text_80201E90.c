/* Functions from 0x80201E90 to 0x80201E9C, found by decomp-toolkit. */
#include "common.h"

void fn_80201E90(void *arg0, void *arg1) {
    *(u32 *)((u8 *)arg0 + 0x18) = *(u32 *)((u8 *)arg1 + 0x8);
}
