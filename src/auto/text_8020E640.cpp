/* Functions from 0x8020E640 to 0x8020E6B8, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B1B0;
void fn_8020E640(s32 arg0) {
    lbl_8035B1B0 = arg0;
}

s32 fn_8020E648(u32 *arg0) {
    s32 result = 0;
    if (arg0[3] & 0x20) {
        result = 1;
    }
    if (arg0[0x2A54] & 0x20) {
        result += 1;
    }
    return result;
}

s32 fn_8020E678(u32 *arg0) {
    s32 result = 0;
    if (arg0[3] & 2) {
        result = 1;
    }
    if (arg0[0x2A54] & 2) {
        result += 1;
    }
    return result;
}

s32 fn_8020E6A8(void) {
    return 2;
}

int fn_8020E6B0(void) {
return 1;
}

} /* extern "C" */
