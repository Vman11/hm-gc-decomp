/* Functions from 0x800FA974 to 0x800FA9B0, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802E1FD0[];
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

