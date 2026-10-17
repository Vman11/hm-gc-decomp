/* Functions from 0x801FE454 to 0x801FE48C, found by decomp-toolkit. */
#include "common.h"
extern s64 lbl_8035B158;

void fn_801FE454(void *arg0, s32 arg1) {
    (*(s32 *)((u8 *)arg0 + 0x10))--;
    lbl_8035B158 &= ~(1 << arg1);
}
