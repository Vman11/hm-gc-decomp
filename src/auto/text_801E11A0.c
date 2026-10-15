/* Functions from 0x801E11A0 to 0x801E11D8, found by decomp-toolkit. */
#include "common.h"

void fn_801E11A0(void* arg0) {
    if (*(u32*)((u8*)arg0 + 0x24) & 2) {
        *(s32*)(*(u8**)((u8*)arg0 + 8) + 0xC8) = 0;
    }
}

void fn_801E11BC(void* arg0) {
    if (*(u32*)((u8*)arg0 + 0x24) & 2) {
        *(s32*)(*(u8**)((u8*)arg0 + 8) + 0xC8) = 1;
    }
}

