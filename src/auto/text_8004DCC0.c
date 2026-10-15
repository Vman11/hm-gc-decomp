/* Functions from 0x8004DCC0 to 0x8004DD3C, found by decomp-toolkit. */
#include "common.h"

s32 fn_8004DCC0(void* p, u32 index) {
    void* obj = *(void**)((u8*)p + 0x98);
    if (obj != NULL) {
        return ((s32*)*(void**)((u8*)obj + 0x0C))[index];
    }
    switch (index) {
    case 0:
    case 1:
        return 1;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        return 0;
    default:
        return (s32)p;
    }
}
