/* Functions from 0x80138E50 to 0x80138E60, found by decomp-toolkit. */
#include "common.h"
extern u8* lbl_8035AC5C;

void fn_80138E50(u8* arg0) {
    *(s32*)(lbl_8035AC5C + 0x88) = *(s32*)(arg0 + 0x90);
}
