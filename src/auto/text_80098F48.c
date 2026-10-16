/* Functions from 0x80098F48 to 0x8009902C, found by decomp-toolkit. */
#include "common.h"

int fn_80098F48(void *arg0, u32 arg1) {
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
    case 7: return 1;
    case 8: return 1;
    case 9: return 0;
    case 10: return 0;
    case 11: return 0;
    case 12: return 0;
    case 13: return 0;
    case 14: return 1;
    case 15: return 0;
    case 16: return 0;
    case 17: return 0;
    case 18: return 0;
    case 19: return 0;
    default: return 1;
    }
}
