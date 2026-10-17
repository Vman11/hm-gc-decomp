/* Functions from 0x801CBBF8 to 0x801CBC24, found by decomp-toolkit. */
#include "common.h"

void fn_801CBBF8(void *arg0, s32 arg1) {
    void *next;
    *(u32 *)((char *)arg0 + 0x148) = *(u32 *)((char *)arg0 + 0x144);
    *(u32 *)((char *)arg0 + 0x144) = (*(u32 *)((char *)arg0 + 0x144) & 0xFFFF) | ((u16)arg1 << 16);
    next = *(void **)((char *)arg0 + 0x168);
    if (next != NULL) {
        *(s32 *)((char *)next + 0xC) = arg1;
    }
}
