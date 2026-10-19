/* Functions from 0x8023D198 to 0x8023D1BC, found by decomp-toolkit. */
#include "common.h"

extern "C" {

s32 fn_8023D198(void *arg0) {
    return *(s32 *)((char *)arg0 + 8);
}

void fn_8023D1A0(void *arg0) {
    *(u32 *)((u8 *)arg0 + 8) = 0;
    *(u32 *)((u8 *)arg0 + 12) = 0;
    *(u32 *)((u8 *)arg0 + 16) = 0;
}

s32 fn_8023D1B4(void) {
    return 0;
}

} /* extern "C" */
