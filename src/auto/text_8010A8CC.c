/* Functions from 0x8010A8CC to 0x8010A8E4, found by decomp-toolkit. */
#include "common.h"

s32 fn_8010A8CC(void *arg0, void *arg1) {
    return *(f32 *)((u8 *)arg0 + 12) == *(f32 *)((u8 *)arg1 + 12);
}
