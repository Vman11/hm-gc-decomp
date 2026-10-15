/* Functions from 0x8017F2A8 to 0x8017F2B8, found by decomp-toolkit. */
#include "common.h"

void fn_8017F2A8(void *arg0, void *arg1) {
    *(u32 *)((u8 *)arg1 + 0x10C) = *(u32 *)((u8 *)arg0 + 0x25C);
    *(u32 *)((u8 *)arg0 + 0x25C) = (u32)arg1;
}
