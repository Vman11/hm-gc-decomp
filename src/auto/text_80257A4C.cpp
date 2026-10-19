/* Functions from 0x80257A4C to 0x80257A98, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_80257A4C(u8* arg0, f32* arg1) {
    if (arg1 != NULL) {
        *(f32*)(arg0 + 0xFC) = arg1[0];
        *(f32*)(arg0 + 0x100) = arg1[1];
        *(f32*)(arg0 + 0x104) = arg1[2];
        *(s32*)(arg0 + 0x108) = 1;
    } else {
        *(s32*)(arg0 + 0x108) = 0;
    }
}

void fn_80257A84(u8* arg0, f32 arg1) {
    f32* temp_r3 = *(f32**)(arg0 + 0x120);
    if (temp_r3 != NULL) {
        *temp_r3 = arg1;
    }
}

} /* extern "C" */
