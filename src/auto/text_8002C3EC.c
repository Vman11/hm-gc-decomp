/* Functions from 0x8002C3EC to 0x8002C414, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_8035B99C;

void fn_8002C3EC(u8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *(s32 *)(arg0 + 0x284) = (u8)(*(s32 *)(arg0 + 0x284) == 0);
    }
}

void fn_8002C408(u8 *arg0) {
    *(f32 *)(arg0 + 0x260) = lbl_8035B99C;
}

