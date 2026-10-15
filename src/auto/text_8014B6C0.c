/* Functions from 0x8014B6C0 to 0x8014B6F0, found by decomp-toolkit. */
#include "common.h"

extern char lbl_803644D0;

void fn_8014B6C0(void *arg0) {
    *(s32 *)arg0 = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(u16 *)((u8 *)arg0 + 12) = 0;
    *(u16 *)((u8 *)arg0 + 14) = 0;
    *((u8 *)arg0 + 4) = 0;
    *((u8 *)arg0 + 5) = 0;
    *((u8 *)arg0 + 6) = 0;
    *((u8 *)arg0 + 7) = 0;
}

char *fn_8014B6E8(void) {
    return &lbl_803644D0;
}
