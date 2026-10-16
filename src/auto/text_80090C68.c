/* Functions from 0x80090C68 to 0x80090CEC, found by decomp-toolkit. */
#include "common.h"

int fn_80090C68(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0x98);
    if (p != NULL) {
        return (*(int **)((u8 *)p + 0xC))[arg1];
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 0;
    case 2: return 1;
    case 3: return 0;
    case 4: return 0;
    case 5: return 0;
    case 6: return 0;
    case 7: return 1;
    default: return 1;
    }
}
