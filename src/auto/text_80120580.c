/* Functions from 0x80120580 to 0x80120598, found by decomp-toolkit. */
#include "common.h"

void* fn_80120580(void* arg0) {
    u32 value = ((u32*)arg0)[0x38 / 4] * 3;
    u32 result = ((u32*)arg0)[0x544 / 4];
    result = value + result;
    result += 0x10;
    return (void*)result;
}
