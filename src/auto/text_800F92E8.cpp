/* Functions from 0x800F92E8 to 0x800F9324, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern u8 lbl_802E1FA0[];
void __ct__9C800F92E8Fv(void *arg0) {
    *(void **)((char *)arg0 + 0x10) = lbl_802E1FA0;
    *(s32 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
}

void __ct__9C800F930CFv(void *arg0) {
    *(u8 *)((u8 *)arg0 + 0) = 0;
    *(u32 *)((u8 *)arg0 + 8) = 0;
}

extern s32 lbl_8035A9F8;
void fn_800F931C(s32 arg0) {
    lbl_8035A9F8 = arg0;
}

} /* extern "C" */
