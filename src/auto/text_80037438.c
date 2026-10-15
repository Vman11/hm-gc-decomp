/* Functions from 0x80037438 to 0x80037480, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_8035BE98;
extern u8 lbl_802AFAF0[];

void fn_80037438(u8 *arg0) {
    *(f32 *)(arg0 + 0x16C) = lbl_8035BE98;
    *(f32 *)(arg0 + 0x170) = lbl_8035BE98;
    *(f32 *)(arg0 + 0x174) = lbl_8035BE98;
    *(f32 *)(arg0 + 0x178) = lbl_8035BE98;
    *(f32 *)(arg0 + 0x17C) = lbl_8035BE98;
    *(s32 *)(arg0 + 0x180) = -1;
    *(s32 *)(arg0 + 0x188) = 0;
    *(void **)(arg0 + 0x18C) = lbl_802AFAF0;
}
