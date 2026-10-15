/* Functions from 0x8023EC40 to 0x8023EC58, found by decomp-toolkit. */
#include "common.h"

void fn_8023EC40(void *arg1) {
    *(int *)((char *)arg1 + 0x14) = 1;
}

void fn_8023EC4C(u32 unused, void *arg1) {
    *(u32 *)((u8 *)arg1 + 0x14) = 0;
}

