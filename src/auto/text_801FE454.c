/* Functions from 0x801FE454 to 0x801FE48C, found by decomp-toolkit. */
#include "common.h"
extern s64 lbl_8035B158;

void fn_801FE454(s32 *o, s32 a) {
    o[4]--;
    lbl_8035B158 &= ~(1 << a);
}
