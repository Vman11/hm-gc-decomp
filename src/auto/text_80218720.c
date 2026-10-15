/* Functions from 0x80218720 to 0x802194C0, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B228;
void fn_80218750(s32 arg0) {
    lbl_8035B228 = arg0;
}

void fn_802194B8(void *arg0, s32 arg1) { *(s32 *)((char *)arg0 + 0x18) = arg1; }

