/* Functions from 0x8015BA48 to 0x8015BAC4, found by decomp-toolkit. */
#include "common.h"

#pragma optimization_level 2
s32 fn_8015BA48(u32 arg0, u32 arg1, u32 arg2, u32 arg3, void* arg4, u32* arg5) {
    u32 align;
    s32 count = 0;
    
    u16 format = *(u16*)((u8*)arg4 + 2);
    arg4 = 0;
    if (format == 0x20) align = 4;
    else if (format == 0x10) align = 4;
    else if (format == 8) align = 8;
    else align = 8;
    while (arg3 > arg2) {
        *(u32*)((u8*)arg5 + (u32)arg4) = arg2;
        arg3 -= arg2;
        count++;
        arg4 = (u8*)arg4 + 4;
    }
    arg1 = align + arg3;
    arg5[count++] = -align & (arg1 - 1);
    return count;
}
#pragma optimization_level reset
