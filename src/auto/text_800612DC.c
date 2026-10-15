/* Functions from 0x800612DC to 0x800612F0, found by decomp-toolkit. */
#include "common.h"

void fn_800612DC(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0x33E0) = (u32)((u8 *)arg0 + 0x354);
    *(u32 *)((u8 *)arg0 + 0x33DC) = *(u32 *)((u8 *)arg0 + 0x350);
}
