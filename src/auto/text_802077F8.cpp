/* Functions from 0x802077F8 to 0x802078EC, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8034E908[];
s32 fn_802077F8(u32 size) {
    s32 n = lbl_8034E908[2];
    u32 count = lbl_8034E908[3];
    s32 addr = 0;
    u32 i;

    for (i = 0; i < count; i++) {
        if ((u32)lbl_8034E908[0x1805 + i] >= size) {
            addr = lbl_8034E908[0x1004 + i];
            lbl_8034E908[0x1004 + i] = addr + size;
            lbl_8034E908[0x1805 + i] -= size;
            if ((u32)lbl_8034E908[0x1805 + i] == 0) {
                lbl_8034E908[0x1004 + i] = lbl_8034E908[0x1003 + count];
                lbl_8034E908[0x1805 + i] = lbl_8034E908[0x1804 + count];
                lbl_8034E908[3]--;
            }
            break;
        }
    }
    lbl_8034E908[0x804 + n] = size;
    lbl_8034E908[4 + n] = addr;
    lbl_8034E908[2]++;
    return addr;
}

s32 fn_802078CC(void) {
    return 0x01000000 - lbl_8034E908[1];
}

s32 fn_802078E4(void) {
    return 0x7E000000;
}

} /* extern "C" */
