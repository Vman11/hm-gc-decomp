/* Functions from 0x80250E34 to 0x80250E48, found by decomp-toolkit. */
#include "common.h"

extern void *lbl_8035B5C4;

void __ct__9C80250E34Fv(void *arg0) {
    lbl_8035B5C4 = arg0;
    *(s32 *)arg0 = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
}
