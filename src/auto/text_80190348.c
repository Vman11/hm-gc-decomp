/* Functions from 0x80190348 to 0x80190368, found by decomp-toolkit. */
#include "common.h"

void fn_80190348(void* arg0, void* arg1) {
    u32* a = (u32*)arg0;
    u32* b = (u32*)arg1;
    if (b[20] == (u32)arg0) return;
    b[20] = (u32)arg0;
    b[21] = a[22];
    a[22] = (u32)arg1;
}
