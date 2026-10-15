/* Functions from 0x80039E80 to 0x80039EA4, found by decomp-toolkit. */
#include "common.h"

void fn_80039E80(void* arg0, s32 arg1, f32 arg2) {
    if (arg1 != 0) {
        *(s32*)((u8*)arg0 + 0x20) = 1;
    } else {
        *(s32*)((u8*)arg0 + 0x20) = -1;
    }
    *(f32*)((u8*)arg0 + 0x24) = arg2;
}
