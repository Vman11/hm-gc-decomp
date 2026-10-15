/* Functions from 0x8016BAA0 to 0x8016BAC8, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_803646F8;
void fn_8016BAA0(void *arg0, f32 *arg1) {
    arg1[0] = lbl_803646F8;
    arg1[1] = lbl_803646F8;
}

s32 fn_8016BAB4(void *arg0) {
    return *(s32 *)((char *)arg0 + 8);
}

s32 fn_8016BABC(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}

void fn_8016BAC4(void) {

}
