/* Functions from 0x800B0F9C to 0x800B1048, found by decomp-toolkit. */
#include "common.h"

s32 fn_800B0F9C(void) {
    return 1;
}

int fn_800B0FA4(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0x98);
    if (p != NULL) {
        return (*(int **)((u8 *)p + 0xC))[arg1];
    }
    switch (arg1) {
    case 0: return 0;
    case 1: return 0;
    case 2: return 0;
    case 3: return 0;
    case 4: return 0;
    case 5: return 0;
    case 6: return 0;
    case 7: return 0;
    case 8: return 0;
    case 9: return 0;
    case 10: return 0;
    case 11: return 0;
    default: return 1;
    }
}

