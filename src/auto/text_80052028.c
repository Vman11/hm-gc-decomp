/* Functions from 0x80052028 to 0x800520A4, found by decomp-toolkit. */
#include "common.h"

static s32 sTbl[] = {1, 1, 1, 1, 1, 1, 1};

s32 fn_80052028(void *arg0, s32 idx) {
    void *ptr = *(void **)((u8 *)arg0 + 0x98);
    if (ptr != NULL) {
        return *(s32 *)((*(u32 *)((u8 *)ptr + 0xC)) + idx * 4);
    }
    if (idx > 6) {
        return 1;
    }
    switch (idx) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 1;
    case 3: return 1;
    case 4: return 1;
    case 5: return 1;
    case 6: return 1;
    }
    return 1;
}
