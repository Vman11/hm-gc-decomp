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
void fn_800F7EC0(void *arg0) {
    lbl_80359710++;
    if (lbl_80359710 < 0x10) {
        void **p = lbl_802E1F60;
        p[lbl_80359710] = arg0;
    }
}
#pragma opt_propagation reset
