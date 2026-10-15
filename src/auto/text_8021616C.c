/* Functions from 0x8021616C to 0x80216194, found by decomp-toolkit. */
#include "common.h"

void* fn_8021616C(void* arg0) {
    u32 n = *(u32*)((u8*)arg0 + 0x5C);
    if (n != 0) {
        return (*(void***)((u8*)arg0 + 0x64))[n - 1];
    }
    return NULL;
}
