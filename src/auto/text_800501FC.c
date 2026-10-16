/* Functions from 0x800501FC to 0x80050288, found by decomp-toolkit. */
#include "common.h"

int fn_800501FC(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0x98);
    if (p != NULL) {
        return (*(int **)((u8 *)p + 0xC))[arg1];
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 0;
    case 3: return 0;
    case 4: return 1;
    case 5: return 0;
    case 6: return 0;
    case 7: return 1;
    case 8: return 0;
    default: return 1;
    }
}
