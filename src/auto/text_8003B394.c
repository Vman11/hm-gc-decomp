/* Functions from 0x8003B394 to 0x8003B3B0, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035A060;

void __ct__9C8003B394Fv(void *arg0) {
    *(u32 *)((u8 *)arg0 + 12) = 0;
    *(u32 *)((u8 *)arg0 + 24) = 0;
    *(u32 *)((u8 *)arg0 + 20) = 0;
}

void fn_8003B3A8(s32 arg0) {
    lbl_8035A060 = arg0;
}
