/* Functions from 0x8017025C to 0x8017042C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80364728;
void fn_8017025C(s32 *arg0) {
    arg0[1] |= lbl_80364728;
    arg0[1] &= ~0x1C0;
}
