/* Functions from 0x8021C33C to 0x8021C34C, found by decomp-toolkit. */
#include "common.h"

u16 fn_8021C33C(u8 *arg0, s32 arg1) {
    u16 *p = *(u16 **)(arg0 + 0x14);
    return p[arg1];
}
