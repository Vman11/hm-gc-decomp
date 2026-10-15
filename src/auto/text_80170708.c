/* Functions from 0x80170708 to 0x80170728, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AD38;
void fn_80170708(s32 arg0) {
    lbl_8035AD38 = arg0;
}

s32 fn_80170710(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x1DC);
}

