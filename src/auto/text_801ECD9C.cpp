/* Functions from 0x801ECD9C to 0x801ECDF0, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B0B0;
void fn_801ECD9C(s32 arg0) {
    lbl_8035B0B0 = arg0;
}

void fn_801ECDA4(void *arg0) {
    void *temp_r3;
    if (*(u32 *)((char *)arg0 + 0x24) & 2) {
        temp_r3 = *(void **)((char *)arg0 + 0x28);
        *(u32 *)((char *)temp_r3 + 4) &= ~1U;
    }
}

void fn_801ECDC4(void *arg0) {
    void *temp_r3;
    if (*(u32 *)((char *)arg0 + 0x24) & 2) {
        temp_r3 = *(void **)((char *)arg0 + 0x28);
        *(u32 *)((char *)temp_r3 + 4) |= 1;
        *(u32 *)((char *)temp_r3 + 4) &= ~4U;
    }
}

} /* extern "C" */
