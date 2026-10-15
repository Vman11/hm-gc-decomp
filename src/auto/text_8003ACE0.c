/* Functions from 0x8003ACE0 to 0x8003AD00, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8035A050;
extern void *lbl_8035A054;

void fn_8003ACE0(void *arg0) {
    lbl_8035A054 = arg0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
}

void fn_8003ACF8(s32 arg0) {
    lbl_8035A050 = arg0;
}
