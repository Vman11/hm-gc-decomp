/* Functions from 0x8003EFF4 to 0x8003F108, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern void **lbl_8035A0B0;
void __ct__9C8003EFF4Fv(void **arg0) {
    int i;

    lbl_8035A0B0 = arg0;
    for (i = 0; i < 60; i++) {
        arg0[i] = NULL;
    }
}

} /* extern "C" */
