/* Functions from 0x800F7E70 to 0x800F7EEC, found by decomp-toolkit. */
#include "common.h"

extern void *lbl_802E1F60[];
extern s32 lbl_80359710;
void *fn_800F7E70(void) {
    if (lbl_80359710 >= 0) {
        return lbl_802E1F60[lbl_80359710];
    }
    return NULL;
}

#pragma optimization_level 2
void fn_800F7E98(void) {
    lbl_802E1F60[lbl_80359710] = NULL;
    lbl_80359710--;
}
#pragma optimization_level reset
#pragma opt_propagation reset


void fn_800F7EC0(void *h) {
    if (++lbl_80359710 < 16) {
        lbl_802E1F60[lbl_80359710] = h;
    }
}
