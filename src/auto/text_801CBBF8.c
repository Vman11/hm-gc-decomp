/* Functions from 0x801CBBF8 to 0x801CBC24, found by decomp-toolkit. */
#include "common.h"

void fn_801CBBF8(void *arg0, s32 arg1) {
    register u32 oldValue;
    register u32 newValue;
    void *next;
    oldValue = *(u32 *)((char *)arg0 + 0x144);
    newValue = (u32)arg1 << 16;
    *(u32 *)((char *)arg0 + 0x148) = oldValue;
    oldValue = *(u32 *)((char *)arg0 + 0x144);
    newValue |= oldValue & 0xFFFF;
    *(u32 *)((char *)arg0 + 0x144) = newValue;
    next = *(void **)((char *)arg0 + 0x168);
    if (next == NULL) {
        return;
    }
    *(s32 *)((char *)next + 0xC) = arg1;
}
