/* Functions from 0x800FA974 to 0x800FA9B0, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern u8 lbl_802E1FD0[];
void fn_800FA974(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0) = 0;
    *(u32 *)((u8 *)arg0 + 4) = 0;
    *(u32 *)((u8 *)arg0 + 8) = 0;
}

void fn_800FA988(s32* arg0) {
    arg0[3] = (s32)lbl_802E1FD0;
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
}

extern u8 lbl_803636E0;
void *fn_800FA9A8(void) {
    extern u8 lbl_803636E0;
    return &lbl_803636E0;
}

} /* extern "C" */
