/* Functions from 0x80202B48 to 0x80203040, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80365730;
extern f32 lbl_80365734;
void fn_80202B58(u8* arg0) {
    arg0[0x1C] |= 1;
}

s32 fn_80202B68(u8* arg0) {
    u8 flags = arg0[0x1C];
    if ((flags & 2) || flags != 0) {
        return 1;
    }
    return 0;
}

