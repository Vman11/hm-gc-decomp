/* Functions from 0x8015BA48 to 0x8015BAC4, found by decomp-toolkit. */
#include "common.h"

s32 fn_8015BA48(u32 arg0, u32 arg1, u32 arg2, u32 arg3, void* arg4, u32* arg5) {
    u32 align;
    s32 count = 0;

    if (*(u16*)((u8*)arg4 + 2) == 0x20) {
        align = 4;
    } else if (*(u16*)((u8*)arg4 + 2) == 0x10) {
        align = 4;
    } else if (*(u16*)((u8*)arg4 + 2) == 8) {
        align = 8;
    } else {
        align = 8;
    }

    while (arg3 > arg2) {
        arg5[count] = arg2;
        arg3 -= arg2;
        count++;
    }
    arg5[count] = (align + arg3 - 1) & -align;
    return count + 1;
}
