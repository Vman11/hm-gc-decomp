/* Functions from 0x801C4B28 to 0x801C4B5C, found by decomp-toolkit. */
#include "common.h"

void fn_801C4B28(void *arg0, s32 arg1) {
    void *temp_r5;
    void *temp_r3;

    temp_r5 = *(void **)((u8 *)arg0 + 0x164);
    if (temp_r5 != NULL) {
        *(s32 *)((u8 *)temp_r5 + 0x168) = arg1;
    }
    temp_r5 = *(void **)((u8 *)arg0 + 0x168);
    if (temp_r5 != NULL) {
        *(s32 *)((u8 *)temp_r5 + 0x168) = arg1;
    }
    temp_r3 = *(void **)((u8 *)arg0 + 0x16C);
    if (temp_r3 != NULL) {
        *(s32 *)((u8 *)temp_r3 + 0x1E4) = arg1;
    }
}
