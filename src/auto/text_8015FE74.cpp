/* Functions from 0x8015FE74 to 0x8015FEA4, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void* fn_8015FE74(void* arg0, s32 arg1) {
    return *(u8**)((u8*)arg0 + 0x34) + arg1 * 0x70;
}

void* fn_8015FE84(void* arg0, s32 arg1) {
    return *(u8**)((u8*)arg0 + 0x30) + arg1 * 0x1C;
}

void* fn_8015FE94(void* arg0, s32 arg1) {
    return *(u8**)((u8*)arg0 + 0x2C) + arg1 * 0x68;
}

} /* extern "C" */
