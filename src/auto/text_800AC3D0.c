/* Functions from 0x800AC3D0 to 0x800AC430, found by decomp-toolkit. */
#include "common.h"

s32 fn_800AC3D0(void *arg0, s32 arg1) {
    void *temp = *(void **)((char *)arg0 + 0x98);
    if (temp != NULL) {
        return *(s32 *)((char *)*(void **)((char *)temp + 0xC) + arg1 * 4);
    }
    switch (arg1) {
    case 0: return 0;
    case 1: return 1;
    case 2: return 0;
    default: return 1;
    }
}
