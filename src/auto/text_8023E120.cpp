/* Functions from 0x8023E120 to 0x8023E138, found by decomp-toolkit. */
#include "common.h"

extern "C" {

s32 fn_8023E120(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x1E4);
}

u16 fn_8023E128(void *arg0) {
    return *(u16 *)((u8 *)arg0 + 0x3C);
}

u16 fn_8023E130(void *arg0) {
    return *(u16 *)((u8 *)arg0 + 0x40);
}

} /* extern "C" */
