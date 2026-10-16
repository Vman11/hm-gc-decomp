/* Functions from 0x8003EFF4 to 0x8003F108, found by decomp-toolkit. */
#include "common.h"

extern void **lbl_8035A0B0;
void fn_8003EFF4(void **arg0) {
    int i;

    lbl_8035A0B0 = arg0;
    for (i = 0; i < 60; i++) {
        arg0[i] = NULL;
    }
}
