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

/* stack slots and depth accessed as volatile (store kept before the depth reload) */
#define STK ((void * volatile *)lbl_802E1F60)
#define TOP (*(volatile s32 *)&lbl_80359710)

void fn_800F7E98(void) {
    STK[TOP] = NULL;
    TOP--;
}

void fn_800F7EC0(void *h) {
    if (++TOP < 16) {
        STK[TOP] = h;
    }
}
