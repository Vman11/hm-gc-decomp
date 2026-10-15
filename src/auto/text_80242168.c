/* Functions from 0x80242168 to 0x80242174, found by decomp-toolkit. */
#include "common.h"

void fn_80242168(void* arg0, f32 value) {
    *(f32*)(*(u8**)((u8*)arg0 + 0xE0) + 0x1A0) = value;
}
