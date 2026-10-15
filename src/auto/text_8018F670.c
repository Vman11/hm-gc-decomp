/* Functions from 0x8018F670 to 0x8018F68C, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8035AE58;

void fn_8018F670(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0) = 0;
    *(u32 *)((u8 *)arg0 + 4) = 0;
    *(u32 *)((u8 *)arg0 + 8) = 0;
}

void fn_8018F684(s32 arg0) {
    lbl_8035AE58 = arg0;
}
