/* Functions from 0x8015DED8 to 0x8015DF1C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AD00;
void fn_8015DED8(s32 arg0) {
    lbl_8035AD00 = arg0;
}

s32 fn_8015DEE0(void *arg0, s32 arg1) {
    return *(s32 *)((u8 *)arg0 + 4) + (arg1 << 6);
}

s32 fn_8015DEF0(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 4) != 0;
}

s32 fn_8015DF04(void *arg0, s32 arg1) {
    return *(s32 *)((u8 *)arg0 + 4) + (arg1 << 6);
}

