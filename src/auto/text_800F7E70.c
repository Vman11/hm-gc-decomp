/* Functions from 0x800F7E70 to 0x800F7EEC, found by decomp-toolkit. */
#include "common.h"

extern void *lbl_802E1F60[];
extern s32 lbl_80359710;

static inline void SetTop(void *p) {
    lbl_802E1F60[lbl_80359710] = p;
}
void *fn_800F7E70(void) {
    if (lbl_80359710 >= 0) {
        return lbl_802E1F60[lbl_80359710];
    }
    return NULL;
}

void fn_800F7E98(void) {
    ((s32*)lbl_802E1F60)[lbl_80359710] = 0;
    lbl_80359710--;
}

void fn_800F7EC0(void *arg0) {
    if (++lbl_80359710 < 0x10) {
        ((s32*)lbl_802E1F60)[lbl_80359710] = (s32)arg0;
    }
}

