/* Functions from 0x801FDE2C to 0x801FDE74, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B148;
void fn_801FDE2C(s32 arg0) {
    lbl_8035B148 = arg0;
}

s32 fn_801FDE34(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x34) + (arg1 * 0x38);
}

s32 fn_801FDE44(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x30) + (arg1 * 0x2C);
}

s32 fn_801FDE54(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x2C) + (arg1 * 0x24);
}

s32 fn_801FDE64(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x28) + (arg1 * 0x24);
}

} /* extern "C" */
