/* Functions from 0x801C4EA0 to 0x801C4ED4, found by decomp-toolkit. */
#include "common.h"

void fn_801C4EA0(u8* arg0, f32 arg1) {
    u8* temp_r3 = *(u8**)(arg0 + 0x16C);
    *(f32*)(temp_r3 + 0x1C8) = arg1;
}

void fn_801C4EAC(u8* arg0, f32 arg1) {
    u8* temp_r3 = *(u8**)(arg0 + 0x16C);
    if (temp_r3 != NULL) {
        *(f32*)(temp_r3 + 0x1C4) = arg1;
    }
}

