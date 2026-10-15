/* Functions from 0x8014AA0C to 0x8014AA48, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035ACB0;

void fn_8014AA0C(s32 arg0) {
    lbl_8035ACB0 = arg0;
}

void fn_8014AA14(void* arg0, s32 arg1, s16 arg2, s16 arg3, void** arg4) {
    void* temp_r4;

    *(s32*)arg0 = arg1;
    temp_r4 = *arg4;
    if (temp_r4 != NULL) {
        *(void**)((u8*)temp_r4 + 8) = (u8*)arg0 + 4;
    }
    *(void**)((u8*)arg0 + 4) = *arg4;
    *arg4 = arg0;
    *(void**)((u8*)arg0 + 8) = arg4;
    *(s16*)((u8*)arg0 + 0xC) = arg2;
    *(s16*)((u8*)arg0 + 0xE) = arg3;
}

